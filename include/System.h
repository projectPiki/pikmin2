#ifndef _SYSTEM_H
#define _SYSTEM_H

#include "DvdThreadCommand.h"
#include "Dolphin/gx.h"
#include "SysTimers.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "node.h"
#include "BitFlag.h"
#include "types.h"

struct Graphics;
struct OSContext;
struct _GXRenderModeObj;
struct HeapStatus;

void Pikmin2DefaultMemoryErrorRoutine(void*, u32, s32);
void kando_panic_f(bool, const char*, s32, const char*, ...);
extern void preUserCallback(u16, OSContext*, u32, u32);

struct HeapInfo : public Node, public JKRDisposer {
	virtual ~HeapInfo(); // _20 (weak)

	void search(HeapInfo*);

	void dump(int, bool);
	void getTotalUsedSize();
	void dumpNode(int);
	void search(char*, bool);
	void isInvalidUsedSize();
	void isValidUsedSize();
	void getUsedSize(bool);

	// _00-_24 = Node
	// _20     = VTBL (Node)
	// _24-_3C = JKRDisposer
	u32 _3C;         // _3C
	int _40;         // _40
	u32 _44;         // _44
	HeapStatus* _48; // _48
	HeapStatus* _4C; // _4C
};

struct HeapStatus {
	HeapStatus();

	void start(char*, JKRHeap*);
	void end(char*);
	void setCurrentHeapInfoParent();
	void searchHeapInfo(char*);
	void searchHeapInfo(HeapInfo*);
	void dump(bool);
	void dumpNode();

	HeapInfo mHeapInfo; // _00
	u8 _50;             // _50, unknown
};

namespace Game {
namespace CommonSaveData {
struct Mgr;
} // namespace CommonSaveData

namespace MemoryCard {
struct Mgr;
}
} // namespace Game

#define SINGLE_FRAME_LENGTH (1.0f / 60.0f) // 0.016666668f

struct System : public OSMutex {
	/**
	 * @brief Enumeration representing different render modes.
	 */
	enum ERenderMode {
		RM_NTSC_Standard = 0,
		RM_NTSC_Progressive,
		RM_PAL_Standard,
		RM_PAL_60Hz,
	};

	/**
	 * @brief Enumeration representing different language IDs.
	 */
	enum LanguageID {
		LANG_English = 0,
		LANG_French,
		LANG_German,
		LANG_Unused, // Hol?
		LANG_Italian,
		LANG_Japanese,
		LANG_Spanish,
	};

	enum Flags {
		SF_LoadResident = 1 << 0,
	};

	struct FragmentationChecker {
		FragmentationChecker(char*, bool);
		~FragmentationChecker();

		u32 mSize;   // _00
		char* mName; // _04
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
	void createRomFont(struct JKRHeap* heap);
	void destroyRomFont();
	void loadResourceFirst();
	void loadResourceSecond();
	int run();
	f32 getTime();
	void clearOptionBlockSaveFlag();
	void setOptionBlockSaveFlag();
	Game::CommonSaveData::Mgr* getPlayCommonData();
	void dvdLoadUseCallBack(struct DvdThreadCommand* cmd, struct IDelegate* delegate);
	void deleteThreads();
	struct JFWDisplay* setCurrentDisplay(struct JFWDisplay* currentDisplay);
	struct JFWDisplay* clearCurrentDisplay(struct JFWDisplay* display);
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

	// idk why this exists alongside getPlayCommonData() but that one's global.
	// this one needs to be weak/inlined.
	inline Game::CommonSaveData::Mgr* getCommonDataMgr() { return mPlayData; }

	static ERenderMode mRenderMode;
	static GXVerifyArg sVerifyArg;

	inline f32 getDeltaTime() const { return mDeltaTime; }
	inline f32 getFrameRate(f32 timeScale) const { return getDeltaTime() / timeScale; }
	inline f32 updateTimer(f32& timer, f32 timeScale) const { timer += timeScale * mDeltaTime; }

	inline void setFlag(u32 flag) { mFlags.typeView |= flag; }
	inline void resetFlag(u32 flag) { mFlags.typeView &= ~flag; }
	inline bool isFlag(u32 flag) const { return mFlags.typeView & flag; }

	// _00-_18 = OSMutex
	JKRHeap* mBackupHeap;                 // _18
	u32 mCpuRetraceCount;                 // _1C
	u32 mCpuLockCount;                    // _20
	Graphics* mGfx;                       // _24
	SysTimers* mTimers;                   // _28
	u32 mRenderModeStatus;                // _2C
	u32 _30;                              // _30
	u32 _34;                              // _34
	JKRHeap* mSysHeap;                    // _38
	struct GameFlow* mGameFlow;           // _3C
	struct DvdThread* mDvdThread;         // _40
	struct ResetManager* mResetMgr;       // _44
	struct DvdStatus* mDvdStatus;         // _48
	struct JFWDisplay* mDisplay;          // _4C
	HeapStatus* mHeapStatus;              // _50
	f32 mDeltaTime;                       // _54
	struct JKRTask* mTask;                // _58
	Game::MemoryCard::Mgr* mCardMgr;      // _5C
	Game::CommonSaveData::Mgr* mPlayData; // _60
	f32 mFrameRate;                       // _64
	DvdThreadCommand mThreadCommand;      // _68
	LanguageID mRegion;                   // _D4
	BitFlag<u32> mFlags;                  // _D8
	struct JUTRomFont* mRomFont;          // _DC
};

extern System* sys;

#endif
