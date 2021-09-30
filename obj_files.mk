# Linker order for every file, passed to the Metrowerks linker.

INIT_O_FILES := 						            \
    $(BUILD_DIR)/asm/init.o							\

EXTAB_O_FILES :=                                    \
    $(BUILD_DIR)/asm/extab.o						\

EXTABINDEX_O_FILES :=                               \
    $(BUILD_DIR)/asm/exidx.o						\

TEXT_O_FILES := 						            	\
    $(BUILD_DIR)/asm/text.o								\
    $(BUILD_DIR)/asm/plugProjectYamashitaU/enemyBase.o	\
    $(BUILD_DIR)/asm/plugProjectYamashitaU/pelplant.o	\
    $(BUILD_DIR)/asm/plugProjectYamashitaU/pelplantState.o	\
    $(BUILD_DIR)/asm/plugProjectYamashitaU/enemyInteractBattle.o	\
    $(BUILD_DIR)/asm/plugProjectYamashitaU/generalEnemyMgr.o	\
    $(BUILD_DIR)/asm/text_1.o							\
	$(BUILD_DIR)/asm/plugProjectOgawaU/ogObjSMenuCont.o	\
	$(BUILD_DIR)/asm/plugProjectHikinoU/PSSeq.o			\
	$(BUILD_DIR)/asm/plugProjectHikinoU/PSGame.o		\
	$(BUILD_DIR)/asm/plugProjectHikinoU/PSSystemIF.o	\
	$(BUILD_DIR)/asm/plugProjectHikinoU/PSAutoBgm.o		\
	$(BUILD_DIR)/asm/plugProjectHikinoU/PSBnkMgr.o		\
	$(BUILD_DIR)/asm/plugProjectHikinoU/PSTaskBase.o	\
	$(BUILD_DIR)/asm/plugProjectHikinoU/PSBgmTask.o		\
	$(BUILD_DIR)/asm/plugProjectHikinoU/PSCreatureMgr.o	\
	$(BUILD_DIR)/asm/plugProjectHikinoU/PSAutoBgm_MeloArranger.o	\
	$(BUILD_DIR)/asm/plugProjectHikinoU/PSSe.o			\
	$(BUILD_DIR)/asm/plugProjectHikinoU/PSSeBase.o		\
	$(BUILD_DIR)/asm/plugProjectHikinoU/PSScene.o		\
	$(BUILD_DIR)/asm/plugProjectHikinoU/PSBgmTrack.o	\
	$(BUILD_DIR)/asm/plugProjectHikinoU/PSDirector.o	\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/dayEndCount.o	\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/hurryUp2D.o	\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/gameOver2D.o	\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/testBase.o	\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/bombState.o	\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/bombAnimator.o\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/bombMgr.o		\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/bomb.o		\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/eggState.o	\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/eggAnimator.o	\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/eggMgr.o		\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/egg.o			\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/panModokiState.o		\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/panModokiAnimator.o	\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/panModokiMgr.o		\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/panModoki.o			\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/plantsMgr.o			\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/plantsAnimator.o		\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/plants.o				\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/kingChappyState.o		\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/kingChappyMgr.o		\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/kingChappy.o	\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/miulinState.o	\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/miulinAnimator.o	\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/miulinMgr.o	\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/miulin.o		\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/jigumoState.o	\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/jigumoAnimator.o	\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/jigumoMgr.o	\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/jigumo.o		\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/enemyNestMgr.o	\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/enemyNest.o	\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/tamagoMushiState.o	\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/tamagoMushiAnimator.o	\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/tamagoMushiMgr.o	\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/tamagoMushi.o		\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/zukan2D.o		\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/hiScore2D.o	\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/umiMushiState.o	\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/umiMushiAnimator.o	\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/umiMushiMgr.o	\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/umiMushi.o		\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/shijimiChouState.o	\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/shijimiChouAnimator.o	\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/shijimiChouMgr.o	\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/shijimiChou.o		\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/challengeSelect2D.o		\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/challengeResult2D.o		\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/vsSelect2D.o		\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/mrUtil.o		\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/scrollList.o	\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/mrWindow.o	\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/blackManState.o	\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/blackManAnimator.o	\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/blackManMgr.o	\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/blackMan.o		\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/tyreState.o	\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/tyreAnimator.o	\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/tyreMgr.o	\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/tyre.o		\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/efxBase.o		\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/efxEnemy.o		\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/efxObject.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/efxPikmin.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/particle2dMgr.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/efx2dBase.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/efx2dEffect.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/particleMgr.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiP2Title.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiP2TitleUnit.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiUtility.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiP2TitleCamera.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiP2TitleLight.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiScreenMemoryCard.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/efxTPkEffectMgr.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/efxEnemyGeneral.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebi3DGraph.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiGeometry.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebi2DGraph.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiScreenOption.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiScreenProgre.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiOptionMgr.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebi2DCallBack.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiCardMgr.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiScreenFramework.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiScreenPushStart.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiScreenFileSelect.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiScreenTitleMenu.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiSaveMgr.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiScreenSaveMenu.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiScreenFileSelect_Mgr.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiFileSelectMgr.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiCardMgr_Load.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiP2TitleCoordMgr.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiP2TitlePikmin.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiP2TitleKogane.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiP2TitleChappy.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiScreenTMBack.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiMainTitleMgr.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiP2TitleFog.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/efxEnemyBoss.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiCardEReader.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiScreenOmake.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiOmakeMgr.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiScreenOmakeCardE.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiScreenOmakeGame.o	\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiScreenInfoWindow.o	\
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
    $(BUILD_DIR)/asm/sysBootupU/sysBootup.o	\
    $(BUILD_DIR)/asm/sysCommonU/node.o	\
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
