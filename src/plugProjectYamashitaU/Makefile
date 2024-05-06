YAMASHITA_FILES:=\
	$(BUILD_DIR)/src/plugProjectYamashitaU/enemyBase.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/pelplant.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/pelplantState.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/enemyInteractBattle.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/generalEnemyMgr.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/kochappyAnimator.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/kochappy.o\
	$(BUILD_DIR)/asm/plugProjectYamashitaU/kochappyState.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/kochappyMgr.o\
	$(BUILD_DIR)/asm/plugProjectYamashitaU/enemyAction.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/chappy.o\
	$(BUILD_DIR)/asm/plugProjectYamashitaU/chappyState.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/chappyAnimator.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/chappyMgr.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/lifeGaugeMgr.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/carryInfoMgr.o\
	$(BUILD_DIR)/asm/plugProjectYamashitaU/gameLightMgr.o\
	$(BUILD_DIR)/asm/plugProjectYamashitaU/vtxAnm.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/enemyInfo.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/farm.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/farmMgr.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/genEnemy.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/timeMgr.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/pelplantGenerator.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/enemyInteractActions.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/enemyAnimatorBase.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/enemyStoneMgr.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/enemyStoenInfo.o\
	$(BUILD_DIR)/asm/plugProjectYamashitaU/enemyStoneDrawInfo.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/enemyStoneObj.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/enemyParmsBase.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/walkSmokeEffect.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/ChappyBaseMgr.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/ChappyBase.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/BlueChappyMgr.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/BlueChappy.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/YellowChappyMgr.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/YellowChappy.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/BlueKochappyMgr.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/BlueKochappy.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/YellowKochappy.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/YellowKochappyMgr.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/KochappyBaseMgr.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/KochappyBase.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/enemyBlendAnimatorBase.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/enemyPelletInfo.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/enemyEffectNode.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/enemyMgrBase.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/enemyFSM.o\
	$(BUILD_DIR)/asm/plugProjectYamashitaU/singleGS_ZukanParms.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/treasureLightMgr.o\
	$(BUILD_DIR)/src/plugProjectYamashitaU/effectAnimator.o\

DEPENDS += $(YAMASHITA_FILES:.o=.d)

$(BUILD_DIR)/src/plugProjectYamashitaU/plugProjectYamashitaU.a: $(YAMASHITA_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(YAMASHITA_FILES) > build/YAMASHITA_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/YAMASHITA_ofiles
