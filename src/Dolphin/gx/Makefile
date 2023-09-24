GX_FILES:=\
	$(BUILD_DIR)/asm/Dolphin/gx/GXInit.o\
	$(BUILD_DIR)/asm/Dolphin/gx/GXFifo.o\
	$(BUILD_DIR)/asm/Dolphin/gx/GXAttr.o\
	$(BUILD_DIR)/asm/Dolphin/gx/GXMisc.o\
	$(BUILD_DIR)/asm/Dolphin/gx/GXGeometry.o\
	$(BUILD_DIR)/asm/Dolphin/gx/GXFrameBuf.o\
	$(BUILD_DIR)/asm/Dolphin/gx/GXLight.o\
	$(BUILD_DIR)/asm/Dolphin/gx/GXTexture.o\
	$(BUILD_DIR)/src/Dolphin/gx/GXBump.o\
	$(BUILD_DIR)/asm/Dolphin/gx/GXTev.o\
	$(BUILD_DIR)/asm/Dolphin/gx/GXPixel.o\
	$(BUILD_DIR)/src/Dolphin/gx/GXDisplayList.o\
	$(BUILD_DIR)/asm/Dolphin/gx/GXTransform.o\
	$(BUILD_DIR)/asm/Dolphin/gx/GXPerf.o\

$(GX_FILES): CFLAGS += -common off
$(GX_FILES): MWCC_VERSION := 1.2.5

DEPENDS += $(GX_FILES:.o=.d)

$(BUILD_DIR)/src/Dolphin/gx/gx.a: $(GX_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(GX_FILES) > build/GX_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/GX_ofiles
