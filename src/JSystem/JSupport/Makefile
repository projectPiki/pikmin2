JSUPPORT_FILES:=\
	$(BUILD_DIR)/src/JSystem/JSupport/JSUOutputStream.o\
	$(BUILD_DIR)/src/JSystem/JSupport/JSUInputStream.o\
	$(BUILD_DIR)/src/JSystem/JSupport/JSUList.o\
	$(BUILD_DIR)/src/JSystem/JSupport/JSUMemoryStream.o\
	$(BUILD_DIR)/src/JSystem/JSupport/JSUFileStream.o\

DEPENDS += $(JSUPPORT_FILES:.o=.d)

$(BUILD_DIR)/src/JSystem/JSupport/JSupport.a: $(JSUPPORT_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(JSUPPORT_FILES) > build/JSUPPORT_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/JSUPPORT_ofiles
