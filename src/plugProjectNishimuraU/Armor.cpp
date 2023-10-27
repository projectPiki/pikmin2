#include "Game/Entities/Armor.h"
#include "Game/Entities/ItemBridge.h"
#include "Game/EnemyFunc.h"
#include "Game/MapMgr.h"
#include "Game/PikiMgr.h"
#include "Game/Stickers.h"
#include "Dolphin/rand.h"
#include "efx/TYoroi.h"

namespace Game {
namespace Armor {

/*
 * --INFO--
 * Address:	8027D69C
 * Size:	000140
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	createEffect();
}

/*
 * --INFO--
 * Address:	8027D7DC
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	8027D7E0
 * Size:	000098
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

/*
 * --INFO--
 * Address:	8027D878
 * Size:	000048
 */
void Obj::doUpdate()
{
	mFsm->exec(this);
	mMouthSlots.update();
}

/*
 * --INFO--
 * Address:	8027D8C0
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8027D8C4
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	8027D8E4
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
 * Address:	8027D930
 * Size:	0000EC
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

/*
 * --INFO--
 * Address:	8027DA1C
 * Size:	000094
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

/*
 * --INFO--
 * Address:	8027DAB0
 * Size:	000068
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	bool isTakeDamage = damageCallBack(creature, static_cast<Parms*>(mParms)->mGeneral.mPurplePikiStunDamage, collpart);
	if (!(isEvent(0, EB_Bittered)) && isTakeDamage) {
		enableEvent(0, EB_SquashOnDamageAnim);
	}
	return !isTakeDamage;
}

/*
 * --INFO--
 * Address:	8027DB18
 * Size:	000260
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

/*
 * --INFO--
 * Address:	8027DD78
 * Size:	000034
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	mFlickTimer = 0.0f;
}

/*
 * --INFO--
 * Address:	8027DDAC
 * Size:	000028
 */
void Obj::startCarcassMotion() { startMotion(ARMORANIM_Carry, nullptr); }

/*
 * --INFO--
 * Address:	8027DDD4
 * Size:	000020
 */
void Obj::doStartMovie() { effectDrawOff(); }

/*
 * --INFO--
 * Address:	8027DDF4
 * Size:	000020
 */
void Obj::doEndMovie() { effectDrawOn(); }

/*
 * --INFO--
 * Address:	8027DE14
 * Size:	00008C
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

/*
 * --INFO--
 * Address:	8027DEA0
 * Size:	000030
 */
void Obj::lifeIncrement()
{
	mInstantDamage = 0.0f;
	disableEvent(0, EB_TakingDamage);
	if (mHealth <= 0.0f) {
		mHealth = 1.0f;
	}
}

/*
 * --INFO--
 * Address:	8027DED0
 * Size:	0003EC
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
						swallow._10 = 1;
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

/*
 * --INFO--
 * Address:	8027E2BC
 * Size:	00008C
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

/*
 * --INFO--
 * Address:	8027E350
 * Size:	00002C
 */
void Obj::killSlotPiki() { Game::EnemyFunc::swallowPikmin(this, CG_PROPERPARMS(this).mPoisonDamage.mValue, nullptr); }

/*
 * --INFO--
 * Address:	8027E37C
 * Size:	000020
 */
void Obj::resetBridgeSearch()
{
	_2C0    = 1;
	mBridge = nullptr;
	_2DC    = 0.0f;
	_2E0    = 0.0f;
}

/*
 * --INFO--
 * Address:	8027E39C
 * Size:	000048
 */
void Obj::setBridgeSearch()
{
	if (_2C0) {
		_2C0 = 0;
		setNearestBridge();
		setCullingCheck();
	}
}

/*
 * --INFO--
 * Address:	8027E3E4
 * Size:	0002C0
 */
void Obj::setNearestBridge()
{
	mBridge = nullptr;
	_2DC    = 0.0f;
	_2E0    = 0.0f;

	if (ItemBridge::mgr) {
		f32 dist = SQUARE(C_PARMS->mGeneral.mTerritoryRadius.mValue);

		Iterator<BaseItem> iter(ItemBridge::mgr);

		CI_LOOP(iter)
		{
			ItemBridge::Item* bridge = static_cast<ItemBridge::Item*>(*iter);
			Vector3f bridgePos       = bridge->getStartPos();

			f32 newDist = sqrDistanceXZ(mPosition, bridgePos);
			if (newDist < dist) {
				mBridge = bridge;
				dist    = newDist;
			}
		}
	}

	if (mBridge) {
		f32 grabDist = mBridge->getStageWidth() - 50.0f;
		_2DC         = randWeightFloat(grabDist) - 0.5f * grabDist;
	}
}

/*
 * --INFO--
 * Address:	8027E6A4
 * Size:	000004
 */
void Obj::setCullingCheck() { }

/*
 * --INFO--
 * Address:	8027E6A8
 * Size:	0001B4
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
			_2E0 = width;
		} else {
			_2E0 = -width;
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

/*
 * --INFO--
 * Address:	8027E85C
 * Size:	000028
 */
bool Obj::isBreakBridge()
{
	if (mBridge && mBridge->mCurrStageIdx) {
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	8027E884
 * Size:	0002A8
 */
bool Obj::moveBridgeSide()
{
	f32 speed;
	Vector3f startPos = mBridge->getStartPos();
	Vector3f xVec     = mBridge->getBridgeXVec();
	Vector3f zVec     = mBridge->getBridgeZVec();

	xVec *= _2E0;
	zVec *= -50.0f;

	startPos += xVec;
	startPos += zVec;

	if (sqrDistanceXZ(mPosition, startPos) < 250.0f) {
		f32 speed    = 0.75f * C_PARMS->mGeneral.mMoveSpeed.mValue;
		f32 sinTheta = sin(getFaceDir());
		f32 y        = getTargetVelocity().y;
		f32 cosTheta = cos(getFaceDir());

		mTargetVelocity.x = speed * sinTheta;
		mTargetVelocity.y = y;
		mTargetVelocity.z = speed * cosTheta;

		return true;

	} else {
		changeFaceDir(startPos);

		f32 speed    = C_PARMS->mGeneral.mMoveSpeed.mValue;
		f32 sinTheta = sin(getFaceDir());
		f32 y        = getTargetVelocity().y;
		f32 cosTheta = cos(getFaceDir());

		mTargetVelocity.x = speed * sinTheta;
		mTargetVelocity.y = y;
		mTargetVelocity.z = speed * cosTheta;

		return false;
	}
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stfd     f31, 0x90(r1)
	psq_st   f31, 152(r1), 0, qr0
	stfd     f30, 0x80(r1)
	psq_st   f30, 136(r1), 0, qr0
	stfd     f29, 0x70(r1)
	psq_st   f29, 120(r1), 0, qr0
	stfd     f28, 0x60(r1)
	psq_st   f28, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	mr       r31, r3
	addi     r3, r1, 0x44
	lwz      r4, 0x2d8(r31)
	bl       getStartPos__Q34Game10ItemBridge4ItemFv
	lfs      f29, 0x44(r1)
	addi     r3, r1, 0x38
	lfs      f28, 0x4c(r1)
	lwz      r4, 0x2d8(r31)
	bl       getBridgeXVec__Q34Game10ItemBridge4ItemFv
	lfs      f30, 0x38(r1)
	addi     r3, r1, 0x2c
	lfs      f31, 0x40(r1)
	lwz      r4, 0x2d8(r31)
	bl       getBridgeZVec__Q34Game10ItemBridge4ItemFv
	lfs      f1, 0x2e0(r31)
	lfs      f4, 0x34(r1)
	fmuls    f31, f31, f1
	lfs      f0, lbl_8051B574@sda21(r2)
	fmuls    f30, f30, f1
	lfs      f3, 0x2c(r1)
	fmuls    f4, f4, f0
	lfs      f1, 0x194(r31)
	fadds    f28, f28, f31
	lfs      f2, 0x18c(r31)
	fmuls    f3, f3, f0
	lfs      f0, lbl_8051B578@sda21(r2)
	fadds    f29, f29, f30
	fadds    f28, f28, f4
	fadds    f29, f29, f3
	fsubs    f1, f1, f28
	fsubs    f2, f2, f29
	fmuls    f1, f1, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8027E9BC
	mr       r3, r31
	lwz      r4, 0xc0(r31)
	lwz      r12, 0(r31)
	lfs      f1, lbl_8051B57C@sda21(r2)
	lfs      f0, 0x2e4(r4)
	lwz      r12, 0x64(r12)
	fmuls    f30, f1, f0
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f29, f1
	lfs      f31, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x20(r1)
	stfs     f31, 0x24(r1)
	stfs     f0, 0x28(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f30, f29
	li       r3, 1
	frsp     f1, f1
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f30, f1
	stfs     f31, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_8027EAF8

lbl_8027E9BC:
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	addi     r3, r1, 8
	lfs      f31, 0x334(r5)
	lwz      r12, 8(r12)
	lfs      f30, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x10(r1)
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f29, f1
	fsubs    f2, f28, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f29, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f29
	bl       angDist__Fff
	fmuls    f30, f1, f30
	lfs      f0, lbl_8051B584@sda21(r2)
	lfs      f1, lbl_8051B580@sda21(r2)
	fmuls    f0, f0, f31
	fabs     f2, f30
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_8027EA60
	lfs      f0, lbl_8051B540@sda21(r2)
	fcmpo    cr0, f30, f0
	ble      lbl_8027EA5C
	fmr      f30, f1
	b        lbl_8027EA60

lbl_8027EA5C:
	fneg     f30, f1

lbl_8027EA60:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f30, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	mr       r3, r31
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	lwz      r12, 0(r31)
	lwz      r4, 0xc0(r31)
	lwz      r12, 0x64(r12)
	lfs      f30, 0x2e4(r4)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f29, f1
	lfs      f31, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x14(r1)
	stfs     f31, 0x18(r1)
	stfs     f0, 0x1c(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f30, f29
	li       r3, 0
	frsp     f1, f1
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f30, f1
	stfs     f31, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_8027EAF8:
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	psq_l    f30, 136(r1), 0, qr0
	lfd      f30, 0x80(r1)
	psq_l    f29, 120(r1), 0, qr0
	lfd      f29, 0x70(r1)
	psq_l    f28, 104(r1), 0, qr0
	lfd      f28, 0x60(r1)
	lwz      r0, 0xa4(r1)
	lwz      r31, 0x5c(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027EB2C
 * Size:	000288
 */
bool Obj::moveBridgeCentre()
{
	Vector3f startPos = mBridge->getStartPos();
	Vector3f xVec     = mBridge->getBridgeXVec();

	xVec *= 0.7f * _2DC;
	startPos += xVec;

	if (sqrDistanceXZ(mPosition, startPos) < 250.0f) {
		f32 speed    = 0.75f * C_PARMS->mGeneral.mMoveSpeed.mValue;
		f32 sinTheta = sin(getFaceDir());
		f32 y        = getTargetVelocity().y;
		f32 cosTheta = cos(getFaceDir());

		mTargetVelocity.x = speed * sinTheta;
		mTargetVelocity.y = y;
		mTargetVelocity.z = speed * cosTheta;

		return true;

	} else {
		changeFaceDir(startPos);

		f32 speed    = C_PARMS->mGeneral.mMoveSpeed.mValue;
		f32 sinTheta = sin(getFaceDir());
		f32 y        = getTargetVelocity().y;
		f32 cosTheta = cos(getFaceDir());

		mTargetVelocity.x = speed * sinTheta;
		mTargetVelocity.y = y;
		mTargetVelocity.z = speed * cosTheta;

		return false;
	}
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stfd     f30, 0x70(r1)
	psq_st   f30, 120(r1), 0, qr0
	stfd     f29, 0x60(r1)
	psq_st   f29, 104(r1), 0, qr0
	stfd     f28, 0x50(r1)
	psq_st   f28, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	mr       r31, r3
	addi     r3, r1, 0x38
	lwz      r4, 0x2d8(r31)
	bl       getStartPos__Q34Game10ItemBridge4ItemFv
	lfs      f29, 0x38(r1)
	addi     r3, r1, 0x2c
	lfs      f28, 0x40(r1)
	lwz      r4, 0x2d8(r31)
	bl       getBridgeXVec__Q34Game10ItemBridge4ItemFv
	lfs      f1, lbl_8051B588@sda21(r2)
	lfs      f0, 0x2dc(r31)
	lfs      f5, 0x34(r1)
	fmuls    f3, f1, f0
	lfs      f4, 0x2c(r1)
	lfs      f1, 0x194(r31)
	lfs      f2, 0x18c(r31)
	fmuls    f5, f5, f3
	lfs      f0, lbl_8051B578@sda21(r2)
	fmuls    f4, f4, f3
	fadds    f28, f28, f5
	fadds    f29, f29, f4
	fsubs    f1, f1, f28
	fsubs    f2, f2, f29
	fmuls    f1, f1, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8027EC44
	mr       r3, r31
	lwz      r4, 0xc0(r31)
	lwz      r12, 0(r31)
	lfs      f1, lbl_8051B57C@sda21(r2)
	lfs      f0, 0x2e4(r4)
	lwz      r12, 0x64(r12)
	fmuls    f30, f1, f0
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f29, f1
	lfs      f31, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x20(r1)
	stfs     f31, 0x24(r1)
	stfs     f0, 0x28(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f30, f29
	li       r3, 1
	frsp     f1, f1
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f30, f1
	stfs     f31, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_8027ED80

lbl_8027EC44:
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	addi     r3, r1, 8
	lfs      f31, 0x334(r5)
	lwz      r12, 8(r12)
	lfs      f30, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x10(r1)
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f29, f1
	fsubs    f2, f28, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f29, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f29
	bl       angDist__Fff
	fmuls    f30, f1, f30
	lfs      f0, lbl_8051B584@sda21(r2)
	lfs      f1, lbl_8051B580@sda21(r2)
	fmuls    f0, f0, f31
	fabs     f2, f30
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_8027ECE8
	lfs      f0, lbl_8051B540@sda21(r2)
	fcmpo    cr0, f30, f0
	ble      lbl_8027ECE4
	fmr      f30, f1
	b        lbl_8027ECE8

lbl_8027ECE4:
	fneg     f30, f1

lbl_8027ECE8:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f30, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	mr       r3, r31
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	lwz      r12, 0(r31)
	lwz      r4, 0xc0(r31)
	lwz      r12, 0x64(r12)
	lfs      f30, 0x2e4(r4)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f29, f1
	lfs      f31, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x14(r1)
	stfs     f31, 0x18(r1)
	stfs     f0, 0x1c(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f30, f29
	li       r3, 0
	frsp     f1, f1
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f30, f1
	stfs     f31, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_8027ED80:
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	psq_l    f28, 88(r1), 0, qr0
	lfd      f28, 0x50(r1)
	lwz      r0, 0x94(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027EDB4
 * Size:	00031C
 */
bool Obj::moveBridgeTop()
{
	int stageID       = mBridge->mCurrStageIdx - 1;
	Vector3f stagePos = mBridge->getStagePos(stageID);
	Vector3f xVec     = mBridge->getBridgeXVec();

	xVec *= _2DC;
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

	changeFaceDir(stagePos);

	f32 dist = sqrDistanceXZ(mPosition, stagePos);
	if (dist < 50.0f) {
		mTargetVelocity = Vector3f(0.0f);
		return true;

	} else if (dist < 750.0f) {
		f32 speed    = C_PARMS->mGeneral.mMoveSpeed.mValue;
		f32 sinTheta = sin(getFaceDir());
		f32 y        = getTargetVelocity().y;
		f32 cosTheta = cos(getFaceDir());

		mTargetVelocity.x = speed * sinTheta;
		mTargetVelocity.y = y;
		mTargetVelocity.z = speed * cosTheta;

		return true;

	} else {
		f32 speed    = C_PARMS->mGeneral.mMoveSpeed.mValue;
		f32 sinTheta = sin(getFaceDir());
		f32 y        = getTargetVelocity().y;
		f32 cosTheta = cos(getFaceDir());

		mTargetVelocity.x = speed * sinTheta;
		mTargetVelocity.y = y;
		mTargetVelocity.z = speed * cosTheta;
	}

	return false;
	/*
	stwu     r1, -0xc0(r1)
	mflr     r0
	stw      r0, 0xc4(r1)
	stfd     f31, 0xb0(r1)
	psq_st   f31, 184(r1), 0, qr0
	stfd     f30, 0xa0(r1)
	psq_st   f30, 168(r1), 0, qr0
	stfd     f29, 0x90(r1)
	psq_st   f29, 152(r1), 0, qr0
	stfd     f28, 0x80(r1)
	psq_st   f28, 136(r1), 0, qr0
	stfd     f27, 0x70(r1)
	psq_st   f27, 120(r1), 0, qr0
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	mr       r30, r3
	addi     r3, r1, 0x50
	lwz      r4, 0x2d8(r30)
	lwz      r5, 0x218(r4)
	addi     r31, r5, -1
	mr       r5, r31
	bl       getStagePos__Q34Game10ItemBridge4ItemFi
	lfs      f31, 0x50(r1)
	addi     r3, r1, 0x44
	lfs      f30, 0x58(r1)
	lwz      r4, 0x2d8(r30)
	bl       getBridgeXVec__Q34Game10ItemBridge4ItemFv
	lfs      f1, 0x44(r1)
	cmpwi    r31, 0
	lfs      f0, 0x2dc(r30)
	lfs      f2, 0x4c(r1)
	fmuls    f1, f1, f0
	fmuls    f2, f2, f0
	fadds    f31, f31, f1
	fadds    f30, f30, f2
	ble      lbl_8027EE70
	lwz      r4, 0x2d8(r30)
	addi     r3, r1, 0x38
	bl       getBridgeZVec__Q34Game10ItemBridge4ItemFv
	lfs      f1, 0x38(r1)
	lfs      f0, lbl_8051B574@sda21(r2)
	lfs      f2, 0x40(r1)
	fmuls    f1, f1, f0
	fmuls    f2, f2, f0
	fadds    f31, f31, f1
	fadds    f30, f30, f2
	b        lbl_8027EE98

lbl_8027EE70:
	lwz      r4, 0x2d8(r30)
	addi     r3, r1, 0x2c
	bl       getBridgeZVec__Q34Game10ItemBridge4ItemFv
	lfs      f1, 0x2c(r1)
	lfs      f0, lbl_8051B58C@sda21(r2)
	lfs      f2, 0x34(r1)
	fmuls    f1, f1, f0
	fmuls    f2, f2, f0
	fadds    f31, f31, f1
	fadds    f30, f30, f2

lbl_8027EE98:
	mr       r4, r30
	lwz      r5, 0xc0(r30)
	lwz      r12, 0(r30)
	addi     r3, r1, 8
	lfs      f28, 0x334(r5)
	lwz      r12, 8(r12)
	lfs      f29, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x10(r1)
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f31, f1
	fsubs    f2, f30, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r30)
	fmr      f27, f1
	mr       r3, r30
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f27
	bl       angDist__Fff
	fmuls    f29, f1, f29
	lfs      f0, lbl_8051B584@sda21(r2)
	lfs      f1, lbl_8051B580@sda21(r2)
	fmuls    f0, f0, f28
	fabs     f2, f29
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_8027EF3C
	lfs      f0, lbl_8051B540@sda21(r2)
	fcmpo    cr0, f29, f0
	ble      lbl_8027EF38
	fmr      f29, f1
	b        lbl_8027EF3C

lbl_8027EF38:
	fneg     f29, f1

lbl_8027EF3C:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f29, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r30)
	lfs      f0, lbl_8051B544@sda21(r2)
	lfs      f1, 0x1fc(r30)
	stfs     f1, 0x1a8(r30)
	lfs      f1, 0x194(r30)
	lfs      f2, 0x18c(r30)
	fsubs    f1, f1, f30
	fsubs    f2, f2, f31
	fmuls    f1, f1, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8027EFA0
	lfs      f0, lbl_8051B540@sda21(r2)
	li       r3, 1
	stfs     f0, 0x1d4(r30)
	stfs     f0, 0x1d8(r30)
	stfs     f0, 0x1dc(r30)
	b        lbl_8027F090

lbl_8027EFA0:
	lfs      f0, lbl_8051B590@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8027F020
	mr       r3, r30
	lwz      r4, 0xc0(r30)
	lwz      r12, 0(r30)
	lfs      f28, 0x2e4(r4)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r30
	lfs      f2, 0x1d4(r30)
	lwz      r12, 0(r30)
	frsp     f27, f1
	lfs      f30, 0x1d8(r30)
	lfs      f0, 0x1dc(r30)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x20(r1)
	stfs     f30, 0x24(r1)
	stfs     f0, 0x28(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f28, f27
	li       r3, 1
	frsp     f1, f1
	stfs     f0, 0x1d4(r30)
	fmuls    f0, f28, f1
	stfs     f30, 0x1d8(r30)
	stfs     f0, 0x1dc(r30)
	b        lbl_8027F090

lbl_8027F020:
	mr       r3, r30
	lwz      r4, 0xc0(r30)
	lwz      r12, 0(r30)
	lfs      f28, 0x2e4(r4)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r30
	lfs      f2, 0x1d4(r30)
	lwz      r12, 0(r30)
	frsp     f27, f1
	lfs      f30, 0x1d8(r30)
	lfs      f0, 0x1dc(r30)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x14(r1)
	stfs     f30, 0x18(r1)
	stfs     f0, 0x1c(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f28, f27
	li       r3, 0
	frsp     f1, f1
	stfs     f0, 0x1d4(r30)
	fmuls    f0, f28, f1
	stfs     f30, 0x1d8(r30)
	stfs     f0, 0x1dc(r30)

lbl_8027F090:
	psq_l    f31, 184(r1), 0, qr0
	lfd      f31, 0xb0(r1)
	psq_l    f30, 168(r1), 0, qr0
	lfd      f30, 0xa0(r1)
	psq_l    f29, 152(r1), 0, qr0
	lfd      f29, 0x90(r1)
	psq_l    f28, 136(r1), 0, qr0
	lfd      f28, 0x80(r1)
	psq_l    f27, 120(r1), 0, qr0
	lfd      f27, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r0, 0xc4(r1)
	lwz      r30, 0x68(r1)
	mtlr     r0
	addi     r1, r1, 0xc0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027F0D0
 * Size:	00005C
 */
void Obj::breakTargetBridge()
{
	InteractBreakBridge interactBridge(this, C_PROPERPARMS.mBridgeDamage.mValue);
	mBridge->stimulate(interactBridge);
}

/*
 * --INFO--
 * Address:	8027F12C
 * Size:	0000B0
 */
void Obj::createEffect() { mEfxYoroiAttack = new efx::TYoroiAttack; }

/*
 * --INFO--
 * Address:	8027F1DC
 * Size:	000040
 */
void Obj::setupEffect() { mEfxYoroiAttack->mMtx = mModel->getJoint("kamujnt")->getWorldMatrix(); }

/*
 * --INFO--
 * Address:	8027F21C
 * Size:	000034
 */
void Obj::createAttackEffect() { mEfxYoroiAttack->create(nullptr); }

/*
 * --INFO--
 * Address:	8027F250
 * Size:	00008C
 */
void Obj::createAppearEffect()
{
	Matrixf* mat = mModel->getJoint("yoroimushi")->getWorldMatrix();

	efx::TYoroiAp appearFX(mat);
	appearFX.create(nullptr);
}

/*
 * --INFO--
 * Address:	8027F2DC
 * Size:	00008C
 */
void Obj::createDisAppearEffect()
{
	Matrixf* mat = mModel->getJoint("yoroimushi")->getWorldMatrix();

	efx::TYoroiHd disappearFX(mat);
	disappearFX.create(nullptr);
}

/*
 * --INFO--
 * Address:	8027F368
 * Size:	000090
 */
void Obj::createBridgeEffect()
{
	Matrixf* mat = mModel->getJoint("kamujnt")->getWorldMatrix();
	Vector3f pos = mat->getBasis(3);
	efx::Arg fxArg(pos);
	efx::TYoroiEat eatFX;

	eatFX.create(&fxArg);
}

/*
 * --INFO--
 * Address:	8027F3F8
 * Size:	000030
 */
void Obj::effectDrawOn() { mEfxYoroiAttack->endDemoDrawOn(); }

/*
 * --INFO--
 * Address:	8027F428
 * Size:	000030
 */
void Obj::effectDrawOff() { mEfxYoroiAttack->startDemoDrawOff(); }

} // namespace Armor
} // namespace Game
