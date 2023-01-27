# Dolphin sub-libraries have differing CFLAGS.
DOLPHIN_FILES:=\
	$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN.a\
	$(BUILD_DIR)/src/Dolphin/Runtime.a\
	$(BUILD_DIR)/src/Dolphin/MSL_C.a\
	$(BUILD_DIR)/src/Dolphin/OdemuExi2.a\
	$(BUILD_DIR)/src/Dolphin/vi.a\
	$(BUILD_DIR)/src/Dolphin/amcstubs.a\
	$(BUILD_DIR)/src/Dolphin/ar.a\
	$(BUILD_DIR)/src/Dolphin/base.a\
	$(BUILD_DIR)/src/Dolphin/card.a\
	$(BUILD_DIR)/src/Dolphin/db.a\
	$(BUILD_DIR)/src/Dolphin/dsp.a\
	$(BUILD_DIR)/src/Dolphin/dvd.a\
	$(BUILD_DIR)/src/Dolphin/exi.a\
	$(BUILD_DIR)/src/Dolphin/gd.a\
	$(BUILD_DIR)/src/Dolphin/gx.a\
	$(BUILD_DIR)/src/Dolphin/mtx.a\
	$(BUILD_DIR)/src/Dolphin/odenotstub.a\
	$(BUILD_DIR)/src/Dolphin/os.a\
	$(BUILD_DIR)/src/Dolphin/pad.a\
	$(BUILD_DIR)/src/Dolphin/si.a\
	$(BUILD_DIR)/src/Dolphin/ai.a\
	$(BUILD_DIR)/src/Dolphin/thp.a\
	$(BUILD_DIR)/src/Dolphin/gba.a\

$(BUILD_DIR)/src/Dolphin.a: $(DOLPHIN_FILES)
	@echo linking... $@
	@echo $(DOLPHIN_FILES) > build/DOLPHIN_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/DOLPHIN_ofiles
