JAUDIO_JAL_FILES:=\
	$(BUILD_DIR)/src/JSystem/JAudio/JAL/JALCalc.o\

DEPENDS += $(JAUDIO_JAL_FILES:.o=.d)

$(BUILD_DIR)/src/JSystem/JAudio/JAL/JAL.a: $(JAUDIO_JAL_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(JAUDIO_JAL_FILES) > build/JAUDIO_JAL_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/JAUDIO_JAL_ofiles
