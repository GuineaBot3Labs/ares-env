auto Peripheral::serialize(serializer& s) -> void {
  Thread::serialize(s);

  s(io.receiveData);
  s(io.receiveSize);
  s(io.transmitData);
  s(io.transmitStarted);
  s(io.transmitFinished);
  s(io.parityError);
  s(io.interruptRequest);
  s(io.acknowledgeAsserted);
  s(io.baudrateReloadFactor);
  s(io.characterLength);
  s(io.parityEnable);
  s(io.parityType);
  s(io.unknownMode_6_7);
  s(io.clockOutputPolarity);
  s(io.unknownMode_9_15);
  s(io.transmitEnable);
  s(io.joyOutput);
  s(io.receiveEnable);
  s(io.unknownCtrl_3);
  s(io.acknowledge);
  s(io.unknownCtrl_5);
  s(io.reset);
  s(io.unknownCtrl_7);
  s(io.receiveInterruptMode);
  s(io.transmitInterruptEnable);
  s(io.receiveInterruptEnable);
  s(io.acknowledgeInterruptEnable);
  s(io.slotNumber);
  s(io.unknownCtrl_14_15);
  s(io.baudrateReloadValue);
  s(io.counter);
}
