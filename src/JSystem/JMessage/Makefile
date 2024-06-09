JMESSAGE_FILES:=\
	$(BUILD_DIR)/asm/JSystem/JMessage/resource.o\
	$(BUILD_DIR)/src/JSystem/JMessage/data.o\
	$(BUILD_DIR)/asm/JSystem/JMessage/processor.o\
	$(BUILD_DIR)/src/JSystem/JMessage/control.o\

DEPENDS += $(JMESSAGE_FILES:.o=.d)

$(BUILD_DIR)/src/JSystem/JMessage/JMessage.a: $(JMESSAGE_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(JMESSAGE_FILES) > build/JMESSAGE_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/JMESSAGE_ofiles
