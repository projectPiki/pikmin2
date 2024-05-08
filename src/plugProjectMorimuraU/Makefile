MORIMURA_FILES:=\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/dayEndCount.o\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/hurryUp2D.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/gameOver2D.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/testBase.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/bombState.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/bombAnimator.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/bombMgr.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/bomb.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/eggState.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/eggAnimator.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/eggMgr.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/egg.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/panModokiState.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/panModokiAnimator.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/panModokiMgr.o\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/panModoki.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/plantsMgr.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/plantsAnimator.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/plants.o\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/kingChappyState.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/kingChappyMgr.o\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/kingChappy.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/miulinState.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/miulinAnimator.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/miulinMgr.o\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/miulin.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/jigumoState.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/jigumoAnimator.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/jigumoMgr.o\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/jigumo.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/enemyNestMgr.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/enemyNest.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/tamagoMushiState.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/tamagoMushiAnimator.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/tamagoMushiMgr.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/tamagoMushi.o\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/zukan2D.o\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/hiScore2D.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/umiMushiState.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/umiMushiAnimator.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/umiMushiMgr.o\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/umiMushi.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/shijimiChouState.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/shijimiChouAnimator.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/shijimiChouMgr.o\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/shijimiChou.o\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/challengeSelect2D.o\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/challengeResult2D.o\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/vsSelect2D.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/mrUtil.o\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/scrollList.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/mrWindow.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/blackManState.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/blackManAnimator.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/blackManMgr.o\
	$(BUILD_DIR)/asm/plugProjectMorimuraU/blackMan.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/tyreState.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/tyreAnimator.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/tyreMgr.o\
	$(BUILD_DIR)/src/plugProjectMorimuraU/tyre.o\

DEPENDS += $(MORIMURA_FILES:.o=.d)

$(BUILD_DIR)/src/plugProjectMorimuraU/plugProjectMorimuraU.a: $(MORIMURA_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(MORIMURA_FILES) > build/MORIMURA_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/MORIMURA_ofiles
