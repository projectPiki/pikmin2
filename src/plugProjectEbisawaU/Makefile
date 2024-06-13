EBISAWA_FILES:=\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/efxBase.o\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/efxEnemy.o\
	$(BUILD_DIR)/src/plugProjectEbisawaU/efxObject.o\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/efxPikmin.o\
	$(BUILD_DIR)/src/plugProjectEbisawaU/particle2dMgr.o\
	$(BUILD_DIR)/src/plugProjectEbisawaU/efx2dBase.o\
	$(BUILD_DIR)/src/plugProjectEbisawaU/efx2dEffect.o\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/particleMgr.o\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiP2Title.o\
	$(BUILD_DIR)/src/plugProjectEbisawaU/ebiP2TitleUnit.o\
	$(BUILD_DIR)/src/plugProjectEbisawaU/ebiUtility.o\
	$(BUILD_DIR)/src/plugProjectEbisawaU/ebiP2TitleCamera.o\
	$(BUILD_DIR)/src/plugProjectEbisawaU/ebiP2TitleLight.o\
	$(BUILD_DIR)/src/plugProjectEbisawaU/ebiScreenMemoryCard.o\
	$(BUILD_DIR)/src/plugProjectEbisawaU/efxTPkEffectMgr.o\
	$(BUILD_DIR)/src/plugProjectEbisawaU/efxEnemyGeneral.o\
	$(BUILD_DIR)/src/plugProjectEbisawaU/ebi3DGraph.o\
	$(BUILD_DIR)/src/plugProjectEbisawaU/ebiGeometry.o\
	$(BUILD_DIR)/src/plugProjectEbisawaU/ebi2DGraph.o\
	$(BUILD_DIR)/src/plugProjectEbisawaU/ebiScreenOption.o\
	$(BUILD_DIR)/src/plugProjectEbisawaU/ebiScreenProgre.o\
	$(BUILD_DIR)/src/plugProjectEbisawaU/ebiOptionMgr.o\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebi2DCallBack.o\
	$(BUILD_DIR)/src/plugProjectEbisawaU/ebiCardMgr.o\
	$(BUILD_DIR)/src/plugProjectEbisawaU/ebiScreenFramework.o\
	$(BUILD_DIR)/src/plugProjectEbisawaU/ebiScreenPushStart.o\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiScreenFileSelect.o\
	$(BUILD_DIR)/src/plugProjectEbisawaU/ebiScreenTitleMenu.o\
	$(BUILD_DIR)/src/plugProjectEbisawaU/ebiSaveMgr.o\
	$(BUILD_DIR)/src/plugProjectEbisawaU/ebiScreenSaveMenu.o\
	$(BUILD_DIR)/src/plugProjectEbisawaU/ebiScreenFileSelect_Mgr.o\
	$(BUILD_DIR)/src/plugProjectEbisawaU/ebiFileSelectMgr.o\
	$(BUILD_DIR)/src/plugProjectEbisawaU/ebiCardMgr_Load.o\
	$(BUILD_DIR)/src/plugProjectEbisawaU/ebiP2TitleCoordMgr.o\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiP2TitlePikmin.o\
	$(BUILD_DIR)/src/plugProjectEbisawaU/ebiP2TitleKogane.o\
	$(BUILD_DIR)/src/plugProjectEbisawaU/ebiP2TitleChappy.o\
	$(BUILD_DIR)/src/plugProjectEbisawaU/ebiScreenTMBack.o\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiMainTitleMgr.o\
	$(BUILD_DIR)/src/plugProjectEbisawaU/ebiP2TitleFog.o\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/efxEnemyBoss.o\
	$(BUILD_DIR)/src/plugProjectEbisawaU/ebiCardEReader.o\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiScreenOmake.o\
	$(BUILD_DIR)/asm/plugProjectEbisawaU/ebiOmakeMgr.o\
	$(BUILD_DIR)/src/plugProjectEbisawaU/ebiScreenOmakeCardE.o\
	$(BUILD_DIR)/src/plugProjectEbisawaU/ebiScreenOmakeGame.o\
	$(BUILD_DIR)/src/plugProjectEbisawaU/ebiScreenInfoWindow.o\

$(BUILD_DIR)/src/plugProjectEbisawaU/ebiScreenFileSelect.o: CFLAGS += -sym on
$(BUILD_DIR)/src/plugProjectEbisawaU/ebiScreenFileSelect_Mgr.o: CFLAGS += -sym on
$(BUILD_DIR)/src/plugProjectEbisawaU/ebiP2TitlePikmin.o: CFLAGS += -sym on
$(BUILD_DIR)/src/plugProjectEbisawaU/ebiP2TitleKogane.o: CFLAGS += -sym on
$(BUILD_DIR)/src/plugProjectEbisawaU/ebiP2TitleChappy.o: CFLAGS += -sym on
$(BUILD_DIR)/src/plugProjectEbisawaU/ebiScreenTMBack.o: CFLAGS += -sym on
$(BUILD_DIR)/src/plugProjectEbisawaU/ebiMainTitleMgr.o: CFLAGS += -sym on
$(BUILD_DIR)/src/plugProjectEbisawaU/efxEnemyBoss.o: CFLAGS += -sym on
$(BUILD_DIR)/src/plugProjectEbisawaU/ebiScreenOmake.o: CFLAGS += -sym on
$(BUILD_DIR)/src/plugProjectEbisawaU/ebiOmakeMgr.o: CFLAGS += -sym on
$(BUILD_DIR)/src/plugProjectEbisawaU/ebiScreenOmakeCardE.o: CFLAGS += -sym on
$(BUILD_DIR)/src/plugProjectEbisawaU/ebiScreenOmakeGame.o: CFLAGS += -sym on
$(BUILD_DIR)/src/plugProjectEbisawaU/ebiScreenInfoWindow.o: CFLAGS += -sym on

DEPENDS += $(EBISAWA_FILES:.o=.d)

$(BUILD_DIR)/src/plugProjectEbisawaU/plugProjectEbisawaU.a: $(EBISAWA_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(EBISAWA_FILES) > build/EBISAWA_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/EBISAWA_ofiles
