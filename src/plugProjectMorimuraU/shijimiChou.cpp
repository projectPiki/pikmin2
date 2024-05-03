#include "Game/Entities/ShijimiChou.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/MapMgr.h"
#include "Game/Stickers.h"
#include "Game/gamePlayData.h"
#include "Game/Entities/ItemHoney.h"
#include "Game/EnemyFunc.h"
#include "Game/Navi.h"
#include "efx/TChou.h"
#include "PSM/Cluster.h"
#include "Dolphin/rand.h"

namespace Game {
namespace ShijimiChou {

static const char unusedName[] = "shijimiChou";

static J2DGXColorS10 mMatColorY0;
static J2DGXColorS10 mMatColorR0;
static J2DGXColorS10 mMatColorB0;
static GXColor mMatKColorY;
static GXColor mMatKColorR;
static GXColor mMatKColorB;

/**
 * @note Address: 0x80389634
 * @note Size: 0xA4
 */
void Obj::setParameters()
{
	EnemyBase::setParameters();
	f32 max        = C_PARMS->mMaxScale;
	f32 min        = C_PARMS->mMinScale;
	f32 randScale  = (max - min) * randFloat() + min;
	mScaleModifier = randScale;
	mScale         = Vector3f(randScale);
	mCollTree->mPart->setScale(randScale);
}

/**
 * @note Address: 0x803896D8
 * @note Size: 0x20
 */
void Obj::birth(Vector3f& pos, f32 faceDir) { EnemyBase::birth(pos, faceDir); }

/**
 * @note Address: 0x803896F8
 * @note Size: 0x24C
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	disableEvent(0, EB_LeaveCarcass);
	disableEvent(0, EB_DamageAnimEnabled);
	disableEvent(0, EB_DeathEffectEnabled);
	disableEvent(0, EB_PlatformCollEnabled);
	mUpdateContext.init(C_MGR->mUpdateMgr);

	mPitchRate       = randFloat();
	mPitchAmp        = 0.0f;
	mFlyTime         = 0;
	mGoalPosition    = mPosition;
	mYawRate         = 0.0f;
	mTargetFaceDir   = mFaceDir;
	mMapMinY         = 0.0f;
	mIsStuckToPiki   = false;
	mFallDir         = 0.0f;
	mZukanGoalHeight = mPosition.y;
	mHomePosition    = mPosition;
	mSpawningEnemy   = nullptr;
	mSpawnSource     = SHIJIMISOURCE_Null;

	if (mGroupLeader && mGroupLeader != this) {
		mSpawnSource = mGroupLeader->mSpawnSource;
	}

	disableEvent(0, EB_Cullable);
	mInPiklopedia = 0;
	shadowMgr->setForceVisible(this, true);

	mMatColorY0.r = 255;
	mMatColorY0.g = 255;
	mMatColorY0.b = 175;

	mMatColorR0.r = 255;
	mMatColorR0.g = 120;
	mMatColorR0.b = 180;

	mMatColorB0.r = 90;
	mMatColorB0.g = 30;
	mMatColorB0.b = 210;

	mMatKColorY.r = 85;
	mMatKColorY.g = 45;
	mMatKColorY.b = 10;

	mMatKColorR.r = 80;
	mMatKColorR.g = 10;
	mMatKColorR.b = 5;

	mMatKColorB.r = 5;
	mMatKColorB.g = 17;
	mMatKColorB.b = 5;

	J3DModelData* data = mModel->mJ3dModel->mModelData;
	u16 idx            = data->getMaterialName()->getIndex("mat_shijimi_hane_v");
	mMaterial          = data->getMaterialNodePointer(idx);
	P2ASSERTLINE(107, mMaterial);

	mFsm->start(this, SHIJIMICHOU_Wait, nullptr);
	mIsFallVertical = false;
}

/**
 * @note Address: 0x80389944
 * @note Size: 0x250
 */
Obj::Obj()
    : mSpecType(SHIJIMITYPE_Yellow)
    , mSpawnSource(SHIJIMISOURCE_Null)
    , mSpawningEnemy(nullptr)
    , mFsm(nullptr)
{
	mGroupLeader   = nullptr;
	mMaterial      = nullptr;
	mIsStuckToPiki = false;
	mGroupCount    = 0;
	mFlyType       = 0;
	mEfxDown       = nullptr;
	mSoundCluster  = nullptr;

	mAnimator = new ProperAnimator;
	setFSM(new FSM);

	mEfxDown = new efx::TChouDown(&mPosition);
	P2ASSERTLINE(140, mEfxDown);

	mSoundCluster = newPSCluster_SijimiChou(this);
	P2ASSERTLINE(143, mSoundCluster);
}

/**
 * @note Address: 0x80389BE0
 * @note Size: 0xAC
 */
void Obj::doUpdate()
{
	mFsm->exec(this);
	mPitchAmp = sinf(TAU * mPitchRate);
}

/**
 * @note Address: 0x80389C8C
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x80389C90
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x80389CB0
 * @note Size: 0x20
 */
void Obj::doAnimation() { EnemyBase::doAnimation(); }

/**
 * @note Address: 0x80389CD0
 * @note Size: 0x4C
 */
void Obj::doEntry()
{
	if (mGroupLeader == this) {
		if (gameSystem && gameSystem->isZukanMode()) {
			EnemyBase::doEntry();
		}
	} else {
		EnemyBase::doEntry();
	}
}

/**
 * @note Address: 0x80389D1C
 * @note Size: 0x1A0
 */
void Obj::doAnimationCullingOff()
{
	mCurAnim->mIsPlaying = false;
	doAnimationUpdateAnimator();
	if (mPellet) {
		viewMakeMatrix(mBaseTrMatrix);
		Matrixf mtx;
		PSMTXScale(mtx.mMatrix.mtxView, mScale.x, mScale.y, mScale.z);
		PSMTXConcat(mBaseTrMatrix.mMatrix.mtxView, mtx.mMatrix.mtxView, mBaseTrMatrix.mMatrix.mtxView);
		Vector3f pos;
		mBaseTrMatrix.getTranslation(pos);
		onSetPosition(pos);
		onSetPositionPost(pos);

	} else {
		mBaseTrMatrix.makeTR(mPosition, mRotation);
	}

	if (isCullingOff()) {
		PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);

		if (C_PARMS->mDoUpdateAnimation && getCurrAnimIndex() == 2 && getStateID() != SHIJIMICHOU_Rest) {
			J3DModel* model = mModel->getJ3DModel();
			C_MGR->fetch(model, getMotionFrame());

		} else {
			mModel->mJ3dModel->calc();
		}

	} else {
		mModel->mJ3dModel->mModelData->mJointTree.mJoints[0]->mMtxCalc = nullptr;
	}

	mCollTree->update();
	updateCluster();
}

/**
 * @note Address: 0x80389EBC
 * @note Size: 0xB8
 */
void Obj::doAnimationCullingOn()
{
	updateCluster();
	EnemyBase::doAnimationCullingOn();
	if (mGroupLeader && mGroupLeader != this) {
		if (mGroupLeader->getStateID() == SHIJIMICHOU_Leave) {
			kill(nullptr);
		} else if (FABS(mPosition.x - mHomePosition.x) > 3.0f * C_GENERALPARMS.mTerritoryRadius()
		           || FABS(mPosition.z - mHomePosition.z) > 3.0f * C_GENERALPARMS.mTerritoryRadius()) {
			kill(nullptr);
		}
	}
}

/**
 * @note Address: 0x80389F74
 * @note Size: 0x84
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	if (mGroupLeader && mGroupLeader != this) {
		mGroupLeader->mGroupCount--;
	}

	mSpawningEnemy = nullptr;
	mEfxDown->fade();
	mUpdateContext.exit();
	EnemyBase::onKill(killArg);
}

/**
 * @note Address: 0x80389FF8
 * @note Size: 0x438
 */
void Obj::doSimulation(f32 simSpeed)
{
	mAcceleration = Vector3f(0.0f);
	if (mSticked && !mIsStuckToPiki && getStateID() != SHIJIMICHOU_Dead) {
		P2ASSERTLINE(374, mGroupLeader != this);

		efx::ArgChou fxChou;

		if (mSpecType == SHIJIMITYPE_Red) {
			fxChou.mType = efx::CHOU_Red;
		} else if (mSpecType == SHIJIMITYPE_Purple) {
			fxChou.mType = efx::CHOU_Purple;
		}

		mEfxDown->create(&fxChou);

		efx::TChouHit hitFX;
		efx::Arg fxArg(mPosition);
		hitFX.create(&fxArg);

		mIsStuckToPiki = true;
		mFsm->transit(this, SHIJIMICHOU_Fall, nullptr);

		Stickers stickers(this);

		Iterator<Creature> iter(&stickers);
		CI_LOOP(iter)
		{
			Creature* stuck = *iter;
			if (stuck->isPiki()) {
				Vector3f pos = stuck->mClimbingPosition;
				pos *= 0.1f;
				stuck->mClimbingPosition = pos;
			}
		}
	}

	EnemyBase::doSimulation(simSpeed);
	if (isEvent(0, EB_Bittered) && (mPosition.y < mMapMinY + 2.0f || mFloorTriangle)) {
		if (gameSystem && gameSystem->isZukanMode()) {
			mGoalPosition.y = mZukanGoalHeight;
		} else {
			genItem();
			kill(nullptr);
		}
	}
}

/**
 * @note Address: 0x8038A430
 * @note Size: 0x26C
 */
void Obj::changeMaterial()
{
	if (mSpecType == SHIJIMITYPE_Yellow) {
		mMaterial->mTevBlock->setTevColor(0, mMatColorY0);
		mMaterial->mTevBlock->setTevKColor(0, mMatKColorY);
	} else if (mSpecType == SHIJIMITYPE_Red) {
		mMaterial->mTevBlock->setTevColor(0, mMatColorR0);
		mMaterial->mTevBlock->setTevKColor(0, mMatKColorR);
	} else {
		mMaterial->mTevBlock->setTevColor(0, mMatColorB0);
		mMaterial->mTevBlock->setTevKColor(0, mMatKColorB);
	}

	J3DModel* j3dModel      = mModel->mJ3dModel;
	J3DModelData* modelData = j3dModel->getModelData();
	j3dModel->calcMaterial();

	for (u16 i = 0; i < modelData->mMaterialTable.mMaterialNum; i++) {
		J3DMatPacket* packet  = &j3dModel->mMatPackets[i];
		j3dSys.mMatPacket     = packet;
		J3DMaterial* material = modelData->mMaterialTable.mMaterials[i];
		material->diff(packet->mShapePacket->mDiffFlag);
	}
}

/**
 * @note Address: 0x8038A69C
 * @note Size: 0x30
 */
void Obj::doStartMovie() { mEfxDown->startDemoDrawOff(); }

/**
 * @note Address: 0x8038A6CC
 * @note Size: 0x30
 */
void Obj::doEndMovie() { mEfxDown->endDemoDrawOn(); }

/**
 * @note Address: 0x8038A6FC
 * @note Size: 0x34
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	hardConstraintOff();
}

/**
 * @note Address: 0x8038A730
 * @note Size: 0x8
 */
bool Obj::damageCallBack(Creature*, f32, CollPart*) { return false; }

/**
 * @note Address: 0x8038A738
 * @note Size: 0x94
 */
void Obj::wallCallback(const MoveInfo& moveInfo)
{
	if (!gameSystem || !gameSystem->isZukanMode()) {
		if (getStateID() == SHIJIMICHOU_Fall) {
			mIsFallVertical = true;
		} else {
			mGoalPosition.x = 100.0f * moveInfo.mWallNormal.x + mPosition.x;
			mGoalPosition.y = mPosition.y;
			mGoalPosition.z = 100.0f * moveInfo.mWallNormal.z + mPosition.z;
		}
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r5, gameSystem__4Game@sda21(r13)
	cmplwi   r5, 0
	beq      lbl_8038A76C
	lwz      r0, 0x44(r5)
	cmpwi    r0, 4
	beq      lbl_8038A7B4

lbl_8038A76C:
	mr       r3, r30
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 2
	bne      lbl_8038A788
	li       r0, 1
	stb      r0, 0x321(r30)
	b        lbl_8038A7B4

lbl_8038A788:
	lfs      f2, 0x18c(r30)
	lfs      f1, lbl_8051EF24@sda21(r2)
	lfs      f0, 0x5c(r31)
	lfs      f3, 0x190(r30)
	fmadds   f2, f1, f0, f2
	lfs      f4, 0x194(r30)
	lfs      f0, 0x64(r31)
	stfs     f2, 0x304(r30)
	fmadds   f4, f1, f0, f4
	stfs     f3, 0x308(r30)
	stfs     f4, 0x30c(r30)

lbl_8038A7B4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x8038A7CC
 * @note Size: 0x64
 */
void Obj::collisionCallback(CollEvent& event)
{
	if (event.mCollidingCreature && event.mCollidingCreature->isPiki()) {
		EnemyBase::collisionCallback(event);
	}
}

/**
 * @note Address: 0x8038A830
 * @note Size: 0x28
 */
void Obj::startCarcassMotion() { startMotion(SHIJIMIANIM_Carry, nullptr); }

/**
 * @note Address: 0x8038A858
 * @note Size: 0x124
 */
void Obj::getShadowParam(ShadowParam& param)
{
	param.mPosition = mPosition;
	if (!C_PARMS->mDoUpdateAnimation || mUpdateContext.updatable() || mGroupLeader == this) {
		P2ASSERTLINE(601, mapMgr);

		mMapMinY = mapMgr->getMinY(param.mPosition);
	}

	param.mPosition.y               = 2.0f + mMapMinY;
	param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	param.mBoundingSphere.mRadius   = 20.0f;

	// adjust shadow size based on how much above/below home position we are
	f32 sizeFactor     = 1.0f;
	f32 heightFromHome = mPosition.y - mHomePosition.y;
	if (heightFromHome > 0.0f) {
		sizeFactor -= heightFromHome / 100.0f;
	}

	if (sizeFactor < 0.0f) {
		sizeFactor = 0.0f;
	}

	param.mSize = 7.0f * sizeFactor;
}

/**
 * @note Address: 0x8038A97C
 * @note Size: 0x23C
 */
void Obj::genItem()
{
	if (!gameSystem || !gameSystem->isZukanMode()) {
		mInPiklopedia = 1;

		if (mSpawnSource == SHIJIMISOURCE_Plants || !(randFloat() > C_PROPERPARMS.mNectarRate())) {
			if (mSpecType == SHIJIMITYPE_Red) {
				if (playData && !playData->isDemoFlag(DEMO_First_Spicy_Spray_Made)) {
					return;
				}
			} else if (mSpecType == SHIJIMITYPE_Purple) {
				if (playData && !playData->isDemoFlag(DEMO_First_Bitter_Spray_Made)) {
					return;
				}
			}

			Vector3f nectarVel = Vector3f(sinf(mFaceDir) * 50.0f, 200.0f, sinf(mFaceDir) * 50.0f);
			Vector3f nectarPos = mPosition;
			nectarPos.y += 2.0f;

			BaseItem* item = ItemHoney::mgr->birth();
			if (item) {
				ItemHoney::Item* nectar = static_cast<ItemHoney::Item*>(item);
				nectar->init(nullptr);
				nectar->mHoneyType = mSpecType;
				nectar->setPosition(nectarPos, false);
				nectar->setVelocity(nectarVel);
			}
		}
	}
}

/**
 * @note Address: 0x8038ABB8
 * @note Size: 0x80
 */
bool Obj::checkFlyStart()
{
	if (gameSystem && gameSystem->isZukanMode() && mSpawnSource != SHIJIMISOURCE_Enemy) {
		return false;
	}

	if (mGroupLeader) {
		if (mGroupLeader == this) {
			return true;
		}

		return (mGroupLeader->getStateID() != SHIJIMICHOU_Wait);
	}

	return true;
}

/**
 * @note Address: 0x8038AC38
 * @note Size: 0x3BC
 */
void Obj::fly()
{
	if (mGroupLeader != this && (!gameSystem || !gameSystem->isZukanMode())) {
		enableEvent(0, EB_Cullable);
	}

	mPitchRate += C_PROPERPARMS.mPitchRate();
	mPosition.y += mPitchAmp * C_PROPERPARMS.mPitchAmpRate();

	if (mPitchRate > 1.0f) {
		mPitchRate -= 1.0f;
	}

	mCurrentVelocity.y = 0.0f;

	if (sqrDistanceXZ(mPosition, mGoalPosition) < 1000.0f) {
		setNextGoal();
		return;
	}

	f32 moveSpeed = C_GENERALPARMS.mMoveSpeed();
	if (!C_PARMS->mDoManualFlight) {
		EnemyFunc::walkToTarget(this, mGoalPosition, moveSpeed, C_GENERALPARMS.mTurnSpeed(), C_GENERALPARMS.mMaxTurnAngle());
	} else {
		f32 rotAccel = C_GENERALPARMS.mTurnSpeed();
		f32 rotSpeed = C_GENERALPARMS.mMaxTurnAngle();

		mYawRate += C_PARMS->mYawRate;
		if (mYawRate > 360.0f) {
			mYawRate -= 360.0f;
		}

		f32 sinVal = (f32)sin(mYawRate);
		sinVal *= C_PARMS->mRotateFaceDirFactor;
		f32 faceDirOffset = TORADIANS(sinVal);
		mFaceDir          = mTargetFaceDir;
		turnToTarget2(mGoalPosition, rotAccel, rotSpeed);

		f32 angle = mFaceDir + faceDirOffset;
		f32 x     = moveSpeed * sinf(angle);
		f32 y     = getTargetVelocity().y;
		f32 z     = moveSpeed * cosf(angle);

		mTargetFaceDir = angle;
		if (absF(faceDirOffset) > rotSpeed) {
			if (faceDirOffset > 0.0f) {
				faceDirOffset = rotSpeed;
			} else {
				faceDirOffset = -rotSpeed;
			}
		}
		updateFaceDir(mFaceDir + roundAng(faceDirOffset));

		mTargetVelocity = Vector3f(x, y, z);
	}

	mPosition.y += 0.01f * (mGoalPosition.y - mPosition.y);
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
	stfd     f27, 0x50(r1)
	psq_st   f27, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	mr       r31, r3
	lwz      r0, 0x2e8(r3)
	cmplw    r0, r31
	beq      lbl_8038ACA4
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8038AC98
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	beq      lbl_8038ACA4

lbl_8038AC98:
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 0x40
	stw      r0, 0x1e0(r31)

lbl_8038ACA4:
	lwz      r3, 0xc0(r31)
	lfs      f2, 0x2f0(r31)
	lfs      f1, 0x8bc(r3)
	lfs      f0, lbl_8051EF28@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x2f0(r31)
	lwz      r3, 0xc0(r31)
	lfs      f3, 0x2f4(r31)
	lfs      f2, 0x8e4(r3)
	lfs      f1, 0x190(r31)
	fmadds   f1, f3, f2, f1
	stfs     f1, 0x190(r31)
	lfs      f1, 0x2f0(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_8038ACE8
	fsubs    f0, f1, f0
	stfs     f0, 0x2f0(r31)

lbl_8038ACE8:
	lfs      f1, lbl_8051EF08@sda21(r2)
	lfs      f0, lbl_8051EF3C@sda21(r2)
	stfs     f1, 0x1cc(r31)
	lfs      f2, 0x194(r31)
	lfs      f1, 0x30c(r31)
	lfs      f3, 0x18c(r31)
	fsubs    f2, f2, f1
	lfs      f1, 0x304(r31)
	fsubs    f3, f3, f1
	fmuls    f1, f2, f2
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8038AD28
	mr       r3, r31
	bl       setNextGoal__Q34Game11ShijimiChou3ObjFv
	b        lbl_8038AFB8

lbl_8038AD28:
	lwz      r3, 0xc0(r31)
	lbz      r0, 0x94a(r3)
	lfs      f30, 0x2e4(r3)
	cmplwi   r0, 0
	bne      lbl_8038AD58
	fmr      f1, f30
	lfs      f2, 0x30c(r3)
	lfs      f3, 0x334(r3)
	mr       r3, r31
	addi     r4, r31, 0x304
	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff" b
lbl_8038AFA0

lbl_8038AD58:
	lfs      f1, 0x2f8(r31)
	lfs      f0, 0x95c(r3)
	lfs      f31, 0x30c(r3)
	fadds    f1, f1, f0
	lfs      f29, 0x334(r3)
	lfs      f0, lbl_8051EF40@sda21(r2)
	stfs     f1, 0x2f8(r31)
	lfs      f1, 0x2f8(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_8038AD88
	fsubs    f0, f1, f0
	stfs     f0, 0x2f8(r31)

lbl_8038AD88:
	lfs      f1, 0x2f8(r31)
	bl       sin
	lwz      r3, 0xc0(r31)
	frsp     f3, f1
	lfs      f0, 0x2fc(r31)
	mr       r4, r31
	lfs      f1, 0x958(r3)
	addi     r3, r1, 0x14
	lfs      f2, lbl_8051EF48@sda21(r2)
	fmuls    f1, f1, f3
	stfs     f0, 0x1fc(r31)
	lfs      f3, lbl_8051EF44@sda21(r2)
	lwz      r12, 0(r31)
	fmuls    f0, f2, f1
	lwz      r12, 8(r12)
	fmuls    f28, f3, f0
	mtctr    r12
	bctrl
	lfs      f5, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x304(r31)
	lfs      f0, 0x30c(r31)
	lfs      f4, 0x18(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 8(r1)
	stfs     f4, 0xc(r1)
	stfs     f3, 0x10(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f27, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f27
	bl       angDist__Fff
	fmuls    f27, f1, f31
	lfs      f0, lbl_8051EF48@sda21(r2)
	lfs      f1, lbl_8051EF44@sda21(r2)
	fmuls    f0, f0, f29
	fabs     f2, f27
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_8038AE68
	lfs      f0, lbl_8051EF08@sda21(r2)
	fcmpo    cr0, f27, f0
	ble      lbl_8038AE64
	fmr      f27, f1
	b        lbl_8038AE68

lbl_8038AE64:
	fneg     f27, f1

lbl_8038AE68:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f27, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	lfs      f0, lbl_8051EF08@sda21(r2)
	lfs      f1, 0x1fc(r31)
	stfs     f1, 0x1a8(r31)
	lfs      f4, 0x1fc(r31)
	fadds    f3, f4, f28
	fcmpo    cr0, f3, f0
	bge      lbl_8038AED0
	lfs      f0, lbl_8051EF10@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_8038AEF4

lbl_8038AED0:
	lfs      f0, lbl_8051EF14@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_8038AEF4:
	lfs      f0, lbl_8051EF08@sda21(r2)
	fmuls    f31, f30, f2
	lfs      f1, 0x1d4(r31)
	lfs      f27, 0x1d8(r31)
	fcmpo    cr0, f3, f0
	lfs      f0, 0x1dc(r31)
	stfs     f1, 0x20(r1)
	stfs     f27, 0x24(r1)
	stfs     f0, 0x28(r1)
	bge      lbl_8038AF20
	fneg     f3, f3

lbl_8038AF20:
	lfs      f0, lbl_8051EF14@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	fabs     f2, f28
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f1, f3, f0
	frsp     f0, f2
	fctiwz   f1, f1
	fcmpo    cr0, f0, f29
	stfd     f1, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f0, 4(r3)
	fmuls    f30, f30, f0
	stfs     f4, 0x2fc(r31)
	ble      lbl_8038AF78
	lfs      f0, lbl_8051EF08@sda21(r2)
	fcmpo    cr0, f28, f0
	ble      lbl_8038AF74
	fmr      f28, f29
	b        lbl_8038AF78

lbl_8038AF74:
	fneg     f28, f29

lbl_8038AF78:
	fmr      f1, f28
	bl       roundAng__Ff
	lfs      f0, 0x1fc(r31)
	fadds    f0, f0, f1
	stfs     f0, 0x1fc(r31)
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	stfs     f31, 0x1d4(r31)
	stfs     f27, 0x1d8(r31)
	stfs     f30, 0x1dc(r31)

lbl_8038AFA0:
	lfs      f0, 0x308(r31)
	lfs      f1, 0x190(r31)
	lfs      f2, lbl_8051EF4C@sda21(r2)
	fsubs    f0, f0, f1
	fmadds   f0, f2, f0, f1
	stfs     f0, 0x190(r31)

lbl_8038AFB8:
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	psq_l    f30, 136(r1), 0, qr0
	lfd      f30, 0x80(r1)
	psq_l    f29, 120(r1), 0, qr0
	lfd      f29, 0x70(r1)
	psq_l    f28, 104(r1), 0, qr0
	lfd      f28, 0x60(r1)
	psq_l    f27, 88(r1), 0, qr0
	lfd      f27, 0x50(r1)
	lwz      r0, 0xa4(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/**
 * @note Address: 0x8038AFF4
 * @note Size: 0x108
 */
void Obj::restFly()
{
	mRotation.x += 0.2f * mRotation.x;
	if (mRotation.x > TAU) {
		mRotation.x = 0.0f;
	}

	mPitchRate += C_PROPERPARMS.mPitchRate();
	mPosition.y += mPitchAmp * C_PROPERPARMS.mPitchAmpRate();

	if (mPitchRate > 1.0f) {
		mPitchRate -= 1.0f;
	}

	mCurrentVelocity.y = 0.0f;

	if (sqrDistanceXZ(mPosition, mGoalPosition) < 1000.0f) {
		setNextGoal();
	} else {
		EnemyFunc::walkToTarget(this, mGoalPosition, C_GENERALPARMS.mMoveSpeed(), C_GENERALPARMS.mTurnSpeed(),
		                        C_GENERALPARMS.mMaxTurnAngle());
	}

	mPosition.y += 0.05f * (mGoalPosition.y - mPosition.y);
}

/**
 * @note Address: 0x8038B0FC
 * @note Size: 0xB4
 */
void Obj::restCheck()
{
	if (mGroupLeader && mGroupLeader->getStateID() != SHIJIMICHOU_Wait && getStateID() != SHIJIMICHOU_Dead) {
		startMotion(SHIJIMIANIM_Move, nullptr);
		mFsm->transit(this, SHIJIMICHOU_Fly, nullptr);
		mRotation.x = 0.0f;
		hardConstraintOff();
		if (gameSystem && gameSystem->isZukanMode()) {
			enableEvent(0, EB_Cullable);
		}
	}
}

/**
 * @note Address: 0x8038B1B0
 * @note Size: 0x370
 */
bool Obj::checkRestOn()
{
	P2ASSERTLINE(827, mSpawningEnemy);
	Sys::Sphere collSphere;
	static_cast<CollPart*>(mSpawningEnemy->mCollTree->mPart->mChild)->getSphere(collSphere);

	mRestEnemyCollSphere = collSphere;
	f32 rad              = collSphere.mRadius;
	f32 adjRad           = 1.2f * rad;
	adjRad *= adjRad;
	f32 dist = Vector3f(mPosition - collSphere.mPosition).sqrMagnitude();
	if (dist < adjRad) {
		mTargetVelocity.x *= 0.0f;
		mTargetVelocity.y *= 0.0f;
		mTargetVelocity.z *= 0.0f;
		mCurrentVelocity.x *= 0.0f;
		mCurrentVelocity.y *= 0.0f;
		mCurrentVelocity.z *= 0.0f;
		hardConstraintOn();

		if (dist > SQUARE(rad)) {
			collSphere.mPosition -= mPosition;
			collSphere.mPosition.normalise();

			mPosition += collSphere.mPosition;
			// more float math

			return true;
		}

		f32 angleDist = getAngDist2(collSphere.mPosition);
		updateFaceDir(roundAng(0.3f * angleDist + mFaceDir));
	}

	return false;
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	mr       r31, r3
	lwz      r0, 0x2c8(r3)
	cmplwi   r0, 0
	bne      lbl_8038B1FC
	lis      r3, lbl_80493FA0@ha
	lis      r5, lbl_80493FB0@ha
	addi     r3, r3, lbl_80493FA0@l
	li       r4, 0x33b
	addi     r5, r5, lbl_80493FB0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8038B1FC:
	lwz      r3, 0x2c8(r31)
	addi     r4, r1, 0x20
	lwz      r3, 0x114(r3)
	lwz      r3, 0(r3)
	lwz      r3, 0x10(r3)
	bl       getSphere__8CollPartFRQ23Sys6Sphere
	lfs      f1, 0x190(r31)
	lfs      f0, 0x24(r1)
	lfs      f30, 0x2c(r1)
	fsubs    f3, f1, f0
	lfs      f1, 0x18c(r31)
	lfs      f4, 0x20(r1)
	lfs      f2, 0x194(r31)
	lfs      f0, 0x28(r1)
	fsubs    f5, f1, f4
	fmuls    f1, f3, f3
	lfs      f3, lbl_8051EF58@sda21(r2)
	stfs     f4, 0x310(r31)
	fsubs    f4, f2, f0
	fmuls    f3, f3, f30
	lfs      f0, 0x24(r1)
	fmadds   f2, f5, f5, f1
	stfs     f0, 0x314(r31)
	fmuls    f0, f3, f3
	lfs      f1, 0x28(r1)
	fmadds   f31, f4, f4, f2
	stfs     f1, 0x318(r31)
	fcmpo    cr0, f31, f0
	lfs      f0, 0x2c(r1)
	stfs     f0, 0x31c(r31)
	bge      lbl_8038B4F8
	lfs      f0, 0x1d4(r31)
	mr       r3, r31
	lfs      f1, lbl_8051EF08@sda21(r2)
	fmuls    f0, f0, f1
	stfs     f0, 0x1d4(r31)
	lfs      f0, 0x1d8(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x1dc(r31)
	lfs      f0, 0x1c8(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x1c8(r31)
	lfs      f0, 0x1cc(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x1cc(r31)
	lfs      f0, 0x1d0(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x1d0(r31)
	bl       hardConstraintOn__Q24Game9EnemyBaseFv
	fmuls    f0, f30, f30
	fcmpo    cr0, f31, f0
	ble      lbl_8038B3B0
	lfs      f2, 0x20(r1)
	lfs      f1, 0x18c(r31)
	lfs      f5, 0x24(r1)
	fsubs    f6, f2, f1
	lfs      f4, 0x28(r1)
	lfs      f2, lbl_8051EF08@sda21(r2)
	stfs     f6, 0x20(r1)
	fmuls    f1, f6, f6
	lfs      f3, 0x190(r31)
	fsubs    f3, f5, f3
	stfs     f3, 0x24(r1)
	fmuls    f5, f3, f3
	lfs      f3, 0x194(r31)
	fadds    f1, f1, f5
	fsubs    f3, f4, f3
	fmuls    f4, f3, f3
	stfs     f3, 0x28(r1)
	fadds    f1, f4, f1
	fcmpo    cr0, f1, f2
	ble      lbl_8038B344
	fmadds   f1, f6, f6, f5
	fadds    f4, f4, f1
	fcmpo    cr0, f4, f2
	ble      lbl_8038B348
	frsqrte  f1, f4
	fmuls    f4, f1, f4
	b        lbl_8038B348

lbl_8038B344:
	fmr      f4, f2

lbl_8038B348:
	lfs      f1, lbl_8051EF08@sda21(r2)
	fcmpo    cr0, f4, f1
	ble      lbl_8038B380
	lfs      f1, lbl_8051EF28@sda21(r2)
	lfs      f3, 0x20(r1)
	fdivs    f4, f1, f4
	lfs      f2, 0x24(r1)
	lfs      f1, 0x28(r1)
	fmuls    f3, f3, f4
	fmuls    f2, f2, f4
	fmuls    f1, f1, f4
	stfs     f3, 0x20(r1)
	stfs     f2, 0x24(r1)
	stfs     f1, 0x28(r1)

lbl_8038B380:
	lfs      f2, 0x18c(r31)
	lfs      f1, 0x20(r1)
	fadds    f1, f2, f1
	stfs     f1, 0x18c(r31)
	lfs      f2, 0x190(r31)
	lfs      f1, 0x24(r1)
	fadds    f1, f2, f1
	stfs     f1, 0x190(r31)
	lfs      f2, 0x194(r31)
	lfs      f1, 0x28(r1)
	fadds    f1, f2, f1
	stfs     f1, 0x194(r31)

lbl_8038B3B0:
	lfs      f4, 0x2c(r1)
	lfs      f7, 0x24(r1)
	lfs      f6, 0x190(r31)
	fneg     f1, f4
	fadds    f5, f7, f4
	lfs      f2, lbl_8051EF20@sda21(r2)
	lfs      f3, lbl_8051EF44@sda21(r2)
	fmuls    f1, f2, f1
	fsubs    f2, f5, f6
	fcmpo    cr0, f5, f6
	fmuls    f2, f3, f2
	fdivs    f3, f2, f1
	bge      lbl_8038B3E8
	lfs      f3, lbl_8051EF08@sda21(r2)

lbl_8038B3E8:
	fsubs    f1, f7, f4
	fcmpo    cr0, f1, f6
	ble      lbl_8038B3F8
	lfs      f3, lbl_8051EF44@sda21(r2)

lbl_8038B3F8:
	lfs      f1, 0x1a4(r31)
	fcmpo    cr0, f31, f0
	lfs      f2, lbl_8051EF5C@sda21(r2)
	fsubs    f0, f3, f1
	fmadds   f0, f2, f0, f1
	stfs     f0, 0x1a4(r31)
	bge      lbl_8038B468
	lfs      f2, 0x1a4(r31)
	lfs      f0, lbl_8051EF4C@sda21(r2)
	fsubs    f1, f3, f2
	fabs     f1, f1
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8038B468
	lfs      f0, lbl_8051EF0C@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_8038B444
	fsubs    f0, f2, f0
	stfs     f0, 0x1a4(r31)

lbl_8038B444:
	lfs      f1, 0x1a4(r31)
	lfs      f0, lbl_8051EF08@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8038B460
	lfs      f0, lbl_8051EF0C@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, 0x1a4(r31)

lbl_8038B460:
	li       r3, 1
	b        lbl_8038B4FC

lbl_8038B468:
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f5, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x20(r1)
	lfs      f0, 0x28(r1)
	lfs      f4, 0x18(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 8(r1)
	stfs     f4, 0xc(r1)
	stfs     f3, 0x10(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f30, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f30
	bl       angDist__Fff
	lfs      f2, lbl_8051EF5C@sda21(r2)
	lfs      f0, 0x1fc(r31)
	fmadds   f1, f1, f2, f0
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)

lbl_8038B4F8:
	li       r3, 0

lbl_8038B4FC:
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	lwz      r0, 0x64(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/**
 * @note Address: 0x8038B520
 * @note Size: 0x2AC
 */
bool Obj::checkRestOff()
{
	P2ASSERTLINE(875, mSpawningEnemy);
	Sys::Sphere collSphere;
	Vector3f enemyPos = mSpawningEnemy->getPosition();
	static_cast<CollPart*>(mSpawningEnemy->mCollTree->mPart->mChild)->getSphere(collSphere);
	f32 rad       = 2.0f * SQUARE(collSphere.mRadius);
	Vector3f pos1 = mPosition;
	Vector3f sep  = pos1 - collSphere.mPosition;
	f32 dist      = sep.sqrMagnitude();

	if (dist > rad) {
		mPitchRate   = 0.0f;
		Vector3f pos = mPosition;
		collSphere.mPosition -= mPosition;
		collSphere.mPosition.normalise();
		collSphere.mPosition *= 100.0f;
		mGoalPosition = pos - collSphere.mPosition;

		return true;
	}

	collSphere.mPosition -= pos1;
	collSphere.mPosition.normalise();
	collSphere.mPosition *= 2.0f;
	mPosition -= collSphere.mPosition;
	return false;
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lwz      r0, 0x2c8(r3)
	cmplwi   r0, 0
	bne      lbl_8038B55C
	lis      r3, lbl_80493FA0@ha
	lis      r5, lbl_80493FB0@ha
	addi     r3, r3, lbl_80493FA0@l
	li       r4, 0x36b
	addi     r5, r5, lbl_80493FB0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8038B55C:
	lwz      r4, 0x2c8(r31)
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2c8(r31)
	addi     r4, r1, 0x14
	lwz      r3, 0x114(r3)
	lwz      r3, 0(r3)
	lwz      r3, 0x10(r3)
	bl       getSphere__8CollPartFRQ23Sys6Sphere
	lfs      f7, 0x190(r31)
	lfs      f3, 0x18(r1)
	lfs      f0, 0x20(r1)
	fsubs    f2, f7, f3
	lfs      f10, 0x18c(r31)
	lfs      f4, 0x14(r1)
	fmuls    f0, f0, f0
	lfs      f1, lbl_8051EF20@sda21(r2)
	fsubs    f9, f10, f4
	fmuls    f2, f2, f2
	lfs      f6, 0x194(r31)
	lfs      f5, 0x1c(r1)
	fmuls    f0, f1, f0
	fsubs    f8, f6, f5
	fmadds   f1, f9, f9, f2
	fmadds   f1, f8, f8, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8038B6D0
	lfs      f8, lbl_8051EF08@sda21(r2)
	stfs     f8, 0x2f0(r31)
	lfs      f2, 0x18c(r31)
	lfs      f1, 0x14(r1)
	lfs      f0, 0x190(r31)
	fsubs    f7, f1, f2
	lfs      f1, 0x194(r31)
	lfs      f6, 0x18(r1)
	lfs      f5, 0x1c(r1)
	stfs     f7, 0x14(r1)
	fmuls    f3, f7, f7
	lfs      f4, 0x190(r31)
	fsubs    f4, f6, f4
	stfs     f4, 0x18(r1)
	fmuls    f6, f4, f4
	lfs      f4, 0x194(r31)
	fadds    f3, f3, f6
	fsubs    f4, f5, f4
	fmuls    f5, f4, f4
	stfs     f4, 0x1c(r1)
	fadds    f3, f5, f3
	fcmpo    cr0, f3, f8
	ble      lbl_8038B64C
	fmadds   f3, f7, f7, f6
	fadds    f4, f5, f3
	fcmpo    cr0, f4, f8
	ble      lbl_8038B650
	frsqrte  f3, f4
	fmuls    f4, f3, f4
	b        lbl_8038B650

lbl_8038B64C:
	fmr      f4, f8

lbl_8038B650:
	lfs      f3, lbl_8051EF08@sda21(r2)
	fcmpo    cr0, f4, f3
	ble      lbl_8038B688
	lfs      f3, lbl_8051EF28@sda21(r2)
	lfs      f5, 0x14(r1)
	fdivs    f6, f3, f4
	lfs      f4, 0x18(r1)
	lfs      f3, 0x1c(r1)
	fmuls    f5, f5, f6
	fmuls    f4, f4, f6
	fmuls    f3, f3, f6
	stfs     f5, 0x14(r1)
	stfs     f4, 0x18(r1)
	stfs     f3, 0x1c(r1)

lbl_8038B688:
	lfs      f3, 0x14(r1)
	li       r3, 1
	lfs      f6, lbl_8051EF24@sda21(r2)
	lfs      f4, 0x18(r1)
	fmuls    f5, f3, f6
	lfs      f3, 0x1c(r1)
	fmuls    f4, f4, f6
	fmuls    f3, f3, f6
	fsubs    f2, f2, f5
	stfs     f5, 0x14(r1)
	fsubs    f0, f0, f4
	stfs     f4, 0x18(r1)
	fsubs    f1, f1, f3
	stfs     f3, 0x1c(r1)
	stfs     f2, 0x304(r31)
	stfs     f0, 0x308(r31)
	stfs     f1, 0x30c(r31)
	b        lbl_8038B7B8

lbl_8038B6D0:
	fsubs    f4, f4, f10
	lfs      f1, lbl_8051EF08@sda21(r2)
	fsubs    f3, f3, f7
	fsubs    f2, f5, f6
	fmuls    f0, f4, f4
	stfs     f4, 0x14(r1)
	fmuls    f5, f3, f3
	fmuls    f6, f2, f2
	stfs     f3, 0x18(r1)
	fadds    f0, f0, f5
	stfs     f2, 0x1c(r1)
	fadds    f0, f6, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8038B724
	fmadds   f0, f4, f4, f5
	fadds    f3, f6, f0
	fcmpo    cr0, f3, f1
	ble      lbl_8038B728
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8038B728

lbl_8038B724:
	fmr      f3, f1

lbl_8038B728:
	lfs      f0, lbl_8051EF08@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8038B760
	lfs      f0, lbl_8051EF28@sda21(r2)
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

lbl_8038B760:
	lfs      f2, 0x14(r1)
	li       r3, 0
	lfs      f3, lbl_8051EF20@sda21(r2)
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lfs      f0, 0x18c(r31)
	fsubs    f0, f0, f2
	stfs     f0, 0x18c(r31)
	lfs      f1, 0x190(r31)
	lfs      f0, 0x18(r1)
	fsubs    f0, f1, f0
	stfs     f0, 0x190(r31)
	lfs      f1, 0x194(r31)
	lfs      f0, 0x1c(r1)
	fsubs    f0, f1, f0
	stfs     f0, 0x194(r31)

lbl_8038B7B8:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x8038B7CC
 * @note Size: 0xFC
 */
void Obj::resetRestPos()
{
	P2ASSERTLINE(910, mSpawningEnemy);
	Sys::Sphere collSphere;
	Vector3f vec = mRestEnemyCollSphere.mPosition;
	static_cast<CollPart*>(mSpawningEnemy->mCollTree->mPart->mChild)->getSphere(collSphere);
	vec -= collSphere.mPosition;
	mRestEnemyCollSphere = collSphere;
	mPosition -= vec;
}

/**
 * @note Address: 0x8038B8C8
 * @note Size: 0x174
 */
void Obj::leave()
{
	if (mGroupLeader && mGroupLeader != this && mGroupLeader->isAlive()) {
		if (sqrDistanceXZ(mPosition, mGoalPosition) < 1000.0f) {
			setTraceGoal();
		}

		EnemyFunc::walkToTarget(this, mGoalPosition, C_GENERALPARMS.mMoveSpeed(), C_GENERALPARMS.mTurnSpeed(),
		                        C_GENERALPARMS.mMaxTurnAngle());
		mPosition.y += 0.02f * (mGoalPosition.y - mPosition.y);
		mPitchRate += C_PROPERPARMS.mPitchRate();

		mPosition.y += mPitchAmp * C_PROPERPARMS.mPitchAmpRate();

		if (mPitchRate > 1.0f) {
			mPitchRate -= 1.0f;
		}
	} else if (isCullingOff()) {
		f32 riseFactor = 3.0f;
		if (mPitchRate > 1.0f) {
			mPitchRate = 0.0f;
		}

		f32 val = mPitchAmp;
		if (mPitchAmp < 0.0f) {
			riseFactor = -1.0f;
			mPitchRate += 0.05f;
		} else {
			mPitchRate += 0.01f;
		}

		mPosition.y += riseFactor * val;
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2e8(r3)
	cmplwi   r3, 0
	beq      lbl_8038B9B8
	cmplw    r3, r31
	beq      lbl_8038B9B8
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8038B9B8
	lfs      f1, 0x194(r31)
	lfs      f0, 0x30c(r31)
	lfs      f2, 0x18c(r31)
	fsubs    f3, f1, f0
	lfs      f1, 0x304(r31)
	lfs      f0, lbl_8051EF3C@sda21(r2)
	fsubs    f2, f2, f1
	fmuls    f1, f3, f3
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8038B93C
	mr       r3, r31
	bl       setTraceGoal__Q34Game11ShijimiChou3ObjFv

lbl_8038B93C:
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	addi     r4, r31, 0x304
	lfs      f1, 0x2e4(r5)
	lfs      f2, 0x30c(r5)
	lfs      f3, 0x334(r5)
	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff" lfs
f0, 0x308(r31) lfs      f2, 0x190(r31) lfs      f3, lbl_8051EF60@sda21(r2) fsubs
f1, f0, f2 lfs      f0, lbl_8051EF28@sda21(r2) fmadds   f1, f3, f1, f2 stfs f1,
0x190(r31) lwz      r3, 0xc0(r31) lfs      f2, 0x2f0(r31) lfs      f1, 0x8bc(r3)
	fadds    f1, f2, f1
	stfs     f1, 0x2f0(r31)
	lwz      r3, 0xc0(r31)
	lfs      f3, 0x2f4(r31)
	lfs      f2, 0x8e4(r3)
	lfs      f1, 0x190(r31)
	fmadds   f1, f3, f2, f1
	stfs     f1, 0x190(r31)
	lfs      f1, 0x2f0(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_8038BA28
	fsubs    f0, f1, f0
	stfs     f0, 0x2f0(r31)
	b        lbl_8038BA28

lbl_8038B9B8:
	mr       r3, r31
	bl       isCullingOff__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8038BA28
	lfs      f1, 0x2f0(r31)
	lfs      f0, lbl_8051EF28@sda21(r2)
	lfs      f2, lbl_8051EF18@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8038B9E4
	lfs      f0, lbl_8051EF08@sda21(r2)
	stfs     f0, 0x2f0(r31)

lbl_8038B9E4:
	lfs      f3, 0x2f4(r31)
	lfs      f0, lbl_8051EF08@sda21(r2)
	fcmpo    cr0, f3, f0
	bge      lbl_8038BA0C
	lfs      f1, 0x2f0(r31)
	lfs      f0, lbl_8051EF54@sda21(r2)
	lfs      f2, lbl_8051EF64@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, 0x2f0(r31)
	b        lbl_8038BA1C

lbl_8038BA0C:
	lfs      f1, 0x2f0(r31)
	lfs      f0, lbl_8051EF4C@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, 0x2f0(r31)

lbl_8038BA1C:
	lfs      f0, 0x190(r31)
	fmadds   f0, f2, f3, f0
	stfs     f0, 0x190(r31)

lbl_8038BA28:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x8038BA3C
 * @note Size: 0x1AC
 */
void Obj::leaveInit()
{
	if (mGroupLeader && mGroupLeader == this) {
		Navi* navi = naviMgr->getActiveNavi();
		if (navi) {
			// run 'away' from navi
			Vector3f targetPos = navi->getPosition();
			f32 angle          = navi->getFaceDir();
			targetPos.x -= 500.0f * sinf(angle);
			targetPos.z -= 500.0f * cosf(angle);

			EnemyFunc::walkToTarget(this, targetPos, C_PARMS->mLeaveInitSpeedFactor * C_GENERALPARMS.mMoveSpeed(), 1.0f, 180.0f);
			Vector3f targetVel = getTargetVelocity();
			setVelocity(targetVel);
		}
	} else {
		setTraceGoal();
	}
}

/**
 * @note Address: 0x8038BBE8
 * @note Size: 0x210
 */
void Obj::setNextGoal()
{
	int stateID = getStateID();
	if (getFlyType() == 1 && stateID == SHIJIMICHOU_Fly && mGroupLeader && mGroupLeader != this
	    && (f32)mFlyTime < 0.5f * C_PROPERPARMS.mMaxFlyTime()) {
		setTraceGoal();
		return;
	}

	f32 radius = C_GENERALPARMS.mTerritoryRadius();
	if (mSpawnSource == SHIJIMISOURCE_Plants || mSpawnSource == SHIJIMISOURCE_Enemy) {
		radius = 100.0f;
	}

	radius *= 0.5f * randFloat() + 0.5f;
	mGoalPosition = mHomePosition;

	f32 randAngle = TAU * randFloat();

	f32 sinVal = sinf(randAngle);
	mGoalPosition.x += radius * sinVal;
	mGoalPosition.y += 50.0f * sinVal; // sure.
	mGoalPosition.z += radius * cosf(randAngle);
}

/**
 * @note Address: 0x8038BDF8
 * @note Size: 0x100
 */
void Obj::setTraceGoal()
{
	if (mGroupLeader) {
		Vector3f leaderPos = mGroupLeader->getPosition();
		f32 heightDiff     = (mPosition.y - leaderPos.y);
		heightDiff *= C_PARMS->mTraceGoalWeight;
		mGoalPosition = leaderPos;

		mGroupLeader->getFaceDir(); // ?

		f32 randVal = randFloat();
		f32 factor  = (heightDiff > 0.0f) ? -randVal : randVal;

		f32 randDist = factor * heightDiff;
		mGoalPosition.x += randDist;
		mGoalPosition.y += 10.0f * factor;
		mGoalPosition.z += randDist;
	}
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lwz      r4, 0x2e8(r3)
	cmplwi   r4, 0
	beq      lbl_8038BEDC
	lwz      r12, 0(r4)
	addi     r3, r1, 8
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc0(r31)
	lfs      f2, 0xc(r1)
	lfs      f0, 0x190(r31)
	lfs      f3, 0x10(r1)
	lfs      f1, 0x950(r3)
	fsubs    f31, f0, f2
	lfs      f0, 8(r1)
	stfs     f0, 0x304(r31)
	fmuls    f31, f31, f1
	stfs     f2, 0x308(r31)
	stfs     f3, 0x30c(r31)
	lwz      r3, 0x2e8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	lfs      f0, lbl_8051EF08@sda21(r2)
	stw      r0, 0x18(r1)
	lfd      f2, lbl_8051EF00@sda21(r2)
	fcmpo    cr0, f31, f0
	lfd      f1, 0x18(r1)
	lfs      f0, lbl_8051EEF8@sda21(r2)
	fsubs    f1, f1, f2
	fdivs    f0, f1, f0
	fmr      f3, f0
	ble      lbl_8038BEB0
	fneg     f3, f0

lbl_8038BEB0:
	fmuls    f2, f3, f31
	lfs      f0, 0x304(r31)
	lfs      f1, lbl_8051EF74@sda21(r2)
	fadds    f0, f0, f2
	stfs     f0, 0x304(r31)
	lfs      f0, 0x308(r31)
	fmadds   f0, f1, f3, f0
	stfs     f0, 0x308(r31)
	lfs      f0, 0x30c(r31)
	fadds    f0, f0, f2
	stfs     f0, 0x30c(r31)

lbl_8038BEDC:
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x8038BEF8
 * @note Size: 0x60
 */
bool Obj::isFallEnd()
{
	if (mPosition.y < 10.0f + mMapMinY || mFloorTriangle) {
		mEfxDown->fade();
		return true;
	}

	return false;
}

/**
 * @note Address: 0x8038BF58
 * @note Size: 0x28
 */
void Obj::deadEffect() { createBounceEffect(mPosition, 0.35f); }

/**
 * @note Address: 0x8038BF80
 * @note Size: 0x1C4
 */
void Obj::fallBehavior()
{
	if (!mIsFallVertical) {
		mFallDir += C_PARMS->mFallRotateRate;
		if (mFallDir > TAU) {
			mFallDir -= TAU;
		}

		f32 sinVal  = sinf(mFallDir);
		f32 dist    = C_PARMS->mHorizFallScatter;
		mPosition.x = dist * sinVal + mFallStartPosition.x;
		mPosition.z = (0.5f * dist) * sinVal + mFallStartPosition.z;
		mPosition.y += sinVal;

		Vector3f vel = getVelocity();
		if (vel.y < -C_PARMS->mMaxFallSpeed) {
			vel.y = -C_PARMS->mMaxFallSpeed;
		}
		setVelocity(vel);

	} else {
		Vector3f vel = getVelocity();
		if (vel.y < -C_PARMS->mMaxFallSpeed) {
			vel.y = -C_PARMS->mMaxFallSpeed;
		}

		vel.x = 0.0f;
		vel.z = 0.0f;
		setVelocity(vel);
	}
}

/**
 * @note Address: 0x8038C144
 * @note Size: 0xB0
 */
void Obj::updateCluster()
{
	if (mGroupLeader == this) {
		int count = mGroupCount;
		if (count > 40) {
			count = 40;
		}

		if (count <= 1 && getStateID() != SHIJIMICHOU_Wait) {
			kill(nullptr);
			mGroupLeader = nullptr;
			return;
		}

		P2ASSERTLINE(1170, mSoundCluster);
		mSoundCluster->startClusterSound(count);
	}
}

/**
 * @note Address: 0x8038C1F4
 * @note Size: 0x20
 */
int Obj::getFlyType()
{
	if (C_PARMS->mUseParmFlyType) {
		return C_PARMS->mFlyType;
	}

	return mFlyType;
}

/**
 * @note Address: 0x8038C214
 * @note Size: 0x6C
 */
void Obj::leaderInit()
{
	setAtari(false);
	if (gameSystem && !gameSystem->isZukanMode()) {
		enableEvent(0, EB_BitterImmune);
	}

	shadowMgr->delNormalShadow(this);
}

/**
 * @note Address: 0x8038C280
 * @note Size: 0xA8
 */
void Obj::createAppearEffect()
{
	if (mGroupLeader != this) {
		efx::ArgChou fxArg;
		if (mSpecType == SHIJIMITYPE_Red) {
			fxArg.mType = efx::CHOU_Red;
		} else if (mSpecType == SHIJIMITYPE_Purple) {
			fxArg.mType = efx::CHOU_Purple;
		}

		mEfxDown->create(&fxArg);
	}
}

/**
 * @note Address: 0x8038C328
 * @note Size: 0x30
 */
void Obj::fadeAppearEffect() { mEfxDown->fade(); }

} // namespace ShijimiChou
} // namespace Game
