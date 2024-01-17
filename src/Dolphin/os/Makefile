OS_FILES:=\
	$(BUILD_DIR)/src/Dolphin/os/OS.o\
	$(BUILD_DIR)/src/Dolphin/os/OSAlarm.o\
	$(BUILD_DIR)/src/Dolphin/os/OSAlloc.o\
	$(BUILD_DIR)/src/Dolphin/os/OSArena.o\
	$(BUILD_DIR)/src/Dolphin/os/OSAudioSystem.o\
	$(BUILD_DIR)/src/Dolphin/os/OSCache.o\
	$(BUILD_DIR)/src/Dolphin/os/OSContext.o\
	$(BUILD_DIR)/src/Dolphin/os/OSError.o\
	$(BUILD_DIR)/src/Dolphin/os/OSFont.o\
	$(BUILD_DIR)/src/Dolphin/os/OSInterrupt.o\
	$(BUILD_DIR)/src/Dolphin/os/OSLink.o\
	$(BUILD_DIR)/src/Dolphin/os/OSMessage.o\
	$(BUILD_DIR)/src/Dolphin/os/OSMemory.o\
	$(BUILD_DIR)/src/Dolphin/os/OSMutex.o\
	$(BUILD_DIR)/src/Dolphin/os/OSReboot.o\
	$(BUILD_DIR)/src/Dolphin/os/OSReset.o\
	$(BUILD_DIR)/src/Dolphin/os/OSResetSW.o\
	$(BUILD_DIR)/src/Dolphin/os/OSRtc.o\
	$(BUILD_DIR)/src/Dolphin/os/OSSync.o\
	$(BUILD_DIR)/src/Dolphin/os/OSThread.o\
	$(BUILD_DIR)/src/Dolphin/os/OSTime.o\
	$(BUILD_DIR)/src/Dolphin/os/__start.o\
	$(BUILD_DIR)/src/Dolphin/os/__ppc_eabi_init.o\

$(OS_FILES): CFLAGS += -common off -str noreadonly
$(OS_FILES): MWCC_VERSION := 1.2.5n

DEPENDS += $(OS_FILES:.o=.d)

$(BUILD_DIR)/src/Dolphin/os/os.a: $(OS_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(OS_FILES) > build/OS_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/OS_ofiles
