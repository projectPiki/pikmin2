# JAudio2, further divided into sublibraries
JAUDIO2_FILES:=\
	$(BUILD_DIR)/src/JSystem/JAudio/JAS/JAS.a\
	$(BUILD_DIR)/src/JSystem/JAudio/dsp/dsp.a\
	$(BUILD_DIR)/src/JSystem/JAudio/JAI/JAI.a\
	$(BUILD_DIR)/src/JSystem/JAudio/JAD/JAD.a\
	$(BUILD_DIR)/src/JSystem/JAudio/JAL/JAL.a\
	$(BUILD_DIR)/src/JSystem/JAudio/JAU/JAU.a\

$(BUILD_DIR)/src/JSystem/JAudio/JAudio2.a: $(JAUDIO2_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(JAUDIO2_FILES) > build/JAUDIO2_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/JAUDIO2_ofiles
