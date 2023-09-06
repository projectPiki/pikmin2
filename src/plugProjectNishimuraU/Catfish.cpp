#include "types.h"
#include "Game/Entities/Catfish.h"

namespace Game {
namespace Catfish {

/*
 * Catfish Obj constructor
 *
 * --INFO--
 * Address:	80277008
 * Size:	000090
 */
Obj::Obj() { }

/*
 * Performs base initialisation and sets shadow joint.
 *
 * --INFO--
 * Address:	80277098
 * Size:	00003C
 */
void Obj::onInit(Game::CreatureInitArg* arg)
{
	KochappyBase::Obj::onInit(arg);
	mShadowJoint = mModel->getJoint("kosi");
}

/*
 * Gets shadow parameters for Obj and stores in input param.
 *
 * --INFO--
 * Address:	802770D4
 * Size:	0000C0
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

/*
 * Calls damage calculation upon 'press' (?).
 *
 * --INFO--
 * Address:	80277194
 * Size:	000028
 */
bool Obj::pressCallBack(Game::Creature*, float damage, CollPart*)
{
	EnemyBase::addDamage(damage, 1.0f);
	return false;
}

/*
 * Calls base response upon 'hipdrop' (?).
 *
 * --INFO--
 * Address:	802771BC
 * Size:	000020
 */
bool Obj::hipdropCallBack(Game::Creature* creature, float a2, CollPart* collPart)
{
	return EnemyBase::hipdropCallBack(creature, a2, collPart);
}

/*
 * Initialises mouth slots.
 *
 * --INFO--
 * Address:	802771DC
 * Size:	0000A0
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

/*
 * Resets enemy when bitter state expires.
 *
 * --INFO--
 * Address:	8027727C
 * Size:	000044
 */
void Obj::resetEnemyNonStone()
{
	if (isEvent(0, EB_NoInterrupt)) {
		createDownEffect();
	}

	disableEvent(0, EB_NoInterrupt);
}

/*
 * Calls base 'bounce' effect.
 *
 * --INFO--
 * Address:	802772C0
 * Size:	000028
 */
void Obj::createDownEffect() { EnemyBase::createBounceEffect(mPosition, 0.5f); }

} // namespace Catfish
} // namespace Game
