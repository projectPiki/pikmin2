DB_FILES:=\
	$(BUILD_DIR)/src/Dolphin/db/db.o\

$(DB_FILES): CFLAGS += -common off -str noreadonly
$(DB_FILES): MWCC_VERSION := 1.2.5

DEPENDS += $(DB_FILES:.o=.d)

$(BUILD_DIR)/src/Dolphin/db/db.a: $(DB_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(DB_FILES) > build/DB_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/DB_ofiles
