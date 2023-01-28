# JSystem organised by sublibraries
JSYSTEM_FILES:=\
	$(BUILD_DIR)/src/JSystem/JStudio_JParticle.a\
	$(BUILD_DIR)/src/JSystem/JMessage.a\
	$(BUILD_DIR)/src/JSystem/JStudio.a\
	$(BUILD_DIR)/src/JSystem/JStudio_JStage.a\
	$(BUILD_DIR)/src/JSystem/JStudio_JMessage.a\
	$(BUILD_DIR)/src/JSystem/JStudio_JAudio.a\
	$(BUILD_DIR)/src/JSystem/J3DU.a\
	$(BUILD_DIR)/src/JSystem/JKernel.a\
	$(BUILD_DIR)/src/JSystem/JSupport.a\
	$(BUILD_DIR)/src/JSystem/JGadget.a\
	$(BUILD_DIR)/src/JSystem/JUtility.a\
	$(BUILD_DIR)/src/JSystem/JMath.a\
	$(BUILD_DIR)/src/JSystem/J2D.a\
	$(BUILD_DIR)/src/JSystem/J3D.a\
	$(BUILD_DIR)/src/JSystem/JFramework.a\
	$(BUILD_DIR)/src/JSystem/JParticle.a\
	$(BUILD_DIR)/src/JSystem/JStage.a\
	$(BUILD_DIR)/src/JSystem/JAudio2.a\

$(BUILD_DIR)/src/JSystem.a: $(JSYSTEM_FILES)
	@echo linking... $@
	@echo $(JSYSTEM_FILES) > build/JSYSTEM_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/JSYSTEM_ofiles
