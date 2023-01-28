CARD_FILES:=\
	$(BUILD_DIR)/asm/Dolphin/card/CARDBios.o\
	$(BUILD_DIR)/asm/Dolphin/card/CARDUnlock.o\
	$(BUILD_DIR)/asm/Dolphin/card/CARDRdwr.o\
	$(BUILD_DIR)/asm/Dolphin/card/CARDBlock.o\
	$(BUILD_DIR)/asm/Dolphin/card/CARDDir.o\
	$(BUILD_DIR)/asm/Dolphin/card/CARDCheck.o\
	$(BUILD_DIR)/asm/Dolphin/card/CARDMount.o\
	$(BUILD_DIR)/asm/Dolphin/card/CARDFormat.o\
	$(BUILD_DIR)/asm/Dolphin/card/CARDOpen.o\
	$(BUILD_DIR)/asm/Dolphin/card/CARDCreate.o\
	$(BUILD_DIR)/asm/Dolphin/card/CARDRead.o\
	$(BUILD_DIR)/asm/Dolphin/card/CARDWrite.o\
	$(BUILD_DIR)/asm/Dolphin/card/CARDStat.o\
	$(BUILD_DIR)/asm/Dolphin/card/CARDNet.o\

$(CARD_FILES): CFLAGS += -common off
$(CARD_FILES): MWCC_VERSION := 1.2.5

DEPENDS += $(CARD_FILES:.o=.d)

$(BUILD_DIR)/src/Dolphin/card.a: $(CARD_FILES)
	@echo linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(CARD_FILES) > build/CARD_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/CARD_ofiles
