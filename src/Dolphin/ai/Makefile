AI_FILES:=\
	$(BUILD_DIR)/asm/Dolphin/ai/ai.o\

$(AI_FILES): CFLAGS += -common off

DEPENDS += $(AI_FILES:.o=.d)

$(BUILD_DIR)/src/Dolphin/ai.a: $(AI_FILES)
	@echo linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(AI_FILES) > build/AI_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/AI_ofiles
