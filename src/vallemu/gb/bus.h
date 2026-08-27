#pragma once
#include <cstddef>
#include <cstdint>
#include <limits>
#include <span>

namespace vallemu::gb {

using Address = uint16_t;
constexpr auto bus_width = std::numeric_limits<Address>::max();

struct Bus {
  virtual ~Bus() = default;

  [[nodiscard]] virtual auto read(Address address) const -> std::byte = 0;

  virtual auto write(Address address, std::byte value) -> void = 0;
};

struct SimpleBus : Bus {
  ~SimpleBus() override = default;

  [[nodiscard]] auto read(Address address) const -> std::byte override;

  auto write(Address address, std::byte byte) -> void override;

private:
  std::array<std::byte, bus_width> memory_{};
};

}  // namespace vallemu::gb
