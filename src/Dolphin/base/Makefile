BASE_FILES:=\
	$(BUILD_DIR)/src/Dolphin/base/PPCArch.o\

$(BASE_FILES): CFLAGS += -common off
$(BASE_FILES): MWCC_VERSION := 1.2.5

DEPENDS += $(BASE_FILES:.o=.d)

$(BUILD_DIR)/src/Dolphin/base/base.a: $(BASE_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(BASE_FILES) > build/BASE_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/BASE_ofiles
