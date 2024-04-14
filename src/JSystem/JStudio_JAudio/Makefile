JSTUDIO_JAUDIO_FILES:=\
	$(BUILD_DIR)/src/JSystem/JStudio_JAudio/object-sound.o\
	$(BUILD_DIR)/src/JSystem/JStudio_JAudio/control.o\

DEPENDS += $(JSTUDIO_JAUDIO_FILES:.o=.d)

$(BUILD_DIR)/src/JSystem/JStudio_JAudio/JStudio_JAudio.a: $(JSTUDIO_JAUDIO_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(JSTUDIO_JAUDIO_FILES) > build/JSTUDIO_JAUDIO_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/JSTUDIO_JAUDIO_ofiles
