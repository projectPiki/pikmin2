MTX_FILES:=\
	$(BUILD_DIR)/asm/Dolphin/mtx/mtx.o\
	$(BUILD_DIR)/asm/Dolphin/mtx/mtxvec.o\
	$(BUILD_DIR)/asm/Dolphin/mtx/mtx44.o\
	$(BUILD_DIR)/src/Dolphin/mtx/vec.o\

$(MTX_FILES): CFLAGS += -common off
$(MTX_FILES): MWCC_VERSION := 1.2.5

DEPENDS += $(MTX_FILES:.o=.d)

$(BUILD_DIR)/src/Dolphin/mtx.a: $(MTX_FILES)
	@echo linking... $@
	@echo $(MTX_FILES) > build/MTX_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/MTX_ofiles
