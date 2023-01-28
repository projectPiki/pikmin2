JAUDIO2_JAU_FILES:=\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAU/JAUData.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAU/JAUDataMgr.o\

DEPENDS += $(JAUDIO2_JAU_FILES:.o=.d)

$(BUILD_DIR)/src/JSystem/JAudio2/JAU/JAU.a: $(JAUDIO2_JAU_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(JAUDIO2_JAU_FILES) > build/JAUDIO2_JAU_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/JAUDIO2_JAU_ofiles
