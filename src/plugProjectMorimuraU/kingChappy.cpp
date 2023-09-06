#include "Game/Entities/KingChappy.h"
#include "Game/Entities/Bomb.h"
#include "Game/SingleGameSection.h"
#include "Game/MapMgr.h"
#include "Game/seaMgr.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/generalEnemyMgr.h"
#include "Game/Stickers.h"
#include "JSystem/J3D/J3DMtxBuffer.h"
#include "PSM/EnemyBoss.h"
#include "PSSystem/PSMainSide_ObjSound.h"
#include "nans.h"

namespace Game {
namespace KingChappy {
Obj* curK;

static const int unusedKingChappyArray[] = { 0, 0, 0 };
static const char kingChappyName[]       = "kingChappy";

/*
 * --INFO--
 * Address:	8035CCE8
 * Size:	000038
 */
static bool lFootCallBack(J3DJoint* joint, int footIdx)
{
	if (footIdx == 0) {
		if (curK) {
			curK->leftFootMtxCalc();
		}
	}

	return true;
}

/*
 * --INFO--
 * Address:	8035CD20
 * Size:	000038
 */
static bool rFootCallBack(J3DJoint* joint, int footIdx)
{
	if (footIdx == 0) {
		if (curK) {
			curK->rightFootMtxCalc();
		}
	}

	return true;
}

/*
 * --INFO--
 * Address:	8035CD58
 * Size:	0000A4
 */
void Obj::setParameters()
{
	EnemyBase::setParameters();
	if (_394 || C_PARMS->_BCC) {
		_394           = 1;
		f32 scale      = C_PROPERPARMS.mFp15.mValue;
		mScaleModifier = scale;
		mScale         = Vector3f(scale);
		mCollTree->mPart->setScale(scale);
		mCurLodSphere.mRadius                           = scale * C_PARMS->mGeneral.mOffCameraRadius.mValue;
		C_PARMS->mGeneral.mHeightOffsetFromFloor.mValue = 60.0f;
	}
}

/*
 * --INFO--
 * Address:	8035CDFC
 * Size:	000020
 */
void Obj::birth(Vector3f& position, f32 faceDir) { EnemyBase::birth(position, faceDir); }

/*
 * --INFO--
 * Address:	8035CE1C
 * Size:	000448
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	fadeEfxHamon();
	mMouthJoint1 = mModel->getJoint("kuti");
	P2ASSERTLINE(90, mMouthJoint1);

	mBodyJoint = mModel->getJoint("kosijnt");
	P2ASSERTLINE(93, mBodyJoint);

	mTongueJoint1 = mModel->getJoint("bero6");
	P2ASSERTLINE(96, mTongueJoint1);

	mTongueJoint2 = mModel->getJoint("bero5");
	P2ASSERTLINE(99, mTongueJoint2);

	mMouthJoint2 = mModel->getJoint("kuti");
	P2ASSERTLINE(102, mMouthJoint2);

	mFsm->start(this, KINGCHAPPY_HideWait, nullptr);

	mHomePosition   = mPosition;
	_2BC            = mHomePosition;
	mHomePosition.y = 0.0f;
	_2EC            = 1;
	_2F0            = 0;
	_2F4            = mHomePosition;
	_30C            = 0;
	_338            = 0;

	P2ASSERTLINE(121, mModel);
	J3DJoint* joint;
	J3DModelData* modelData = mModel->mJ3dModel->mModelData;

	mLFootJointIndex = mModel->getJointIndex("asiL");
	joint            = modelData->mJointTree.mJoints[mLFootJointIndex];
	P2ASSERTLINE(127, joint);
	joint->mFunction = (J3DJointCallBack*)&lFootCallBack;

	mRFootJointIndex = mModel->getJointIndex("asiR");
	J3DJoint* joint2 = modelData->mJointTree.mJoints[mRFootJointIndex];
	P2ASSERTLINE(132, joint2);
	joint2->mFunction = (J3DJointCallBack*)&rFootCallBack;

	_320 = 0.0f;
	_334 = 0.0f;

	mEfxYodare->mMtx     = mMouthJoint2->getWorldMatrix();
	mEfxCryInd->mMtx     = mMouthJoint2->getWorldMatrix();
	mEfxSmoke->mMtx      = mModel->getJoint("hana")->getWorldMatrix();
	mEfxAttack->mMtx     = mModel->getJoint("bero5")->getWorldMatrix();
	mEfxDeadYodare->mMtx = mModel->getJoint("kuti")->getWorldMatrix();
	mEfxDeadHana->setMtxptr(mModel->getJoint("hana")->getWorldMatrix()->mMatrix.mtxView);

	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::checkBoss(soundObj);
	soundObj->setAppearFlag(false);

	_394 = 0;

	// increase size of emperor if _BCC is set, or if we're in Bulblax Kingdom
	SingleGameSection* section = static_cast<SingleGameSection*>(gameSystem->mSection);
	if (C_PARMS->_BCC || (section && section->getCaveID() == 'f_03')) {
		_394           = 1;
		mHealth        = C_PROPERPARMS.mFp16.mValue;
		f32 scale      = C_PROPERPARMS.mFp15.mValue;
		mScaleModifier = scale;
		mScale         = Vector3f(scale);
		mCollTree->mPart->setScale(scale);
		mCurLodSphere.mRadius = scale * C_PARMS->mGeneral.mOffCameraRadius.mValue;
	}
}

/*
 * --INFO--
 * Address:	8035D264
 * Size:	0005AC
 */
Obj::Obj()
    : mMouthJoint1(nullptr)
    , mBodyJoint(nullptr)
    , mTongueJoint1(nullptr)
    , mTongueJoint2(nullptr)
    , _2E4(0)
    , _2EC(1)
    , _2F0(0)
    , _30C(0)
    , mLFootJointIndex(0)
    , mRFootJointIndex(0)
    , _340(nullptr)
    , mFsm(nullptr)
    , mEfxYodare(nullptr)
    , mEfxDiveSand(nullptr)
    , mEfxDiveWater(nullptr)
    , mEfxCryAB(nullptr)
    , mEfxCryInd(nullptr)
    , mEfxSmoke(nullptr)
    , mEfxAttack(nullptr)
    , mEfxDeadYodare(nullptr)
    , mEfxDeadHana(nullptr)
    , _374(nullptr)
    , _378(nullptr)
    , _394(0)
{

	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	curK = nullptr;

	mEfxYodare     = new efx::TKchYodare(nullptr);
	mEfxDiveSand   = new efx::TKchDiveSand(&mPosition, &mFaceDir);
	mEfxDiveWater  = new efx::TKchDiveWat(&mPosition, &mFaceDir);
	mEfxCryAB      = new efx::TKchCryAB(&mPosition);
	mEfxCryInd     = new efx::TKchCryInd;
	mEfxSmoke      = new efx::TKchSmokeHana;
	mEfxAttack     = new efx::TKchAttackYodare(nullptr);
	mEfxDeadYodare = new efx::TKchDeadYodare(nullptr);
	mEfxDeadHana   = new efx::TKchDeadHana;

	_374 = new efx::TEnemyHamonChasePos(&_37C);
	_378 = new efx::TEnemyHamonChasePos(&_388);
}
} // namespace KingChappy
} // namespace Game

namespace efx {
/*
 * --INFO--
 * Address:	8035D810
 * Size:	0001D8
 */
TKchDeadYodare::TKchDeadYodare(Mtx mtx)
    : TKchYodareBaseChaseMtx(mtx, PID_KchYodareBase_Dead)
{
}

/*
 * --INFO--
 * Address:	8035DD24
 * Size:	0001D8
 */
TKchAttackYodare::TKchAttackYodare(Mtx mtx)
    : TKchYodareBaseChaseMtx(mtx, PID_KchYodareBase_1)
{
}

/*
 * --INFO--
 * Address:	8035DEFC
 * Size:	0001D8
 */
TKchYodare::TKchYodare(Mtx mtx)
    : TKchYodareBaseChaseMtx(mtx, PID_KchYodareBase_2)
{
}

} // namespace efx

namespace Game {
namespace KingChappy {

/*
 * --INFO--
 * Address:	8035E0D4
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
 * Address:	8035E120
 * Size:	0001A0
 */
void Obj::doUpdate()
{
	if (!_340) {
		Sys::Sphere sphere(mPosition, 500.0f);
		P2ASSERTLINE(235, mapMgr->mSeaMgr);
		_340 = mapMgr->mSeaMgr->findWater2d(sphere);
	}

	_300 = mPosition;

	_300.x -= 10.0f * pikmin2_sinf(mFaceDir);
	_300.z -= 10.0f * pikmin2_cosf(mFaceDir);

	mScale = Vector3f(mScaleModifier);
	mCollTree->mPart->setScale(mScaleModifier);

	mFsm->exec(this);
}

/*
 * --INFO--
 * Address:	8035E2C0
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8035E2C4
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	8035E2E4
 * Size:	0000B8
 */
void Obj::doAnimationUpdateAnimator()
{
	ProperAnimator* animator = static_cast<ProperAnimator*>(mAnimator);
	if (animator->mAnimator._48) {
		f32 frameRate = sys->mDeltaTime;
		frameRate     = EnemyAnimatorBase::defaultAnimSpeed * frameRate;
		SysShape::BlendLinearFun linearBlend;
		animator->animate(&linearBlend, 60.0f * sys->mDeltaTime, frameRate, frameRate);

		SysShape::Model* model                                        = mModel;
		model->mJ3dModel->mModelData->mJointTree.mJoints[0]->mMtxCalc = static_cast<J3DMtxCalcAnmBase*>(animator->mAnimator.getCalc());
	} else {
		EnemyBase::doAnimationUpdateAnimator();
	}
}

/*
 * --INFO--
 * Address:	8035E39C
 * Size:	000034
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	EnemyBase::onKill(killArg);
	fadeAllEffect();
}

/*
 * --INFO--
 * Address:	8035E3D0
 * Size:	000588
 */
void Obj::doAnimationCullingOff()
{
	if (C_PARMS->_BCA) {
		if (getStateID() == KINGCHAPPY_Walk || _320 != 0.0f || _334 != 0.0f) {
			curK = this;
		}
	}

	if (C_PARMS->_BC8) {
		C_PARMS->_BC8 = 0;
		mFsm->transit(this, KINGCHAPPY_Hide, nullptr);
	}

	mCurAnim->mIsPlaying = false;
	doAnimationUpdateAnimator();

	if (mPellet) {
		viewMakeMatrix(mObjMatrix);

		Matrixf mtx;
		PSMTXScale(mtx.mMatrix.mtxView, mScale.x, mScale.y, mScale.z);
		PSMTXConcat(mObjMatrix.mMatrix.mtxView, mtx.mMatrix.mtxView, mObjMatrix.mMatrix.mtxView);

		Vector3f pos;
		mObjMatrix.getTranslation(pos);
		onSetPosition(pos);
		onSetPositionPost(pos);
	} else {
		mObjMatrix.makeSRT(mScale, mRotation, mPosition);
	}

	PSMTXCopy(mObjMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
	mModel->mJ3dModel->calc();

	// this is a really complicated way to adjust the world matrices when eating pikmin
	for (int i = 0; i < mMouthSlots.mMax; i++) {
		// this loop has regswaps, but not from the math for once!
		Matrixf* mat;
		Creature* stuckCreature = mMouthSlots.getStuckCreature(i);
		if (stuckCreature) {
			mat = (Matrixf*)mModel->mJ3dModel->mMtxBuffer->mWorldMatrices[mJointIndices[i]];
			// mat = mModel->mJ3dModel->mMtxBuffer->getWorldMatrix(_33C[i]);
			Vector3f xBasis = mat->getBasis(0);
			Vector3f yBasis = mat->getBasis(1);
			Vector3f zBasis = mat->getBasis(2);

			f32 length = yBasis.normalise();

			f32 yLen = length;
			if (yLen > 1.0f) {
				yLen = 1.0f;
			}

			if (stuckCreature->isTeki()) {
				if (_338 && static_cast<EnemyBase*>(stuckCreature)->getEnemyTypeID() == EnemyTypeID::EnemyID_Bomb) {
					static_cast<Bomb::Obj*>(stuckCreature)->_2BD = 1;
				}
			} else {
				PSVECCrossProduct((Vec*)&yBasis, (Vec*)&zBasis, (Vec*)&xBasis);

				xBasis.normalise();

				PSVECCrossProduct((Vec*)&xBasis, (Vec*)&yBasis, (Vec*)&zBasis);
				zBasis.normalise();

				mat->mMatrix.structView.xx = xBasis.x * yLen;
				mat->mMatrix.structView.xy = xBasis.y * yLen;
				mat->mMatrix.structView.xz = xBasis.z * yLen;

				mat->mMatrix.structView.yx = yBasis.x * yLen;
				mat->mMatrix.structView.yy = yBasis.y * yLen;
				mat->mMatrix.structView.yz = yBasis.z * yLen;

				mat->mMatrix.structView.zx = zBasis.x * yLen;
				mat->mMatrix.structView.zy = zBasis.y * yLen;
				mat->mMatrix.structView.zz = zBasis.z * yLen;
			}
		}
	}

	mCollTree->update();

	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj); // get sound object
	PSM::checkBoss(soundObj);                                           // make sure we have sound object
	if (soundObj) {                                                     // REALLY MAKE SURE WE HAVE SOUND OBJECT
		// POINTLESS IF STATEMENT
		if (mSticked) {
			soundObj->postPikiAttack(true);
		} else {
			soundObj->postPikiAttack(true);
		}
	}

	curK = nullptr;
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stmw     r27, 0x6c(r1)
	mr       r31, r3
	lwz      r4, 0xc0(r3)
	lbz      r0, 0xbca(r4)
	cmplwi   r0, 0
	beq      lbl_8035E428
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 0
	beq      lbl_8035E424
	lfs      f1, lbl_8051E68C@sda21(r2)
	lfs      f0, 0x320(r31)
	fcmpu    cr0, f1, f0
	bne      lbl_8035E424
	lfs      f0, 0x334(r31)
	fcmpu    cr0, f1, f0
	beq      lbl_8035E428

lbl_8035E424:
	stw      r31, curK__Q24Game10KingChappy@sda21(r13)

lbl_8035E428:
	lwz      r3, 0xc0(r31)
	lbz      r0, 0xbc8(r3)
	cmplwi   r0, 0
	beq      lbl_8035E460
	li       r0, 0
	mr       r4, r31
	stb      r0, 0xbc8(r3)
	li       r5, 8
	li       r6, 0
	lwz      r3, 0x34c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8035E460:
	lwz      r4, 0x188(r31)
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x24(r4)
	lwz      r12, 0(r31)
	lwz      r12, 0x1d8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x17c(r31)
	lwz      r0, 4(r3)
	cmplwi   r0, 0
	beq      lbl_8035E508
	addi     r4, r31, 0x138
	bl       viewMakeMatrix__Q24Game10PelletViewFR7Matrixf
	lfs      f1, 0x168(r31)
	addi     r3, r1, 0x38
	lfs      f2, 0x16c(r31)
	lfs      f3, 0x170(r31)
	bl       PSMTXScale
	addi     r3, r31, 0x138
	addi     r4, r1, 0x38
	mr       r5, r3
	bl       PSMTXConcat
	lfs      f0, 0x144(r31)
	mr       r3, r31
	addi     r4, r1, 0x2c
	stfs     f0, 0x2c(r1)
	lfs      f0, 0x154(r31)
	stfs     f0, 0x30(r1)
	lfs      f0, 0x164(r31)
	stfs     f0, 0x34(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	addi     r4, r1, 0x2c
	lwz      r12, 0(r31)
	lwz      r12, 0x74(r12)
	mtctr    r12
	bctrl
	b        lbl_8035E51C

lbl_8035E508:
	addi     r3, r31, 0x138
	addi     r4, r31, 0x168
	addi     r5, r31, 0x1a4
	addi     r6, r31, 0x18c
	bl       "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"

lbl_8035E51C:
	lwz      r4, 0x174(r31)
	addi     r3, r31, 0x138
	lwz      r4, 8(r4)
	addi     r4, r4, 0x24
	bl       PSMTXCopy
	lwz      r3, 0x174(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	li       r27, 0
	li       r28, 0
	b        lbl_8035E854

lbl_8035E554:
	mr       r4, r27
	addi     r3, r31, 0x2c8
	bl       getSlot__10MouthSlotsFi
	lwz      r29, 0x64(r3)
	cmplwi   r29, 0
	beq      lbl_8035E84C
	lwz      r4, 0x174(r31)
	lwz      r3, 0x33c(r31)
	lwz      r4, 8(r4)
	lhzx     r0, r3, r28
	lwz      r3, 0x84(r4)
	mulli    r0, r0, 0x30
	lfs      f1, lbl_8051E68C@sda21(r2)
	lwz      r3, 0xc(r3)
	add      r30, r3, r0
	lfs      f3, 0x20(r30)
	lfs      f2, 0x10(r30)
	lfs      f0, 0(r30)
	stfs     f0, 0x20(r1)
	stfs     f2, 0x24(r1)
	stfs     f3, 0x28(r1)
	lfs      f2, 0x14(r30)
	lfs      f3, 4(r30)
	lfs      f4, 0x24(r30)
	fmuls    f6, f2, f2
	fmuls    f0, f3, f3
	fmuls    f7, f4, f4
	stfs     f3, 0x14(r1)
	fadds    f0, f0, f6
	stfs     f2, 0x18(r1)
	stfs     f4, 0x1c(r1)
	fadds    f0, f7, f0
	lfs      f5, 0x28(r30)
	lfs      f4, 0x18(r30)
	lfs      f2, 8(r30)
	fcmpo    cr0, f0, f1
	stfs     f2, 8(r1)
	stfs     f4, 0xc(r1)
	stfs     f5, 0x10(r1)
	ble      lbl_8035E610
	fmadds   f0, f3, f3, f6
	fadds    f4, f7, f0
	fcmpo    cr0, f4, f1
	ble      lbl_8035E614
	frsqrte  f0, f4
	fmuls    f4, f0, f4
	b        lbl_8035E614

lbl_8035E610:
	fmr      f4, f1

lbl_8035E614:
	lfs      f0, lbl_8051E68C@sda21(r2)
	fcmpo    cr0, f4, f0
	ble      lbl_8035E650
	lfs      f0, lbl_8051E6B8@sda21(r2)
	lfs      f2, 0x14(r1)
	fdivs    f3, f0, f4
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	b        lbl_8035E654

lbl_8035E650:
	fmr      f4, f0

lbl_8035E654:
	lfs      f0, lbl_8051E6B8@sda21(r2)
	fmr      f31, f4
	fcmpo    cr0, f4, f0
	ble      lbl_8035E668
	fmr      f31, f0

lbl_8035E668:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8035E6B8
	lbz      r0, 0x338(r31)
	cmplwi   r0, 0
	beq      lbl_8035E84C
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x24
	bne      lbl_8035E84C
	li       r0, 1
	stb      r0, 0x2bd(r29)
	b        lbl_8035E84C

lbl_8035E6B8:
	addi     r3, r1, 0x14
	addi     r4, r1, 8
	addi     r5, r1, 0x20
	bl       PSVECCrossProduct
	lfs      f2, 0x20(r1)
	lfs      f1, 0x24(r1)
	fmuls    f0, f2, f2
	lfs      f3, 0x28(r1)
	fmuls    f4, f1, f1
	lfs      f1, lbl_8051E68C@sda21(r2)
	fmuls    f3, f3, f3
	fadds    f0, f0, f4
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8035E710
	fmadds   f0, f2, f2, f4
	fadds    f3, f3, f0
	fcmpo    cr0, f3, f1
	ble      lbl_8035E714
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8035E714

lbl_8035E710:
	fmr      f3, f1

lbl_8035E714:
	lfs      f0, lbl_8051E68C@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8035E74C
	lfs      f0, lbl_8051E6B8@sda21(r2)
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

lbl_8035E74C:
	addi     r3, r1, 0x20
	addi     r4, r1, 0x14
	addi     r5, r1, 8
	bl       PSVECCrossProduct
	lfs      f2, 8(r1)
	lfs      f1, 0xc(r1)
	fmuls    f0, f2, f2
	lfs      f3, 0x10(r1)
	fmuls    f4, f1, f1
	lfs      f1, lbl_8051E68C@sda21(r2)
	fmuls    f3, f3, f3
	fadds    f0, f0, f4
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8035E7A4
	fmadds   f0, f2, f2, f4
	fadds    f3, f3, f0
	fcmpo    cr0, f3, f1
	ble      lbl_8035E7A8
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8035E7A8

lbl_8035E7A4:
	fmr      f3, f1

lbl_8035E7A8:
	lfs      f0, lbl_8051E68C@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8035E7E0
	lfs      f0, lbl_8051E6B8@sda21(r2)
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

lbl_8035E7E0:
	lfs      f0, 0x20(r1)
	fmuls    f0, f0, f31
	stfs     f0, 0(r30)
	lfs      f0, 0x24(r1)
	fmuls    f0, f0, f31
	stfs     f0, 0x10(r30)
	lfs      f0, 0x28(r1)
	fmuls    f0, f0, f31
	stfs     f0, 0x20(r30)
	lfs      f0, 0x14(r1)
	fmuls    f0, f0, f31
	stfs     f0, 4(r30)
	lfs      f0, 0x18(r1)
	fmuls    f0, f0, f31
	stfs     f0, 0x14(r30)
	lfs      f0, 0x1c(r1)
	fmuls    f0, f0, f31
	stfs     f0, 0x24(r30)
	lfs      f0, 8(r1)
	fmuls    f0, f0, f31
	stfs     f0, 8(r30)
	lfs      f0, 0xc(r1)
	fmuls    f0, f0, f31
	stfs     f0, 0x18(r30)
	lfs      f0, 0x10(r1)
	fmuls    f0, f0, f31
	stfs     f0, 0x28(r30)

lbl_8035E84C:
	addi     r28, r28, 2
	addi     r27, r27, 1

lbl_8035E854:
	lwz      r0, 0x2c8(r31)
	cmpw     r27, r0
	blt      lbl_8035E554
	lwz      r3, 0x114(r31)
	bl       update__8CollTreeFv
	lwz      r29, 0x28c(r31)
	li       r30, 0
	mr       r3, r29
	lwz      r12, 0x28(r29)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 5
	beq      lbl_8035E8C4
	mr       r3, r29
	lwz      r12, 0x28(r29)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_8035E8C4
	mr       r3, r29
	lwz      r12, 0x28(r29)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 7
	bne      lbl_8035E8C8

lbl_8035E8C4:
	li       r30, 1

lbl_8035E8C8:
	clrlwi.  r0, r30, 0x18
	bne      lbl_8035E8EC
	lis      r3, lbl_80491604@ha
	lis      r5, lbl_804915F8@ha
	addi     r3, r3, lbl_80491604@l
	li       r4, 0x454
	addi     r5, r5, lbl_804915F8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8035E8EC:
	cmplwi   r29, 0
	beq      lbl_8035E934
	lwz      r0, 0xf0(r31)
	cmplwi   r0, 0
	beq      lbl_8035E91C
	mr       r3, r29
	li       r4, 1
	lwz      r12, 0x28(r29)
	lwz      r12, 0xd8(r12)
	mtctr    r12
	bctrl
	b        lbl_8035E934

lbl_8035E91C:
	mr       r3, r29
	li       r4, 1
	lwz      r12, 0x28(r29)
	lwz      r12, 0xd8(r12)
	mtctr    r12
	bctrl

lbl_8035E934:
	li       r0, 0
	stw      r0, curK__Q24Game10KingChappy@sda21(r13)
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	lmw      r27, 0x6c(r1)
	lwz      r0, 0x94(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	8035E958
 * Size:	000040
 */
void Obj::doSimulation(f32 rate)
{
	_2F0--;
	if (_2F0 < 0) {
		_2F0 = 0;
	}

	EnemyBase::doSimulation(rate);
}

/*
 * --INFO--
 * Address:	8035E998
 * Size:	000098
 */
void Obj::getShadowParam(ShadowParam& param)
{
	mBodyJoint->getWorldMatrix()->getTranslation(param.mPosition);
	param.mPosition.y -= 20.0f;
	param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	param.mBoundingSphere.mRadius   = 100.0f * mScaleModifier;
	param.mSize                     = 45.0f * mScaleModifier;
}

/*
 * --INFO--
 * Address:	8035EA30
 * Size:	000158
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if (isEvent(0, EB_Bittered)) {
		addDamage(damage * 0.1f, 1.0f);
		return true;
	}

	if (collpart) {
		if (creature->isAlive() && creature->isStickTo()) {
			addDamage(damage, 1.0f);
			return true;
		}
	} else if (creature->isAlive()) {
		Vector3f creaturePos = creature->getPosition();
		if (creaturePos.y < 5.0f + mPosition.y) {
			if (sqrDistanceXZ(creaturePos, mPosition) < 1600.0f) {
				addDamage(damage * 0.2f, 1.0f);
				return true;
			}
		} else {
			return false;
		}
	}

	return false;
}

/*
 * --INFO--
 * Address:	8035EB88
 * Size:	000030
 */
void Obj::collisionCallback(CollEvent& event) { event.mHitPart->mCurrentID == ('kuti'); }

/*
 * --INFO--
 * Address:	8035EBB8
 * Size:	000030
 */
void Obj::wallCallback(MoveInfo const& moveInfo)
{
	_2F0            = 120;
	mTargetCreature = nullptr;
	setNextGoal();
}

/*
 * --INFO--
 * Address:	8035EBE8
 * Size:	000028
 */
bool Obj::bombCallBack(Creature* creature, Vector3f& vec, f32 damage) { return EnemyBase::bombCallBack(creature, vec, 0.25f * damage); }

/*
 * --INFO--
 * Address:	8035EC10
 * Size:	00004C
 */
void Obj::inWaterCallback(WaterBox* wbox)
{
	if (getStateID() != KINGCHAPPY_HideWait) {
		EnemyBase::inWaterCallback(wbox);
	}
}

/*
 * --INFO--
 * Address:	8035EC5C
 * Size:	000028
 */
void Obj::startCarcassMotion() { startMotion(13, nullptr); }

/*
 * --INFO--
 * Address:	8035EC84
 * Size:	000064
 */
void Obj::initWalkSmokeEffect()
{
	mWalkSmokeMgr.alloc(2);
	mWalkSmokeMgr.setup(0, mModel, "asiR", 2.0f);
	mWalkSmokeMgr.setup(1, mModel, "asiL", 2.0f);
}

/*
 * --INFO--
 * Address:	8035ECE8
 * Size:	000008
 */
WalkSmokeEffect::Mgr* Obj::getWalkSmokeEffectMgr() { return &mWalkSmokeMgr; }

/*
 * --INFO--
 * Address:	8035ECF0
 * Size:	000074
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	CollPart* backPart   = mCollTree->getCollPart('back');
	backPart->mSpecialID = 'st__';
	CollPart* buttPart   = mCollTree->getCollPart('ketu');
	buttPart->mSpecialID = 'st__';
	fadeAllEffect();
}

/*
 * --INFO--
 * Address:	8035ED64
 * Size:	0000A0
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	CollPart* backPart   = mCollTree->getCollPart('back');
	backPart->mSpecialID = '_t__';
	CollPart* buttPart   = mCollTree->getCollPart('ketu');
	buttPart->mSpecialID = '_t__';
	EnemyFunc::flickStickPikmin(this, C_PARMS->mGeneral.mShakeRateMaybe.mValue, C_PARMS->mGeneral.mShakeKnockback.mValue,
	                            C_PARMS->mGeneral.mShakeDamage.mValue, -1000.0f, nullptr);
	mToFlick = 0.0f;
	createEffect(0);
}

/*
 * --INFO--
 * Address:	8035EE04
 * Size:	00013C
 */
void Obj::doStartMovie()
{
	mEfxYodare->startDemoDrawOff();
	mEfxDiveSand->startDemoDrawOff();
	mEfxDiveWater->startDemoDrawOff();
	mEfxCryAB->startDemoDrawOff();
	mEfxCryInd->startDemoDrawOff();
	mEfxSmoke->startDemoDrawOff();
	mEfxAttack->startDemoDrawOff();
	mEfxDeadYodare->startDemoDrawOff();
	mEfxDeadHana->startDemoDrawOff();
	_374->startDemoDrawOff();
	_378->startDemoDrawOff();
}

/*
 * --INFO--
 * Address:	8035EF9C
 * Size:	00013C
 */
void Obj::doEndMovie()
{
	mEfxYodare->endDemoDrawOn();
	mEfxDiveSand->endDemoDrawOn();
	mEfxDiveWater->endDemoDrawOn();
	mEfxCryAB->endDemoDrawOn();
	mEfxCryInd->endDemoDrawOn();
	mEfxSmoke->endDemoDrawOn();
	mEfxAttack->endDemoDrawOn();
	mEfxDeadYodare->endDemoDrawOn();
	mEfxDeadHana->endDemoDrawOn();
	_374->endDemoDrawOn();
	_378->endDemoDrawOn();
}

/*
 * --INFO--
 * Address:	8035F134
 * Size:	000134
 */
void Obj::initMouthSlots()
{
	char* slotNames[] = { "kamu1", "kamu2", "kamu3", "kamu4", "kamu5", "kamu6", "kamu7", "kamu8", "kamu9" };
	mMouthSlots.alloc(9);
	mJointIndices = new u16[9];
	for (int i = 0; i < mMouthSlots.mMax; i++) {
		mMouthSlots.setup(i, mModel, slotNames[i]);
		mMouthSlots.getSlot(i)->mRadius = 25.0f * mScaleModifier;
		mJointIndices[i]                = mModel->getJointIndex(slotNames[i]);
	}
}

/*
 * --INFO--
 * Address:	8035F268
 * Size:	0001A4
 */
int Obj::eatBomb()
{
	Bomb::Obj* bomb;
	int count          = 0;
	MouthSlots* slots  = getMouthSlots();
	Bomb::Mgr* bombMgr = static_cast<Bomb::Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_Bomb));
	if (bombMgr) {
		for (int i = 0; i < bombMgr->getMaxObjects(); i++) {
			bomb = static_cast<Bomb::Obj*>(bombMgr->getEnemy(i));
			if (bomb->canEat() && !bomb->isStickToMouth()) {
				for (int j = 0; j < slots->mMax; j++) {
					MouthCollPart* slot = slots->getSlot(j);
					if (!slot->mStuckCreature) {
						Vector3f slotPos;
						slot->getPosition(slotPos);
						Vector3f bombPos = bomb->getPosition();

						f32 dist = slotPos.distance(bombPos);
						if (dist < slot->mRadius) {
							bomb->startStickMouth(this, slot);
							bomb->mEfxLight->fade();
							bomb->stopMotion();
							count++;
							break;
						}
					}
				}
			}
		}
	}

	return count;
}

/*
 * --INFO--
 * Address:	8035F40C
 * Size:	000008
 */
MouthSlots* Obj::getMouthSlots() { return &mMouthSlots; }

/*
 * --INFO--
 * Address:	8035F414
 * Size:	0002C8
 */
int Obj::getPikminInMouth(bool doKill)
{
	int count = 0;
	Stickers stickers(this);
	Iterator<Creature> iter(&stickers);

	CI_LOOP(iter)
	{
		Creature* creature = (*iter);
		if (creature->isStickToMouth()) {
			if (doKill) {
				if (creature->isPiki()) {
					InteractKill interactKill(this, nullptr);
					creature->stimulate(interactKill);

				} else if (creature->isAlive()) {
					creature->kill(nullptr);
					count++;
				}

			} else {
				count++;
			}
		}
	}

	return count;
}

/*
 * --INFO--
 * Address:	8035F6DC
 * Size:	00011C
 */
void Obj::getTonguePosVel(Vector3f& pos, Vector3f& vel)
{
	mTongueJoint1->getWorldMatrix()->getTranslation(pos);
	Vector3f pos2;
	mTongueJoint2->getWorldMatrix()->getTranslation(pos2);
	vel = pos - pos2;

	vel.normalise();
}

/*
 * --INFO--
 * Address:	8035F7F8
 * Size:	0001F0
 */
void Obj::setNextGoal()
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	mr       r31, r3
	lfs      f1, 0x194(r3)
	lfs      f0, 0x1a0(r3)
	lwz      r4, 0xc0(r3)
	fsubs    f1, f1, f0
	lfs      f0, 0x18c(r3)
	lfs      f3, 0x198(r3)
	lfs      f31, 0x35c(r4)
	fsubs    f2, f0, f3
	fmuls    f1, f1, f1
	fmuls    f0, f31, f31
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8035F868
	stfs     f3, 0x2bc(r31)
	li       r4, 1
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x2c0(r31)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x2c4(r31)
	bl       checkTurn__Q34Game10KingChappy3ObjFb
	b        lbl_8035F9CC

lbl_8035F868:
	lwz      r4, 0x230(r31)
	cmplwi   r4, 0
	beq      lbl_8035F8A4
	lwz      r12, 0(r4)
	addi     r3, r1, 8
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	stfs     f0, 0x2bc(r31)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x2c0(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x2c4(r31)
	b        lbl_8035F9CC

lbl_8035F8A4:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	lfs      f0, 0x198(r31)
	stw      r0, 0x18(r1)
	lfd      f3, lbl_8051E740@sda21(r2)
	lfd      f1, 0x18(r1)
	lfs      f2, lbl_8051E730@sda21(r2)
	fsubs    f3, f1, f3
	stfs     f0, 0x2bc(r31)
	lfs      f1, lbl_8051E734@sda21(r2)
	lfs      f0, 0x19c(r31)
	fdivs    f2, f3, f2
	stfs     f0, 0x2c0(r31)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x2c4(r31)
	fadds    f0, f1, f2
	fmuls    f31, f31, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	lfd      f3, lbl_8051E740@sda21(r2)
	stw      r0, 0x20(r1)
	lfs      f2, lbl_8051E730@sda21(r2)
	lfd      f0, 0x20(r1)
	lfs      f1, lbl_8051E738@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051E68C@sda21(r2)
	fdivs    f2, f3, f2
	fmuls    f3, f1, f2
	fcmpo    cr0, f3, f0
	bge      lbl_8035F958
	lfs      f0, lbl_8051E6B0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_8035F97C

lbl_8035F958:
	lfs      f0, lbl_8051E6B4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_8035F97C:
	lfs      f1, 0x2bc(r31)
	lfs      f0, lbl_8051E68C@sda21(r2)
	fmadds   f1, f31, f2, f1
	fcmpo    cr0, f3, f0
	stfs     f1, 0x2bc(r31)
	bge      lbl_8035F998
	fneg     f3, f3

lbl_8035F998:
	lfs      f1, lbl_8051E6B4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f0, 0x2c4(r31)
	fmuls    f1, f3, f1
	fctiwz   f1, f1
	stfd     f1, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f1, 4(r3)
	fmadds   f0, f31, f1, f0
	stfs     f0, 0x2c4(r31)

lbl_8035F9CC:
	psq_l    f31, 88(r1), 0, qr0
	lwz      r0, 0x64(r1)
	lfd      f31, 0x50(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	8035F9E8
 * Size:	000500
 */
void Obj::searchTarget()
{
	/*
	stwu     r1, -0x100(r1)
	mflr     r0
	stw      r0, 0x104(r1)
	stfd     f31, 0xf0(r1)
	psq_st   f31, 248(r1), 0, qr0
	stfd     f30, 0xe0(r1)
	psq_st   f30, 232(r1), 0, qr0
	stfd     f29, 0xd0(r1)
	psq_st   f29, 216(r1), 0, qr0
	stfd     f28, 0xc0(r1)
	psq_st   f28, 200(r1), 0, qr0
	stfd     f27, 0xb0(r1)
	psq_st   f27, 184(r1), 0, qr0
	stfd     f26, 0xa0(r1)
	psq_st   f26, 168(r1), 0, qr0
	stfd     f25, 0x90(r1)
	psq_st   f25, 152(r1), 0, qr0
	stw      r31, 0x8c(r1)
	stw      r30, 0x88(r1)
	stw      r29, 0x84(r1)
	mr       r31, r3
	li       r0, 0
	stw      r0, 0x230(r3)
	lwz      r0, 0x2f0(r3)
	cmpwi    r0, 0
	bgt      lbl_8035FE94
	lwz      r4, 0xc0(r31)
	lbz      r0, 0xbc9(r4)
	cmplwi   r0, 0
	bne      lbl_8035FE94
	lfs      f1, 0x198(r31)
	lfs      f0, 0x2bc(r31)
	fcmpu    cr0, f1, f0
	bne      lbl_8035FA94
	lfs      f1, 0x1a0(r31)
	lfs      f0, 0x2c4(r31)
	fcmpu    cr0, f1, f0
	bne      lbl_8035FA94
	lfs      f1, lbl_8051E748@sda21(r2)
	bl       isOutOfTerritory__Q34Game10KingChappy3ObjFf
	clrlwi.  r0, r3, 0x18
	beq      lbl_8035FA94
	b        lbl_8035FE94

lbl_8035FA94:
	lwz      r6, 0xc0(r31)
	mr       r3, r31
	lfs      f3, lbl_8051E750@sda21(r2)
	addi     r4, r1, 8
	lfs      f1, 0x44c(r6)
	li       r5, 0
	lfs      f2, 0x49c(r6)
	fmuls    f0, f1, f1
	lfs      f4, lbl_8051E74C@sda21(r2)
	stfs     f1, 8(r1)
	fmuls    f1, f3, f2
	stfs     f0, 8(r1)
	fmuls    f31, f4, f1
	lwz      r6, 0xc0(r31)
	lfs      f1, 0x49c(r6)
	lfs      f2, 0x44c(r6)
	bl
"getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
	stw      r3, 0x230(r31)
	lis      r3, "__vt__22Iterator<Q24Game4Piki>"@ha
	li       r0, 0
	lfs      f0, lbl_8051E754@sda21(r2)
	lwz      r5, 0xc0(r31)
	cmplwi   r0, 0
	lfs      f1, 0x190(r31)
	addi     r4, r3, "__vt__22Iterator<Q24Game4Piki>"@l
	lfs      f2, 0x8e4(r5)
	lwz      r3, pikiMgr__4Game@sda21(r13)
	fsubs    f28, f1, f0
	fmuls    f30, f2, f2
	stw      r4, 0x6c(r1)
	fadds    f29, f0, f1
	stw      r0, 0x78(r1)
	stw      r0, 0x70(r1)
	stw      r3, 0x74(r1)
	bne      lbl_8035FB38
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x70(r1)
	b        lbl_8035FE3C

lbl_8035FB38:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x70(r1)
	b        lbl_8035FBA4

lbl_8035FB50:
	lwz      r3, 0x74(r1)
	lwz      r4, 0x70(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x78(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8035FE3C
	lwz      r3, 0x74(r1)
	lwz      r4, 0x70(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x70(r1)

lbl_8035FBA4:
	lwz      r12, 0x6c(r1)
	addi     r3, r1, 0x6c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8035FB50
	b        lbl_8035FE3C

lbl_8035FBC4:
	lwz      r3, 0x74(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r29, r3
	li       r30, 0
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8035FC28
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8035FC28
	mr       r3, r29
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8035FC28
	li       r30, 1

lbl_8035FC28:
	clrlwi.  r0, r30, 0x18
	beq      lbl_8035FD80
	mr       r4, r29
	addi     r3, r1, 0x60
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x64(r1)
	fcmpo    cr0, f0, f28
	blt      lbl_8035FD80
	fcmpo    cr0, f0, f29
	bgt      lbl_8035FD80
	mr       r4, r29
	addi     r3, r1, 0x24
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0x24(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x30
	lfs      f1, 0x28(r1)
	lfs      f0, 0x2c(r1)
	lwz      r12, 8(r12)
	stfs     f2, 0xc(r1)
	stfs     f1, 0x10(r1)
	stfs     f0, 0x14(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x30(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x38(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0xc(r1)
	lfs      f0, 0x14(r1)
	lfs      f4, 0x34(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x18(r1)
	stfs     f4, 0x1c(r1)
	stfs     f3, 0x20(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f25, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f25
	bl       angDist__Fff
	fabs     f0, f1
	frsp     f0, f0
	fcmpo    cr0, f0, f31
	cror     2, 0, 2
	bne      lbl_8035FD80
	mr       r4, r29
	addi     r3, r1, 0x48
	lwz      r12, 0(r29)
	lfs      f25, 0x194(r31)
	lwz      r12, 8(r12)
	lfs      f26, 0x18c(r31)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x54
	lwz      r12, 0(r29)
	lfs      f27, 0x50(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fsubs    f1, f27, f25
	lfs      f2, 0x54(r1)
	lfs      f0, 8(r1)
	fsubs    f2, f2, f26
	fmuls    f1, f1, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8035FD80
	fcmpo    cr0, f1, f30
	ble      lbl_8035FD80
	stw      r29, 0x230(r31)
	stfs     f1, 8(r1)

lbl_8035FD80:
	lwz      r0, 0x78(r1)
	cmplwi   r0, 0
	bne      lbl_8035FDAC
	lwz      r3, 0x74(r1)
	lwz      r4, 0x70(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x70(r1)
	b        lbl_8035FE3C

lbl_8035FDAC:
	lwz      r3, 0x74(r1)
	lwz      r4, 0x70(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x70(r1)
	b        lbl_8035FE20

lbl_8035FDCC:
	lwz      r3, 0x74(r1)
	lwz      r4, 0x70(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x78(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8035FE3C
	lwz      r3, 0x74(r1)
	lwz      r4, 0x70(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x70(r1)

lbl_8035FE20:
	lwz      r12, 0x6c(r1)
	addi     r3, r1, 0x6c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8035FDCC

lbl_8035FE3C:
	lwz      r3, 0x74(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x70(r1)
	cmplw    r4, r3
	bne      lbl_8035FBC4
	lwz      r4, 0x230(r31)
	cmplwi   r4, 0
	beq      lbl_8035FE94
	lwz      r12, 0(r4)
	addi     r3, r1, 0x3c
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x3c(r1)
	stfs     f0, 0x2bc(r31)
	lfs      f0, 0x40(r1)
	stfs     f0, 0x2c0(r31)
	lfs      f0, 0x44(r1)
	stfs     f0, 0x2c4(r31)

lbl_8035FE94:
	psq_l    f31, 248(r1), 0, qr0
	lfd      f31, 0xf0(r1)
	psq_l    f30, 232(r1), 0, qr0
	lfd      f30, 0xe0(r1)
	psq_l    f29, 216(r1), 0, qr0
	lfd      f29, 0xd0(r1)
	psq_l    f28, 200(r1), 0, qr0
	lfd      f28, 0xc0(r1)
	psq_l    f27, 184(r1), 0, qr0
	lfd      f27, 0xb0(r1)
	psq_l    f26, 168(r1), 0, qr0
	lfd      f26, 0xa0(r1)
	psq_l    f25, 152(r1), 0, qr0
	lfd      f25, 0x90(r1)
	lwz      r31, 0x8c(r1)
	lwz      r30, 0x88(r1)
	lwz      r0, 0x104(r1)
	lwz      r29, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x100
	blr
	*/
}

/*
 * --INFO--
 * Address:	8035FEE8
 * Size:	000040
 */
void Obj::isOutOfTerritory(f32)
{
	/*
	lfs      f2, 0x1a0(r3)
	lfs      f0, 0x194(r3)
	lwz      r4, 0xc0(r3)
	fsubs    f4, f2, f0
	lfs      f2, 0x198(r3)
	lfs      f3, 0x35c(r4)
	lfs      f0, 0x18c(r3)
	fmuls    f3, f1, f3
	fsubs    f2, f2, f0
	fmuls    f1, f4, f4
	fmuls    f0, f3, f3
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	mfcr     r0
	rlwinm   r3, r0, 2, 0x1f, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	8035FF28
 * Size:	0000DC
 */
bool Obj::forceTransit(int stateID)
{
	int currStateID = getStateID();
	switch (stateID) {
	case KINGCHAPPY_Appear:
		if (currStateID == KINGCHAPPY_HideWait) {
			mFsm->transit(this, stateID, nullptr);
			break;
		}
		return false;
	case KINGCHAPPY_WarCry:
		if (currStateID == KINGCHAPPY_Walk && mToFlick > 0.0f) {
			_2E4 = 1;
			mFsm->transit(this, stateID, nullptr);
			break;
		}
		return false;
	default:
		return false;
	}

	return true;
}

/*
 * --INFO--
 * Address:	80360004
 * Size:	000030
 */
void Obj::requestTransit(int stateID) { static_cast<Mgr*>(mMgr)->requestState(this, stateID); }

/*
 * --INFO--
 * Address:	80360034
 * Size:	00012C
 */
void Obj::walkFunc()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stfd     f29, 0x10(r1)
	psq_st   f29, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	mr       r31, r3
	lbz      r0, 0x394(r3)
	lwz      r3, 0xc0(r3)
	cmplwi   r0, 0
	lfs      f31, 0x2e4(r3)
	lfs      f30, 0x334(r3)
	lfs      f29, 0x30c(r3)
	beq      lbl_80360088
	lfs      f31, 0xa9c(r3)
	lfs      f30, 0xaec(r3)
	lfs      f29, 0xac4(r3)

lbl_80360088:
	mr       r3, r31
	bl       searchTarget__Q34Game10KingChappy3ObjFv
	fmr      f1, f31
	mr       r3, r31
	fmr      f2, f29
	addi     r4, r31, 0x2bc
	fmr      f3, f30
	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff" lwz
r3, 0x30c(r31) addi     r0, r3, 1 stw      r0, 0x30c(r31) lwz      r0,
0x30c(r31) cmpwi    r0, 0x78 ble      lbl_80360134 lfs      f1, 0x194(r31) lfs
f0, 0x2fc(r31) lfs      f2, 0x18c(r31) fsubs    f3, f1, f0 lfs      f1,
0x2f4(r31) lfs      f0, lbl_8051E758@sda21(r2) fsubs    f2, f2, f1 fmuls    f1,
f3, f3 fmadds   f1, f2, f2, f1 fcmpo    cr0, f1, f0 bge      lbl_80360114 li r3,
0x78 li       r0, 0 stw      r3, 0x2f0(r31) stw      r0, 0x230(r31) lfs      f0,
0x198(r31) stfs     f0, 0x2bc(r31) lfs      f0, 0x19c(r31) stfs     f0,
0x2c0(r31) lfs      f0, 0x1a0(r31) stfs     f0, 0x2c4(r31)

lbl_80360114:
	lfs      f0, 0x18c(r31)
	li       r0, 0
	stfs     f0, 0x2f4(r31)
	lfs      f0, 0x190(r31)
	stfs     f0, 0x2f8(r31)
	lfs      f0, 0x194(r31)
	stfs     f0, 0x2fc(r31)
	stw      r0, 0x30c(r31)

lbl_80360134:
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	psq_l    f29, 24(r1), 0, qr0
	lfd      f29, 0x10(r1)
	lwz      r0, 0x44(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80360160
 * Size:	0001AC
 */
void Obj::turnFunc(float)
{
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
	stw      r31, 0x3c(r1)
	mr       r31, r3
	fmr      f27, f1
	lwz      r4, 0x230(r3)
	lfs      f30, 0x2bc(r3)
	cmplwi   r4, 0
	lfs      f31, 0x2c4(r3)
	beq      lbl_803601D0
	lwz      r12, 0(r4)
	addi     r3, r1, 0x20
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f30, 0x20(r1)
	lfs      f31, 0x28(r1)

lbl_803601D0:
	lbz      r0, 0x394(r31)
	lwz      r3, 0xc0(r31)
	cmplwi   r0, 0
	lfs      f29, 0x334(r3)
	lfs      f28, 0x30c(r3)
	beq      lbl_803601F0
	lfs      f29, 0xaec(r3)
	lfs      f28, 0xac4(r3)

lbl_803601F0:
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f4, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x18(r1)
	fsubs    f1, f30, f4
	fsubs    f2, f31, f0
	stfs     f4, 8(r1)
	stfs     f3, 0xc(r1)
	stfs     f0, 0x10(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f31, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f31
	bl       angDist__Fff
	fmuls    f4, f29, f27
	lfs      f0, lbl_8051E750@sda21(r2)
	fmuls    f3, f28, f27
	lfs      f2, lbl_8051E74C@sda21(r2)
	fmr      f30, f1
	fmuls    f0, f0, f4
	fmuls    f31, f30, f3
	fmuls    f1, f2, f0
	fabs     f0, f31
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_803602A4
	lfs      f0, lbl_8051E68C@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_803602A0
	fmr      f31, f1
	b        lbl_803602A4

lbl_803602A0:
	fneg     f31, f1

lbl_803602A4:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f31, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	fmr      f1, f30
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
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
	lwz      r0, 0x94(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036030C
 * Size:	000034
 */
void Obj::isReachToGoal(f32)
{
	/*
	fmuls    f0, f1, f1
	lfs      f2, 0x194(r3)
	lfs      f1, 0x2c4(r3)
	lfs      f3, 0x18c(r3)
	fsubs    f2, f2, f1
	lfs      f1, 0x2bc(r3)
	fsubs    f3, f3, f1
	fmuls    f1, f2, f2
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f0
	mfcr     r0
	srwi     r3, r0, 0x1f
	blr
	*/
}

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	0000D8
//  */
// void Obj::isUseTurn()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80360340
 * Size:	000844
 */
void Obj::checkAttack(bool)
{
	/*
	stwu     r1, -0x240(r1)
	mflr     r0
	stw      r0, 0x244(r1)
	stfd     f31, 0x230(r1)
	psq_st   f31, 568(r1), 0, qr0
	stfd     f30, 0x220(r1)
	psq_st   f30, 552(r1), 0, qr0
	stfd     f29, 0x210(r1)
	psq_st   f29, 536(r1), 0, qr0
	stfd     f28, 0x200(r1)
	psq_st   f28, 520(r1), 0, qr0
	stfd     f27, 0x1f0(r1)
	psq_st   f27, 504(r1), 0, qr0
	stfd     f26, 0x1e0(r1)
	psq_st   f26, 488(r1), 0, qr0
	stfd     f25, 0x1d0(r1)
	psq_st   f25, 472(r1), 0, qr0
	stfd     f24, 0x1c0(r1)
	psq_st   f24, 456(r1), 0, qr0
	stfd     f23, 0x1b0(r1)
	psq_st   f23, 440(r1), 0, qr0
	stfd     f22, 0x1a0(r1)
	psq_st   f22, 424(r1), 0, qr0
	stmw     r26, 0x188(r1)
	mr       r30, r3
	mr       r31, r4
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 2
	beq      lbl_80360B20
	clrlwi.  r0, r31, 0x18
	beq      lbl_803603F0
	lwz      r28, 0x184(r30)
	cmplwi   r28, 0
	bne      lbl_803603E4
	lis      r3, lbl_804915E8@ha
	lis      r5, lbl_804915F8@ha
	addi     r3, r3, lbl_804915E8@l
	li       r4, 0x44a
	addi     r5, r5, lbl_804915F8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803603E4:
	lbz      r0, 0x58(r28)
	cmplwi   r0, 0
	bne      lbl_80360B20

lbl_803603F0:
	lbz      r0, 0x394(r30)
	cmplwi   r0, 0
	beq      lbl_8036040C
	lwz      r3, 0xc0(r30)
	lfs      f27, 0xb3c(r3)
	lfs      f26, 0xb14(r3)
	b        lbl_80360418

lbl_8036040C:
	lwz      r3, 0xc0(r30)
	lfs      f27, 0x564(r3)
	lfs      f26, 0x58c(r3)

lbl_80360418:
	lwz      r3, 0x230(r30)
	cmplwi   r3, 0
	beq      lbl_80360878
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80360878
	lwz      r29, 0x230(r30)
	addi     r3, r1, 0x110
	lwz      r5, 0xc0(r30)
	mr       r4, r29
	lwz      r12, 0(r29)
	lfs      f28, 0x424(r5)
	lwz      r12, 8(r12)
	lfs      f29, 0x3fc(r5)
	lfs      f30, 0x3d4(r5)
	lfs      f31, 0x3ac(r5)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f2, 0x110(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x11c
	lfs      f1, 0x114(r1)
	lfs      f0, 0x118(r1)
	lwz      r12, 8(r12)
	stfs     f2, 0xf8(r1)
	stfs     f1, 0xfc(r1)
	stfs     f0, 0x100(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x11c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x124(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0xf8(r1)
	lfs      f0, 0x100(r1)
	lfs      f4, 0x120(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x104(r1)
	stfs     f4, 0x108(r1)
	stfs     f3, 0x10c(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r30)
	fmr      f22, f1
	mr       r3, r30
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f22
	bl       angDist__Fff
	mr       r4, r30
	fmr      f24, f1
	lwz      r12, 0(r30)
	addi     r3, r1, 0x134
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x128
	lwz      r12, 0(r29)
	lfs      f25, 0x134(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f0, 0x128(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x14c
	fsubs    f22, f0, f25
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x140
	lwz      r12, 0(r29)
	lfs      f25, 0x150(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f0, 0x144(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x164
	fsubs    f23, f0, f25
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x158
	lwz      r12, 0(r29)
	lfs      f25, 0x16c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x160(r1)
	fmuls    f1, f31, f31
	fmuls    f2, f30, f30
	li       r3, 1
	fsubs    f0, f0, f25
	li       r4, 0
	fmuls    f0, f0, f0
	fmadds   f0, f22, f22, f0
	fcmpo    cr0, f0, f1
	ble      lbl_803605FC
	fcmpo    cr0, f0, f2
	mr       r0, r4
	ble      lbl_803605F0
	fabs     f0, f23
	frsp     f0, f0
	fcmpo    cr0, f0, f29
	bge      lbl_803605F0
	mr       r0, r3

lbl_803605F0:
	clrlwi.  r0, r0, 0x18
	beq      lbl_803605FC
	li       r4, 1

lbl_803605FC:
	clrlwi.  r0, r4, 0x18
	bne      lbl_80360634
	lfs      f0, lbl_8051E750@sda21(r2)
	fabs     f2, f24
	lfs      f1, lbl_8051E74C@sda21(r2)
	fmuls    f0, f0, f28
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	mfcr     r0
	rlwinm.  r0, r0, 3, 0x1f, 0x1f
	beq      lbl_80360634
	li       r3, 0

lbl_80360634:
	clrlwi.  r0, r3, 0x18
	beq      lbl_80360648
	li       r0, 0
	stw      r0, 0x230(r30)
	b        lbl_80360878

lbl_80360648:
	lwz      r29, 0x230(r30)
	addi     r3, r1, 0xe0
	mr       r4, r29
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f2, 0xe0(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0xec
	lfs      f1, 0xe4(r1)
	lfs      f0, 0xe8(r1)
	lwz      r12, 8(r12)
	stfs     f2, 0xc8(r1)
	stfs     f1, 0xcc(r1)
	stfs     f0, 0xd0(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0xec(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0xf4(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0xc8(r1)
	lfs      f0, 0xd0(r1)
	lfs      f4, 0xf0(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0xd4(r1)
	stfs     f4, 0xd8(r1)
	stfs     f3, 0xdc(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r30)
	fmr      f22, f1
	mr       r3, r30
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f22
	bl       angDist__Fff
	mr       r4, r30
	fmr      f29, f1
	lwz      r12, 0(r30)
	addi     r3, r1, 0x8c
	li       r28, 0
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x80
	lwz      r12, 0(r29)
	lfs      f28, 0x8c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f0, 0x80(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0xa4
	fsubs    f23, f0, f28
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x98
	lwz      r12, 0(r29)
	lfs      f28, 0xa8(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f0, 0x9c(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0xbc
	fsubs    f22, f0, f28
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0xb0
	lwz      r12, 0(r29)
	lfs      f28, 0xc4(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fmuls    f1, f22, f22
	lfs      f2, 0xb8(r1)
	fmuls    f0, f27, f27
	fsubs    f2, f2, f28
	fmadds   f1, f23, f23, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_803607EC
	lfs      f0, lbl_8051E750@sda21(r2)
	fabs     f2, f29
	lfs      f1, lbl_8051E74C@sda21(r2)
	fmuls    f0, f0, f26
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_803607EC
	li       r28, 1

lbl_803607EC:
	clrlwi.  r0, r28, 0x18
	beq      lbl_80360878
	lwz      r4, 0x230(r30)
	addi     r3, r1, 0x17c
	lwz      r5, 0xc0(r30)
	lwz      r12, 0(r4)
	lfs      f22, 0x8e4(r5)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x194(r30)
	fmuls    f0, f22, f22
	lfs      f1, 0x184(r1)
	lfs      f3, 0x18c(r30)
	fsubs    f2, f2, f1
	lfs      f1, 0x17c(r1)
	fsubs    f3, f3, f1
	fmuls    f1, f2, f2
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80360870
	stb      r31, 0x2e4(r30)
	mr       r4, r30
	li       r5, 1
	li       r6, 0
	lwz      r3, 0x34c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0x230(r30)
	b        lbl_80360878

lbl_80360870:
	li       r0, 0
	stw      r0, 0x230(r30)

lbl_80360878:
	lwz      r3, 0xc0(r30)
	lbz      r0, 0xbcb(r3)
	cmplwi   r0, 0
	beq      lbl_80360B20
	lbz      r0, 0xd8(r30)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	bne      lbl_80360898
	b        lbl_80360B20

lbl_80360898:
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	li       r4, 0x24
	bl       getEnemyMgr__Q24Game15GeneralEnemyMgrFi
	or.      r27, r3, r3
	beq      lbl_80360B20
	lfs      f0, lbl_8051E750@sda21(r2)
	fmuls    f28, f27, f27
	lfs      f1, lbl_8051E74C@sda21(r2)
	li       r26, 0
	fmuls    f0, f0, f26
	fmuls    f29, f1, f0
	b        lbl_80360B04

lbl_803608C8:
	mr       r3, r27
	mr       r4, r26
	lwz      r12, 0(r27)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	or.      r28, r3, r3
	beq      lbl_80360B00
	bl       canEat__Q34Game4Bomb3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80360B00
	mr       r4, r28
	addi     r3, r1, 0x68
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f2, 0x68(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x74
	lfs      f1, 0x6c(r1)
	lfs      f0, 0x70(r1)
	lwz      r12, 8(r12)
	stfs     f2, 0x50(r1)
	stfs     f1, 0x54(r1)
	stfs     f0, 0x58(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x74(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x7c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x50(r1)
	lfs      f0, 0x58(r1)
	lfs      f4, 0x78(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x5c(r1)
	stfs     f4, 0x60(r1)
	stfs     f3, 0x64(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r30)
	fmr      f22, f1
	mr       r3, r30
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f22
	bl       angDist__Fff
	mr       r4, r30
	fmr      f27, f1
	lwz      r12, 0(r30)
	addi     r3, r1, 0x14
	li       r29, 0
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 8
	lwz      r12, 0(r28)
	lfs      f26, 0x14(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f0, 8(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x2c
	fsubs    f23, f0, f26
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x20
	lwz      r12, 0(r28)
	lfs      f26, 0x30(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f0, 0x24(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x44
	fsubs    f22, f0, f26
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x38
	lwz      r12, 0(r28)
	lfs      f26, 0x4c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fmuls    f0, f22, f22
	lfs      f1, 0x40(r1)
	fsubs    f1, f1, f26
	fmadds   f0, f23, f23, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f28
	bge      lbl_80360A80
	fabs     f0, f27
	frsp     f0, f0
	fcmpo    cr0, f0, f29
	cror     2, 0, 2
	bne      lbl_80360A80
	li       r29, 1

lbl_80360A80:
	clrlwi.  r0, r29, 0x18
	beq      lbl_80360B00
	mr       r4, r28
	lwz      r5, 0xc0(r30)
	lwz      r12, 0(r28)
	addi     r3, r1, 0x170
	lfs      f22, 0x8e4(r5)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x194(r30)
	fmuls    f0, f22, f22
	lfs      f1, 0x178(r1)
	lfs      f3, 0x18c(r30)
	fsubs    f2, f2, f1
	lfs      f1, 0x170(r1)
	fsubs    f3, f3, f1
	fmuls    f1, f2, f2
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80360B00
	stb      r31, 0x2e4(r30)
	mr       r4, r30
	li       r5, 1
	li       r6, 0
	lwz      r3, 0x34c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0x230(r30)

lbl_80360B00:
	addi     r26, r26, 1

lbl_80360B04:
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	cmpw     r26, r3
	blt      lbl_803608C8

lbl_80360B20:
	psq_l    f31, 568(r1), 0, qr0
	lfd      f31, 0x230(r1)
	psq_l    f30, 552(r1), 0, qr0
	lfd      f30, 0x220(r1)
	psq_l    f29, 536(r1), 0, qr0
	lfd      f29, 0x210(r1)
	psq_l    f28, 520(r1), 0, qr0
	lfd      f28, 0x200(r1)
	psq_l    f27, 504(r1), 0, qr0
	lfd      f27, 0x1f0(r1)
	psq_l    f26, 488(r1), 0, qr0
	lfd      f26, 0x1e0(r1)
	psq_l    f25, 472(r1), 0, qr0
	lfd      f25, 0x1d0(r1)
	psq_l    f24, 456(r1), 0, qr0
	lfd      f24, 0x1c0(r1)
	psq_l    f23, 440(r1), 0, qr0
	lfd      f23, 0x1b0(r1)
	psq_l    f22, 424(r1), 0, qr0
	lfd      f22, 0x1a0(r1)
	lmw      r26, 0x188(r1)
	lwz      r0, 0x244(r1)
	mtlr     r0
	addi     r1, r1, 0x240
	blr
	*/
}

/*
 * --INFO--
 * Address:	80360B84
 * Size:	00042C
 */
void Obj::checkFlick(bool)
{
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
	stw      r31, 0x7c(r1)
	stw      r30, 0x78(r1)
	stw      r29, 0x74(r1)
	mr       r30, r3
	mr       r31, r4
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 2
	beq      lbl_80360F74
	clrlwi.  r0, r31, 0x18
	beq      lbl_80360BE8
	lwz      r3, 0x184(r30)
	lbz      r0, 0x58(r3)
	cmplwi   r0, 0
	bne      lbl_80360F74

lbl_80360BE8:
	li       r0, 0
	lwz      r3, naviMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Navi>"@ha
	stw      r0, 0x5c(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
	cmplwi   r0, 0
	stw      r4, 0x50(r1)
	stw      r0, 0x54(r1)
	stw      r3, 0x58(r1)
	bne      lbl_80360C28
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)
	b        lbl_80360E84

lbl_80360C28:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)
	b        lbl_80360C94

lbl_80360C40:
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x5c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80360E84
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)

lbl_80360C94:
	lwz      r12, 0x50(r1)
	addi     r3, r1, 0x50
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80360C40
	b        lbl_80360E84

lbl_80360CB4:
	lwz      r3, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r29, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80360DC8
	mr       r4, r29
	lwz      r5, 0xc0(r30)
	lwz      r12, 0(r29)
	addi     r3, r1, 0x14
	lfs      f28, 0x8e4(r5)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	addi     r3, r1, 8
	lwz      r12, 0(r30)
	lfs      f31, 0x14(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	lfs      f0, 8(r1)
	lwz      r12, 0(r29)
	addi     r3, r1, 0x2c
	fsubs    f29, f0, f31
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	addi     r3, r1, 0x20
	lwz      r12, 0(r30)
	lfs      f31, 0x30(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	lfs      f0, 0x24(r1)
	lwz      r12, 0(r29)
	addi     r3, r1, 0x44
	fsubs    f30, f0, f31
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	addi     r3, r1, 0x38
	lwz      r12, 0(r30)
	lfs      f31, 0x4c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fmuls    f1, f30, f30
	lfs      f2, 0x40(r1)
	fmuls    f0, f28, f28
	fsubs    f2, f2, f31
	fmadds   f1, f29, f29, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80360DC8
	lfs      f1, 0x20c(r30)
	lfs      f0, lbl_8051E6C8@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, 0x20c(r30)

lbl_80360DC8:
	lwz      r0, 0x5c(r1)
	cmplwi   r0, 0
	bne      lbl_80360DF4
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)
	b        lbl_80360E84

lbl_80360DF4:
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)
	b        lbl_80360E68

lbl_80360E14:
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x5c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80360E84
	lwz      r3, 0x58(r1)
	lwz      r4, 0x54(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x54(r1)

lbl_80360E68:
	lwz      r12, 0x50(r1)
	addi     r3, r1, 0x50
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80360E14

lbl_80360E84:
	lwz      r3, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x54(r1)
	cmplw    r4, r3
	bne      lbl_80360CB4
	mr       r3, r30
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_80360F74
	stb      r31, 0x2e4(r30)
	lfs      f1, lbl_8051E75C@sda21(r2)
	lwz      r29, 0xc0(r30)
	lfs      f2, 0x200(r30)
	lfs      f0, 0x104(r29)
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	bge      lbl_80360F54
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x64(r1)
	lfd      f3, lbl_8051E740@sda21(r2)
	stw      r0, 0x60(r1)
	lfs      f1, lbl_8051E730@sda21(r2)
	lfd      f2, 0x60(r1)
	lfs      f0, 0x9fc(r29)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80360F30
	lwz      r3, 0x34c(r30)
	mr       r4, r30
	li       r5, 4
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	b        lbl_80360F74

lbl_80360F30:
	lwz      r3, 0x34c(r30)
	mr       r4, r30
	li       r5, 3
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	b        lbl_80360F74

lbl_80360F54:
	lwz      r3, 0x34c(r30)
	mr       r4, r30
	li       r5, 3
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_80360F74:
	psq_l    f31, 184(r1), 0, qr0
	lfd      f31, 0xb0(r1)
	psq_l    f30, 168(r1), 0, qr0
	lfd      f30, 0xa0(r1)
	psq_l    f29, 152(r1), 0, qr0
	lfd      f29, 0x90(r1)
	psq_l    f28, 136(r1), 0, qr0
	lfd      f28, 0x80(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r0, 0xc4(r1)
	lwz      r29, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0xc0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80360FB0
 * Size:	0000EC
 */
void Obj::checkDead(bool)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 2
	beq      lbl_80361084
	clrlwi.  r0, r31, 0x18
	beq      lbl_80360FF0
	lwz      r3, 0x184(r30)
	lbz      r0, 0x58(r3)
	cmplwi   r0, 0
	bne      lbl_80361084

lbl_80360FF0:
	lfs      f1, 0x200(r30)
	lfs      f0, lbl_8051E68C@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80361084
	stb      r31, 0x2e4(r30)
	lwz      r31, 0xc0(r30)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_8051E740@sda21(r2)
	stw      r0, 8(r1)
	lfs      f1, lbl_8051E730@sda21(r2)
	lfd      f2, 8(r1)
	lfs      f0, 0x9d4(r31)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80361064
	lwz      r3, 0x34c(r30)
	mr       r4, r30
	li       r5, 4
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	b        lbl_80361084

lbl_80361064:
	lwz      r3, 0x34c(r30)
	mr       r4, r30
	li       r5, 2
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_80361084:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036109C
 * Size:	000128
 */
void Obj::checkTurn(bool)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r30, r3
	mr       r31, r4
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 2
	beq      lbl_803611A4
	clrlwi.  r0, r31, 0x18
	beq      lbl_803610E4
	lwz      r3, 0x184(r30)
	lbz      r0, 0x58(r3)
	cmplwi   r0, 0
	bne      lbl_803611A4

lbl_803610E4:
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
	lwz      r3, 0xc0(r30)
	fabs     f3, f1
	lfs      f1, lbl_8051E750@sda21(r2)
	lfs      f0, 0x81c(r3)
	lfs      f2, lbl_8051E74C@sda21(r2)
	frsp     f3, f3
	fmuls    f0, f1, f0
	fmuls    f0, f2, f0
	fcmpo    cr0, f3, f0
	ble      lbl_803611A4
	stb      r31, 0x2e4(r30)
	mr       r4, r30
	li       r5, 6
	li       r6, 0
	lwz      r3, 0x34c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_803611A4:
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	803611C4
 * Size:	00013C
 */
void Obj::startMotionSelf(int, SysShape::MotionListener*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stmw     r27, 0x1c(r1)
	or.      r28, r5, r5
	mr       r31, r3
	mr       r27, r4
	bne      lbl_803611FC
	cmplwi   r31, 0
	beq      lbl_803611F8
	addi     r3, r3, 0x178

lbl_803611F8:
	mr       r28, r3

lbl_803611FC:
	lbz      r0, 0x2e4(r31)
	li       r30, 0
	lwz      r3, 0x184(r31)
	cmplwi   r0, 0
	beq      lbl_803612C4
	lbz      r0, 0x58(r3)
	cmplwi   r0, 0
	bne      lbl_803612C4
	lwz      r12, 0(r3)
	li       r4, 0
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r3)
	mr       r29, r3
	cmplwi   r4, 0
	beq      lbl_80361268
	lwz      r3, 0x18(r4)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	lha      r0, 6(r3)
	lfd      f1, lbl_8051E740@sda21(r2)
	xoris    r0, r0, 0x8000
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f1, f0, f1
	b        lbl_8036126C

lbl_80361268:
	lfs      f1, lbl_8051E68C@sda21(r2)

lbl_8036126C:
	lfs      f0, lbl_8051E6B8@sda21(r2)
	lfs      f31, 8(r29)
	fsubs    f0, f1, f0
	fcmpo    cr0, f0, f31
	ble      lbl_803612C4
	cmplwi   r4, 0
	beq      lbl_80361290
	lha      r4, 0x20(r4)
	b        lbl_80361294

lbl_80361290:
	li       r4, -1

lbl_80361294:
	cmpw     r27, r4
	beq      lbl_803612C4
	lfs      f1, lbl_8051E760@sda21(r2)
	mr       r3, r31
	mr       r5, r27
	addi     r6, r13, sBlendLinearFun__Q24Game22EnemyBlendAnimatorBase@sda21
	li       r7, 0
	bl
startBlend__Q24Game9EnemyBaseFiiPQ28SysShape13BlendFunctionfPQ28SysShape14MotionListener
	fmr      f1, f31
	mr       r3, r29
	bl       setCurrFrame__Q28SysShape8AnimatorFf
	li       r30, 1

lbl_803612C4:
	clrlwi.  r0, r30, 0x18
	bne      lbl_803612DC
	mr       r3, r31
	mr       r4, r27
	mr       r5, r28
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener

lbl_803612DC:
	li       r0, 0
	stb      r0, 0x2e4(r31)
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80361300
 * Size:	000098
 */
void Obj::endBlendAnimation()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	li       r4, 1
	lwz      r3, 0x184(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r3)
	cmplwi   r4, 0
	beq      lbl_8036134C
	lha      r31, 0x20(r4)
	b        lbl_80361350

lbl_8036134C:
	li       r31, -1

lbl_80361350:
	lfs      f31, 8(r3)
	mr       r3, r30
	bl       endBlend__Q24Game9EnemyBaseFv
	mr       r3, r30
	mr       r4, r31
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	fmr      f1, f31
	mr       r3, r30
	bl       setMotionFrame__Q24Game9EnemyBaseFf
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80361398
 * Size:	000044
 */
void Obj::leftFootMtxCalc()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r5, r3, 0x314
	addi     r6, r3, 0x320
	stw      r0, 0x14(r1)
	lwz      r4, 0x174(r3)
	lhz      r0, 0x310(r3)
	lwz      r4, 8(r4)
	mulli    r0, r0, 0x30
	lwz      r4, 0x84(r4)
	lwz      r4, 0xc(r4)
	add      r4, r4, r0
	bl       "footMtxCalc__Q34Game10KingChappy3ObjFPA4_fP10Vector3<f>Pf"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803613DC
 * Size:	000044
 */
void Obj::rightFootMtxCalc()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r5, r3, 0x328
	addi     r6, r3, 0x334
	stw      r0, 0x14(r1)
	lwz      r4, 0x174(r3)
	lhz      r0, 0x324(r3)
	lwz      r4, 8(r4)
	mulli    r0, r0, 0x30
	lwz      r4, 0x84(r4)
	lwz      r4, 0xc(r4)
	add      r4, r4, r0
	bl       "footMtxCalc__Q34Game10KingChappy3ObjFPA4_fP10Vector3<f>Pf"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80361420
 * Size:	000190
 */
void Obj::footMtxCalc(Mtx, Vector3f*, f32*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r6
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r3, 0xc0(r3)
	lfs      f1, 0x190(r28)
	lfs      f0, 0xbd0(r3)
	lfs      f2, 0x1c(r4)
	fadds    f0, f1, f0
	fcmpo    cr0, f2, f0
	ble      lbl_803614F4
	lfs      f2, 0(r31)
	lfs      f0, lbl_8051E6D8@sda21(r2)
	lfs      f1, lbl_8051E6B8@sda21(r2)
	fadds    f0, f2, f0
	stfs     f0, 0(r31)
	lfs      f2, 0(r31)
	fcmpo    cr0, f2, f1
	fsubs    f3, f1, f2
	bge      lbl_803614D4
	lfs      f0, 0(r30)
	lfs      f1, 0xc(r29)
	fmuls    f0, f0, f3
	fmadds   f0, f2, f1, f0
	stfs     f0, 0xc(r29)
	lfs      f0, 4(r30)
	lfs      f2, 0(r31)
	fmuls    f0, f0, f3
	lfs      f1, 0x1c(r29)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x1c(r29)
	lfs      f0, 8(r30)
	lfs      f2, 0(r31)
	fmuls    f0, f0, f3
	lfs      f1, 0x2c(r29)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x2c(r29)
	b        lbl_80361590

lbl_803614D4:
	lfs      f3, 0x2c(r29)
	lfs      f2, 0x1c(r29)
	lfs      f0, 0xc(r29)
	stfs     f0, 0(r30)
	stfs     f2, 4(r30)
	stfs     f3, 8(r30)
	stfs     f1, 0(r31)
	b        lbl_80361590

lbl_803614F4:
	lfs      f2, 0(r31)
	lfs      f1, lbl_8051E764@sda21(r2)
	lfs      f0, lbl_8051E6C8@sda21(r2)
	fmuls    f1, f2, f1
	stfs     f1, 0(r31)
	lfs      f1, 0(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_8036154C
	lfs      f0, lbl_8051E68C@sda21(r2)
	fcmpu    cr0, f0, f1
	beq      lbl_80361544
	lwz      r3, cameraMgr__4Game@sda21(r13)
	li       r4, 6
	li       r6, 2
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	mr       r5, r30
	li       r4, 0xb
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"

lbl_80361544:
	lfs      f0, lbl_8051E68C@sda21(r2)
	stfs     f0, 0(r31)

lbl_8036154C:
	lfs      f1, lbl_8051E6B8@sda21(r2)
	lfs      f2, 0(r31)
	lfs      f0, 0xc(r29)
	fsubs    f3, f1, f2
	lfs      f1, 0(r30)
	fmuls    f0, f0, f3
	fmadds   f0, f2, f1, f0
	stfs     f0, 0xc(r29)
	lfs      f0, 0x190(r28)
	stfs     f0, 4(r30)
	stfs     f0, 0x1c(r29)
	lfs      f0, 0x2c(r29)
	lfs      f2, 0(r31)
	fmuls    f0, f0, f3
	lfs      f1, 8(r30)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x2c(r29)

lbl_80361590:
	lwz      r0, 0x24(r1)
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
 * Address:	803615B0
 * Size:	000078
 */
void Obj::resetFootPos()
{
	/*
	lwz      r4, 0x174(r3)
	lhz      r0, 0x310(r3)
	lwz      r4, 8(r4)
	mulli    r0, r0, 0x30
	lfs      f1, lbl_8051E68C@sda21(r2)
	lwz      r4, 0x84(r4)
	lwz      r4, 0xc(r4)
	add      r4, r4, r0
	lfs      f3, 0x2c(r4)
	lfs      f2, 0x1c(r4)
	lfs      f0, 0xc(r4)
	stfs     f0, 0x314(r3)
	stfs     f2, 0x318(r3)
	stfs     f3, 0x31c(r3)
	stfs     f1, 0x320(r3)
	lwz      r4, 0x174(r3)
	lhz      r0, 0x324(r3)
	lwz      r4, 8(r4)
	mulli    r0, r0, 0x30
	lwz      r4, 0x84(r4)
	lwz      r4, 0xc(r4)
	add      r4, r4, r0
	lfs      f3, 0x2c(r4)
	lfs      f2, 0x1c(r4)
	lfs      f0, 0xc(r4)
	stfs     f0, 0x328(r3)
	stfs     f2, 0x32c(r3)
	stfs     f3, 0x330(r3)
	stfs     f1, 0x334(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80361628
 * Size:	0000DC
 */
void Obj::fadeAllEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x350(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x358(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x354(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x35c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x360(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x364(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x368(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x36c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x370(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace KingChappy
} // namespace Game

namespace efx {

/*
 * --INFO--
 * Address:	80361704
 * Size:	000054
 */
void TKchYodareBaseChaseMtx::fade()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       fade__Q23efx5TSyncFv
	addi     r3, r31, 0x18
	lwz      r12, 0x18(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x34
	lwz      r12, 0x34(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace efx

namespace Game {
namespace KingChappy {

/*
 * --INFO--
 * Address:	80361758
 * Size:	000474
 */
void Obj::createEffect(int)
{
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	lis      r6, __vt__Q23efx3Arg@ha
	lis      r5, __vt__Q23efx12ArgKchYodare@ha
	stw      r0, 0xb4(r1)
	addi     r8, r6, __vt__Q23efx3Arg@l
	addi     r0, r5, __vt__Q23efx12ArgKchYodare@l
	lfs      f0, lbl_8051E6E0@sda21(r2)
	stw      r31, 0xac(r1)
	cmplwi   r4, 8
	mr       r31, r3
	stw      r8, 0x2c(r1)
	lfs      f1, 0x18c(r3)
	stfs     f1, 0x30(r1)
	lfs      f1, 0x190(r3)
	stfs     f1, 0x34(r1)
	lfs      f1, 0x194(r3)
	stfs     f1, 0x38(r1)
	lwz      r7, 0x18c(r3)
	lwz      r6, 0x190(r3)
	lwz      r5, 0x194(r3)
	stw      r7, 0x20(r1)
	stw      r6, 0x24(r1)
	lfs      f3, 0x20(r1)
	stw      r5, 0x28(r1)
	lfs      f2, 0x24(r1)
	stw      r8, 0x88(r1)
	lfs      f1, 0x28(r1)
	stfs     f3, 0x8c(r1)
	stfs     f2, 0x90(r1)
	stfs     f1, 0x94(r1)
	stw      r0, 0x88(r1)
	stfs     f0, 0x98(r1)
	bgt      lbl_80361BB8
	lis      r3, lbl_804E1D34@ha
	slwi     r0, r4, 2
	addi     r3, r3, lbl_804E1D34@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_803617F8

lbl_803617F8:
	lwz      r3, 0x340(r31)
	cmplwi   r3, 0
	beq      lbl_8036181C
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0(r3)
	stfs     f0, 0x98(r1)

lbl_8036181C:
	lwz      r3, 0x350(r31)
	addi     r4, r1, 0x88
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x350(r31)
	lfs      f1, 0x1f8(r31)
	bl       setGlobalScale__Q23efx22TKchYodareBaseChaseMtxFf
	b        lbl_80361BB8
	.global  lbl_80361844

lbl_80361844:
	lwz      r0, 0x280(r31)
	cmplwi   r0, 0
	beq      lbl_80361878
	lwz      r3, 0x358(r31)
	addi     r4, r1, 0x2c
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x358(r31)
	lfs      f1, 0x1f8(r31)
	bl       setGlobalScale__Q23efx11TKchDiveWatFf
	b        lbl_80361BB8

lbl_80361878:
	lwz      r3, 0x354(r31)
	addi     r4, r1, 0x2c
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x354(r31)
	lfs      f1, 0x1f8(r31)
	bl       setGlobalScale__Q23efx12TKchDiveSandFf
	b        lbl_80361BB8
	.global  lbl_803618A0

lbl_803618A0:
	lwz      r3, 0x35c(r31)
	addi     r4, r1, 0x2c
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x35c(r31)
	lfs      f1, 0x1f8(r31)
	bl       setGlobalScale__Q23efx9TKchCryABFf
	b        lbl_80361BB8
	.global  lbl_803618C8

lbl_803618C8:
	lwz      r3, 0x360(r31)
	addi     r4, r1, 0x2c
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x360(r31)
	lfs      f1, 0x1f8(r31)
	bl       setGlobalScale__Q23efx10TKchCryIndFf
	b        lbl_80361BB8
	.global  lbl_803618F0

lbl_803618F0:
	lfs      f3, 0x1f8(r31)
	lis      r3, __vt__Q23efx8ArgScale@ha
	stw      r7, 0x14(r1)
	addi     r0, r3, __vt__Q23efx8ArgScale@l
	stw      r6, 0x18(r1)
	lfs      f2, 0x14(r1)
	stw      r5, 0x1c(r1)
	lfs      f1, 0x18(r1)
	stw      r8, 0x74(r1)
	lfs      f0, 0x1c(r1)
	stfs     f2, 0x78(r1)
	stfs     f1, 0x7c(r1)
	stfs     f0, 0x80(r1)
	stw      r0, 0x74(r1)
	stfs     f3, 0x84(r1)
	lwz      r3, 0x2e0(r31)
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, __vt__Q23efx5TBase@ha
	li       r6, 0
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx8TSimple4@ha
	stw      r0, 0x54(r1)
	addi     r0, r4, __vt__Q23efx8TSimple4@l
	lis      r5, __vt__Q23efx11TSimpleMtx4@ha
	lis      r4, __vt__Q23efx10TKchDamage@ha
	stw      r0, 0x54(r1)
	addi     r0, r5, __vt__Q23efx11TSimpleMtx4@l
	li       r9, 0x21a
	li       r8, 0x21b
	stw      r0, 0x54(r1)
	addi     r0, r4, __vt__Q23efx10TKchDamage@l
	li       r7, 0x21c
	li       r5, 0x21d
	stw      r3, 0x70(r1)
	addi     r3, r1, 0x54
	addi     r4, r1, 0x74
	sth      r9, 0x58(r1)
	sth      r8, 0x5a(r1)
	sth      r7, 0x5c(r1)
	sth      r5, 0x5e(r1)
	stw      r6, 0x60(r1)
	stw      r6, 0x64(r1)
	stw      r6, 0x68(r1)
	stw      r6, 0x6c(r1)
	stw      r0, 0x54(r1)
	bl       create__Q23efx10TKchDamageFPQ23efx3Arg
	lwz      r3, 0x2e0(r31)
	bl       getWorldMatrix__Q28SysShape5JointFv
	stw      r3, 0x70(r1)
	b        lbl_80361BB8
	.global  lbl_803619B8

lbl_803619B8:
	lwz      r3, 0x364(r31)
	addi     r4, r1, 0x2c
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x364(r31)
	lfs      f1, 0x1f8(r31)
	bl       setGlobalScale__Q23efx13TKchSmokeHanaFf
	b        lbl_80361BB8
	.global  lbl_803619E0

lbl_803619E0:
	lwz      r3, 0x340(r31)
	cmplwi   r3, 0
	beq      lbl_80361A04
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0(r3)
	stfs     f0, 0x98(r1)

lbl_80361A04:
	lwz      r3, 0x368(r31)
	addi     r4, r1, 0x88
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x368(r31)
	lfs      f1, 0x1f8(r31)
	bl       setGlobalScale__Q23efx22TKchYodareBaseChaseMtxFf
	b        lbl_80361BB8
	.global  lbl_80361A2C

lbl_80361A2C:
	lwz      r3, 0x340(r31)
	cmplwi   r3, 0
	beq      lbl_80361A50
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0(r3)
	stfs     f0, 0x98(r1)

lbl_80361A50:
	lwz      r3, 0x36c(r31)
	addi     r4, r1, 0x88
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x36c(r31)
	lfs      f1, 0x1f8(r31)
	bl       setGlobalScale__Q23efx22TKchYodareBaseChaseMtxFf
	lwz      r3, 0x370(r31)
	addi     r4, r1, 0x2c
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x370(r31)
	lfs      f1, 0x1f8(r31)
	bl       setGlobalScale__Q23efx12TKchDeadHanaFf
	b        lbl_80361BB8
	.global  lbl_80361A9C

lbl_80361A9C:
	lwz      r0, 0x280(r31)
	cmplwi   r0, 0
	beq      lbl_80361BB8
	lwz      r3, 0x174(r31)
	addi     r4, r2, lbl_8051E768@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	stfs     f0, 0x37c(r31)
	stfs     f1, 0x380(r31)
	stfs     f2, 0x384(r31)
	lwz      r3, 0x280(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0(r3)
	lis      r4, __vt__Q23efx3Arg@ha
	lis      r3, __vt__Q23efx12ArgEnemyType@ha
	lfs      f0, lbl_8051E6B8@sda21(r2)
	stfs     f1, 0x380(r31)
	addi     r5, r4, __vt__Q23efx3Arg@l
	addi     r3, r3, __vt__Q23efx12ArgEnemyType@l
	li       r0, 0x1b
	lwz      r8, 0x37c(r31)
	addi     r4, r1, 0x3c
	lwz      r7, 0x380(r31)
	lwz      r6, 0x384(r31)
	stw      r8, 8(r1)
	stw      r7, 0xc(r1)
	lfs      f3, 8(r1)
	stw      r6, 0x10(r1)
	lfs      f2, 0xc(r1)
	stw      r5, 0x3c(r1)
	lfs      f1, 0x10(r1)
	stfs     f3, 0x40(r1)
	stfs     f2, 0x44(r1)
	stfs     f1, 0x48(r1)
	stw      r3, 0x3c(r1)
	stw      r0, 0x4c(r1)
	stfs     f0, 0x50(r1)
	lwz      r3, 0x374(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x174(r31)
	addi     r4, r2, lbl_8051E770@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	stfs     f0, 0x388(r31)
	stfs     f1, 0x38c(r31)
	stfs     f2, 0x390(r31)
	lwz      r3, 0x280(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0(r3)
	addi     r4, r1, 0x3c
	stfs     f0, 0x38c(r31)
	lwz      r3, 0x378(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80361BB8:
	lwz      r0, 0xb4(r1)
	lwz      r31, 0xac(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80361BCC
 * Size:	000140
 */
void Obj::fadeEffect(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r4, 8
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bgt      lbl_80361CF8
	lis      r3, lbl_804E1D58@ha
	slwi     r0, r4, 2
	addi     r3, r3, lbl_804E1D58@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_80361C00

lbl_80361C00:
	lwz      r3, 0x350(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_80361CF8
	.global  lbl_80361C18

lbl_80361C18:
	lwz      r3, 0x358(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x354(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_80361CF8
	.global  lbl_80361C44

lbl_80361C44:
	lwz      r3, 0x35c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_80361CF8
	.global  lbl_80361C5C

lbl_80361C5C:
	lwz      r3, 0x360(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_80361CF8
	.global  lbl_80361C74

lbl_80361C74:
	lwz      r3, 0x364(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_80361CF8
	.global  lbl_80361C8C

lbl_80361C8C:
	lwz      r3, 0x368(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_80361CF8
	.global  lbl_80361CA4

lbl_80361CA4:
	lwz      r3, 0x36c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x370(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_80361CF8
	.global  lbl_80361CD0

lbl_80361CD0:
	lwz      r3, 0x374(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x378(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	.global  lbl_80361CF8

lbl_80361CF8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80361D0C
 * Size:	0000C8
 */
void Obj::createBounceEffect()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	lwz      r0, 0x280(r3)
	cmplwi   r0, 0
	beq      lbl_80361D34
	lfs      f1, lbl_8051E778@sda21(r2)
	addi     r4, r3, 0x18c
	bl       "createSplashDownEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
	b        lbl_80361DC4

lbl_80361D34:
	lwz      r8, 0x18c(r3)
	lis      r4, __vt__Q23efx5TBase@ha
	lwz      r6, 0x190(r3)
	addi     r0, r4, __vt__Q23efx5TBase@l
	lwz      r7, 0x194(r3)
	lis      r5, __vt__Q23efx3Arg@ha
	lfs      f3, 0x1f8(r3)
	lis      r4, __vt__Q23efx8TSimple1@ha
	stw      r8, 8(r1)
	addi     r9, r5, __vt__Q23efx3Arg@l
	lis      r8, __vt__Q23efx8ArgScale@ha
	lis      r3, __vt__Q23efx13TKchDownsmoke@ha
	stw      r6, 0xc(r1)
	li       r6, 0x227
	lfs      f2, 8(r1)
	li       r5, 0
	stw      r7, 0x10(r1)
	addi     r7, r4, __vt__Q23efx8TSimple1@l
	lfs      f1, 0xc(r1)
	addi     r8, r8, __vt__Q23efx8ArgScale@l
	stw      r0, 0x14(r1)
	addi     r0, r3, __vt__Q23efx13TKchDownsmoke@l
	lfs      f0, 0x10(r1)
	addi     r3, r1, 0x14
	stw      r9, 0x20(r1)
	addi     r4, r1, 0x20
	stw      r7, 0x14(r1)
	stfs     f2, 0x24(r1)
	stfs     f1, 0x28(r1)
	stfs     f0, 0x2c(r1)
	stw      r8, 0x20(r1)
	stfs     f3, 0x30(r1)
	sth      r6, 0x18(r1)
	stw      r5, 0x1c(r1)
	stw      r0, 0x14(r1)
	bl       create__Q23efx13TKchDownsmokeFPQ23efx3Arg

lbl_80361DC4:
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

} // namespace KingChappy
} // namespace Game
