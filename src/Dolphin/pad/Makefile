PAD_FILES:=\
	$(BUILD_DIR)/src/Dolphin/pad/Padclamp.o\
	$(BUILD_DIR)/src/Dolphin/pad/Pad.o\

$(PAD_FILES): CFLAGS += -common off -fp_contract off -str noreadonly
$(PAD_FILES): MWCC_VERSION := 1.2.5n

DEPENDS += $(PAD_FILES:.o=.d)

$(BUILD_DIR)/src/Dolphin/pad/pad.a: $(PAD_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(PAD_FILES) > build/PAD_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/PAD_ofiles
