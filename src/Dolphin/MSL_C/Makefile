MSL_C_FILES:=\
	$(BUILD_DIR)/src/Dolphin/MSL_C/PPC_EABI/abort_exit.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common/alloc.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common/ansi_files.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common_Embedded/ansi_fp.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common/arith.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common/buffer_io.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/PPC_EABI/critical_regions.gamecube.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common/ctype.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common/direct_io.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common/errno.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common/file_io.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common/FILE_POS.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common/locale.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common/mbstring.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common/mem.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common/mem_funcs.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common/misc_io.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common/printf.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common/rand.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common/float.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common/scanf.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common/string.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common/strtold.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common/strtoul.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common/wchar_io.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/PPC_EABI/uart_console_io_gcn.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_asin.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_atan2.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_exp.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_fmod.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_log.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_log10.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_pow.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_rem_pio2.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/k_cos.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/k_rem_pio2.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/k_sin.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/k_tan.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_atan.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_ceil.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_copysign.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_cos.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_floor.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_frexp.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_ldexp.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_modf.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_sin.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_tan.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_asin.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_atan2.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_exp.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_fmod.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_log10.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_pow.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_sqrt.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/PPC_EABI/math_ppc.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_sqrt.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common/extras.o\

$(MSL_C_FILES): CFLAGS += -common off -inline deferred

# Also needs noauto
$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common/mbstring.o: CFLAGS += -inline noauto,deferred
$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common/direct_io.o: CFLAGS += -inline noauto,deferred

# Enable string pooling
$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common_Embedded/ansi_fp.o: CFLAGS += -str pool
$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common/locale.o: CFLAGS += -str pool
$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_Common/printf.o: CFLAGS += -str pool

DEPENDS += $(MSL_C_FILES:.o=.d)

$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_C.a: $(MSL_C_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(MSL_C_FILES) > build/MSL_C_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/MSL_C_ofiles
