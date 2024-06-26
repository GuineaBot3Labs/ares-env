auto CPU::serialize(serializer& s) -> void {
  Z80::serialize(s);
  Thread::serialize(s);
  s(ram);
  s(state.nmiPending);
  s(state.nmiLine);
  s(state.irqLine);
}
