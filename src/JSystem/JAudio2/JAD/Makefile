JAUDIO2_JAD_FILES:=\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAD/JADHioNode.o\

DEPENDS += $(JAUDIO2_JAD_FILES:.o=.d)

$(BUILD_DIR)/src/JSystem/JAudio2/JAD.a: $(JAUDIO2_JAD_FILES)
	@echo linking... $@
	@echo $(JAUDIO2_JAD_FILES) > build/JAUDIO2_JAD_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/JAUDIO2_JAD_ofiles
