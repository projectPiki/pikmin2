BOOTUP_FILES:=\
	$(BUILD_DIR)/src/sysBootupU/sysBootup.o\

DEPENDS += $(BOOTUP_FILES:.o=.d)

$(BUILD_DIR)/src/sysBootupU/sysBootupU.a: $(BOOTUP_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(BOOTUP_FILES) > build/BOOTUP_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/BOOTUP_ofiles
