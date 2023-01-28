# JAudio2, further divided into sublibraries
JAUDIO2_FILES:=\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAS/JAS.a\
	$(BUILD_DIR)/src/JSystem/JAudio2/dsp/dsp.a\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAI/JAI.a\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAD/JAD.a\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAL/JAL.a\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAU/JAU.a\

$(BUILD_DIR)/src/JSystem/JAudio2/JAudio2.a: $(JAUDIO2_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(JAUDIO2_FILES) > build/JAUDIO2_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/JAUDIO2_ofiles
