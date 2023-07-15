CARD_FILES:=\
	$(BUILD_DIR)/src/Dolphin/card/CARDBios.o\
	$(BUILD_DIR)/src/Dolphin/card/CARDUnlock.o\
	$(BUILD_DIR)/src/Dolphin/card/CARDRdwr.o\
	$(BUILD_DIR)/src/Dolphin/card/CARDBlock.o\
	$(BUILD_DIR)/src/Dolphin/card/CARDDir.o\
	$(BUILD_DIR)/src/Dolphin/card/CARDCheck.o\
	$(BUILD_DIR)/src/Dolphin/card/CARDMount.o\
	$(BUILD_DIR)/src/Dolphin/card/CARDFormat.o\
	$(BUILD_DIR)/src/Dolphin/card/CARDOpen.o\
	$(BUILD_DIR)/src/Dolphin/card/CARDCreate.o\
	$(BUILD_DIR)/src/Dolphin/card/CARDRead.o\
	$(BUILD_DIR)/src/Dolphin/card/CARDWrite.o\
	$(BUILD_DIR)/src/Dolphin/card/CARDStat.o\
	$(BUILD_DIR)/src/Dolphin/card/CARDNet.o\

$(CARD_FILES): CFLAGS += -common off -str noreadonly
$(CARD_FILES): MWCC_VERSION := 1.2.5n

DEPENDS += $(CARD_FILES:.o=.d)

$(BUILD_DIR)/src/Dolphin/card/card.a: $(CARD_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(CARD_FILES) > build/CARD_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/CARD_ofiles
