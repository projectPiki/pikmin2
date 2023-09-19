AI_FILES:=\
	$(BUILD_DIR)/src/Dolphin/ai/ai.o\

$(AI_FILES): CFLAGS += -common off -str noreadonly

DEPENDS += $(AI_FILES:.o=.d)

$(BUILD_DIR)/src/Dolphin/ai/ai.a: $(AI_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(AI_FILES) > build/AI_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/AI_ofiles
