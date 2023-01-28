THP_FILES:=\
	$(BUILD_DIR)/asm/Dolphin/thp/THPDec.o\
	$(BUILD_DIR)/asm/Dolphin/thp/THPAudio.o\

$(THP_FILES): CFLAGS += -common off

DEPENDS += $(THP_FILES:.o=.d)

$(BUILD_DIR)/src/Dolphin/thp/thp.a: $(THP_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(THP_FILES) > build/THP_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/THP_ofiles
