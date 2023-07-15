DSP_FILES:=\
	$(BUILD_DIR)/src/Dolphin/dsp/dsp.o\
	$(BUILD_DIR)/src/Dolphin/dsp/dsp_debug.o\
	$(BUILD_DIR)/src/Dolphin/dsp/dsp_task.o\

$(DSP_FILES): CFLAGS += -common off -str noreadonly
$(DSP_FILES): MWCC_VERSION := 1.2.5n

DEPENDS += $(DSP_FILES:.o=.d)

$(BUILD_DIR)/src/Dolphin/dsp/dsp.a: $(DSP_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(DSP_FILES) > build/DSP_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/DSP_ofiles
