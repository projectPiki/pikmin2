# Dolphin sub-libraries have differing CFLAGS.
DOLPHIN_FILES:=\
	$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN/TRK_MINNOW_DOLPHIN.a\
	$(BUILD_DIR)/src/Dolphin/Runtime/Runtime.a\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_C.a\
	$(BUILD_DIR)/src/Dolphin/OdemuExi2/OdemuExi2.a\
	$(BUILD_DIR)/src/Dolphin/vi/vi.a\
	$(BUILD_DIR)/src/Dolphin/amcstubs/amcstubs.a\
	$(BUILD_DIR)/src/Dolphin/ar/ar.a\
	$(BUILD_DIR)/src/Dolphin/base/base.a\
	$(BUILD_DIR)/src/Dolphin/card/card.a\
	$(BUILD_DIR)/src/Dolphin/db/db.a\
	$(BUILD_DIR)/src/Dolphin/dsp/dsp.a\
	$(BUILD_DIR)/src/Dolphin/dvd/dvd.a\
	$(BUILD_DIR)/src/Dolphin/exi/exi.a\
	$(BUILD_DIR)/src/Dolphin/gd/gd.a\
	$(BUILD_DIR)/src/Dolphin/gx/gx.a\
	$(BUILD_DIR)/src/Dolphin/mtx/mtx.a\
	$(BUILD_DIR)/src/Dolphin/odenotstub/odenotstub.a\
	$(BUILD_DIR)/src/Dolphin/os/os.a\
	$(BUILD_DIR)/src/Dolphin/pad/pad.a\
	$(BUILD_DIR)/src/Dolphin/si/si.a\
	$(BUILD_DIR)/src/Dolphin/ai/ai.a\
	$(BUILD_DIR)/src/Dolphin/thp/thp.a\
	$(BUILD_DIR)/src/Dolphin/gba/gba.a\

$(BUILD_DIR)/src/Dolphin/Dolphin.a: $(DOLPHIN_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(DOLPHIN_FILES) > build/DOLPHIN_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/DOLPHIN_ofiles
