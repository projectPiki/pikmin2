#ifndef _SYSTEM_H
#define _SYSTEM_H

#include "types.h"
#include "DvdThreadCommand.h"
#include "Dolphin/gx.h"
#include "SysTimers.h"
#include "JSystem/JKR/JKRHeap.h"
#include "node.h"

struct Graphics;
struct OSContext;
struct _GXRenderModeObj;

void Pikmin2DefaultMemoryErrorRoutine(void*, u32, s32);
void kando_panic_f(bool, const char*, s32, const char*, ...);
extern void preUserCallback(unsigned short, OSContext*, unsigned long, unsigned long);

typedef s32 ERenderMode;

struct HeapInfo : public Node {
	virtual ~HeapInfo(); // _20 (weak)

	void search(HeapInfo*);
};

namespace Game {
namespace CommonSaveData {
struct Mgr;
};
} // namespace Game

struct System {
	enum LanguageID { LANG_ENGLISH = 0, LANG_FRENCH, LANG_GERMAN, LANG_HOL_UNUSED, LANG_ITALIAN, LANG_JAPANESE, LANG_SPANISH };
	struct FragmentationChecker {
		FragmentationChecker(char*, bool);
		~FragmentationChecker();
	};

	System();
	~System();

	static _GXRenderModeObj* getRenderModeObj();
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
	float getTime();
	void clearOptionBlockSaveFlag();
	void setOptionBlockSaveFlag();
	Game::CommonSaveData::Mgr* getPlayCommonData();
	void dvdLoadUseCallBack(struct DvdThreadCommand*, struct IDelegate*);
	void deleteThreads();
	struct JFWDisplay* setCurrentDisplay(struct JFWDisplay*);
	u32 clearCurrentDisplay(struct JFWDisplay*);
	bool beginFrame();
	void endFrame();
	void beginRender();
	void endRender();
	ERenderMode setRenderMode(ERenderMode);
	void changeRenderMode(ERenderMode);
	// Possibilities: HeapStatus*, bool, ???
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

	f32 _00;                                      // _00
	f32 _04;                                      // _04
	f32 _08;                                      // _08
	u8 _0C[0xC];                                  // _0C
	JKRHeap* _18;                                 // _18
	u32 m_cpuRetraceCount;                        // _1C
	u32 m_cpuLockCount;                           // _20
	Graphics* m_gfx;                              // _24
	SysTimers* m_timers;                          // _28
	u32 _2C;                                      // _2C
	u32 _30;                                      // _30
	u32 _34;                                      // _34
	JKRHeap* m_sysHeap;                           // _38
	struct GameFlow* m_gameFlow;                  // _3C
	struct DvdThread* m_dvdThread;                // _40
	struct ResetManager* m_resetMgr;              // _44
	struct DvdStatus* m_dvdStatus;                // _48
	struct JFWDisplay* m_display;                 // _4C
	struct HeapStatus* m_heapStatus;              // _50
	float m_deltaTime;                            // _54
	struct JKRTask* m_task;                       // _58
	struct MemoryCardMgr* m_cardMgr;              // _5C
	struct Game::CommonSaveData::Mgr* m_playData; // _60
	float m_fpsFactor;                            // _64
	DvdThreadCommand m_threadCommand;             // _68
	LanguageID m_region;                          // _D4
	u32 m_flags;                                  // _D8
	struct JUTRomFont* m_romFont;                 // _DC
};

extern System* sys;

#endif
