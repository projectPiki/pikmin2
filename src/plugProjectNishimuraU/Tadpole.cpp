#include "Game/Entities/Tadpole.h"
#include "efx/TEnemyDive.h"
#include "efx/TPk.h"
#include "Dolphin/rand.h"
#include "PS.h"

namespace Game {
namespace Tadpole {

/*
 * --INFO--
 * Address:	802785D0
 * Size:	000130
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
}

/*
 * --INFO--
 * Address:	80278700
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	80278704
 * Size:	000064
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	mStateTimer = 0.0f;
	mNextState  = TADPOLE_NULL;
	_2C0        = 1;
	mFsm->start(this, TADPOLE_Wait, nullptr);
}

/*
 * --INFO--
 * Address:	80278768
 * Size:	000034
 */
void Obj::doUpdate() { mFsm->exec(this); }

/*
 * --INFO--
 * Address:	8027879C
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802787A0
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	802787C0
 * Size:	00004C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/*
 * --INFO--
 * Address:	8027880C
 * Size:	0000B0
 */
void Obj::getShadowParam(ShadowParam& param)
{
	param.mPosition = getPosition();
	param.mPosition.y += 2.5f;
	param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	if (isEvent(1, EB2_Earthquake)) {
		param.mBoundingSphere.mRadius = 50.0f;
	} else {
		param.mBoundingSphere.mRadius = 7.5f;
	}
	param.mSize = 7.5f;
}

/*
 * --INFO--
 * Address:	802788BC
 * Size:	000068
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if (isAlive() && !isEvent(0, EB_Bittered)) {
		addDamage(mHealth, 1.0f);
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	80278924
 * Size:	000028
 */
void Obj::startCarcassMotion() { startMotion(TADPOLEANIM_Carry, nullptr); }

/*
 * --INFO--
 * Address:	8027894C
 * Size:	0001E4
 */
void Obj::setRandTarget(bool check)
{
	f32 p1 = 0.0f;
	if (!check) {
		p1 = C_PARMS->mGeneral.mTerritoryRadius.mValue - C_PARMS->mGeneral.mHomeRadius.mValue;
	}

	f32 radius          = randWeightFloat(p1) + C_PARMS->mGeneral.mHomeRadius.mValue;
	Vector3f tadpolePos = getPosition();
	Vector3f homePos    = mHomePosition;
	f32 angle           = JMath::atanTable_.atan2_(tadpolePos.x - homePos.x, tadpolePos.z - homePos.z);
	angle               = randWeightFloat(PI) + angle + HALF_PI;

	mTargetPosition = Vector3f(radius * sinf(angle) + homePos.x, homePos.y, radius * cosf(angle) + homePos.z);
}

/*
 * --INFO--
 * Address:	80278B30
 * Size:	0001C8
 */
Vector3f Obj::getTargetPosition(Creature* target)
{
	Vector3f tadpolePos = getPosition();
	Vector3f targetPos  = target->getPosition();
	Vector3f homePos    = mHomePosition;

	Vector3f sep = tadpolePos - targetPos;
	sep.y        = 0.0f;
	sep.normalise();

	sep *= C_PARMS->mGeneral.mMoveSpeed.mValue;
	sep += tadpolePos;

	f32 territory = C_PARMS->mGeneral.mTerritoryRadius.mValue;
	if (sqrDistanceXZ(sep, homePos) > SQUARE(territory)) {
		sep -= homePos;
		sep.y = 0.0f;
		sep.normalise();
		sep *= territory;
		sep += homePos;
	}
	return sep;
}

/*
 * --INFO--
 * Address:	80278CF8
 * Size:	000188
 */
void Obj::createLeapEffect()
{
	if (mWaterBox) {
		Vector3f position = mPosition;
		position.y        = *mWaterBox->getSeaHeightPtr();
		if (position.y - mPosition.y < 22.0f) {
			efx::ArgScale argDive(position, 1.2f);
			efx::TEnemyDive diveFX;

			diveFX.create(&argDive);
			PSStartEnemyDownWatSE(this, 0.3f);
		}
	} else {
		efx::Arg arg(this);
		efx::TPkDiveB pkDiveB;

		pkDiveB.create(&arg);
	}
}

} // namespace Tadpole
} // namespace Game
