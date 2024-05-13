#include "Game/rumble.h"
#include "Game/Data.h"
#include "Game/GameSystem.h"
#include "Game/Navi.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "System.h"

namespace Game {

static const char unusedRumbleName[] = "246-RumbleMgr";

RumbleMgr* rumbleMgr;

/**
 * @note Address: 0x80253304
 * @note Size: 0x48
 */
RumbleMgr::RumbleMgr()
    : CNode()
{
	mName = "RumbleMgr";
}

/**
 * @note Address: 0x8025334C
 * @note Size: 0x158
 */
void RumbleMgr::loadResource()
{
	mParms = new Parms();
	readRumbleParms("/user/Nishimura/Rumble/rumbleParms.txt");

	mDataMgr = new RumbleDataMgr();
	readRumbleData("/user/Nishimura/Rumble/rumbleData.txt");

	mIsRumbleActive = true;

	mContRumble    = new ContRumble*[2];
	mNavis         = new Navi*[2];
	mController    = nullptr;
	mZukanPosition = nullptr;

	for (int i = 0; i < 2; i++) {
		mContRumble[i] = new ContRumble(i, 8);
		mNavis[i]      = nullptr;
	}
}

/**
 * @note Address: 0x802534A4
 * @note Size: 0x108
 */
void RumbleMgr::init()
{
	if (sys->mPlayData) {
		mIsRumbleActive = (sys->mPlayData->mIsRumble != 0);
	} else {
		mIsRumbleActive = true;
	}

	mController    = nullptr;
	mZukanPosition = nullptr;

	for (int i = 0; i < 2; i++) {
		mContRumble[i]->mDataMgr = mDataMgr;
		mContRumble[i]->init();
		mNavis[i] = nullptr;
	}

	if (gameSystem && !gameSystem->isZukanMode()) {
		for (int i = 0; i < 2; i++) {
			mNavis[i] = naviMgr->getAt(i);
		}
	}
}

/**
 * @note Address: 0x802535AC
 * @note Size: 0x1D4
 */
void RumbleMgr::update()
{
	if (isRumbleUpdateOn()) {
		if (gameSystem && !gameSystem->isMultiplayerMode()) {
			if (mController) {
				mContRumble[0]->setController(true);
				mContRumble[0]->mPadChannel = mController->mPortNum;
				mContRumble[0]->update();

			} else {
				Navi* activeNavi = naviMgr->getActiveNavi();
				for (int i = 0; i < 2; i++) {
					Navi* navi = mNavis[i];
					if (navi && navi->mController1 && navi == activeNavi) {
						mContRumble[i]->setController(true);
						mContRumble[i]->mPadChannel = mNavis[i]->mController1->mPortNum;
					} else {
						mContRumble[i]->setController(false);
					}

					mContRumble[i]->update();
				}
			}

		} else {
			for (int i = 0; i < 2; i++) {
				if (mNavis[i] && mNavis[i]->mController1) {
					mContRumble[i]->setController(true);
					mContRumble[i]->mPadChannel = mNavis[i]->mController1->mPortNum;
				} else {
					mContRumble[i]->setController(false);
				}

				mContRumble[i]->update();
			}
		}
	}
}

/**
 * @note Address: 0x80253780
 * @note Size: 0x1A4
 */
void RumbleMgr::startRumble(int type, Vector3f& pos, int rumbleID)
{
	if (mIsRumbleActive) {
		if (mZukanPosition) {
			f32 dist = mZukanPosition->distance(pos);
			if (dist < 1000.0f) {
				mContRumble[0]->startRumble(type, 2.0f * ((1000.0f - dist) / 1000.0f));
			}

		} else {
			int startEndData[2];
			if (isStartAndEnd(startEndData, rumbleID)) {
				for (int i = startEndData[0]; i < startEndData[1]; i++) {
					Navi* navi = mNavis[i];
					if (navi) {
						Vector3f naviPos = navi->getPosition();
						f32 dist         = pos.distance(naviPos);
						if (dist < mParms->mMaxDistance.mValue) {
							mContRumble[i]->startRumble(type, (mParms->mMaxDistance.mValue - dist) / mParms->mMaxDistance.mValue);
						}
					}
				}
			}
		}
	}
}

/**
 * @note Address: 0x80253924
 * @note Size: 0xB8
 */
void RumbleMgr::startRumble(int type, int rumbleID)
{
	if (mIsRumbleActive) {
		if (mZukanPosition) {
			mContRumble[0]->startRumble(type, 1.0f);
		} else {
			int startEndData[2];
			if (isStartAndEnd(startEndData, rumbleID)) {
				for (int i = startEndData[0]; i < startEndData[1]; i++) {
					mContRumble[i]->startRumble(type, 1.0f);
				}
			}
		}
	}
}

/**
 * @note Address: 0x802539DC
 * @note Size: 0x94
 */
void RumbleMgr::stopRumble(int type, int rumbleID)
{
	if (mIsRumbleActive) {
		int startEndData[2];
		if (isStartAndEnd(startEndData, rumbleID)) {
			for (int i = startEndData[0]; i < startEndData[1]; i++) {
				mContRumble[i]->rumbleStop(type);
			}
		}
	}
}

/**
 * @note Address: 0x80253A70
 * @note Size: 0x88
 */
void RumbleMgr::stopRumble(int rumbleID)
{
	if (mIsRumbleActive) {
		int startEndData[2];
		if (isStartAndEnd(startEndData, rumbleID)) {
			for (int i = startEndData[0]; i < startEndData[1]; i++) {
				mContRumble[i]->rumbleStop();
			}
		}
	}
}

/**
 * @note Address: 0x80253AF8
 * @note Size: 0x7C
 */
bool RumbleMgr::isRumbleUpdateOn()
{
	if (mIsRumbleActive && gameSystem && !gameSystem->mIsFrozen && !gameSystem->paused()) {
		return true;
	}

	for (int i = 0; i < 4; i++) {
		PADControlMotor(i, PAD_MOTOR_STOP_HARD);
	}

	return false;
}

/**
 * @note Address: 0x80253B74
 * @note Size: 0x5C
 */
void RumbleMgr::setZukanRumble(Controller* controller, Vector3f* zukanPos)
{
	if (gameSystem && gameSystem->isZukanMode()) {
		mController    = controller;
		mZukanPosition = zukanPos;
	} else {
		JUT_PANICLINE(350, "not zukan mode\n");
	}
}

/**
 * @note Address: 0x80253BD0
 * @note Size: 0x68
 */
bool RumbleMgr::isStartAndEnd(int* startEndArray, int rumbleID)
{
	if (rumbleID == RUMBLEID_Both) {
		// loop through both captains/controllers
		startEndArray[0] = 0;
		startEndArray[1] = 2;
		return true;

	} else if (rumbleID == RUMBLEID_Navi0) {
		// just do first captain/controller
		startEndArray[0] = 0;
		startEndArray[1] = 1;
		return true;

	} else if (rumbleID == RUMBLEID_Navi1) {
		// just do second captain/controller
		startEndArray[0] = 1;
		startEndArray[1] = 2;
		return true;
	}

	return false;
}

/**
 * @note Address: 0x80253C38
 * @note Size: 0xC0
 */
void RumbleMgr::readRumbleParms(char* fileName)
{
	void* handle = JKRDvdRipper::loadToMainRAM(fileName, 0, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, 0, 0);
	if (handle) {
		RamStream stream(handle, -1);
		stream.setMode(STREAM_MODE_TEXT, 1);
		mParms->read(stream);
		delete[] handle;
	} else {
		JUT_PANICLINE(409, "rumble parameter none\n");
	}
}

/**
 * @note Address: 0x80253CF8
 * @note Size: 0xC0
 */
void RumbleMgr::readRumbleData(char* fileName)
{
	void* handle = JKRDvdRipper::loadToMainRAM(fileName, 0, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, 0, 0);
	if (handle) {
		RamStream stream(handle, -1);
		stream.setMode(STREAM_MODE_TEXT, 1);
		mDataMgr->read(stream);
		delete[] handle;
	} else {
		JUT_PANICLINE(440, "rumble data none\n");
	}
}
} // namespace Game
