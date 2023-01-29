JAUDIO2_DSP_FILES:=\
	$(BUILD_DIR)/asm/JSystem/JAudio2/dsp/dspproc.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/dsp/dsptask.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/dsp/osdsp.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/dsp/osdsp_task.o\

$(JAUDIO2_DSP_FILES): CFLAGS += -func_align 32

DEPENDS += $(JAUDIO2_DSP_FILES:.o=.d)

$(BUILD_DIR)/src/JSystem/JAudio2/dsp/dsp.a: $(JAUDIO2_DSP_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(JAUDIO2_DSP_FILES) > build/JAUDIO2_DSP_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/JAUDIO2_DSP_ofiles
