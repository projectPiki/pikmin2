J3DU_FILES:=\
	$(BUILD_DIR)/src/JSystem/J3DU/J3DUDL.o\
	$(BUILD_DIR)/src/JSystem/J3DU/J3DUMotion.o\
	$(BUILD_DIR)/src/JSystem/J3DU/J3DUShadow.o\
	$(BUILD_DIR)/src/JSystem/J3DU/J3DUMtxCache.o\

DEPENDS += $(J3DU_FILES:.o=.d)

$(BUILD_DIR)/src/JSystem/J3DU/J3DU.a: $(J3DU_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(J3DU_FILES) > build/J3DU_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/J3DU_ofiles
