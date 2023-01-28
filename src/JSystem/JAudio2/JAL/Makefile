JAUDIO2_JAL_FILES:=\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAL/JALCalc.o\

DEPENDS += $(JAUDIO2_JAL_FILES:.o=.d)

$(BUILD_DIR)/src/JSystem/JAudio2/JAL.a: $(JAUDIO2_JAL_FILES)
	@echo linking... $@
	@echo $(JAUDIO2_JAL_FILES) > build/JAUDIO2_JAL_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/JAUDIO2_JAL_ofiles
