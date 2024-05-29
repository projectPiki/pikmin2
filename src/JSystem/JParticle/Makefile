JPARTICLE_FILES:=\
	$(BUILD_DIR)/asm/JSystem/JParticle/JPABaseShape.o\
	$(BUILD_DIR)/src/JSystem/JParticle/JPAChildShape.o\
	$(BUILD_DIR)/asm/JSystem/JParticle/JPADynamicsBlock.o\
	$(BUILD_DIR)/src/JSystem/JParticle/JPAEmitter.o\
	$(BUILD_DIR)/src/JSystem/JParticle/JPAEmitterManager.o\
	$(BUILD_DIR)/src/JSystem/JParticle/JPAExTexShape.o\
	$(BUILD_DIR)/src/JSystem/JParticle/JPAExtraShape.o\
	$(BUILD_DIR)/src/JSystem/JParticle/JPAFieldBlock.o\
	$(BUILD_DIR)/src/JSystem/JParticle/JPAKeyBlock.o\
	$(BUILD_DIR)/asm/JSystem/JParticle/JPAMath.o\
	$(BUILD_DIR)/src/JSystem/JParticle/JPAParticle.o\
	$(BUILD_DIR)/asm/JSystem/JParticle/JPAResource.o\
	$(BUILD_DIR)/asm/JSystem/JParticle/JPAResourceLoader.o\
	$(BUILD_DIR)/src/JSystem/JParticle/JPAResourceManager.o\
	$(BUILD_DIR)/src/JSystem/JParticle/JPATexture.o\

DEPENDS += $(JPARTICLE_FILES:.o=.d)

$(BUILD_DIR)/src/JSystem/JParticle/JParticle.a: $(JPARTICLE_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(JPARTICLE_FILES) > build/JPARTICLE_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/JPARTICLE_ofiles
