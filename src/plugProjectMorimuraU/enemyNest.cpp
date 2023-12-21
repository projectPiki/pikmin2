#include "Dolphin/os.h"
#include "Game/Entities/Nest.h"
#include "Game/enemyInfo.h"
#include "Game/shadowMgr.h"
#include "Vector3.h"
#include "types.h"

namespace Game {
namespace Nest {
/**
 * @note Address: 0x8036CA94
 * @note Size: 0x34
 */
// void birth__Q34Game4Nest3ObjFR10Vector3f f()
void Obj::birth(Vector3f& position, f32 p2)
{
	EnemyBase::birth(position, p2);
	mHouseType = NEST_Breadbug;
}

/**
 * @note Address: 0x8036CAC8
 * @note Size: 0x11C
 */
void Obj::onInit(Game::CreatureInitArg* arg)
{
	EnemyBase::onInit(arg);
	mAlpha        = 255;
	mDeathTimer   = 0;
	mHomePosition = mPosition;
	disableEvent(0, EB_LeaveCarcass);
	disableEvent(0, EB_DamageAnimEnabled);
	disableEvent(0, EB_DeathEffectEnabled);
	disableEvent(0, EB_PlatformCollEnabled);
	enableEvent(0, EB_BitterImmune);

	setEmotionNone();
	if (shadowMgr) {
		shadowMgr->killShadow(this);
	}
	mHouseTrMatrix                       = mBaseTrMatrix;
	mHouseTrMatrix.mMatrix.structView.ty = mPosition.y - 10.0f;
}

/**
 * ct__
 * @note Address: 0x8036CBE4
 * @note Size: 0x98
 */
Obj::Obj()
    : EnemyBase()
    , mHouseType(NEST_Breadbug)
{
}

/**
 * @note Address: 0x8036CC7C
 * @note Size: 0x20
 */
void Obj::setHouseType(int enemyID)
{
	if (enemyID == EnemyTypeID::EnemyID_Jigumo) {
		mHouseType = NEST_Jigumo;
	} else {
		mHouseType = NEST_Breadbug;
	}
}
} // namespace Nest
} // namespace Game
