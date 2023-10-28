#include "Game/Entities/PanModoki.h"
#include "Game/Entities/OoPanModoki.h"
#include "Game/Entities/Nest.h"
#include "Game/EnemyFunc.h"
#include "Game/generalEnemyMgr.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "Game/MapMgr.h"
#include "Game/routeMgr.h"
#include "Game/Stickers.h"
#include "Game/pathfinder.h"
#include "Dolphin/rand.h"
#include "efx/TPan.h"
#include "nans.h"

namespace Game {

/*
 * --INFO--
 * Address:	8034F5E0
 * Size:	000070
 */
bool InteractSuckFinish::actEnemy(Game::EnemyBase* enemy)
{
	switch (enemy->getEnemyTypeID()) {
	case EnemyTypeID::EnemyID_PanModoki:
	case EnemyTypeID::EnemyID_OoPanModoki:
		static_cast<PanModokiBase::Obj*>(enemy)->suckFinish();
		return true;
	default:
		return false;
	}
}

/*
 * --INFO--
 * Address:	8034F650
 * Size:	000068
 */
void PanModokiBase::Obj::setParameters()
{
	Game::EnemyBase::setParameters();
	Nest::Obj* nest = mNest;
	if (mNest) {
		nest->setScale(C_PROPERPARMS.mNestScale());
		mNest->mCollTree->mPart->setScale(C_PROPERPARMS.mNestScale());
	}
}

/*
 * --INFO--
 * Address:	8034F6B8
 * Size:	000120
 */
void PanModokiBase::Obj::birth(Vector3f& position, f32 faceDirection)
{
	EnemyMgrBase* mgr;
	EnemyBase::birth(position, faceDirection);
	mgr = generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_PanHouse);
	if (mgr) {
		EnemyBirthArg args;
		args.mPosition  = mPosition;
		args.mFaceDir   = getFaceDir();
		Nest::Obj* nest = static_cast<Nest::Obj*>(mgr->birth(args));
		P2ASSERTLINE(89, nest);
		if (nest) {
			nest->init(nullptr);
			mNest = nest;
			mNest->setHouseType(getEnemyTypeID());
			nest      = mNest;
			f32 scale = C_PROPERPARMS.mNestScale();
			nest->setScale(scale);
			mNest->mCollTree->mPart->setScale(scale);
		}
	}
}

/*
 * --INFO--
 * Address:	8034F7D8
 * Size:	0001DC
 */
void PanModokiBase::Obj::onInit(Game::CreatureInitArg* args)
{
	// SysShape::Joint* joint;
	EnemyBase::onInit(args);
	disableEvent(0, EB_Cullable);
	disableEvent(0, EB_DamageAnimEnabled);
	mNextWayPointPosition = mHomePosition;
	mCarryDir             = mFaceDir;
	setEmotionNone();
	_304 = 0;
	_308 = mHomePosition;
	_334 = mPosition.y;
	_314 = 0;
	_2E4 = 1;
	_2F0 = 0;
	_2F1 = 0;
	_318 = 0;
	_2E6 = 0;
	_2EA = 0;
	_2E8 = 0;
	_320 = Vector3f(0.0f);
	_31C = 0;

	mBodyJoint = mModel->getJoint("body");
	P2ASSERTLINE(137, mBodyJoint);

	mKamuJoint = mModel->getJoint("kamu");
	P2ASSERTLINE(140, mKamuJoint);

	_334 = mPosition.y; // ???
	mFsm->start(this, PANMODOKI_Appear, nullptr);
	P2ASSERTLINE(145, mEfxSmoke);
	mEfxSmoke->mPosition = &mPosition;
	mPelletCount         = 0;
	for (int i = 0; i < 15; i++) {
		mPelletArray[i] = nullptr;
	}
}

/*
 * --INFO--
 * Address:	8034F9B4
 * Size:	0002A0
 */
PanModokiBase::Obj::Obj()
    : mCarryDir(0.0f)
    , mBodyJoint(nullptr)
    , mKamuJoint(nullptr)
    , mEfxHide(nullptr)
    , mEfxSmoke(nullptr)
    , _32C(20.0f)
    , _330(15.0f)
    , _338(5.0f)
    , _33C(0.6f)
    , _340(1.0f)
    , mNest(nullptr)
    , mFsm(nullptr)
    , _384(nullptr)
    , mPelletCount(0)
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	mEfxHide  = new efx::TPanHide;
	mEfxSmoke = new efx::TPanSmoke(&mPosition);
}

/*
 * --INFO--
 * Address:	8034FC54
 * Size:	000034
 */
void PanModokiBase::Obj::doUpdate() { mFsm->exec(this); }

/*
 * --INFO--
 * Address:	8034FC88
 * Size:	0000B4
 */
void PanModokiBase::Obj::doAnimation()
{
	Matrixf matrix;
	EnemyBase::doAnimation();
	if (!isEvent(0, EB_Bittered)) {
		int stateID = getStateID();
		if ((stateID == PANMODOKI_Hide || stateID == PANMODOKI_CarryEnd) && mTargetCreature) {
			updateCaptureMatrix();
		}
		if (mPelletArray[0] && mNest) {
			mPelletArray[0]->startCapture(&mNest->mHouseTrMatrix);
			Vector3f scale = Vector3f(0.1f);
			matrix.makeST(scale, Vector3f::zero);
			mPelletArray[0]->updateCapture(matrix);
		}
	}
}

/*
 * --INFO--
 * Address:	8034FD3C
 * Size:	000318
 */
void PanModokiBase::Obj::doAnimationStick()
{
	Pellet* carryTarget = getCarryTarget();
	if (carryTarget && !mCaptureMatrix) {
		Vector3f yVec;
		carryTarget->getYVector(yVec);
		yVec.normalise();
		Vector3f faceVec = Vector3f(sin(mFaceDir), 0.0f, cos(mFaceDir));
		faceVec.normalise();
		Vector3f resVec;
		PSVECCrossProduct((Vec*)&yVec, (Vec*)&faceVec, (Vec*)&resVec);
		resVec.normalise();
		PSVECCrossProduct((Vec*)&resVec, (Vec*)&yVec, (Vec*)&faceVec);
		faceVec.normalise();

		mBaseTrMatrix.mMatrix.mtxView[0][0] = resVec.x;
		mBaseTrMatrix.mMatrix.mtxView[1][0] = resVec.y;
		mBaseTrMatrix.mMatrix.mtxView[2][0] = resVec.z;

		mBaseTrMatrix.mMatrix.mtxView[0][1] = yVec.x;
		mBaseTrMatrix.mMatrix.mtxView[1][1] = yVec.y;
		mBaseTrMatrix.mMatrix.mtxView[2][1] = yVec.z;

		mBaseTrMatrix.mMatrix.mtxView[0][2] = faceVec.x;
		mBaseTrMatrix.mMatrix.mtxView[1][2] = faceVec.y;
		mBaseTrMatrix.mMatrix.mtxView[2][2] = faceVec.z;

		mBaseTrMatrix.mMatrix.mtxView[0][3] = mPosition.x;
		mBaseTrMatrix.mMatrix.mtxView[1][3] = mPosition.y;
		mBaseTrMatrix.mMatrix.mtxView[2][3] = mPosition.z;
	} else {
		mBaseTrMatrix.makeSRT(mScale, mRotation, mPosition);
	}
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	mr       r31, r3
	bl       getCarryTarget__Q34Game13PanModokiBase3ObjFv
	cmplwi   r3, 0
	beq      lbl_80350024
	lwz      r0, 0xb8(r3)
	cmplwi   r0, 0
	bne      lbl_80350024
	addi     r4, r1, 0x20
	bl       "getYVector__Q24Game8CreatureFR10Vector3<f>"
	lfs      f2, 0x20(r1)
	lfs      f1, 0x24(r1)
	fmuls    f0, f2, f2
	lfs      f3, 0x28(r1)
	fmuls    f4, f1, f1
	lfs      f1, lbl_8051E490@sda21(r2)
	fmuls    f3, f3, f3
	fadds    f0, f0, f4
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8034FDC0
	fmadds   f0, f2, f2, f4
	fadds    f3, f3, f0
	fcmpo    cr0, f3, f1
	ble      lbl_8034FDC4
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8034FDC4

lbl_8034FDC0:
	fmr      f3, f1

lbl_8034FDC4:
	lfs      f0, lbl_8051E490@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8034FDFC
	lfs      f0, lbl_8051E4B4@sda21(r2)
	lfs      f2, 0x20(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)

lbl_8034FDFC:
	lfs      f1, 0x1fc(r31)
	bl       cos
	frsp     f31, f1
	lfs      f1, 0x1fc(r31)
	bl       sin
	frsp     f2, f1
	lfs      f1, lbl_8051E490@sda21(r2)
	fmuls    f4, f31, f31
	stfs     f31, 0x1c(r1)
	fmuls    f3, f1, f1
	fmuls    f0, f2, f2
	stfs     f2, 0x14(r1)
	fadds    f0, f0, f3
	stfs     f1, 0x18(r1)
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8034FE5C
	fmadds   f0, f2, f2, f3
	fadds    f3, f4, f0
	fcmpo    cr0, f3, f1
	ble      lbl_8034FE60
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8034FE60

lbl_8034FE5C:
	fmr      f3, f1

lbl_8034FE60:
	lfs      f0, lbl_8051E490@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8034FE98
	lfs      f0, lbl_8051E4B4@sda21(r2)
	lfs      f2, 0x14(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)

lbl_8034FE98:
	addi     r3, r1, 0x20
	addi     r4, r1, 0x14
	addi     r5, r1, 8
	bl       PSVECCrossProduct
	lfs      f2, 8(r1)
	lfs      f1, 0xc(r1)
	fmuls    f0, f2, f2
	lfs      f3, 0x10(r1)
	fmuls    f4, f1, f1
	lfs      f1, lbl_8051E490@sda21(r2)
	fmuls    f3, f3, f3
	fadds    f0, f0, f4
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8034FEF0
	fmadds   f0, f2, f2, f4
	fadds    f3, f3, f0
	fcmpo    cr0, f3, f1
	ble      lbl_8034FEF4
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8034FEF4

lbl_8034FEF0:
	fmr      f3, f1

lbl_8034FEF4:
	lfs      f0, lbl_8051E490@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8034FF2C
	lfs      f0, lbl_8051E4B4@sda21(r2)
	lfs      f2, 8(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)

lbl_8034FF2C:
	addi     r3, r1, 8
	addi     r4, r1, 0x20
	addi     r5, r1, 0x14
	bl       PSVECCrossProduct
	lfs      f2, 0x14(r1)
	lfs      f1, 0x18(r1)
	fmuls    f0, f2, f2
	lfs      f3, 0x1c(r1)
	fmuls    f4, f1, f1
	lfs      f1, lbl_8051E490@sda21(r2)
	fmuls    f3, f3, f3
	fadds    f0, f0, f4
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8034FF84
	fmadds   f0, f2, f2, f4
	fadds    f3, f3, f0
	fcmpo    cr0, f3, f1
	ble      lbl_8034FF88
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8034FF88

lbl_8034FF84:
	fmr      f3, f1

lbl_8034FF88:
	lfs      f0, lbl_8051E490@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8034FFC0
	lfs      f0, lbl_8051E4B4@sda21(r2)
	lfs      f2, 0x14(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)

lbl_8034FFC0:
	lfs      f0, 8(r1)
	stfs     f0, 0x138(r31)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x148(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x158(r31)
	lfs      f0, 0x20(r1)
	stfs     f0, 0x13c(r31)
	lfs      f0, 0x24(r1)
	stfs     f0, 0x14c(r31)
	lfs      f0, 0x28(r1)
	stfs     f0, 0x15c(r31)
	lfs      f0, 0x14(r1)
	stfs     f0, 0x140(r31)
	lfs      f0, 0x18(r1)
	stfs     f0, 0x150(r31)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x160(r31)
	lfs      f0, 0x18c(r31)
	stfs     f0, 0x144(r31)
	lfs      f0, 0x190(r31)
	stfs     f0, 0x154(r31)
	lfs      f0, 0x194(r31)
	stfs     f0, 0x164(r31)
	b        lbl_80350038

lbl_80350024:
	addi     r3, r31, 0x138
	addi     r4, r31, 0x168
	addi     r5, r31, 0x1a4
	addi     r6, r31, 0x18c
	bl       "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"

lbl_80350038:
	psq_l    f31, 72(r1), 0, qr0
	lwz      r0, 0x54(r1)
	lfd      f31, 0x40(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	80350054
 * Size:	00027C
 */
void PanModokiBase::Obj::updateCaptureMatrix()
{
	Pellet* pellet = getCarryTarget();
	f32 result     = 0.0f;

	if (gameSystem && gameSystem->isVersusMode() && pellet && !isStickTo()) {
		releaseCarryTarget();
	}

	if (pellet->getKind() == PELTYPE_CARCASS && !pellet->isAlive()) {
		releaseCarryTarget();
	}

	if (getCarryTarget()) {
		Matrixf* matrix = mKamuJoint->getWorldMatrix();

		Vector3f xVec;
		matrix->getBasis(0, xVec);
		Vector3f slotPos;
		calcSlotGlobalPos(slotPos);

		// okay this has to be a (pellet?) inline surely
		f32 dist2D = 0.0f;
		Vector2f diff(slotPos.x - pellet->getPosition().x, slotPos.z - pellet->getPosition().z);
		if (diff.sqrMagnitude() > 0.0f) {
			Vector2f diff2D(slotPos.x - pellet->getPosition().x, slotPos.z - pellet->getPosition().z);
			dist2D = diff2D.length();
		}

		f32 pelletZ = _32C * 0.2f + dist2D;
		matrix      = mKamuJoint->getWorldMatrix();
		PSMTXCopy(matrix->mMatrix.mtxView, _348.mMatrix.mtxView);
		_348.mMatrix.vecView.x[3] += (f32)(xVec.x * pelletZ);
		_348.mMatrix.vecView.y[3] += (f32)(xVec.y * pelletZ);
		_348.mMatrix.vecView.z[3] += (f32)(xVec.z * pelletZ);
		pellet->startCapture(&_348);
		Vector3f rot(0.0f, HALF_PI - _2E0, PI);

		Matrixf matTr;
		matTr.makeTR(Vector3f::zero, rot);
		pellet->updateCapture(matTr);
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
	stw      r31, 0x8c(r1)
	stw      r30, 0x88(r1)
	mr       r30, r3
	bl       getCarryTarget__Q34Game13PanModokiBase3ObjFv
	lwz      r4, gameSystem__4Game@sda21(r13)
	mr       r31, r3
	cmplwi   r4, 0
	beq      lbl_803500CC
	lwz      r0, 0x44(r4)
	cmpwi    r0, 1
	bne      lbl_803500CC
	cmplwi   r31, 0
	beq      lbl_803500CC
	mr       r3, r30
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_803500CC
	mr       r3, r30
	bl       releaseCarryTarget__Q34Game13PanModokiBase3ObjFv

lbl_803500CC:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 1
	bne      lbl_80350110
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80350110
	mr       r3, r30
	bl       releaseCarryTarget__Q34Game13PanModokiBase3ObjFv

lbl_80350110:
	mr       r3, r30
	bl       getCarryTarget__Q34Game13PanModokiBase3ObjFv
	cmplwi   r3, 0
	beq      lbl_80350298
	lwz      r3, 0x2d8(r30)
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f31, 0(r3)
	addi     r4, r1, 0x44
	lfs      f30, 0x10(r3)
	lfs      f29, 0x20(r3)
	mr       r3, r30
	bl       "calcSlotGlobalPos__Q34Game13PanModokiBase3ObjFR10Vector3<f>"
	mr       r4, r31
	addi     r3, r1, 0x20
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x2c
	lwz      r12, 0(r31)
	lfs      f28, 0x28(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x4c(r1)
	lfs      f2, 0x2c(r1)
	fsubs    f1, f0, f28
	lfs      f0, 0x44(r1)
	lfs      f3, lbl_8051E490@sda21(r2)
	fsubs    f2, f0, f2
	fmuls    f0, f1, f1
	fmadds   f0, f2, f2, f0
	fcmpo    cr0, f0, f3
	ble      lbl_80350200
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lfs      f28, 0x1c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x4c(r1)
	lfs      f3, 8(r1)
	fsubs    f2, f0, f28
	lfs      f1, 0x44(r1)
	lfs      f0, lbl_8051E490@sda21(r2)
	fsubs    f3, f1, f3
	fmuls    f1, f2, f2
	fmadds   f3, f3, f3, f1
	fcmpo    cr0, f3, f0
	ble      lbl_80350200
	frsqrte  f0, f3
	fmuls    f3, f0, f3

lbl_80350200:
	lfs      f1, lbl_8051E4BC@sda21(r2)
	lfs      f0, 0x32c(r30)
	lwz      r3, 0x2d8(r30)
	fmadds   f28, f1, f0, f3
	bl       getWorldMatrix__Q28SysShape5JointFv
	addi     r4, r30, 0x348
	bl       PSMTXCopy
	fmuls    f2, f31, f28
	lfs      f3, 0x354(r30)
	fmuls    f1, f30, f28
	mr       r3, r31
	fmuls    f0, f29, f28
	addi     r4, r30, 0x348
	fadds    f2, f3, f2
	stfs     f2, 0x354(r30)
	lfs      f2, 0x364(r30)
	fadds    f1, f2, f1
	stfs     f1, 0x364(r30)
	lfs      f1, 0x374(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x374(r30)
	bl       startCapture__Q24Game8CreatureFP7Matrixf
	lfs      f2, lbl_8051E4C0@sda21(r2)
	lis      r3, "zero__10Vector3<f>"@ha
	lfs      f0, 0x2e0(r30)
	addi     r4, r3, "zero__10Vector3<f>"@l
	lfs      f1, lbl_8051E490@sda21(r2)
	addi     r3, r1, 0x50
	fsubs    f2, f2, f0
	lfs      f0, lbl_8051E4C4@sda21(r2)
	stfs     f1, 0x38(r1)
	addi     r5, r1, 0x38
	stfs     f2, 0x3c(r1)
	stfs     f0, 0x40(r1)
	bl       "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
	mr       r3, r31
	addi     r4, r1, 0x50
	bl       updateCapture__Q24Game8CreatureFR7Matrixf

lbl_80350298:
	psq_l    f31, 200(r1), 0, qr0
	lfd      f31, 0xc0(r1)
	psq_l    f30, 184(r1), 0, qr0
	lfd      f30, 0xb0(r1)
	psq_l    f29, 168(r1), 0, qr0
	lfd      f29, 0xa0(r1)
	psq_l    f28, 152(r1), 0, qr0
	lfd      f28, 0x90(r1)
	lwz      r31, 0x8c(r1)
	lwz      r0, 0xd4(r1)
	lwz      r30, 0x88(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
}

/*
 * --INFO--
 * Address:	803502D0
 * Size:	000004
 */
void PanModokiBase::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	803502D4
 * Size:	000020
 */
void PanModokiBase::Obj::doDebugDraw(Graphics& graphics) { Game::EnemyBase::doDebugDraw(graphics); }

/*
 * --INFO--
 * Address:	803502F4
 * Size:	000030
 */
bool PanModokiBase::Obj::damageCallBack(Game::Creature* source, f32 damage, CollPart* part)
{
	if (isEvent(0, EB_Bittered)) {
		EnemyBase::damageCallBack(source, damage, part);
	}
	return false;
}

/*
 * --INFO--
 * Address:	80350324
 * Size:	0001BC
 */
bool PanModokiBase::Obj::pressCallBack(Game::Creature* creature, f32 damage, CollPart* part)
{
	if (isDead()) {
		return false;
	}
	if (creature && creature->isPiki()) {
		if (!isEvent(0, EB_Bittered)) {
			if (C_PARMS->_999 && isFinishMotion()) {
				return false;
			}

			switch (getStateID()) {
			case PANMODOKI_Walk:
			case PANMODOKI_Wait:
			case PANMODOKI_Stick:
				mCurrentVelocity = Vector3f(0.0f);
				mTargetVelocity  = Vector3f(0.0f);
				_2F1             = 0;
				if (C_PARMS->_999) {
					EnemyBase::finishMotion();
					mNextState = PANMODOKI_Damage;
				} else {
					mFsm->transit(this, PANMODOKI_Damage, nullptr);
				}
				return true;

			case PANMODOKI_Back:
			case PANMODOKI_Pulled:
				mCurrentVelocity = Vector3f(0.0f);
				mTargetVelocity  = Vector3f(0.0f);
				_2F1             = 0;
				if (C_PARMS->_999) {
					EnemyBase::finishMotion();
					mNextState = PANMODOKI_Damage;
				} else {
					mFsm->transit(this, PANMODOKI_Damage, nullptr);
				}
				return true;
			default:
				break;
			}
		}
		return false;
	}
	return false;
}

/*
 * --INFO--
 * Address:	803504E0
 * Size:	00002C
 */
bool PanModokiBase::Obj::hipdropCallBack(Game::Creature* source, f32 damage, CollPart* part) { pressCallBack(source, damage, part); }

/*
 * --INFO--
 * Address:	8035050C
 * Size:	0000AC
 */
void PanModokiBase::Obj::collisionCallback(Game::CollEvent& event)
{
	Creature* source;
	source = event.mCollidingCreature;
	if (source && source->isTeki()
	    && static_cast<EnemyBase*>(event.mCollidingCreature)->getEnemyTypeID() == EnemyTypeID::EnemyID_PanHouse) {
		mAcceleration = Vector3f(0.0f);
	}
	if (isEvent(0, EB_Bittered)) {
		mAcceleration = Vector3f(0.0f);
	}
	EnemyBase::collisionCallback(event);
}

/*
 * --INFO--
 * Address:	803505B8
 * Size:	000044
 */
void PanModokiBase::Obj::outWaterCallback()
{
	EnemyBase::outWaterCallback();
	if (getStateID() == PANMODOKI_Pulled) {
		createPulledSmokeEffect();
	}
}

/*
 * --INFO--
 * Address:	803505FC
 * Size:	000034
 */
void PanModokiBase::Obj::inWaterCallback(Game::WaterBox* waterbox)
{
	EnemyBase::inWaterCallback(waterbox);
	fadePulledSmokeEffect();
}

/*
 * --INFO--
 * Address:	80350630
 * Size:	000054
 */
void PanModokiBase::Obj::bounceCallback(Sys::Triangle* triangle)
{
	if (getStateID() == PANMODOKI_Sucked) {
		mFsm->transit(this, PANMODOKI_Damage, nullptr);
	}
}

/*
 * --INFO--
 * Address:	80350684
 * Size:	000050
 */
void PanModokiBase::Obj::damageRumble()
{
	cameraMgr->startVibration(3, mPosition, 2);
	rumbleMgr->startRumble(11, mPosition, 2);
}

/*
 * --INFO--
 * Address:	803506D4
 * Size:	00021C
 */
void PanModokiBase::Obj::doSimulation(f32 simspeed)
{
	if (isStickTo()) {
		mAcceleration = Vector3f(0.0f);
	}
	_304 -= 1;
	if (_304 < 0) {
		_304 = 0;
	}
	EnemyBase::doSimulation(simspeed);
	EnemyBase::getStateID();
	if (EnemyBase::isCullingOff() && isStickTo()) {
		bool result;
		if (isEvent(0, EB_Constrained) || isEvent(0, EB_HardConstrained)) {
			result = true;
		}
		if (!result && getCarryTarget()) {
			Vector3f slotPos;
			calcSlotGlobalPos(slotPos);
			Vector3f vector;
			vector.x  = -(pikmin2_sinf(mFaceDir) * _32C - slotPos.x);
			vector.z  = -(pikmin2_cosf(mFaceDir) * _32C - slotPos.z);
			vector.y  = slotPos.y + 20.0f;
			slotPos.x = vector.x;
			slotPos.z = vector.z;
			f32 minY  = mapMgr->getMinY(vector);
			_334      = minY;
			f32 realY = slotPos.y - static_cast<Parms*>(mParms)->_99C;
			if (minY < realY) {
				minY = realY;
			}
			if (slotPos.y < _334) {
				minY = (slotPos.y + _334) * 0.5f;
			}
			_334        = minY;
			mPosition.x = slotPos.x;
			mPosition.y = minY;
			mPosition.z = slotPos.z;
		}
	}
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	mr       r31, r3
	fmr      f31, f1
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80350710
	lfs      f0, lbl_8051E490@sda21(r2)
	stfs     f0, 0x11c(r31)
	stfs     f0, 0x120(r31)
	stfs     f0, 0x124(r31)

lbl_80350710:
	lwz      r3, 0x304(r31)
	addi     r0, r3, -1
	stw      r0, 0x304(r31)
	lwz      r0, 0x304(r31)
	cmpwi    r0, 0
	bge      lbl_80350730
	li       r0, 0
	stw      r0, 0x304(r31)

lbl_80350730:
	fmr      f1, f31
	mr       r3, r31
	bl       doSimulation__Q24Game9EnemyBaseFf
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       isCullingOff__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803508D4
	mr       r3, r31
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803508D4
	lwz      r4, 0x1e0(r31)
	li       r3, 0
	rlwinm.  r0, r4, 0, 0x15, 0x15
	bne      lbl_8035077C
	rlwinm.  r0, r4, 0, 0xd, 0xd
	beq      lbl_80350780

lbl_8035077C:
	li       r3, 1

lbl_80350780:
	clrlwi.  r0, r3, 0x18
	bne      lbl_803508D4
	mr       r3, r31
	bl       getCarryTarget__Q34Game13PanModokiBase3ObjFv
	cmplwi   r3, 0
	beq      lbl_803508D4
	mr       r3, r31
	addi     r4, r1, 0x14
	bl       "calcSlotGlobalPos__Q34Game13PanModokiBase3ObjFR10Vector3<f>"
	lfs      f3, 0x1fc(r31)
	lfs      f0, lbl_8051E490@sda21(r2)
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_803507BC
	fneg     f1, f3

lbl_803507BC:
	lfs      f2, lbl_8051E4C8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051E490@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f4, 4(r3)
	bge      lbl_80350814
	lfs      f0, lbl_8051E4CC@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f3, f0
	b        lbl_8035082C

lbl_80350814:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f3, r4, r0

lbl_8035082C:
	lfs      f2, 0x32c(r31)
	addi     r4, r1, 8
	lfs      f1, 0x14(r1)
	lfs      f0, 0x1c(r1)
	fnmsubs  f3, f3, f2, f1
	lfs      f1, 0x18(r1)
	fnmsubs  f2, f4, f2, f0
	lfs      f0, lbl_8051E4A4@sda21(r2)
	stfs     f1, 0xc(r1)
	fadds    f0, f1, f0
	stfs     f3, 0x14(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f2, 0x1c(r1)
	stfs     f3, 8(r1)
	stfs     f2, 0x10(r1)
	stfs     f0, 0xc(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x334(r31)
	lwz      r3, 0xc0(r31)
	lfs      f2, 0x18(r1)
	lfs      f0, 0x99c(r3)
	fsubs    f0, f2, f0
	fcmpo    cr0, f1, f0
	bge      lbl_8035089C
	fmr      f1, f0

lbl_8035089C:
	lfs      f0, 0x334(r31)
	fcmpo    cr0, f2, f0
	bge      lbl_803508B4
	fadds    f0, f2, f0
	lfs      f1, lbl_8051E4D0@sda21(r2)
	fmuls    f1, f1, f0

lbl_803508B4:
	stfs     f1, 0x18(r1)
	stfs     f1, 0x334(r31)
	lfs      f0, 0x14(r1)
	stfs     f0, 0x18c(r31)
	lfs      f0, 0x18(r1)
	stfs     f0, 0x190(r31)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x194(r31)

lbl_803508D4:
	psq_l    f31, 72(r1), 0, qr0
	lwz      r0, 0x54(r1)
	lfd      f31, 0x40(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	803508F0
 * Size:	000088
 */
void PanModokiBase::Obj::getShadowParam(Game::ShadowParam& shadowParam)
{
	mBodyJoint->getWorldMatrix()->getTranslation(shadowParam.mPosition);
	shadowParam.mPosition.y               = 2.0f + mPosition.y;
	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	shadowParam.mBoundingSphere.mRadius   = 50.0f;
	shadowParam.mSize                     = _330;
}

/*
 * --INFO--
 * Address:	80350978
 * Size:	000058
 */
bool PanModokiBase::Obj::needShadow()
{
	bool result;
	if (!EnemyBase::needShadow()) {
		result = false;
	} else {
		result = false;
		if (!isEvent(0, EB_Constrained) && !isEvent(0, EB_HardConstrained)) {
			result = true;
		}
	}
	return result;
}

/*
 * --INFO--
 * Address:	803509D0
 * Size:	000028
 */
void PanModokiBase::Obj::startCarcassMotion() { EnemyBase::startMotion(PANMODOKIANIM_Carry, nullptr); }

/*
 * --INFO--
 * Address:	803509F8
 * Size:	00008C
 */
void PanModokiBase::Obj::initMouthSlots()
{
	MouthCollPart* mouthCollPart;
	mMouthSlots.alloc(1);
	mMouthSlots.setup(0, mModel, "kamu");
	for (int i = 0; i < mMouthSlots.mMax; i++) {
		mouthCollPart          = mMouthSlots.getSlot(i);
		mouthCollPart->mRadius = 30.0f;
	}
}

/*
 * --INFO--
 * Address:	80350A84
 * Size:	000044
 */
void PanModokiBase::Obj::onKill(Game::CreatureKillArg* settings)
{
	EnemyBase::onKill(settings);
	throwUpEatItem();
	releasePathFinder();
	killNest();
}

/*
 * --INFO--
 * Address:	80350AC8
 * Size:	000050
 */
void PanModokiBase::Obj::doStartMovie()
{
	mEfxHide->startDemoDrawOff();
	mEfxSmoke->startDemoDrawOff();
}

/*
 * --INFO--
 * Address:	80350B18
 * Size:	000050
 */
void PanModokiBase::Obj::doEndMovie()
{
	mEfxHide->endDemoDrawOn();
	mEfxSmoke->endDemoDrawOn();
}

/*
 * --INFO--
 * Address:	80350B68
 * Size:	000054
 */
void PanModokiBase::Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	mCollTree->getCollPart('body')->mSpecialID = 'st__';
	releaseCarryTarget();
}

/*
 * --INFO--
 * Address:	80350BBC
 * Size:	0000AC
 */
void PanModokiBase::Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	mCollTree->getCollPart('body')->mSpecialID = '____';
	EnemyFunc::flickStickPikmin(this, C_PARMS->mGeneral.mShakeChance.mValue, C_PARMS->mGeneral.mShakeKnockback.mValue,
	                            C_PARMS->mGeneral.mShakeDamage.mValue, -1000.0, nullptr);
	mFlickTimer = 0.0f;
	int stateID = getStateID();
	if (stateID == PANMODOKI_Pulled || stateID == PANMODOKI_Back) {
		mFsm->transit(this, PANMODOKI_Wait, nullptr);
	}
}

/*
 * --INFO--
 * Address:	80350C68
 * Size:	000064
 */
void PanModokiBase::Obj::initWalkSmokeEffect()
{
	mWalkSmokeMgr.alloc(2);
	mWalkSmokeMgr.setup(0, mModel, "asiL", 2.0f);
	mWalkSmokeMgr.setup(1, mModel, "asiR", 2.0f);
}

/*
 * --INFO--
 * Address:	80350CCC
 * Size:	000008
 */
WalkSmokeEffect::Mgr* PanModokiBase::Obj::getWalkSmokeEffectMgr() { return &mWalkSmokeMgr; }

/*
 * --INFO--
 * Address:	80350CD4
 * Size:	0004B4
 */
void PanModokiBase::Obj::findNextRoutePoint(bool cond)
{
	RouteMgr* routeMgr = mapMgr->mRouteMgr;
	_31C = 0;
	if (_304 > 0 && cond) {
		if (_2EA == _2E8 && _2E8 == _2E6) {
			mNextWayPointPosition = mHomePosition;
			return;
		}
		WPEdgeSearchArg args(mPosition);
		if (routeMgr->getNearestEdge(args)) {
			s16 something_2e8 = _2E8;
			s16 something_2ea = _2EA;
			if (!(args.mWp1->mFlags & 1)) {
				if(routeMgr->getWayPoint(args.mWp1->mIndex)->mNumFromLinks == 1 
					&& !(args.mWp1->mFlags & 1)) {
					_2EA = _2E8;
					_2E8 = args.mWp1->mIndex;
				} else {
					_2E8 = args.mWp2->mIndex;
					if (routeMgr->getWayPoint(args.mWp2->mIndex)->mNumFromLinks <= 1 
						|| !(args.mWp2->mFlags & 1)) {
						_2EA = _2E8;
					} else {
						_2EA = args.mWp2->mIndex;
					}
				}
			} else {
				_2E8 = args.mWp2->mIndex;
				if (routeMgr->getWayPoint(args.mWp1->mIndex)->mNumFromLinks <= 1 
					|| !(args.mWp1->mFlags & 1)) {
					_2EA = _2E8;
				} else {
					_2EA = args.mWp2->mIndex;
				}
			}
			if (_2E8 == something_2e8 && _2EA == something_2ea) {
				mNextWayPointPosition = mPosition;
				mNextWayPointPosition.x = -(pikmin2_sinf(mFaceDir) * 100.0f - mNextWayPointPosition.x);
				mNextWayPointPosition.z = -(pikmin2_cosf(mFaceDir) * 100.0f - mNextWayPointPosition.z);
				return;
			}
		}
	}
	//P2ASSERTLINE(993, false); This should be somewhere around here
	if (routeMgr->getWayPoint(_2E8)) {
		u32 iterator = 0;
		WayPointIterator iteratorWP(routeMgr->getWayPoint(_2E8), true);
		iteratorWP.first();
		s16 array[8];
		s16* arrPoint = array;
		while (!iteratorWP.isDone()) {
			s16 something = iteratorWP.operator*();
			if (routeMgr->getWayPoint(something) && !(routeMgr->getWayPoint(something)->mFlags & 1)
				&& routeMgr->getWayPoint(something)->mNumToLinks + routeMgr->getWayPoint(something)->mNumFromLinks > 1) {
				*arrPoint = something;
				arrPoint++;
				iterator++;
			}
			iteratorWP.next();
		}
		if (iterator) {
			s16 randVal = randFloat();
			if (iterator <= randVal) {
				randVal = iterator - 1;
			}
			routeMgr->getWayPoint(array[randVal]);
			if (iterator == 1 || array[randVal] != _2EA) {
				_2EA = _2E8;
				_2E8 = array[randVal];
			}
		}
		if (routeMgr->getWayPoint(_2E8)) {
			mNextWayPointPosition = mPosition;
		}
		return;
	}
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	li       r0, 0
	stmw     r27, 0x6c(r1)
	mr       r28, r3
	lwz      r5, mapMgr__4Game@sda21(r13)
	lwz      r31, 8(r5)
	stb      r0, 0x31c(r3)
	lwz      r0, 0x304(r3)
	cmpwi    r0, 0
	ble      lbl_80350FC4
	clrlwi.  r0, r4, 0x18
	beq      lbl_80350FC4
	lha      r0, 0x2ea(r28)
	lha      r3, 0x2e8(r28)
	cmpw     r0, r3
	bne      lbl_80350D44
	lha      r0, 0x2e6(r28)
	cmpw     r3, r0
	bne      lbl_80350D44
	lfs      f0, 0x198(r28)
	stfs     f0, 0x2bc(r28)
	lfs      f0, 0x19c(r28)
	stfs     f0, 0x2c0(r28)
	lfs      f0, 0x1a0(r28)
	stfs     f0, 0x2c4(r28)
	b        lbl_80351174

lbl_80350D44:
	li       r5, 0
	li       r0, -1
	stw      r5, 0x40(r1)
	mr       r3, r31
	addi     r4, r1, 0x24
	stw      r5, 0x3c(r1)
	stb      r5, 0x30(r1)
	sth      r0, 0x38(r1)
	stw      r5, 0x34(r1)
	lfs      f0, 0x18c(r28)
	stfs     f0, 0x24(r1)
	lfs      f0, 0x190(r28)
	stfs     f0, 0x28(r1)
	lfs      f0, 0x194(r28)
	stfs     f0, 0x2c(r1)
	bl       getNearestEdge__Q24Game8RouteMgrFRQ24Game15WPEdgeSearchArg
	clrlwi.  r0, r3, 0x18
	beq      lbl_80350FC4
	lwz      r4, 0x3c(r1)
	lha      r30, 0x2e8(r28)
	lbz      r0, 0x34(r4)
	lha      r29, 0x2ea(r28)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_80350E4C
	mr       r3, r31
	lha      r4, 0x36(r4)
	lwz      r12, 0(r31)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lha      r0, 0x38(r3)
	cmpwi    r0, 1
	bne      lbl_80350DF0
	lwz      r3, 0x40(r1)
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_80350DF0
	lha      r0, 0x2e8(r28)
	sth      r0, 0x2ea(r28)
	lwz      r3, 0x40(r1)
	lha      r0, 0x36(r3)
	sth      r0, 0x2e8(r28)
	b        lbl_80350EA4

lbl_80350DF0:
	lwz      r4, 0x3c(r1)
	mr       r3, r31
	lha      r0, 0x36(r4)
	sth      r0, 0x2e8(r28)
	lwz      r12, 0(r31)
	lwz      r4, 0x40(r1)
	lwz      r12, 0x2c(r12)
	lha      r4, 0x36(r4)
	mtctr    r12
	bctrl
	lha      r0, 0x38(r3)
	cmpwi    r0, 1
	ble      lbl_80350E40
	lwz      r3, 0x40(r1)
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_80350E40
	lha      r0, 0x36(r3)
	sth      r0, 0x2ea(r28)
	b        lbl_80350EA4

lbl_80350E40:
	lha      r0, 0x2e8(r28)
	sth      r0, 0x2ea(r28)
	b        lbl_80350EA4

lbl_80350E4C:
	lwz      r4, 0x40(r1)
	mr       r3, r31
	lha      r0, 0x36(r4)
	sth      r0, 0x2e8(r28)
	lwz      r12, 0(r31)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0x2c(r12)
	lha      r4, 0x36(r4)
	mtctr    r12
	bctrl
	lha      r0, 0x38(r3)
	cmpwi    r0, 1
	ble      lbl_80350E9C
	lwz      r3, 0x3c(r1)
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_80350E9C
	lha      r0, 0x36(r3)
	sth      r0, 0x2ea(r28)
	b        lbl_80350EA4

lbl_80350E9C:
	lha      r0, 0x2e8(r28)
	sth      r0, 0x2ea(r28)

lbl_80350EA4:
	lha      r4, 0x2e8(r28)
	cmpw     r4, r30
	bne      lbl_80350F94
	lha      r0, 0x2ea(r28)
	cmpw     r0, r29
	bne      lbl_80350F94
	lfs      f1, 0x18c(r28)
	lfs      f0, lbl_8051E490@sda21(r2)
	stfs     f1, 0x2bc(r28)
	lfs      f3, lbl_8051E4F4@sda21(r2)
	lfs      f1, 0x190(r28)
	stfs     f1, 0x2c0(r28)
	lfs      f1, 0x194(r28)
	stfs     f1, 0x2c4(r28)
	lfs      f1, 0x1fc(r28)
	fcmpo    cr0, f1, f0
	bge      lbl_80350F14
	lfs      f0, lbl_8051E4CC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x48(r1)
	lwz      r0, 0x4c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_80350F38

lbl_80350F14:
	lfs      f0, lbl_8051E4C8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x50(r1)
	lwz      r0, 0x54(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_80350F38:
	lfs      f1, 0x2bc(r28)
	lfs      f0, lbl_8051E490@sda21(r2)
	fnmsubs  f1, f3, f2, f1
	stfs     f1, 0x2bc(r28)
	lfs      f1, 0x1fc(r28)
	fcmpo    cr0, f1, f0
	bge      lbl_80350F58
	fneg     f1, f1

lbl_80350F58:
	lfs      f0, lbl_8051E4C8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f2, lbl_8051E4F4@sda21(r2)
	fmuls    f1, f1, f0
	lfs      f0, 0x2c4(r28)
	fctiwz   f1, f1
	stfd     f1, 0x58(r1)
	lwz      r0, 0x5c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f1, 4(r3)
	fnmsubs  f0, f2, f1, f0
	stfs     f0, 0x2c4(r28)
	b        lbl_80351174

lbl_80350F94:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x50(r3)
	lfs      f2, 0x54(r3)
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x2bc(r28)
	stfs     f1, 0x2c0(r28)
	stfs     f2, 0x2c4(r28)
	b        lbl_80351174

lbl_80350FC4:
	mr       r3, r31
	lha      r4, 0x2e8(r28)
	lwz      r12, 0(r31)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	or.      r29, r3, r3
	bne      lbl_80351000
	lis      r3, lbl_80490EF8@ha
	lis      r5, lbl_80490F08@ha
	addi     r3, r3, lbl_80490EF8@l
	li       r4, 0x3e1
	addi     r5, r5, lbl_80490F08@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80351000:
	mr       r4, r29
	addi     r3, r1, 8
	li       r30, 0
	li       r5, 1
	bl       __ct__Q24Game16WayPointIteratorFPQ24Game8WayPointb
	addi     r3, r1, 8
	bl       first__Q24Game16WayPointIteratorFv
	addi     r29, r1, 0x14
	b        lbl_80351088

lbl_80351024:
	addi     r3, r1, 8
	bl       __ml__Q24Game16WayPointIteratorFv
	mr       r0, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	mr       r27, r0
	mr       r4, r27
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_80351080
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_80351080
	lha      r4, 0x5c(r3)
	lha      r0, 0x38(r3)
	add      r0, r4, r0
	cmpwi    r0, 1
	ble      lbl_80351080
	sth      r27, 0(r29)
	addi     r29, r29, 2
	addi     r30, r30, 1

lbl_80351080:
	addi     r3, r1, 8
	bl       next__Q24Game16WayPointIteratorFv

lbl_80351088:
	addi     r3, r1, 8
	bl       isDone__Q24Game16WayPointIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80351024
	cmpwi    r30, 0
	beq      lbl_8035113C
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x5c(r1)
	xoris    r0, r30, 0x8000
	lfd      f2, lbl_8051E500@sda21(r2)
	stw      r4, 0x58(r1)
	lfs      f0, lbl_8051E4F8@sda21(r2)
	lfd      f1, 0x58(r1)
	stw      r0, 0x54(r1)
	fsubs    f1, f1, f2
	stw      r4, 0x50(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x50(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x48(r1)
	lwz      r0, 0x4c(r1)
	cmpw     r0, r30
	blt      lbl_803510F8
	addi     r0, r30, -1

lbl_803510F8:
	mr       r3, r31
	slwi     r0, r0, 1
	lwz      r12, 0(r31)
	addi     r4, r1, 0x14
	lhax     r27, r4, r0
	lwz      r12, 0x2c(r12)
	mr       r4, r27
	mtctr    r12
	bctrl
	cmpwi    r30, 1
	beq      lbl_80351130
	lha      r0, 0x2ea(r28)
	cmpw     r27, r0
	beq      lbl_8035113C

lbl_80351130:
	lha      r0, 0x2e8(r28)
	sth      r0, 0x2ea(r28)
	sth      r27, 0x2e8(r28)

lbl_8035113C:
	mr       r3, r31
	lha      r4, 0x2e8(r28)
	lwz      r12, 0(r31)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_80351174
	lfs      f1, 0x50(r3)
	lfs      f2, 0x54(r3)
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x2bc(r28)
	stfs     f1, 0x2c0(r28)
	stfs     f2, 0x2c4(r28)

lbl_80351174:
	lmw      r27, 0x6c(r1)
	lwz      r0, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	80351188
 * Size:	000274
 */
bool PanModokiBase::Obj::isCarryToGoal()
{
	bool result;
	if (!_2F0) {
		result = false;
	} else {
		f32 homeRadius = static_cast<Parms*>(mParms)->mGeneral.mHomeRadius.mValue;
		if (100 < _318) {
			homeRadius = 60.0f;
		}
		f32 posZ     = mPosition.z;
		f32 posX     = mPosition.x;
		f32 posZDiff = posZ - mHomePosition.z;
		f32 posXDiff = posX - mHomePosition.x;
		if ((homeRadius * homeRadius) <= (posXDiff * posXDiff + posZDiff * posZDiff)) {
			releasePathFinder();
			result = true;
		} else {
			homeRadius = 30.0f;
			posZDiff   = 50.0f;
			if (100 < _318) {
				homeRadius = 60.0f;
				posZDiff   = 75.0f;
			}
			f32 radius2   = homeRadius * homeRadius;
			f32 posZDiff2 = posZDiff * posZDiff;
			posZ -= mNextWayPointPosition.z;
			posX -= mNextWayPointPosition.x;
			f32 cross          = (posX * posX + posZ * posZ);
			Creature* creature = getCarryTarget();
			f32 something      = -1.0f;
			if (creature) {
				something             = mNextWayPointPosition.z;
				f32 waypointX         = mNextWayPointPosition.x;
				Vector3f creaturePos  = creature->getPosition();
				f32 creaturePosZ      = creaturePos.z;
				Vector3f creaturePos2 = creature->getPosition();
				something
				    = (creaturePos2.x - waypointX) * (creaturePos2.x - waypointX) + (creaturePosZ - something) * (creaturePosZ - something);
			}
			if ((cross < radius2) || (0.0f > something && (something < posZDiff2))) {
				_318           = 0;
				s16 something2 = _2E8;
				if (something2 == _2E6) {
					mNextWayPointPosition = mHomePosition;
					if (something < posZDiff2) {
						return true;
					}
				} else {
					for (PathNode* path = _384; path != nullptr; path = path->mNext) {
						if (path->mWpIndex == something2) {
							_2EA = something2;
							if (path->mNext != nullptr) {
								_2E8 = _2E6;
							} else {
								_2E8 = path->mNext->mWpIndex;
							}
							WayPoint* currWP      = mapMgr->mRouteMgr->getWayPoint(path->mWpIndex);
							result                = false;
							mNextWayPointPosition = currWP->mPosition;
							break;
						}
					}
				}
			}
		}
	}
	return result;
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
	stfd     f27, 0x40(r1)
	psq_st   f27, 72(r1), 0, qr0
	stfd     f26, 0x30(r1)
	psq_st   f26, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r30, r3
	lbz      r0, 0x2f0(r3)
	cmplwi   r0, 0
	bne      lbl_803511E4
	li       r3, 0
	b        lbl_803513B4

lbl_803511E4:
	lwz      r0, 0x318(r30)
	lwz      r3, 0xc0(r30)
	cmpwi    r0, 0x64
	lfs      f5, 0x384(r3)
	ble      lbl_803511FC
	lfs      f5, lbl_8051E508@sda21(r2)

lbl_803511FC:
	lfs      f4, 0x194(r30)
	fmuls    f5, f5, f5
	lfs      f0, 0x1a0(r30)
	lfs      f3, 0x18c(r30)
	fsubs    f1, f4, f0
	lfs      f0, 0x198(r30)
	fsubs    f2, f3, f0
	fmuls    f0, f1, f1
	fmadds   f0, f2, f2, f0
	fcmpo    cr0, f0, f5
	bge      lbl_80351238
	mr       r3, r30
	bl       releasePathFinder__Q34Game13PanModokiBase3ObjFv
	li       r3, 1
	b        lbl_803513B4

lbl_80351238:
	cmpwi    r0, 0x64
	lfs      f26, lbl_8051E4DC@sda21(r2)
	lfs      f31, lbl_8051E4D8@sda21(r2)
	ble      lbl_80351250
	lfs      f26, lbl_8051E508@sda21(r2)
	lfs      f31, lbl_8051E50C@sda21(r2)

lbl_80351250:
	lfs      f0, 0x2c4(r30)
	fmuls    f26, f26, f26
	lfs      f1, 0x2bc(r30)
	fmuls    f31, f31, f31
	fsubs    f0, f4, f0
	mr       r3, r30
	fsubs    f1, f3, f1
	fmuls    f0, f0, f0
	fmadds   f27, f1, f1, f0
	bl       getCarryTarget__Q34Game13PanModokiBase3ObjFv
	or.      r31, r3, r3
	lfs      f1, lbl_8051E510@sda21(r2)
	beq      lbl_803512D4
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lfs      f28, 0x2c4(r30)
	lwz      r12, 8(r12)
	lfs      f29, 0x2bc(r30)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lfs      f30, 0x10(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fsubs    f0, f30, f28
	lfs      f1, 0x14(r1)
	fsubs    f1, f1, f29
	fmuls    f0, f0, f0
	fmadds   f1, f1, f1, f0

lbl_803512D4:
	fcmpo    cr0, f27, f26
	blt      lbl_803512F0
	lfs      f0, lbl_8051E490@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_803513B0
	fcmpo    cr0, f1, f31
	bge      lbl_803513B0

lbl_803512F0:
	li       r0, 0
	stw      r0, 0x318(r30)
	lha      r3, 0x2e8(r30)
	lha      r0, 0x2e6(r30)
	cmpw     r3, r0
	bne      lbl_80351330
	lfs      f0, 0x198(r30)
	fcmpo    cr0, f1, f31
	stfs     f0, 0x2bc(r30)
	lfs      f0, 0x19c(r30)
	stfs     f0, 0x2c0(r30)
	lfs      f0, 0x1a0(r30)
	stfs     f0, 0x2c4(r30)
	bge      lbl_803513B0
	li       r3, 1
	b        lbl_803513B4

lbl_80351330:
	lwz      r4, 0x384(r30)
	b        lbl_803513A8

lbl_80351338:
	lha      r0, 0x20(r4)
	cmpw     r0, r3
	bne      lbl_803513A4
	sth      r3, 0x2ea(r30)
	lwz      r3, 0xc(r4)
	cmplwi   r3, 0
	beq      lbl_80351360
	lha      r0, 0x20(r3)
	sth      r0, 0x2e8(r30)
	b        lbl_80351368

lbl_80351360:
	lha      r0, 0x2e6(r30)
	sth      r0, 0x2e8(r30)

lbl_80351368:
	lwz      r3, mapMgr__4Game@sda21(r13)
	lha      r4, 0x2e8(r30)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x50(r3)
	lfs      f2, 0x54(r3)
	lfs      f0, 0x4c(r3)
	li       r3, 0
	stfs     f0, 0x2bc(r30)
	stfs     f1, 0x2c0(r30)
	stfs     f2, 0x2c4(r30)
	b        lbl_803513B4

lbl_803513A4:
	lwz      r4, 0xc(r4)

lbl_803513A8:
	cmplwi   r4, 0
	bne      lbl_80351338

lbl_803513B0:
	li       r3, 0

lbl_803513B4:
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	psq_l    f28, 88(r1), 0, qr0
	lfd      f28, 0x50(r1)
	psq_l    f27, 72(r1), 0, qr0
	lfd      f27, 0x40(r1)
	psq_l    f26, 56(r1), 0, qr0
	lfd      f26, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r0, 0x94(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	803513FC
 * Size:	0002CC
 */
void PanModokiBase::Obj::walkFunc()
{
	f32 moveSpeed = static_cast<Parms*>(mParms)->mGeneral.mMoveSpeed.mValue;
	f32 rotSpeed = static_cast<Parms*>(mParms)->mGeneral.mRotationalSpeed.mValue;
	f32 rotAccel = static_cast<Parms*>(mParms)->mGeneral.mRotationalAccel.mValue;
	f32 something = 100.0f;
	if (getEnemyTypeID() == EnemyTypeID::EnemyID_OoPanModoki) {
		something = 150.0f;
	}
	if (absF(mNextWayPointPosition.x - mPosition.x) < something && 
		absF(mNextWayPointPosition.z - mPosition.z) < something) {
		_318 += 1;
		if (100 < _318) {
			moveSpeed *= 0.5f;
		}
		if (200 < _318) {
			_318 = 0;
		}
	} else {
		_318 = 0;
	}
	if (!_304) {
		mTargetCreature = static_cast<Creature*>(findNearestPellet());
		if (mTargetCreature) {
			mNextWayPointPosition = mTargetCreature->getPosition();
		}
	} else {
		rotSpeed = static_cast<Parms*>(mParms)->mProperParms.mFp05.mValue;
		rotAccel = static_cast<Parms*>(mParms)->mProperParms.mFp02.mValue;
	}
	EnemyFunc::walkToTarget(this, mNextWayPointPosition, moveSpeed, rotAccel, rotSpeed);
	if (mBounceTriangle) {
		f32 collPos = mCollisionPosition.x;
		f32 ten = 10.0f;
		if (collPos > 0.1f) {
			_320.x = -ten;
		} else {
			if (collPos < -0.1f) {
				_320.x = ten;
			} else {
				_320.x *= 0.9f;
			}
		}
		mCurrentVelocity.x += _320.x;
		f32 collPosZ = mCollisionPosition.z;
		if (collPosZ > 0.1f) {
			_320.z = -ten;
		} else {
			if (collPosZ < -0.1f) {
				_320.z = ten;
			} else {
				_320.z *= 0.9f;
			}
		}
		mCurrentVelocity.z += _320.z;
	}
	if (!_304 && (_314 += 1, _314 > 0x3c)) {
		f32 posZCross = mPosition.z - _308.z;
		f32 posXCross = mPosition.x - _308.x;
		if (((posXCross * posXCross) + (posZCross * posZCross)) < 100.0f) {
			_304 = 0x78;
			mTargetCreature = nullptr;
			findNextRoutePoint(true);
		}
		_308 = mPosition;
		_314 = 0;
	}
}

/*
 * --INFO--
 * Address:	803516C8
 * Size:	000184
 */
bool PanModokiBase::Obj::isReachToGoal(f32 param1)
{
	f32 something;
	bool result;
	if (isDead()) {
		return false;
	} else {
		Creature* creature = mTargetCreature;
		if (creature) {
			something = param1 * 2.0f;
		} else {
			P2ASSERTLINE(1200, creature);
			something = param1 + static_cast<Pellet*>(creature)->mConfig->mParams.mRadius.mData;
		}
		f32 diffX = mPosition.z - mNextWayPointPosition.z;
		f32 diffY = mPosition.x - mNextWayPointPosition.x;
		if ((something * something) >= (diffY * diffY + diffX * diffX)) {
			return false;
		} else {
			if (getStateID() == PANMODOKI_Walk && mTargetCreature) {
				Vector3f targetPos  = creature->getPosition();
				Vector3f target2Pos = mTargetCreature->getPosition();
				f32 something2      = mPosition.z - targetPos.z;
				target2Pos.x        = mPosition.x - target2Pos.x;
				if ((target2Pos.x * target2Pos.x + something2 * something2) < (something * something)) {
					mFsm->transit(this, PANMODOKI_Stick, nullptr);
				}
			}
			result = true;
			_318   = 0;
		}
	}
	return result;
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stfd     f30, 0x30(r1)
	psq_st   f30, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r30, r3
	lfs      f0, lbl_8051E490@sda21(r2)
	lfs      f2, 0x200(r3)
	fmr      f30, f1
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_80351710
	li       r3, 0
	b        lbl_80351824

lbl_80351710:
	lwz      r31, 0x230(r30)
	cmplwi   r31, 0
	beq      lbl_8035174C
	bne      lbl_8035173C
	lis      r3, lbl_80490EF8@ha
	lis      r5, lbl_80490F08@ha
	addi     r3, r3, lbl_80490EF8@l
	li       r4, 0x4b0
	addi     r5, r5, lbl_80490F08@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8035173C:
	lwz      r3, 0x35c(r31)
	lfs      f0, 0xa0(r3)
	fadds    f30, f30, f0
	b        lbl_80351754

lbl_8035174C:
	lfs      f0, lbl_8051E4D4@sda21(r2)
	fmuls    f30, f30, f0

lbl_80351754:
	lfs      f1, 0x194(r30)
	fmuls    f30, f30, f30
	lfs      f0, 0x2c4(r30)
	lfs      f2, 0x18c(r30)
	fsubs    f1, f1, f0
	lfs      f0, 0x2bc(r30)
	fsubs    f2, f2, f0
	fmuls    f0, f1, f1
	fmadds   f0, f2, f2, f0
	fcmpo    cr0, f0, f30
	bge      lbl_80351820
	mr       r3, r30
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 1
	bne      lbl_80351810
	lwz      r4, 0x230(r30)
	cmplwi   r4, 0
	beq      lbl_80351810
	lwz      r12, 0(r4)
	addi     r3, r1, 8
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x230(r30)
	addi     r3, r1, 0x14
	lfs      f31, 0x10(r1)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x194(r30)
	lfs      f2, 0x14(r1)
	fsubs    f1, f0, f31
	lfs      f0, 0x18c(r30)
	fsubs    f2, f0, f2
	fmuls    f0, f1, f1
	fmadds   f0, f2, f2, f0
	fcmpo    cr0, f0, f30
	bge      lbl_80351810
	lwz      r3, 0x380(r30)
	mr       r4, r30
	li       r5, 8
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_80351810:
	li       r0, 0
	li       r3, 1
	stw      r0, 0x318(r30)
	b        lbl_80351824

lbl_80351820:
	li       r3, 0

lbl_80351824:
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r0, 0x54(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8035184C
 * Size:	000074
 */
bool PanModokiBase::Obj::canBack()
{
	bool result;
	Pellet* pellet = getCarryTarget();
	if (pellet == nullptr) {
		return false;
	} else {
		pellet = getCarryTarget(); // ???
		result = pellet->mPelletCarry->pullable(2, _37C);
		getEnemyTypeID(); // ???
	}
	return result;
}

/*
 * --INFO--
 * Address:	803518C0
 * Size:	000344
 */
Pellet* PanModokiBase::Obj::findNearestPellet()
{
	Pellet* resPellet = nullptr;
	f32 fp14 = CG_PROPERPARMS(this).mFp14.mValue;
	f32 fp15 = CG_PROPERPARMS(this).mFp15.mValue * 0.0055555557f * PI;
	f32 something = __float_max[0];
	if (0.0f <= fp14) {
		something = fp14 * fp14;
	}
	f32 something2 = something;
	PelletIterator iterator;
	CI_LOOP(iterator)
	{
		Pellet* pelt = *iterator;
		if (pelt->isPickable() && pelt->isAlive() && pelt->getKind() != PELTYPE_UPGRADE
			&& pelt->mCaptureMatrix == nullptr && isTargetable(pelt)
			&& viewGetCollTreeJointIndex()) { // Last cond should be viewGetCollTreeJointIndex(pelt->mConfig->mParams.mMin.mData, CG_PARMS(pelt)->mProperParms.mIp01.mValue)
				Vector3f pelPos = pelt->getPosition();
				f32 angle = roundAng(pikmin2_atan2f(pelPos.x - mPosition.x, pelPos.z - mPosition.z));
				angDist(getFaceDir(), angle);
				if (absF(angle) <= fp15) {
					s32 id = pelt->getCreatureID();
					if (pelt->getKind() == PELTYPE_CARCASS && (id == 0 || id == 1)) {
						if (strcmp("orima", pelt->getCreatureName())) {
							continue;
						}
						Vector3f pelPos2 = pelt->getPosition();
						f32 dist = sqrDistanceXZ(pelPos2, pelPos2);
						if (dist < something2) {
							resPellet = pelt;
							something2 = dist;
						}
					}
				}
			}
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
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	stw      r29, 0x64(r1)
	stw      r28, 0x60(r1)
	mr       r30, r3
	lfs      f1, lbl_8051E524@sda21(r2)
	lwz      r3, 0xc0(r3)
	li       r31, 0
	lfs      f2, lbl_8051E4C4@sda21(r2)
	lfs      f0, 0x49c(r3)
	lfs      f3, 0x44c(r3)
	fmuls    f1, f1, f0
	lfs      f0, lbl_8051E490@sda21(r2)
	fcmpo    cr0, f3, f0
	fmuls    f30, f2, f1
	bge      lbl_80351930
	lis      r3, __float_max@ha
	lfs      f3, __float_max@l(r3)
	b        lbl_80351934

lbl_80351930:
	fmuls    f3, f3, f3

lbl_80351934:
	fmr      f31, f3
	addi     r3, r1, 0x50
	bl       __ct__Q24Game14PelletIteratorFv
	addi     r3, r1, 0x50
	bl       first__Q24Game14PelletIteratorFv
	b        lbl_80351BB8

lbl_8035194C:
	addi     r3, r1, 0x50
	bl       __ml__Q24Game14PelletIteratorFv
	lwz      r12, 0(r3)
	mr       r28, r3
	lwz      r12, 0x1e4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80351BB0
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80351BB0
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 4
	beq      lbl_80351BB0
	lwz      r0, 0xb8(r28)
	cmplwi   r0, 0
	bne      lbl_80351BB0
	mr       r3, r30
	mr       r4, r28
	bl       isTargetable__Q34Game13PanModokiBase3ObjFPQ24Game6Pellet
	clrlwi.  r0, r3, 0x18
	beq      lbl_80351BB0
	mr       r3, r30
	lwz      r4, 0x35c(r28)
	lwz      r12, 0(r30)
	lwz      r5, 0xc0(r30)
	lwz      r12, 0x308(r12)
	lwz      r4, 0x120(r4)
	lwz      r5, 0x984(r5)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80351BB0
	mr       r4, r28
	addi     r3, r1, 0x44
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f29, 0x48(r1)
	mr       r3, r28
	bl       getCylinderHeight__Q24Game6PelletFv
	lfs      f0, lbl_8051E4D0@sda21(r2)
	lfs      f2, 0x190(r30)
	fnmsubs  f1, f0, f1, f29
	lfs      f0, lbl_8051E518@sda21(r2)
	fsubs    f1, f1, f2
	fabs     f1, f1
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	bgt      lbl_80351BB0
	mr       r4, r28
	addi     r3, r1, 0x20
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f2, 0x20(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x2c
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	lwz      r12, 8(r12)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x2c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x34(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 8(r1)
	lfs      f0, 0x10(r1)
	lfs      f4, 0x30(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x14(r1)
	stfs     f4, 0x18(r1)
	stfs     f3, 0x1c(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r30)
	fmr      f29, f1
	mr       r3, r30
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f29
	bl       angDist__Fff
	fabs     f0, f1
	frsp     f0, f0
	fcmpo    cr0, f0, f30
	cror     2, 0, 2
	bne      lbl_80351BB0
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x1ac(r12)
	mtctr    r12
	bctrl
	mr       r29, r3
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 1
	bne      lbl_80351B68
	cmpwi    r29, 0
	beq      lbl_80351B40
	cmpwi    r29, 1
	bne      lbl_80351B68

lbl_80351B40:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x1a8(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r2, lbl_8051E528@sda21
	bl       strcmp
	cmpwi    r3, 0
	beq      lbl_80351BB0

lbl_80351B68:
	mr       r4, r28
	addi     r3, r1, 0x38
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x194(r30)
	lfs      f0, 0x40(r1)
	lfs      f2, 0x18c(r30)
	fsubs    f1, f1, f0
	lfs      f0, 0x38(r1)
	fsubs    f2, f2, f0
	fmuls    f0, f1, f1
	fmadds   f0, f2, f2, f0
	fcmpo    cr0, f0, f31
	bge      lbl_80351BB0
	mr       r31, r28
	fmr      f31, f0

lbl_80351BB0:
	addi     r3, r1, 0x50
	bl       next__Q24Game14PelletIteratorFv

lbl_80351BB8:
	addi     r3, r1, 0x50
	bl       isDone__Q24Game14PelletIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8035194C
	mr       r3, r31
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	psq_l    f30, 136(r1), 0, qr0
	lfd      f30, 0x80(r1)
	psq_l    f29, 120(r1), 0, qr0
	lfd      f29, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	lwz      r29, 0x64(r1)
	lwz      r0, 0xa4(r1)
	lwz      r28, 0x60(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80351C04
 * Size:	000068
 */
Pellet* PanModokiBase::Obj::getCarryTarget()
{
	Creature* pellet = mTargetCreature;
	if (pellet == nullptr) {
		pellet = nullptr;
	} else {
		if (pellet->isTeki()) {
			pellet = static_cast<EnemyBase*>(mTargetCreature)->mPellet;
		} else {
			pellet = mTargetCreature;
		}
	}
	return static_cast<Pellet*>(pellet);
}

/*
 * --INFO--
 * Address:	80351C6C
 * Size:	0001E4
 */
void PanModokiBase::Obj::releaseCarryTarget()
{
	Creature* creature = getCarryTarget();
	if (creature) {
		if (getStateID() == PANMODOKI_Back) {
			Vector3f curVel = creature->getVelocity();
			Vector3f targetVel;
			targetVel.x = -curVel.x;
			targetVel.z = -curVel.z;
			targetVel.y = curVel.y;
			creature->setVelocity(targetVel);
		} else if (mCaptureMatrix) {
			creature->endCapture();
			Vector3f targetVel;
			targetVel.x = pikmin2_sinf(mFaceDir) * 50.0f;
			targetVel.z = pikmin2_cosf(mFaceDir) * 50.0f;
			targetVel.y = 100.0f;
			creature->setVelocity(targetVel);
		}
		endStick();
		static_cast<Pellet*>(creature)->mPelletCarry->giveup(2);
	}
	mTargetCreature = nullptr;
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	mr       r30, r3
	lwz      r3, 0x230(r3)
	cmplwi   r3, 0
	bne      lbl_80351C98
	li       r31, 0
	b        lbl_80351CC4

lbl_80351C98:
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80351CC0
	lwz      r3, 0x230(r30)
	lwz      r3, 0x17c(r3)
	lwz      r31, 4(r3)
	b        lbl_80351CC4

lbl_80351CC0:
	lwz      r31, 0x230(r30)

lbl_80351CC4:
	cmplwi   r31, 0
	beq      lbl_80351E30
	mr       r3, r30
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 2
	bne      lbl_80351D38
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	mr       r3, r31
	lfs      f2, 0x10(r1)
	addi     r4, r1, 0x20
	fneg     f1, f0
	stfs     f0, 0x20(r1)
	lfs      f3, 0xc(r1)
	fneg     f0, f2
	stfs     f2, 0x28(r1)
	stfs     f3, 0x24(r1)
	stfs     f1, 0x20(r1)
	stfs     f0, 0x28(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	b        lbl_80351E1C

lbl_80351D38:
	lwz      r0, 0xb8(r31)
	cmplwi   r0, 0
	beq      lbl_80351E1C
	mr       r3, r31
	bl       endCapture__Q24Game8CreatureFv
	lfs      f3, 0x1fc(r30)
	lfs      f0, lbl_8051E490@sda21(r2)
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_80351D64
	fneg     f1, f3

lbl_80351D64:
	lfs      f2, lbl_8051E4C8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051E490@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f5, 4(r3)
	bge      lbl_80351DBC
	lfs      f0, lbl_8051E4CC@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f4, f0
	b        lbl_80351DD4

lbl_80351DBC:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f4, r4, r0

lbl_80351DD4:
	frsp     f2, f4
	lfs      f1, lbl_8051E4D8@sda21(r2)
	lfs      f3, lbl_8051E490@sda21(r2)
	mr       r3, r31
	fmuls    f0, f5, f1
	stfs     f5, 0x1c(r1)
	fmuls    f2, f2, f1
	stfs     f4, 0x14(r1)
	lfs      f1, lbl_8051E4F4@sda21(r2)
	addi     r4, r1, 0x14
	stfs     f3, 0x18(r1)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl

lbl_80351E1C:
	mr       r3, r30
	bl       endStick__Q24Game8CreatureFv
	lwz      r3, 0x334(r31)
	li       r4, 2
	bl       giveup__Q24Game11PelletCarryFUs

lbl_80351E30:
	li       r0, 0
	stw      r0, 0x230(r30)
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	80351E50
 * Size:	000284
 */
void PanModokiBase::Obj::checkNearHomeGraphIndex()
{
	WPSearchArg searchArgs(mPosition, nullptr, 0, 10.0f);
	RouteMgr* route  = mapMgr->mRouteMgr;
	WayPoint* nearWP = route->getNearestWayPoint(searchArgs);
	JUT_ASSERTLINE(1369, nearWP, "P2Assert");
	s16 index = nearWP->mIndex;
	_2E6      = index;
	_2EA      = index;
	_2E8      = index;
	nearWP    = route->getWayPoint(_2E8);
	JUT_ASSERTLINE(1374, nearWP, "P2Assert");
	mNextWayPointPosition = nearWP->mPosition;
	WPEdgeSearchArg edgeSearchArgs(mPosition);
	if (route->getNearestEdge(edgeSearchArgs)) {
		index = edgeSearchArgs.mWp1->mIndex;
		if (edgeSearchArgs.mWp1->mFlags & 1) {
			index = edgeSearchArgs.mWp2->mIndex;
		}
		_2E6                  = index;
		_2EA                  = index;
		_2E8                  = index;
		nearWP                = route->getWayPoint(_2E8);
		mNextWayPointPosition = nearWP->mPosition;
	}
	Vector3f position = getPosition();
	f32 tangent       = pikmin2_atan2f((mNextWayPointPosition.x - position.x), (mNextWayPointPosition.z - position.z));
	f32 angle         = roundAng(tangent);
	f32 angleDist     = angDist(angle, getFaceDir());
	f32 tau;
	if (absF(angle * 1.0f) < TAU && (angle * 1.0f) <= 0.0f) {
		tau = -TAU;
	}
	angle                               = roundAng(tau + getFaceDir());
	mFaceDir                            = angle;
	mBaseTrMatrix.mMatrix.structView.xy = mFaceDir;
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	stw      r29, 0x64(r1)
	mr       r30, r3
	lfs      f0, lbl_8051E518@sda21(r2)
	lfs      f1, 0x18c(r3)
	li       r0, 0
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r1, 0x40
	stfs     f1, 0x40(r1)
	lfs      f1, 0x190(r30)
	stfs     f1, 0x44(r1)
	lfs      f1, 0x194(r30)
	stfs     f1, 0x48(r1)
	stw      r0, 0x4c(r1)
	stb      r0, 0x50(r1)
	stfs     f0, 0x54(r1)
	lwz      r31, 8(r3)
	mr       r3, r31
	bl       getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg
	or.      r29, r3, r3
	bne      lbl_80351ED8
	lis      r3, lbl_80490EF8@ha
	lis      r5, lbl_80490F08@ha
	addi     r3, r3, lbl_80490EF8@l
	li       r4, 0x559
	addi     r5, r5, lbl_80490F08@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80351ED8:
	lha      r0, 0x36(r29)
	mr       r3, r31
	sth      r0, 0x2e6(r30)
	sth      r0, 0x2ea(r30)
	sth      r0, 0x2e8(r30)
	lwz      r12, 0(r31)
	lha      r4, 0x2e8(r30)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	or.      r29, r3, r3
	bne      lbl_80351F24
	lis      r3, lbl_80490EF8@ha
	lis      r5, lbl_80490F08@ha
	addi     r3, r3, lbl_80490EF8@l
	li       r4, 0x55e
	addi     r5, r5, lbl_80490F08@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80351F24:
	lfs      f1, 0x50(r29)
	li       r5, 0
	lfs      f2, 0x54(r29)
	li       r0, -1
	lfs      f0, 0x4c(r29)
	mr       r3, r31
	addi     r4, r1, 0x20
	stfs     f0, 0x2bc(r30)
	stfs     f1, 0x2c0(r30)
	stfs     f2, 0x2c4(r30)
	stw      r5, 0x3c(r1)
	stw      r5, 0x38(r1)
	stb      r5, 0x2c(r1)
	sth      r0, 0x34(r1)
	stw      r5, 0x30(r1)
	lfs      f0, 0x18c(r30)
	stfs     f0, 0x20(r1)
	lfs      f0, 0x190(r30)
	stfs     f0, 0x24(r1)
	lfs      f0, 0x194(r30)
	stfs     f0, 0x28(r1)
	bl       getNearestEdge__Q24Game8RouteMgrFRQ24Game15WPEdgeSearchArg
	clrlwi.  r0, r3, 0x18
	beq      lbl_80351FE0
	lwz      r3, 0x38(r1)
	lbz      r0, 0x34(r3)
	lha      r3, 0x36(r3)
	clrlwi.  r0, r0, 0x1f
	mr       r0, r3
	beq      lbl_80351FA4
	lwz      r3, 0x3c(r1)
	lha      r0, 0x36(r3)

lbl_80351FA4:
	sth      r0, 0x2e6(r30)
	mr       r3, r31
	sth      r0, 0x2ea(r30)
	sth      r0, 0x2e8(r30)
	lwz      r12, 0(r31)
	lha      r4, 0x2e8(r30)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x50(r3)
	lfs      f2, 0x54(r3)
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x2bc(r30)
	stfs     f1, 0x2c0(r30)
	stfs     f2, 0x2c4(r30)

lbl_80351FE0:
	mr       r4, r30
	addi     r3, r1, 0x14
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f5, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x2bc(r30)
	lfs      f0, 0x2c4(r30)
	lfs      f4, 0x18(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 8(r1)
	stfs     f4, 0xc(r1)
	stfs     f3, 0x10(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r30)
	fmr      f31, f1
	mr       r3, r30
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f31
	bl       angDist__Fff
	lfs      f0, lbl_8051E4B4@sda21(r2)
	lfs      f2, lbl_8051E530@sda21(r2)
	fmuls    f31, f1, f0
	fabs     f0, f31
	frsp     f0, f0
	fcmpo    cr0, f0, f2
	ble      lbl_80352088
	lfs      f0, lbl_8051E490@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_80352084
	fmr      f31, f2
	b        lbl_80352088

lbl_80352084:
	fneg     f31, f2

lbl_80352088:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f31, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r30)
	lfs      f0, 0x1fc(r30)
	stfs     f0, 0x1a8(r30)
	psq_l    f31, 120(r1), 0, qr0
	lwz      r0, 0x84(r1)
	lfd      f31, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	lwz      r29, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
void PanModokiBase::Obj::clearCarryVelocity()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803520D4
 * Size:	000518
 */
void PanModokiBase::Obj::carryTarget(f32 param)
{
	f32 rotAccel = CG_PARMS(this)->mGeneral.mRotationalAccel.mValue;
	rotAccel *= 0.5;
	f32 fp03 = param * CG_PARMS(this)->mProperParms.mFp03.mValue;
	f32 rotSpeed = CG_PARMS(this)->mGeneral.mRotationalSpeed.mValue;
	Pellet* pelt = getCarryTarget();
	if (getStateID() == PANMODOKI_Pulled && pelt && pelt->getStateID() != 1) {
		mNextWayPointPosition = pelt->getPosition();
		mNextWayPointPosition.x = -(pelt->getVelocity().x * 10.0f - mNextWayPointPosition.x);
		mNextWayPointPosition.z = -(pelt->getVelocity().z * 10.0f - mNextWayPointPosition.z);
	}
	Vector3f wpPos = mNextWayPointPosition;
	if (sqrDistanceXZ(mPosition, mNextWayPointPosition) < 10000.0f) {
		rotAccel = CG_PARMS(this)->mProperParms.mFp02.mValue;
		rotSpeed = CG_PARMS(this)->mProperParms.mFp05.mValue;
	}
	if (pelt) {
		mFaceDir = mCarryDir;
		EnemyFunc::walkToTarget(this, wpPos, fp03, rotAccel, rotSpeed);
		mCarryDir = mFaceDir;
		Creature* target = mTargetCreature;
		rotAccel = mCurrentVelocity.x;
		fp03 = mCurrentVelocity.z;
		Pellet* newPelt = getCarryTarget();
		Vector3f peltVel = newPelt->getVelocity();
		Vector3f resultVec(peltVel.y + (0.0f - peltVel.y) * (sys->mFpsFactor / 0.15f) + 0.0f, rotAccel, fp03);
		if (CG_PARMS(this)->_99C && pelt) {
			if (!_31C && _314 > 0x5A) {
				if (100.0f <= sqrDistanceXZ(mPosition, _308)) {
					_314 = 0;
				} else {
					_31C = 1;
				}
				_308 = mPosition;
			}
			if (!_31C) {
				f32 collPos = mCollisionPosition.x;
				f32 ten = 10.0f;
				if (collPos > 0.1f) {
					_320.x = -ten;
				} else {
					if (collPos < -0.1f) {
						_320.x = ten;
					} else {
						_320.x *= 0.99f;
					}
				}
				f32 collPosZ = mCollisionPosition.z;
				if (collPosZ > 0.1f) {
					_320.z = -ten;
				} else {
					if (collPosZ < -0.1f) {
						_320.z = ten;
					} else {
						_320.z *= 0.99f;
					}
				}
			} else {
				_320.x = resultVec.x * 0.5f;
				_320.z = resultVec.z * 0.5f;
			}
			resultVec.x += _320.x;
			resultVec.z += _320.z;
		}
		pelt->mPelletCarry->pull(2, resultVec, _37C);
		Vector3f peltPos = pelt->getPosition();
		Vector3f thisPos = getPosition();
		f32 angle = roundAng(pikmin2_atan2f(peltPos.x - thisPos.x, peltPos.z - thisPos.z));
		f32 angleOld = angle;
		angDist(angle, getFaceDir());
		angle = roundAng(mFaceDir + angleOld);
		mFaceDir = angle;
		mRotation.x = mFaceDir;
		pelt->setPanModokiRotation(roundAng((mCarryDir + _2DC) - _2E0));
	}
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
	stw      r31, 0x8c(r1)
	stw      r30, 0x88(r1)
	mr       r30, r3
	lwz      r4, 0xc0(r3)
	lwz      r3, 0x230(r3)
	lfs      f0, 0x8bc(r4)
	cmplwi   r3, 0
	lfs      f30, 0x30c(r4)
	fmuls    f29, f1, f0
	lfs      f31, 0x334(r4)
	bne      lbl_8035212C
	li       r31, 0
	b        lbl_80352158

lbl_8035212C:
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80352154
	lwz      r3, 0x230(r30)
	lwz      r3, 0x17c(r3)
	lwz      r31, 4(r3)
	b        lbl_80352158

lbl_80352154:
	lwz      r31, 0x230(r30)

lbl_80352158:
	mr       r3, r30
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 3
	bne      lbl_80352210
	lfs      f0, lbl_8051E4D0@sda21(r2)
	cmplwi   r31, 0
	fmuls    f30, f30, f0
	beq      lbl_80352210
	mr       r3, r31
	bl       getStateID__Q24Game6PelletFv
	cmpwi    r3, 1
	beq      lbl_80352210
	mr       r4, r31
	addi     r3, r1, 0x5c
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x5c(r1)
	mr       r4, r31
	addi     r3, r1, 0x50
	stfs     f0, 0x2bc(r30)
	lfs      f0, 0x60(r1)
	stfs     f0, 0x2c0(r30)
	lfs      f0, 0x64(r1)
	stfs     f0, 0x2c4(r30)
	lwz      r12, 0(r31)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x50(r1)
	mr       r4, r31
	lfs      f1, lbl_8051E518@sda21(r2)
	addi     r3, r1, 0x44
	lfs      f0, 0x2bc(r30)
	fnmsubs  f0, f1, f2, f0
	stfs     f0, 0x2bc(r30)
	lwz      r12, 0(r31)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x4c(r1)
	lfs      f1, lbl_8051E518@sda21(r2)
	lfs      f0, 0x2c4(r30)
	fnmsubs  f0, f1, f2, f0
	stfs     f0, 0x2c4(r30)

lbl_80352210:
	lfs      f1, 0x2bc(r30)
	lfs      f0, lbl_8051E534@sda21(r2)
	stfs     f1, 0x74(r1)
	lfs      f1, 0x2c0(r30)
	stfs     f1, 0x78(r1)
	lfs      f1, 0x2c4(r30)
	stfs     f1, 0x7c(r1)
	lfs      f2, 0x194(r30)
	lfs      f1, 0x2c4(r30)
	lfs      f3, 0x18c(r30)
	fsubs    f2, f2, f1
	lfs      f1, 0x2bc(r30)
	fsubs    f3, f3, f1
	fmuls    f1, f2, f2
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80352260
	lwz      r3, 0xc0(r30)
	lfs      f30, 0x86c(r3)
	lfs      f31, 0x894(r3)

lbl_80352260:
	cmplwi   r31, 0
	beq      lbl_803525B8
	lfs      f0, 0x2c8(r30)
	fmr      f1, f29
	fmr      f2, f30
	mr       r3, r30
	fmr      f3, f31
	stfs     f0, 0x1fc(r30)
	addi     r4, r1, 0x74
	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff" lfs
f0, 0x1fc(r30) stfs     f0, 0x2c8(r30) lwz      r3, 0x230(r30) lfs      f31,
0x1d4(r30) cmplwi   r3, 0 lfs      f30, 0x1dc(r30) bne      lbl_803522AC li r4,
0 b        lbl_803522D8

lbl_803522AC:
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803522D4
	lwz      r3, 0x230(r30)
	lwz      r3, 0x17c(r3)
	lwz      r4, 4(r3)
	b        lbl_803522D8

lbl_803522D4:
	lwz      r4, 0x230(r30)

lbl_803522D8:
	lwz      r12, 0(r4)
	addi     r3, r1, 0x38
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lfs      f6, 0x38(r1)
	lfs      f5, 0x40(r1)
	lfs      f2, 0x3c(r1)
	fsubs    f3, f31, f6
	stfs     f6, 0x68(r1)
	fsubs    f8, f30, f5
	lwz      r3, sys@sda21(r13)
	stfs     f2, 0x6c(r1)
	lfs      f0, lbl_8051E538@sda21(r2)
	stfs     f5, 0x70(r1)
	lfs      f4, lbl_8051E490@sda21(r2)
	lfs      f1, 0x54(r3)
	fsubs    f7, f4, f2
	fdivs    f0, f1, f0
	fmuls    f1, f7, f0
	fmuls    f3, f3, f0
	fmuls    f0, f8, f0
	fadds    f2, f2, f1
	fadds    f3, f6, f3
	fadds    f1, f5, f0
	fadds    f0, f2, f4
	stfs     f2, 0x6c(r1)
	stfs     f3, 0x68(r1)
	stfs     f1, 0x70(r1)
	stfs     f0, 0x6c(r1)
	stfs     f31, 0x68(r1)
	stfs     f30, 0x70(r1)
	lwz      r3, 0xc0(r30)
	lbz      r0, 0x99a(r3)
	cmplwi   r0, 0
	beq      lbl_803524C8
	cmplwi   r31, 0
	beq      lbl_803524C8
	lbz      r0, 0x31c(r30)
	cmplwi   r0, 0
	bne      lbl_803523EC
	lwz      r3, 0x314(r30)
	addi     r0, r3, 1
	stw      r0, 0x314(r30)
	lwz      r0, 0x314(r30)
	cmpwi    r0, 0x5a
	ble      lbl_803523EC
	lfs      f1, 0x194(r30)
	lfs      f0, 0x310(r30)
	lfs      f2, 0x18c(r30)
	fsubs    f3, f1, f0
	lfs      f1, 0x308(r30)
	lfs      f0, lbl_8051E4F4@sda21(r2)
	fsubs    f2, f2, f1
	fmuls    f1, f3, f3
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_803523CC
	li       r0, 1
	stb      r0, 0x31c(r30)
	b        lbl_803523D4

lbl_803523CC:
	li       r0, 0
	stw      r0, 0x314(r30)

lbl_803523D4:
	lfs      f0, 0x18c(r30)
	stfs     f0, 0x308(r30)
	lfs      f0, 0x190(r30)
	stfs     f0, 0x30c(r30)
	lfs      f0, 0x194(r30)
	stfs     f0, 0x310(r30)

lbl_803523EC:
	lbz      r0, 0x31c(r30)
	cmplwi   r0, 0
	bne      lbl_8035248C
	lfs      f1, 0xcc(r30)
	lfs      f0, lbl_8051E4B8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80352418
	lfs      f0, lbl_8051E518@sda21(r2)
	fneg     f0, f0
	stfs     f0, 0x320(r30)
	b        lbl_80352440

lbl_80352418:
	lfs      f0, lbl_8051E51C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80352430
	lfs      f0, lbl_8051E518@sda21(r2)
	stfs     f0, 0x320(r30)
	b        lbl_80352440

lbl_80352430:
	lfs      f1, 0x320(r30)
	lfs      f0, lbl_8051E53C@sda21(r2)
	fmuls    f0, f1, f0
	stfs     f0, 0x320(r30)

lbl_80352440:
	lfs      f1, 0xd4(r30)
	lfs      f0, lbl_8051E4B8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80352460
	lfs      f0, lbl_8051E518@sda21(r2)
	fneg     f0, f0
	stfs     f0, 0x328(r30)
	b        lbl_803524A8

lbl_80352460:
	lfs      f0, lbl_8051E51C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80352478
	lfs      f0, lbl_8051E518@sda21(r2)
	stfs     f0, 0x328(r30)
	b        lbl_803524A8

lbl_80352478:
	lfs      f1, 0x328(r30)
	lfs      f0, lbl_8051E53C@sda21(r2)
	fmuls    f0, f1, f0
	stfs     f0, 0x328(r30)
	b        lbl_803524A8

lbl_8035248C:
	lfs      f0, 0x68(r1)
	lfs      f1, lbl_8051E4D0@sda21(r2)
	fmuls    f0, f0, f1
	stfs     f0, 0x320(r30)
	lfs      f0, 0x70(r1)
	fmuls    f0, f0, f1
	stfs     f0, 0x328(r30)

lbl_803524A8:
	lfs      f2, 0x68(r1)
	lfs      f0, 0x320(r30)
	lfs      f1, 0x70(r1)
	fadds    f0, f2, f0
	stfs     f0, 0x68(r1)
	lfs      f0, 0x328(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x70(r1)

lbl_803524C8:
	lwz      r3, 0x334(r31)
	addi     r5, r1, 0x68
	lfs      f1, 0x37c(r30)
	li       r4, 2
	bl       "pull__Q24Game11PelletCarryFUsR10Vector3<f>f"
	mr       r4, r31
	addi     r3, r1, 0x20
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f2, 0x20(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x2c
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	lwz      r12, 8(r12)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x2c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x34(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 8(r1)
	lfs      f0, 0x10(r1)
	lfs      f4, 0x30(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x14(r1)
	stfs     f4, 0x18(r1)
	stfs     f3, 0x1c(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r30)
	fmr      f29, f1
	mr       r3, r30
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f29
	bl       angDist__Fff
	lfs      f0, 0x1fc(r30)
	fadds    f1, f0, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r30)
	lfs      f0, 0x1fc(r30)
	stfs     f0, 0x1a8(r30)
	lfs      f2, 0x2c8(r30)
	lfs      f1, 0x2dc(r30)
	lfs      f0, 0x2e0(r30)
	fadds    f1, f2, f1
	fsubs    f1, f1, f0
	bl       roundAng__Ff
	mr       r3, r31
	bl       setPanModokiRotation__Q24Game6PelletFf

lbl_803525B8:
	li       r3, 0
	psq_l    f31, 184(r1), 0, qr0
	lfd      f31, 0xb0(r1)
	psq_l    f30, 168(r1), 0, qr0
	lfd      f30, 0xa0(r1)
	psq_l    f29, 152(r1), 0, qr0
	lfd      f29, 0x90(r1)
	lwz      r31, 0x8c(r1)
	lwz      r0, 0xc4(r1)
	lwz      r30, 0x88(r1)
	mtlr     r0
	addi     r1, r1, 0xc0
	blr
	*/
}

/*
 * --INFO--
 * Address:	803525EC
 * Size:	000050
 */
void PanModokiBase::Obj::changeCarryDir(bool direct)
{
	if (direct) {
		mCarryDir = mFaceDir;
	} else {
		mCarryDir = roundAng(mFaceDir + PI);
	}
}

/*
 * --INFO--
 * Address:	8035263C
 * Size:	0001B4
 */
void PanModokiBase::Obj::setCarryDir(bool direct)
{
	Creature* creature;
	Matrixf matrix;
	if (direct) {
		mCarryDir = mFaceDir;
	} else {
		mCarryDir = roundAng(mFaceDir + PI);
	}
	creature = getCarryTarget();
	if (creature) {
		Vector3f pos1 = creature->getPosition();
		Vector3f pos2 = creature->getPosition();
		Vector3f pos3 = mPosition;
		PSMTXInverse(creature->mBaseTrMatrix.mMatrix.mtxView, matrix.mMatrix.mtxView);
		Vector3f pos = matrix.mtxMult(pos3);
		_2E0         = atan2(pos.x, pos.z);
		_2DC         = 0.0f;
		if (direct) {
			_2DC = PI;
		}
		_37C = (static_cast<Pellet*>(creature)->getPelletConfigMax() + static_cast<Pellet*>(creature)->getPelletConfigMin()) * 0.5f;
	}
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stw      r31, 0x7c(r1)
	stw      r30, 0x78(r1)
	stw      r29, 0x74(r1)
	clrlwi.  r0, r4, 0x18
	mr       r31, r4
	mr       r29, r3
	beq      lbl_80352678
	lfs      f0, 0x1fc(r29)
	stfs     f0, 0x2c8(r29)
	b        lbl_8035268C

lbl_80352678:
	lfs      f1, lbl_8051E4C4@sda21(r2)
	lfs      f0, 0x1fc(r29)
	fadds    f1, f1, f0
	bl       roundAng__Ff
	stfs     f1, 0x2c8(r29)

lbl_8035268C:
	lwz      r3, 0x230(r29)
	cmplwi   r3, 0
	bne      lbl_803526A0
	li       r30, 0
	b        lbl_803526CC

lbl_803526A0:
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803526C8
	lwz      r3, 0x230(r29)
	lwz      r3, 0x17c(r3)
	lwz      r30, 4(r3)
	b        lbl_803526CC

lbl_803526C8:
	lwz      r30, 0x230(r29)

lbl_803526CC:
	cmplwi   r30, 0
	beq      lbl_803527CC
	mr       r4, r30
	addi     r3, r1, 0x14
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f1, 0x1c(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x20
	lfs      f0, 0x194(r29)
	lwz      r12, 8(r12)
	fsubs    f31, f0, f1
	mtctr    r12
	bctrl
	lfs      f1, 0x18c(r29)
	addi     r3, r30, 0x138
	lfs      f2, 0x20(r1)
	addi     r4, r1, 0x38
	lfs      f0, lbl_8051E490@sda21(r2)
	fsubs    f1, f1, f2
	stfs     f31, 0x34(r1)
	stfs     f0, 0x30(r1)
	stfs     f1, 0x2c(r1)
	lfs      f0, 0x18c(r29)
	stfs     f0, 0x2c(r1)
	lfs      f0, 0x190(r29)
	stfs     f0, 0x30(r1)
	lfs      f0, 0x194(r29)
	stfs     f0, 0x34(r1)
	bl       PSMTXInverse
	addi     r3, r1, 0x38
	addi     r4, r1, 0x2c
	addi     r5, r1, 8
	bl       PSMTXMultVec
	lfs      f1, 8(r1)
	lfs      f2, 0x10(r1)
	bl       atan2
	frsp     f1, f1
	lfs      f0, lbl_8051E490@sda21(r2)
	clrlwi.  r0, r31, 0x18
	stfs     f1, 0x2e0(r29)
	stfs     f0, 0x2dc(r29)
	beq      lbl_8035278C
	lfs      f0, lbl_8051E4C4@sda21(r2)
	stfs     f0, 0x2dc(r29)

lbl_8035278C:
	mr       r3, r30
	bl       getPelletConfigMax__Q24Game6PelletFv
	mr       r31, r3
	mr       r3, r30
	bl       getPelletConfigMin__Q24Game6PelletFv
	add      r3, r3, r31
	lis      r0, 0x4330
	xoris    r3, r3, 0x8000
	stw      r0, 0x68(r1)
	lfd      f2, lbl_8051E500@sda21(r2)
	stw      r3, 0x6c(r1)
	lfs      f0, lbl_8051E4D0@sda21(r2)
	lfd      f1, 0x68(r1)
	fsubs    f1, f1, f2
	fmuls    f0, f0, f1
	stfs     f0, 0x37c(r29)

lbl_803527CC:
	psq_l    f31, 136(r1), 0, qr0
	lwz      r0, 0x94(r1)
	lfd      f31, 0x80(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r29, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	803527F0
 * Size:	000384
 */
void PanModokiBase::Obj::endCarry()
{
	Pellet* pelt = getCarryTarget();
	hardConstraintOn();
	if (pelt) {
		Stickers stick(pelt);
		Iterator<Creature> it(&stick);
		CI_LOOP(it)
		{
			Creature* obj = *it;
			InteractKill interactKill(this, nullptr);
			obj->stimulate(interactKill);
		}
		endStick();
		pelt->mPelletCarry->giveup(2);
		bool result = true;
		if (pelt->getKind() == PELTYPE_TREASURE) {
			mPelletArray[mPelletCount] = pelt;
			result = (mPelletCount != 0);
			if (!result) {
				pelt->setAlive(false);
				pelt->startCapture(mNest->mCaptureMatrix);
			}
			mPelletCount += 1;
		}
		if (result) {
			PelletKillArg arg;
			pelt->kill(static_cast<CreatureKillArg*>(&arg));
		}
		mTargetCreature = nullptr;
	}
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	mr       r30, r3
	stw      r29, 0x54(r1)
	lwz      r3, 0x230(r3)
	cmplwi   r3, 0
	bne      lbl_80352820
	li       r31, 0
	b        lbl_8035284C

lbl_80352820:
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80352848
	lwz      r3, 0x230(r30)
	lwz      r3, 0x17c(r3)
	lwz      r31, 4(r3)
	b        lbl_8035284C

lbl_80352848:
	lwz      r31, 0x230(r30)

lbl_8035284C:
	mr       r3, r30
	bl       hardConstraintOn__Q24Game9EnemyBaseFv
	cmplwi   r31, 0
	beq      lbl_80352B58
	mr       r4, r31
	addi     r3, r1, 0x30
	bl       __ct__Q24Game8StickersFPQ24Game8Creature
	li       r0, 0
	lis      r3, "__vt__26Iterator<Q24Game8Creature>"@ha
	addi     r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
	addi     r3, r1, 0x30
	cmplwi   r0, 0
	stw      r4, 0x20(r1)
	stw      r0, 0x2c(r1)
	stw      r0, 0x24(r1)
	stw      r3, 0x28(r1)
	bne      lbl_803528A8
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80352A5C

lbl_803528A8:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80352914

lbl_803528C0:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80352A5C
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_80352914:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803528C0
	b        lbl_80352A5C

lbl_80352934:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r29, r3
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803529A0
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game12InteractKill@ha
	addi     r4, r4, __vt__Q24Game11Interaction@l
	li       r0, 0
	stw      r4, 0x14(r1)
	addi     r5, r3, __vt__Q24Game12InteractKill@l
	mr       r3, r29
	addi     r4, r1, 0x14
	stw      r30, 0x18(r1)
	stw      r5, 0x14(r1)
	stw      r0, 0x1c(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_803529A0:
	lwz      r0, 0x2c(r1)
	cmplwi   r0, 0
	bne      lbl_803529CC
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80352A5C

lbl_803529CC:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80352A40

lbl_803529EC:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80352A5C
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_80352A40:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803529EC

lbl_80352A5C:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x24(r1)
	cmplw    r4, r3
	bne      lbl_80352934
	mr       r3, r30
	bl       endStick__Q24Game8CreatureFv
	lwz      r3, 0x334(r31)
	li       r4, 2
	bl       giveup__Q24Game11PelletCarryFUs
	mr       r3, r31
	li       r29, 1
	lwz      r12, 0(r31)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 3
	bne      lbl_80352B08
	lwz      r0, 0x388(r30)
	slwi     r0, r0, 2
	add      r3, r30, r0
	stw      r31, 0x38c(r3)
	lwz      r0, 0x388(r30)
	cmpwi    r0, 0
	bne      lbl_80352AFC
	mr       r3, r31
	li       r4, 0
	lwz      r12, 0(r31)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x378(r30)
	mr       r3, r31
	addi     r4, r4, 0x2bc
	bl       startCapture__Q24Game8CreatureFP7Matrixf
	li       r29, 0

lbl_80352AFC:
	lwz      r3, 0x388(r30)
	addi     r0, r3, 1
	stw      r0, 0x388(r30)

lbl_80352B08:
	clrlwi.  r0, r29, 0x18
	beq      lbl_80352B44
	lis      r4, __vt__Q24Game15CreatureKillArg@ha
	lis      r3, __vt__Q24Game13PelletKillArg@ha
	addi     r0, r4, __vt__Q24Game15CreatureKillArg@l
	li       r4, 0
	stw      r0, 8(r1)
	addi     r5, r3, __vt__Q24Game13PelletKillArg@l
	li       r0, 1
	mr       r3, r31
	stw      r4, 0xc(r1)
	addi     r4, r1, 8
	stw      r5, 8(r1)
	stb      r0, 0x10(r1)
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg

lbl_80352B44:
	li       r0, 0
	addi     r3, r1, 0x30
	stw      r0, 0x230(r30)
	li       r4, -1
	bl       __dt__Q24Game8StickersFv

lbl_80352B58:
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r29, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80352B74
 * Size:	0000A0
 */
void PanModokiBase::Obj::checkSucked()
{
	if (!isDead()) {
		Creature* target = mTargetCreature;
		if (target) {
			target = getCarryTarget();
			if (static_cast<Pellet*>(target)->getStateID() == 1) {
				mEvents.mFlags[0].typeView |= EB_NoInterrupt;
				fadePulledSmokeEffect();
			}
		}
	}
}

/*
 * --INFO--
 * Address:	80352C14
 * Size:	0000BC
 */
void PanModokiBase::Obj::suckFinish()
{
	Pellet* pellet = static_cast<Pellet*>(mTargetCreature);
	pellet         = getCarryTarget();
	endStick();
	if (pellet) {
		pellet->mPelletCarry->giveup(2);
	}
	mFsm->transit(this, PANMODOKI_Sucked, nullptr);
	mTargetCreature = nullptr;
	fadePulledSmokeEffect();
}

/*
 * --INFO--
 * Address:	80352CD0
 * Size:	000118
 */
bool PanModokiBase::Obj::isEndPathFinder()
{
	bool result;
	if (_2F0) {
		return true;
	} else {
		P2ASSERTLINE(1708, testPathfinder);
		switch (testPathfinder->check(mPathID)) {
		case 0:
			testPathfinder->makepath(mPathID, &_384);
			_2F0 = 1;
			return true;
		case 2:
			result = false;
			_2F0   = 0;
			break;
		case 1:
			if (EnemyBase::getCurrAnimIndex() != 8) {
				EnemyBase::startMotion(8, nullptr);
			}
			setPathFinder(true);
			_2F0 = 0;
			return false;
		case 3:
			_2F0 = 0;
			return false;
		default:
			result = false;
		}
	}
	return result;
}

/*
 * --INFO--
 * Address:	80352DE8
 * Size:	0002BC
 */
bool PanModokiBase::Obj::setPathFinder(bool cond)
{
	s16 waypoint1Index, waypoint2Index;
	releasePathFinder();
	_320 = Vector3f(0);
	WPEdgeSearchArg args(mPosition);
	RouteMgr* routeMgr = mapMgr->mRouteMgr;
	P2ASSERTLINE(1756, routeMgr);
	if (routeMgr->getNearestEdge(args)) {
		waypoint1Index = args.mWp1->mIndex;
		waypoint2Index = args.mWp2->mIndex;
		if (sqrDistanceXZ(mHomePosition, args.mWp1->mPosition) 
			> sqrDistanceXZ(mHomePosition, args.mWp2->mPosition)) {
			waypoint2Index = args.mWp1->mIndex;
			waypoint1Index = args.mWp2->mIndex;
		}
		if (routeMgr->getWayPoint(waypoint1Index)->mFlags & 1) {
			waypoint1Index = waypoint2Index;
		}
		if (!(routeMgr->getWayPoint(args.mWp1->mIndex)->mFlags & 1) 
			&& !(routeMgr->getWayPoint(args.mWp2->mIndex)->mFlags & 1)) {
			if (waypoint1Index == args.mWp1->mIndex) {
				if (15.0f < absF(args.mWp1->mPosition.y - mPosition.y)) {
					waypoint1Index = args.mWp2->mIndex;
				}
			} else if (15.0f < absF(args.mWp2->mPosition.y - mPosition.y)) {
				waypoint1Index = args.mWp1->mIndex;
			}
		}
		_2EA = _2E8;
		_2E8 = waypoint1Index;
		if (mPathID) {
			testPathfinder->release(mPathID);
		}
		PathfindRequest request(_2E6, _2E8, cond);
		mPathID = testPathfinder->start(request);
		Vector3f wpPos = routeMgr->getWayPoint(_2E8)->mPosition;
		mNextWayPointPosition.x = wpPos.x;
		mNextWayPointPosition.y = wpPos.y;
		mNextWayPointPosition.z = wpPos.z;
		return true;
	}
	JUT_PANICLINE(1810, nullptr);
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stmw     r27, 0x3c(r1)
	mr       r28, r3
	mr       r29, r4
	bl       releasePathFinder__Q34Game13PanModokiBase3ObjFv
	lfs      f0, lbl_8051E490@sda21(r2)
	li       r4, 0
	li       r0, -1
	stfs     f0, 0x320(r28)
	stfs     f0, 0x324(r28)
	stfs     f0, 0x328(r28)
	stw      r4, 0x2c(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stw      r4, 0x28(r1)
	stb      r4, 0x1c(r1)
	sth      r0, 0x24(r1)
	stw      r4, 0x20(r1)
	lfs      f0, 0x18c(r28)
	stfs     f0, 0x10(r1)
	lfs      f0, 0x190(r28)
	stfs     f0, 0x14(r1)
	lfs      f0, 0x194(r28)
	stfs     f0, 0x18(r1)
	lwz      r30, 8(r3)
	cmplwi   r30, 0
	bne      lbl_80352E84
	lis      r3, lbl_80490EF8@ha
	lis      r5, lbl_80490F08@ha
	addi     r3, r3, lbl_80490EF8@l
	li       r4, 0x6dc
	addi     r5, r5, lbl_80490F08@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80352E84:
	mr       r3, r30
	addi     r4, r1, 0x10
	bl       getNearestEdge__Q24Game8RouteMgrFRQ24Game15WPEdgeSearchArg
	clrlwi.  r0, r3, 0x18
	beq      lbl_80353064
	lwz      r3, 0x28(r1)
	lwz      r4, 0x2c(r1)
	lfs      f3, 0x1a0(r28)
	lfs      f1, 0x54(r4)
	lfs      f0, 0x54(r3)
	fsubs    f4, f1, f3
	lfs      f2, 0x4c(r4)
	fsubs    f3, f0, f3
	lfs      f6, 0x198(r28)
	lfs      f1, 0x4c(r3)
	fsubs    f5, f2, f6
	fmuls    f0, f4, f4
	lha      r0, 0x36(r3)
	fsubs    f2, f1, f6
	lha      r5, 0x36(r4)
	fmuls    f1, f3, f3
	fmadds   f0, f5, f5, f0
	lfs      f31, 0x50(r3)
	mr       r31, r0
	fmadds   f1, f2, f2, f1
	lfs      f30, 0x50(r4)
	mr       r27, r5
	fcmpo    cr0, f1, f0
	ble      lbl_80352F00
	mr       r27, r0
	mr       r31, r5

lbl_80352F00:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80352F28
	mr       r31, r27

lbl_80352F28:
	mr       r3, r30
	lwz      r4, 0x28(r1)
	lwz      r12, 0(r30)
	lha      r4, 0x36(r4)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_80352FD4
	mr       r3, r30
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r30)
	lha      r4, 0x36(r4)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_80352FD4
	lwz      r3, 0x28(r1)
	extsh    r4, r31
	lha      r0, 0x36(r3)
	cmpw     r4, r0
	bne      lbl_80352FB4
	lfs      f1, 0x190(r28)
	lfs      f0, lbl_8051E4A8@sda21(r2)
	fsubs    f1, f31, f1
	fabs     f1, f1
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80352FD4
	lwz      r3, 0x2c(r1)
	lha      r31, 0x36(r3)
	b        lbl_80352FD4

lbl_80352FB4:
	lfs      f1, 0x190(r28)
	lfs      f0, lbl_8051E4A8@sda21(r2)
	fsubs    f1, f30, f1
	fabs     f1, f1
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80352FD4
	mr       r31, r0

lbl_80352FD4:
	lha      r4, 0x2e8(r28)
	clrlwi   r3, r29, 0x18
	neg      r0, r3
	sth      r4, 0x2ea(r28)
	or       r0, r0, r3
	srawi    r3, r0, 0x1f
	sth      r31, 0x2e8(r28)
	addi     r29, r3, 0xc3
	lwz      r4, 0x2ec(r28)
	cmplwi   r4, 0
	beq      lbl_80353008
	lwz      r3, testPathfinder__4Game@sda21(r13)
	bl       release__Q24Game10PathfinderFUl

lbl_80353008:
	lha      r5, 0x2e6(r28)
	addi     r4, r1, 8
	lha      r0, 0x2e8(r28)
	lwz      r3, testPathfinder__4Game@sda21(r13)
	sth      r0, 8(r1)
	sth      r5, 0xa(r1)
	stb      r29, 0xc(r1)
	bl       start__Q24Game10PathfinderFRQ24Game15PathfindRequest
	stw      r3, 0x2ec(r28)
	mr       r3, r30
	lwz      r12, 0(r30)
	lha      r4, 0x2e8(r28)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x50(r3)
	lfs      f2, 0x54(r3)
	lfs      f0, 0x4c(r3)
	li       r3, 1
	stfs     f0, 0x2bc(r28)
	stfs     f1, 0x2c0(r28)
	stfs     f2, 0x2c4(r28)
	b        lbl_80353080

lbl_80353064:
	lis      r3, lbl_80490EF8@ha
	li       r4, 0x712
	addi     r3, r3, lbl_80490EF8@l
	li       r5, 0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r3, 0

lbl_80353080:
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	lmw      r27, 0x3c(r1)
	lwz      r0, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	803530A4
 * Size:	000044
 */
void PanModokiBase::Obj::releasePathFinder()
{
	_2F0 = 0;
	if (testPathfinder && mPathID) {
		testPathfinder->release(mPathID);
	}
}

/*
 * --INFO--
 * Address:	803530E8
 * Size:	000020
 */
void PanModokiBase::Obj::killNest()
{
	if (mNest) {
		mNest->mDeathTimer = 1;
	}
	mNest = nullptr;
}

/*
 * --INFO--
 * Address:	80353108
 * Size:	000324
 */
bool PanModokiBase::Obj::isTargetable(Game::Pellet* pellet)
{
	if (gameSystem && gameSystem->isVersusMode() && pellet->mPelletFlag == 3) {
		return false;
	} else {
		if (pellet) {
			if (pellet->getKind() >= PELTYPE_TREASURE && mPelletCount >= 15) {
				return false;
			} else {
				if (!pellet->panmodokiCarryable()) {
					return false;
				} else {
					Stickers stick(pellet);
					Iterator<Creature> it(&stick);
					CI_LOOP(it) 
					{
						Creature* obj = *it;
						if (obj->isTeki()) {
							return false;
						}
					}
					if (!pellet->mPelletCarry->pullable(Game::PCS_Unk2, (pellet->getPelletConfigMin() + pellet->getPelletConfigMax()) * 0.5f)) {
						return false;
					} else {
						return true;
					}
				}
			}
		} else {
			return false;
		}	
	}
}

/*
 * --INFO--
 * Address:	8035342C
 * Size:	00017C
 */
void PanModokiBase::Obj::calcSlotGlobalPos(Vector3f& pos)
{
	Creature* pellet = mTargetCreature;
	Vector3f vector, vector2;
	Matrixf matrix;
	pellet = getCarryTarget();
	P2ASSERTLINE(1903, pellet);
	vector.x   = static_cast<Pellet*>(pellet)->getPickRadius();
	f32 float1 = _2E0;
	vector.z   = vector.x;
	vector.z *= pikmin2_cosf(float1);
	vector.x *= pikmin2_sinf(float1);
	vector.y = 0.0f;
	PSMTXCopy(pellet->mBaseTrMatrix.mMatrix.mtxView, matrix.mMatrix.mtxView);
	vector2 = matrix.mtxMult(vector);
	pos     = vector2;
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stw      r31, 0x7c(r1)
	mr       r31, r4
	stw      r30, 0x78(r1)
	stw      r29, 0x74(r1)
	mr       r29, r3
	lwz      r3, 0x230(r3)
	cmplwi   r3, 0
	bne      lbl_80353460
	li       r30, 0
	b        lbl_8035348C

lbl_80353460:
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80353488
	lwz      r3, 0x230(r29)
	lwz      r3, 0x17c(r3)
	lwz      r30, 4(r3)
	b        lbl_8035348C

lbl_80353488:
	lwz      r30, 0x230(r29)

lbl_8035348C:
	cmplwi   r30, 0
	bne      lbl_803534B0
	lis      r3, lbl_80490EF8@ha
	lis      r5, lbl_80490F08@ha
	addi     r3, r3, lbl_80490EF8@l
	li       r4, 0x76f
	addi     r5, r5, lbl_80490F08@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803534B0:
	mr       r3, r30
	bl       getPickRadius__Q24Game6PelletFv
	lfs      f4, 0x2e0(r29)
	lfs      f0, lbl_8051E490@sda21(r2)
	fmr      f2, f4
	fcmpo    cr0, f4, f0
	bge      lbl_803534D0
	fneg     f2, f4

lbl_803534D0:
	lfs      f3, lbl_8051E4C8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051E490@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f2, f3
	fcmpo    cr0, f4, f0
	fctiwz   f0, f2
	stfd     f0, 0x50(r1)
	lwz      r0, 0x54(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f2, f1, f0
	bge      lbl_8035352C
	lfs      f0, lbl_8051E4CC@sda21(r2)
	fmuls    f0, f4, f0
	fctiwz   f0, f0
	stfd     f0, 0x58(r1)
	lwz      r0, 0x5c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_80353544

lbl_8035352C:
	fmuls    f0, f4, f3
	fctiwz   f0, f0
	stfd     f0, 0x60(r1)
	lwz      r0, 0x64(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_80353544:
	fmuls    f1, f1, f0
	lfs      f0, lbl_8051E490@sda21(r2)
	stfs     f2, 0x1c(r1)
	addi     r3, r30, 0x138
	addi     r4, r1, 0x20
	stfs     f1, 0x14(r1)
	stfs     f0, 0x18(r1)
	bl       PSMTXCopy
	addi     r3, r1, 0x20
	addi     r4, r1, 0x14
	addi     r5, r1, 8
	bl       PSMTXMultVec
	lfs      f1, 0xc(r1)
	lfs      f2, 0x10(r1)
	lfs      f0, 8(r1)
	stfs     f0, 0(r31)
	stfs     f1, 4(r31)
	stfs     f2, 8(r31)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r29, 0x74(r1)
	lwz      r0, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	803535A8
 * Size:	000028
 */
void PanModokiBase::Obj::boundEffect() { createBounceEffect(mPosition, _33C); }

/*
 * --INFO--
 * Address:	803535D0
 * Size:	0000E8
 */
void PanModokiBase::Obj::createAppearEffect()
{
	if (mWaterBox == nullptr) {
		efx::TPanApp tpan;
		efx::ArgScale args(mPosition, _340);
		tpan.create(&args);
	} else {
		createEfxHamon();
		EnemyBase::createSplashDownEffect(mPosition, _33C);
	}
}

/*
 * --INFO--
 * Address:	803536B8
 * Size:	0000E0
 */
void PanModokiBase::Obj::createHideEffect()
{
	if (mWaterBox == nullptr) {
		Vector3f nestPos = mNest->getPosition();
		efx::ArgScale args(nestPos, _340);
		mEfxHide->create(&args);
	} else {
		fadeEfxHamon();
	}
}

/*
 * --INFO--
 * Address:	80353798
 * Size:	000030
 */
void PanModokiBase::Obj::fadeHideEffect() { mEfxHide->fade(); }

/*
 * --INFO--
 * Address:	803537C8
 * Size:	000084
 */
void PanModokiBase::Obj::createPulledSmokeEffect()
{
	efx::ArgScale args(mPosition, _340);
	mEfxSmoke->create(&args);
}

/*
 * --INFO--
 * Address:	8035384C
 * Size:	000030
 */
void PanModokiBase::Obj::fadePulledSmokeEffect() { mEfxSmoke->fade(); }

/*
 * --INFO--
 * Address:	8035387C
 * Size:	0002CC
 */
void PanModokiBase::Obj::throwUpEatItem()
{
	if (mPelletArray[0]) {
		PelletKillArg killArg;
		mPelletArray[0]->kill(&killArg);
	}

	for (int i = 0; i < mPelletCount; i++) {
		PelletInitArg initArg;

		if (pelletMgr->makePelletInitArg(initArg, mPelletArray[i]->getConfigName())) {
			Pellet* pellet = mPelletArray[i];
			if (pellet) {
				pellet->mMgr->setComeAlive(pellet);
				initArg.mState = PELSTATE_Bury;
				initArg._1C    = 1;
				pellet->init(&initArg);

				Vector3f pos = mHomePosition;
				pos.y += 10.0f;

				Vector3f vel;
				getThrowupItemVelocity(&vel);

				f32 angle = (TAU * (f32)i) / (f32)mPelletCount;
				if (mPelletCount != 1) {
					vel.x += pikmin2_sinf(angle) * 50.0f;
					vel.z += pikmin2_cosf(angle) * 50.0f;
				}

				pellet->setPosition(pos, false);
				pellet->setVelocity(vel);
				pellet->createKiraEffect(pos);

				mSoundObj->startSound(PSSE_EN_ENEMY_LOOSE_ITEM, 0);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	80353B48
 * Size:	0000B8
 */
OoPanModoki::Obj::Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	beq      lbl_80353B84
	addi     r0, r31, 0x3c8
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x3c8(r31)
	stw      r0, 0x3cc(r31)
	stw      r0, 0x3d0(r31)

lbl_80353B84:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q34Game13PanModokiBase3ObjFv
	lis      r3, __vt__Q34Game11OoPanModoki3Obj@ha
	addi     r0, r31, 0x3c8
	addi     r4, r3, __vt__Q34Game11OoPanModoki3Obj@l
	lfs      f4, lbl_8051E540@sda21(r2)
	stw      r4, 0(r31)
	addi     r3, r4, 0x1b0
	addi     r5, r4, 0x310
	lfs      f3, lbl_8051E4DC@sda21(r2)
	stw      r3, 0x178(r31)
	mr       r3, r31
	lfs      f2, lbl_8051E544@sda21(r2)
	lwz      r4, 0x17c(r31)
	lfs      f1, lbl_8051E520@sda21(r2)
	stw      r5, 0(r4)
	lfs      f0, lbl_8051E548@sda21(r2)
	lwz      r4, 0x17c(r31)
	subf     r0, r4, r0
	stw      r0, 0xc(r4)
	stfs     f4, 0x32c(r31)
	stfs     f3, 0x330(r31)
	stfs     f2, 0x338(r31)
	stfs     f1, 0x33c(r31)
	stfs     f0, 0x340(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80353C00
 * Size:	000034
 */
void OoPanModoki::Obj::appearRumble() { rumbleMgr->startRumble(11, mPosition, 2); }

/*
 * --INFO--
 * Address:	80353C34
 * Size:	000034
 */
void OoPanModoki::Obj::hideRumble() { rumbleMgr->startRumble(10, mPosition, 2); }

/*
 * --INFO--
 * Address:	80353C68
 * Size:	000094
 */
bool OoPanModoki::Obj::pressCallBack(Game::Creature* creature, f32 param2, CollPart* collPart)
{
	// TODO: At somepoint, the pressCallback call started inlining again, it needs to be fixed.
	if (creature) {
		if (creature->isPiki()) {
			if (static_cast<Piki*>(creature)->getKind() == Purple) {
				return PanModokiBase::Obj::pressCallBack(creature, param2, collPart);
			}
		}
	}
	return false;
}

} // namespace Game
