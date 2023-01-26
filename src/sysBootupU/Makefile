BOOTUP_FILES:=\
	$(BUILD_DIR)/src/sysBootupU/sysBootup.o\

BOOTUP_LDFLAGS :=\
	-nodefaults \
	-fp hard \
	-proc gekko \

$(BUILD_DIR)/src/sysBootupU/sysBootupU.a: $(BOOTUP_FILES)
	@echo linking... $@
	@echo $(BOOTUP_FILES) > $(BUILD_DIR)/BOOTUP_ofiles
	$(QUIET) $(LD) -library $(BOOTUP_LDFLAGS) -o $@ -lcf ldscript.lcf @$(BUILD_DIR)/BOOTUP_ofiles

# $(BUILD_DIR)/src/sysBootupU/%.o: %.cpp
# 	@echo "Compiling " $<
# 	$(QUIET) mkdir -p $(dir $@)
# 	$(QUIET) $(CC) $(CFLAGS) -c -o $(dir $@) $(basename $@).cpp
