BOOTUP_FILES:=\
	$(BUILD_DIR)/src/sysBootupU/sysBootup.o\

DEPENDS += $(BOOTUP_FILES:.o=.d)

$(BUILD_DIR)/src/sysBootupU/sysBootupU.a: $(BOOTUP_FILES)
	@echo linking... $@
	@echo $(BOOTUP_FILES) > $(BUILD_DIR)/BOOTUP_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @$(BUILD_DIR)/BOOTUP_ofiles
