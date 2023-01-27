AR_FILES:=\
	$(BUILD_DIR)/asm/Dolphin/ar/ar.o\
	$(BUILD_DIR)/asm/Dolphin/ar/arq.o\

$(AR_FILES): CFLAGS += -common off
$(AR_FILES): MWCC_VERSION := 1.2.5

DEPENDS += $(AR_FILES:.o=.d)

$(BUILD_DIR)/src/Dolphin/ar.a: $(AR_FILES)
	@echo linking... $@
	@echo $(AR_FILES) > build/AR_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/AR_ofiles
