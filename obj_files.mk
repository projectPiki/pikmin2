# Linker order for every file, passed to the Metrowerks linker.

INIT_O_FILES := 						            \
    $(BUILD_DIR)/asm/init.o							\

EXTAB_O_FILES :=                                    \
    $(BUILD_DIR)/asm/extab.o						\

EXTABINDEX_O_FILES :=                               \
    $(BUILD_DIR)/asm/exidx.o						\

TEXT_O_FILES := 						            	\
    $(BUILD_DIR)/asm/text.o								\
	$(BUILD_DIR)/asm/plugProjectHikinoU/PSCreatureMgr.o	\
    $(BUILD_DIR)/asm/text_2.o							\
    $(BUILD_DIR)/asm/plugProjectKonoU/khWorldMap.o		\
    $(BUILD_DIR)/asm/plugProjectKonoU/khCaveResult.o	\
    $(BUILD_DIR)/asm/plugProjectKonoU/khSceneLoader.o	\
    $(BUILD_DIR)/asm/plugProjectKonoU/newGame2DMgr.o	\
    $(BUILD_DIR)/asm/plugProjectKonoU/newScreenMgr.o	\
    $(BUILD_DIR)/asm/plugProjectKonoU/khReadyGo.o		\
    $(BUILD_DIR)/asm/plugProjectKonoU/khFinalFloor.o	\
    $(BUILD_DIR)/asm/plugProjectKonoU/khDayEndResult.o	\
    $(BUILD_DIR)/asm/plugProjectKonoU/khUtil.o			\
    $(BUILD_DIR)/asm/plugProjectKonoU/khFinalResult.o	\
    $(BUILD_DIR)/asm/plugProjectKonoU/khPayDept.o		\
    $(BUILD_DIR)/asm/plugProjectKonoU/khWinLose.o		\
    $(BUILD_DIR)/asm/plugProjectKonoU/khWinLoseReason.o	\
    $(BUILD_DIR)/asm/plugProjectKonoU/khMailSaveData.o	\
    $(BUILD_DIR)/asm/text_3.o							\

CTORS_O_FILES :=                                    \
    $(BUILD_DIR)/asm/ctors.o						\

DTORS_O_FILES :=                                    \
    $(BUILD_DIR)/asm/dtors.o						\

RODATA_O_FILES :=                                   \
    $(BUILD_DIR)/asm/rodata.o						\

DATA_O_FILES :=                                     \
    $(BUILD_DIR)/asm/data.o							\

BSS_O_FILES :=                                      \
    $(BUILD_DIR)/asm/bss.o							\

SDATA_O_FILES :=                                    \
    $(BUILD_DIR)/asm/sdata.o						\

SBSS_O_FILES :=										\
    $(BUILD_DIR)/asm/sbss.o							\

SDATA2_O_FILES :=                                   \
    $(BUILD_DIR)/asm/sdata2.o						\
	
SBSS2_O_FILES :=									\
    $(BUILD_DIR)/asm/sbss2.o						\
