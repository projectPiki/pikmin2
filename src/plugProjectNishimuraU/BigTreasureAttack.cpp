#include "Game/Entities/BigTreasure.h"
#include "Game/MapMgr.h"
#include "Game/EnemyFunc.h"
#include "Game/PikiMgr.h"
#include "Game/Navi.h"
#include "Dolphin/rand.h"
#include "PS.h"

#define FIRE_NAVI_FLICK_CHANCE  (0.33f)
#define GAS_NAVI_FLICK_CHANCE   (0.67f)
#define WATER_NAVI_FLICK_CHANCE (1.0f)
#define ELEC_NAVI_FLICK_CHANCE  (0.5f)

namespace Game {
namespace BigTreasure {

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
AttackShadowNode::AttackShadowNode(int mtxCount)
    : JointShadowNode(mtxCount)
{
	mPosition = nullptr;
	mAngle    = 0.0f;
}

/**
 * @note Address: 0x802F39A8
 * @note Size: 0x108
 */
void AttackShadowNode::makeShadowSRT()
{
	Vector3f matVecs[4];
	matVecs[0]   = Vector3f(mAngle, 0.0f, 0.0f);
	matVecs[1]   = Vector3f(0.0f, 15.0f, 0.0f);
	matVecs[2]   = Vector3f(0.0f, 0.0f, mAngle);
	matVecs[3]   = Vector3f(mPosition->x, mPosition->y, mPosition->z);
	matVecs[3].y = mapMgr->getMinY(matVecs[3]) + 2.5f;

	mMainMtx->setColumn(0, matVecs[0]);
	mMainMtx->setColumn(1, matVecs[1]);
	mMainMtx->setColumn(2, matVecs[2]);
	mMainMtx->setColumn(3, matVecs[3]);
}

/**
 * @note Address: N/A
 * @note Size: 0x7C
 */
BigTreasureFireAttack::BigTreasureFireAttack(Obj* obj, BigTreasureAttackParameter* data)
{
	mOwner      = obj;
	mAttackData = data;
	mEmitRatio  = 0.0f;
	mEmitDirection.setZero();
	mEmitPosition.setZero();
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
void BigTreasureFireAttack::init()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
void BigTreasureFireAttack::start(Vector3f& emitDirection, Vector3f& emitPosition)
{
	mEmitRatio     = 0.0f;
	mEmitDirection = emitDirection;
	mEmitPosition  = emitPosition;
	mEmitPosition.y += -25.0f;
}

/**
 * @note Address: 0x802F3AB0
 * @note Size: 0x374
 */
bool BigTreasureFireAttack::update()
{
	if (mEmitRatio < 1.0f) {
		mEmitRatio += 3.0f * sys->mDeltaTime;
		if (mEmitRatio > 1.0f) {
			mEmitRatio = 1.0f;
		}
	}

	f32 scale  = mEmitRatio * (mAttackData->mAttackScale * 200.0f);
	f32 yComp  = 40.0f * mAttackData->mAttackScale;
	f32 radius = SQUARE(25.0f * mAttackData->mAttackScale);

	Vector3f pos = mEmitDirection;
	pos *= scale;

	pos += mEmitPosition;

	Sys::Sphere sphere(pos, 25.0f);

	CellIteratorArg iterArg(sphere);
	iterArg.mOptimise = true;

	CellIterator iter(iterArg);

	CI_LOOP(iter)
	{
		Creature* creature = static_cast<Creature*>(*iter);
		if (creature->isAlive()) {
			Vector3f creaturePos = creature->getPosition();
			f32 yDiff            = absVal(pos.y - creaturePos.y);

			if (yDiff < yComp && sqrDistanceXZ(pos, creaturePos) < radius) {
				InteractFire fire(mOwner, CG_GENERALPARMS(mOwner).mAttackDamage.mValue);
				if (creature->isNavi()) {
					if (!creature->stimulate(fire)) {
						if (randWeightFloat(1.0f) < FIRE_NAVI_FLICK_CHANCE) {
							InteractFlick flick(mOwner, 0.0f, 0.0f, FLICK_BACKWARD_ANGLE);
							creature->stimulate(flick);
						} else {
							InteractAttack attack(mOwner, 0.0f, nullptr);
							creature->stimulate(attack);
						}
					}

				} else if (creature->isPiki()) {
					creature->stimulate(fire);
				}
			}
		}
	}

	// has the fire reached max extent?
	return !(mEmitRatio < 1.0f);
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void BigTreasureFireAttack::finish()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x7C
 */
BigTreasureGasAttack::BigTreasureGasAttack(Obj* obj, BigTreasureAttackParameter* data)
{
	mOwner      = obj;
	mAttackData = data;
	mEmitRatio  = 0.0f;
	mEmitDirection.setZero();
	mEmitPosition.setZero();
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
void BigTreasureGasAttack::init()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xCC
 */
void BigTreasureGasAttack::start(Vector3f& emitPosition, f32 emitAngle)
{
	mEmitRatio     = 0.0f;
	mEmitDirection = getDirection(emitAngle);
	mEmitPosition  = emitPosition;

	mEmitPosition.y += -15.0f;
}

/**
 * @note Address: 0x802F3E24
 * @note Size: 0x364
 */
bool BigTreasureGasAttack::update()
{
	if (mEmitRatio < 1.0f) {
		mEmitRatio += 0.27f * sys->mDeltaTime;
		if (mEmitRatio > 1.0f) {
			mEmitRatio = 1.0f;
		}
	}

	f32 gasDist = 10.0f;
	if (mEmitRatio > 0.5f) {
		gasDist = 15.0f;
	}

	gasDist *= gasDist;

	Vector3f gasPos = mEmitDirection;
	gasPos *= (480.0f * mEmitRatio);
	gasPos += mEmitPosition;

	Sys::Sphere searchSphere(gasPos, 15.0f);

	CellIteratorArg iterArg(searchSphere);
	iterArg.mOptimise = true;
	CellIterator iter(iterArg);
	CI_LOOP(iter)
	{
		Creature* creature = static_cast<Creature*>(*iter);
		if (creature->isAlive()) {
			Vector3f creaturePos = creature->getPosition();
			if (absVal(gasPos.y - creaturePos.y) < 30.0f && sqrDistanceXZ(gasPos, creaturePos) < gasDist) {
				InteractGas gas(mOwner, CG_GENERALPARMS(mOwner).mAttackDamage());
				if (creature->isNavi()) {
					if (creature->stimulate(gas)) {
						continue;
					}

					if (randWeightFloat(1.0f) < GAS_NAVI_FLICK_CHANCE) {
						InteractFlick flick(mOwner, 0.0f, 0.0f, FLICK_BACKWARD_ANGLE);
						creature->stimulate(flick);

					} else {
						InteractAttack attack(mOwner, 0.0f, nullptr);
						creature->stimulate(attack);
					}

				} else if (creature->isPiki()) {
					creature->stimulate(gas);
				}
			}
		}
	}

	// has gas reached max dist?
	return !(mEmitRatio < 1.0f);
}

/**
 * @note Address: N/A
 * @note Size: 0xB0
 */
BigTreasureWaterAttack::BigTreasureWaterAttack(Obj* obj, BigTreasureAttackParameter* data)
{
	mOwner      = obj;
	mAttackData = data;
	mVelocity.setZero();
	mPosition.setZero();
	mEfxWaterBomb = new efx::TOootaWbomb(&mPosition);
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
void BigTreasureWaterAttack::init()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
void BigTreasureWaterAttack::start(Vector3f& velocity, Vector3f& position)
{
	mVelocity = velocity;
	mPosition = position;
	mEfxWaterBomb->create(nullptr);
}

/**
 * @note Address: 0x802F4188
 * @note Size: 0x324
 */
bool BigTreasureWaterAttack::update()
{
	bool isHitGround = false;

	mPosition.x += mVelocity.x * sys->mDeltaTime;
	mPosition.y += mVelocity.y * sys->mDeltaTime;
	mPosition.z += mVelocity.z * sys->mDeltaTime;

	mVelocity.y -= 20.0f;

	f32 bubbleDist = 20.0f;

	f32 minY = mapMgr->getMinY(mPosition);
	if (mPosition.y < minY) {
		mPosition.y = minY;
		isHitGround = true;
		bubbleDist  = 30.0f;
	}

	bubbleDist *= bubbleDist;

	Sys::Sphere searchSphere(mPosition, 30.0f);
	CellIteratorArg iterArg(searchSphere);
	iterArg.mOptimise = true;
	CellIterator iter(iterArg);

	CI_LOOP(iter)
	{
		Creature* creature = static_cast<Creature*>(*iter);
		if (creature->isAlive()) {
			Vector3f creaturePos = creature->getPosition();
			if (mPosition.sqrDistance(creaturePos) < bubbleDist) {
				InteractBubble bubble(mOwner, 0.0f);
				if (creature->isNavi()) {
					if (creature->stimulate(bubble)) {
						continue;
					}

					if (randWeightFloat(1.0f) < WATER_NAVI_FLICK_CHANCE) {
						InteractFlick flick(mOwner, 0.0f, 0.0f, FLICK_BACKWARD_ANGLE);
						creature->stimulate(flick);
					} else {
						InteractAttack attack(mOwner, 0.0f, nullptr);
						creature->stimulate(attack);
					}

				} else if (creature->isPiki()) {
					creature->stimulate(bubble);
				}
			}
		}
	}

	return isHitGround;
}

/**
 * @note Address: N/A
 * @note Size: 0xD0
 */
void BigTreasureWaterAttack::finish()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x184
 */
BigTreasureElecAttack::BigTreasureElecAttack(Obj* obj, BigTreasureAttackParameter* data)
{
	mOwner         = obj;
	mAttackData    = data;
	mIsVisibleNode = true;
	mFloorTri      = nullptr;
	mVelocity.setZero();
	mPosition.setZero();
	mConnectedNode = nullptr;
	mEfxElec       = new efx::TOootaElec;
	mEfxElecParts  = new efx::TOootaElecparts(&mPosition);
	mEfxPhouden    = new efx::TOootaPhouden(&mPosition);
}

/**
 * @note Address: N/A
 * @note Size: 0x34
 */
void BigTreasureElecAttack::init()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x80
 */
void BigTreasureElecAttack::start(Vector3f& velocity, Vector3f& position, bool isVisibleNode)
{
	mFloorTri      = nullptr;
	mVelocity      = velocity;
	mPosition      = position;
	mIsVisibleNode = isVisibleNode;
	mConnectedNode = nullptr;
	if (mIsVisibleNode) {
		mEfxElecParts->create(nullptr);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x88
 */
void BigTreasureElecAttack::startInteract(BigTreasureElecAttack*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x802F4530
 * @note Size: 0x738
 */
bool BigTreasureElecAttack::update()
{
	if (mIsVisibleNode) {
		Vector3f pos = mPosition;
		pos.y += 20.0f;
		Sys::Sphere moveSphere(pos, 20.0f);
		MoveInfo info(&moveSphere, &mVelocity, mAttackData->mElecBounceFactor);
		info.mMovingCreature = mOwner;
		mapMgr->traceMove(info, sys->mDeltaTime);

		mPosition = moveSphere.mPosition;
		mPosition.y -= 20.0f;

		if (info.mFloorTriangle) {
			mVelocity.x *= mAttackData->mElecFrictionFactor;
			mVelocity.z *= mAttackData->mElecFrictionFactor;

			if (!mFloorTri) {
				PSStartSoundVec(PSSE_EN_BIGTAKARA_EP_BOUND, (Vec*)&mPosition);
			}

			mFloorTri = info.mFloorTriangle;
		} else {
			mFloorTri = nullptr;
		}

		mVelocity.y -= 20.0f;

	} else {
		mPosition = mOwner->mModel->getJoint("otakara_elec_eff")->getWorldMatrix()->getColumn(3);
	}

	if (mConnectedNode) {
		Vector3f partnerSep = mConnectedNode->mPosition - mPosition; // f30, f26, f31
		f32 dist            = partnerSep.normalise();                // f29

		Vector3f yAxis(0.0f, 1.0f, 0.0f);
		Vector3f crossVec1 = cross(partnerSep, yAxis); // f28, f25, f27
		crossVec1.normalise();

		Vector3f crossVec2 = cross(crossVec1, partnerSep); // f22, f23, f24
		crossVec2.normalise();

		f32 halfDist       = 0.5f * dist;
		Vector3f spherePos = partnerSep * halfDist;
		spherePos += mPosition;
		Sys::Sphere searchSphere(spherePos, 15.0f + halfDist);
		CellIteratorArg iterArg(searchSphere);
		iterArg.mOptimise = true;
		CellIterator iter(iterArg);
		CI_LOOP(iter)
		{
			Creature* creature = static_cast<Creature*>(*iter);
			if (creature->isAlive() && (creature->isNavi() || creature->isPiki())) {
				Vector3f creaturePos = creature->getPosition();

				Vector3f sep = creaturePos - mPosition;
				f32 dot1     = crossVec1.dot(sep);
				if (absVal(dot1) < 10.0f && absVal(crossVec2.dot(sep)) < 20.0f) {
					f32 dotSep = partnerSep.dot(sep);
					if (dotSep > 0.0f && dotSep < dist) {
						Vector3f zapDir(dot1 * crossVec1.x, 0.0f, dot1 * crossVec1.z);
						zapDir.normalise();
						zapDir.x *= 150.0f;
						zapDir.y = 150.0f;
						zapDir.z *= 150.0f;
						InteractDenki zap(mOwner, CG_GENERALPARMS(mOwner).mAttackDamage(), &zapDir);

						if (creature->isNavi()) {
							if (creature->stimulate(zap)) {
								continue;
							}

							if (randWeightFloat(1.0f) < ELEC_NAVI_FLICK_CHANCE) {
								InteractFlick flick(mOwner, 0.0f, 0.0f, FLICK_BACKWARD_ANGLE);
								creature->stimulate(flick);
							} else {
								InteractAttack attack(mOwner, 0.0f, nullptr);
								creature->stimulate(attack);
							}

						} else if (creature->isPiki()) {
							creature->stimulate(zap);
						}
					}
				}
			}
		}
	}

	return false;
	/*
	stwu     r1, -0x230(r1)
	mflr     r0
	stw      r0, 0x234(r1)
	stfd     f31, 0x220(r1)
	psq_st   f31, 552(r1), 0, qr0
	stfd     f30, 0x210(r1)
	psq_st   f30, 536(r1), 0, qr0
	stfd     f29, 0x200(r1)
	psq_st   f29, 520(r1), 0, qr0
	stfd     f28, 0x1f0(r1)
	psq_st   f28, 504(r1), 0, qr0
	stfd     f27, 0x1e0(r1)
	psq_st   f27, 488(r1), 0, qr0
	stfd     f26, 0x1d0(r1)
	psq_st   f26, 472(r1), 0, qr0
	stfd     f25, 0x1c0(r1)
	psq_st   f25, 456(r1), 0, qr0
	stfd     f24, 0x1b0(r1)
	psq_st   f24, 440(r1), 0, qr0
	stfd     f23, 0x1a0(r1)
	psq_st   f23, 424(r1), 0, qr0
	stfd     f22, 0x190(r1)
	psq_st   f22, 408(r1), 0, qr0
	stw      r31, 0x18c(r1)
	stw      r30, 0x188(r1)
	mr       r30, r3
	lbz      r0, 0x20(r3)
	cmplwi   r0, 0
	beq      lbl_802F4700
	lfs      f4, 0x38(r30)
	lis      r3, sincosTable___5JMath@ha
	lfs      f3, lbl_8051D25C@sda21(r2)
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f5, 0x3c(r30)
	addi     r8, r1, 0x34
	lfs      f0, 0x34(r30)
	fadds    f4, f4, f3
	lfs      f2, lbl_8051D200@sda21(r2)
	addi     r7, r30, 0x28
	stfs     f0, 0x34(r1)
	li       r6, 0
	lfs      f1, 0x800(r3)
	stfs     f4, 0x38(r1)
	li       r0, -1
	lfs      f0, lbl_8051D264@sda21(r2)
	addi     r4, r1, 0xd8
	stfs     f5, 0x3c(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f3, 0x40(r1)
	lwz      r5, sys@sda21(r13)
	lwz      r9, 0x1c(r30)
	lfs      f3, 0(r9)
	stw      r8, 0xd8(r1)
	stw      r7, 0xdc(r1)
	stfs     f3, 0xe0(r1)
	stfs     f2, 0xe4(r1)
	stw      r6, 0xe8(r1)
	stw      r6, 0x11c(r1)
	stb      r6, 0x14c(r1)
	stb      r6, 0xf1(r1)
	stb      r6, 0xf0(r1)
	stw      r6, 0x120(r1)
	stw      r6, 0xec(r1)
	stb      r6, 0x168(r1)
	stw      r6, 0x16c(r1)
	stfs     f1, 0x104(r1)
	stfs     f0, 0x108(r1)
	stw      r0, 0x170(r1)
	stw      r6, 0x124(r1)
	stb      r6, 0xf2(r1)
	lwz      r0, 0x18(r30)
	stw      r0, 0xec(r1)
	lwz      r12, 4(r3)
	lfs      f1, 0x54(r5)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x34(r1)
	lfs      f0, lbl_8051D25C@sda21(r2)
	stfs     f1, 0x34(r30)
	lfs      f1, 0x38(r1)
	stfs     f1, 0x38(r30)
	lfs      f1, 0x3c(r1)
	stfs     f1, 0x3c(r30)
	lfs      f1, 0x38(r30)
	fsubs    f0, f1, f0
	stfs     f0, 0x38(r30)
	lwz      r0, 0x11c(r1)
	cmplwi   r0, 0
	beq      lbl_802F46E4
	lwz      r3, 0x1c(r30)
	lfs      f1, 0x28(r30)
	lfs      f0, 4(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x28(r30)
	lwz      r3, 0x1c(r30)
	lfs      f1, 0x30(r30)
	lfs      f0, 4(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x30(r30)
	lwz      r0, 0x24(r30)
	cmplwi   r0, 0
	bne      lbl_802F46D8
	addi     r4, r30, 0x34
	li       r3, 0x595c
	bl       PSStartSoundVec__FUlP3Vec

lbl_802F46D8:
	lwz      r0, 0x11c(r1)
	stw      r0, 0x24(r30)
	b        lbl_802F46EC

lbl_802F46E4:
	li       r0, 0
	stw      r0, 0x24(r30)

lbl_802F46EC:
	lfs      f1, 0x2c(r30)
	lfs      f0, lbl_8051D25C@sda21(r2)
	fsubs    f0, f1, f0
	stfs     f0, 0x2c(r30)
	b        lbl_802F4730

lbl_802F4700:
	lwz      r5, 0x18(r30)
	lis      r3, lbl_8048D1F0@ha
	addi     r4, r3, lbl_8048D1F0@l
	lwz      r3, 0x174(r5)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	stfs     f0, 0x34(r30)
	stfs     f1, 0x38(r30)
	stfs     f2, 0x3c(r30)

lbl_802F4730:
	lwz      r3, 0x40(r30)
	cmplwi   r3, 0
	beq      lbl_802F4BFC
	lfs      f0, 0x38(r3)
	lfs      f1, 0x38(r30)
	lfs      f4, 0x3c(r3)
	fsubs    f26, f0, f1
	lfs      f2, 0x3c(r30)
	lfs      f3, 0x34(r3)
	fsubs    f31, f4, f2
	lfs      f0, 0x34(r30)
	fmuls    f4, f26, f26
	fsubs    f30, f3, f0
	lfs      f3, lbl_8051D200@sda21(r2)
	fmuls    f5, f31, f31
	fmadds   f4, f30, f30, f4
	fadds    f29, f5, f4
	fcmpo    cr0, f29, f3
	ble      lbl_802F478C
	ble      lbl_802F4790
	frsqrte  f3, f29
	fmuls    f29, f3, f29
	b        lbl_802F4790

lbl_802F478C:
	fmr      f29, f3

lbl_802F4790:
	lfs      f3, lbl_8051D200@sda21(r2)
	fcmpo    cr0, f29, f3
	ble      lbl_802F47B4
	lfs      f3, lbl_8051D210@sda21(r2)
	fdivs    f3, f3, f29
	fmuls    f30, f30, f3
	fmuls    f26, f26, f3
	fmuls    f31, f31, f3
	b        lbl_802F47B8

lbl_802F47B4:
	fmr      f29, f3

lbl_802F47B8:
	lfs      f4, lbl_8051D200@sda21(r2)
	lfs      f5, lbl_8051D210@sda21(r2)
	fmuls    f3, f30, f4
	fmuls    f6, f26, f4
	fmsubs   f25, f31, f4, f3
	fmsubs   f27, f30, f5, f6
	fnmsubs  f28, f31, f5, f6
	fmuls    f3, f25, f25
	fmuls    f5, f27, f27
	fmadds   f3, f28, f28, f3
	fadds    f5, f5, f3
	fcmpo    cr0, f5, f4
	ble      lbl_802F47FC
	ble      lbl_802F4800
	frsqrte  f3, f5
	fmuls    f5, f3, f5
	b        lbl_802F4800

lbl_802F47FC:
	fmr      f5, f4

lbl_802F4800:
	lfs      f3, lbl_8051D200@sda21(r2)
	fcmpo    cr0, f5, f3
	ble      lbl_802F4820
	lfs      f3, lbl_8051D210@sda21(r2)
	fdivs    f3, f3, f5
	fmuls    f28, f28, f3
	fmuls    f25, f25, f3
	fmuls    f27, f27, f3

lbl_802F4820:
	fmuls    f5, f28, f31
	lfs      f3, lbl_8051D200@sda21(r2)
	fmuls    f6, f25, f30
	fmuls    f4, f27, f26
	fmsubs   f23, f27, f30, f5
	fmsubs   f24, f28, f26, f6
	fmsubs   f22, f25, f31, f4
	fmuls    f4, f23, f23
	fmuls    f5, f24, f24
	fmadds   f4, f22, f22, f4
	fadds    f4, f5, f4
	fcmpo    cr0, f4, f3
	ble      lbl_802F4864
	ble      lbl_802F4868
	frsqrte  f3, f4
	fmuls    f4, f3, f4
	b        lbl_802F4868

lbl_802F4864:
	fmr      f4, f3

lbl_802F4868:
	lfs      f3, lbl_8051D200@sda21(r2)
	fcmpo    cr0, f4, f3
	ble      lbl_802F4888
	lfs      f3, lbl_8051D210@sda21(r2)
	fdivs    f3, f3, f4
	fmuls    f22, f22, f3
	fmuls    f23, f23, f3
	fmuls    f24, f24, f3

lbl_802F4888:
	lfs      f4, lbl_8051D24C@sda21(r2)
	addi     r3, r1, 0x70
	lfs      f3, lbl_8051D204@sda21(r2)
	addi     r4, r1, 0x24
	fmuls    f7, f4, f29
	fmuls    f4, f30, f7
	fmuls    f5, f26, f7
	fmuls    f6, f31, f7
	fadds    f4, f4, f0
	fadds    f5, f5, f1
	fadds    f6, f6, f2
	fadds    f0, f3, f7
	stfs     f4, 0x24(r1)
	stfs     f5, 0x28(r1)
	stfs     f6, 0x2c(r1)
	stfs     f0, 0x30(r1)
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	li       r0, 1
	addi     r3, r1, 0x90
	stb      r0, 0x8c(r1)
	addi     r4, r1, 0x70
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0x90
	bl       first__Q24Game12CellIteratorFv
	b        lbl_802F4BEC

lbl_802F48EC:
	addi     r3, r1, 0x90
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F4BE4
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802F4948
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F4BE4

lbl_802F4948:
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0xc(r1)
	lfs      f0, 0x38(r30)
	lfs      f1, 8(r1)
	fsubs    f4, f2, f0
	lfs      f0, 0x34(r30)
	lfs      f2, 0x10(r1)
	fsubs    f3, f1, f0
	lfs      f0, 0x3c(r30)
	fmuls    f1, f25, f4
	fsubs    f2, f2, f0
	lfs      f0, lbl_8051D200@sda21(r2)
	fmadds   f1, f28, f3, f1
	fmadds   f5, f27, f2, f1
	fcmpo    cr0, f5, f0
	ble      lbl_802F49A4
	fmr      f1, f5
	b        lbl_802F49A8

lbl_802F49A4:
	fneg     f1, f5

lbl_802F49A8:
	lfs      f0, lbl_8051D248@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802F4BE4
	fmuls    f1, f23, f4
	lfs      f0, lbl_8051D200@sda21(r2)
	fmadds   f1, f22, f3, f1
	fmadds   f1, f24, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802F49D0
	b        lbl_802F49D4

lbl_802F49D0:
	fneg     f1, f1

lbl_802F49D4:
	lfs      f0, lbl_8051D25C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802F4BE4
	fmuls    f0, f26, f4
	lfs      f1, lbl_8051D200@sda21(r2)
	fmadds   f0, f30, f3, f0
	fmadds   f0, f31, f2, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802F4BE4
	fcmpo    cr0, f0, f29
	bge      lbl_802F4BE4
	fmuls    f4, f5, f27
	fmuls    f3, f5, f28
	fmuls    f2, f4, f4
	fmadds   f0, f3, f3, f1
	fadds    f2, f2, f0
	fcmpo    cr0, f2, f1
	ble      lbl_802F4A2C
	ble      lbl_802F4A30
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_802F4A30

lbl_802F4A2C:
	fmr      f2, f1

lbl_802F4A30:
	lfs      f0, lbl_8051D200@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_802F4A4C
	lfs      f0, lbl_8051D210@sda21(r2)
	fdivs    f0, f0, f2
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0

lbl_802F4A4C:
	lwz      r7, 0x18(r30)
	lis      r5, __vt__Q24Game11Interaction@ha
	lfs      f0, lbl_8051D268@sda21(r2)
	lis      r4, __vt__Q24Game12InteractWind@ha
	lwz      r6, 0xc0(r7)
	lis      r3, __vt__Q24Game13InteractDenki@ha
	addi     r5, r5, __vt__Q24Game11Interaction@l
	fmuls    f3, f3, f0
	lfs      f1, 0x604(r6)
	fmuls    f4, f4, f0
	addi     r4, r4, __vt__Q24Game12InteractWind@l
	addi     r0, r3, __vt__Q24Game13InteractDenki@l
	stw      r5, 0x58(r1)
	mr       r3, r31
	stw      r4, 0x58(r1)
	stw      r7, 0x5c(r1)
	stfs     f1, 0x60(r1)
	stfs     f3, 0x64(r1)
	stfs     f0, 0x68(r1)
	stfs     f4, 0x6c(r1)
	stw      r0, 0x58(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F4BB0
	mr       r3, r31
	addi     r4, r1, 0x58
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802F4BE4
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x17c(r1)
	lfd      f3, lbl_8051D230@sda21(r2)
	stw      r0, 0x178(r1)
	lfs      f2, lbl_8051D210@sda21(r2)
	lfd      f0, 0x178(r1)
	lfs      f1, lbl_8051D224@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051D24C@sda21(r2)
	fmuls    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802F4B64
	lwz      r5, 0x18(r30)
	lis      r3, __vt__Q24Game11Interaction@ha
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lfs      f1, lbl_8051D200@sda21(r2)
	lfs      f0, lbl_8051D22C@sda21(r2)
	lis      r3, __vt__Q24Game13InteractFlick@ha
	stw      r0, 0x44(r1)
	addi     r0, r3, __vt__Q24Game13InteractFlick@l
	mr       r3, r31
	addi     r4, r1, 0x44
	stw      r5, 0x48(r1)
	stw      r0, 0x44(r1)
	stfs     f1, 0x4c(r1)
	stfs     f1, 0x50(r1)
	stfs     f0, 0x54(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	b        lbl_802F4BE4

lbl_802F4B64:
	lwz      r4, 0x18(r30)
	lis      r3, __vt__Q24Game11Interaction@ha
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lfs      f0, lbl_8051D200@sda21(r2)
	lis      r3, __vt__Q24Game14InteractAttack@ha
	stw      r0, 0x14(r1)
	addi     r5, r3, __vt__Q24Game14InteractAttack@l
	li       r0, 0
	stw      r4, 0x18(r1)
	mr       r3, r31
	addi     r4, r1, 0x14
	stw      r5, 0x14(r1)
	stfs     f0, 0x1c(r1)
	stw      r0, 0x20(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	b        lbl_802F4BE4

lbl_802F4BB0:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F4BE4
	mr       r3, r31
	addi     r4, r1, 0x58
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_802F4BE4:
	addi     r3, r1, 0x90
	bl       next__Q24Game12CellIteratorFv

lbl_802F4BEC:
	addi     r3, r1, 0x90
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F48EC

lbl_802F4BFC:
	li       r3, 0
	psq_l    f31, 552(r1), 0, qr0
	lfd      f31, 0x220(r1)
	psq_l    f30, 536(r1), 0, qr0
	lfd      f30, 0x210(r1)
	psq_l    f29, 520(r1), 0, qr0
	lfd      f29, 0x200(r1)
	psq_l    f28, 504(r1), 0, qr0
	lfd      f28, 0x1f0(r1)
	psq_l    f27, 488(r1), 0, qr0
	lfd      f27, 0x1e0(r1)
	psq_l    f26, 472(r1), 0, qr0
	lfd      f26, 0x1d0(r1)
	psq_l    f25, 456(r1), 0, qr0
	lfd      f25, 0x1c0(r1)
	psq_l    f24, 440(r1), 0, qr0
	lfd      f24, 0x1b0(r1)
	psq_l    f23, 424(r1), 0, qr0
	lfd      f23, 0x1a0(r1)
	psq_l    f22, 408(r1), 0, qr0
	lfd      f22, 0x190(r1)
	lwz      r31, 0x18c(r1)
	lwz      r0, 0x234(r1)
	lwz      r30, 0x188(r1)
	mtlr     r0
	addi     r1, r1, 0x230
	blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0xE8
 */
void BigTreasureElecAttack::finish()
{
	mConnectedNode = nullptr;
	mEfxElecParts->fade();
	mEfxElec->fade();
	mEfxPhouden->fade();

	if (mIsVisibleNode) {
		efx::Arg fxArg(mPosition);
		efx::TOootaPdead deadFX;
		deadFX.create(&fxArg);
	}

	PSStartSoundVec(PSSE_EN_BIGTAKARA_EP_BREAK, (Vec*)&mPosition);
}

/**
 * @note Address: 0x802F4C68
 * @note Size: 0x7B4
 */
BigTreasureAttackMgr::BigTreasureAttackMgr(Obj* obj)
{
	for (int i = 0; i < BIGATTACK_Count; i++) {
		mIsStartAttack[i] = false;
	}

	mObj = obj;
	for (int i = 0; i < 4; i++) {
		mGasAttackAngles[i] = 0.0f;
	}

	mAttackData      = new BigTreasureAttackData;
	mActiveFireList  = new CNode;
	mFireAttackNodes = new CNode;

	for (int i = 0; i < 8; i++) {
		mFireAttackNodes->add(new BigTreasureFireAttack(mObj, (BigTreasureAttackParameter*)mAttackData));
	}

	mActiveGasList  = new CNode;
	mGasAttackNodes = new CNode;
	for (int i = 0; i < 200; i++) {
		mGasAttackNodes->add(new BigTreasureGasAttack(mObj, (BigTreasureAttackParameter*)mAttackData));
	}

	mActiveWaterList  = new CNode;
	mWaterAttackNodes = new CNode;
	for (int i = 0; i < 16; i++) {
		mWaterAttackNodes->add(new BigTreasureWaterAttack(mObj, (BigTreasureAttackParameter*)mAttackData));
	}

	mActiveElecList  = new CNode;
	mElecAttackNodes = new CNode;
	for (int i = 0; i < 17; i++) {
		mElecAttackNodes->add(new BigTreasureElecAttack(mObj, (BigTreasureAttackParameter*)mAttackData));
	}

	mEfxFire = new efx::TOootaFire;

	for (int i = 0; i < 4; i++) {
		mEfxGas[i] = new efx::TOootaGas(&mGasEmitPosition, &mGasAttackAngles[i]);
		for (int j = 0; j < 3; j++) {
			mEfxElecLeg[i][j] = new efx::TOootaElecLeg;
		}
	}

	mEfxElecAttack1    = new efx::TOootaElecAttack1;
	mEfxElecAttack2    = new efx::TOootaElecAttack2;
	mShadowRootNode    = new JointShadowRootNode(mObj);
	mAttackShadowNodes = new AttackShadowNode*[16];

	for (int i = 0; i < 16; i++) {
		mAttackShadowNodes[i] = new AttackShadowNode(2);
	}
}

/**
 * @note Address: 0x802F541C
 * @note Size: 0x1C8
 */
void BigTreasureAttackMgr::init()
{
	for (int i = 0; i < BIGATTACK_Count; i++) {
		mIsStartAttack[i] = false;
	}

	mAttackTimer1 = 0.0f;
	mAttackTimer2 = 0.0f;

	for (int i = 0; i < 4; i++) {
		mGasAttackAngles[i] = 0.0f;
	}

	FOREACH_NODE(BigTreasureFireAttack, mFireAttackNodes->mChild, fireNode)
	{
		fireNode->mEmitRatio = 0.0f;
		fireNode->mEmitDirection.setZero();
		fireNode->mEmitPosition.setZero();
	}

	FOREACH_NODE(BigTreasureGasAttack, mGasAttackNodes->mChild, gasNode)
	{
		gasNode->mEmitRatio = 0.0f;
		gasNode->mEmitDirection.setZero();
		gasNode->mEmitPosition.setZero();
	}

	FOREACH_NODE(BigTreasureWaterAttack, mWaterAttackNodes->mChild, waterNode)
	{
		waterNode->mVelocity.setZero();
		waterNode->mPosition.setZero();
	}

	FOREACH_NODE(BigTreasureElecAttack, mElecAttackNodes->mChild, elecNode)
	{
		elecNode->mIsVisibleNode = true;
		elecNode->mFloorTri      = nullptr;
		elecNode->mVelocity.setZero();
		elecNode->mPosition.setZero();
		elecNode->mConnectedNode = nullptr;
	}

	Matrixf* fireMat = mObj->mModel->getJoint("otakara_fire_eff")->getWorldMatrix();
	mEfxFire->setMtxptr(fireMat->mMatrix.mtxView);

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			mEfxElecLeg[i][j]->setPosPtrs(mObj->getJointPositionPtr(i, j), mObj->getJointPositionPtr(i, j + 1));
		}
	}
}

/**
 * @note Address: 0x802F55E4
 * @note Size: 0xE8
 */
void BigTreasureAttackMgr::update()
{
	updateFireAttack();
	updateGasAttack();
	updateWaterAttack();
	updateElecAttack();
	updateAttackShadow();

	bool isAttacking = false;
	for (int i = 0; i < BIGATTACK_Count; i++) {
		if (mIsStartAttack[i]) {
			isAttacking = true;
			if (mObj->isEvent(0, EB_Bittered) && !mObj->isCapturedTreasure(i)) {
				finishAttack();
			}
		}
	}

	if (isAttacking) {
		mAttackTimer1 += sys->mDeltaTime;
		mAttackTimer2 += sys->mDeltaTime;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x8C
 */
void BigTreasureAttackMgr::setFireAttackParameter()
{
	switch (-(mObj->isNormalAttack(BIGATTACK_Fire) != 0) + 2) {
	case 1:
		mAttackData->mAttackScale = CG_PROPERPARMS(mObj).mFlameScale1.mValue;
		break;
	case 2:
		mAttackData->mAttackScale = CG_PROPERPARMS(mObj).mFlameScale2.mValue;
		break;
	}
}

/**
 * @note Address: 0x802F56CC
 * @note Size: 0x130
 */
void BigTreasureAttackMgr::startFireAttack()
{
	if (!mIsStartAttack[BIGATTACK_Fire]) {
		mIsStartAttack[BIGATTACK_Fire] = true;
		mAttackTimer1                  = 0.0f;
		mAttackTimer2                  = 0.0f;
		setFireAttackParameter();

		updateFireEmitPosition();
		startNewFireList();
		efx::ArgScale fxArg(Vector3f::zero, mAttackData->mAttackScale);
		mEfxFire->create(&fxArg);
	}
}

/**
 * @note Address: 0x802F57FC
 * @note Size: 0x9C
 */
void BigTreasureAttackMgr::startNewFireList()
{
	if (mFireAttackNodes->mChild) {
		BigTreasureFireAttack* fireNode = static_cast<BigTreasureFireAttack*>(mFireAttackNodes->mChild);
		fireNode->del();
		fireNode->start(mFireEmitDirection, mFireNodePosition[BIGFIRE_Root]);
		mActiveFireList->add(fireNode);
	}
}

/**
 * @note Address: 0x802F5898
 * @note Size: 0x18C
 */
void BigTreasureAttackMgr::updateFireAttack()
{
	bool canDoFireBodySound          = true; // only do sound for main body of fire for one node
	BigTreasureFireAttack* childNode = static_cast<BigTreasureFireAttack*>(mActiveFireList->mChild);
	while (childNode) {
		BigTreasureFireAttack* nextNode = childNode->getNext();
		if (childNode->update()) {
			childNode->del();
			mFireAttackNodes->add(childNode);
		}

		if (childNode == mActiveFireList->mChild) {
			updateFireSePosition(childNode, BIGFIRE_Tail);
			PSStartSoundVec(PSSE_EN_BIGTAKARA_FIRE_TAIL, (Vec*)&mFireNodePosition[BIGFIRE_Tail]);
		}

		if (canDoFireBodySound && childNode->mEmitRatio < 0.55f) {
			canDoFireBodySound = false;
			updateFireSePosition(childNode, BIGFIRE_Body);
			PSStartSoundVec(PSSE_EN_BIGTAKARA_FIRE_BODY, (Vec*)&mFireNodePosition[BIGFIRE_Body]);
		}
		childNode = nextNode;
	}

	if (mIsStartAttack[BIGATTACK_Fire]) {
		updateFireEmitPosition();
		if (mAttackTimer1 > 0.1f) {
			mAttackTimer1 = 0.0f;
			startNewFireList();
		}
		PSStartSoundVec(PSSE_EN_BIGTAKARA_FIRE_ROOT, (Vec*)&mFireNodePosition[BIGFIRE_Root]);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
void BigTreasureAttackMgr::finishFireAttack() { mEfxFire->fade(); }

/**
 * @note Address: 0x802F5A24
 * @note Size: 0x70
 */
void BigTreasureAttackMgr::updateFireEmitPosition()
{
	Matrixf* mat = mObj->mModel->getJoint("otakara_fire_eff")->getWorldMatrix();
	mat->getColumn(0, mFireEmitDirection);
	mat->getColumn(3, mFireNodePosition[BIGFIRE_Root]);
}

/**
 * @note Address: 0x802F5A94
 * @note Size: 0xA0
 */
void BigTreasureAttackMgr::updateFireSePosition(BigTreasureFireAttack* attackNode, int nodeType)
{
	f32 nodeDist;
	f32 scale  = mAttackData->mAttackScale;
	f32 extent = attackNode->mEmitRatio;

	mFireNodePosition[nodeType] = attackNode->mEmitDirection;

	nodeDist = 200.0f;
	nodeDist *= scale;
	nodeDist = extent * nodeDist;

	mFireNodePosition[nodeType] *= nodeDist;
	mFireNodePosition[nodeType] += attackNode->mEmitPosition;
	mFireNodePosition[nodeType].y -= -25.0f;
}

/**
 * @note Address: N/A
 * @note Size: 0x1A4
 */
void BigTreasureAttackMgr::setGasAttackParameter()
{
	int attackType;
	if (mObj->isNormalAttack(BIGATTACK_Gas)) {
		attackType = 1;
	} else if (randWeightFloat(1.0f) < 0.5f) {
		attackType = 2;
	} else {
		attackType = 3;
	}

	switch (attackType) {
	case 1:
		mAttackData->mGasArmNum        = 3;
		mAttackData->mGasRotationSpeed = CG_PROPERPARMS(mObj).mRotationSpeed1();
		mAttackData->mGasReversalTime  = 30.0f;
		break;
	case 2:
		mAttackData->mGasArmNum        = 4;
		mAttackData->mGasRotationSpeed = CG_PROPERPARMS(mObj).mRotationSpeed2();
		mAttackData->mGasReversalTime  = CG_PROPERPARMS(mObj).mReversalTime2_1();
		break;
	case 3:
		mAttackData->mGasArmNum        = 4;
		mAttackData->mGasRotationSpeed = CG_PROPERPARMS(mObj).mRotationSpeed2();
		mAttackData->mGasReversalTime  = CG_PROPERPARMS(mObj).mReversalTime2_2();
		break;
	}

	// 50/50 chance to start rotating clockwise or anticlockwise
	if (randWeightFloat(1.0f) < 0.5f) {
		mAttackData->mIsGasRotClockwise = true;
	} else {
		mAttackData->mIsGasRotClockwise = false;
	}
}

/**
 * @note Address: 0x802F5B34
 * @note Size: 0x2C4
 */
void BigTreasureAttackMgr::startGasAttack()
{
	if (!mIsStartAttack[BIGATTACK_Gas]) {
		mIsStartAttack[BIGATTACK_Gas] = true;
		mAttackTimer1                 = 0.0f;
		mAttackTimer2                 = 0.0f;

		setGasAttackParameter();

		updateGasEmitPosition();

		f32 startAngle = randWeightFloat(TAU);
		f32 armSpacing = TAU / (f32)mAttackData->mGasArmNum;

		for (int i = 0; i < mAttackData->mGasArmNum; i++) {
			mGasAttackAngles[i] = startAngle + armSpacing * (f32)i;
			mEfxGas[i]->create(nullptr);
		}

		startNewGasList();
	}
}

/**
 * @note Address: 0x802F5DF8
 * @note Size: 0x14C
 */
void BigTreasureAttackMgr::startNewGasList()
{
	for (int i = 0; i < mAttackData->mGasArmNum; i++) {
		if (mGasAttackNodes->mChild) {
			BigTreasureGasAttack* nextAvailNode = static_cast<BigTreasureGasAttack*>(mGasAttackNodes->mChild);
			nextAvailNode->del();
			nextAvailNode->start(mGasEmitPosition, mGasAttackAngles[i]);
			mActiveGasList->add(nextAvailNode);
		}
	}
}

/**
 * @note Address: 0x802F5F44
 * @note Size: 0x344
 */
void BigTreasureAttackMgr::updateGasAttack()
{
	bool checks[]                 = { true, true, true, true };
	BigTreasureGasAttack* gasNode = static_cast<BigTreasureGasAttack*>(mActiveGasList->mChild);

	for (int i = 0; gasNode; i++) {
		BigTreasureGasAttack* nextNode = static_cast<BigTreasureGasAttack*>(gasNode->mNext);

		if (gasNode->update()) {
			gasNode->del();
			mGasAttackNodes->add(gasNode);
		}

		int idx = i % mAttackData->mGasArmNum;
		if (checks[idx] && gasNode->mEmitRatio < 0.5f) {
			checks[idx] = false;
			updateGasSePosition(gasNode, idx);

			if (idx == 0) {
				PSStartSoundVec(PSSE_EN_BIGTAKARA_G_SPRAY1, (Vec*)&(mGasSePosition[idx]));

			} else if (idx == 1) {
				PSStartSoundVec(PSSE_EN_BIGTAKARA_G_SPRAY2, (Vec*)&(mGasSePosition[idx]));

			} else if (idx == 2) {
				PSStartSoundVec(PSSE_EN_BIGTAKARA_G_SPRAY3, (Vec*)&(mGasSePosition[idx]));

			} else if (idx == 3) {
				PSStartSoundVec(PSSE_EN_BIGTAKARA_G_SPRAY4, (Vec*)&(mGasSePosition[idx]));
			}
		}

		gasNode = nextNode;
	}

	if (!mIsStartAttack[BIGATTACK_Gas]) {
		return;
	}

	updateGasEmitPosition();

	for (int i = 0; i < mAttackData->mGasArmNum; i++) {
		if (mObj->isEvent(0, EB_Bittered)) {
			continue;
		}

		if (mAttackData->mIsGasRotClockwise) {
			mGasAttackAngles[i] += mAttackData->mGasRotationSpeed;

			if (mGasAttackAngles[i] > TAU) {
				mGasAttackAngles[i] -= TAU;
			}
		} else {
			mGasAttackAngles[i] -= mAttackData->mGasRotationSpeed;
			if (mGasAttackAngles[i] < 0.0f) {
				mGasAttackAngles[i] += TAU;
			}
		}
	}

	if (mAttackTimer1 > 0.1f) {
		mAttackTimer1 = 0.0f;
		startNewGasList();
	}

	if (mAttackTimer2 > mAttackData->mGasReversalTime) {
		mAttackData->mIsGasRotClockwise ^= 1; // swap direction
		mAttackTimer2 = 0.0f;
	}

	PSStartSoundVec(PSSE_EN_BIGTAKARA_G_SPOUT, (Vec*)&mGasEmitPosition);
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r26, 0x28(r1)
	mr       r31, r3
	addi     r29, r1, 8
	li       r30, 0
	lwz      r0, lbl_8051D29C@sda21(r2)
	lwz      r3, 0x4c(r3)
	stw      r0, 8(r1)
	lwz      r27, 0x10(r3)
	b        lbl_802F6068

lbl_802F5F74:
	lwz      r28, 4(r27)
	mr       r3, r27
	bl       update__Q34Game11BigTreasure20BigTreasureGasAttackFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F5F9C
	mr       r3, r27
	bl       del__5CNodeFv
	lwz      r3, 0x50(r31)
	mr       r4, r27
	bl       add__5CNodeFP5CNode

lbl_802F5F9C:
	lwz      r3, 0x11c(r31)
	lwz      r3, 0x30(r3)
	divw     r0, r30, r3
	mullw    r0, r0, r3
	subf     r26, r0, r30
	lbzx     r0, r29, r26
	cmplwi   r0, 0
	beq      lbl_802F6060
	lfs      f1, 0x20(r27)
	lfs      f0, lbl_8051D24C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802F6060
	li       r0, 0
	mr       r3, r31
	stbx     r0, r29, r26
	mr       r4, r27
	mr       r5, r26
	bl
updateGasSePosition__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure20BigTreasureGasAttacki
	cmpwi    r26, 0
	bne      lbl_802F6004
	mulli    r4, r26, 0xc
	li       r3, 0x5156
	addi     r4, r4, 0x70
	add      r4, r31, r4
	bl       PSStartSoundVec__FUlP3Vec
	b        lbl_802F6060

lbl_802F6004:
	cmpwi    r26, 1
	bne      lbl_802F6024
	mulli    r4, r26, 0xc
	li       r3, 0x5157
	addi     r4, r4, 0x70
	add      r4, r31, r4
	bl       PSStartSoundVec__FUlP3Vec
	b        lbl_802F6060

lbl_802F6024:
	cmpwi    r26, 2
	bne      lbl_802F6044
	mulli    r4, r26, 0xc
	li       r3, 0x5158
	addi     r4, r4, 0x70
	add      r4, r31, r4
	bl       PSStartSoundVec__FUlP3Vec
	b        lbl_802F6060

lbl_802F6044:
	cmpwi    r26, 3
	bne      lbl_802F6060
	mulli    r4, r26, 0xc
	li       r3, 0x5159
	addi     r4, r4, 0x70
	add      r4, r31, r4
	bl       PSStartSoundVec__FUlP3Vec

lbl_802F6060:
	mr       r27, r28
	addi     r30, r30, 1

lbl_802F6068:
	cmplwi   r27, 0
	bne      lbl_802F5F74
	lbz      r0, 2(r31)
	cmplwi   r0, 0
	beq      lbl_802F6274
	mr       r3, r31
	bl       updateGasEmitPosition__Q34Game11BigTreasure20BigTreasureAttackMgrFv
	mr       r4, r31
	li       r6, 0
	b        lbl_802F610C

lbl_802F6090:
	lwz      r3, 4(r31)
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_802F6104
	lbz      r0, 0x2c(r5)
	cmplwi   r0, 0
	beq      lbl_802F60D8
	lfs      f2, 0x54(r4)
	lfs      f1, 0x34(r5)
	lfs      f0, lbl_8051D298@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x54(r4)
	lfs      f1, 0x54(r4)
	fcmpo    cr0, f1, f0
	ble      lbl_802F6104
	fsubs    f0, f1, f0
	stfs     f0, 0x54(r4)
	b        lbl_802F6104

lbl_802F60D8:
	lfs      f2, 0x54(r4)
	lfs      f1, 0x34(r5)
	lfs      f0, lbl_8051D200@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x54(r4)
	lfs      f1, 0x54(r4)
	fcmpo    cr0, f1, f0
	bge      lbl_802F6104
	lfs      f0, lbl_8051D298@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, 0x54(r4)

lbl_802F6104:
	addi     r4, r4, 4
	addi     r6, r6, 1

lbl_802F610C:
	lwz      r5, 0x11c(r31)
	lwz      r0, 0x30(r5)
	cmpw     r6, r0
	blt      lbl_802F6090
	lfs      f1, 8(r31)
	lfs      f0, lbl_8051D284@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802F6240
	lfs      f0, lbl_8051D200@sda21(r2)
	mr       r29, r31
	li       r30, 0
	stfs     f0, 8(r31)
	b        lbl_802F6230

lbl_802F6140:
	lwz      r3, 0x50(r31)
	lwz      r28, 0x10(r3)
	cmplwi   r28, 0
	beq      lbl_802F6228
	mr       r3, r28
	bl       del__5CNodeFv
	lfs      f3, 0x54(r29)
	lfs      f0, lbl_8051D200@sda21(r2)
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	stfs     f0, 0x20(r28)
	bge      lbl_802F6174
	fneg     f1, f3

lbl_802F6174:
	lfs      f2, lbl_8051D238@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051D200@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f4, 4(r3)
	bge      lbl_802F61CC
	lfs      f0, lbl_8051D23C@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_802F61E4

lbl_802F61CC:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_802F61E4:
	stfs     f0, 0x24(r28)
	mr       r4, r28
	lfs      f1, lbl_8051D200@sda21(r2)
	lfs      f0, lbl_8051D240@sda21(r2)
	stfs     f1, 0x28(r28)
	stfs     f4, 0x2c(r28)
	lfs      f1, 0x64(r31)
	stfs     f1, 0x30(r28)
	lfs      f1, 0x68(r31)
	stfs     f1, 0x34(r28)
	lfs      f1, 0x6c(r31)
	stfs     f1, 0x38(r28)
	lfs      f1, 0x34(r28)
	fadds    f0, f1, f0
	stfs     f0, 0x34(r28)
	lwz      r3, 0x4c(r31)
	bl       add__5CNodeFP5CNode

lbl_802F6228:
	addi     r29, r29, 4
	addi     r30, r30, 1

lbl_802F6230:
	lwz      r3, 0x11c(r31)
	lwz      r0, 0x30(r3)
	cmpw     r30, r0
	blt      lbl_802F6140

lbl_802F6240:
	lwz      r3, 0x11c(r31)
	lfs      f1, 0xc(r31)
	lfs      f0, 0x38(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_802F6268
	lbz      r0, 0x2c(r3)
	lfs      f0, lbl_8051D200@sda21(r2)
	xori     r0, r0, 1
	stb      r0, 0x2c(r3)
	stfs     f0, 0xc(r31)

lbl_802F6268:
	addi     r4, r31, 0x64
	li       r3, 0x5155
	bl       PSStartSoundVec__FUlP3Vec

lbl_802F6274:
	lmw      r26, 0x28(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x58
 */
void BigTreasureAttackMgr::finishGasAttack()
{
	for (int i = 0; i < 4; i++) {
		mEfxGas[i]->fade();
	}
}

/**
 * @note Address: 0x802F6288
 * @note Size: 0x58
 */
void BigTreasureAttackMgr::updateGasEmitPosition()
{
	mGasEmitPosition = mObj->mModel->getJoint("otakara_gas_eff")->getWorldMatrix()->getColumn(3);
}

/**
 * @note Address: 0x802F62E0
 * @note Size: 0xA0
 */
void BigTreasureAttackMgr::updateGasSePosition(BigTreasureGasAttack* gasAttack, int gasID)
{
	f32 factor            = gasAttack->mEmitRatio * (480.0f * mAttackData->mAttackScale);
	mGasSePosition[gasID] = gasAttack->mEmitDirection;
	mGasSePosition[gasID] *= factor;
	mGasSePosition[gasID] += gasAttack->mEmitPosition;
	mGasSePosition[gasID].y -= -15.0f;
}

/**
 * @note Address: N/A
 * @note Size: 0xDC
 */
void BigTreasureAttackMgr::setWaterAttackParameter()
{
	int type = -(mObj->isNormalAttack(BIGATTACK_Water) != 0) + 2;

	switch (type) {
	case 1:
		mAttackData->mWaterShotInterval   = CG_PROPERPARMS(mObj).mWaterDischargeInterval1();
		mAttackData->mWaterJitterAngle    = CG_PROPERPARMS(mObj).mRandomAngle1();
		mAttackData->mWaterJitterDistance = CG_PROPERPARMS(mObj).mRandomDistance1();
		break;
	case 2:
		mAttackData->mWaterShotInterval   = CG_PROPERPARMS(mObj).mWaterDischargeInterval2();
		mAttackData->mWaterJitterAngle    = CG_PROPERPARMS(mObj).mRandomAngle2();
		mAttackData->mWaterJitterDistance = CG_PROPERPARMS(mObj).mRandomDistance2();
		break;
	}
}

/**
 * @note Address: 0x802F6380
 * @note Size: 0x10C
 */
void BigTreasureAttackMgr::startWaterAttack()
{
	if (mIsStartAttack[BIGATTACK_Water]) {
		return;
	}

	mIsStartAttack[BIGATTACK_Water] = true;
	mAttackTimer1                   = 0.0f;
	mAttackTimer2                   = 0.0f;
	setWaterAttackParameter();

	updateWaterEmitPosition();
	startNewWaterList();
}

/**
 * @note Address: 0x802F648C
 * @note Size: 0x47C
 */
void BigTreasureAttackMgr::startNewWaterList()
{
	if (!mWaterAttackNodes->mChild) {
		return;
	}

	efx::TOootaWbShot waterShot(mObj->mModel->getJoint("otakara_water_eff")->getWorldMatrix());
	waterShot.create(nullptr);

	Vector3f emitPos = mWaterEmitPosition; // f30, f29, f28
	Vector3f targetPos;                    // f27, na, f26
	Creature* target = getWaterTargetCreature();
	if (target) {
		targetPos = target->getPosition();
	} else {
		targetPos     = mObj->getPosition();
		f32 randDist  = randWeightFloat(500.0f);
		f32 randAngle = randWeightFloat(TAU);
		targetPos.x += randDist * sinf(randAngle);
		targetPos.z += randDist * cosf(randAngle);
	}

	f32 dist        = targetPos.distance2D(emitPos);     // f25
	f32 offset      = mAttackData->mWaterJitterDistance; // f31
	f32 speedFactor = dist + (randWeightFloat(2.0f * offset) - offset);

	if (speedFactor < 1.0f) {
		speedFactor = 1.0f;
	}

	f32 vertSpeed = (350.0f / sys->mDeltaTime) / 20.0f;

	f32 speed = ((0.5f * speedFactor) / (vertSpeed / 20.0f)) / sys->mDeltaTime;

	Vector3f sep  = targetPos - emitPos;
	f32 angleDist = JMAAtan2Radian(sep.x, sep.z); // f31

	f32 angOffset = mAttackData->mWaterJitterAngle;
	f32 randAngle = angleDist + (randWeightFloat(2.0f * angOffset) - angOffset);

	Vector3f vel = Vector3f(speed * sinf(randAngle), vertSpeed, speed * cosf(randAngle));

	BigTreasureWaterAttack* waterNode = static_cast<BigTreasureWaterAttack*>(mWaterAttackNodes->mChild);
	waterNode->del();
	waterNode->start(vel, emitPos);
	mActiveWaterList->add(waterNode);
	addAttackShadow(waterNode);
	PSStartSoundVec(PSSE_EN_BIGTAKARA_W_SHOT, (Vec*)&mWaterEmitPosition);

	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stfd     f29, 0xb0(r1)
	psq_st   f29, 184(r1), 0, qr0
	stfd     f28, 0xa0(r1)
	psq_st   f28, 168(r1), 0, qr0
	stfd     f27, 0x90(r1)
	psq_st   f27, 152(r1), 0, qr0
	stfd     f26, 0x80(r1)
	psq_st   f26, 136(r1), 0, qr0
	stfd     f25, 0x70(r1)
	psq_st   f25, 120(r1), 0, qr0
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	mr       r31, r3
	lwz      r3, 0xb4(r3)
	lwz      r0, 0x10(r3)
	cmplwi   r0, 0
	beq      lbl_802F68B8
	lwz      r5, 4(r31)
	lis      r3, lbl_8048D228@ha
	addi     r4, r3, lbl_8048D228@l
	lwz      r3, 0x174(r5)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, __vt__Q23efx5TBase@ha
	li       r6, 0
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx8TSimple2@ha
	stw      r0, 0x20(r1)
	addi     r0, r4, __vt__Q23efx8TSimple2@l
	lis      r5, __vt__Q23efx11TSimpleMtx2@ha
	lis      r4, __vt__Q23efx12TOootaWbShot@ha
	stw      r0, 0x20(r1)
	addi     r0, r5, __vt__Q23efx11TSimpleMtx2@l
	li       r7, 0x11f
	li       r5, 0x120
	stw      r0, 0x20(r1)
	addi     r0, r4, __vt__Q23efx12TOootaWbShot@l
	li       r4, 0
	stw      r3, 0x30(r1)
	addi     r3, r1, 0x20
	sth      r7, 0x24(r1)
	sth      r5, 0x26(r1)
	stw      r6, 0x28(r1)
	stw      r6, 0x2c(r1)
	stw      r0, 0x20(r1)
	bl       create__Q23efx11TSimpleMtx2FPQ23efx3Arg
	lfs      f30, 0xbc(r31)
	mr       r3, r31
	lfs      f29, 0xc0(r31)
	lfs      f28, 0xc4(r31)
	bl getWaterTargetCreature__Q34Game11BigTreasure20BigTreasureAttackMgrFv
	cmplwi   r3, 0
	beq      lbl_802F65A0
	mr       r4, r3
	addi     r3, r1, 0x14
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f27, 0x14(r1)
	lfs      f26, 0x1c(r1)
	b        lbl_802F66BC

lbl_802F65A0:
	lwz      r4, 4(r31)
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f27, 8(r1)
	lfs      f26, 0x10(r1)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x3c(r1)
	lfd      f3, lbl_8051D230@sda21(r2)
	stw      r0, 0x38(r1)
	lfs      f1, lbl_8051D2A0@sda21(r2)
	lfd      f2, 0x38(r1)
	lfs      f0, lbl_8051D224@sda21(r2)
	fsubs    f2, f2, f3
	fmuls    f1, f1, f2
	fdivs    f31, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x44(r1)
	lfd      f3, lbl_8051D230@sda21(r2)
	stw      r0, 0x40(r1)
	lfs      f2, lbl_8051D298@sda21(r2)
	lfd      f0, 0x40(r1)
	lfs      f1, lbl_8051D224@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051D200@sda21(r2)
	fmuls    f2, f2, f3
	fdivs    f2, f2, f1
	fcmpo    cr0, f2, f0
	bge      lbl_802F6658
	lfs      f0, lbl_8051D23C@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x48(r1)
	lwz      r0, 0x4c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f1, f0
	b        lbl_802F667C

lbl_802F6658:
	lfs      f0, lbl_8051D238@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x50(r1)
	lwz      r0, 0x54(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r3, r0

lbl_802F667C:
	lfs      f0, lbl_8051D200@sda21(r2)
	fmadds   f27, f31, f1, f27
	fcmpo    cr0, f2, f0
	bge      lbl_802F6690
	fneg     f2, f2

lbl_802F6690:
	lfs      f0, lbl_8051D238@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x58(r1)
	lwz      r0, 0x5c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f0, 4(r3)
	fmadds   f26, f31, f0, f26

lbl_802F66BC:
	fsubs    f1, f26, f28
	lfs      f0, lbl_8051D200@sda21(r2)
	fsubs    f2, f27, f30
	fmuls    f1, f1, f1
	fmadds   f25, f2, f2, f1
	fcmpo    cr0, f25, f0
	ble      lbl_802F66E8
	ble      lbl_802F66EC
	frsqrte  f0, f25
	fmuls    f25, f0, f25
	b        lbl_802F66EC

lbl_802F66E8:
	fmr      f25, f0

lbl_802F66EC:
	lwz      r3, 0x11c(r31)
	lfs      f31, 0x44(r3)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x5c(r1)
	lfs      f0, lbl_8051D2A4@sda21(r2)
	stw      r0, 0x58(r1)
	lfd      f3, lbl_8051D230@sda21(r2)
	fmuls    f2, f0, f31
	lfd      f0, 0x58(r1)
	lfs      f1, lbl_8051D224@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051D210@sda21(r2)
	fmuls    f2, f2, f3
	fdivs    f1, f2, f1
	fsubs    f1, f1, f31
	fadds    f2, f25, f1
	fcmpo    cr0, f2, f0
	bge      lbl_802F6740
	fmr      f2, f0

lbl_802F6740:
	lwz      r4, sys@sda21(r13)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, lbl_8051D24C@sda21(r2)
	fsubs    f1, f27, f30
	lfs      f5, 0x54(r4)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f4, lbl_8051D2A8@sda21(r2)
	fmuls    f3, f0, f2
	lfs      f0, lbl_8051D25C@sda21(r2)
	fdivs    f4, f4, f5
	fdivs    f27, f4, f0
	fdivs    f0, f27, f0
	fdivs    f0, f3, f0
	fsubs    f2, f26, f28
	fdivs    f26, f0, f5
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	lwz      r3, 0x11c(r31)
	fmr      f31, f1
	lfs      f25, 0x40(r3)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x54(r1)
	lfs      f0, lbl_8051D2A4@sda21(r2)
	stw      r0, 0x50(r1)
	lfd      f3, lbl_8051D230@sda21(r2)
	fmuls    f2, f0, f25
	lfd      f0, 0x50(r1)
	lfs      f1, lbl_8051D224@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051D200@sda21(r2)
	fmuls    f2, f2, f3
	fdivs    f1, f2, f1
	fsubs    f1, f1, f25
	fadds    f3, f31, f1
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_802F67DC
	fneg     f1, f3

lbl_802F67DC:
	lfs      f2, lbl_8051D238@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051D200@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x48(r1)
	lwz      r0, 0x4c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f31, f26, f0
	bge      lbl_802F6838
	lfs      f0, lbl_8051D23C@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f25, f0
	b        lbl_802F6850

lbl_802F6838:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f25, r4, r0

lbl_802F6850:
	lwz      r3, 0xb4(r31)
	lwz      r30, 0x10(r3)
	mr       r3, r30
	bl       del__5CNodeFv
	fmuls    f0, f26, f25
	li       r4, 0
	stfs     f0, 0x20(r30)
	stfs     f27, 0x24(r30)
	stfs     f31, 0x28(r30)
	stfs     f30, 0x2c(r30)
	stfs     f29, 0x30(r30)
	stfs     f28, 0x34(r30)
	lwz      r3, 0x38(r30)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xb0(r31)
	mr       r4, r30
	bl       add__5CNodeFP5CNode
	mr       r3, r31
	mr       r4, r30
	bl
addAttackShadow__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure22BigTreasureWaterAttack
	addi     r4, r31, 0xbc
	li       r3, 0x5954
	bl       PSStartSoundVec__FUlP3Vec

lbl_802F68B8:
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	psq_l    f29, 184(r1), 0, qr0
	lfd      f29, 0xb0(r1)
	psq_l    f28, 168(r1), 0, qr0
	lfd      f28, 0xa0(r1)
	psq_l    f27, 152(r1), 0, qr0
	lfd      f27, 0x90(r1)
	psq_l    f26, 136(r1), 0, qr0
	lfd      f26, 0x80(r1)
	psq_l    f25, 120(r1), 0, qr0
	lfd      f25, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r0, 0xe4(r1)
	lwz      r30, 0x68(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/**
 * @note Address: 0x802F6908
 * @note Size: 0x164
 */
void BigTreasureAttackMgr::updateWaterAttack()
{
	BigTreasureWaterAttack* waterNode = static_cast<BigTreasureWaterAttack*>(mActiveWaterList->mChild);
	while (waterNode) {
		BigTreasureWaterAttack* nextNode = waterNode->getNext();
		if (waterNode->update()) {
			waterNode->mEfxWaterBomb->fade();

			efx::Arg fxArg(waterNode->mPosition);
			efx::TOootaWbHit hitFX;
			hitFX.create(&fxArg);
			PSStartSoundVec(PSSE_EN_BIGTAKARA_W_GROUND, (Vec*)&waterNode->mPosition);
			waterNode->del();
			mWaterAttackNodes->add(waterNode);
			delAttackShadow(waterNode);
		}
		waterNode = nextNode;
	}

	if (mIsStartAttack[BIGATTACK_Water]) {
		updateWaterEmitPosition();
		if (mAttackTimer1 > mAttackData->mWaterShotInterval) {
			mAttackTimer1 = 0.0f;
			startNewWaterList();
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void BigTreasureAttackMgr::finishWaterAttack() { }

/**
 * @note Address: 0x802F6A6C
 * @note Size: 0x58
 */
void BigTreasureAttackMgr::updateWaterEmitPosition()
{
	mWaterEmitPosition = mObj->mModel->getJoint("otakara_water_eff")->getWorldMatrix()->getColumn(3);
}

/**
 * @note Address: 0x802F6AC4
 * @note Size: 0x2D8
 */
Creature* BigTreasureAttackMgr::getWaterTargetCreature()
{
	int targetCounter = 0;
	Piki* targetList[256]; // can store up to 256 target Pikmin (sure).

	// loop through all Pikmin on the field.
	Iterator<Piki> iter(pikiMgr);
	CI_LOOP(iter)
	{
		Piki* piki = *iter;
		// if Pikmin is alive, not following an enemy, and NOT Blue, make it a possible target
		if (piki->isAlive() && piki->isPikmin() && piki->getKind() != Blue) {
			targetList[targetCounter] = piki;
			targetCounter++;
		}
	}

	// if we found any eligible target Pikmin, pick one at random.
	if (targetCounter != 0) {
		int randIdx = (f32)targetCounter * randFloat();
		return targetList[randIdx];
	}

	// if we didn't find any eligible Pikmin, find the closest captain
	// NB: looks 180 degrees in front of TD, up to distance of 1280 units
	return EnemyFunc::getNearestNavi(mObj, 180.0f, 1280.0f, nullptr, nullptr);
}

/**
 * @note Address: 0x802F6D9C
 * @note Size: 0x3FC
 */
void BigTreasureAttackMgr::setElecAttackParameter()
{
	int type;
	if (mObj->isNormalAttack(BIGATTACK_Elec)) {
		if (randWeightFloat(1.0f) < 0.5f) {
			type = 1;
		} else {
			type = 2;
		}
	} else {
		if (randWeightFloat(1.0f) < 0.5f) {
			type = 3;
		} else {
			type = 4;
		}
	}

	switch (type) {
	case 1:
		mAttackData->mElecBounceFactor    = CG_PROPERPARMS(mObj).mBounceCoefficient1_1();
		mAttackData->mElecFrictionFactor  = CG_PROPERPARMS(mObj).mFrictionCoefficient1_1();
		mAttackData->mElecBaseHSpeed      = CG_PROPERPARMS(mObj).mBaseMuzzleVelocityXZ1_1();
		mAttackData->mElecJitterHSpeed    = CG_PROPERPARMS(mObj).mRandMuzzleVelocityXZ1_1();
		mAttackData->mElecBaseVSpeed      = CG_PROPERPARMS(mObj).mBaseMuzzleVelocityY1_1();
		mAttackData->mElecJitterVSpeed    = CG_PROPERPARMS(mObj).mRandMuzzleVelocityY1_1();
		mAttackData->mElecScatterTime     = CG_PROPERPARMS(mObj).mDischargeStart1_1();
		mAttackData->mElecChainOffsetTime = CG_PROPERPARMS(mObj).mChainInterval1_1();
		mAttackData->mElecMaxNodes        = CG_PROPERPARMS(mObj).mDischargeCount1_1();
		break;
	case 2:
		mAttackData->mElecBounceFactor    = CG_PROPERPARMS(mObj).mBounceCoefficient1_2();
		mAttackData->mElecFrictionFactor  = CG_PROPERPARMS(mObj).mFrictionCoefficient1_2();
		mAttackData->mElecBaseHSpeed      = CG_PROPERPARMS(mObj).mBaseMuzzleVelocityXZ1_2();
		mAttackData->mElecJitterHSpeed    = CG_PROPERPARMS(mObj).mRandMuzzleVelocityXZ1_2();
		mAttackData->mElecBaseVSpeed      = CG_PROPERPARMS(mObj).mBaseMuzzleVelocityY1_2();
		mAttackData->mElecJitterVSpeed    = CG_PROPERPARMS(mObj).mRandMuzzleVelocityY1_2();
		mAttackData->mElecScatterTime     = CG_PROPERPARMS(mObj).mDischargeStart1_2();
		mAttackData->mElecChainOffsetTime = CG_PROPERPARMS(mObj).mChainInterval1_2();
		mAttackData->mElecMaxNodes        = CG_PROPERPARMS(mObj).mDischargeCount1_2();
		break;
	case 3:
		mAttackData->mElecBounceFactor    = CG_PROPERPARMS(mObj).mBounceCoefficient2_1();
		mAttackData->mElecFrictionFactor  = CG_PROPERPARMS(mObj).mFrictionCoefficient2_1();
		mAttackData->mElecBaseHSpeed      = CG_PROPERPARMS(mObj).mBaseMuzzleVelocityXZ2_1();
		mAttackData->mElecJitterHSpeed    = CG_PROPERPARMS(mObj).mRandMuzzleVelocityXZ2_1();
		mAttackData->mElecBaseVSpeed      = CG_PROPERPARMS(mObj).mBaseMuzzleVelocityY2_1();
		mAttackData->mElecJitterVSpeed    = CG_PROPERPARMS(mObj).mRandMuzzleVelocityY2_1();
		mAttackData->mElecScatterTime     = CG_PROPERPARMS(mObj).mDischargeStart2_1();
		mAttackData->mElecChainOffsetTime = CG_PROPERPARMS(mObj).mChainInterval2_1();
		mAttackData->mElecMaxNodes        = CG_PROPERPARMS(mObj).mDischargeCount2_1();
		break;
	case 4:
		mAttackData->mElecBounceFactor    = CG_PROPERPARMS(mObj).mBounceCoefficient2_2();
		mAttackData->mElecFrictionFactor  = CG_PROPERPARMS(mObj).mFrictionCoefficient2_2();
		mAttackData->mElecBaseHSpeed      = CG_PROPERPARMS(mObj).mBaseMuzzleVelocityXZ2_2();
		mAttackData->mElecJitterHSpeed    = CG_PROPERPARMS(mObj).mRandMuzzleVelocityXZ2_2();
		mAttackData->mElecBaseVSpeed      = CG_PROPERPARMS(mObj).mBaseMuzzleVelocityY2_2();
		mAttackData->mElecJitterVSpeed    = CG_PROPERPARMS(mObj).mRandMuzzleVelocityY2_2();
		mAttackData->mElecScatterTime     = CG_PROPERPARMS(mObj).mDischargeStart2_2();
		mAttackData->mElecChainOffsetTime = CG_PROPERPARMS(mObj).mChainInterval2_2();
		mAttackData->mElecMaxNodes        = CG_PROPERPARMS(mObj).mDischargeCount2_2();
		break;
	}

	if (mAttackData->mElecChainOffsetTime == 0.0f) {
		mAttackData->mElecPlacedNodes = mAttackData->mElecMaxNodes;
	} else {
		mAttackData->mElecPlacedNodes = 0;
	}
}

/**
 * @note Address: 0x802F7198
 * @note Size: 0x494
 */
void BigTreasureAttackMgr::startElecAttack()
{
	if (mIsStartAttack[BIGATTACK_Elec]) {
		return;
	}

	mIsStartAttack[BIGATTACK_Elec] = true;
	mAttackTimer1                  = 0.0f;
	mAttackTimer2                  = 0.0f;
	setElecAttackParameter();

	for (int i = 0; i < 4; i++) {     // each leg
		for (int j = 0; j < 3; j++) { // each 'section' of leg
			mEfxElecLeg[i][j]->create(nullptr);
		}
	}

	Vector3f effectPos = mObj->mModel->getJoint("otakara_elec_eff")->getWorldMatrix()->getColumn(3); // f31, f30, f29

	BigTreasureElecAttack* elecNode = static_cast<BigTreasureElecAttack*>(mElecAttackNodes->mChild);
	if (elecNode) {
		elecNode->start(Vector3f::zero, effectPos, false);
		elecNode->del();
		mActiveElecList->add(elecNode);
		mEfxElecAttack1->mPosition = &elecNode->mPosition;
		mEfxElecAttack1->create(nullptr);
	}

	f32 randAngle                  = randWeightFloat(TAU);                  // f28
	f32 angleOffset                = TAU / (f32)mAttackData->mElecMaxNodes; // f27
	int counter                    = 0;
	BigTreasureElecAttack* newNode = static_cast<BigTreasureElecAttack*>(mElecAttackNodes->mChild);
	while (newNode) {
		BigTreasureElecAttack* nextNode = newNode->getNext();

		if (counter < mAttackData->mElecMaxNodes) {
			f32 angle       = randAngle + (randWeightFloat(0.2f) - 0.1f);
			f32 randSpeedXZ = mAttackData->mElecJitterHSpeed;
			f32 randSpeedY  = mAttackData->mElecJitterVSpeed;
			f32 speedXZ     = mAttackData->mElecBaseHSpeed + randWeightFloat(randSpeedXZ);
			f32 yVel        = mAttackData->mElecBaseVSpeed + randWeightFloat(randSpeedY);

			Vector3f vel = Vector3f(speedXZ * sinf(angle), yVel, speedXZ * cosf(angle));

			randAngle += angleOffset;

			newNode->start(vel, effectPos, true);
			newNode->del();
			mActiveElecList->add(newNode);
			addAttackShadow(newNode);
		}
		newNode = nextNode;
		counter++;
	}

	f32 attackVal = (f32)mAttackData->mElecMaxNodes * 0.25f;
	for (int i = 0; i < 3; i++) {
		mElecSENodeIDs[i] = attackVal * f32(i);
	}

	/*
	stwu     r1, -0xd0(r1)
	mflr     r0
	stw      r0, 0xd4(r1)
	stfd     f31, 0xc0(r1)
	psq_st   f31, 200(r1), 0, qr0
	stfd     f30, 0xb0(r1)
	psq_st   f30, 184(r1), 0, qr0
	stfd     f29, 0xa0(r1)
	psq_st   f29, 168(r1), 0, qr0
	stfd     f28, 0x90(r1)
	psq_st   f28, 152(r1), 0, qr0
	stfd     f27, 0x80(r1)
	psq_st   f27, 136(r1), 0, qr0
	stfd     f26, 0x70(r1)
	psq_st   f26, 120(r1), 0, qr0
	stfd     f25, 0x60(r1)
	psq_st   f25, 104(r1), 0, qr0
	stfd     f24, 0x50(r1)
	psq_st   f24, 88(r1), 0, qr0
	stmw     r27, 0x3c(r1)
	mr       r28, r3
	lbz      r0, 0(r3)
	cmplwi   r0, 0
	bne      lbl_802F75D8
	li       r0, 1
	lfs      f0, lbl_8051D200@sda21(r2)
	stb      r0, 0(r28)
	stfs     f0, 8(r28)
	stfs     f0, 0xc(r28)
	bl setElecAttackParameter__Q34Game11BigTreasure20BigTreasureAttackMgrFv li
r31, 0 mr       r30, r28

lbl_802F7218:
	li       r27, 0
	mr       r29, r30

lbl_802F7220:
	lwz      r3, 0xd0(r29)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r27, r27, 1
	addi     r29, r29, 4
	cmpwi    r27, 3
	blt      lbl_802F7220
	addi     r31, r31, 1
	addi     r30, r30, 0xc
	cmpwi    r31, 4
	blt      lbl_802F7218
	lwz      r5, 4(r28)
	lis      r3, lbl_8048D1F0@ha
	addi     r4, r3, lbl_8048D1F0@l
	lwz      r3, 0x174(r5)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r4, 0xcc(r28)
	lfs      f29, 0x2c(r3)
	lwz      r27, 0x10(r4)
	lfs      f30, 0x1c(r3)
	cmplwi   r27, 0
	lfs      f31, 0xc(r3)
	beq      lbl_802F7320
	li       r0, 0
	lis      r3, "zero__10Vector3<f>"@ha
	stw      r0, 0x24(r27)
	lfsu     f0, "zero__10Vector3<f>"@l(r3)
	stfs     f0, 0x28(r27)
	lfs      f0, 4(r3)
	stfs     f0, 0x2c(r27)
	lfs      f0, 8(r3)
	stfs     f0, 0x30(r27)
	stfs     f31, 0x34(r27)
	stfs     f30, 0x38(r27)
	stfs     f29, 0x3c(r27)
	stb      r0, 0x20(r27)
	stw      r0, 0x40(r27)
	lbz      r0, 0x20(r27)
	cmplwi   r0, 0
	beq      lbl_802F72E8
	lwz      r3, 0x48(r27)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_802F72E8:
	mr       r3, r27
	bl       del__5CNodeFv
	lwz      r3, 0xc8(r28)
	mr       r4, r27
	bl       add__5CNodeFP5CNode
	lwz      r3, 0x100(r28)
	addi     r0, r27, 0x34
	li       r4, 0
	stw      r0, 0x10(r3)
	lwz      r3, 0x100(r28)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_802F7320:
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0xc(r1)
	li       r31, 0
	lwz      r3, 0x11c(r28)
	stw      r4, 8(r1)
	lwz      r0, 0x20(r3)
	lfd      f4, lbl_8051D230@sda21(r2)
	lfd      f0, 8(r1)
	xoris    r0, r0, 0x8000
	lfs      f3, lbl_8051D298@sda21(r2)
	fsubs    f0, f0, f4
	stw      r0, 0x14(r1)
	lfs      f1, lbl_8051D224@sda21(r2)
	stw      r4, 0x10(r1)
	fmuls    f2, f3, f0
	lwz      r3, 0xcc(r28)
	lfd      f0, 0x10(r1)
	lwz      r4, 0x10(r3)
	fdivs    f1, f2, f1
	fsubs    f0, f0, f4
	fmr      f28, f1
	fdivs    f27, f3, f0
	b        lbl_802F755C

lbl_802F7384:
	lwz      r3, 0x11c(r28)
	lwz      r30, 4(r4)
	lwz      r0, 0x20(r3)
	cmpw     r31, r0
	bge      lbl_802F7554
	mr       r29, r4
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lwz      r3, 0x11c(r28)
	stw      r0, 0x10(r1)
	lfd      f1, lbl_8051D230@sda21(r2)
	lfd      f0, 0x10(r1)
	lfs      f2, lbl_8051D2B4@sda21(r2)
	fsubs    f3, f0, f1
	lfs      f1, lbl_8051D224@sda21(r2)
	lfs      f0, lbl_8051D284@sda21(r2)
	lfs      f25, 0xc(r3)
	fmuls    f2, f2, f3
	lfs      f24, 0x14(r3)
	fdivs    f1, f2, f1
	fsubs    f0, f1, f0
	fadds    f26, f28, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lwz      r3, 0x11c(r28)
	stw      r0, 8(r1)
	lfd      f2, lbl_8051D230@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_8051D224@sda21(r2)
	fsubs    f2, f0, f2
	lfs      f0, 8(r3)
	fmuls    f2, f25, f2
	fdivs    f1, f2, f1
	fadds    f25, f0, f1
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	fmr      f4, f26
	lwz      r3, 0x11c(r28)
	stw      r0, 0x18(r1)
	lfd      f2, lbl_8051D230@sda21(r2)
	lfd      f1, 0x18(r1)
	lfs      f0, lbl_8051D200@sda21(r2)
	fsubs    f3, f1, f2
	lfs      f2, lbl_8051D224@sda21(r2)
	lfs      f1, 0x10(r3)
	fcmpo    cr0, f26, f0
	fmuls    f0, f24, f3
	fdivs    f0, f0, f2
	fadds    f3, f1, f0
	bge      lbl_802F7468
	fneg     f4, f26

lbl_802F7468:
	lfs      f2, lbl_8051D238@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051D200@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f4, f2
	fcmpo    cr0, f26, f0
	fctiwz   f0, f1
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f1, f25, f0
	bge      lbl_802F74C4
	lfs      f0, lbl_8051D23C@sda21(r2)
	fmuls    f0, f26, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_802F74DC

lbl_802F74C4:
	fmuls    f0, f26, f2
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_802F74DC:
	li       r3, 0
	fmuls    f0, f25, f0
	stw      r3, 0x24(r29)
	li       r0, 1
	fadds    f28, f28, f27
	stfs     f0, 0x28(r29)
	stfs     f3, 0x2c(r29)
	stfs     f1, 0x30(r29)
	stfs     f31, 0x34(r29)
	stfs     f30, 0x38(r29)
	stfs     f29, 0x3c(r29)
	stb      r0, 0x20(r29)
	stw      r3, 0x40(r29)
	lbz      r0, 0x20(r29)
	cmplwi   r0, 0
	beq      lbl_802F7534
	lwz      r3, 0x48(r29)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_802F7534:
	mr       r3, r29
	bl       del__5CNodeFv
	lwz      r3, 0xc8(r28)
	mr       r4, r29
	bl       add__5CNodeFP5CNode
	mr       r3, r28
	mr       r4, r29
	bl
addAttackShadow__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure21BigTreasureElecAttack

lbl_802F7554:
	mr       r4, r30
	addi     r31, r31, 1

lbl_802F755C:
	cmplwi   r4, 0
	bne      lbl_802F7384
	lwz      r3, 0x11c(r28)
	lis      r0, 0x4330
	stw      r0, 0x30(r1)
	lwz      r0, 0x20(r3)
	lfd      f4, lbl_8051D230@sda21(r2)
	xoris    r0, r0, 0x8000
	lfs      f3, lbl_8051D28C@sda21(r2)
	stw      r0, 0x34(r1)
	lfs      f2, lbl_8051D210@sda21(r2)
	lfd      f0, 0x30(r1)
	lfs      f1, lbl_8051D2A4@sda21(r2)
	fsubs    f4, f0, f4
	lfs      f0, lbl_8051D214@sda21(r2)
	fmuls    f3, f4, f3
	fmuls    f2, f3, f2
	fmuls    f1, f3, f1
	fmuls    f0, f3, f0
	fctiwz   f2, f2
	fctiwz   f1, f1
	fctiwz   f0, f0
	stfd     f2, 0x28(r1)
	stfd     f1, 0x20(r1)
	lwz      r0, 0x2c(r1)
	stfd     f0, 0x18(r1)
	lwz      r3, 0x24(r1)
	stw      r0, 0x108(r28)
	lwz      r0, 0x1c(r1)
	stw      r3, 0x10c(r28)
	stw      r0, 0x110(r28)

lbl_802F75D8:
	psq_l    f31, 200(r1), 0, qr0
	lfd      f31, 0xc0(r1)
	psq_l    f30, 184(r1), 0, qr0
	lfd      f30, 0xb0(r1)
	psq_l    f29, 168(r1), 0, qr0
	lfd      f29, 0xa0(r1)
	psq_l    f28, 152(r1), 0, qr0
	lfd      f28, 0x90(r1)
	psq_l    f27, 136(r1), 0, qr0
	lfd      f27, 0x80(r1)
	psq_l    f26, 120(r1), 0, qr0
	lfd      f26, 0x70(r1)
	psq_l    f25, 104(r1), 0, qr0
	lfd      f25, 0x60(r1)
	psq_l    f24, 88(r1), 0, qr0
	lfd      f24, 0x50(r1)
	lmw      r27, 0x3c(r1)
	lwz      r0, 0xd4(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x184
 */
void BigTreasureAttackMgr::startNewElecList()
{
	BigTreasureElecAttack* elecNode = static_cast<BigTreasureElecAttack*>(mActiveElecList->mChild);
	if (elecNode) {
		mEfxElecAttack1->fade();
		mEfxElecAttack2->setPosptr(&elecNode->mPosition);
		mEfxElecAttack2->create(nullptr);

		BigTreasureElecAttack* nextNode = elecNode->getNext();
		if (nextNode && !elecNode->mConnectedNode) {
			elecNode->mConnectedNode = nextNode;
			if (elecNode->mConnectedNode) {
				elecNode->mEfxPhouden->create(nullptr);
				elecNode->mEfxElec->setPosptr(&elecNode->mPosition, &elecNode->mConnectedNode->mPosition);
				elecNode->mEfxElec->create(nullptr);
			}
		}

		for (int i = 0; i < mAttackData->mElecPlacedNodes; i++) {
			BigTreasureElecAttack* nextNextNode = elecNode->getNext();
			if (nextNextNode && !nextNode->mConnectedNode) {
				nextNode->mConnectedNode = nextNextNode;
				if (nextNode->mConnectedNode) {
					nextNode->mEfxPhouden->create(nullptr);
					nextNode->mEfxElec->setPosptr(&nextNode->mPosition, &nextNode->mConnectedNode->mPosition);
					nextNode->mEfxElec->create(nullptr);
				}
			}

			nextNode = nextNextNode;
		}
	}

	mAttackTimer2 = 0.0f;
	mAttackData->mElecPlacedNodes++;
}

/**
 * @note Address: 0x802F762C
 * @note Size: 0x288
 */
void BigTreasureAttackMgr::updateElecAttack()
{
	BigTreasureElecAttack* elecNode = static_cast<BigTreasureElecAttack*>(mActiveElecList->mChild);
	for (int i = 0; elecNode; i++) {
		BigTreasureElecAttack* nextNode = elecNode->getNext();
		BigTreasureElecAttack* prevNode = elecNode->getPrev();
		elecNode->update();

		if (elecNode == mActiveElecList->mChild && elecNode->mConnectedNode) {
			PSStartSoundVec(PSSE_EN_BIGTAKARA_E_SPARK, (Vec*)&elecNode->mPosition);
		} else if (prevNode && prevNode->mConnectedNode && !elecNode->mConnectedNode) {
			PSStartSoundVec(PSSE_EN_BIGTAKARA_E_SPARK, (Vec*)&elecNode->mPosition);
		} else if (elecNode->mConnectedNode) {
			for (int j = 0; j < 3; j++) {
				if (i == mElecSENodeIDs[j]) {
					PSStartSoundVec(PSSE_EN_BIGTAKARA_E_SUSTAIN, (Vec*)&elecNode->mPosition);
					break;
				}
			}
		}

		elecNode = nextNode;
	}

	if (mIsStartAttack[BIGATTACK_Elec]) {
		if (mAttackTimer1 > mAttackData->mElecScatterTime && mAttackTimer2 > mAttackData->mElecChainOffsetTime
		    && mAttackData->mElecPlacedNodes <= mAttackData->mElecMaxNodes) {
			startNewElecList();
		}
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r31, r3
	li       r29, 0
	lwz      r3, 0xc8(r3)
	lwz      r30, 0x10(r3)
	b        lbl_802F7700

lbl_802F7650:
	lwz      r28, 4(r30)
	mr       r3, r30
	lwz      r27, 8(r30)
	bl       update__Q34Game11BigTreasure21BigTreasureElecAttackFv
	lwz      r3, 0xc8(r31)
	lwz      r0, 0x10(r3)
	cmplw    r30, r0
	bne      lbl_802F768C
	lwz      r0, 0x40(r30)
	cmplwi   r0, 0
	beq      lbl_802F768C
	addi     r4, r30, 0x34
	li       r3, 0x515b
	bl       PSStartSoundVec__FUlP3Vec
	b        lbl_802F76F8

lbl_802F768C:
	cmplwi   r27, 0
	beq      lbl_802F76BC
	lwz      r0, 0x40(r27)
	cmplwi   r0, 0
	beq      lbl_802F76BC
	lwz      r0, 0x40(r30)
	cmplwi   r0, 0
	bne      lbl_802F76BC
	addi     r4, r30, 0x34
	li       r3, 0x515b
	bl       PSStartSoundVec__FUlP3Vec
	b        lbl_802F76F8

lbl_802F76BC:
	lwz      r0, 0x40(r30)
	cmplwi   r0, 0
	beq      lbl_802F76F8
	li       r0, 3
	mr       r3, r31
	mtctr    r0

lbl_802F76D4:
	lwz      r0, 0x108(r3)
	cmpw     r29, r0
	bne      lbl_802F76F0
	addi     r4, r30, 0x34
	li       r3, 0x515a
	bl       PSStartSoundVec__FUlP3Vec
	b        lbl_802F76F8

lbl_802F76F0:
	addi     r3, r3, 4
	bdnz     lbl_802F76D4

lbl_802F76F8:
	mr       r30, r28
	addi     r29, r29, 1

lbl_802F7700:
	cmplwi   r30, 0
	bne      lbl_802F7650
	lbz      r0, 0(r31)
	cmplwi   r0, 0
	beq      lbl_802F78A0
	lwz      r4, 0x11c(r31)
	lfs      f1, 8(r31)
	lfs      f0, 0x18(r4)
	fcmpo    cr0, f1, f0
	ble      lbl_802F78A0
	lfs      f1, 0xc(r31)
	lfs      f0, 0x1c(r4)
	fcmpo    cr0, f1, f0
	ble      lbl_802F78A0
	lwz      r3, 0x24(r4)
	lwz      r0, 0x20(r4)
	cmpw     r3, r0
	bgt      lbl_802F78A0
	lwz      r3, 0xc8(r31)
	lwz      r30, 0x10(r3)
	cmplwi   r30, 0
	beq      lbl_802F7888
	lwz      r3, 0x100(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x104(r31)
	addi     r4, r30, 0x34
	bl       "setPosptr__Q23efx10TChasePos2FP10Vector3<f>"
	lwz      r3, 0x104(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r29, 4(r30)
	cmplwi   r29, 0
	beq      lbl_802F77FC
	lwz      r0, 0x40(r30)
	cmplwi   r0, 0
	bne      lbl_802F77FC
	stw      r29, 0x40(r30)
	lwz      r0, 0x40(r30)
	cmplwi   r0, 0
	beq      lbl_802F77FC
	lwz      r3, 0x4c(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0x40(r30)
	addi     r4, r30, 0x34
	lwz      r3, 0x44(r30)
	addi     r5, r5, 0x34
	bl "setPosptr__Q23efx24TChasePosPosLocalZScale3FP10Vector3<f>P10Vector3<f>"
	lwz      r3, 0x44(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_802F77FC:
	li       r30, 0
	b        lbl_802F7878

lbl_802F7804:
	lwz      r28, 4(r29)
	cmplwi   r28, 0
	beq      lbl_802F7870
	lwz      r0, 0x40(r29)
	cmplwi   r0, 0
	bne      lbl_802F7870
	stw      r28, 0x40(r29)
	lwz      r0, 0x40(r29)
	cmplwi   r0, 0
	beq      lbl_802F7870
	lwz      r3, 0x4c(r29)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0x40(r29)
	addi     r4, r29, 0x34
	lwz      r3, 0x44(r29)
	addi     r5, r5, 0x34
	bl "setPosptr__Q23efx24TChasePosPosLocalZScale3FP10Vector3<f>P10Vector3<f>"
	lwz      r3, 0x44(r29)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_802F7870:
	mr       r29, r28
	addi     r30, r30, 1

lbl_802F7878:
	lwz      r3, 0x11c(r31)
	lwz      r0, 0x24(r3)
	cmpw     r30, r0
	blt      lbl_802F7804

lbl_802F7888:
	lfs      f0, lbl_8051D200@sda21(r2)
	stfs     f0, 0xc(r31)
	lwz      r4, 0x11c(r31)
	lwz      r3, 0x24(r4)
	addi     r0, r3, 1
	stw      r0, 0x24(r4)

lbl_802F78A0:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x190
 */
void BigTreasureAttackMgr::finishElecAttack()
{
	BigTreasureElecAttack* elecNode = static_cast<BigTreasureElecAttack*>(mActiveElecList->mChild);
	while (elecNode) {
		BigTreasureElecAttack* nextNode = elecNode->getNext();

		elecNode->finish();

		elecNode->del();
		mElecAttackNodes->add(elecNode);

		delAttackShadow(elecNode);

		elecNode = nextNode;
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			mEfxElecLeg[i][j]->fade();
		}
	}

	mEfxElecAttack1->fade();
	mEfxElecAttack2->fade();
}

/**
 * @note Address: 0x802F78B4
 * @note Size: 0x1E4
 */
void BigTreasureAttackMgr::finishAttack()
{
	for (int i = 0; i < BIGATTACK_Count; i++) {
		mIsStartAttack[i] = false;
	}

	finishFireAttack();
	finishGasAttack();
	finishWaterAttack();
	finishElecAttack();
}

/**
 * @note Address: 0x802F7A98
 * @note Size: 0x80
 */
void BigTreasureAttackMgr::addAttackShadow(BigTreasureWaterAttack* waterAttack)
{
	for (int i = 0; i < 16; i++) {
		if (mAttackShadowNodes[i]->mPosition) {
			continue;
		}

		mAttackShadowNodes[i]->mPosition = &waterAttack->mPosition;
		mAttackShadowNodes[i]->mAngle    = 12.5f;
		mShadowRootNode->add(mAttackShadowNodes[i]);
		return;
	}
}

/**
 * @note Address: 0x802F7B18
 * @note Size: 0x80
 */
void BigTreasureAttackMgr::addAttackShadow(BigTreasureElecAttack* elecAttack)
{
	for (int i = 0; i < 16; i++) {
		if (mAttackShadowNodes[i]->mPosition) {
			continue;
		}

		mAttackShadowNodes[i]->mPosition = &elecAttack->mPosition;
		mAttackShadowNodes[i]->mAngle    = 7.5f;
		mShadowRootNode->add(mAttackShadowNodes[i]);
		return;
	}
}

/**
 * @note Address: 0x802F7B98
 * @note Size: 0x6C
 */
void BigTreasureAttackMgr::delAttackShadow(BigTreasureWaterAttack* waterAttack)
{
	for (int i = 0; i < 16; i++) {
		if (mAttackShadowNodes[i]->mPosition != &waterAttack->mPosition) {
			continue;
		}

		mAttackShadowNodes[i]->mPosition = nullptr;
		mAttackShadowNodes[i]->del();
	}
}

/**
 * @note Address: 0x802F7C04
 * @note Size: 0x6C
 */
void BigTreasureAttackMgr::delAttackShadow(BigTreasureElecAttack* elecAttack)
{
	for (int i = 0; i < 16; i++) {
		if (mAttackShadowNodes[i]->mPosition != &elecAttack->mPosition) {
			continue;
		}

		mAttackShadowNodes[i]->mPosition = nullptr;
		mAttackShadowNodes[i]->del();
	}
}

/**
 * @note Address: 0x802F7C70
 * @note Size: 0x44
 */
void BigTreasureAttackMgr::updateAttackShadow()
{
	FOREACH_NODE(AttackShadowNode, mShadowRootNode->mChild, shadow) { shadow->makeShadowSRT(); }
}
} // namespace BigTreasure
} // namespace Game
