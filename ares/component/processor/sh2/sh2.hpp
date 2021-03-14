#pragma once

//Hitachi SH-2

namespace ares {

struct SH2 {
  virtual auto exception() -> bool = 0;
  virtual auto step(u32 clocks) -> void = 0;
  virtual auto readByte(u32 address) -> u32 = 0;
  virtual auto readWord(u32 address) -> u32 = 0;
  virtual auto readLong(u32 address) -> u32 = 0;
  virtual auto writeByte(u32 address, u32 data) -> void = 0;
  virtual auto writeWord(u32 address, u32 data) -> void = 0;
  virtual auto writeLong(u32 address, u32 data) -> void = 0;

  //sh2.cpp
  auto power() -> void;

  //serialization.cpp
  auto serialize(serializer&) -> void;

  //instruction.cpp
  auto instruction() -> void;
  auto execute(u16 opcode) -> void;

  //instructions.cpp
  inline auto ADD(u32 m, u32 n) -> void;
  inline auto ADDC(u32 m, u32 n) -> void;
  inline auto ADDI(u32 i, u32 n) -> void;
  inline auto ADDV(u32 m, u32 n) -> void;
  inline auto AND(u32 m, u32 n) -> void;
  inline auto ANDI(u32 i) -> void;
  inline auto ANDM(u32 i) -> void;
  inline auto BF(u32 d) -> void;
  inline auto BFS(u32 d) -> void;
  inline auto BRA(u32 d) -> void;
  inline auto BRAF(u32 m) -> void;
  inline auto BSR(u32 d) -> void;
  inline auto BSRF(u32 m) -> void;
  inline auto BT(u32 d) -> void;
  inline auto BTS(u32 d) -> void;
  inline auto CLRMAC() -> void;
  inline auto CLRT() -> void;
  inline auto CMPEQ(u32 m, u32 n) -> void;
  inline auto CMPGE(u32 m, u32 n) -> void;
  inline auto CMPGT(u32 m, u32 n) -> void;
  inline auto CMPHI(u32 m, u32 n) -> void;
  inline auto CMPHS(u32 m, u32 n) -> void;
  inline auto CMPIM(u32 i) -> void;
  inline auto CMPPL(u32 n) -> void;
  inline auto CMPPZ(u32 n) -> void;
  inline auto CMPSTR(u32 m, u32 n) -> void;
  inline auto DIV0S(u32 m, u32 n) -> void;
  inline auto DIV0U() -> void;
  inline auto DIV1(u32 m, u32 n) -> void;
  inline auto DMULS(u32 m, u32 n) -> void;
  inline auto DMULU(u32 m, u32 n) -> void;
  inline auto DT(u32 n) -> void;
  inline auto EXTSB(u32 m, u32 n) -> void;
  inline auto EXTSW(u32 m, u32 n) -> void;
  inline auto EXTUB(u32 m, u32 n) -> void;
  inline auto EXTUW(u32 m, u32 n) -> void;
  inline auto JMP(u32 m) -> void;
  inline auto JSR(u32 m) -> void;
  inline auto LDCSR(u32 m) -> void;
  inline auto LDCGBR(u32 m) -> void;
  inline auto LDCVBR(u32 m) -> void;
  inline auto LDCMSR(u32 m) -> void;
  inline auto LDCMGBR(u32 m) -> void;
  inline auto LDCMVBR(u32 m) -> void;
  inline auto LDSMACH(u32 m) -> void;
  inline auto LDSMACL(u32 m) -> void;
  inline auto LDSPR(u32 m) -> void;
  inline auto LDSMMACH(u32 m) -> void;
  inline auto LDSMMACL(u32 m) -> void;
  inline auto LDSMPR(u32 m) -> void;
  inline auto MACL_(u32 m, u32 n) -> void;
  inline auto MACW(u32 m, u32 n) -> void;
  inline auto MOV(u32 m, u32 n) -> void;
  inline auto MOVBL(u32 m, u32 n) -> void;
  inline auto MOVBL0(u32 m, u32 n) -> void;
  inline auto MOVBL4(u32 m, u32 d) -> void;
  inline auto MOVBLG(u32 d) -> void;
  inline auto MOVBM(u32 m, u32 n) -> void;
  inline auto MOVBP(u32 m, u32 n) -> void;
  inline auto MOVBS(u32 m, u32 n) -> void;
  inline auto MOVBS0(u32 m, u32 n) -> void;
  inline auto MOVBS4(u32 d, u32 n) -> void;
  inline auto MOVBSG(u32 d) -> void;
  inline auto MOVWL(u32 m, u32 n) -> void;
  inline auto MOVWL0(u32 m, u32 n) -> void;
  inline auto MOVWL4(u32 m, u32 d) -> void;
  inline auto MOVWLG(u32 d) -> void;
  inline auto MOVWM(u32 m, u32 n) -> void;
  inline auto MOVWP(u32 m, u32 n) -> void;
  inline auto MOVWS(u32 m, u32 n) -> void;
  inline auto MOVWS0(u32 m, u32 n) -> void;
  inline auto MOVWS4(u32 d, u32 n) -> void;
  inline auto MOVWSG(u32 d) -> void;
  inline auto MOVLL(u32 m, u32 n) -> void;
  inline auto MOVLL0(u32 m, u32 n) -> void;
  inline auto MOVLL4(u32 m, u32 d, u32 n) -> void;
  inline auto MOVLLG(u32 d) -> void;
  inline auto MOVLM(u32 m, u32 n) -> void;
  inline auto MOVLP(u32 m, u32 n) -> void;
  inline auto MOVLS(u32 m, u32 n) -> void;
  inline auto MOVLS0(u32 m, u32 n) -> void;
  inline auto MOVLS4(u32 m, u32 d, u32 n) -> void;
  inline auto MOVLSG(u32 d) -> void;
  inline auto MOVI(u32 i, u32 n) -> void;
  inline auto MOVWI(u32 d, u32 n) -> void;
  inline auto MOVLI(u32 d, u32 n) -> void;
  inline auto MOVA(u32 d) -> void;
  inline auto MOVT(u32 n) -> void;
  inline auto MULL(u32 m, u32 n) -> void;
  inline auto MULS(u32 m, u32 n) -> void;
  inline auto MULU(u32 m, u32 n) -> void;
  inline auto NEG(u32 m, u32 n) -> void;
  inline auto NEGC(u32 m, u32 n) -> void;
  inline auto NOP() -> void;
  inline auto NOT(u32 m, u32 n) -> void;
  inline auto OR(u32 m, u32 n) -> void;
  inline auto ORI(u32 i) -> void;
  inline auto ORM(u32 i) -> void;
  inline auto ROTCL(u32 n) -> void;
  inline auto ROTCR(u32 n) -> void;
  inline auto ROTL(u32 n) -> void;
  inline auto ROTR(u32 n) -> void;
  inline auto RTE() -> void;
  inline auto RTS() -> void;
  inline auto SETT() -> void;
  inline auto SHAL(u32 n) -> void;
  inline auto SHAR(u32 n) -> void;
  inline auto SHLL(u32 n) -> void;
  inline auto SHLL2(u32 n) -> void;
  inline auto SHLL8(u32 n) -> void;
  inline auto SHLL16(u32 n) -> void;
  inline auto SHLR(u32 n) -> void;
  inline auto SHLR2(u32 n) -> void;
  inline auto SHLR8(u32 n) -> void;
  inline auto SHLR16(u32 n) -> void;
  inline auto SLEEP() -> void;
  inline auto STCSR(u32 n) -> void;
  inline auto STCGBR(u32 n) -> void;
  inline auto STCVBR(u32 n) -> void;
  inline auto STCMSR(u32 n) -> void;
  inline auto STCMGBR(u32 n) -> void;
  inline auto STCMVBR(u32 n) -> void;
  inline auto STSMACH(u32 n) -> void;
  inline auto STSMACL(u32 n) -> void;
  inline auto STSPR(u32 n) -> void;
  inline auto STSMMACH(u32 n) -> void;
  inline auto STSMMACL(u32 n) -> void;
  inline auto STSMPR(u32 n) -> void;
  inline auto SUB(u32 m, u32 n) -> void;
  inline auto SUBC(u32 m, u32 n) -> void;
  inline auto SUBV(u32 m, u32 n) -> void;
  inline auto SWAPB(u32 m, u32 n) -> void;
  inline auto SWAPW(u32 m, u32 n) -> void;
  inline auto TAS(u32 n) -> void;
  inline auto TRAPA(u32 i) -> void;
  inline auto TST(u32 m, u32 n) -> void;
  inline auto TSTI(u32 i) -> void;
  inline auto TSTM(u32 i) -> void;
  inline auto XOR(u32 m, u32 n) -> void;
  inline auto XORI(u32 i) -> void;
  inline auto XORM(u32 i) -> void;
  inline auto XTRCT(u32 m, u32 n) -> void;

  //disassembler.cpp
  auto disassembleInstruction() -> string;
  auto disassembleContext() -> string;

  struct Branch {
    enum : u32 { Step, Take, DelaySlot };

    auto inDelaySlot() const -> bool { return state == DelaySlot; }
    auto reset() -> void { state = Step; }
    auto take(u32 address) -> void { state = Take; pc = address; }
    auto delaySlot() -> void { state = DelaySlot; }

    u32 pc = 0;
    u32 state = Step;
  } branch;

  struct S32 {
    operator u32() const {
      return T << 0 | S << 1 | I << 4 | Q << 8 | M << 9;
    }

    auto& operator=(u32 d) {
      T = d >> 0 & 1;
      S = d >> 1 & 1;
      I = d >> 4 & 15;
      Q = d >> 8 & 1;
      M = d >> 9 & 1;
      return *this;
    }

    n1 T;
    n1 S;
    n4 I;
    n1 Q;
    n1 M;
  };

  u32 R[16];  //general purpose registers
  S32 SR;     //status register
  u32 GBR;    //global base register
  u32 VBR;    //vector base register
  u32 MACH;   //multiply-and-accumulate hi
  u32 MACL;   //multiply-and-accumulate lo
  u32 PR;     //procedure register
  u32 PC;     //program counter
};

}
