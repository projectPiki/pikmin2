J2D_FILES:=\
	$(BUILD_DIR)/src/JSystem/J2D/J2DOrthoGraph.o\
	$(BUILD_DIR)/src/JSystem/J2D/J2DPerspGraph.o\
	$(BUILD_DIR)/src/JSystem/J2D/J2DGrafContext.o\
	$(BUILD_DIR)/src/JSystem/J2D/J2DPane.o\
	$(BUILD_DIR)/asm/JSystem/J2D/J2DPicture.o\
	$(BUILD_DIR)/src/JSystem/J2D/J2DPrint.o\
	$(BUILD_DIR)/asm/JSystem/J2D/J2DScreen.o\
	$(BUILD_DIR)/src/JSystem/J2D/J2DTextBox.o\
	$(BUILD_DIR)/asm/JSystem/J2D/J2DWindow.o\
	$(BUILD_DIR)/asm/JSystem/J2D/J2DWindowEx.o\
	$(BUILD_DIR)/src/JSystem/J2D/J2DAnmLoader.o\
	$(BUILD_DIR)/asm/JSystem/J2D/J2DBloSaver.o\
	$(BUILD_DIR)/src/JSystem/J2D/J2DManage.o\
	$(BUILD_DIR)/asm/JSystem/J2D/J2DMatBlock.o\
	$(BUILD_DIR)/asm/JSystem/J2D/J2DMaterial.o\
	$(BUILD_DIR)/asm/JSystem/J2D/J2DMaterialFactory.o\
	$(BUILD_DIR)/asm/JSystem/J2D/J2DPictureEx.o\
	$(BUILD_DIR)/src/JSystem/J2D/J2DTevs.o\
	$(BUILD_DIR)/asm/JSystem/J2D/J2DTextBoxEx.o\
	$(BUILD_DIR)/src/JSystem/J2D/J2DAnimation.o\

DEPENDS += $(J2D_FILES:.o=.d)

$(BUILD_DIR)/src/JSystem/J2D/J2D.a: $(J2D_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(J2D_FILES) > build/J2D_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/J2D_ofiles
