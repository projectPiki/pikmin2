COMMON_FILES:=\
	$(BUILD_DIR)/src/sysCommonU/node.o\
	$(BUILD_DIR)/asm/sysCommonU/sysMath.o\
	$(BUILD_DIR)/src/sysCommonU/id32.o\
	$(BUILD_DIR)/src/sysCommonU/parameters.o\
	$(BUILD_DIR)/src/sysCommonU/stream.o\
	$(BUILD_DIR)/asm/sysCommonU/geometry.o\
	$(BUILD_DIR)/src/sysCommonU/mapCollision.o\
	$(BUILD_DIR)/asm/sysCommonU/camera.o\
	$(BUILD_DIR)/src/sysCommonU/tagparams.o\
	$(BUILD_DIR)/src/sysCommonU/sysTemplates.o\
	$(BUILD_DIR)/src/sysCommonU/mapCode.o\
	$(BUILD_DIR)/asm/sysCommonU/geomIntersection.o\
	$(BUILD_DIR)/asm/sysCommonU/geomOBBTree.o\
	$(BUILD_DIR)/asm/sysCommonU/geomTraceMove.o\
	$(BUILD_DIR)/src/sysCommonU/geomCylinder.o\
	$(BUILD_DIR)/src/sysCommonU/geomClone.o\

DEPENDS += $(COMMON_FILES:.o=.d)

$(BUILD_DIR)/src/sysCommonU/sysCommonU.a: $(COMMON_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(COMMON_FILES) > build/COMMON_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/COMMON_ofiles
