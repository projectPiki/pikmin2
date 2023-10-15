MTX_FILES:=\
	$(BUILD_DIR)/src/Dolphin/mtx/mtx.o\
	$(BUILD_DIR)/src/Dolphin/mtx/mtxvec.o\
	$(BUILD_DIR)/src/Dolphin/mtx/mtx44.o\
	$(BUILD_DIR)/src/Dolphin/mtx/vec.o\

$(MTX_FILES): CFLAGS += -common off
$(MTX_FILES): MWCC_VERSION := 1.2.5n

DEPENDS += $(MTX_FILES:.o=.d)

$(BUILD_DIR)/src/Dolphin/mtx/mtx.a: $(MTX_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(MTX_FILES) > build/MTX_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/MTX_ofiles
