JAUDIO2_JAS_FILES:=\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASWSParser.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASBankMgr.o\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAS/JASBasicBank.o\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAS/JASBasicInst.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASBasicWaveBank.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASBNKParser.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASDrumSet.o\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAS/JASInstEffect.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASInstRand.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASInstSense.o\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAS/JASSimpleWaveBank.o\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAS/JASWaveArcLoader.o\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAS/JASWaveBank.o\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAS/JASWaveBankMgr.o\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAS/JASBank.o\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAS/JASTrackPort.o\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAS/JASOuterParam.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASPlayer_impl.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASRegisterParam.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASSeqCtrl.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASSeqParser.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASTrack.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASTrackInterrupt.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASOscillator.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASChannel.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASDriverIF.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASDSPChannel.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASDSPInterface.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASAudioThread.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASCalc.o\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAS/JASCallback.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASCmdStack.o\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAS/JASDvdThread.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASHeapCtrl.o\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAS/JASProbe.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASResArcLoader.o\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAS/JASReport.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASAiCtrl.o\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAS/JASChannelUpdater.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASTaskThread.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASAramStream.o\

DEPENDS += $(JAUDIO2_JAS_FILES:.o=.d)

$(BUILD_DIR)/src/JSystem/JAudio2/JAS/JAS.a: $(JAUDIO2_JAS_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(JAUDIO2_JAS_FILES) > build/JAUDIO2_JAS_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/JAUDIO2_JAS_ofiles
