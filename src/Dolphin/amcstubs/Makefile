AMCSTUBS_FILES:=\
	$(BUILD_DIR)/src/Dolphin/amcstubs/AmcExi2Stubs.o\

$(AMCSTUBS_FILES): CFLAGS += -common off

DEPENDS += $(AMCSTUBS_FILES:.o=.d)

$(BUILD_DIR)/src/Dolphin/amcstubs/amcstubs.a: $(AMCSTUBS_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(AMCSTUBS_FILES) > build/AMCSTUBS_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/AMCSTUBS_ofiles
