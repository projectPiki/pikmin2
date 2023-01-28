JSTAGE_FILES:=\
	$(BUILD_DIR)/src/JSystem/JStage/JSGSystem.o\
	$(BUILD_DIR)/src/JSystem/JStage/JSGCamera.o\
	$(BUILD_DIR)/src/JSystem/JStage/JSGObject.o\
	$(BUILD_DIR)/src/JSystem/JStage/JSGActor.o\

DEPENDS += $(JSTAGE_FILES:.o=.d)

$(BUILD_DIR)/src/JSystem/JStage/JStage.a: $(JSTAGE_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(JSTAGE_FILES) > build/JSTAGE_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/JSTAGE_ofiles
