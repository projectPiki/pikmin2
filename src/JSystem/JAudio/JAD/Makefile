JAUDIO_JAD_FILES:=\
	$(BUILD_DIR)/src/JSystem/JAudio/JAD/JADHioNode.o\

DEPENDS += $(JAUDIO_JAD_FILES:.o=.d)

$(BUILD_DIR)/src/JSystem/JAudio/JAD/JAD.a: $(JAUDIO_JAD_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(JAUDIO_JAD_FILES) > build/JAUDIO_JAD_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/JAUDIO_JAD_ofiles
