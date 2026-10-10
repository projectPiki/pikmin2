#include "Game/Entities/Armor.h"
#include "Game/Entities/ItemBridge.h"
#include "Game/EnemyFunc.h"
#include "Game/MapMgr.h"
#include "Game/PikiMgr.h"
#include "Game/Stickers.h"
#include "Dolphin/rand.h"
#include "efx/efxEnemy.h"

namespace Game {
namespace Armor {

/**
 * @note Address: 0x8027D69C
 * @note Size: 0x140
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	createEffect();
}

/**
 * @note Address: 0x8027D7DC
 * @note Size: 0x4
 */
void Obj::setInitialSetting(EnemyInitialParamBase*)
{
}

/**
 * @note Address: 0x8027D7E0
 * @note Size: 0x98
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	disableEvent(0, EB_LifegaugeVisible);
	disableEvent(0, EB_Cullable);
	mNextState      = -1;
	mAttackLoopTime = 0.0f;
	resetBridgeSearch();
	setupEffect();
	mFsm->start(this, ARMOR_Stay, nullptr);
	doAnimationCullingOff();
}

/**
 * @note Address: 0x8027D878
 * @note Size: 0x48
 */
void Obj::doUpdate()
{
	mFsm->exec(this);
	mMouthSlots.update();
}

/**
 * @note Address: 0x8027D8C0
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&)
{
}

/**
 * @note Address: 0x8027D8C4
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx)
{
	EnemyBase::doDebugDraw(gfx);
}

/**
 * @note Address: 0x8027D8E4
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x8027D930
 * @note Size: 0xEC
 */

void Obj::getShadowParam(ShadowParam& param)
{
	Sys::Sphere boundingSphere;
	getBoundingSphere(boundingSphere);
	if (isConstrained()) {
		param.mPosition               = boundingSphere.mPosition;
		param.mBoundingSphere.mRadius = 50.0f;
	} else {
		param.mPosition.x = boundingSphere.mPosition.x;
		param.mPosition.y = mPosition.y + 2.5f;
		param.mPosition.z = boundingSphere.mPosition.z;
		if (isEvent(1, EB2_Earthquake)) {
			param.mBoundingSphere.mRadius = 50.0f;
		} else {
			param.mBoundingSphere.mRadius = 25.0f;
		}
	}
	param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	param.mSize                     = 25.0f;
}

/**
 * @note Address: 0x8027DA1C
 * @note Size: 0x94
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if (isEvent(0, EB_Bittered)) {
		addDamage(damage, 1.0f);
		return true;
	}
	if (collpart && collpart->mCurrentID == 'dmg1') {
		addDamage(damage, 1.0f);
		return true;
	}
	return false;
}

/**
 * @note Address: 0x8027DAB0
 * @note Size: 0x68
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	bool isTakeDamage = damageCallBack(creature, C_GENERALPARMS.mPurplePikiStunDamage, collpart);
	if (!(isEvent(0, EB_Bittered)) && isTakeDamage) {
		enableEvent(0, EB_SquashOnDamageAnim);
	}
	return !isTakeDamage;
}

/**
 * @note Address: 0x8027DB18
 * @note Size: 0x260
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();

	Stickers stickers(this);
	Iterator<Creature> iter(&stickers);

	CI_LOOP(iter)
	{
		Creature* stuck = *iter;
		if (stuck->isStickToMouth()) {
			InteractFlick flick(this, 0.0f, 0.0f, FLICK_BACKWARD_ANGLE);
			stuck->stimulate(flick);
		}
	}
}

/**
 * @note Address: 0x8027DD78
 * @note Size: 0x34
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	mFlickTimer = 0.0f;
}

/**
 * @note Address: 0x8027DDAC
 * @note Size: 0x28
 */
void Obj::startCarcassMotion()
{
	startMotion(ARMORANIM_Carry, nullptr);
}

/**
 * @note Address: 0x8027DDD4
 * @note Size: 0x20
 */
void Obj::doStartMovie()
{
	effectDrawOff();
}

/**
 * @note Address: 0x8027DDF4
 * @note Size: 0x20
 */
void Obj::doEndMovie()
{
	effectDrawOn();
}

/**
 * @note Address: 0x8027DE14
 * @note Size: 0x8C
 */
void Obj::initMouthSlots()
{
	mMouthSlots.alloc(1);
	mMouthSlots.setup(0, mModel, "kamujnt");
	f32 size = 25.0f;
	for (int i = 0; i < mMouthSlots.mMax; i++) {
		mMouthSlots.getSlot(i)->mRadius = size;
	}
}

/**
 * @note Address: 0x8027DEA0
 * @note Size: 0x30
 */
void Obj::lifeIncrement()
{
	mInstantDamage = 0.0f;
	disableEvent(0, EB_TakingDamage);
	if (mHealth <= 0.0f) {
		mHealth = 1.0f;
	}
}

/**
 * @note Address: 0x8027DED0
 * @note Size: 0x3EC
 */
void Obj::attackPikmin()
{
	Iterator<Piki> iter(pikiMgr);
	CI_LOOP(iter)
	{
		Piki* piki = *iter;
		if (piki->isAlive() && piki->isPikmin() && piki->mSticker != this) {
			for (int i = 0; i < mMouthSlots.getMax(); i++) {
				MouthCollPart* slot = mMouthSlots.getSlot(i);
				if (!slot->mStuckCreature) {
					Vector3f slotPos;
					slot->getPosition(slotPos);
					Vector3f pikiPos = piki->getPosition();

					f32 dist = slotPos.distance(pikiPos);
					if (dist < slot->mRadius) {
						InteractSwallow swallow(this, 1.0f, slot);
						swallow.mIsStabbed = TRUE;
						if (piki->stimulate(swallow)) {
							efx::Arg fxArg(pikiPos);
							efx::TYoroiAttackhit attackFX;
							attackFX.create(&fxArg);
							break;
						}
					}
				}
			}
		}
	}
}

/**
 * @note Address: 0x8027E2BC
 * @note Size: 0x8C
 */
int Obj::getSlotPikiNum()
{
	int count              = 0;
	MouthSlots* mouthSlots = getMouthSlots();
	int max                = mouthSlots->getMax();

	for (int i = 0; i < max; i++) {
		if (mouthSlots->getSlot(i)->mStuckCreature) {
			count++;
		}
	}

	return count;
}

/**
 * @note Address: 0x8027E350
 * @note Size: 0x2C
 */
void Obj::killSlotPiki()
{
	Game::EnemyFunc::swallowPikmin(this, CG_PROPERPARMS(this).mPoisonDamage.mValue, nullptr);
}

/**
 * @note Address: 0x8027E37C
 * @note Size: 0x20
 */
void Obj::resetBridgeSearch()
{
	mNeedsBridgeSearch    = true;
	mBridge               = nullptr;
	mBridgePositionOffset = 0.0f;
	mBridgeWidth          = 0.0f;
}

/**
 * @note Address: 0x8027E39C
 * @note Size: 0x48
 */
void Obj::setBridgeSearch()
{
	if (mNeedsBridgeSearch) {
		mNeedsBridgeSearch = false;
		setNearestBridge();
		setCullingCheck();
	}
}

/**
 * @note Address: 0x8027E3E4
 * @note Size: 0x2C0
 */
void Obj::setNearestBridge()
{
	mBridge               = nullptr;
	mBridgePositionOffset = 0.0f;
	mBridgeWidth          = 0.0f;

	if (ItemBridge::mgr) {
		f32 dist = SQUARE(C_GENERALPARMS.mTerritoryRadius.mValue);

		Iterator<BaseItem> iter(ItemBridge::mgr);

		CI_LOOP(iter)
		{
			ItemBridge::Item* bridge = static_cast<ItemBridge::Item*>(*iter);
			Vector3f bridgePos       = bridge->getStartPos();

			f32 newDist = mPosition.sqrDistance2D(bridgePos);
			if (newDist < dist) {
				mBridge = bridge;
				dist    = newDist;
			}
		}
	}

	if (mBridge) {
		f32 grabDist          = mBridge->getStageWidth() - 50.0f;
		mBridgePositionOffset = randWeightFloat(grabDist) - 0.5f * grabDist;
	}
}

/**
 * @note Address: 0x8027E6A4
 * @note Size: 0x4
 */
void Obj::setCullingCheck()
{
}

/**
 * @note Address: 0x8027E6A8
 * @note Size: 0x1B4
 */
int Obj::checkBreakOrMove()
{
	if (mBridge) {
		Vector3f zVec     = mBridge->getBridgeZVec();
		Vector3f startPos = mBridge->getStartPos();

		Vector3f bridgeDist = startPos - mPosition;
		if (zVec.dot(bridgeDist) > 0.0f) {
			return ARMOR_MoveCentre;
		}

		Vector3f xVec = mBridge->getBridgeXVec();
		f32 halfWidth = 0.5f * mBridge->getStageWidth();
		f32 dotX      = xVec.dot(bridgeDist);
		f32 width     = 50.0f + halfWidth;

		if (dotX < 0.0f) {
			mBridgeWidth = width;
		} else {
			mBridgeWidth = -width;
		}

		if (absVal(dotX) > halfWidth) {
			return ARMOR_MoveSide;
		}

		f32 minY = mapMgr->getMinY(mPosition);

		if (mPosition.y > 5.0f + minY) {
			return ARMOR_MoveTop;
		}

		return ARMOR_MoveSide;
	}

	return ARMOR_MoveCentre;
}

/**
 * @note Address: 0x8027E85C
 * @note Size: 0x28
 */
bool Obj::isBreakBridge()
{
	if (mBridge && mBridge->mCurrStageIdx) {
		return true;
	}

	return false;
}

/**
 * @note Address: 0x8027E884
 * @note Size: 0x2A8
 */
bool Obj::moveBridgeSide()
{
	f32 speed;
	Vector3f startPos = mBridge->getStartPos();
	Vector3f xVec     = mBridge->getBridgeXVec();
	Vector3f zVec     = mBridge->getBridgeZVec();

	xVec *= mBridgeWidth;
	zVec *= -50.0f;

	startPos += xVec;
	startPos += zVec;

	if (mPosition.sqrDistance2D(startPos) < 250.0f) {
		setTargetSpeed(0.75f * C_GENERALPARMS.mMoveSpeed());

		return true;

	} else {
		f32 val = turnToTarget(startPos, C_GENERALPARMS.mTurnSpeed(), C_GENERALPARMS.mMaxTurnAngle());

		setTargetSpeed(C_GENERALPARMS.mMoveSpeed());

		return false;
	}
}

/**
 * @note Address: 0x8027EB2C
 * @note Size: 0x288
 */
bool Obj::moveBridgeCentre()
{
	Vector3f startPos = mBridge->getStartPos();
	Vector3f xVec     = mBridge->getBridgeXVec();

	xVec *= 0.7f * mBridgePositionOffset;
	startPos += xVec;

	if (mPosition.sqrDistance2D(startPos) < 250.0f) {
		setTargetSpeed(0.75f * C_GENERALPARMS.mMoveSpeed());

		return true;

	} else {
		f32 val = turnToTarget(startPos, C_GENERALPARMS.mTurnSpeed(), C_GENERALPARMS.mMaxTurnAngle());

		setTargetSpeed(C_GENERALPARMS.mMoveSpeed());

		return false;
	}
}

/**
 * @note Address: 0x8027EDB4
 * @note Size: 0x31C
 */
bool Obj::moveBridgeTop()
{
	int stageID       = mBridge->mCurrStageIdx - 1;
	Vector3f stagePos = mBridge->getStagePos(stageID);
	Vector3f xVec     = mBridge->getBridgeXVec();

	xVec *= mBridgePositionOffset;
	stagePos += xVec;

	if (stageID > 0) {
		Vector3f zVec = mBridge->getBridgeZVec();
		zVec *= -50.0f;
		stagePos += zVec;
	} else {
		Vector3f zVec = mBridge->getBridgeZVec();
		zVec *= -25.0f;
		stagePos += zVec;
	}

	f32 val = turnToTarget(stagePos, C_GENERALPARMS.mTurnSpeed(), C_GENERALPARMS.mMaxTurnAngle());

	f32 dist = mPosition.sqrDistance2D(stagePos);
	if (dist < 50.0f) {
		mTargetVelocity = Vector3f(0.0f);
		return true;

	} else if (dist < 750.0f) {
		f32 moveSpeed = C_GENERALPARMS.mMoveSpeed();
		f32 x         = dolsinf(getFaceDir());
		f32 y         = getTargetVelocity().y;
		f32 z         = dolcosf(getFaceDir());

		mTargetVelocity = Vector3f(moveSpeed * x, y, moveSpeed * z);

		return true;

	} else {
		f32 moveSpeed = C_GENERALPARMS.mMoveSpeed();
		f32 x         = dolsinf(getFaceDir());
		f32 y         = getTargetVelocity().y;
		f32 z         = dolcosf(getFaceDir());

		mTargetVelocity = Vector3f(moveSpeed * x, y, moveSpeed * z);
	}

	return false;
}

/**
 * @note Address: 0x8027F0D0
 * @note Size: 0x5C
 */
void Obj::breakTargetBridge()
{
	InteractBreakBridge interactBridge(this, C_PROPERPARMS.mBridgeDamage.mValue);
	mBridge->stimulate(interactBridge);
}

/**
 * @note Address: 0x8027F12C
 * @note Size: 0xB0
 */
void Obj::createEffect()
{
	mEfxYoroiAttack = new efx::TYoroiAttack;
}

/**
 * @note Address: 0x8027F1DC
 * @note Size: 0x40
 */
void Obj::setupEffect()
{
	mEfxYoroiAttack->mMtx = mModel->getJoint("kamujnt")->getWorldMatrix();
}

/**
 * @note Address: 0x8027F21C
 * @note Size: 0x34
 */
void Obj::createAttackEffect()
{
	mEfxYoroiAttack->create(nullptr);
}

/**
 * @note Address: 0x8027F250
 * @note Size: 0x8C
 */
void Obj::createAppearEffect()
{
	Matrixf* mat = mModel->getJoint("yoroimushi")->getWorldMatrix();

	efx::TYoroiAp appearFX(mat);
	appearFX.create(nullptr);
}

/**
 * @note Address: 0x8027F2DC
 * @note Size: 0x8C
 */
void Obj::createDisAppearEffect()
{
	Matrixf* mat = mModel->getJoint("yoroimushi")->getWorldMatrix();

	efx::TYoroiHd disappearFX(mat);
	disappearFX.create(nullptr);
}

/**
 * @note Address: 0x8027F368
 * @note Size: 0x90
 */
void Obj::createBridgeEffect()
{
	Matrixf* mat = mModel->getJoint("kamujnt")->getWorldMatrix();
	Vector3f pos = mat->getColumn(3);
	efx::Arg fxArg(pos);
	efx::TYoroiEat eatFX;

	eatFX.create(&fxArg);
}

/**
 * @note Address: 0x8027F3F8
 * @note Size: 0x30
 */
void Obj::effectDrawOn()
{
	mEfxYoroiAttack->endDemoDrawOn();
}

/**
 * @note Address: 0x8027F428
 * @note Size: 0x30
 */
void Obj::effectDrawOff()
{
	mEfxYoroiAttack->startDemoDrawOff();
}

} // namespace Armor
} // namespace Game
