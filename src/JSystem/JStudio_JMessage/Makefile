JSTUDIO_JMESSAGE_FILES:=\
	$(BUILD_DIR)/src/JSystem/JStudio_JMessage/object-message.o\
	$(BUILD_DIR)/src/JSystem/JStudio_JMessage/control.o\

DEPENDS += $(JSTUDIO_JMESSAGE_FILES:.o=.d)

$(BUILD_DIR)/src/JSystem/JStudio_JMessage/JStudio_JMessage.a: $(JSTUDIO_JMESSAGE_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(JSTUDIO_JMESSAGE_FILES) > build/JSTUDIO_JMESSAGE_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/JSTUDIO_JMESSAGE_ofiles
