ODEMUEXI2_FILES:=\
	$(BUILD_DIR)/asm/Dolphin/OdemuExi2/DebuggerDriver.o\

$(ODEMUEXI2_FILES): CFLAGS += -common off
$(ODEMUEXI2_FILES): MWCC_VERSION := 1.2.5

DEPENDS += $(ODEMUEXI2_FILES:.o=.d)

$(BUILD_DIR)/src/Dolphin/OdemuExi2.a: $(ODEMUEXI2_FILES)
	@echo linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(ODEMUEXI2_FILES) > build/ODEMUEXI2_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/ODEMUEXI2_ofiles
