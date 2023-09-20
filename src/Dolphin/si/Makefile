SI_FILES:=\
	$(BUILD_DIR)/src/Dolphin/si/SIBios.o\
	$(BUILD_DIR)/src/Dolphin/si/SISamplingRate.o\

$(SI_FILES): CFLAGS += -common off -str noreadonly
$(SI_FILES): MWCC_VERSION := 1.2.5n

DEPENDS += $(SI_FILES:.o=.d)

$(BUILD_DIR)/src/Dolphin/si/si.a: $(SI_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(SI_FILES) > build/SI_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/SI_ofiles
