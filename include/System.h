#ifndef _SYSTEM_H
#define _SYSTEM_H

#include "JSystem/JGeometry.h"
#include "DvdThreadCommand.h"
#include "SysTimers.h"
#include "BitFlag.h"
#include "node.h"

struct RenderModeInfo {
	u32 mIdentifier; // _00, must be set to 'vald' for saved render mode to be used
	u8 mRenderMode;  // _04 (System::ERenderMode)
};
// This struct represents a region of memory that will be saved through soft-resets
#define RENDER_INFO_STORE ((RenderModeInfo*)DOL_ADDR_LIMIT)

struct Graphics;
struct OSContext;
struct _GXRenderModeObj;
struct HeapStatus;

struct HeapInfo : public Node, public JKRDisposer {

	virtual ~HeapInfo(); // _20 (weak)

	HeapInfo* search(HeapInfo*);

	void dump(int, bool);
	void getTotalUsedSize();
	void search(char*, bool);
	void isInvalidUsedSize();
	void isValidUsedSize();
	void getUsedSize(bool);

	inline JSUTree<CoreNode>* getTree() { return &mTree; }

	// _00-_24 = Node
	// _20     = VTBL (Node)
	// _24-_3C = JKRDisposer
	u32 mUnused0;           // _3C
	int mUnused1;           // _40
	u32 mUnused2;           // _44
	HeapInfo* mCurrentNode; // _48
	HeapInfo* mParent;      // _4C
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

		u32 mUnused00; // _00
		u8 mUnused04;  // _04
	};

	System();
	~System();

	static _GXRenderModeObj* getRenderModeObj();
	static int getRenderModeWidth() { return getRenderModeObj()->fbWidth; }
	static int getRenderModeHeight() { return getRenderModeObj()->efbHeight; }
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
	void resetOn(bool doResetToMenu);
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
	inline void updateTimer(f32& timer, f32 timeScale) const { timer += timeScale * mDeltaTime; }
	inline Graphics* getGfx() { return mGfx; }

	inline void setFlag(u32 flag) { mFlags.typeView |= flag; }
	inline void resetFlag(u32 flag) { mFlags.typeView &= ~flag; }
	inline bool isFlag(u32 flag) const { return mFlags.typeView & flag; }

	/**
	 * Returns the full screen box dimensions.
	 *
	 * This function calculates and returns the screen box dimensions based on the current render mode height and width.
	 *
	 * @return The screen box dimensions as a `JGeometry::TBox2f` object.
	 */
	inline JGeometry::TBox2f getFullScreenBox()
	{
		u32 height = getRenderModeHeight();
		u32 width  = getRenderModeWidth();
		f32 offset = 0.0f; // Ahh... what we have to do to match a function....
		return JGeometry::TBox2f(0, 0, offset + width, offset + height);
	}

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
