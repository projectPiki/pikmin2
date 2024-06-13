KONO_FILES:=\
	$(BUILD_DIR)/asm/plugProjectKonoU/khWorldMap.o\
	$(BUILD_DIR)/src/plugProjectKonoU/khCaveResult.o\
	$(BUILD_DIR)/src/plugProjectKonoU/khSceneLoader.o\
	$(BUILD_DIR)/src/plugProjectKonoU/newGame2DMgr.o\
	$(BUILD_DIR)/src/plugProjectKonoU/newScreenMgr.o\
	$(BUILD_DIR)/src/plugProjectKonoU/khReadyGo.o\
	$(BUILD_DIR)/src/plugProjectKonoU/khFinalFloor.o\
	$(BUILD_DIR)/asm/plugProjectKonoU/khDayEndResult.o\
	$(BUILD_DIR)/src/plugProjectKonoU/khUtil.o\
	$(BUILD_DIR)/asm/plugProjectKonoU/khFinalResult.o\
	$(BUILD_DIR)/src/plugProjectKonoU/khPayDept.o\
	$(BUILD_DIR)/src/plugProjectKonoU/khWinLose.o\
	$(BUILD_DIR)/src/plugProjectKonoU/khWinLoseReason.o\
	$(BUILD_DIR)/src/plugProjectKonoU/khMailSaveData.o\

DEPENDS += $(KONO_FILES:.o=.d)

$(BUILD_DIR)/src/plugProjectKonoU/plugProjectKonoU.a: $(KONO_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(KONO_FILES) > build/KONO_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/KONO_ofiles
