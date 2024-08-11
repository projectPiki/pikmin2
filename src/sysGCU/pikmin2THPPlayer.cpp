#include "Game/THPPlayer.h"
#include "Game/Data.h"
#include "THP/THPPlayer.h"
#include "PSM/THPDinamics.h"
#include "PSSystem/PSSystemIF.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "Caption.h"
#include "utilityU.h"
#include "System.h"

namespace Game {

namespace {
#if BUILDTARGET == USADEMO1 // demo
static const THPPlayer::THPPlayerFileSettingTable sTHPPlayerFileSettingTable[12] = {
	{ "/thp/opening1.thp", "/thp/opening1.ini", 0, THPPlayer::OPENING_GameStart },
	{ "/thp/opening2.thp", "/thp/opening2.ini", 0, THPPlayer::OPENING_PostDebtStart },
	{ "/thp/ending1.thp", "/thp/ending1.ini", 0, THPPlayer::ENDING_PayDebt },
	{ "/thp/ending2.thp", "", 0, THPPlayer::ENDING_AllTreasures },
	{ "/thp/staffroll.thp", "", 0, THPPlayer::STAFF_ROLL },
	{ "/thp/play1.thp", "/thp/play1.ini", 0, THPPlayer::PLAY_1 },
	{ "/thp/play2.thp", "/thp/play2.ini", 0, THPPlayer::PLAY_2 },
	{ "/thp/play3.thp", "/thp/play3.ini", 0, THPPlayer::PLAY_3 },
	{ "/thp/play4.thp", "/thp/play4.ini", 0, THPPlayer::PLAY_4 },
	{ "/thp/play5.thp", "/thp/play5.ini", 0, THPPlayer::PLAY_5 },
	{ "/thp/play6.thp", "/thp/play6.ini", 0, THPPlayer::PLAY_6 },
	{ "/thp/crime.thp", "/thp/crime.ini", 0, THPPlayer::CRIME },

};
#else // usa
static const THPPlayer::THPPlayerFileSettingTable sTHPPlayerFileSettingTable[12] = {
	{ "/thp/opening1.thp", "/thp/opening1.ini", 0, THPPlayer::OPENING_GameStart },
	{ "/thp/opening2.thp", "/thp/opening2.ini", 0, THPPlayer::OPENING_PostDebtStart },
	{ "/thp/ending1.thp", "/thp/ending1.ini", 0, THPPlayer::ENDING_PayDebt },
	{ "/thp/ending2.thp", "", 0, THPPlayer::ENDING_AllTreasures },
	{ "/thp/staffroll.thp", "", 0, THPPlayer::STAFF_ROLL },
	{ "/thp/play1.thp", "", 0, THPPlayer::PLAY_1 },
	{ "/thp/play2.thp", "", 0, THPPlayer::PLAY_2 },
	{ "/thp/play3.thp", "", 0, THPPlayer::PLAY_3 },
	{ "/thp/play4.thp", "", 0, THPPlayer::PLAY_4 },
	{ "/thp/play5.thp", "", 0, THPPlayer::PLAY_5 },
	{ "/thp/play6.thp", "", 0, THPPlayer::PLAY_6 },
	{ "/thp/crime.thp", "/thp/crime.ini", 0, THPPlayer::CRIME },

};
#endif
} // namespace

/**
 * @note Address: 0x8044FDF0
 * @note Size: 0x118
 */
THPPlayer::THPPlayer()
    : CNode("THPPlayer")
    , mState(STATE_0)
    , _34(-1)
    , mHeap(nullptr)
    , _C8(this, &loadResource)
    , mLoadResArg()
    , _E4(0)
    , _E8(1)
{
	mCaptionMgr = new Caption::Mgr;
	add(mCaptionMgr);
	_E8 = 0;
}

/**
 * @note Address: 0x8044FF08
 * @note Size: 0x98
 */
THPPlayer::~THPPlayer()
{
	THPPlayerStop();
	THPPlayerQuit();
}

/**
 * @note Address: 0x8044FFA0
 * @note Size: 0xCC
 */
void THPPlayer::load(EMovieIndex movieIdx)
{
	bool idCheck = false;
	if (movieIdx >= 0 && movieIdx < 12) {
		idCheck = true;
	}

#if BUILDTARGET == USADEMO1 // demo
	P2ASSERTLINE(233, idCheck);
#elif BUILDTARGET == USAFINAL // usa
	P2ASSERTLINE(227, idCheck);
#endif

	const THPPlayerFileSettingTable* data = &sTHPPlayerFileSettingTable[movieIdx];
	mLoadResArg.mThpFileName              = data->mThpFilePath;
	mLoadResArg.mCaptionFileName          = data->mIniFilePath;
	_E4                                   = data->_08;

	load();

#if BUILDTARGET == USADEMO1 // demo
	P2ASSERTLINE(241, data->mThpID < 12);
#elif BUILDTARGET == USAFINAL // usa
	P2ASSERTLINE(235, data->mThpID < 12);
#endif

	PSM::sTHPDinamicsProc.setSetting((PSM::THP_ID)data->mThpID);
}

/**
 * @note Address: 0x8045006C
 * @note Size: 0x6C
 */
void THPPlayer::load()
{
	mState = STATE_Load;
	if (!THPPlayerInit(0)) {

#if BUILDTARGET == USADEMO1 // demo
		JUT_PANICLINE(253, "THPPlayerInit failure.");
#elif BUILDTARGET == USAFINAL // usa
		JUT_PANICLINE(247, "THPPlayerInit failure.");
#endif
	}

	sys->dvdLoadUseCallBack(&mThreadCommand, &_C8);
}

/**
 * @note Address: N/A
 * @note Size: 0x3C
 */
void THPPlayer::reset()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x804500D8
 * @note Size: 0x24
 */
void THPPlayer::loadResource() { loadResource(mLoadResArg); }

/**
 * @note Address: 0x804500FC
 * @note Size: 0x1CC
 */
void THPPlayer::loadResource(const THPPlayerLoadResourceArg& loadArg)
{
	JKRHeap* prevHeap = JKRGetCurrentHeap();
	THPPlayerStop();
	mCaptionMgr->reset();
	mHeap->freeAll();
	mHeap->becomeCurrentHeap();
	sys->heapStatusStart("THPPlayer::loadResource", nullptr);
	sys->heapStatusStart("THPPlayer_Resource", nullptr);

	if (loadArg.mCaptionFileName[0] != '\0') {
		sys->heapStatusStart("THPPlayr_caption", nullptr);
		void* handle = JKRDvdRipper::loadToMainRAM(loadArg.mCaptionFileName, nullptr, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_TOP, 0,
		                                           nullptr, nullptr);
#if BUILDTARGET == USADEMO1 // demo
		JUT_ASSERTLINE(317, handle, "fail to open the caption file\n[%s]\n", loadArg.mCaptionFileName);
#elif BUILDTARGET == USAFINAL // usa
		JUT_ASSERTLINE(311, handle, "fail to open the caption file\n[%s]\n", loadArg.mCaptionFileName);
#endif

		RamStream stream(handle, -1);
		stream.setMode(STREAM_MODE_TEXT, 1);
		mCaptionMgr->read(stream);

		sys->heapStatusEnd("THPPlayr_caption");
	}

	if (loadArg.mThpFileName != nullptr) {
		sys->heapStatusStart("THPPlayerOpen", nullptr);
		if (!THPPlayerOpen(loadArg.mThpFileName, FALSE)) {
#if BUILDTARGET == USADEMO1 // demo
			JUT_PANICLINE(331, "Fail to open the thp file\n[%s]\n", loadArg.mThpFileName);
#elif BUILDTARGET == USAFINAL // usa
			JUT_PANICLINE(325, "Fail to open the thp file\n[%s]\n", loadArg.mThpFileName);
#endif
		}

		sys->heapStatusEnd("THPPlayerOpen");
	}

	sys->heapStatusEnd("THPPlayer_Resource");

	sys->heapStatusStart("THPPlayer_prepare", nullptr);
	prepare();
	sys->heapStatusEnd("THPPlayer_prepare");

	sys->heapStatusEnd("THPPlayer::loadResource");

	prevHeap->becomeCurrentHeap();
	pause();
}

/**
 * @note Address: 0x804502C8
 * @note Size: 0xFC
 */
void THPPlayer::prepare()
{
	System::getRenderModeObj();
	u8* data;
	int audioTrack = 0;
	THPPlayerGetVideoInfo(&mVideoInfo);
	THPPlayerGetAudioInfo(&mAudioInfo);

	sys->heapStatusStart("THPPlayer_work", nullptr);

	data = new (0x20) u8[THPPlayerCalcNeedMemory()];
	if (!data) {
#if BUILDTARGET == USADEMO1 // demo
		OSPanic("pikmin2THPPlayer.cpp", 373, "Can\'t allocate the memory");
#elif BUILDTARGET == USAFINAL // usa
		OSPanic("pikmin2THPPlayer.cpp", 367, "Can\'t allocate the memory");
#endif
	}
	THPPlayerSetBuffer(data);

	sys->heapStatusEnd("THPPlayer_work");

	if (mAudioInfo.mSndNumTracks > 1 && sys->mPlayData->mSoundMode == CommonSaveData::Mgr::SM_SurroundSound) {
		audioTrack = 1;
	}

	if (!THPPlayerPrepare(0, 0, audioTrack)) {
#if BUILDTARGET == USADEMO1 // demo
		JUT_PANICLINE(403, "Fail to prepare\n");
#elif BUILDTARGET == USAFINAL // usa
		JUT_PANICLINE(397, "Fail to prepare\n");
#endif
	}
}

/**
 * @note Address: 0x804503C4
 * @note Size: 0xC0
 */
void THPPlayer::init(JKRHeap* heap)
{
#if BUILDTARGET == USADEMO1 // demo
	P2ASSERTLINE(413, !mHeap);
#elif BUILDTARGET == USAFINAL // usa
	P2ASSERTLINE(407, !mHeap);
#endif

	JKRHeap* currHeap = JKRGetCurrentHeap();
	heap              = (!heap) ? currHeap : heap;
	heap->becomeCurrentHeap();
	mHeap = JKRSolidHeap::create(0x300000, heap, true);

#if BUILDTARGET == USADEMO1 // demo
	P2ASSERTLINE(424, mHeap);
#elif BUILDTARGET == USAFINAL // usa
	P2ASSERTLINE(418, mHeap);
#endif
	currHeap->becomeCurrentHeap();
}

/**
 * @note Address: 0x80450484
 * @note Size: 0xA0
 */
bool THPPlayer::play()
{
	PSStop2DStream();
	if (mState == STATE_Play) {
		THPPlayerPlay();
		f32 vol = 127.0f * PSGetSystemIFA()->mBgmVolume;
		if (vol > 127.0f) {
			vol = 127.0f;
		}

		THPPlayerSetVolume(vol, 0);
		return true;
	}

	return false;
}

/**
 * @note Address: 0x80450524
 * @note Size: 0x38
 */
bool THPPlayer::pause()
{
	if (mState == STATE_Play) {
		THPPlayerPause();
		return true;
	}

	return false;
}

/**
 * @note Address: 0x8045055C
 * @note Size: 0x28
 */
void THPPlayer::stop()
{
	THPPlayerStop();
	THPPlayerClose();
	THPPlayerQuit();
}

/**
 * @note Address: 0x80450584
 * @note Size: 0x94
 */
void THPPlayer::update()
{
	switch (mState) {
	case STATE_0:
		break;
	case STATE_Load:
		if (isFinishLoading()) {
			mState = STATE_Play;
		}
		break;

	case STATE_Play:
		mCaptionMgr->update(_34);
		break;
	default:
#if BUILDTARGET == USADEMO1 // demo
		JUT_PANICLINE(510, "Unknown State : %d \n", mState);
#elif BUILDTARGET == USAFINAL // usa
		JUT_PANICLINE(504, "Unknown State : %d \n", mState);
#endif
		break;
	}
}

/**
 * @note Address: 0x80450618
 * @note Size: 0xDC
 */
void THPPlayer::draw(Graphics& gfx)
{
	switch (_E4) {
	case 1:
		draw(gfx, (int)(System::getRenderModeObj()->fbWidth - mVideoInfo.mXSize) / 2, 20, mVideoInfo.mXSize, mVideoInfo.mYSize);
		break;
	default:
		int y = (u32)System::getRenderModeObj()->efbHeight;
		int x = (u32)System::getRenderModeObj()->fbWidth;
		draw(gfx, (int)(x - mVideoInfo.mXSize) / 2, (int)(y - mVideoInfo.mYSize) / 2, mVideoInfo.mXSize, mVideoInfo.mYSize);
		break;
	}
}

/**
 * @note Address: 0x804506F4
 * @note Size: 0xBC
 */
void THPPlayer::draw(Graphics& gfx, s32 x, s32 y, f32 factor) { draw(gfx, x, y, factor * mVideoInfo.mXSize, factor * mVideoInfo.mYSize); }

/**
 * @note Address: 0x804507B0
 * @note Size: 0x88
 */
void THPPlayer::draw(Graphics& gfx, s32 x, s32 y, u32 z, u32 w)
{
	if (isFinishLoading()) {
		gfx.mOrthoGraph.setPort();
		_34 = THPPlayerDrawCurrentFrame(System::getRenderModeObj(), x, y, z, w);
		THPPlayerDrawDone();
		mCaptionMgr->draw(gfx);
	}
}

/**
 * @note Address: 0x80450838
 * @note Size: 0x5C
 */
bool THPPlayer::isFinishLoading()
{
	bool result = false;
	if (sys->dvdLoadSyncNoBlock(&mThreadCommand) || mState == STATE_0) {
		result = true;
	}

	return result;
}

/**
 * @note Address: 0x80450894
 * @note Size: 0x1C
 */
bool THPPlayer::isFinishPlaying() { return ActivePlayer.mState == 3; }

} // namespace Game
