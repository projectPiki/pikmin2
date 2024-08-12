#include "Game/Entities/ItemGate.h"
#include "Game/Entities/ItemDengekiGate.h"
#include "efx/TGate.h"
#include "efx/TEgate.h"
#include "PSM/WorkItem.h"
#include "Dolphin/rand.h"
#include "Sys/MatBaseAnimator.h"
#include "Game/routeMgr.h"
#include "Game/MapMgr.h"
#include "PSM/CreatureObj.h"
#include "Game/gamePlayData.h"
#include "Game/MoviePlayer.h"
#include "PSSystem/PSSystemIF.h"
#include "nans.h"

namespace Game {

static const int unusedItemGateArray[] = { 0, 0, 0 };
static const char unusedItemGateName[] = "itemGate";

ItemGateMgr* itemGateMgr;
ItemDengekiGate::Mgr* ItemDengekiGate::mgr;

/**
 * @note Address: 0x801C7604
 * @note Size: 0x134
 */
void GateFSM::init(ItemGate* gate)
{
	create(GATESTATE_MAX);
	registerState(new GateWaitState);
	registerState(new GateDamagedState);
	registerState(new GateDownState);
}

/**
 * @note Address: N/A
 * @note Size: 0x14C
 */
ItemGate::ItemGate()
    : WorkItem(OBJTYPE_Gate)
{
	mCollTree               = new CollTree;
	mBoundingSphere.mRadius = 170.0f;
	mCurrentSegmentHealth   = 100.0f;
	mDamage                 = 0.0f;
	mSegmentsDown           = 0;
	mMaxSegments            = 3;
	mMaxSegmentHealth       = 100.0f;
	mIsElectric             = false;
	mEgateEfxA              = nullptr;
	mEgateEfxBC             = nullptr;
}

/**
 * @note Address: 0x801C7738
 * @note Size: 0x48
 */
void ItemGate::constructor() { mSoundObj = new PSM::WorkItem(this); }

/**
 * @note Address: 0x801C7780
 * @note Size: 0x248
 */
void ItemGate::onInit(CreatureInitArg* arg)
{
	if (mIsElectric) {
		ItemDengekiGate::mgr->setupGate(this);
	} else {
		itemGateMgr->setupGate(this);
	}

	JUT_ASSERTLINE(232, mModel, "no shape !\n");

	mFsm->start(this, GATESTATE_Wait, nullptr);
	setAlive(true);
	if (arg) {
		ItemGateInitArg* gateArg = static_cast<ItemGateInitArg*>(arg);
		mFaceDir                 = gateArg->mFaceDir;
	} else {
		mFaceDir = randFloat() * TAU;
	}

	if (mIsElectric) {
		mMatAnimator = new Sys::MatLoopAnimator;
		mMatAnimator->start(&ItemDengekiGate::mgr->mMatAnimation);
		mEgateEfxA  = new efx::TEgateA;
		mEgateEfxBC = new efx::TEgateBC;
	} else {
		mMatAnimator = new Sys::MatLoopAnimator;
		mMatAnimator->start(&itemGateMgr->mMatTevRegAnim);
	}
}

/**
 * @note Address: 0x801C79FC
 * @note Size: 0x1E4
 */
void ItemGate::onSetPosition()
{
	Vector3f rotation(0.0f, mFaceDir, 0.0f);
	mBaseTrMatrix.makeTR(mPosition, rotation);
	PSMTXCopy((PSQuaternion*)&mBaseTrMatrix, mModel->mJ3dModel->mPosMtx);
	mModel->mJ3dModel->calc();
	if (mIsElectric) {
		ItemDengekiGate::mgr->setupPlatform(this);
	} else {
		itemGateMgr->setupPlatform(this);
	}
	initPlanes();

	WPSearchArg wpSearch(mPosition, nullptr, false, 10.0f);
	if (mapMgr && mapMgr->mRouteMgr) {
		mWayPoint = mapMgr->mRouteMgr->getNearestWayPoint(wpSearch);
		mWayPoint->setOpen(false);
		mWayPoint->mPosition = mPosition;
	} else {
		mWayPoint = nullptr;
	}

	if (mEgateEfxA) {
		efx::Arg arg(mPosition);
		mEgateEfxA->mMtx = mModel->getJoint("gate")->getWorldMatrix();
		mEgateEfxA->create(&arg);
	}

	if (mEgateEfxBC) {
		efx::ArgRotY arg(mPosition, mFaceDir);
		mEgateEfxBC->create(&arg);
	}
}

/**
 * @note Address: 0x801C7BE0
 * @note Size: 0xE8
 */
void ItemGate::doLoad(Stream& stream)
{
	mCurrentSegmentHealth = stream.readFloat();
	mSegmentsDown         = stream.readInt();
	initMotion();
	if (mSegmentsDown >= mMaxSegments) {
		mCentrePlatInstance->setCollision(false); // Centre? ?\_(�?)_/? British
		setAlive(false);
		if (mIsElectric) {
			mEgateEfxA->forceKill();
			mEgateEfxBC->forceKill();
		}
		if (mWayPoint)
			mWayPoint->setOpen(true);
	} else {
		if (mWayPoint)
			mWayPoint->setOpen(false);
	}
}

/**
 * @note Address: 0x801C7CC8
 * @note Size: 0x4C
 */
void ItemGate::doSave(Stream& stream)
{
	stream.writeFloat(mCurrentSegmentHealth);
	stream.writeInt(mSegmentsDown);
}

/**
 * @note Address: 0x801C7D14
 * @note Size: 0x1C
 */
void ItemGate::updateBoundSphere() { mBoundingSphere.mPosition = mPosition; }

/**
 * @note Address: 0x801C7D30
 * @note Size: 0x7C
 */
void ItemGate::update()
{
	doAI();
	updateBoundSphere();
	mSoundObj->exec();
	updateCell();
	do_updateLOD();
}

/**
 * @note Address: 0x801C7DAC
 * @note Size: 0x130
 */
void ItemGate::doAI()
{
	mMabiki.update(4);
	mFsm->exec(this);
	switch (mSoundEvent.update()) {
	case TSE_ApplyTransition:
		P2ASSERTLINE(354, mSoundObj->getCastType() == PSM::CCT_WorkItem);
		static_cast<PSM::WorkItem*>(mSoundObj)->eventStop();
	}

	if (mIsElectric && isAlive()) {
		mSoundObj->startSound(PSSE_EV_ELEC_GATE, 0);
	}
}

/**
 * @note Address: 0x801C7EDC
 * @note Size: 0x44
 */
void ItemGate::onKeyEvent(const SysShape::KeyEvent& keyEvent)
{
	if (mCurrentState) {
		mCurrentState->onKeyEvent(this, keyEvent);
	}
}

/**
 * @note Address: 0x801C7F24
 * @note Size: 0x11C
 */
bool ItemGate::interactAttack(Game::InteractAttack& attack)
{
	if (mCurrentState) {
		mCurrentState->onDamage(this, attack.mDamage);
		switch (mSoundEvent.event()) {
		case 1:
			P2ASSERTLINE(380, mSoundObj->getCastType() == PSM::CCT_WorkItem);
			static_cast<PSM::WorkItem*>(mSoundObj)->eventStart();
			break;
		case 3:
			P2ASSERTLINE(386, mSoundObj->getCastType() == PSM::CCT_WorkItem);
			static_cast<PSM::WorkItem*>(mSoundObj)->eventRestart();
			break;
		}
	}
	return true;
}

/**
 * @note Address: 0x801C8044
 * @note Size: 0x6C
 */
void ItemGate::initMotion()
{
	if (mSegmentsDown < mMaxSegments) {
		mAnimator.startAnim(mSegmentsDown + 3, nullptr);
	} else {
		mAnimator.startAnim(5, nullptr);
		mAnimator.setLastFrame();
	}
	mAnimSpeed = 0.0f;
}

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
void ItemGate::startDamageMotion()
{
	mAnimator.startAnim(mSegmentsDown, this);
	mAnimSpeed = 30.0f;
}

/**
 * @note Address: N/A
 * @note Size: 0x128
 */
void ItemGate::startDownMotion()
{
	mAnimator.startAnim(mSegmentsDown + 3, this);
	mAnimSpeed = 30.0f;
	if (mColor == 0) {
		efx::TGate1Down gateDown(&mBaseTrMatrix);
		gateDown.create(nullptr);
	} else {
		efx::TGate2Down gateDown(&mBaseTrMatrix);
		gateDown.create(nullptr);
	}
	mMabiki.mBuffer += 200;
}

/**
 * @note Address: 0x801C80B0
 * @note Size: 0x290
 */
bool ItemGate::getVectorField(Sys::Sphere& sphere, Vector3f& vectorField)
{
	if (mPlanes[0].calcDist(sphere.mPosition) >= -sphere.mRadius) {
		if (mPlanes[2].calcDist(sphere.mPosition) >= -sphere.mRadius) {
			vectorField = Vector3f(-_264.x, -_264.y, -_264.z);
		} else if (mPlanes[3].calcDist(sphere.mPosition) >= -sphere.mRadius) {
			vectorField = _264;
		} else {
			vectorField = Vector3f(-_270.x, -_270.y, -_270.z);
		}

	} else if (mPlanes[1].calcDist(sphere.mPosition) >= -sphere.mRadius) {
		if (mPlanes[2].calcDist(sphere.mPosition) >= -sphere.mRadius) {
			vectorField = Vector3f(-_264.x, -_264.y, -_264.z);
		} else if (mPlanes[3].calcDist(sphere.mPosition) >= -sphere.mRadius) {
			vectorField = _264;
		} else {
			vectorField = _270;
		}

	} else if (mPlanes[2].calcDist(sphere.mPosition) >= -sphere.mRadius) {
		vectorField = _270;

	} else if (mPlanes[3].calcDist(sphere.mPosition) >= -sphere.mRadius) {
		vectorField = _270;

	} else {
		vectorField = Vector3f(0.0f);
	}

	return true;
}

/**
 * @note Address: 0x801C8340
 * @note Size: 0x11C
 */
f32 ItemGate::getWorkDistance(Sys::Sphere& sphere)
{
	f32 workDist0 = 0.0f;
	f32 dist0     = mPlanes[2].calcDist(sphere.mPosition);
	f32 dist1     = mPlanes[0].calcDist(sphere.mPosition);
	f32 dist2     = mPlanes[1].calcDist(sphere.mPosition);
	f32 dist3     = mPlanes[3].calcDist(sphere.mPosition);

	if (dist0 > 0.0f) {
		workDist0 = dist0;
	} else if (dist1 > 0.0f) {
		workDist0 = dist1;
	}

	f32 workDist1 = 0.0f;
	if (dist2 > 0.0f) {
		workDist1 = dist2;
	} else if (dist3 > 0.0f) {
		workDist1 = dist3;
	} else if (workDist0 == 0.0f) {
		return 0.0f;
	} else {
		return 12800.0f;
	}

	if (workDist1 < 50.0f && workDist0 < 30.0f) {
		return workDist0 + workDist1;
	}

	return 12800.0f;
	/*
	lfs      f5, 4(r4)
	lfs      f0, 0x248(r3)
	lfs      f3, 0x228(r3)
	lfs      f2, 0x238(r3)
	fmuls    f1, f5, f0
	lfs      f0, 0x258(r3)
	fmuls    f3, f5, f3
	lfs      f8, 0(r4)
	fmuls    f4, f5, f2
	lfs      f2, 0x244(r3)
	lfs      f6, 0x224(r3)
	fmuls    f0, f5, f0
	lfs      f5, 0x234(r3)
	fmadds   f2, f8, f2, f1
	lfs      f1, 0x254(r3)
	fmadds   f6, f8, f6, f3
	lfs      f9, 8(r4)
	lfs      f3, 0x24c(r3)
	fmadds   f4, f8, f5, f4
	lfs      f7, 0x22c(r3)
	fmadds   f1, f8, f1, f0
	lfs      f5, 0x23c(r3)
	fmadds   f3, f9, f3, f2
	lfs      f0, 0x250(r3)
	lfs      f2, 0x25c(r3)
	fmadds   f7, f9, f7, f6
	lfs      f6, 0x230(r3)
	fmadds   f5, f9, f5, f4
	lfs      f4, 0x240(r3)
	fsubs    f3, f3, f0
	lfs      f8, 0xc(r4)
	fsubs    f6, f7, f6
	lfs      f0, 0x260(r3)
	fmadds   f1, f9, f2, f1
	lfs      f7, lbl_80519598@sda21(r2)
	fsubs    f2, f5, f4
	fsubs    f4, f3, f8
	fsubs    f0, f1, f0
	fsubs    f3, f6, f8
	fcmpo    cr0, f4, f7
	fsubs    f2, f2, f8
	fsubs    f0, f0, f8
	ble      lbl_801C83F4
	fmr      f7, f4
	b        lbl_801C8400

lbl_801C83F4:
	fcmpo    cr0, f0, f7
	ble      lbl_801C8400
	fmr      f7, f0

lbl_801C8400:
	lfs      f1, lbl_80519598@sda21(r2)
	fcmpo    cr0, f3, f1
	ble      lbl_801C8414
	fmr      f1, f3
	b        lbl_801C8434

lbl_801C8414:
	fcmpo    cr0, f2, f1
	ble      lbl_801C8424
	fmr      f1, f2
	b        lbl_801C8434

lbl_801C8424:
	fcmpu    cr0, f1, f7
	beqlr
	lfs      f1, lbl_805195C0@sda21(r2)
	blr

lbl_801C8434:
	lfs      f0, lbl_805195C4@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_801C8454
	lfs      f0, lbl_805195BC@sda21(r2)
	fcmpo    cr0, f7, f0
	bge      lbl_801C8454
	fadds    f1, f1, f7
	blr

lbl_801C8454:
	lfs      f1, lbl_805195C0@sda21(r2)
	blr
	*/
}

/**
 * @note Address: 0x801C845C
 * @note Size: 0x3A8
 */
void ItemGate::initPlanes()
{
	_270 = getDirection(mFaceDir);
	_264 = getPerpDirection(mFaceDir);

	Vector3f pos = getPosition();

	Vector3f plane0vec   = pos + (_270 * 20.0f);
	mPlanes[0].mNormal.x = _270.x;
	mPlanes[0].mNormal.y = _270.y;
	mPlanes[0].mNormal.z = _270.z;
	mPlanes[0].mOffset   = _270.dot(plane0vec);

	Vector3f vec2        = (-_270.x, -_270.y, _270.z);
	Vector3f plane1vec   = pos + (vec2 * 20.0f);
	mPlanes[1].mNormal.x = vec2.x;
	mPlanes[1].mNormal.y = vec2.y;
	mPlanes[1].mNormal.z = vec2.z;
	mPlanes[1].mOffset   = vec2.dot(plane1vec);

	Vector3f plane2vec   = pos + (_264 * 76.5f);
	mPlanes[2].mNormal.x = _264.x;
	mPlanes[2].mNormal.y = _264.y;
	mPlanes[2].mNormal.z = _264.z;
	mPlanes[2].mOffset   = _264.dot(plane2vec);

	Vector3f vec3        = (-_264.x, -_264.y, _264.z);
	Vector3f plane3vec   = pos + (vec3 * 76.5f);
	mPlanes[3].mNormal.x = vec3.x;
	mPlanes[3].mNormal.y = vec3.y;
	mPlanes[3].mNormal.z = vec3.z;
	mPlanes[3].mOffset   = vec3.dot(plane3vec);
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	lfs      f0, lbl_80519598@sda21(r2)
	stw      r0, 0xb4(r1)
	stw      r31, 0xac(r1)
	mr       r31, r3
	lfs      f3, 0x214(r3)
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_801C8488
	fneg     f1, f3

lbl_801C8488:
	lfs      f2, lbl_805195C8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_80519598@sda21(r2)
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	addi     r5, r3, 4
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x78(r1)
	lwz      r0, 0x7c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r5, r0
	bge      lbl_801C84E0
	lfs      f0, lbl_805195CC@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x80(r1)
	lwz      r0, 0x84(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_801C84F8

lbl_801C84E0:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x88(r1)
	lwz      r0, 0x8c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_801C84F8:
	stfs     f0, 0x270(r31)
	lfs      f0, lbl_80519598@sda21(r2)
	stfs     f0, 0x274(r31)
	stfs     f1, 0x278(r31)
	lfs      f3, 0x214(r31)
	fcmpo    cr0, f3, f0
	bge      lbl_801C8540
	lfs      f0, lbl_805195CC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x90(r1)
	lwz      r0, 0x94(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f1, f0
	b        lbl_801C8564

lbl_801C8540:
	lfs      f0, lbl_805195C8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x98(r1)
	lwz      r0, 0x9c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r3, r0

lbl_801C8564:
	lfs      f0, lbl_80519598@sda21(r2)
	fneg     f2, f1
	fcmpo    cr0, f3, f0
	bge      lbl_801C8578
	fneg     f3, f3

lbl_801C8578:
	lfs      f1, lbl_805195C8@sda21(r2)
	mr       r4, r31
	lfs      f0, lbl_80519598@sda21(r2)
	addi     r3, r1, 0x38
	fmuls    f1, f3, f1
	fctiwz   f1, f1
	stfd     f1, 0xa0(r1)
	lwz      r0, 0xa4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r5, r0
	stfs     f1, 0x264(r31)
	stfs     f0, 0x268(r31)
	stfs     f2, 0x26c(r31)
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x270(r31)
	lfs      f1, 0x274(r31)
	stfs     f2, 0x68(r1)
	lfs      f7, lbl_805195D0@sda21(r2)
	lfs      f0, 0x278(r31)
	stfs     f1, 0x6c(r1)
	fmuls    f3, f1, f7
	lwz      r3, 0x68(r1)
	fmuls    f1, f2, f7
	stfs     f0, 0x70(r1)
	fmuls    f4, f0, f7
	lwz      r0, 0x6c(r1)
	stw      r3, 0x2c(r1)
	lfs      f2, 0x38(r1)
	stw      r0, 0x30(r1)
	lfs      f0, 0x3c(r1)
	fadds    f8, f2, f1
	lfs      f1, 0x40(r1)
	lwz      r0, 0x70(r1)
	fadds    f5, f0, f3
	lfs      f3, 0x2c(r1)
	fadds    f9, f1, f4
	stw      r0, 0x34(r1)
	lfs      f4, 0x30(r1)
	stfs     f3, 0x224(r31)
	lfs      f3, 0x34(r1)
	stfs     f4, 0x228(r31)
	lfs      f6, lbl_805195D4@sda21(r2)
	stfs     f3, 0x22c(r31)
	lfs      f3, 0x228(r31)
	lfs      f4, 0x224(r31)
	fmuls    f3, f3, f5
	lfs      f5, 0x22c(r31)
	fmadds   f3, f4, f8, f3
	fmadds   f3, f5, f9, f3
	stfs     f3, 0x230(r31)
	lfs      f3, 0x270(r31)
	lfs      f4, 0x274(r31)
	fneg     f3, f3
	lfs      f5, 0x278(r31)
	fneg     f8, f4
	fneg     f9, f5
	stfs     f3, 0x5c(r1)
	frsp     f3, f3
	frsp     f4, f8
	stfs     f8, 0x60(r1)
	frsp     f5, f9
	lwz      r0, 0x5c(r1)
	fmuls    f3, f3, f7
	stfs     f9, 0x64(r1)
	lwz      r3, 0x60(r1)
	fmuls    f4, f4, f7
	stw      r0, 0x20(r1)
	fmuls    f5, f5, f7
	lwz      r0, 0x64(r1)
	fadds    f7, f2, f3
	stw      r3, 0x24(r1)
	lfs      f3, 0x20(r1)
	fadds    f8, f0, f4
	stw      r0, 0x28(r1)
	fadds    f9, f1, f5
	lfs      f4, 0x24(r1)
	stfs     f3, 0x234(r31)
	lfs      f3, 0x28(r1)
	stfs     f4, 0x238(r31)
	stfs     f3, 0x23c(r31)
	lfs      f3, 0x238(r31)
	lfs      f4, 0x234(r31)
	fmuls    f3, f3, f8
	lfs      f5, 0x23c(r31)
	fmadds   f3, f4, f7, f3
	fmadds   f3, f5, f9, f3
	stfs     f3, 0x240(r31)
	lfs      f7, 0x268(r31)
	lfs      f5, 0x26c(r31)
	fmuls    f3, f7, f6
	lfs      f8, 0x264(r31)
	fmuls    f4, f5, f6
	stfs     f7, 0x54(r1)
	fadds    f9, f0, f3
	stfs     f8, 0x50(r1)
	fadds    f10, f1, f4
	stfs     f5, 0x58(r1)
	lwz      r0, 0x50(r1)
	fmuls    f3, f8, f6
	lwz      r3, 0x54(r1)
	stw      r0, 0x14(r1)
	lwz      r0, 0x58(r1)
	fadds    f7, f2, f3
	stw      r3, 0x18(r1)
	lfs      f3, 0x14(r1)
	stw      r0, 0x1c(r1)
	lfs      f4, 0x18(r1)
	stfs     f3, 0x244(r31)
	lfs      f3, 0x1c(r1)
	stfs     f4, 0x248(r31)
	stfs     f3, 0x24c(r31)
	lfs      f3, 0x248(r31)
	lfs      f4, 0x244(r31)
	fmuls    f3, f3, f9
	lfs      f5, 0x24c(r31)
	fmadds   f3, f4, f7, f3
	fmadds   f3, f5, f10, f3
	stfs     f3, 0x250(r31)
	lfs      f3, 0x264(r31)
	lfs      f4, 0x268(r31)
	fneg     f3, f3
	lfs      f5, 0x26c(r31)
	fneg     f7, f4
	fneg     f8, f5
	stfs     f3, 0x44(r1)
	frsp     f3, f3
	frsp     f4, f7
	stfs     f7, 0x48(r1)
	frsp     f5, f8
	lwz      r0, 0x44(r1)
	fmuls    f3, f3, f6
	stfs     f8, 0x4c(r1)
	lwz      r3, 0x48(r1)
	fmuls    f4, f4, f6
	stw      r0, 8(r1)
	fmuls    f5, f5, f6
	lwz      r0, 0x4c(r1)
	fadds    f3, f2, f3
	stw      r3, 0xc(r1)
	lfs      f2, 8(r1)
	fadds    f4, f0, f4
	stw      r0, 0x10(r1)
	fadds    f5, f1, f5
	lfs      f1, 0xc(r1)
	stfs     f2, 0x254(r31)
	lfs      f0, 0x10(r1)
	stfs     f1, 0x258(r31)
	stfs     f0, 0x25c(r31)
	lfs      f0, 0x258(r31)
	lfs      f1, 0x254(r31)
	fmuls    f0, f0, f4
	lfs      f2, 0x25c(r31)
	fmadds   f0, f1, f3, f0
	fmadds   f0, f2, f5, f0
	stfs     f0, 0x260(r31)
	lwz      r31, 0xac(r1)
	lwz      r0, 0xb4(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/**
 * @note Address: 0x801C8804
 * @note Size: 0xD4
 */
void ItemGate::changeMaterial()
{
	int jointIdx = (mIsElectric) ? 0 : mModel->getJoint("move")->mJointIndex;

	bool showJoint = mCentrePlatInstance->isFlag(PLATFLAG_CollisionActive) && mLod.isFlag(AILOD_IsVisible);
	mModel->jointVisible(showJoint, (u16)jointIdx);
	if (mIsElectric) {
		mMatAnimator->animate(30.0f);
	} else {
		mMatAnimator->setCurrentFrame(mColor);
		mMatAnimator->animate(0.0f);
	}
}

inline f32 ItemGate::getGateHealth() { return (mMaxSegments - mSegmentsDown - 1) * mMaxSegmentHealth + mCurrentSegmentHealth; }

/**
 * @note Address: 0x801C88D8
 * @note Size: 0xA0
 */

void ItemGate::getLifeGaugeParam(Game::LifeGaugeParam& param)
{
	param.mPosition = mPosition;
	param.mPosition.y += 120.0f;
	param.mRadius          = 10.0f;
	param.mCurrHealthRatio = getGateHealth() / (mMaxSegmentHealth * mMaxSegments);
	param.mIsGaugeShown    = mLod.isFlag(AILOD_IsVisible);
}

/**
 * @note Address: 0x801C8978
 * @note Size: 0x1FC
 */
ItemGateMgr::ItemGateMgr()
    : BaseItemMgr(1)
{
	mItemName = "Gate";
	sys->heapStatusStart("ItemGate", nullptr);
	mObjectPathComponent = "user/Kando/objects/gates";
	setModelSize(1);
	loadArchive("gate-arc.szs");
	loadBmd("gate_soft.bmd", 0, 0x20000000);
	JKRArchive* arc = openTextArc("gate-texts.szs");
	loadAnimMgr(arc, "gateAnimMgr.txt");
	loadCollision(arc, "gateColl.txt");
	mCentrePlatform = loadPlatform(arc, "cent.pla");
	mSidePlatform   = loadPlatform(arc, "side.pla");
	closeTextArc(arc);
	JKRMountArchive("user/Kando/gates/gate-arc.szs", JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	SysShape::Model::enableMaterialAnim(mModelData[0], 0);
	void* brk = JKRFileLoader::getGlbResource("gate_soft.brk", nullptr);
	mMatTevRegAnim.attachResource(brk, mModelData[0]);
	sys->heapStatusEnd("ItemGate");
}

/**
 * @note Address: 0x801C8D94
 * @note Size: 0xA0
 */
void ItemGateMgr::setupGate(Game::ItemGate* gate)
{
	sys->heapStatusStart("new Model", nullptr);
	gate->mModel = new SysShape::Model(mModelData[0], 0, 2);
	sys->heapStatusEnd("new Model");
	gate->mAnimator.mAnimMgr = mAnimMgr;
	gate->mAnimator.startAnim(0, nullptr);
}

/**
 * @note Address: 0x801C8E34
 * @note Size: 0x158
 */
void ItemGateMgr::setupPlatform(Game::ItemGate* gate)
{
	sys->heapStatusStart("Platform", nullptr);
	Matrixf* moveJointMatrix = gate->mModel->getJoint("move")->getWorldMatrix();
	ID32 centreID            = 'gate';
	PlatAddInstanceArg platArgCentre;
	platArgCentre.mItem       = gate;
	platArgCentre.mId         = centreID;
	platArgCentre.mPlatform   = mCentrePlatform;
	platArgCentre.mMatrix     = moveJointMatrix;
	gate->mCentrePlatInstance = platMgr->addInstance(platArgCentre);
	sys->heapStatusStart("Clone-Plat", nullptr);
	Matrixf* fixJointMatrix = gate->mModel->getJoint("fix")->getWorldMatrix();
	ID32 sideID             = 'none';
	PlatAddInstanceArg platArgSide;
	platArgSide.mItem             = gate;
	platArgSide.mId               = sideID;
	platArgSide.mPlatform         = mSidePlatform;
	platArgSide.mMatrix           = fixJointMatrix;
	platArgSide.mEnableGlobalPlat = true;
	gate->mSidePlatInstance       = platMgr->addInstance(platArgSide);
	sys->heapStatusEnd("Clone-Plat");
	sys->heapStatusEnd("Platform");
}

/**
 * @note Address: 0x801C8F8C
 * @note Size: 0x1D4
 */
BaseItem* ItemGateMgr::birth()
{
	sys->heapStatusStart("ItemGate", nullptr);
	ItemGate* item                 = new ItemGate;
	TObjectNode<ItemGate>* objNode = new TObjectNode<ItemGate>;
	objNode->mContents             = item;
	mNodeObjectMgr.mNode.add(objNode);
	objNode->mContents->constructor();
	sys->heapStatusEnd("ItemGate");
	return item;
}

/**
 * @note Address: 0x801C9160
 * @note Size: 0x1E8
 */
void ItemGateMgr::initDependency()
{
	Iterator<ItemGate> iGate = &mNodeObjectMgr;
	CI_LOOP(iGate)
	{
		ItemGate* gate = *iGate;
		gate->initDependency();
	}
}

/**
 * @note Address: 0x801C9348
 * @note Size: 0x54
 */
GenItemParm* ItemGateMgr::generatorNewItemParm() { return new GenGateParm(); }

/**
 * @note Address: 0x801C939C
 * @note Size: 0xB0
 */
void ItemGateMgr::generatorWrite(Stream& stream, Game::GenItemParm* param)
{
	P2ASSERTLINE(794, param);
	GenGateParm* gateParam = static_cast<GenGateParm*>(param);
	stream.textWriteTab(stream.mTabCount);
	stream.writeFloat(gateParam->mLife);
	stream.textWriteText("\t#ライフ\r\n"); // life
	stream.textWriteTab(stream.mTabCount);
	stream.writeByte(gateParam->mColor);
	stream.textWriteText("\t#Color\r\n");
}

/**
 * @note Address: 0x801C944C
 * @note Size: 0xA8
 */
void ItemGateMgr::generatorRead(Stream& stream, Game::GenItemParm* param, u32 version)
{
	P2ASSERTLINE(808, param);
	GenGateParm* gateParam = static_cast<GenGateParm*>(param);
	if (version >= '0001') {
		gateParam->mLife = stream.readFloat();
	}
	if (version >= '0002') {
		gateParam->mColor = stream.readByte();
	} else {
		gateParam->mColor = 0;
	}
}

/**
 * @note Address: 0x801C94F4
 * @note Size: 0x228
 */
BaseItem* ItemGateMgr::generatorBirth(Vector3f& pos, Vector3f& rot, Game::GenItemParm* param)
{
	P2ASSERTLINE(823, param);
	GenGateParm* gateParam      = static_cast<GenGateParm*>(param);
	ItemGate* gate              = static_cast<ItemGate*>(birth());
	gate->mMaxSegmentHealth     = gateParam->mLife;
	gate->mCurrentSegmentHealth = gate->mMaxSegmentHealth;
	gate->mColor                = gateParam->mColor;
	gate->init(nullptr);
	gate->mFaceDir = roundAng(rot.y);
	gate->setPosition(pos, false);
	return gate;
}

/**
 * @note Address: 0x801C971C
 * @note Size: 0x14
 */
char* ItemGateMgr::getCaveName(int outsideCave)
{
	if (outsideCave == 0) {
		return "gate";
	}
	return nullptr;
}

/**
 * @note Address: 0x801C9730
 * @note Size: 0x4C
 */
int ItemGateMgr::getCaveID(char* cave) { return -(strncmp("gate", cave, strlen("gate")) != 0); }

/**
 * @note Address: 0x801C977C
 * @note Size: 0x4
 */
void GateWaitState::init(Game::ItemGate*, Game::StateArg*) { }

/**
 * @note Address: 0x801C9780
 * @note Size: 0x4
 */
void GateWaitState::exec(Game::ItemGate*) { }

/**
 * @note Address: 0x801C9784
 * @note Size: 0x4
 */
void GateWaitState::cleanup(Game::ItemGate*) { }

/**
 * @note Address: 0x801C9788
 * @note Size: 0x40
 */
void GateWaitState::onDamage(Game::ItemGate* item, f32 damage)
{
	item->mDamage += damage;
	transit(item, GATESTATE_Damaged, nullptr);
}

/**
 * @note Address: 0x801C97F8
 * @note Size: 0x4
 */
void GateWaitState::onKeyEvent(Game::ItemGate*, const SysShape::KeyEvent&) { }

/**
 * @note Address: 0x801C97FC
 * @note Size: 0x5C
 */
void GateDamagedState::init(Game::ItemGate* item, Game::StateArg* arg)
{
	item->startDamageMotion();
	// item->mAnimator.startAnim(item->mSegmentsDown, item);
	// item->mAnimSpeed = 30.0f;
	mNotInAnim = false;
}

/**
 * @note Address: 0x801C9858
 * @note Size: 0xC0
 */
void GateDamagedState::exec(Game::ItemGate* gate)
{
	gate->mCurrentSegmentHealth -= gate->mDamage;
	gate->mDamage = 0.0f;
	if (gate->mCurrentSegmentHealth < 0.0f) {
		transit(gate, GATESTATE_Down, nullptr);
	} else if (mNotInAnim) {
		if (gate->mDamage > 0.0f) { // flow swap
			gate->mAnimator.startAnim(gate->mSegmentsDown, gate);
			gate->mAnimSpeed = 30.0f;
		} else {
			transit(gate, GATESTATE_Wait, nullptr);
		}
	}
}

/**
 * @note Address: 0x801C9918
 * @note Size: 0x4
 */
void GateDamagedState::cleanup(Game::ItemGate*) { }

/**
 * @note Address: 0x801C991C
 * @note Size: 0x10
 */
void GateDamagedState::onDamage(Game::ItemGate* gate, f32 damage) { gate->mDamage += damage; }

/**
 * @note Address: 0x801C992C
 * @note Size: 0xC
 */
void GateDamagedState::onKeyEvent(Game::ItemGate*, const SysShape::KeyEvent&) { mNotInAnim = true; }

/**
 * @note Address: 0x801C9938
 * @note Size: 0x224
 */
void GateDownState::init(Game::ItemGate* gate, Game::StateArg* arg)
{
	gate->startDownMotion();
	gate->startSound(PSSE_EV_WORK_WALLDOWN);
	if (gate->mSegmentsDown + 1 == gate->mMaxSegments) {
		if (gameSystem->isFlag(GAMESYS_IsGameWorldActive) && !playData->isDemoFlag(DEMO_First_Gate_Down)) {
			MoviePlayArg gateMovie("g18_find_gate", nullptr, nullptr, 0);
			gateMovie.setTarget(gate);
			moviePlayer->mTargetObject = gate;
			moviePlayer->play(gateMovie);
			playData->setDemoFlag(DEMO_First_Gate_Down);
		}
	}
}

/**
 * @note Address: 0x801C9B5C
 * @note Size: 0x8
 */
f32 ItemGate::getFaceDir() { return mFaceDir; }

/**
 * @note Address: 0x801C9B64
 * @note Size: 0x4
 */
void GateDownState::exec(Game::ItemGate*) { }

/**
 * @note Address: 0x801C9B68
 * @note Size: 0x4
 */
void GateDownState::cleanup(Game::ItemGate*) { }

/**
 * @note Address: 0x801C9B6C
 * @note Size: 0x10
 */
void GateDownState::onDamage(Game::ItemGate* gate, f32 damage) { gate->mDamage += damage; }

/**
 * @note Address: 0x801C9B7C
 * @note Size: 0x168
 */
void GateDownState::onKeyEvent(Game::ItemGate* gate, const SysShape::KeyEvent& keyEvent)
{
	gate->mSegmentsDown++;
	gate->mCurrentSegmentHealth = gate->mMaxSegmentHealth;
	if (gate->mSegmentsDown == gate->mMaxSegments) {
		gate->mCentrePlatInstance->setCollision(false);
		platMgr->delInstance(gate->mCentrePlatInstance);
		gate->setAlive(false);
		gate->mWayPoint->setOpen(true);
		if (gate->mIsElectric) {
			gate->mEgateEfxA->fade();
			gate->mEgateEfxBC->fade();
		}
		gate->mSoundEvent.finish();
		P2ASSERTLINE(997, gate->mSoundObj->getCastType() == PSM::CCT_WorkItem);
		static_cast<PSM::WorkItem*>(gate->mSoundObj)->eventFinish();
		PSSystem::spSysIF->playSystemSe(PSSE_SY_WORK_FINISH, 0);
	} else if (gate->mDamage > 0.0f) {
		transit(gate, GATESTATE_Damaged, nullptr);
	} else {
		transit(gate, GATESTATE_Wait, nullptr);
	}
}

/**
 * @note Address: 0x801C9CE4
 * @note Size: 0x180
 */
ItemDengekiGate::Mgr::Mgr()
{
	mItemName = "電撃ゲート"; // electric shock gate
	sys->heapStatusStart("ItemDengekiGate", nullptr);
	mObjectPathComponent = "user/Kando/objects/gates";
	setModelSize(1);
	loadArchive("e-gate-arc.szs");
	loadBmd("e-gate.bmd", 0, 0x21000000);
	JKRArchive* texts = openTextArc("e-gate-texts.szs");
	loadAnimMgr(texts, "e-animmgr.txt");
	loadCollision(texts, "e-coll.txt");
	mCentrePlatform = loadPlatform(texts, "e-cent.pla");
	mSidePlatform   = loadPlatform(texts, "e-side.pla");
	closeTextArc(texts);
	JKRMountArchive("user/Kando/gates/e-gate-arc.szs", JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	SysShape::Model::enableMaterialAnim(mModelData[0], 0);
	void* brk = JKRFileLoader::getGlbResource("e-gate.btk", nullptr);
	mMatAnimation.attachResource(brk, mModelData[0]);
	sys->heapStatusEnd("ItemDengekiGate");
}

/**
 * @note Address: 0x801C9F80
 * @note Size: 0xA4
 */

void ItemDengekiGate::Mgr::setupGate(Game::ItemGate* gate)
{
	gate->mIsElectric = true;
	sys->heapStatusStart("new Model", nullptr);
	gate->mModel = new SysShape::Model(mModelData[0], 0, 2);
	sys->heapStatusEnd("new Model");
	gate->mAnimator.mAnimMgr = mAnimMgr;
	gate->mAnimator.startAnim(0, nullptr);
}

/**
 * @note Address: 0x801CA024
 * @note Size: 0x158
 */
void ItemDengekiGate::Mgr::setupPlatform(Game::ItemGate* gate)
{
	sys->heapStatusStart("Platform", nullptr);
	Matrixf* moveJointMatrix = gate->mModel->getJoint("gate")->getWorldMatrix();
	ID32 centreID            = 'elec';
	PlatAddInstanceArg platArgCentre;
	platArgCentre.mItem       = gate;
	platArgCentre.mId         = centreID;
	platArgCentre.mPlatform   = mCentrePlatform;
	platArgCentre.mMatrix     = moveJointMatrix;
	gate->mCentrePlatInstance = platMgr->addInstance(platArgCentre);
	sys->heapStatusStart("Clone-Plat", nullptr);
	Matrixf* fixJointMatrix = gate->mModel->getJoint("pole")->getWorldMatrix();
	ID32 sideID             = 'side';
	PlatAddInstanceArg platArgSide;
	platArgSide.mItem             = gate;
	platArgSide.mId               = sideID;
	platArgSide.mPlatform         = mSidePlatform;
	platArgSide.mMatrix           = fixJointMatrix;
	platArgSide.mEnableGlobalPlat = true;
	gate->mSidePlatInstance       = platMgr->addInstance(platArgSide);
	sys->heapStatusEnd("Clone-Plat");
	sys->heapStatusEnd("Platform");
}

/**
 * @note Address: 0x801CA17C
 * @note Size: 0x54
 */
GenItemParm* ItemDengekiGate::Mgr::generatorNewItemParm() { return new GenGateParm; }

/**
 * @note Address: 0x801CA1D0
 * @note Size: 0x84
 */
void ItemDengekiGate::Mgr::generatorWrite(Stream& stream, Game::GenItemParm* param)
{
	P2ASSERTLINE(1177, param);
	GenGateParm* gateParam = static_cast<GenGateParm*>(param);
	stream.textWriteTab(stream.mTabCount);
	stream.writeFloat(gateParam->mLife);
	stream.textWriteText("\t#ライフ\r\n"); // life
}

/**
 * @note Address: 0x801CA254
 * @note Size: 0x60
 */
void ItemDengekiGate::Mgr::generatorRead(Stream& stream, Game::GenItemParm* param, u32 version)
{
	P2ASSERTLINE(1187, param);
	GenGateParm* gateParam = static_cast<GenGateParm*>(param);
	gateParam->mLife       = stream.readFloat();
}

/**
 * @note Address: 0x801CA2B4
 * @note Size: 0xB8
 */
BaseItem* ItemDengekiGate::Mgr::generatorBirth(Vector3f& pos, Vector3f& rot, Game::GenItemParm* param)
{
	P2ASSERTLINE(1197, param);
	GenGateParm* gateParam      = static_cast<GenGateParm*>(param);
	ItemGate* gate              = static_cast<ItemGate*>(birth());
	gate->mMaxSegmentHealth     = gateParam->mLife;
	gate->mCurrentSegmentHealth = gate->mMaxSegmentHealth;
	gate->mIsElectric           = true;
	gate->init(nullptr);
	gate->mFaceDir = roundAng(rot.y);
	gate->setPosition(pos, false);
	return gate;
}

/**
 * @note Address: 0x801CA36C
 * @note Size: 0x14
 */
char* ItemDengekiGate::Mgr::getCaveName(int outsideCave)
{
	if (outsideCave == 0) {
		return "e-gate";
	}
	return nullptr;
}

/**
 * @note Address: 0x801CA380
 * @note Size: 0x4C
 */
int ItemDengekiGate::Mgr::getCaveID(char* cave) { return -(strncmp("e-gate", cave, strlen("e-gate")) != 0); }

/**
 * @note Address: 0x801CA3CC
 * @note Size: 0x134
 */
ItemDengekiGate::Mgr::~Mgr() { }

/**
 * @note Address: 0x801CA500
 * @note Size: 0xC
 */
u32 ItemDengekiGate::Mgr::generatorGetID() { return 'dgat'; }

/**
 * @note Address: 0x801CA50C
 * @note Size: 0xC
 */
u32 ItemDengekiGate::Mgr::generatorLocalVersion() { return '0000'; }

/**
 * @note Address: 0x801CA518
 * @note Size: 0xC
 */
u32 ItemGateMgr::generatorGetID() { return 'gate'; }

/**
 * @note Address: 0x801CA524
 * @note Size: 0xC
 */
u32 ItemGateMgr::generatorLocalVersion() { return '0002'; }

/**
 * @note Address: 0x801CA530
 * @note Size: 0x2C
 */
void ItemGateMgr::doAnimation() { mNodeObjectMgr.doAnimation(); }

/**
 * @note Address: 0x801CA55C
 * @note Size: 0x2C
 */
void ItemGateMgr::doEntry() { mNodeObjectMgr.doEntry(); }

/**
 * @note Address: 0x801CA588
 * @note Size: 0x2C
 */
void ItemGateMgr::doSetView(int viewportNumber) { mNodeObjectMgr.doSetView(viewportNumber); }

/**
 * @note Address: 0x801CA5B4
 * @note Size: 0x2C
 */
void ItemGateMgr::doViewCalc() { mNodeObjectMgr.doViewCalc(); }

/**
 * @note Address: 0x801CA5E0
 * @note Size: 0x2C
 */
void ItemGateMgr::doSimulation(f32 val) { mNodeObjectMgr.doSimulation(val); }

/**
 * @note Address: 0x801CA60C
 * @note Size: 0x2C
 */
void ItemGateMgr::doDirectDraw(Graphics& gfx) { mNodeObjectMgr.doDirectDraw(gfx); }

efx::TEgateA::~TEgateA() { }

/**
 * @note Address: 0x801CA6DC
 * @note Size: 0x8
 */
char* ItemGate::getCreatureName() { return "Gate"; }

/**
 * @note Address: 0x801CA6E4
 * @note Size: 0x8
 */
Mabiki* ItemGate::getMabiki() { return &mMabiki; }

/**
 * @note Address: 0x801CA6EC
 * @note Size: 0x4
 */
void ItemGate::makeTrMatrix() { }

} // namespace Game
