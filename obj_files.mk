# Linker order for every file, passed to the Metrowerks linker.

JSYSTEM:=\
	$(BUILD_DIR)/src/JSystem/JSystem.a\

DOLPHIN:=\
	$(BUILD_DIR)/src/Dolphin/Dolphin.a\

PLUGPROJECT:=\
	$(BUILD_DIR)/src/plugProjectYamashitaU/plugProjectYamashitaU.a\
	$(BUILD_DIR)/src/plugProjectKandoU/plugProjectKandoU.a\
	$(BUILD_DIR)/src/plugProjectNishimuraU/plugProjectNishimuraU.a\
	$(BUILD_DIR)/src/plugProjectOgawaU/plugProjectOgawaU.a\
	$(BUILD_DIR)/src/plugProjectHikinoU/plugProjectHikinoU.a\
	$(BUILD_DIR)/src/plugProjectMorimuraU/plugProjectMorimuraU.a\
	$(BUILD_DIR)/src/plugProjectEbisawaU/plugProjectEbisawaU.a\
	$(BUILD_DIR)/src/plugProjectKonoU/plugProjectKonoU.a\

SYS:=\
	$(BUILD_DIR)/src/sysBootupU/sysBootupU.a\
	$(BUILD_DIR)/src/sysCommonU/sysCommonU.a\
	$(BUILD_DIR)/src/sysGCU/sysGCU.a\

UTILITY:=\
	$(BUILD_DIR)/src/utilityU/utilityU.a\
