auto RSP::instructionMFC0(r32& rt, u8 rd) -> void {
  if((rd & 8) == 0) rt.u32 = rsp.readWord((rd & 7) << 2);
  if((rd & 8) != 0) rt.u32 = rdp.readWord((rd & 7) << 2);
}

auto RSP::instructionMTC0(cr32& rt, u8 rd) -> void {
  if((rd & 8) == 0) rsp.writeWord((rd & 7) << 2, rt.u32);
  if((rd & 8) != 0) rdp.writeWord((rd & 7) << 2, rt.u32);
}