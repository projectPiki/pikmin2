JSTUDIO_JSTAGE_FILES:=\
	$(BUILD_DIR)/asm/JSystem/JStudio_JStage/object-light.o\
	$(BUILD_DIR)/src/JSystem/JStudio_JStage/object.o\
	$(BUILD_DIR)/src/JSystem/JStudio_JStage/object-actor.o\
	$(BUILD_DIR)/src/JSystem/JStudio_JStage/object-ambientlight.o\
	$(BUILD_DIR)/src/JSystem/JStudio_JStage/object-camera.o\
	$(BUILD_DIR)/src/JSystem/JStudio_JStage/object-fog.o\
	$(BUILD_DIR)/src/JSystem/JStudio_JStage/control.o\

DEPENDS += $(JSTUDIO_JSTAGE_FILES:.o=.d)

$(BUILD_DIR)/src/JSystem/JStudio_JStage/JStudio_JStage.a: $(JSTUDIO_JSTAGE_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(JSTUDIO_JSTAGE_FILES) > build/JSTUDIO_JSTAGE_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/JSTUDIO_JSTAGE_ofiles
