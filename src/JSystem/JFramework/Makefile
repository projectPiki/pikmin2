JFRAMEWORK_FILES:=\
	$(BUILD_DIR)/src/JSystem/JFramework/JFWSystem.o\
	$(BUILD_DIR)/src/JSystem/JFramework/JFWDisplay.o\

DEPENDS += $(JFRAMEWORK_FILES:.o=.d)

$(BUILD_DIR)/src/JSystem/JFramework/JFramework.a: $(JFRAMEWORK_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(JFRAMEWORK_FILES) > build/JFRAMEWORK_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/JFRAMEWORK_ofiles
