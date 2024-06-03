GC_FILES:=\
	$(BUILD_DIR)/asm/sysGCU/system.o\
	$(BUILD_DIR)/asm/sysGCU/section.o\
	$(BUILD_DIR)/src/sysGCU/gameflow.o\
	$(BUILD_DIR)/src/sysGCU/menuSection.o\
	$(BUILD_DIR)/src/sysGCU/dvdThread.o\
	$(BUILD_DIR)/src/sysGCU/appThread.o\
	$(BUILD_DIR)/src/sysGCU/controller.o\
	$(BUILD_DIR)/asm/sysGCU/graphics.o\
	$(BUILD_DIR)/asm/sysGCU/matMath.o\
	$(BUILD_DIR)/src/sysGCU/sysShape.o\
	$(BUILD_DIR)/src/sysGCU/reset.o\
	$(BUILD_DIR)/src/sysGCU/dvdStatus.o\
	$(BUILD_DIR)/src/sysGCU/sysTimers.o\
	$(BUILD_DIR)/src/sysGCU/modelMgr.o\
	$(BUILD_DIR)/src/sysGCU/heapStatus.o\
	$(BUILD_DIR)/src/sysGCU/light.o\
	$(BUILD_DIR)/src/sysGCU/wipe.o\
	$(BUILD_DIR)/asm/sysGCU/moviePlayer.o\
	$(BUILD_DIR)/asm/sysGCU/JSTObjectActor.o\
	$(BUILD_DIR)/asm/sysGCU/JSTObjectCamera.o\
	$(BUILD_DIR)/asm/sysGCU/JSTObjectGameActor.o\
	$(BUILD_DIR)/asm/sysGCU/JSTObjectSystem.o\
	$(BUILD_DIR)/src/sysGCU/JSTFindCreature.o\
	$(BUILD_DIR)/src/sysGCU/movieConfig.o\
	$(BUILD_DIR)/src/sysGCU/gameConfig.o\
	$(BUILD_DIR)/src/sysGCU/fogMgr.o\
	$(BUILD_DIR)/asm/sysGCU/aramMgr.o\
	$(BUILD_DIR)/src/sysGCU/resourceMgr.o\
	$(BUILD_DIR)/src/sysGCU/resourceMgr2D.o\
	$(BUILD_DIR)/src/sysGCU/sysMaterialAnim.o\
	$(BUILD_DIR)/src/sysGCU/P2DScreen.o\
	$(BUILD_DIR)/asm/sysGCU/movieMessage.o\
	$(BUILD_DIR)/src/sysGCU/moviePlayerPauseAndDraw.o\
	$(BUILD_DIR)/src/sysGCU/JSTObjectSpecialActor.o\
	$(BUILD_DIR)/src/sysGCU/messageSequence.o\
	$(BUILD_DIR)/src/sysGCU/messageMgr.o\
	$(BUILD_DIR)/src/sysGCU/messageObj.o\
	$(BUILD_DIR)/asm/sysGCU/messageRendering.o\
	$(BUILD_DIR)/src/sysGCU/message.o\
	$(BUILD_DIR)/src/sysGCU/modelEffect.o\
	$(BUILD_DIR)/src/sysGCU/messageReference.o\
	$(BUILD_DIR)/src/sysGCU/simpleMessage.o\
	$(BUILD_DIR)/src/sysGCU/sysShapeAnimation.o\
	$(BUILD_DIR)/asm/sysGCU/sysShapeModel.o\
	$(BUILD_DIR)/asm/sysGCU/windowMessage.o\
	$(BUILD_DIR)/asm/sysGCU/memoryCard.o\
	$(BUILD_DIR)/asm/sysGCU/pikmin2MemoryCardMgr.o\
	$(BUILD_DIR)/src/sysGCU/commonSaveData.o\
	$(BUILD_DIR)/asm/sysGCU/bootSection.o\
	$(BUILD_DIR)/asm/sysGCU/titleSection.o\
	$(BUILD_DIR)/src/sysGCU/loadResource.o\
	$(BUILD_DIR)/src/sysGCU/rootMenuSection.o\
	$(BUILD_DIR)/src/sysGCU/demoSection.o\
	$(BUILD_DIR)/src/sysGCU/THPAudioDecode.o\
	$(BUILD_DIR)/src/sysGCU/THPDraw.o\
	$(BUILD_DIR)/src/sysGCU/THPPlayer.o\
	$(BUILD_DIR)/src/sysGCU/THPRead.o\
	$(BUILD_DIR)/src/sysGCU/THPVideoDecode.o\
	$(BUILD_DIR)/src/sysGCU/pikmin2THPPlayer.o\
	$(BUILD_DIR)/src/sysGCU/captionMgr.o\
	$(BUILD_DIR)/src/sysGCU/captionMessage.o\
	$(BUILD_DIR)/src/sysGCU/screenScene.o\
	$(BUILD_DIR)/src/sysGCU/screenMgr.o\
	$(BUILD_DIR)/src/sysGCU/screenObj.o\
	$(BUILD_DIR)/src/sysGCU/JSTObjectParticleActor.o\
	$(BUILD_DIR)/src/sysGCU/moviePlayerAudio.o\
	$(BUILD_DIR)/src/sysGCU/illustratedBookMessage.o\
	$(BUILD_DIR)/src/sysGCU/sysDrawBuffer.o\
	$(BUILD_DIR)/src/sysGCU/dvdErrorMessage.o\
	$(BUILD_DIR)/src/sysGCU/pikmin2AramMgr.o\
	$(BUILD_DIR)/src/sysGCU/messageAnalyzer.o\


$(GC_FILES): CFLAGS += -lang=c++

DEPENDS += $(GC_FILES:.o=.d)

$(BUILD_DIR)/src/sysGCU/sysGCU.a: $(GC_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(GC_FILES) > build/GC_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/GC_ofiles
