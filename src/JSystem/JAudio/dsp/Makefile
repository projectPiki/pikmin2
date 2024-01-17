JAUDIO_DSP_FILES:=\
	$(BUILD_DIR)/src/JSystem/JAudio/dsp/dspproc.o\
	$(BUILD_DIR)/src/JSystem/JAudio/dsp/dsptask.o\
	$(BUILD_DIR)/src/JSystem/JAudio/dsp/osdsp.o\
	$(BUILD_DIR)/src/JSystem/JAudio/dsp/osdsp_task.o\

$(JAUDIO_DSP_FILES): CFLAGS += -lang=c++ -func_align 32 -inline noauto -common off -use_lmw_stmw off -O4,s

DEPENDS += $(JAUDIO_DSP_FILES:.o=.d)

$(BUILD_DIR)/src/JSystem/JAudio/dsp/dsp.a: $(JAUDIO_DSP_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(JAUDIO_DSP_FILES) > build/JAUDIO_DSP_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/JAUDIO_DSP_ofiles
