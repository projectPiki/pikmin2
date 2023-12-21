#include "types.h"
#include "Game/Entities/Catfish.h"

namespace Game {
namespace Catfish {

/**
 * Catfish Obj constructor
 *
 * @note Address: 0x80277008
 * @note Size: 0x90
 */
Obj::Obj() { }

/**
 * Performs base initialisation and sets shadow joint.
 *
 * @note Address: 0x80277098
 * @note Size: 0x3C
 */
void Obj::onInit(Game::CreatureInitArg* arg)
{
	KochappyBase::Obj::onInit(arg);
	mShadowJoint = mModel->getJoint("kosi");
}

/**
 * Gets shadow parameters for Obj and stores in input param.
 *
 * @note Address: 0x802770D4
 * @note Size: 0xC0
 */
void Obj::getShadowParam(Game::ShadowParam& param)
{
	Matrixf* worldMatrix = mShadowJoint->getWorldMatrix();

	param.mPosition = Vector3f(worldMatrix->mMatrix.mtxView[0][3], worldMatrix->mMatrix.mtxView[1][3], worldMatrix->mMatrix.mtxView[2][3]);

	param.mPosition.y -= 10.0f;
	param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	param.mBoundingSphere.mRadius   = param.mPosition.y - mPosition.y;

	if (isEvent(1, EB2_Earthquake)) {
		param.mBoundingSphere.mRadius += 50.0f;
	} else {
		param.mBoundingSphere.mRadius += 15.0f;
	}

	param.mSize = 15.0f;
}

/**
 * Calls damage calculation upon 'press' (?).
 *
 * @note Address: 0x80277194
 * @note Size: 0x28
 */
bool Obj::pressCallBack(Game::Creature*, f32 damage, CollPart*)
{
	EnemyBase::addDamage(damage, 1.0f);
	return false;
}

/**
 * Calls base response upon 'hipdrop' (?).
 *
 * @note Address: 0x802771BC
 * @note Size: 0x20
 */
bool Obj::hipdropCallBack(Game::Creature* creature, f32 a2, CollPart* collPart)
{
	return EnemyBase::hipdropCallBack(creature, a2, collPart);
}

/**
 * Initialises mouth slots.
 *
 * @note Address: 0x802771DC
 * @note Size: 0xA0
 */
void Obj::initMouthSlots()
{
	mMouthSlots.alloc(2);
	mMouthSlots.setup(0, Creature::mModel, "kamu1");
	mMouthSlots.setup(1, Creature::mModel, "kamu2");

	for (int i = 0; i < mMouthSlots.mMax; i++) {
		mMouthSlots.getSlot(i)->mRadius = 20.0f;
	}
}

/**
 * Resets enemy when bitter state expires.
 *
 * @note Address: 0x8027727C
 * @note Size: 0x44
 */
void Obj::resetEnemyNonStone()
{
	if (isEvent(0, EB_NoInterrupt)) {
		createDownEffect();
	}

	disableEvent(0, EB_NoInterrupt);
}

/**
 * Calls base 'bounce' effect.
 *
 * @note Address: 0x802772C0
 * @note Size: 0x28
 */
void Obj::createDownEffect() { EnemyBase::createBounceEffect(mPosition, 0.5f); }

} // namespace Catfish
} // namespace Game
