JUTILITY_FILES:=\
	$(BUILD_DIR)/src/JSystem/JUtility/JUTAssert.o\
	$(BUILD_DIR)/src/JSystem/JUtility/JUTConsole.o\
	$(BUILD_DIR)/src/JSystem/JUtility/JUTDbPrint.o\
	$(BUILD_DIR)/src/JSystem/JUtility/JUTDirectFile.o\
	$(BUILD_DIR)/src/JSystem/JUtility/JUTDirectPrint.o\
	$(BUILD_DIR)/src/JSystem/JUtility/JUTException.o\
	$(BUILD_DIR)/src/JSystem/JUtility/JUTFader.o\
	$(BUILD_DIR)/src/JSystem/JUtility/JUTFont.o\
	$(BUILD_DIR)/src/JSystem/JUtility/JUTGamePad.o\
	$(BUILD_DIR)/src/JSystem/JUtility/JUTGraphFifo.o\
	$(BUILD_DIR)/src/JSystem/JUtility/JUTNameTab.o\
	$(BUILD_DIR)/src/JSystem/JUtility/JUTPalette.o\
	$(BUILD_DIR)/src/JSystem/JUtility/JUTProcBar.o\
	$(BUILD_DIR)/src/JSystem/JUtility/JUTResFont.o\
	$(BUILD_DIR)/src/JSystem/JUtility/JUTResource.o\
	$(BUILD_DIR)/src/JSystem/JUtility/JUTRomFont.o\
	$(BUILD_DIR)/src/JSystem/JUtility/JUTFontData_Ascfont_fix12.o\
	$(BUILD_DIR)/src/JSystem/JUtility/JUTTexture.o\
	$(BUILD_DIR)/src/JSystem/JUtility/JUTVideo.o\
	$(BUILD_DIR)/src/JSystem/JUtility/JUTXfb.o\
	$(BUILD_DIR)/src/JSystem/JUtility/JUTCacheFont.o\

DEPENDS += $(JUTILITY_FILES:.o=.d)

$(BUILD_DIR)/src/JSystem/JUtility/JUtility.a: $(JUTILITY_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(JUTILITY_FILES) > build/JUTILITY_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/JUTILITY_ofiles
