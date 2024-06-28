JSTUDIO_FILES:=\
	$(BUILD_DIR)/src/JSystem/JStudio/stb-data-parse.o\
	$(BUILD_DIR)/asm/JSystem/JStudio/functionvalue.o\
	$(BUILD_DIR)/asm/JSystem/JStudio/fvb.o\
	$(BUILD_DIR)/src/JSystem/JStudio/fvb-data.o\
	$(BUILD_DIR)/src/JSystem/JStudio/fvb-data-parse.o\
	$(BUILD_DIR)/src/JSystem/JStudio/jstudio-control.o\
	$(BUILD_DIR)/src/JSystem/JStudio/jstudio-data.o\
	$(BUILD_DIR)/asm/JSystem/JStudio/jstudio-object.o\
	$(BUILD_DIR)/src/JSystem/JStudio/object-id.o\
	$(BUILD_DIR)/src/JSystem/JStudio/stb.o\
	$(BUILD_DIR)/src/JSystem/JStudio/stb-data.o\
	$(BUILD_DIR)/src/JSystem/JStudio/jstudio-math.o\

DEPENDS += $(JSTUDIO_FILES:.o=.d)

$(BUILD_DIR)/src/JSystem/JStudio/JStudio.a: $(JSTUDIO_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(JSTUDIO_FILES) > build/JSTUDIO_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/JSTUDIO_ofiles
