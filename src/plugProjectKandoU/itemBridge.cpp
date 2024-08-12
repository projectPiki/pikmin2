#include "Game/Entities/ItemBridge.h"
#include "Game/routeMgr.h"
#include "Game/MapMgr.h"
#include "efx/TBridge.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "PSM/WorkItem.h"
#include "PSSystem/PSSystemIF.h"
#include "PlatAttacher.h"
#include "trig.h"

static f32 bridgeFirstPos[4] = { 42.5f, 12.5f, 42.5f, 12.5f };
static f32 bridgeGrad[4]     = { 0.0f, 8.0f, 0.0f, 0.0f };

namespace Game {
namespace ItemBridge {

static const char bridgeName[] = "itemBridge";

Mgr* mgr;

/**
 * @note Address: 0x801EDF74
 * @note Size: 0x84
 */
void FSM::init(Item* item)
{
	create(BRIDGE_StateCount);
	registerState(new NormalState(BRIDGE_Normal));
}

/**
 * @note Address: 0x801EDFF8
 * @note Size: 0x4
 */
void NormalState::init(Item*, StateArg*) { }

/**
 * @note Address: 0x801EDFFC
 * @note Size: 0x4
 */
void NormalState::exec(Item*) { }

/**
 * @note Address: 0x801EE000
 * @note Size: 0x4
 */
void NormalState::cleanup(Item*) { }

/**
 * @note Address: N/A
 * @note Size: 0xF4
 */
Item::Item()
    : WorkItem(OBJTYPE_Bridge)
    , mPlatInstanceAttacher()
{
	mMass         = 0.0f;
	mCurrStageIdx = 0;
}

/**
 * @note Address: 0x801EE004
 * @note Size: 0x180
 */
void Item::onInit(CreatureInitArg* settings)
{
	mBridgeType = BRIDGETYPE_Short;
	if (settings) {
		mBridgeType = ((BridgeInitArg*)settings)->mBridgeType;
	}

	mModel = new SysShape::Model(mgr->getModelData(mBridgeType), J3DMODEL_CreateNewDL, 2);
	mModel->mJ3dModel->calc();
	mModel->mJ3dModel->calcMaterial();
	mModel->mJ3dModel->makeDL();
	mModel->mJ3dModel->lock();
	mFsm->start(this, BRIDGE_Normal, nullptr);
	setAlive(true);

	mFaceDir = 0.0f;

	BridgeInfo* info = mgr->getBridgeInfo(mBridgeType);
	f32 stageLength  = mgr->mParms->mBridgeParms.mHealth.mValue;
	mStageCount      = info->mStageCount;
	mStageHealths    = new f32[mStageCount];
	for (int i = 0; i < mStageCount; i++) {
		mStageHealths[i] = stageLength;
	}

	mEndWP    = nullptr;
	mBridgeWP = nullptr;
	_1F8      = 0;
}

/**
 * @note Address: 0x801EE1B8
 * @note Size: 0x110
 */
void Item::update()
{
	mMabiki.update(5);
	doAI();
	updateBoundSphere();
	mSoundObj->exec();
	updateCell();

	if (mCellLayerIndex < 0 || mCellLayerIndex > 10) {
		getTypeName();
		JUT_PANICLINE(245, "cellLayerindex overflow\n");
	}

	do_updateLOD();
}

/**
 * @note Address: 0x801EE2C8
 * @note Size: 0x1B4
 */
void Item::getLODCylinder(Sys::Cylinder& cylinder)
{
	Vector3f start = getPosition();
	Vector3f end;
	switch (mBridgeType) {
	case BRIDGETYPE_Short:
		end = Vector3f(0.0f, 0.0f, 170.0f);
		break;
	case BRIDGETYPE_Sloped:
		end = Vector3f(0.0f, 40.0f, 80.0f);
		break;
	case BRIDGETYPE_Long:
		end = Vector3f(0.0f, 0.0f, 360.0f);
		break;
	}

	Matrixf mat;
	Vector3f scale = Vector3f(1.0f);
	Vector3f rot   = Vector3f(0.0f, mFaceDir, 0.0f);
	mat.makeSR(scale, rot);

	end = mat.mtxMult(end);
	end = end + start;

	Vector3f zVec = getBridgeZVec() * 100.0f;
	start         = start - zVec;

	cylinder.set(start, end, 90.0f);
}

/**
 * @note Address: 0x801EE47C
 * @note Size: 0x44
 */
void Item::do_updateLOD()
{
	AILODParm parm;
	parm.mIsCylinder = true;
	updateLOD(parm);
}

/**
 * @note Address: 0x801EE4C0
 * @note Size: 0x4
 */
void Item::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x801EE4C4
 * @note Size: 0x48
 */
void Item::constructor() { mSoundObj = new PSM::WorkItem(this); }

/**
 * @note Address: 0x801EE50C
 * @note Size: 0xFC
 */
void Item::doLoad(Stream& input)
{
	mCurrStageIdx = input.readInt();
	for (int i = 0; i < mStageCount; i++) {
		mStageHealths[i] = 0.0f;
	}
	f32 currentStageLength = input.readFloat();
	if (mCurrStageIdx >= mStageCount) {
		setAlive(false);
		if (mBridgeWP && mEndWP) {
			mBridgeWP->setOpen(true);
			mEndWP->setOpen(true);
			mBridgeWP->setWater(false);
			mEndWP->setWater(false);
		}
	} else {
		mStageHealths[mCurrStageIdx] = currentStageLength;
	}
	setCurrStage(mCurrStageIdx);
}

/**
 * @note Address: 0x801EE608
 * @note Size: 0x74
 */
void Item::doSave(Stream& output)
{
	output.writeInt(mCurrStageIdx);
	if (mCurrStageIdx >= mStageCount) {
		output.writeFloat(999.0f);
	} else {
		output.writeFloat(mStageHealths[mCurrStageIdx]);
	}
}

/**
 * @note Address: 0x801EE67C
 * @note Size: 0x90
 */
void Item::onSetPosition()
{
	Vector3f rot = Vector3f(0.0f, mFaceDir, 0.0f);
	mBaseTrMatrix.makeTR(mPosition, rot);
	doAnimation();
	mgr->setupPlatInstanceAttacher(this, mPlatInstanceAttacher);
	mPlatInstanceAttacher.fixCollision(true);
	createWayPoints();
	setCurrStage(0);
}

/**
 * @note Address: 0x801EE70C
 * @note Size: 0x24
 */
void Item::updateBoundSphere()
{
	mBoundingSphere.mPosition = mPosition;
	mBoundingSphere.mRadius   = 100.0f;
}

/**
 * @note Address: 0x801EE730
 * @note Size: 0x124
 */
void Item::changeMaterial()
{
	mPlatInstanceAttacher.setShapeVisibility();
	BridgeInfo* info = mgr->getBridgeInfo(mBridgeType);

	if (info->mFinalJointIdx != -1) {
		if (mCurrStageIdx == mStageCount) {
			for (int i = 0; i < info->mJointCount; i++) {
				if (i % 2 == 0) {
					mModel->jointVisible(false, info->mJointIndices[i]);
				} else {
					mModel->jointVisible(true, info->mJointIndices[i]);
				}
			}

			mModel->jointVisible(true, info->mFinalJointIdx);

		} else {
			mModel->jointVisible(false, info->mFinalJointIdx);
		}
	}
}

/**
 * @note Address: 0x801EE854
 * @note Size: 0x1A0
 */
void Item::doAI()
{
	mFsm->exec(this);
	switch (mSoundEvent.update()) {
	case TSE_ApplyTransition:
		P2ASSERTLINE(446, mSoundObj->getCastType() == PSM::CCT_WorkItem);
		static_cast<PSM::WorkItem*>(mSoundObj)->eventStop();
		break;
	}

	if (_1F8 != 0) {
		_1F8--;
		if (_1F8 == 0) {
			setCurrStage(mCurrStageIdx + 1);
			if (mCurrStageIdx == mStageCount) {
				setAlive(false);
				PSSystem::spSysIF->playSystemSe(PSSE_SY_WORK_FINISH, 0);

				if (mBridgeWP && mEndWP) {
					mBridgeWP->setOpen(true);
					mEndWP->setOpen(true);
					mBridgeWP->setWater(false);
					mEndWP->setWater(false);
				}

				mSoundEvent.finish();
				P2ASSERTLINE(471, mSoundObj->getCastType() == PSM::CCT_WorkItem);
				static_cast<PSM::WorkItem*>(mSoundObj)->eventFinish();
			}
		}
	}
}

/**
 * @note Address: 0x801EE9F4
 * @note Size: 0x28C
 */
void Item::setCurrStage(int stageIdx)
{
	BridgeInfo* info = mgr->getBridgeInfo(mBridgeType);

	if (info->mFinalJointIdx != -1) {
		if (stageIdx == mStageCount) {
			for (u16 i = 0; i < info->mJointCount; i++) {
				mPlatInstanceAttacher.setCollision(false, info->mJointIndices[i]);
			}
			mPlatInstanceAttacher.setCollision(true, info->mFinalJointIdx);

		} else {
			mPlatInstanceAttacher.setCollision(false, info->mFinalJointIdx);

			for (u16 i = 0; i < info->mJointCount; i++) {
				if (i <= stageIdx * 2) {
					if (i % 2 == 1 || i == stageIdx * 2) {
						mPlatInstanceAttacher.setCollision(true, info->mJointIndices[i]);
					} else {
						mPlatInstanceAttacher.setCollision(false, info->mJointIndices[i]);
					}
				} else {
					mPlatInstanceAttacher.setCollision(false, info->mJointIndices[i]);
				}
			}
		}

	} else {
		for (u16 i = 0; i < info->mJointCount; i++) {
			if (i <= stageIdx * 2) {
				if (i % 2 == 1 || i == stageIdx * 2) {
					mPlatInstanceAttacher.setCollision(true, info->mJointIndices[i]);
				} else {
					mPlatInstanceAttacher.setCollision(false, info->mJointIndices[i]);
				}
			} else {
				mPlatInstanceAttacher.setCollision(false, info->mJointIndices[i]);
			}
		}
	}

	mCurrStageIdx = stageIdx;

	if (mCurrStageIdx != -1) {
		Vector3f pos = getStagePos(mCurrStageIdx) - getBridgeZVec() * 5.0f;

		if (mBridgeWP) {
			mBridgeWP->mPosition = pos;
		}
	}
}

/**
 * @note Address: 0x801EEC80
 * @note Size: 0x1CC
 */
void Item::createWayPoints()
{
	Vector3f start = getStartPos();
	WPSearchArg startArg(start, nullptr, false, 10.0f);
	if (mapMgr && mapMgr->mRouteMgr) {
		mBridgeWP            = mapMgr->mRouteMgr->getNearestWayPoint(startArg);
		mBridgeWP->mPosition = start;
		mBridgeWP->setBridge(true);
		mBridgeWP->setOpen(false);
	} else {
		mBridgeWP = nullptr;
	}

	Vector3f end  = getStagePos(mStageCount - 1);
	Vector3f zVec = getBridgeZVec() * 40.0f;
	end += zVec;

	WPSearchArg endArg(end, nullptr, false, 10.0f);
	if (mapMgr && mapMgr->mRouteMgr) {
		mEndWP            = mapMgr->mRouteMgr->getNearestWayPoint(endArg);
		mEndWP->mPosition = end;
		mEndWP->setBridge(true);
		mEndWP->setOpen(false);

		mBridgeWP->setWater(false);
		mEndWP->setWater(false);
	} else {
		mEndWP = nullptr;
	}
}

/**
 * @note Address: 0x801EEE4C
 * @note Size: 0xE8
 */
Vector3f Item::getStagePos(int stageIdx)
{
	Vector3f stagePos;
	Vector3f zVec = getBridgeZVec() * getStageZ(stageIdx);
	stagePos      = mPosition + zVec;

	if (stageIdx >= 1) {
		stagePos.y += (stageIdx - 1) * bridgeGrad[mBridgeType];
	}

	return stagePos;
}

/**
 * @note Address: 0x801EEF34
 * @note Size: 0xA0
 */
Vector3f Item::getStartPos()
{
	Vector3f pos      = mPosition;
	Vector3f startPos = pos - getBridgeZVec() * 20.0f;
	return startPos;
}

/**
 * @note Address: 0x801EEFD4
 * @note Size: 0x5C
 */
f32 Item::getStageZ(int stageIdx)
{
	f32 z = -20.0f;
	if (stageIdx > 0) {
		z = (stageIdx - 1) * 20.0f + bridgeFirstPos[mBridgeType];
	}
	z -= 10.0f;
	return z;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
f32 Item::getStageDepth()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x801EF030
 * @note Size: 0x8
 */
f32 Item::getStageWidth() { return 150.0f; }

// need to increase the inline depth enough that this doesn't auto-inline anymore
#pragma dont_inline on
/**
 * @note Address: 0x801EF038
 * @note Size: 0xA4
 * Returns unit vector in direction of bridge unfurling (level with ground).
 */
Vector3f Item::getBridgeZVec() { return getDirection(mFaceDir); }
#pragma dont_inline reset

/**
 * @note Address: 0x801EF0DC
 * @note Size: 0xB8
 * Returns unit vector perpendicular to bridge unfurling (level with ground).
 */
Vector3f Item::getBridgeXVec() { return getPerpDirection(mFaceDir); }

/**
 * @note Address: 0x801EF194
 * @note Size: 0x1F0
 */
void Item::getBridgePos(Vector3f& pos, f32& p1, f32& p2)
{
	Vector3f bridgePos = mPosition;
	bridgePos -= getBridgeZVec() * 20.0f;
	Vector3f sep     = pos - bridgePos;
	sep.y            = 0.0f;
	Vector3f perpDir = getPerpDirection(mFaceDir);
	Vector3f dir     = getDirection(mFaceDir);

	p1 = sep.dot(dir);
	p2 = sep.dot(perpDir);

	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	stw      r29, 0x54(r1)
	stw      r28, 0x50(r1)
	mr       r28, r3
	mr       r29, r4
	lfs      f31, 0x19c(r3)
	mr       r30, r5
	lfs      f30, 0x1a4(r3)
	mr       r31, r6
	mr       r4, r28
	addi     r3, r1, 8
	bl       getBridgeZVec__Q34Game10ItemBridge4ItemFv
	lfs      f0, 8(r1)
	lfs      f2, lbl_80519B48@sda21(r2)
	lfs      f1, 0x10(r1)
	fmuls    f4, f0, f2
	lfs      f0, 0x1f4(r28)
	fmuls    f2, f1, f2
	lfs      f1, lbl_80519B10@sda21(r2)
	lfs      f3, 8(r29)
	fsubs    f4, f31, f4
	fsubs    f5, f30, f2
	lfs      f2, 0(r29)
	fcmpo    cr0, f0, f1
	fsubs    f4, f2, f4
	fsubs    f5, f3, f5
	bge      lbl_801EF24C
	lfs      f1, lbl_80519B58@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f1, f0, f1
	fctiwz   f1, f1
	stfd     f1, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r3, r0
	fneg     f2, f1
	b        lbl_801EF270

lbl_801EF24C:
	lfs      f1, lbl_80519B54@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f1, f0, f1
	fctiwz   f1, f1
	stfd     f1, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_801EF270:
	lfs      f1, lbl_80519B10@sda21(r2)
	fmr      f3, f0
	fneg     f6, f2
	fcmpo    cr0, f0, f1
	bge      lbl_801EF288
	fneg     f3, f0

lbl_801EF288:
	lfs      f2, lbl_80519B54@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f1, lbl_80519B10@sda21(r2)
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f2, f3, f2
	addi     r3, r3, 4
	fcmpo    cr0, f0, f1
	fmr      f8, f0
	fctiwz   f1, f2
	stfd     f1, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f7, r3, r0
	bge      lbl_801EF2C4
	fneg     f8, f0

lbl_801EF2C4:
	lfs      f3, lbl_80519B54@sda21(r2)
	lfs      f1, lbl_80519B10@sda21(r2)
	fmuls    f2, f8, f3
	fcmpo    cr0, f0, f1
	fctiwz   f1, f2
	stfd     f1, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0
	bge      lbl_801EF318
	lfs      f1, lbl_80519B58@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f3, f0
	b        lbl_801EF338

lbl_801EF318:
	fmuls    f0, f0, f3
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f3, r3, r0

lbl_801EF338:
	lfs      f0, lbl_80519B10@sda21(r2)
	fmadds   f1, f4, f7, f0
	fmadds   f0, f4, f3, f0
	fmadds   f1, f5, f6, f1
	fmadds   f0, f5, f2, f0
	stfs     f1, 0(r30)
	stfs     f0, 0(r31)
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r29, 0x54(r1)
	lwz      r0, 0x84(r1)
	lwz      r28, 0x50(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/**
 * @note Address: 0x801EF384
 * @note Size: 0x138
 */
bool Item::workable(Vector3f& vec)
{
	f32 x, z;
	getBridgePos(vec, x, z);

	if (mCurrStageIdx == mStageCount) {
		return false;
	}

	f32 rad = getStageZ(mCurrStageIdx);
	z -= 10.0f;
	if (z > rad + 10.0f) {
		return false;
	}

	if (z >= 0.0f && z <= rad) {
		if (FABS(x) >= 75.0f) {
			return false;
		}
	} else if (z < -100.0f) {
		return false;
	}

	if (FABS(x) >= 105.0f) {
		return false;
	}

	return true;
}

/**
 * @note Address: 0x801EF4BC
 * @note Size: 0x430
 */
bool Item::getVectorField(Sys::Sphere& sphere, Vector3f& vec)
{
	if (mCurrStageIdx == mStageCount) {
		return false;
	}
	Vector3f bridgePos = mPosition;
	bridgePos -= getBridgeZVec() * 20.0f;
	Vector3f pos = bridgePos - sphere.mPosition;

	f32 dist = pos.normalise();
	if (dist >= 300.0f) {
		vec = pos;
	} else {
		f32 x;
		f32 z;
		getBridgePos(sphere.mPosition, x, z);

		f32 stageZ = getStageZ(mCurrStageIdx);
		z -= 20.0f + stageZ;

		if (absF(x) < 60.0f) {
			if (z <= -10.0f) {
				vec = getDirection(mFaceDir);
			} else if (z <= 0.0f) {
				return false;
			} else {
				return false;
			}
		} else {
			Vector3f temp;
			if (z > -10.0f) {
				temp = getDirection(mFaceDir);
				temp *= -1.0f;
			} else {
				temp = getPerpDirection(mFaceDir);
				if (x > 0.0f) {
					temp *= -1.0f;
				}
			}
			vec = temp;
		}
	}
	return true;
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stfd     f29, 0x50(r1)
	psq_st   f29, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	stw      r29, 0x44(r1)
	mr       r29, r3
	mr       r30, r4
	lwz      r3, 0x218(r3)
	mr       r31, r5
	lwz      r0, 0x21c(r29)
	cmpw     r3, r0
	bne      lbl_801EF510
	li       r3, 0
	b        lbl_801EF8B8

lbl_801EF510:
	lfs      f31, 0x19c(r29)
	mr       r4, r29
	lfs      f30, 0x1a0(r29)
	addi     r3, r1, 0x10
	lfs      f29, 0x1a4(r29)
	bl       getBridgeZVec__Q34Game10ItemBridge4ItemFv
	lfs      f3, lbl_80519B48@sda21(r2)
	lfs      f0, 0x14(r1)
	lfs      f2, 0x10(r1)
	fmuls    f1, f0, f3
	lfs      f0, 0x18(r1)
	fmuls    f5, f2, f3
	lfs      f2, 4(r30)
	fmuls    f4, f0, f3
	lfs      f3, 8(r30)
	fsubs    f6, f30, f1
	lfs      f1, 0(r30)
	fsubs    f7, f29, f4
	lfs      f0, lbl_80519B10@sda21(r2)
	fsubs    f5, f31, f5
	fsubs    f4, f6, f2
	fsubs    f3, f7, f3
	fsubs    f2, f5, f1
	fmuls    f1, f4, f4
	fmuls    f5, f3, f3
	fmadds   f1, f2, f2, f1
	fadds    f1, f5, f1
	fcmpo    cr0, f1, f0
	ble      lbl_801EF594
	ble      lbl_801EF598
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_801EF598

lbl_801EF594:
	fmr      f1, f0

lbl_801EF598:
	lfs      f0, lbl_80519B10@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_801EF5BC
	lfs      f0, lbl_80519B24@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f2, f2, f0
	fmuls    f4, f4, f0
	fmuls    f3, f3, f0
	b        lbl_801EF5C0

lbl_801EF5BC:
	fmr      f1, f0

lbl_801EF5C0:
	lfs      f0, lbl_80519B68@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_801EF5E0
	stfs     f2, 0(r31)
	stfs     f4, 4(r31)
	stfs     f3, 8(r31)
	b        lbl_801EF8B4

lbl_801EF5E0:
	mr       r3, r29
	mr       r4, r30
	addi     r5, r1, 0xc
	addi     r6, r1, 8
	bl       "getBridgePos__Q34Game10ItemBridge4ItemFR10Vector3<f>RfRf"
	lwz      r3, 0x218(r29)
	lfs      f2, lbl_80519B4C@sda21(r2)
	cmpwi    r3, 0
	ble      lbl_801EF640
	addi     r0, r3, -1
	lis      r4, 0x4330
	xoris    r3, r0, 0x8000
	lhz      r0, 0x214(r29)
	stw      r3, 0x24(r1)
	lis      r3, bridgeFirstPos@ha
	lfd      f2, lbl_80519B40@sda21(r2)
	slwi     r0, r0, 2
	stw      r4, 0x20(r1)
	addi     r3, r3, bridgeFirstPos@l
	lfs      f3, lbl_80519B48@sda21(r2)
	lfd      f1, 0x20(r1)
	lfsx     f0, r3, r0
	fsubs    f1, f1, f2
	fmadds   f2, f3, f1, f0

lbl_801EF640:
	lfs      f1, lbl_80519B38@sda21(r2)
	lfs      f0, 0xc(r1)
	fsubs    f2, f2, f1
	lfs      f1, lbl_80519B48@sda21(r2)
	fabs     f4, f0
	lfs      f3, 8(r1)
	lfs      f0, lbl_80519B6C@sda21(r2)
	fadds    f2, f1, f2
	frsp     f1, f4
	fsubs    f2, f3, f2
	fcmpo    cr0, f1, f0
	stfs     f2, 8(r1)
	bge      lbl_801EF740
	lfs      f0, lbl_80519B70@sda21(r2)
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_801EF720
	lfs      f3, 0x1f4(r29)
	lfs      f0, lbl_80519B10@sda21(r2)
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_801EF69C
	fneg     f1, f3

lbl_801EF69C:
	lfs      f2, lbl_80519B54@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_80519B10@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f1, 4(r3)
	bge      lbl_801EF6F4
	lfs      f0, lbl_80519B58@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_801EF70C

lbl_801EF6F4:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_801EF70C:
	stfs     f0, 0(r31)
	lfs      f0, lbl_80519B10@sda21(r2)
	stfs     f0, 4(r31)
	stfs     f1, 8(r31)
	b        lbl_801EF8B4

lbl_801EF720:
	lfs      f0, lbl_80519B10@sda21(r2)
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_801EF738
	li       r3, 0
	b        lbl_801EF8B8

lbl_801EF738:
	li       r3, 0
	b        lbl_801EF8B8

lbl_801EF740:
	lfs      f0, lbl_80519B70@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_801EF7EC
	lfs      f3, 0x1f4(r29)
	lfs      f0, lbl_80519B10@sda21(r2)
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_801EF764
	fneg     f1, f3

lbl_801EF764:
	lfs      f2, lbl_80519B54@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_80519B10@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f1, 4(r3)
	bge      lbl_801EF7BC
	lfs      f0, lbl_80519B58@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f2, f0
	b        lbl_801EF7D4

lbl_801EF7BC:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r4, r0

lbl_801EF7D4:
	lfs      f0, lbl_80519B74@sda21(r2)
	lfs      f3, lbl_80519B10@sda21(r2)
	fmuls    f2, f2, f0
	fmuls    f3, f3, f0
	fmuls    f4, f1, f0
	b        lbl_801EF8A8

lbl_801EF7EC:
	lfs      f2, 0x1f4(r29)
	lfs      f0, lbl_80519B10@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_801EF828
	lfs      f0, lbl_80519B58@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f1, f0
	b        lbl_801EF84C

lbl_801EF828:
	lfs      f0, lbl_80519B54@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r3, r0

lbl_801EF84C:
	lfs      f0, lbl_80519B10@sda21(r2)
	fneg     f4, f1
	fcmpo    cr0, f2, f0
	bge      lbl_801EF860
	fneg     f2, f2

lbl_801EF860:
	lfs      f0, lbl_80519B54@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f3, lbl_80519B10@sda21(r2)
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f1, f2, f0
	lfs      f0, 0xc(r1)
	fcmpo    cr0, f0, f3
	fctiwz   f0, f1
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f2, 4(r3)
	ble      lbl_801EF8A8
	lfs      f0, lbl_80519B74@sda21(r2)
	fmuls    f2, f2, f0
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0

lbl_801EF8A8:
	stfs     f2, 0(r31)
	stfs     f3, 4(r31)
	stfs     f4, 8(r31)

lbl_801EF8B4:
	li       r3, 1

lbl_801EF8B8:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r0, 0x84(r1)
	lwz      r29, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/**
 * @note Address: 0x801EF8EC
 * @note Size: 0x148
 */
f32 Item::getWorkDistance(Sys::Sphere& sphere)
{
	f32 x;
	f32 z;
	getBridgePos(sphere.mPosition, x, z);

	if (mCurrStageIdx == mStageCount) {
		return FLOAT_DIST_MAX;
	}

	f32 rad = getStageZ(mCurrStageIdx);
	z -= 10.0f;

	if (z > rad + 10.0f) {
		return FLOAT_DIST_MAX;
	}

	if (z >= 0.0f && z <= rad) {
		if (absF(x) >= 75.0f) {
			return absF(x) - 75.0f;
		}
		return 0.0f;
	}

	if (z < -100.0f) {
		return FLOAT_DIST_MAX;
	}

	if (absF(x) >= 105.0f) {
		return FLOAT_DIST_MAX;
	}

	return absF(z - rad);
}

/**
 * @note Address: 0x801EFA34
 * @note Size: 0x448
 */
bool Item::interactAttack(InteractAttack& attack)
{
	switch (mSoundEvent.event()) {
	case 1:
		P2ASSERTLINE(825, mSoundObj->getCastType() == PSM::CCT_WorkItem);
		static_cast<PSM::WorkItem*>(mSoundObj)->eventStart();
		break;
	case 3:
		P2ASSERTLINE(832, mSoundObj->getCastType() == PSM::CCT_WorkItem);
		static_cast<PSM::WorkItem*>(mSoundObj)->eventRestart();
		break;
	}

	if (_1F8) {
		return true;
	}

	int currIdx = mCurrStageIdx;
	if (currIdx == mStageCount) {
		return false;
	}

	f32* healths = mStageHealths;

	healths[currIdx] -= attack.mDamage;
	if (healths[currIdx] <= 0.0f) {
		Vector3f currStagePos = getStagePos(mCurrStageIdx);
		Vector3f currRot      = Vector3f(0.0f, mFaceDir, 0.0f);
		Matrixf currMat;
		currMat.makeTR(currStagePos, currRot);

		efx::TBridgeSet currSetFX(&currMat);
		currSetFX.create(nullptr);
		mMabiki.mBuffer += 140;

		Vector3f nextStagePos = getStagePos(mCurrStageIdx + 1);
		Vector3f nextRot      = Vector3f(0.0f, mFaceDir, 0.0f);
		Matrixf nextMat;
		nextMat.makeTR(nextStagePos, nextRot);

		efx::TBridgeSet nextSetFX(&nextMat);
		nextSetFX.create(nullptr);
		mMabiki.mBuffer += 60;

		_1F8 = 40;

		startSound(PSSE_EV_WORK_BRIDGE_EXTEND);
	}

	return true;
}

/**
 * @note Address: 0x801EFE7C
 * @note Size: 0xF0
 */
bool Item::interactBreakBridge(InteractBreakBridge& breakBridge)
{
	if (_1F8 || mCurrStageIdx == 0) {
		return false;
	}

	f32* healths = mStageHealths;
	int idx      = mCurrStageIdx - 1;
	healths[idx] += breakBridge.mDamage;

	if (healths[idx] >= mgr->mParms->mBridgeParms.mHealth()) {
		healths[idx] = mgr->mParms->mBridgeParms.mHealth();
		setCurrStage(mCurrStageIdx - 1);
		setAlive(true);

		if (mBridgeWP && mEndWP) {
			mBridgeWP->setOpen(false);
			mEndWP->setOpen(false);
			mBridgeWP->setWater(false);
			mEndWP->setWater(false);
		}
	}

	return false;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
f32 Item::getWorkRadius()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x801EFF6C
 * @note Size: 0x4C
 */
GenItemParm* Mgr::generatorNewItemParm() { return new GenBridgeParm(); }

/**
 * @note Address: 0x801EFFB8
 * @note Size: 0x88
 */
void Mgr::generatorWrite(Stream& output, GenItemParm* genParm)
{
	GenBridgeParm* genBridgeParm = static_cast<GenBridgeParm*>(genParm);
	P2ASSERTLINE(940, genBridgeParm);
	output.textWriteTab(output.mTabCount);
	output.writeShort(genBridgeParm->mBridgeType);
	output.textWriteText("\t#橋タイプ\r\n"); // '#Bridge type'
}

/**
 * @note Address: 0x801F0040
 * @note Size: 0x88
 */
void Mgr::generatorRead(Stream& input, GenItemParm* genParm, u32 version)
{
	GenBridgeParm* genBridgeParm = static_cast<GenBridgeParm*>(genParm);
	P2ASSERTLINE(950, genBridgeParm);
	if (version >= '0001') {
		genBridgeParm->mBridgeType = input.readShort();
	} else {
		genBridgeParm->mBridgeType = BRIDGETYPE_Short;
	}
}

/**
 * @note Address: 0x801F00C8
 * @note Size: 0x130
 */
Mgr::Mgr()
    : TNodeItemMgr()
{
	mItemName = "Bridge";
	setModelSize(3);
	mObjectPathComponent = "user/Kando/objects/bridge";
	mParms               = new BridgeParms();
	DVDConvertPathToEntrynum("/user/Abe/item/bridgeParms.txt");
	DVDConvertPathToEntrynum("user/Abe/item/bridgeParms.txt");
	void* data = JKRDvdRipper::loadToMainRAM("/user/Abe/item/bridgeParms.txt", nullptr, Switch_0, 0, nullptr,
	                                         JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr, nullptr);
	if (data != nullptr) {
		RamStream input(data, -1);
		input.setMode(STREAM_MODE_TEXT, 1);
		mParms->read(input);
		delete[] data;
	}
}

/**
 * @note Address: 0x801F0408
 * @note Size: 0x118
 */
BaseItem* Mgr::birth()
{
	Item* item = new Item();
	entry(item);
	return item;
}

/**
 * @note Address: 0x801F0520
 * @note Size: 0xA8
 */
BaseItem* Mgr::generatorBirth(Vector3f& pos, Vector3f& rot, GenItemParm* genParm)
{
	BridgeInitArg initArg;
	initArg.mBridgeType          = BRIDGETYPE_Short;
	GenBridgeParm* genBridgeParm = static_cast<GenBridgeParm*>(genParm);
	if (genBridgeParm) {
		initArg.mBridgeType = genBridgeParm->mBridgeType;
	}
	Item* item = static_cast<Item*>(birth());
	item->init(&initArg);
	item->mFaceDir = roundAng(rot.y);
	item->setPosition(pos, false);
	return item;
}

/**
 * @note Address: 0x801F05C8
 * @note Size: 0x260
 */
void Mgr::onLoadResources()
{
	mPlatAttachers = new PlatAttacher*[BRIDGETYPE_COUNT];
	for (int i = 0; i < BRIDGETYPE_COUNT; i++) {
		mPlatAttachers[i] = nullptr;
	}

	mObjectPathComponent = "user/Kando/bridge/s_bridge";
	loadArchive("arc.szs");
	loadBmd("s_bridge.bmd", BRIDGETYPE_Short, 0x20000);

	mObjectPathComponent = "user/Kando/bridge/slope_u";
	loadArchive("arc.szs");
	loadBmd("slope_u.bmd", BRIDGETYPE_Sloped, 0x20000);

	mObjectPathComponent = "user/Kando/bridge/l_bridge";
	loadArchive("arc.szs");
	loadBmd("l_bridge.bmd", BRIDGETYPE_Long, 0x20000);

	for (int i = 0; i < BRIDGETYPE_COUNT; i++) {
		mModelData[i]->newSharedDisplayList(0x40000);
		mModelData[i]->makeSharedDL();
	}

	MapCode::Code mapCode;
	mapCode.setCode(MapCode::Code::Attribute1 + MapCode::Code::Attribute2, MapCode::Code::SlipCode_NoSlip, true);

	mObjectPathComponent             = "user/Kando/bridge/s_bridge";
	JKRArchive* textArcShort         = openTextArc("texts.szs");
	mPlatAttachers[BRIDGETYPE_Short] = loadPlatAttacher(textArcShort, "platform.bin");
	mPlatAttachers[BRIDGETYPE_Short]->setMapCodeAll(mapCode);
	closeTextArc(textArcShort);

	mObjectPathComponent              = "user/Kando/bridge/slope_u";
	JKRArchive* textArcSlope          = openTextArc("texts.szs");
	mPlatAttachers[BRIDGETYPE_Sloped] = loadPlatAttacher(textArcSlope, "platform.bin");
	mPlatAttachers[BRIDGETYPE_Sloped]->setMapCodeAll(mapCode);
	closeTextArc(textArcSlope);

	mObjectPathComponent            = "user/Kando/bridge/l_bridge";
	JKRArchive* textArcLong         = openTextArc("texts.szs");
	mPlatAttachers[BRIDGETYPE_Long] = loadPlatAttacher(textArcLong, "platform.bin");
	mPlatAttachers[BRIDGETYPE_Long]->setMapCodeAll(mapCode);
	closeTextArc(textArcLong);

	mBridgeInfos = new BridgeInfo[BRIDGETYPE_COUNT];
	for (int i = 0; i < BRIDGETYPE_COUNT; i++) {
		createBridgeInfo(i);
	}
}

/**
 * @note Address: 0x801F0844
 * @note Size: 0x78
 */
BridgeInfo* Mgr::getBridgeInfo(int type)
{
	P2ASSERTBOUNDSLINE(1127, 0, type, BRIDGETYPE_COUNT);
	return &mBridgeInfos[type];
}

/**
 * @note Address: 0x801F08BC
 * @note Size: 0x20C
 */
void Mgr::createBridgeInfo(int type)
{
	char name[512];
	P2ASSERTBOUNDSLINE(1133, 0, type, BRIDGETYPE_COUNT);
	J3DModelData* model = mModelData[type];
	P2ASSERTLINE(1135, model);

	int jointCount = 0;
	for (int i = 0; i < 32; i++) {
		sprintf(name, "room%02d", i);
		if ((u16)model->getJointName()->getIndex(name) != (u16)-1) {
			jointCount++;
		}
	}

	P2ASSERTLINE(1146, jointCount % 2 == 0);

	BridgeInfo* info    = &mBridgeInfos[type];
	info->mStageCount   = jointCount / 2;
	info->mJointCount   = jointCount;
	info->mJointIndices = new u16[jointCount];

	for (int i = 0; i < jointCount; i++) {
		sprintf(name, "room%02d", i);
		s16 jointIdx           = model->getJointName()->getIndex(name);
		info->mJointIndices[i] = jointIdx;
		if (jointIdx == -1) { // get joint names and panic
			for (int j = 0; j < model->getJointNum(); j++) {
				model->getJointName()->getName(j);
			}

			JUT_PANICLINE(1163, "hame-dokkuri vs nakamoto-kouji\n"); // 'i'm so excited vs nakamoto-construction' (??)
		}
	}

	s16 finalJointIdx = model->getJointName()->getIndex("final");
	if (finalJointIdx != -1) {
		info->mFinalJointIdx = finalJointIdx;

	} else { // panic
		info->mFinalJointIdx = -1;
		for (int i = 0; i < model->getJointNum(); i++) {
			model->getJointName()->getName(i);
		}

		JUT_PANICLINE(1180, "hame-dokkuri\n"); // 'i'm so excited' (??)
	}
}

/**
 * @note Address: 0x801F0AC8
 * @note Size: 0x1A0
 */
void Mgr::setupPlatInstanceAttacher(Item* bridge, PlatInstanceAttacher& attacher)
{
	P2ASSERTLINE(1186, bridge->mBridgeType < 3);
	BridgeInfo* info = getBridgeInfo(bridge->mBridgeType);
	ID32 id('none');
	attacher.addToMgr(bridge, id, mPlatAttachers[bridge->mBridgeType], false);

	for (int i = 0; i < info->mJointCount; i++) {
		if (i % 2 == 0) {
			ID32 evenID('brbk');
			attacher.setCode(evenID, info->mJointIndices[i]);
		} else {
			ID32 oddID('br__');
			attacher.setCode(oddID, info->mJointIndices[i]);
		}
	}

	if (info->mFinalJointIdx != -1) {
		ID32 finalID('finl');
		attacher.setCode(finalID, info->mFinalJointIdx);
	}
}

} // namespace ItemBridge
} // namespace Game
