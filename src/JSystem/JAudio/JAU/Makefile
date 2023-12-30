JAUDIO_JAU_FILES:=\
	$(BUILD_DIR)/src/JSystem/JAudio/JAU/JAUData.o\
	$(BUILD_DIR)/src/JSystem/JAudio/JAU/JAUDataMgr.o\

DEPENDS += $(JAUDIO_JAU_FILES:.o=.d)

$(BUILD_DIR)/src/JSystem/JAudio/JAU/JAU.a: $(JAUDIO_JAU_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(JAUDIO_JAU_FILES) > build/JAUDIO_JAU_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/JAUDIO_JAU_ofiles
