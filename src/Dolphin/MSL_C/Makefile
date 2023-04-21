MSL_C_FILES:=\
	$(BUILD_DIR)/src/Dolphin/MSL_C/abort_exit.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/alloc.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/ansi_files.o\
	$(BUILD_DIR)/asm/Dolphin/MSL_C/ansi_fp.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/arith.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/buffer_io.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/critical_regions.gamecube.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/ctype.o\
	$(BUILD_DIR)/asm/Dolphin/MSL_C/direct_io.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/errno.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/file_io.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/FILE_POS.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/locale.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/mbstring.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/mem.o\
	$(BUILD_DIR)/asm/Dolphin/MSL_C/mem_funcs.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/misc_io.o\
	$(BUILD_DIR)/asm/Dolphin/MSL_C/printf.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/rand.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/float.o\
	$(BUILD_DIR)/asm/Dolphin/MSL_C/scanf.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/string.o\
	$(BUILD_DIR)/asm/Dolphin/MSL_C/strtold.o\
	$(BUILD_DIR)/asm/Dolphin/MSL_C/strtoul.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/wchar_io.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/uart_console_io_gcn.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/e_asin.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/e_atan2.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/e_exp.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/e_fmod.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/e_log.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/e_log10.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/e_pow.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/e_rem_pio2.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/k_cos.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/k_rem_pio2.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/k_sin.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/k_tan.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/s_atan.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/s_ceil.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/s_copysign.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/s_cos.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/s_floor.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/s_frexp.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/s_ldexp.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/s_modf.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/s_sin.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/s_tan.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/w_asin.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/w_atan2.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/w_exp.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/w_fmod.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/w_log10.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/w_pow.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/e_sqrt.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/math_ppc.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/w_sqrt.o\
	$(BUILD_DIR)/src/Dolphin/MSL_C/extras.o\

$(MSL_C_FILES): CFLAGS += -common off -inline deferred

# This is inline-deferred for some reason
$(BUILD_DIR)/src/Dolphin/MSL_C/mbstring.o: CFLAGS := -Cpp_exceptions off -enum int -inline deferred -proc gekko -RTTI off -fp hard -fp_contract on -rostr -O4,p -use_lmw_stmw on -common off -sdata 8 -sdata2 8 -nodefaults -MMD -DVERNUM=$(VERNUM) $(INCLUDES)

# Enable string pooling
$(BUILD_DIR)/src/Dolphin/MSL_C/locale.o: CFLAGS += -str pool

DEPENDS += $(MSL_C_FILES:.o=.d)

$(BUILD_DIR)/src/Dolphin/MSL_C/MSL_C.a: $(MSL_C_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(MSL_C_FILES) > build/MSL_C_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/MSL_C_ofiles
