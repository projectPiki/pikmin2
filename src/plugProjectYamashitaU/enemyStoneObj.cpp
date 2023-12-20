#include "types.h"
#include "Game/EnemyStone.h"
#include "Game/generalEnemyMgr.h"
#include "Game/gamePlayData.h"
#include "Game/MoviePlayer.h"
#include "nans.h"

namespace Game {
namespace EnemyStone {

/**
 * @note Address: 0x80129B30
 * @note Size: 0xA8
 */
Obj::Obj(EnemyBase* enemy, Info* info)
    : mInfo(info)
    , mEnemy(enemy)
    , mFlags(0)
{
	resetFlags();
	mNodeArray[0].clearRelations();
	mNodeArray[1].clearRelations();
}

/**
 * @note Address: 0x80129BD8
 * @note Size: 0x104
 */
bool Obj::start()
{
	resetFlags();
	bool result = false;

	if (generalEnemyMgr->mStoneMgr.regist(this)) {
		setFlag(STONE_Unk6);
		f32 appearVal = 0.0f;
		f32 normVal   = 1.0f / (f32)mInfo->mLength;

		for (int i = 0; i < 2; i++) {
			DrawInfo* currInfo = static_cast<DrawInfo*>(mNodeArray[i].mChild);

			while (currInfo) {
				DrawInfo* nextInfo = static_cast<DrawInfo*>(currInfo->mNext);
				currInfo->appear(mEnemy, appearVal);
				appearVal -= normVal;
				currInfo = nextInfo;
			}
		}

		result = true;
	}
	return result;
}

/**
 * @note Address: 0x80129CDC
 * @note Size: 0xE0
 */
void Obj::shake()
{
	if (!isFlag(STONE_Shake)) {
		setFlag(STONE_Shake);

		f32 shakeVal = 0.0;                   // supplied to shake
		f32 normVal  = 1.0f / mInfo->mLength; // used to adjust shake for next DrawInfo node

		for (int i = 0; i < 2; i++) {
			DrawInfo* currInfo = (DrawInfo*)mNodeArray[i].mChild;

			while (currInfo != nullptr) {
				DrawInfo* nextInfo = (DrawInfo*)currInfo->mNext;
				currInfo->shake(mEnemy, shakeVal);
				shakeVal -= normVal;
				currInfo = nextInfo;
			}
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
void Obj::updateDrawInfo()
{
	for (int i = 0; i < 2; i++) {
		DrawInfo* currInfo = (DrawInfo*)mNodeArray[i].mChild;

		while (currInfo != nullptr) {
			DrawInfo* nextInfo = (DrawInfo*)currInfo->mNext;
			currInfo->update(mEnemy);
			currInfo = nextInfo;
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
void Obj::fitDrawInfo()
{
	for (int i = 0; i < 2; i++) {
		DrawInfo* currInfo = (DrawInfo*)mNodeArray[i].mChild;

		while (currInfo != nullptr) {
			DrawInfo* nextInfo = (DrawInfo*)currInfo->mNext;
			currInfo->fit(mEnemy);
			currInfo = nextInfo;
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
void Obj::disappearDrawInfo()
{
	for (int i = 0; i < 2; i++) {
		DrawInfo* currInfo = (DrawInfo*)mNodeArray[i].mChild;

		while (currInfo != nullptr) {
			DrawInfo* nextInfo = (DrawInfo*)currInfo->mNext;
			currInfo->disappear(mEnemy);
			currInfo = nextInfo;
		}
	}
}

/**
 * @note Address: 0x80129DBC
 * @note Size: 0x2A8
 */
void Obj::update()
{
	updateDrawInfo();

	if (!isFlag(STONE_Fit)) {
		mEnemy->mSoundObj->startSound(PSSE_EN_DOPING_GAS_FREEZE, 0);
		if (checkDrawInfoState(2)) {
			setFlag(STONE_Fit);
			fitDrawInfo();
		}

	} else if (!isFlag(STONE_HasViewedDemo)) {
		if (checkDrawInfoState(4)) {
			setFlag(STONE_HasViewedDemo);
			if (gameSystem->isStoryMode() && gameSystem->isFlag(GAMESYS_IsGameWorldActive)
			    && !playData->isDemoFlag(DEMO_First_Bitter_Use)) {
				if (moviePlayer) {
					MoviePlayArg playArg("g1B_black_doping", nullptr, nullptr, 0);
					playArg.mOrigin            = mEnemy->getPosition();
					playArg.mAngle             = mEnemy->getFaceDir();
					moviePlayer->mTargetObject = mEnemy;
					moviePlayer->play(playArg);
					playData->setDemoFlag(DEMO_First_Bitter_Use);
				}
			}
		}

	} else if (isFlag(STONE_Shake)) {
		if (checkDrawInfoState(6)) {
			disappearDrawInfo();
			mEnemy->mSoundObj->startSound(PSSE_EN_DOPING_ROCK_BREAK, 0);
			setFlag(STONE_Break);
			generalEnemyMgr->mStoneMgr.release(this);
		}
	}
}

/**
 * @note Address: 0x8012A064
 * @note Size: 0x88
 */
bool Obj::checkDrawInfoState(int state)
{
	for (int i = 0; i < 2; i++) {
		DrawInfo* currInfo = (DrawInfo*)mNodeArray[i].mChild;

		while (currInfo != nullptr) { // loop through all child DrawInfos and 'update' each one
			DrawInfo* nextInfo = (DrawInfo*)currInfo->mNext;
			if (currInfo->getStateID() != state) {
				return false;
			}
			currInfo = nextInfo;
		}
	}
	return true;
}

/**
 * @note Address: 0x8012A0EC
 * @note Size: 0xB4
 */
void Obj::dead()
{
	for (int i = 0; i < 2; i++) {
		DrawInfo* currInfo = (DrawInfo*)mNodeArray[i].mChild;

		while (currInfo) {
			DrawInfo* nextInfo = (DrawInfo*)currInfo->mNext;
			currInfo->dead(mEnemy);
			currInfo = nextInfo;
		}
	}

	mEnemy->mSoundObj->startSound(PSSE_EN_DOPING_ROCK_BREAK, 0);
	setFlag(STONE_Break);
	generalEnemyMgr->mStoneMgr.release(this);
}

} // namespace EnemyStone
} // namespace Game
