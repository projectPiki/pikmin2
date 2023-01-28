# Linker order for every file, passed to the Metrowerks linker.

GROUP_0_FILES:=\
	$(BUILD_DIR)/asm/ctors.o\
	$(BUILD_DIR)/asm/dtors.o\

JSYSTEM:=\
	$(BUILD_DIR)/src/JSystem.a\

DOLPHIN:=\
	$(BUILD_DIR)/src/Dolphin.a\

PLUGPROJECT:=\
	$(BUILD_DIR)/src/plugProjectYamashitaU.a\
	$(BUILD_DIR)/src/plugProjectKandoU.a\
	$(BUILD_DIR)/src/plugProjectNishimuraU.a\
	$(BUILD_DIR)/src/plugProjectOgawaU.a\
	$(BUILD_DIR)/src/plugProjectHikinoU.a\
	$(BUILD_DIR)/src/plugProjectMorimuraU.a\
	$(BUILD_DIR)/src/plugProjectEbisawaU.a\
	$(BUILD_DIR)/src/plugProjectKonoU.a\

SYS:=\
	$(BUILD_DIR)/src/sysBootupU.a\
	$(BUILD_DIR)/src/sysCommonU.a\
	$(BUILD_DIR)/src/sysGCU.a\

UTILITY:=\
	$(BUILD_DIR)/src/utilityU.a\
