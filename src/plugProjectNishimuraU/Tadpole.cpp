#include "Game/Entities/Tadpole.h"
#include "efx/TEnemyDive.h"
#include "efx/TPk.h"
#include "Dolphin/rand.h"
#include "PS.h"

namespace Game {
namespace Tadpole {

/**
 * @note Address: 0x802785D0
 * @note Size: 0x130
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
}

/**
 * @note Address: 0x80278700
 * @note Size: 0x4
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/**
 * @note Address: 0x80278704
 * @note Size: 0x64
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	mStateTimer    = 0.0f;
	mNextState     = TADPOLE_NULL;
	mLeapDirection = 1;
	mFsm->start(this, TADPOLE_Wait, nullptr);
}

/**
 * @note Address: 0x80278768
 * @note Size: 0x34
 */
void Obj::doUpdate() { mFsm->exec(this); }

/**
 * @note Address: 0x8027879C
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x802787A0
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x802787C0
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x8027880C
 * @note Size: 0xB0
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

/**
 * @note Address: 0x802788BC
 * @note Size: 0x68
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if (isAlive() && !isEvent(0, EB_Bittered)) {
		addDamage(mHealth, 1.0f);
		return true;
	}

	return false;
}

/**
 * @note Address: 0x80278924
 * @note Size: 0x28
 */
void Obj::startCarcassMotion() { startMotion(TADPOLEANIM_Carry, nullptr); }

/**
 * @note Address: 0x8027894C
 * @note Size: 0x1E4
 */
void Obj::setRandTarget(bool check)
{
	f32 p1 = 0.0f;
	if (!check) {
		p1 = C_GENERALPARMS.mTerritoryRadius.mValue - C_GENERALPARMS.mHomeRadius.mValue;
	}

	f32 radius          = randWeightFloat(p1) + C_GENERALPARMS.mHomeRadius.mValue;
	Vector3f tadpolePos = getPosition();
	Vector3f homePos    = mHomePosition;
	f32 angle           = JMath::atanTable_.atan2_(tadpolePos.x - homePos.x, tadpolePos.z - homePos.z);
	angle               = randWeightFloat(PI) + angle + HALF_PI;

	mTargetPosition = Vector3f(radius * sinf(angle) + homePos.x, homePos.y, radius * cosf(angle) + homePos.z);
}

/**
 * @note Address: 0x80278B30
 * @note Size: 0x1C8
 */
Vector3f Obj::getTargetPosition(Creature* target)
{
	Vector3f tadpolePos = getPosition();
	Vector3f targetPos  = target->getPosition();
	Vector3f homePos    = mHomePosition;

	Vector3f sep = tadpolePos - targetPos;
	sep.y        = 0.0f;
	sep.normalise();

	sep *= C_GENERALPARMS.mMoveSpeed.mValue;
	sep += tadpolePos;

	f32 territory = C_GENERALPARMS.mTerritoryRadius.mValue;
	if (sqrDistanceXZ(sep, homePos) > SQUARE(territory)) {
		Vector3f::getFlatDirectionFromTo(homePos, sep);
		sep *= territory;
		sep += homePos;
	}
	return sep;
}

/**
 * @note Address: 0x80278CF8
 * @note Size: 0x188
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
