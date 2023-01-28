JGADGET_FILES:=\
	$(BUILD_DIR)/asm/JSystem/JGadget/binary.o\
	$(BUILD_DIR)/asm/JSystem/JGadget/linklist.o\
	$(BUILD_DIR)/asm/JSystem/JGadget/std-list.o\
	$(BUILD_DIR)/asm/JSystem/JGadget/std-vector.o\

DEPENDS += $(JGADGET_FILES:.o=.d)

$(BUILD_DIR)/src/JSystem/JGadget.a: $(JGADGET_FILES)
	@echo linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(JGADGET_FILES) > build/JGADGET_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/JGADGET_ofiles
