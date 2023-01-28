JAUDIO2_JAI_FILES:=\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAI/JAIAnimation.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAI/JAIBankWave.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAI/JAIBasic.o\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAI/JAIConst.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAI/JAIDummyObject.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAI/JAIFx.o\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAI/JAIGlobalParameter.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAI/JAIInitData.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAI/JAISeMgr.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAI/JAISequenceHeap.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAI/JAISequenceMgr.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAI/JAISound.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAI/JAISoundTable.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAI/JAIStreamMgr.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAI/JAISystemInterface.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAI/JAIObject.o\

DEPENDS += $(JAUDIO2_JAI_FILES:.o=.d)

$(BUILD_DIR)/src/JSystem/JAudio2/JAI.a: $(JAUDIO2_JAI_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(JAUDIO2_JAI_FILES) > build/JAUDIO2_JAI_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/JAUDIO2_JAI_ofiles
