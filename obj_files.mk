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
    $(BUILD_DIR)/asm/sysCommonU/sysMath.o	\
    $(BUILD_DIR)/asm/sysCommonU/id32.o	\
    $(BUILD_DIR)/asm/sysCommonU/parameters.o	\
    $(BUILD_DIR)/asm/sysCommonU/stream.o	\
    $(BUILD_DIR)/asm/sysCommonU/geometry.o	\
    $(BUILD_DIR)/asm/sysCommonU/mapCollision.o	\
    $(BUILD_DIR)/asm/sysCommonU/camera.o	\
    $(BUILD_DIR)/asm/sysCommonU/tagparams.o	\
    $(BUILD_DIR)/asm/sysCommonU/sysTemplates.o	\
    $(BUILD_DIR)/asm/sysCommonU/mapCode.o	\
    $(BUILD_DIR)/asm/sysCommonU/geomIntersection.o	\
    $(BUILD_DIR)/asm/sysCommonU/geomOBBTree.o	\
    $(BUILD_DIR)/asm/sysCommonU/geomTraceMove.o	\
    $(BUILD_DIR)/asm/sysCommonU/geomCylinder.o	\
    $(BUILD_DIR)/asm/sysCommonU/geomClone.o	\
    $(BUILD_DIR)/asm/sysGCU/system.o	\
    $(BUILD_DIR)/asm/sysGCU/section.o	\
    $(BUILD_DIR)/asm/sysGCU/gameflow.o	\
    $(BUILD_DIR)/asm/sysGCU/menuSection.o	\
    $(BUILD_DIR)/asm/sysGCU/dvdThread.o	\
    $(BUILD_DIR)/asm/sysGCU/appThread.o	\
    $(BUILD_DIR)/asm/sysGCU/controller.o	\
    $(BUILD_DIR)/asm/sysGCU/graphics.o	\
    $(BUILD_DIR)/asm/sysGCU/matMath.o	\
    $(BUILD_DIR)/asm/sysGCU/sysShape.o	\
    $(BUILD_DIR)/asm/sysGCU/reset.o	\
    $(BUILD_DIR)/asm/sysGCU/dvdStatus.o	\
    $(BUILD_DIR)/asm/sysGCU/sysTimers.o	\
    $(BUILD_DIR)/asm/sysGCU/modelMgr.o	\
    $(BUILD_DIR)/asm/sysGCU/heapStatus.o	\
    $(BUILD_DIR)/asm/sysGCU/light.o	\
    $(BUILD_DIR)/asm/sysGCU/wipe.o	\
    $(BUILD_DIR)/asm/sysGCU/moviePlayer.o	\
    $(BUILD_DIR)/asm/sysGCU/JSTObjectActor.o	\
    $(BUILD_DIR)/asm/sysGCU/JSTObjectCamera.o	\
    $(BUILD_DIR)/asm/sysGCU/JSTObjectGameActor.o	\
    $(BUILD_DIR)/asm/sysGCU/JSTObjectSystem.o	\
    $(BUILD_DIR)/asm/sysGCU/JSTFindCreature.o	\
    $(BUILD_DIR)/asm/sysGCU/movieConfig.o	\
    $(BUILD_DIR)/asm/sysGCU/gameConfig.o	\
    $(BUILD_DIR)/asm/sysGCU/fogMgr.o	\
    $(BUILD_DIR)/asm/sysGCU/aramMgr.o	\
    $(BUILD_DIR)/asm/sysGCU/resourceMgr.o	\
    $(BUILD_DIR)/asm/sysGCU/resourceMgr2D.o	\
    $(BUILD_DIR)/asm/sysGCU/sysMaterialAnim.o	\
    $(BUILD_DIR)/asm/sysGCU/P2DScreen.o	\
    $(BUILD_DIR)/asm/sysGCU/movieMessage.o	\
    $(BUILD_DIR)/asm/sysGCU/moviePlayerPauseAndDraw.o	\
    $(BUILD_DIR)/asm/sysGCU/JSTObjectSpecialActor.o	\
    $(BUILD_DIR)/asm/sysGCU/messageSequence.o	\
    $(BUILD_DIR)/asm/sysGCU/messageMgr.o	\
    $(BUILD_DIR)/asm/sysGCU/messageObj.o	\
    $(BUILD_DIR)/asm/sysGCU/messageRendering.o	\
    $(BUILD_DIR)/asm/sysGCU/message.o	\
    $(BUILD_DIR)/asm/sysGCU/modelEffect.o	\
    $(BUILD_DIR)/asm/sysGCU/messageReference.o	\
    $(BUILD_DIR)/asm/sysGCU/simpleMessage.o	\
    $(BUILD_DIR)/asm/sysGCU/sysShapeAnimation.o	\
    $(BUILD_DIR)/asm/sysGCU/sysShapeModel.o	\
    $(BUILD_DIR)/asm/sysGCU/windowMessage.o	\
    $(BUILD_DIR)/asm/sysGCU/memoryCard.o	\
    $(BUILD_DIR)/asm/sysGCU/pikmin2MemoryCardMgr.o	\
    $(BUILD_DIR)/asm/sysGCU/commonSaveData.o	\
    $(BUILD_DIR)/asm/sysGCU/bootSection.o	\
    $(BUILD_DIR)/asm/sysGCU/titleSection.o	\
    $(BUILD_DIR)/asm/sysGCU/loadResource.o	\
    $(BUILD_DIR)/asm/sysGCU/rootMenuSection.o	\
    $(BUILD_DIR)/asm/sysGCU/demoSection.o	\
    $(BUILD_DIR)/asm/sysGCU/THPAudioDecode.o	\
    $(BUILD_DIR)/asm/sysGCU/THPDraw.o	\
    $(BUILD_DIR)/asm/sysGCU/THPPlayer.o	\
    $(BUILD_DIR)/asm/sysGCU/THPRead.o	\
    $(BUILD_DIR)/asm/sysGCU/THPVideoDecode.o	\
    $(BUILD_DIR)/asm/sysGCU/pikmin2THPPlayer.o	\
    $(BUILD_DIR)/asm/sysGCU/captionMgr.o	\
    $(BUILD_DIR)/asm/sysGCU/captionMessage.o	\
    $(BUILD_DIR)/asm/sysGCU/screenScene.o	\
    $(BUILD_DIR)/asm/sysGCU/screenMgr.o	\
    $(BUILD_DIR)/asm/sysGCU/screenObj.o	\
    $(BUILD_DIR)/asm/sysGCU/JSTObjectParticleActor.o	\
    $(BUILD_DIR)/asm/sysGCU/moviePlayerAudio.o	\
    $(BUILD_DIR)/asm/sysGCU/illustratedBookMessage.o	\
    $(BUILD_DIR)/asm/sysGCU/sysDrawBuffer.o	\
    $(BUILD_DIR)/asm/sysGCU/pikmin2AramMgr.o	\
    $(BUILD_DIR)/asm/sysGCU/messageAnalyzer.o	\
    $(BUILD_DIR)/asm/utilityU/menu.o	\
    $(BUILD_DIR)/asm/utilityU/PSMainSide_Director.o	\
    $(BUILD_DIR)/asm/utilityU/PSMainSide_Factory.o	\
    $(BUILD_DIR)/asm/utilityU/PSMainSide_ObjSound.o	\
    $(BUILD_DIR)/asm/utilityU/PSMainSide_Demo.o	\
    $(BUILD_DIR)/asm/utilityU/PSMainSide_Scene.o	\
    $(BUILD_DIR)/asm/utilityU/PSMainSide_BossMgr.o	\
    $(BUILD_DIR)/asm/utilityU/PSMainSide_Se.o	\
    $(BUILD_DIR)/asm/utilityU/PSMainSide_DirectorMgr.o	\
    $(BUILD_DIR)/asm/utilityU/PSMainSide_Sound.o	\
    $(BUILD_DIR)/asm/utilityU/PSMainSide_TrackMap.o	\
    $(BUILD_DIR)/asm/utilityU/PSMainSide_CreaturePrm.o	\
    $(BUILD_DIR)/asm/utilityU/PSMainSide_ObjCalc.o	\

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
