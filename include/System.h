#ifndef _SYSTEM_H
#define _SYSTEM_H

#include "types.h"

void Pikmin2DefaultMemoryErrorRoutine(void*, u32, s32);
void kando_panic_f(bool, const char*, s32, const char*, ...);
extern void preUserCallback(unsigned short, struct OSContext*, unsigned long,
                            unsigned long);

typedef s32 ERenderMode;

namespace Game {
struct CommonSaveData {
	struct Mgr;
};
} // namespace Game

struct System {
	struct FragmentationChecker {
		FragmentationChecker(char*, bool);
		~FragmentationChecker();
	};

	System();
	~System();

	static struct _GXRenderModeObj* getRenderModeObj();
	static void assert_fragmentation(char*);
	static void createSoundSystem();
	static void loadSoundResource();
	static void initialize();

	void enableCPULockDetector(int);
	int disableCPULockDetector();
	void construct();
	void constructWithDvdAccessFirst();
	void constructWithDvdAccessSecond();
	void createRomFont(struct JKRHeap*);
	void destroyRomFont();
	void loadResourceFirst();
	void loadResourceSecond();
	int run();
	static float getTime();
	void clearOptionBlockSaveFlag();
	void setOptionBlockSaveFlag();
	Game::CommonSaveData::Mgr* getPlayCommonData();
	void dvdLoadUseCallBack(struct DvdThreadCommand*, struct IDelegate*);
	void deleteThreads();
	struct JFWDisplay* setCurrentDisplay(struct JFWDisplay*);
	u32 clearCurrentDisplay(struct JFWDisplay*);
	void beginFrame();
	void endFrame();
	void beginRender();
	void endRender();
	ERenderMode setRenderMode(ERenderMode);
	void changeRenderMode(ERenderMode);
	u32 heapStatusStart(char*, JKRHeap*);
	void heapStatusEnd(char*);
	void heapStatusDump(bool);
	void heapStatusIndividual();
	void heapStatusNormal();
	void resetOn(bool);
	void resetPermissionOn();
	bool isResetActive();
	void activeGP();
	void inactiveGP();
	bool isDvdErrorOccured();
	void initCurrentHeapMutex();
	void startChangeCurrentHeap(JKRHeap*);
	void endChangeCurrentHeap();
	void addGenNode(struct CNode*);
	void initGenNode();
	void refreshGenNode();
	void setFrameRate(int);
	bool dvdLoadSyncNoBlock(struct DvdThreadCommand*);
	int dvdLoadSyncAllNoBlock();

	u8 _00[0x3C]; // _00
	u32* _3C;     // _3C
	u8 _40[0xA0]; // _40
};

#endif
