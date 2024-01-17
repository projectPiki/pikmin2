TRK_MINNOW_DOLPHIN_FILES:=\
	$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN/mainloop.o\
	$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN/nubevent.o\
	$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN/nubinit.o\
	$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN/msg.o\
	$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN/msgbuf.o\
	$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN/serpoll.o\
	$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN/usr_put.o\
	$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN/dispatch.o\
	$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN/msghndlr.o\
	$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN/support.o\
	$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN/mutex_TRK.o\
	$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN/notify.o\
	$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN/flush_cache.o\
	$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN/mem_TRK.o\
	$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN/targimpl.o\
	$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN/targsupp.o\
	$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN/mpc_7xx_603e.o\
	$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN/__exception.o\
	$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN/dolphin_trk.o\
	$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN/main_TRK.o\
	$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN/dolphin_trk_glue.o\
	$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN/targcont.o\
	$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN/target_options.o\
	$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN/mslsupp.o\
	$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN/UDP_Stubs.o\
	$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN/ddh/main.o\
	$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN/CircleBuffer.o\
	$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN/gdev/main.o\
	$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN/MWTrace.o\
	$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN/MWCriticalSection_gc.o\

$(TRK_MINNOW_DOLPHIN_FILES): CFLAGS += -common off -inline deferred -sdata 0 -sdata2 0

# Override sdata
# It seems some TRK-related files need -sdata 8
$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN/serpoll.o: CFLAGS += -sdata 8
$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN/ddh/main.o: CFLAGS += -sdata 8
$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN/gdev/main.o: CFLAGS += -sdata 8

# Force targsupp to be 32-aligned
$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN/targsupp.o: CFLAGS += -func_align 32

DEPENDS += $(TRK_MINNOW_DOLPHIN_FILES:.o=.d)

$(BUILD_DIR)/src/Dolphin/TRK_MINNOW_DOLPHIN/TRK_MINNOW_DOLPHIN.a: $(TRK_MINNOW_DOLPHIN_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(TRK_MINNOW_DOLPHIN_FILES) > build/TRK_MINNOW_DOLPHIN_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/TRK_MINNOW_DOLPHIN_ofiles
