JKERNEL_FILES:=\
	$(BUILD_DIR)/src/JSystem/JKernel/JKRAram.o\
	$(BUILD_DIR)/src/JSystem/JKernel/JKRAramArchive.o\
	$(BUILD_DIR)/src/JSystem/JKernel/JKRAramBlock.o\
	$(BUILD_DIR)/src/JSystem/JKernel/JKRAramHeap.o\
	$(BUILD_DIR)/src/JSystem/JKernel/JKRAramPiece.o\
	$(BUILD_DIR)/src/JSystem/JKernel/JKRAramStream.o\
	$(BUILD_DIR)/src/JSystem/JKernel/JKRArchivePri.o\
	$(BUILD_DIR)/src/JSystem/JKernel/JKRArchivePub.o\
	$(BUILD_DIR)/src/JSystem/JKernel/JKRCompArchive.o\
	$(BUILD_DIR)/src/JSystem/JKernel/JKRDecomp.o\
	$(BUILD_DIR)/src/JSystem/JKernel/JKRDisposer.o\
	$(BUILD_DIR)/src/JSystem/JKernel/JKRDvdFile.o\
	$(BUILD_DIR)/src/JSystem/JKernel/JKRDvdAramRipper.o\
	$(BUILD_DIR)/src/JSystem/JKernel/JKRDvdArchive.o\
	$(BUILD_DIR)/src/JSystem/JKernel/JKRDvdRipper.o\
	$(BUILD_DIR)/src/JSystem/JKernel/JKRExpHeap.o\
	$(BUILD_DIR)/src/JSystem/JKernel/JKRFileCache.o\
	$(BUILD_DIR)/src/JSystem/JKernel/JKRFileFinder.o\
	$(BUILD_DIR)/src/JSystem/JKernel/JKRFile.o\
	$(BUILD_DIR)/src/JSystem/JKernel/JKRFileLoader.o\
	$(BUILD_DIR)/src/JSystem/JKernel/JKRHeap.o\
	$(BUILD_DIR)/src/JSystem/JKernel/JKRMemArchive.o\
	$(BUILD_DIR)/src/JSystem/JKernel/JKRSolidHeap.o\
	$(BUILD_DIR)/src/JSystem/JKernel/JKRThread.o\

DEPENDS += $(JKERNEL_FILES:.o=.d)

$(BUILD_DIR)/src/JSystem/JKernel/JKernel.a: $(JKERNEL_FILES)
	@echo Linking... $@
	$(QUIET) mkdir -p $(dir $@)
	@echo $(JKERNEL_FILES) > build/JKERNEL_ofiles
	$(QUIET) $(LD) -library $(LIBRARY_LDFLAGS) -o $@ -lcf ldscript.lcf @build/JKERNEL_ofiles
