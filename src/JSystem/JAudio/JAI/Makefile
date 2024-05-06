JAUDIO_JAI_FILES:=\
	$(BUILD_DIR)/asm/JSystem/JAudio/JAI/JAIAnimation.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAI/JAIBankWave.o\
	$(BUILD_DIR)/asm/JSystem/JAudio/JAI/JAIBasic.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAI/JAIConst.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAI/JAIDummyObject.o\
	$(BUILD_DIR)/asm/JSystem/JAudio/JAI/JAIFx.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAI/JAIGlobalParameter.o\
	$(BUILD_DIR)/asm/JSystem/JAudio/JAI/JAIInitData.o\
	$(BUILD_DIR)/asm/JSystem/JAudio/JAI/JAISeMgr.o\
	$(BUILD_DIR)/asm/JSystem/JAudio/JAI/JAISequenceHeap.o\
	$(BUILD_DIR)/asm/JSystem/JAudio/JAI/JAISequenceMgr.o\
	$(BUILD_DIR)/asm/JSystem/JAudio/JAI/JAISound.o\
	$(BUILD_DIR)/asm/JSystem/JAudio/JAI/JAISoundTable.o\
	$(BUILD_DIR)/asm/JSystem/JAudio/JAI/JAIStreamMgr.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAI/JAISystemInterface.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAI/JAIObject.o\

DEPENDS += $(JAUDIO_JAI_FILES:.o=.d)

$(BUILD_DIR)/src/JSystem/JAudio/JAI/JAI.a: $(JAUDIO_JAI_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(JAUDIO_JAI_FILES) > build/JAUDIO_JAI_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/JAUDIO_JAI_ofiles
