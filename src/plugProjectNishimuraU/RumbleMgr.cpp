#include "Game/rumble.h"
#include "Game/Data.h"
#include "Game/GameSystem.h"
#include "Game/Navi.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "System.h"

namespace Game {

static const char unusedRumbleName[] = "246-RumbleMgr";

RumbleMgr* rumbleMgr;

/*
 * --INFO--
 * Address:	80253304
 * Size:	000048
 */
RumbleMgr::RumbleMgr()
    : CNode()
{
	mName = "RumbleMgr";
}

/*
 * --INFO--
 * Address:	8025334C
 * Size:	000158
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

/*
 * --INFO--
 * Address:	802534A4
 * Size:	000108
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

/*
 * --INFO--
 * Address:	802535AC
 * Size:	0001D4
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

/*
 * --INFO--
 * Address:	80253780
 * Size:	0001A4
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

/*
 * --INFO--
 * Address:	80253924
 * Size:	0000B8
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

/*
 * --INFO--
 * Address:	802539DC
 * Size:	000094
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

/*
 * --INFO--
 * Address:	80253A70
 * Size:	000088
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

/*
 * --INFO--
 * Address:	80253AF8
 * Size:	00007C
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

/*
 * --INFO--
 * Address:	80253B74
 * Size:	00005C
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

/*
 * --INFO--
 * Address:	80253BD0
 * Size:	000068
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

/*
 * --INFO--
 * Address:	80253C38
 * Size:	0000C0
 */
void RumbleMgr::readRumbleParms(char* fileName)
{
	void* handle = JKRDvdRipper::loadToMainRAM(fileName, 0, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, 0, 0);
	if (handle) {
		RamStream stream(handle, -1);
		stream.resetPosition(true, 1);
		mParms->read(stream);
		delete[] handle;
	} else {
		JUT_PANICLINE(409, "rumble parameter none\n");
	}
}

/*
 * --INFO--
 * Address:	80253CF8
 * Size:	0000C0
 */
void RumbleMgr::readRumbleData(char* fileName)
{
	void* handle = JKRDvdRipper::loadToMainRAM(fileName, 0, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, 0, 0);
	if (handle) {
		RamStream stream(handle, -1);
		stream.resetPosition(true, 1);
		mDataMgr->read(stream);
		delete[] handle;
	} else {
		JUT_PANICLINE(440, "rumble data none\n");
	}
}
} // namespace Game
