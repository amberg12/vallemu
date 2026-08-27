#include "bus.h"

namespace vallemu::gb {

auto SimpleBus::read(Address address) const -> std::byte {
  return memory_[address];
}

auto SimpleBus::write(Address address, std::byte byte) -> void {
  memory_[address] = byte;
}
}  // namespace vallemu::gb
