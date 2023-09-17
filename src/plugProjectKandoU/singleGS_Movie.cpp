#include "types.h"
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

/*
 * --INFO--
 * Address:	8021EED8
 * Size:	00008C
 */
MovieState::MovieState()
    : State(SGS_Movie)
{
	_14 = new Controller(JUTGamePad::PORT_0);
	_1C = nullptr;
	_18 = nullptr;
}

/*
 * --INFO--
 * Address:	8021EF64
 * Size:	000290
 */
void MovieState::init(SingleGameSection* gs, StateArg* arg)
{
	_1C = nullptr;
	_18 = nullptr;
	_18 = JKRHeap::sCurrentHeap;
	_18->getFreeSize();
	_1C = JKRExpHeap::create(_18->getFreeSize(), _18, true);
	_1C->becomeCurrentHeap();
	_1C->getFreeSize();
	_20 = new THPPlayer;
	_20->init(nullptr);
	_24 = false;
	_20->load(THPPlayer::OPENING_GameStart);

	P2ASSERTLINE(223, arg);
	_10 = static_cast<MovieArg*>(arg)->mMovieIndex;
	switch (_10) {
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
	default:
		break;
	}
}

/*
 * --INFO--
 * Address:	8021F1F4
 * Size:	000114
 */
void MovieState::exec(SingleGameSection* gs)
{
	if (_1C) {
		_20->update();
		switch (_24) {
		case false:
			if (_20->isFinishLoading()) {
				_24 = true;
				_20->play();
			}
			break;
		case true:
			if ((_14->mButton.mButtonDown & PAD_BUTTON_START) || _20->isFinishPlaying()) { // skip the movie with start
				gs->mDisplayWiper = gs->mWipeInFader;
				gs->mWipeInFader->start(4.0f);
				gs->mCurrentCourseInfo = stageList->getCourseInfo(0);
				LoadArg arg;
				arg.mInCave = false;
				arg._01     = true;
				arg._02     = false;
				arg._04     = 5;
				transit(gs, SGS_Load, &arg);
			}
			break;
		}
	}
}

/*
 * --INFO--
 * Address:	8021F308
 * Size:	000040
 */
void MovieState::draw(SingleGameSection* gs, Graphics& gfx)
{
	if (_1C) {
		_20->draw(gfx);
	}
}

/*
 * --INFO--
 * Address:	8021F348
 * Size:	000048
 */
void MovieState::cleanup(SingleGameSection* gs)
{
	_1C->freeAll();
	_1C->destroy();
	_1C = nullptr;
	_18->becomeCurrentHeap();
}

} // namespace SingleGame
} // namespace Game
