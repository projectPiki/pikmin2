AR_FILES:=\
	$(BUILD_DIR)/src/Dolphin/ar/ar.o\
	$(BUILD_DIR)/src/Dolphin/ar/arq.o\

$(AR_FILES): CFLAGS += -common off -str noreadonly
$(AR_FILES): MWCC_VERSION := 1.2.5n

DEPENDS += $(AR_FILES:.o=.d)

$(BUILD_DIR)/src/Dolphin/ar/ar.a: $(AR_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(AR_FILES) > build/AR_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/AR_ofiles
