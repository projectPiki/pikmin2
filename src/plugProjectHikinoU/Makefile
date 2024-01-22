HIKINO_FILES:=\
	$(BUILD_DIR)/asm/plugProjectHikinoU/PSSeq.o\
	$(BUILD_DIR)/asm/plugProjectHikinoU/PSGame.o\
	$(BUILD_DIR)/src/plugProjectHikinoU/PSSystemIF.o\
	$(BUILD_DIR)/asm/plugProjectHikinoU/PSAutoBgm.o\
	$(BUILD_DIR)/asm/plugProjectHikinoU/PSBnkMgr.o\
	$(BUILD_DIR)/src/plugProjectHikinoU/PSTaskBase.o\
	$(BUILD_DIR)/src/plugProjectHikinoU/PSBgmTask.o\
	$(BUILD_DIR)/src/plugProjectHikinoU/PSCreatureMgr.o\
	$(BUILD_DIR)/src/plugProjectHikinoU/PSAutoBgm_MeloArranger.o\
	$(BUILD_DIR)/asm/plugProjectHikinoU/PSSe.o\
	$(BUILD_DIR)/src/plugProjectHikinoU/PSSeBase.o\
	$(BUILD_DIR)/src/plugProjectHikinoU/PSScene.o\
	$(BUILD_DIR)/src/plugProjectHikinoU/PSBgmTrack.o\
	$(BUILD_DIR)/src/plugProjectHikinoU/PSDirector.o\

$(HIKINO_FILES): CFLAGS += -sym on

DEPENDS += $(HIKINO_FILES:.o=.d)

$(BUILD_DIR)/src/plugProjectHikinoU/plugProjectHikinoU.a: $(HIKINO_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(HIKINO_FILES) > build/HIKINO_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/HIKINO_ofiles
