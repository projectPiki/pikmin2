OS_FILES:=\
	$(BUILD_DIR)/src/Dolphin/os/OS.o\
	$(BUILD_DIR)/src/Dolphin/os/OSAlarm.o\
	$(BUILD_DIR)/src/Dolphin/os/OSAlloc.o\
	$(BUILD_DIR)/src/Dolphin/os/OSArena.o\
	$(BUILD_DIR)/src/Dolphin/os/OSAudioSystem.o\
	$(BUILD_DIR)/src/Dolphin/os/OSCache.o\
	$(BUILD_DIR)/src/Dolphin/os/OSContext.o\
	$(BUILD_DIR)/src/Dolphin/os/OSError.o\
	$(BUILD_DIR)/asm/Dolphin/os/OSFont.o\
	$(BUILD_DIR)/src/Dolphin/os/OSInterrupt.o\
	$(BUILD_DIR)/src/Dolphin/os/OSLink.o\
	$(BUILD_DIR)/src/Dolphin/os/OSMessage.o\
	$(BUILD_DIR)/src/Dolphin/os/OSMemory.o\
	$(BUILD_DIR)/src/Dolphin/os/OSMutex.o\
	$(BUILD_DIR)/asm/Dolphin/os/OSReboot.o\
	$(BUILD_DIR)/src/Dolphin/os/OSReset.o\
	$(BUILD_DIR)/src/Dolphin/os/OSResetSW.o\
	$(BUILD_DIR)/src/Dolphin/os/OSRtc.o\
	$(BUILD_DIR)/src/Dolphin/os/OSSync.o\
	$(BUILD_DIR)/src/Dolphin/os/OSThread.o\
	$(BUILD_DIR)/src/Dolphin/os/OSTime.o\
	$(BUILD_DIR)/asm/Dolphin/os/__mem.o\
	$(BUILD_DIR)/src/Dolphin/os/__start.o\
	$(BUILD_DIR)/src/Dolphin/os/__ppc_eabi_init.o\

OS_UNSCHEDULED:=\
	$(EPILOGUE_DIR)/src/Dolphin/os/OS.o\
	$(EPILOGUE_DIR)/src/Dolphin/os/OSAlarm.o\
	$(EPILOGUE_DIR)/src/Dolphin/os/OSAudioSystem.o\
	$(EPILOGUE_DIR)/src/Dolphin/os/OSCache.o\
	$(EPILOGUE_DIR)/src/Dolphin/os/OSContext.o\
	$(EPILOGUE_DIR)/src/Dolphin/os/OSError.o\
	$(EPILOGUE_DIR)/src/Dolphin/os/OSInterrupt.o\
	$(EPILOGUE_DIR)/src/Dolphin/os/OSMessage.o\
	$(EPILOGUE_DIR)/src/Dolphin/os/OSMemory.o\
	$(EPILOGUE_DIR)/src/Dolphin/os/OSMutex.o\
	$(EPILOGUE_DIR)/src/Dolphin/os/OSReset.o\
	$(EPILOGUE_DIR)/src/Dolphin/os/OSResetSW.o\
	$(EPILOGUE_DIR)/src/Dolphin/os/OSRtc.o\
	$(EPILOGUE_DIR)/src/Dolphin/os/OSThread.o\
	$(EPILOGUE_DIR)/src/Dolphin/os/OSTime.o\

$(OS_FILES): CFLAGS += -common off -str noreadonly
$(OS_UNSCHEDULED): CFLAGS += -common off -str noreadonly
$(OS_FILES): MWCC_VERSION := 1.2.5

DEPENDS += $(OS_FILES:.o=.d)

$(BUILD_DIR)/src/Dolphin/os/os.a: $(OS_FILES) $(OS_UNSCHEDULED)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(OS_FILES) > build/OS_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/OS_ofiles
