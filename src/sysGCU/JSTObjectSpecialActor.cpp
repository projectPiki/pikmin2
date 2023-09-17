#include "Game/P2JST/ObjectActor.h"
#include "Game/GameSystem.h"
#include "Game/CameraMgr.h"
#include "Game/MoviePlayer.h"
#include "System.h"
#include "nans.h"

namespace Game {
namespace P2JST {

/*
 * --INFO--
 * Address:	80437400
 * Size:	000058
 */
ObjectSpecialActor::ObjectSpecialActor(const char* name, MoviePlayer* movie)
    : ObjectActor(name, movie)
{
	reset();
}

/*
 * --INFO--
 * Address:	80437458
 * Size:	00005C
 */
void ObjectSpecialActor::reset()
{
	mCurrCommandCount = 0;
	for (int i = 0; i < 16; i++) {
		mCommands[i] = -1;
	}
	mIsFinished = false;
	mTimer      = 0.0f;
}

/*
 * --INFO--
 * Address:	804374B4
 * Size:	000004
 */
void ObjectSpecialActor::stop() { }

/*
 * --INFO--
 * Address:	804374B8
 * Size:	000254
 */
void ObjectSpecialActor::update()
{
	if (mTimer > 0.0f) {
		mTimer -= sys->mDeltaTime;
		if (mTimer <= 0.0f) {
			mIsFinished = true;
		}
	}

	if (mIsFinished) {
		gameSystem->startFadeblack();
	}

	for (int i = 0; i < mCurrCommandCount; i++) {
		if (mCommands[i] <= 100) {
			gameSystem->getSection()->onMovieCommand(mCommands[i]);

		} else if (mCommands[i] <= 200) {
			switch (mCommands[i]) {
			case 101:
				cameraMgr->startDemoCamera(2, 0);
				break;

			case 102:
				cameraMgr->finishDemoCamera(2);
				break;
			}

		} else if (mCommands[i] <= 300) {
			switch (mCommands[i]) {
			case 201:
				if (!moviePlayer->isFlag(MVP_IsFinished)) {
					gameSystem->getSection()->startKantei2D();
				}
				break;

			case 203:
				if (!moviePlayer->isFlag(MVP_IsFinished)) {
					gameSystem->getSection()->startKantei2D();
				}
				break;

			case 204:
				break;
			}

		} else if (mCommands[i] <= 400) {
			switch (mCommands[i]) {
			case 301:
				mTimer = 1.0f;
				gameSystem->startFadeout(mTimer);
				break;

			case 302:
				gameSystem->startFadein(1.0f);
				mIsFinished = false;
				break;
			}
		} else {
			JUT_PANICLINE(166, "comand %d not implemented !\n", mCommands[i]);
		}
	}

	mCurrCommandCount = 0;
	for (int i = 0; i < 16; i++) {
		mCommands[i] = -1;
	}
}

/*
 * --INFO--
 * Address:	8043770C
 * Size:	000084
 */
void ObjectSpecialActor::JSGSetAnimation(u32 commandID)
{
	JSGGetName();
	JUT_ASSERTLINE(187, mCurrCommandCount < 16, "too many commands !\n");
	mCommands[mCurrCommandCount++] = commandID;
}

/*
 * --INFO--
 * Address:	80437790
 * Size:	000004
 */
void ObjectSpecialActor::parseUserData_(u32, const void*) { }

} // namespace P2JST
} // namespace Game
