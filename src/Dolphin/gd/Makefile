GD_FILES:=\
	$(BUILD_DIR)/src/Dolphin/gd/GDBase.o\
	$(BUILD_DIR)/src/Dolphin/gd/GDGeometry.o\

$(GD_FILES): CFLAGS += -common off
$(GD_FILES): MWCC_VERSION := 1.2.5n

DEPENDS += $(GD_FILES:.o=.d)

$(BUILD_DIR)/src/Dolphin/gd/gd.a: $(GD_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(GD_FILES) > build/GD_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/GD_ofiles
