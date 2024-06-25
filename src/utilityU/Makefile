UTILITY_FILES:=\
	$(BUILD_DIR)/src/utilityU/menu.o\
	$(BUILD_DIR)/asm/utilityU/PSMainSide_Director.o\
	$(BUILD_DIR)/asm/utilityU/PSMainSide_Factory.o\
	$(BUILD_DIR)/asm/utilityU/PSMainSide_ObjSound.o\
	$(BUILD_DIR)/src/utilityU/PSMainSide_Demo.o\
	$(BUILD_DIR)/asm/utilityU/PSMainSide_Scene.o\
	$(BUILD_DIR)/src/utilityU/PSMainSide_BossMgr.o\
	$(BUILD_DIR)/asm/utilityU/PSMainSide_Se.o\
	$(BUILD_DIR)/src/utilityU/PSMainSide_DirectorMgr.o\
	$(BUILD_DIR)/asm/utilityU/PSMainSide_Sound.o\
	$(BUILD_DIR)/src/utilityU/PSMainSide_TrackMap.o\
	$(BUILD_DIR)/asm/utilityU/PSMainSide_CreaturePrm.o\
	$(BUILD_DIR)/asm/utilityU/PSMainSide_ObjCalc.o\

$(UTILITY_FILES): CFLAGS += -sym on

DEPENDS += $(UTILITY_FILES:.o=.d)

$(BUILD_DIR)/src/utilityU/utilityU.a: $(UTILITY_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(UTILITY_FILES) > build/UTILITY_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/UTILITY_ofiles
