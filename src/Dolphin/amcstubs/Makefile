AMCSTUBS_FILES:=\
	$(BUILD_DIR)/src/Dolphin/amcstubs/AmcExi2Stubs.o\

$(AMCSTUBS_FILES): CFLAGS += -common off

DEPENDS += $(AMCSTUBS_FILES:.o=.d)

$(BUILD_DIR)/src/Dolphin/amcstubs.a: $(AMCSTUBS_FILES)
	@echo linking... $@
	@echo $(AMCSTUBS_FILES) > build/AMCSTUBS_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/AMCSTUBS_ofiles
