EXI_FILES:=\
	$(BUILD_DIR)/asm/Dolphin/exi/EXIBios.o\
	$(BUILD_DIR)/src/Dolphin/exi/EXIUart.o\

$(EXI_FILES): CFLAGS += -common off

DEPENDS += $(EXI_FILES:.o=.d)

$(BUILD_DIR)/src/Dolphin/exi/exi.a: $(EXI_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(EXI_FILES) > build/EXI_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/EXI_ofiles
