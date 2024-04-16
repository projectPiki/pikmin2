#include "Game/SingleGame.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "nans.h"

static struct DummyPlayer {
	inline DummyPlayer(int count, f32 v)
	    : mCount(count)
	    , _04(v)
	{
	}
	inline void initMsgs(const char** ptr)
	{
		mMsgs  = ptr;
		mCount = 0;
		// for (mCount = 0; ptr[mCount] != nullptr; mCount++) {}
		while (true) {
			if (ptr[mCount] == nullptr) {
				break;
			}
			mCount++;
		}
	}
	int mCount;         // _00
	f32 _04;            // _04, unknown
	const char** mMsgs; // _08
} dummyPlayer(0, 480.0f);

static int idk[4]                    = { 1, 2, 3, 0 };
const char* opening_strings[]        = { "Opening Movie",
                                  "",
                                  "",
                                  "-- Director --",
                                  "Geshifumi Hino",
                                  "Mamamichi Abe",
                                  "",
                                  "",
                                  "-- Main Programmer --",
                                  "Tepen-kei",
                                  "",
                                  "",
                                  "",
                                  "",
                                  "",
                                  "",
                                  "",
                                  "(C) Nintendo",
                                  nullptr };
const char* ending_strings[]         = { "Ending Movie", "", "", "", "", "", "(C) Ninteno" };
const char* endingcomplete_strings[] = { "Ending(Complete) Movie", "", "", "", "", "", "(C) Ninteno" };
const char* staffroll_strings[]
    = { "Pikmin2", "", "", "* Director", "Geshifumi Hino", "Mamamichi Abe", "", "* Otakara Design", "Hideo Ota", "", "(C) Ninteno" };
const char* mezase_strings[] = { "Mezase Complete Movie", "", "", "", "", "", "(C) Ninteno" };

namespace Game {
namespace SingleGame {

/**
 * @note Address: 0x8021EED8
 * @note Size: 0x8C
 */
MovieState::MovieState()
    : State(SGS_Movie)
{
	mController = new Controller(JUTGamePad::PORT_0);
	mMovieHeap  = nullptr;
	mBackupHeap = nullptr;
}

/**
 * @note Address: 0x8021EF64
 * @note Size: 0x290
 */
void MovieState::init(SingleGameSection* gs, StateArg* arg)
{
	mMovieHeap = nullptr;

	mBackupHeap = nullptr;
	mBackupHeap = JKRGetCurrentHeap();
	mBackupHeap->getFreeSize();

	mMovieHeap = JKRExpHeap::create(mBackupHeap->getFreeSize(), mBackupHeap, true);
	mMovieHeap->becomeCurrentHeap();
	mMovieHeap->getFreeSize();
	mMoviePlayer = new THPPlayer;
	mMoviePlayer->init(nullptr);
	mIsMovieLoaded = false;
	mMoviePlayer->load(THPPlayer::OPENING_GameStart);

	// even though its already set to open the GameStart thp, sure
	P2ASSERTLINE(223, arg);
	mMovieID = static_cast<MovieArg*>(arg)->mMovieIndex;
	switch (mMovieID) {
	case THPPlayer::OPENING_GameStart:
		dummyPlayer.initMsgs(opening_strings);
		break;
	case THPPlayer::OPENING_PostDebtStart:
		dummyPlayer.initMsgs(ending_strings);
		break;
	case THPPlayer::ENDING_PayDebt:
		dummyPlayer.initMsgs(endingcomplete_strings);
		break;
	case THPPlayer::ENDING_AllTreasures:
		dummyPlayer.initMsgs(staffroll_strings);
		break;
	case THPPlayer::STAFF_ROLL:
		dummyPlayer.initMsgs(mezase_strings);
		break;
	}
}

/**
 * @note Address: 0x8021F1F4
 * @note Size: 0x114
 */
void MovieState::exec(SingleGameSection* gs)
{
	if (mMovieHeap) {
		mMoviePlayer->update();
		switch (mIsMovieLoaded) {
		case false:
			if (mMoviePlayer->isFinishLoading()) {
				mIsMovieLoaded = true;
				mMoviePlayer->play();
			}
			break;
		case true:
			if ((mController->getButtonDown() & PAD_BUTTON_START) || mMoviePlayer->isFinishPlaying()) { // skip the movie with start
				gs->mDisplayWiper = gs->mWipeInFader;
				gs->mWipeInFader->start(4.0f);
				gs->mCurrentCourseInfo = stageList->getCourseInfo(0);
				LoadArg arg(MapEnter_NewGame, false, true, false);
				transit(gs, SGS_Load, &arg);
			}
			break;
		}
	}
}

/**
 * @note Address: 0x8021F308
 * @note Size: 0x40
 */
void MovieState::draw(SingleGameSection* gs, Graphics& gfx)
{
	if (mMovieHeap) {
		mMoviePlayer->draw(gfx);
	}
}

/**
 * @note Address: 0x8021F348
 * @note Size: 0x48
 */
void MovieState::cleanup(SingleGameSection* gs)
{
	mMovieHeap->freeAll();
	mMovieHeap->destroy();
	mMovieHeap = nullptr;
	mBackupHeap->becomeCurrentHeap();
}

} // namespace SingleGame
} // namespace Game
