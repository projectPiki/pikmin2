JAUDIO_JAS_FILES:=\
	$(BUILD_DIR)/asm/JSystem/JAudio/JAS/JASWSParser.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAS/JASBankMgr.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAS/JASBasicBank.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAS/JASBasicInst.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAS/JASBasicWaveBank.o\
	$(BUILD_DIR)/asm/JSystem/JAudio/JAS/JASBNKParser.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAS/JASDrumSet.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAS/JASInstEffect.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAS/JASInstRand.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAS/JASInstSense.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAS/JASSimpleWaveBank.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAS/JASWaveArcLoader.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAS/JASWaveBank.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAS/JASWaveBankMgr.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAS/JASBank.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAS/JASTrackPort.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAS/JASOuterParam.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAS/JASPlayer_impl.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAS/JASRegisterParam.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAS/JASSeqCtrl.o\
	$(BUILD_DIR)/asm/JSystem/JAudio/JAS/JASSeqParser.o\
	$(BUILD_DIR)/asm/JSystem/JAudio/JAS/JASTrack.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAS/JASTrackInterrupt.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAS/JASOscillator.o\
	$(BUILD_DIR)/asm/JSystem/JAudio/JAS/JASChannel.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAS/JASDriverIF.o\
	$(BUILD_DIR)/asm/JSystem/JAudio/JAS/JASDSPChannel.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAS/JASDSPInterface.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAS/JASAudioThread.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAS/JASCalc.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAS/JASCallback.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAS/JASCmdStack.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAS/JASDvdThread.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAS/JASHeapCtrl.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAS/JASProbe.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAS/JASResArcLoader.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAS/JASReport.o\
	$(BUILD_DIR)/asm/JSystem/JAudio/JAS/JASAiCtrl.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAS/JASChannelUpdater.o\
	$(BUILD_DIR)/asm/JSystem/JAudio/JAS/JASTaskThread.o\
	$(BUILD_DIR)/asm/JSystem/JAudio/JAS/JASAramStream.o\

DEPENDS += $(JAUDIO_JAS_FILES:.o=.d)

$(BUILD_DIR)/src/JSystem/JAudio/JAS/JAS.a: $(JAUDIO_JAS_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(JAUDIO_JAS_FILES) > build/JAUDIO_JAS_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/JAUDIO_JAS_ofiles
