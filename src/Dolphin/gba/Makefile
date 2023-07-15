GBA_FILES:=\
	$(BUILD_DIR)/src/Dolphin/gba/GBA.o\
	$(BUILD_DIR)/src/Dolphin/gba/GBARead.o\
	$(BUILD_DIR)/src/Dolphin/gba/GBAWrite.o\
	$(BUILD_DIR)/src/Dolphin/gba/GBAXfer.o\

$(GBA_FILES): CFLAGS += -common off -str noreadonly
$(GBA_FILES): MWCC_VERSION := 1.2.5n

DEPENDS += $(GBA_FILES:.o=.d)

$(BUILD_DIR)/src/Dolphin/gba/gba.a: $(GBA_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(GBA_FILES) > build/GBA_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/GBA_ofiles
