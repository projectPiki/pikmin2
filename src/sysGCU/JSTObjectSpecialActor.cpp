#include "Game/P2JST/ObjectActor.h"
#include "Game/GameSystem.h"
#include "Game/CameraMgr.h"
#include "Game/MoviePlayer.h"
#include "System.h"
#include "nans.h"

namespace Game {
namespace P2JST {

/**
 * @note Address: 0x80437400
 * @note Size: 0x58
 */
ObjectSpecialActor::ObjectSpecialActor(const char* name, MoviePlayer* movie)
    : ObjectActor(name, movie)
{
	reset();
}

/**
 * @note Address: 0x80437458
 * @note Size: 0x5C
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

/**
 * @note Address: 0x804374B4
 * @note Size: 0x4
 */
void ObjectSpecialActor::stop() { }

/**
 * @note Address: 0x804374B8
 * @note Size: 0x254
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
				cameraMgr->startDemoCamera(CAMNAVI_Both, CAMDEMO_NearLow);
				break;

			case 102:
				cameraMgr->finishDemoCamera(CAMNAVI_Both);
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

/**
 * @note Address: 0x8043770C
 * @note Size: 0x84
 */
void ObjectSpecialActor::JSGSetAnimation(u32 commandID)
{
	JSGGetName();
	JUT_ASSERTLINE(187, mCurrCommandCount < 16, "too many commands !\n");
	mCommands[mCurrCommandCount++] = commandID;
}

/**
 * @note Address: 0x80437790
 * @note Size: 0x4
 */
void ObjectSpecialActor::parseUserData_(u32, const void*) { }

} // namespace P2JST
} // namespace Game
