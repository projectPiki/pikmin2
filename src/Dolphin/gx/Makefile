GX_FILES:=\
	$(BUILD_DIR)/src/Dolphin/gx/GXInit.o\
	$(BUILD_DIR)/src/Dolphin/gx/GXFifo.o\
	$(BUILD_DIR)/src/Dolphin/gx/GXAttr.o\
	$(BUILD_DIR)/src/Dolphin/gx/GXMisc.o\
	$(BUILD_DIR)/src/Dolphin/gx/GXGeometry.o\
	$(BUILD_DIR)/src/Dolphin/gx/GXFrameBuf.o\
	$(BUILD_DIR)/src/Dolphin/gx/GXLight.o\
	$(BUILD_DIR)/src/Dolphin/gx/GXTexture.o\
	$(BUILD_DIR)/src/Dolphin/gx/GXBump.o\
	$(BUILD_DIR)/src/Dolphin/gx/GXTev.o\
	$(BUILD_DIR)/src/Dolphin/gx/GXPixel.o\
	$(BUILD_DIR)/src/Dolphin/gx/GXDisplayList.o\
	$(BUILD_DIR)/src/Dolphin/gx/GXTransform.o\
	$(BUILD_DIR)/src/Dolphin/gx/GXPerf.o\

$(GX_FILES): CFLAGS += -common off -str noreadonly -fp_contract off
$(GX_FILES): MWCC_VERSION := 1.2.5n

DEPENDS += $(GX_FILES:.o=.d)

$(BUILD_DIR)/src/Dolphin/gx/gx.a: $(GX_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(GX_FILES) > build/GX_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/GX_ofiles
