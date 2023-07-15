DVD_FILES:=\
	$(BUILD_DIR)/src/Dolphin/dvd/dvdlow.o\
	$(BUILD_DIR)/src/Dolphin/dvd/dvdfs.o\
	$(BUILD_DIR)/src/Dolphin/dvd/dvd.o\
	$(BUILD_DIR)/src/Dolphin/dvd/dvdqueue.o\
	$(BUILD_DIR)/src/Dolphin/dvd/dvderror.o\
	$(BUILD_DIR)/src/Dolphin/dvd/dvdidutils.o\
	$(BUILD_DIR)/src/Dolphin/dvd/dvdFatal.o\
	$(BUILD_DIR)/src/Dolphin/dvd/fstload.o\

$(DVD_FILES): CFLAGS += -common off -str noreadonly
$(DVD_FILES): MWCC_VERSION := 1.2.5n

DEPENDS += $(DVD_FILES:.o=.d)

$(BUILD_DIR)/src/Dolphin/dvd/dvd.a: $(DVD_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(DVD_FILES) > build/DVD_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/DVD_ofiles
