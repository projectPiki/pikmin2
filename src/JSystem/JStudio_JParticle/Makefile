JSTUDIO_JPARTICLE_FILES:=\
	$(BUILD_DIR)/asm/JSystem/JStudio_JParticle/object-particle.o\
	$(BUILD_DIR)/src/JSystem/JStudio_JParticle/control.o\

DEPENDS += $(JSTUDIO_JPARTICLE_FILES:.o=.d)

$(BUILD_DIR)/src/JSystem/JStudio_JParticle/JStudio_JParticle.a: $(JSTUDIO_JPARTICLE_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(JSTUDIO_JPARTICLE_FILES) > build/JSTUDIO_JPARTICLE_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/JSTUDIO_JPARTICLE_ofiles
