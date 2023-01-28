VI_FILES:=\
	$(BUILD_DIR)/asm/Dolphin/vi/vi.o\

$(VI_FILES): CFLAGS += -common off
$(VI_FILES): MWCC_VERSION := 1.2.5

DEPENDS += $(VI_FILES:.o=.d)

$(BUILD_DIR)/src/Dolphin/vi.a: $(VI_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(VI_FILES) > build/VI_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/VI_ofiles
