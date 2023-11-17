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

/*
 * --INFO--
 * Address:	801C7604
 * Size:	000134
 */
void GateFSM::init(ItemGate* gate)
{
	create(GATESTATE_MAX);
	registerState(new GateWaitState);
	registerState(new GateDamagedState);
	registerState(new GateDownState);
}

/*
 * --INFO--
 * Address:	........
 * Size:	00014C
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

/*
 * --INFO--
 * Address:	801C7738
 * Size:	000048
 */
void ItemGate::constructor() { mSoundObj = new PSM::WorkItem(this); }

/*
 * --INFO--
 * Address:	801C7780
 * Size:	000248
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

/*
 * --INFO--
 * Address:	801C79FC
 * Size:	0001E4
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

/*
 * --INFO--
 * Address:	801C7BE0
 * Size:	0000E8
 */
void ItemGate::doLoad(Stream& stream)
{
	mCurrentSegmentHealth = stream.readFloat();
	mSegmentsDown         = stream.readInt();
	initMotion();
	if (mSegmentsDown >= mMaxSegments) {
		mCentrePlatInstance->setCollision(false); // Centre? ?\_(繝?)_/? British
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

/*
 * --INFO--
 * Address:	801C7CC8
 * Size:	00004C
 */
void ItemGate::doSave(Stream& stream)
{
	stream.writeFloat(mCurrentSegmentHealth);
	stream.writeInt(mSegmentsDown);
}

/*
 * --INFO--
 * Address:	801C7D14
 * Size:	00001C
 */
void ItemGate::updateBoundSphere() { mBoundingSphere.mPosition = mPosition; }

/*
 * --INFO--
 * Address:	801C7D30
 * Size:	00007C
 */
void ItemGate::update()
{
	doAI();
	updateBoundSphere();
	mSoundObj->exec();
	updateCell();
	do_updateLOD();
}

/*
 * --INFO--
 * Address:	801C7DAC
 * Size:	000130
 */
void ItemGate::doAI()
{
	mMabiki.update(4);
	mFsm->exec(this);
	switch (mSoundEvent.update()) {
	case 2:
		P2ASSERTLINE(354, mSoundObj->getCastType() == PSM::CCT_WorkItem);
		static_cast<PSM::WorkItem*>(mSoundObj)->eventStop();
	}

	if (mIsElectric && isAlive()) {
		mSoundObj->startSound(PSSE_EV_ELEC_GATE, 0);
	}
}

/*
 * --INFO--
 * Address:	801C7EDC
 * Size:	000044
 */
void ItemGate::onKeyEvent(const SysShape::KeyEvent& keyEvent)
{
	if (mCurrentState) {
		mCurrentState->onKeyEvent(this, keyEvent);
	}
}

/*
 * --INFO--
 * Address:	801C7F24
 * Size:	00011C
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

/*
 * --INFO--
 * Address:	801C8044
 * Size:	00006C
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

/*
 * --INFO--
 * Address:	801C80B0
 * Size:	000290
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

/*
 * --INFO--
 * Address:	801C8340
 * Size:	00011C
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

/*
 * --INFO--
 * Address:	801C845C
 * Size:	0003A8
 */
void ItemGate::initPlanes()
{
	_270 = getDirection(mFaceDir);
	_264 = getPerpDirection(mFaceDir);

	Vector3f pos = getPosition();

	Vector3f plane0vec = pos + (_270 * 20.0f);
	mPlanes[0].a       = _270.x;
	mPlanes[0].b       = _270.y;
	mPlanes[0].c       = _270.z;
	mPlanes[0].d       = _270.dot(plane0vec);

	Vector3f vec2      = (-_270.x, -_270.y, _270.z);
	Vector3f plane1vec = pos + (vec2 * 20.0f);
	mPlanes[1].a       = vec2.x;
	mPlanes[1].b       = vec2.y;
	mPlanes[1].c       = vec2.z;
	mPlanes[1].d       = vec2.dot(plane1vec);

	Vector3f plane2vec = pos + (_264 * 76.5f);
	mPlanes[2].a       = _264.x;
	mPlanes[2].b       = _264.y;
	mPlanes[2].c       = _264.z;
	mPlanes[2].d       = _264.dot(plane2vec);

	Vector3f vec3      = (-_264.x, -_264.y, _264.z);
	Vector3f plane3vec = pos + (vec3 * 76.5f);
	mPlanes[3].a       = vec3.x;
	mPlanes[3].b       = vec3.y;
	mPlanes[3].c       = vec3.z;
	mPlanes[3].d       = vec3.dot(plane3vec);
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

/*
 * --INFO--
 * Address:	801C8804
 * Size:	0000D4
 */
void ItemGate::changeMaterial()
{
	int jointIdx = (mIsElectric) ? 0 : mModel->getJoint("move")->mJointIndex;

	bool showJoint = mCentrePlatInstance->mFlags & 1 && mLod.mFlags & 4;
	mModel->jointVisible(showJoint, (u16)jointIdx);
	if (mIsElectric) {
		mMatAnimator->animate(30.0f);
	} else {
		mMatAnimator->setCurrentFrame(mColor);
		mMatAnimator->animate(0.0f);
	}
}

inline f32 ItemGate::getGateHealth() { return (mMaxSegments - mSegmentsDown - 1) * mMaxSegmentHealth + mCurrentSegmentHealth; }

/*
 * --INFO--
 * Address:	801C88D8
 * Size:	0000A0
 */

void ItemGate::getLifeGaugeParam(Game::LifeGaugeParam& param)
{
	param.mPosition = mPosition;
	param.mPosition.y += 120.0f;
	param.mRadius              = 10.0f;
	param.mCurHealthPercentage = getGateHealth() / (mMaxSegmentHealth * mMaxSegments);
	param.mIsGaugeShown        = mLod.mFlags & 4;
	/*
	stwu     r1, -0x20(r1)
	lis      r0, 0x4330
	lfs      f1, lbl_805195E8@sda21(r2)
	lfs      f0, 0x19c(r3)
	stw      r0, 8(r1)
	lfd      f3, lbl_805195A8@sda21(r2)
	stfs     f0, 0(r4)
	lfs      f0, lbl_805195B0@sda21(r2)
	lfs      f2, 0x1a0(r3)
	stw      r0, 0x10(r1)
	stfs     f2, 4(r4)
	lfs      f2, 0x1a4(r3)
	stfs     f2, 8(r4)
	lfs      f2, 4(r4)
	fadds    f1, f2, f1
	stfs     f1, 4(r4)
	stfs     f0, 0x10(r4)
	lwz      r6, 0x210(r3)
	lwz      r5, 0x20c(r3)
	xoris    r0, r6, 0x8000
	lfs      f4, 0x204(r3)
	stw      r0, 0x14(r1)
	subf     r5, r5, r6
	addi     r0, r5, -1
	lfs      f1, 0x200(r3)
	xoris    r0, r0, 0x8000
	lfd      f0, 0x10(r1)
	stw      r0, 0xc(r1)
	fsubs    f0, f0, f3
	lfd      f2, 8(r1)
	fsubs    f2, f2, f3
	fmuls    f0, f4, f0
	fmadds   f1, f4, f2, f1
	fdivs    f0, f1, f0
	stfs     f0, 0xc(r4)
	lbz      r0, 0xd8(r3)
	rlwinm   r0, r0, 0x1e, 0x1f, 0x1f
	stb      r0, 0x14(r4)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C8978
 * Size:	0001FC
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
	JKRArchive::mount("user/Kando/gates/gate-arc.szs", JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	SysShape::Model::enableMaterialAnim(mModelData[0], 0);
	void* brk = JKRFileLoader::getGlbResource("gate_soft.brk", nullptr);
	mMatTevRegAnim.attachResource(brk, mModelData[0]);
	sys->heapStatusEnd("ItemGate");
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	extsh.   r0, r4
	lis      r4, lbl_80480188@ha
	stw      r31, 0x1c(r1)
	addi     r31, r4, lbl_80480188@l
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	beq      lbl_801C89B0
	addi     r0, r30, 0x88
	stw      r0, 4(r30)

lbl_801C89B0:
	mr       r3, r30
	li       r4, 0
	li       r5, 1
	bl       __ct__Q24Game11BaseItemMgrFi
	lis      r3, __vt__Q24Game11ItemGateMgr@ha
	addi     r29, r30, 0x30
	addi     r0, r3, __vt__Q24Game11ItemGateMgr@l
	stw      r0, 0(r30)
	mr       r3, r29
	bl       __ct__5CNodeFv
	lis      r4, __vt__16GenericContainer@ha
	lis      r3, "__vt__27Container<Q24Game8ItemGate>"@ha
	addi     r0, r4, __vt__16GenericContainer@l
	lis      r5, __vt__16GenericObjectMgr@ha
	stw      r0, 0(r29)
	addi     r0, r3, "__vt__27Container<Q24Game8ItemGate>"@l
	lis      r4, "__vt__27ObjectMgr<Q24Game8ItemGate>"@ha
	lis      r3, "__vt__31NodeObjectMgr<Q24Game8ItemGate>"@ha
	stw      r0, 0(r29)
	li       r0, 0
	addi     r6, r4, "__vt__27ObjectMgr<Q24Game8ItemGate>"@l
	addi     r4, r3, "__vt__31NodeObjectMgr<Q24Game8ItemGate>"@l
	stb      r0, 0x18(r29)
	addi     r0, r5, __vt__16GenericObjectMgr@l
	addi     r28, r29, 0x20
	addi     r5, r6, 0x2c
	stw      r0, 0x1c(r29)
	addi     r0, r4, 0x2c
	mr       r3, r28
	stw      r6, 0(r29)
	stw      r5, 0x1c(r29)
	stw      r4, 0(r29)
	stw      r0, 0x1c(r29)
	bl       __ct__5CNodeFv
	lis      r4, "__vt__29TObjectNode<Q24Game8ItemGate>"@ha
	addi     r3, r30, 0x74
	addi     r0, r4, "__vt__29TObjectNode<Q24Game8ItemGate>"@l
	stw      r0, 0(r28)
	bl       __ct__Q23Sys18MatTevRegAnimationFv
	addi     r0, r2, lbl_805195EC@sda21
	addi     r4, r31, 0x40
	stw      r0, 8(r30)
	li       r5, 0
	lwz      r3, sys@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	addi     r0, r31, 0x4c
	mr       r3, r30
	stw      r0, 0x28(r30)
	li       r4, 1
	bl       setModelSize__Q24Game11BaseItemMgrFi
	mr       r3, r30
	addi     r4, r31, 0x68
	bl       loadArchive__Q24Game11BaseItemMgrFPc
	mr       r3, r30
	addi     r4, r31, 0x78
	li       r5, 0
	lis      r6, 0x2000
	bl       loadBmd__Q24Game11BaseItemMgrFPciUl
	mr       r3, r30
	addi     r4, r31, 0x88
	bl       openTextArc__Q24Game11BaseItemMgrFPc
	mr       r0, r3
	mr       r3, r30
	mr       r29, r0
	addi     r5, r31, 0x98
	mr       r4, r29
	bl       loadAnimMgr__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
	mr       r3, r30
	mr       r4, r29
	addi     r5, r31, 0xa8
	bl       loadCollision__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
	mr       r3, r30
	mr       r4, r29
	addi     r5, r31, 0xb8
	bl       loadPlatform__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
	stw      r3, 0x6c(r30)
	mr       r3, r30
	mr       r4, r29
	addi     r5, r31, 0xc4
	bl       loadPlatform__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
	stw      r3, 0x70(r30)
	mr       r3, r30
	mr       r4, r29
	bl       closeTextArc__Q24Game11BaseItemMgrFP10JKRArchive
	addi     r3, r31, 0xd0
	li       r4, 1
	li       r5, 0
	li       r6, 1
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	lwz      r3, 0x1c(r30)
	li       r4, 0
	lwz      r3, 0(r3)
	bl       enableMaterialAnim__Q28SysShape5ModelFP12J3DModelDatai
	addi     r3, r31, 0xf0
	li       r4, 0
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	lwz      r5, 0x1c(r30)
	mr       r4, r3
	addi     r3, r30, 0x74
	lwz      r5, 0(r5)
	bl       attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x40
	bl       heapStatusEnd__6SystemFPc
	lwz      r0, 0x24(r1)
	mr       r3, r30
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C8D94
 * Size:	0000A0
 */
void ItemGateMgr::setupGate(Game::ItemGate* gate)
{
	sys->heapStatusStart("new Model", nullptr);
	gate->mModel = new SysShape::Model(mModelData[0], 0, 2);
	sys->heapStatusEnd("new Model");
	gate->mAnimator.mAnimMgr = mAnimMgr;
	gate->mAnimator.startAnim(0, nullptr);
}

/*
 * --INFO--
 * Address:	801C8E34
 * Size:	000158
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

/*
 * --INFO--
 * Address:	801C8F8C
 * Size:	0001D4
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
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_804801C8@ha
	li       r5, 0
	stw      r0, 0x24(r1)
	addi     r4, r4, lbl_804801C8@l
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	lwz      r3, sys@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0x284
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_801C90EC
	li       r4, 0x404
	bl       __ct__Q24Game8BaseItemFi
	lis      r3,
"__vt__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>"@ha
	li       r0, 0
	addi     r4, r3,
"__vt__Q24Game59FSMItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>"@l
	li       r3, 0x1c
	stw      r4, 0(r31)
	addi     r4, r4, 0x1b0
	stw      r4, 0x178(r31)
	stw      r0, 0x1d8(r31)
	stw      r0, 0x1dc(r31)
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_801C9030
	lis      r4, "__vt__Q24Game30StateMachine<Q24Game8ItemGate>"@ha
	lis      r5, "__vt__Q24Game25ItemFSM<Q24Game8ItemGate>"@ha
	addi     r0, r4, "__vt__Q24Game30StateMachine<Q24Game8ItemGate>"@l
	lis      r4, __vt__Q24Game7GateFSM@ha
	stw      r0, 0(r3)
	li       r6, -1
	addi     r5, r5, "__vt__Q24Game25ItemFSM<Q24Game8ItemGate>"@l
	addi     r0, r4, __vt__Q24Game7GateFSM@l
	stw      r6, 0x18(r3)
	stw      r5, 0(r3)
	stw      r0, 0(r3)

lbl_801C9030:
	stw      r3, 0x1d8(r31)
	mr       r4, r31
	lwz      r3, 0x1d8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lis      r4,
"__vt__Q24Game60WorkItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>"@ha
	addi     r3, r31, 0x1e0
	addi     r4, r4,
"__vt__Q24Game60WorkItem<Q24Game8ItemGate,Q24Game7GateFSM,Q24Game9GateState>"@l
	stw      r4, 0(r31)
	addi     r0, r4, 0x1b0
	stw      r0, 0x178(r31)
	bl       __ct__Q24Game11TSoundEventFv
	lis      r3, __vt__Q24Game8ItemGate@ha
	lis      r4, __ct__5PlaneFv@ha
	addi     r5, r3, __vt__Q24Game8ItemGate@l
	li       r6, 0x10
	stw      r5, 0(r31)
	addi     r0, r5, 0x1b0
	addi     r3, r31, 0x224
	addi     r4, r4, __ct__5PlaneFv@l
	stw      r0, 0x178(r31)
	li       r5, 0
	li       r7, 4
	bl       __construct_array
	li       r3, 8
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801C90B0
	bl       __ct__8CollTreeFv
	mr       r0, r3

lbl_801C90B0:
	stw      r0, 0x114(r31)
	li       r3, 0
	lfs      f0, lbl_80519590@sda21(r2)
	li       r0, 3
	lfs      f1, lbl_80519594@sda21(r2)
	stfs     f0, 0x1d0(r31)
	lfs      f0, lbl_80519598@sda21(r2)
	stfs     f1, 0x200(r31)
	stfs     f0, 0x208(r31)
	stw      r3, 0x20c(r31)
	stw      r0, 0x210(r31)
	stfs     f1, 0x204(r31)
	stb      r3, 0x218(r31)
	stw      r3, 0x21c(r31)
	stw      r3, 0x220(r31)

lbl_801C90EC:
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_801C910C
	bl       __ct__5CNodeFv
	lis      r3, "__vt__29TObjectNode<Q24Game8ItemGate>"@ha
	addi     r0, r3, "__vt__29TObjectNode<Q24Game8ItemGate>"@l
	stw      r0, 0(r29)

lbl_801C910C:
	stw      r31, 0x18(r29)
	mr       r4, r29
	addi     r3, r30, 0x50
	bl       add__5CNodeFP5CNode
	lwz      r3, 0x18(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lis      r4, lbl_804801C8@ha
	lwz      r3, sys@sda21(r13)
	addi     r4, r4, lbl_804801C8@l
	bl       heapStatusEnd__6SystemFPc
	lwz      r0, 0x24(r1)
	mr       r3, r31
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C9160
 * Size:	0001E8
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

/*
 * --INFO--
 * Address:	801C9348
 * Size:	000054
 */
GenItemParm* ItemGateMgr::generatorNewItemParm() { return new GenGateParm(); }

/*
 * --INFO--
 * Address:	801C939C
 * Size:	0000B0
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

/*
 * --INFO--
 * Address:	801C944C
 * Size:	0000A8
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

/*
 * --INFO--
 * Address:	801C94F4
 * Size:	000228
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

/*
 * --INFO--
 * Address:	801C971C
 * Size:	000014
 */
char* ItemGateMgr::getCaveName(int outsideCave)
{
	if (outsideCave == 0) {
		return "gate";
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	801C9730
 * Size:	00004C
 */
int ItemGateMgr::getCaveID(char* cave) { return -(strncmp("gate", cave, strlen("gate")) != 0); }

/*
 * --INFO--
 * Address:	801C977C
 * Size:	000004
 */
void GateWaitState::init(Game::ItemGate*, Game::StateArg*) { }

/*
 * --INFO--
 * Address:	801C9780
 * Size:	000004
 */
void GateWaitState::exec(Game::ItemGate*) { }

/*
 * --INFO--
 * Address:	801C9784
 * Size:	000004
 */
void GateWaitState::cleanup(Game::ItemGate*) { }

/*
 * --INFO--
 * Address:	801C9788
 * Size:	000040
 */
void GateWaitState::onDamage(Game::ItemGate* item, float damage)
{
	item->mDamage += damage;
	transit(item, GATESTATE_Damaged, nullptr);
}

/*
 * --INFO--
 * Address:	801C97F8
 * Size:	000004
 */
void GateWaitState::onKeyEvent(Game::ItemGate*, const SysShape::KeyEvent&) { }

/*
 * --INFO--
 * Address:	801C97FC
 * Size:	00005C
 */
void GateDamagedState::init(Game::ItemGate* item, Game::StateArg* arg)
{
	item->mAnimator.startAnim(item->mSegmentsDown, item);
	item->mAnimSpeed = 30.0f;
	mNotInAnim       = false;
}

/*
 * --INFO--
 * Address:	801C9858
 * Size:	0000C0
 */
void GateDamagedState::exec(Game::ItemGate* gate)
{
	gate->mCurrentSegmentHealth -= gate->mDamage;
	gate->mDamage = 0.0f;
	if (gate->mCurrentSegmentHealth < 0.0f) {
		transit(gate, GATESTATE_Down, nullptr);
	} else {
		if (mNotInAnim) {
			if (gate->mDamage > 0.0f) { // flow swap
				gate->mAnimator.startAnim(gate->mSegmentsDown, gate);
				gate->mAnimSpeed = 30.0f;
			}
		} else {
			transit(gate, GATESTATE_Wait, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	801C9918
 * Size:	000004
 */
void GateDamagedState::cleanup(Game::ItemGate*) { }

/*
 * --INFO--
 * Address:	801C991C
 * Size:	000010
 */
void GateDamagedState::onDamage(Game::ItemGate* gate, float damage) { gate->mDamage += damage; }

/*
 * --INFO--
 * Address:	801C992C
 * Size:	00000C
 */
void GateDamagedState::onKeyEvent(Game::ItemGate*, const SysShape::KeyEvent&) { mNotInAnim = true; }

/*
 * --INFO--
 * Address:	801C9938
 * Size:	000224
 */
void GateDownState::init(Game::ItemGate* gate, Game::StateArg* arg)
{
	gate->mAnimator.startAnim(gate->mSegmentsDown + 3, gate);
	gate->mAnimSpeed = 30.0f;
	if (gate->mColor == 0) {
		efx::TGate1Down gateDown(&gate->mBaseTrMatrix);
		gateDown.create(nullptr);
	} else {
		efx::TGate2Down gateDown(&gate->mBaseTrMatrix);
		gateDown.create(nullptr);
	}
	gate->mMabiki.mBuffer += 200;
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

/*
 * --INFO--
 * Address:	801C9B5C
 * Size:	000008
 */
f32 ItemGate::getFaceDir() { return mFaceDir; }

/*
 * --INFO--
 * Address:	801C9B64
 * Size:	000004
 */
void GateDownState::exec(Game::ItemGate*) { }

/*
 * --INFO--
 * Address:	801C9B68
 * Size:	000004
 */
void GateDownState::cleanup(Game::ItemGate*) { }

/*
 * --INFO--
 * Address:	801C9B6C
 * Size:	000010
 */
void GateDownState::onDamage(Game::ItemGate* gate, float damage) { gate->mDamage += damage; }

/*
 * --INFO--
 * Address:	801C9B7C
 * Size:	000168
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
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	lwz      r5, 0x20c(r4)
	addi     r0, r5, 1
	stw      r0, 0x20c(r4)
	lfs      f0, 0x204(r4)
	stfs     f0, 0x200(r4)
	lwz      r5, 0x20c(r4)
	lwz      r0, 0x210(r4)
	cmpw     r5, r0
	bne      lbl_801C9C8C
	lwz      r3, 0x1f4(r31)
	li       r4, 0
	bl       setCollision__Q24Game12PlatInstanceFb
	lwz      r3, platMgr__4Game@sda21(r13)
	lwz      r4, 0x1f4(r31)
	bl       delInstance__Q24Game7PlatMgrFPQ24Game12PlatInstance
	mr       r3, r31
	li       r4, 0
	lwz      r12, 0(r31)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x1fc(r31)
	li       r4, 1
	bl       setOpen__Q24Game8WayPointFb
	lbz      r0, 0x218(r31)
	cmplwi   r0, 0
	beq      lbl_801C9C24
	lwz      r3, 0x21c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x220(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_801C9C24:
	addi     r3, r31, 0x1e0
	bl       finish__Q24Game11TSoundEventFv
	lwz      r3, 0x17c(r31)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0xa
	beq      lbl_801C9C64
	lis      r3, lbl_804801A0@ha
	lis      r5, lbl_804801BC@ha
	addi     r3, r3, lbl_804801A0@l
	li       r4, 0x3e5
	addi     r5, r5, lbl_804801BC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801C9C64:
	lwz      r3, 0x17c(r31)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x94(r12)
	mtctr    r12
	bctrl
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x181c
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_801C9CD0

lbl_801C9C8C:
	lfs      f1, 0x208(r31)
	lfs      f0, lbl_80519598@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_801C9CB8
	lwz      r12, 0(r3)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_801C9CD0

lbl_801C9CB8:
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_801C9CD0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C9CE4
 * Size:	000180
 */
ItemDengekiGate::Mgr::Mgr()
{
	mName = "電撃ゲート"; // electric shock gate
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
	JKRArchive::mount("user/Kando/gates/e-gate-arc.szs", JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	SysShape::Model::enableMaterialAnim(mModelData[0], 0);
	void* brk = JKRFileLoader::getGlbResource("e-gate.btk", nullptr);
	mMatAnimation.attachResource(brk, mModelData[0]);
	sys->heapStatusEnd("ItemDengekiGate");
}
/*
 * --INFO--
 * Address:	801C9F80
 * Size:	0000A4
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

/*
 * --INFO--
 * Address:	801CA024
 * Size:	000158
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

/*
 * --INFO--
 * Address:	801CA17C
 * Size:	000054
 */
GenItemParm* ItemDengekiGate::Mgr::generatorNewItemParm() { return new GenGateParm; }

/*
 * --INFO--
 * Address:	801CA1D0
 * Size:	000084
 */
void ItemDengekiGate::Mgr::generatorWrite(Stream& stream, Game::GenItemParm* param)
{
	P2ASSERTLINE(1177, param);
	GenGateParm* gateParam = static_cast<GenGateParm*>(param);
	stream.textWriteTab(stream.mTabCount);
	stream.writeFloat(gateParam->mLife);
	stream.textWriteText("\t#ライフ\r\n"); // life

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r3, lbl_80480188@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r3, lbl_80480188@l
	stw      r30, 0x18(r1)
	or.      r30, r5, r5
	stw      r29, 0x14(r1)
	mr       r29, r4
	bne      lbl_801CA210
	addi     r3, r31, 0x18
	addi     r5, r31, 0x34
	li       r4, 0x499
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801CA210:
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	lfs      f1, 4(r30)
	mr       r3, r29
	bl       writeFloat__6StreamFf
	mr       r3, r29
	addi     r4, r31, 0x124
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801CA254
 * Size:	000060
 */
void ItemDengekiGate::Mgr::generatorRead(Stream& stream, Game::GenItemParm* param, u32 version)
{
	P2ASSERTLINE(1187, param);
	GenGateParm* gateParam = static_cast<GenGateParm*>(param);
	gateParam->mLife       = stream.readFloat();
}

/*
 * --INFO--
 * Address:	801CA2B4
 * Size:	0000B8
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

/*
 * --INFO--
 * Address:	801CA36C
 * Size:	000014
 */
char* ItemDengekiGate::Mgr::getCaveName(int outsideCave)
{
	if (outsideCave == 0) {
		return "e-gate";
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	801CA380
 * Size:	00004C
 */
int ItemDengekiGate::Mgr::getCaveID(char* cave)
{
	return -(strncmp("e-gate", cave, strlen("e-gate")) != 0);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r3, r2, lbl_80519600@sda21
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	bl       strlen
	mr       r5, r3
	mr       r4, r31
	addi     r3, r2, lbl_80519600@sda21
	bl       strncmp
	neg      r0, r3
	or       r0, r0, r3
	srawi    r3, r0, 0x1f
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801CA3CC
 * Size:	000134
 */
#pragma dont_inline reset
ItemDengekiGate::Mgr::~Mgr() { }

/*
 * --INFO--
 * Address:	801CA500
 * Size:	00000C
 */
u32 ItemDengekiGate::Mgr::generatorGetID() { return 'dgat'; }

/*
 * --INFO--
 * Address:	801CA50C
 * Size:	00000C
 */
u32 ItemDengekiGate::Mgr::generatorLocalVersion() { return '0000'; }

/*
 * --INFO--
 * Address:	801CA518
 * Size:	00000C
 */
u32 ItemGateMgr::generatorGetID() { return 'gate'; }

/*
 * --INFO--
 * Address:	801CA524
 * Size:	00000C
 */
u32 ItemGateMgr::generatorLocalVersion() { return '0002'; }

/*
 * --INFO--
 * Address:	801CA530
 * Size:	00002C
 */
void ItemGateMgr::doAnimation() { mNodeObjectMgr.doAnimation(); }

/*
 * --INFO--
 * Address:	801CA55C
 * Size:	00002C
 */
void ItemGateMgr::doEntry() { mNodeObjectMgr.doEntry(); }

/*
 * --INFO--
 * Address:	801CA588
 * Size:	00002C
 */
void ItemGateMgr::doSetView(int viewportNumber) { mNodeObjectMgr.doSetView(viewportNumber); }

/*
 * --INFO--
 * Address:	801CA5B4
 * Size:	00002C
 */
void ItemGateMgr::doViewCalc() { mNodeObjectMgr.doViewCalc(); }

/*
 * --INFO--
 * Address:	801CA5E0
 * Size:	00002C
 */
void ItemGateMgr::doSimulation(float val) { mNodeObjectMgr.doSimulation(val); }

/*
 * --INFO--
 * Address:	801CA60C
 * Size:	00002C
 */
void ItemGateMgr::doDirectDraw(Graphics& gfx) { mNodeObjectMgr.doDirectDraw(gfx); }

efx::TEgateA::~TEgateA() { }

/*
 * --INFO--
 * Address:	801CA6DC
 * Size:	000008
 */
char* ItemGate::getCreatureName() { return "Gate"; }

/*
 * --INFO--
 * Address:	801CA6E4
 * Size:	000008
 */
Mabiki* ItemGate::getMabiki() { return &mMabiki; }

/*
 * --INFO--
 * Address:	801CA6EC
 * Size:	000004
 */
void ItemGate::makeTrMatrix() { }

} // namespace Game
