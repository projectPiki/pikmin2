J3D_FILES:=\
	$(BUILD_DIR)/src/JSystem/J3D/J3DSys.o\
	$(BUILD_DIR)/src/JSystem/J3D/J3DVertex.o\
	$(BUILD_DIR)/src/JSystem/J3D/J3DTransform.o\
	$(BUILD_DIR)/src/JSystem/J3D/J3DPacket.o\
	$(BUILD_DIR)/asm/JSystem/J3D/J3DShape.o\
	$(BUILD_DIR)/asm/JSystem/J3D/J3DMaterial.o\
	$(BUILD_DIR)/asm/JSystem/J3D/J3DTevs.o\
	$(BUILD_DIR)/src/JSystem/J3D/J3DDrawBuffer.o\
	$(BUILD_DIR)/asm/JSystem/J3D/J3DModel.o\
	$(BUILD_DIR)/src/JSystem/J3D/J3DAnimation.o\
	$(BUILD_DIR)/src/JSystem/J3D/J3DMaterialAnm.o\
	$(BUILD_DIR)/asm/JSystem/J3D/J3DCluster.o\
	$(BUILD_DIR)/asm/JSystem/J3D/J3DJoint.o\
	$(BUILD_DIR)/asm/JSystem/J3D/J3DMaterialFactory.o\
	$(BUILD_DIR)/src/JSystem/J3D/J3DBinaryFormat.o\
	$(BUILD_DIR)/src/JSystem/J3D/J3DModelLoader.o\
	$(BUILD_DIR)/src/JSystem/J3D/J3DJointFactory.o\
	$(BUILD_DIR)/src/JSystem/J3D/J3DShapeFactory.o\
	$(BUILD_DIR)/src/JSystem/J3D/J3DAnmLoader.o\
	$(BUILD_DIR)/src/JSystem/J3D/J3DModelSaver.o\
	$(BUILD_DIR)/asm/JSystem/J3D/J3DGD.o\
	$(BUILD_DIR)/asm/JSystem/J3D/J3DMatBlock.o\
	$(BUILD_DIR)/src/JSystem/J3D/J3DModelData.o\
	$(BUILD_DIR)/asm/JSystem/J3D/J3DMaterialAttach.o\
	$(BUILD_DIR)/asm/JSystem/J3D/J3DMaterialFactory_v21.o\
	$(BUILD_DIR)/src/JSystem/J3D/J3DShapeMtx.o\
	$(BUILD_DIR)/asm/JSystem/J3D/J3DModelLoaderCalcSize.o\
	$(BUILD_DIR)/src/JSystem/J3D/J3DJointTree.o\
	$(BUILD_DIR)/src/JSystem/J3D/J3DSkinDeform.o\
	$(BUILD_DIR)/src/JSystem/J3D/J3DShapeDraw.o\
	$(BUILD_DIR)/asm/JSystem/J3D/J3DMtxBuffer.o\
	$(BUILD_DIR)/src/JSystem/J3D/J3DShapeTable.o\

DEPENDS += $(J3D_FILES:.o=.d)

$(BUILD_DIR)/src/JSystem/J3D/J3D.a: $(J3D_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(J3D_FILES) > build/J3D_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/J3D_ofiles
