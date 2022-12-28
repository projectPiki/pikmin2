#ifndef _SYSTEM_H
#define _SYSTEM_H

#include "DvdThreadCommand.h"
#include "Dolphin/gx.h"
#include "SysTimers.h"
#include "JSystem/JKR/JKRHeap.h"
#include "node.h"
#include "BitFlag.h"

struct Graphics;
struct OSContext;
struct _GXRenderModeObj;
struct HeapStatus;

void Pikmin2DefaultMemoryErrorRoutine(void*, u32, s32);
void kando_panic_f(bool, const char*, s32, const char*, ...);
extern void preUserCallback(unsigned short, OSContext*, unsigned long, unsigned long);

// const char* cMapFileName = "/pikmin2UP.map";

//_GXRenderModeObj* renderMode;

_GXRenderModeObj* sRenderModeTable[4];

struct HeapInfo : public Node, public JKRDisposer {
	virtual ~HeapInfo(); // _20 (weak)

	void search(HeapInfo*);

	// _00-_24 = Node
	// _20     = VTBL (Node)
	// _24-_3C = JKRDisposer
	u32 _3C;         // _3C, unknown
	int _40;         // _40
	u32 _44;         // _44, unknown
	HeapStatus* _48; // _48
	HeapStatus* _4C; // _4C
};

struct HeapStatus {
	HeapStatus();

	HeapInfo m_heapInfo; // _00
	u8 _50;              // _50, unknown
};

namespace Game {
namespace CommonSaveData {
struct Mgr;
};
} // namespace Game

struct System : public OSMutexObject {
	enum ERenderMode {
		RENDERMODE_NULL = 0,
	};

	enum LanguageID { LANG_ENGLISH = 0, LANG_FRENCH, LANG_GERMAN, LANG_HOL_UNUSED, LANG_ITALIAN, LANG_JAPANESE, LANG_SPANISH };
	struct FragmentationChecker {
		FragmentationChecker(char*, bool);
		~FragmentationChecker();

		u32 m_size;   // _00
		char* m_name; // _04
	};

	// unused struct?
	struct GXVerifyArg {
		GXVerifyArg();

		u32 _00; // _00
		u8 _04;  // _04
	};

	System();
	~System();

	static _GXRenderModeObj* getRenderModeObj();
	static int assert_fragmentation(char*);
	static void loadSoundResource();
	static void initialize();

	void createSoundSystem();
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
	static ERenderMode setRenderMode(ERenderMode);
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

	// unused/inline
	void setGXVerifyLevel(System::GXVerifyArg&);
	void clearGXVerifyLevel();
	void checkOptionBlockSaveFlag();
	void dvdLoadArchive(DvdThreadCommand*, char*, JKRHeap*);
	void dvdLoadArchiveTemporary(DvdThreadCommand*, char*, JKRHeap*);
	void dvdLoadFile(DvdThreadCommand*, char*, JKRHeap*);
	void dvdLoadSync(DvdThreadCommand*, DvdThread::ESyncBlockFlag);
	void dvdLoadSyncAll(DvdThread::ESyncBlockFlag);
	void heapStatusDumpNode();
	void resetOff();
	void forceFinishSection();

	static ERenderMode mRenderMode;
	static GXVerifyArg sVerifyArg;

	// _00-_18 = OSMutexObject
	JKRHeap* m_backupHeap;                        // _18
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
	HeapStatus* m_heapStatus;                     // _50
	float m_deltaTime;                            // _54
	struct JKRTask* m_task;                       // _58
	struct MemoryCardMgr* m_cardMgr;              // _5C
	struct Game::CommonSaveData::Mgr* m_playData; // _60
	float m_fpsFactor;                            // _64
	DvdThreadCommand m_threadCommand;             // _68
	LanguageID m_region;                          // _D4
	BitFlag<u32> m_flags;                         // _D8
	struct JUTRomFont* m_romFont;                 // _DC
};

extern System* sys;

#endif
