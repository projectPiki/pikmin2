PAD_FILES:=\
	$(BUILD_DIR)/asm/Dolphin/pad/Padclamp.o\
	$(BUILD_DIR)/asm/Dolphin/pad/Pad.o\

$(PAD_FILES): CFLAGS += -common off

DEPENDS += $(PAD_FILES:.o=.d)

$(BUILD_DIR)/src/Dolphin/pad/pad.a: $(PAD_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(PAD_FILES) > build/PAD_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/PAD_ofiles
