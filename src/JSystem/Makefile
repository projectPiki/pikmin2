# JSystem organised by sublibraries
JSYSTEM_FILES:=\
	$(BUILD_DIR)/src/JSystem/JStudio_JParticle/JStudio_JParticle.a\
	$(BUILD_DIR)/src/JSystem/JMessage/JMessage.a\
	$(BUILD_DIR)/src/JSystem/JStudio/JStudio.a\
	$(BUILD_DIR)/src/JSystem/JStudio_JStage/JStudio_JStage.a\
	$(BUILD_DIR)/src/JSystem/JStudio_JMessage/JStudio_JMessage.a\
	$(BUILD_DIR)/src/JSystem/JStudio_JAudio/JStudio_JAudio.a\
	$(BUILD_DIR)/src/JSystem/J3DU/J3DU.a\
	$(BUILD_DIR)/src/JSystem/JKernel/JKernel.a\
	$(BUILD_DIR)/src/JSystem/JSupport/JSupport.a\
	$(BUILD_DIR)/src/JSystem/JGadget/JGadget.a\
	$(BUILD_DIR)/src/JSystem/JUtility/JUtility.a\
	$(BUILD_DIR)/src/JSystem/JMath/JMath.a\
	$(BUILD_DIR)/src/JSystem/J2D/J2D.a\
	$(BUILD_DIR)/src/JSystem/J3D/J3D.a\
	$(BUILD_DIR)/src/JSystem/JFramework/JFramework.a\
	$(BUILD_DIR)/src/JSystem/JParticle/JParticle.a\
	$(BUILD_DIR)/src/JSystem/JStage/JStage.a\
	$(BUILD_DIR)/src/JSystem/JAudio/JAudio.a\

$(BUILD_DIR)/src/JSystem/JSystem.a: $(JSYSTEM_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(JSYSTEM_FILES) > build/JSYSTEM_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/JSYSTEM_ofiles
