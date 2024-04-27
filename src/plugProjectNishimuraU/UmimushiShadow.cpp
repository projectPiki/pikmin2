#include "Game/Entities/UmiMushi.h"

namespace Game {

/**
 * @note Address: 0x802F27DC
 * @note Size: 0x1DC
 */
void UmimushiTubeShadowNode::makeShadowSRT(JointShadowParm& parm, Matrixf* mat, Vector3f& vec1, Vector3f& vec2)
{
	Vector3f xVec;
	mat->getColumn(0, xVec);
	Vector3f yVec;
	mat->getColumn(1, yVec);
	mat->getColumn(3, vec2);

	vec2.x += xVec.x * parm._18 + yVec.x * parm._1C;
	vec2.y += xVec.y * parm._18 + yVec.y * parm._1C;
	vec2.z += xVec.z * parm._18 + yVec.z * parm._1C;

	Vector3f diff = vec2 - vec1;
	// more stuff here
	diff.normalise();

	// more stuff here
	mMainMtx->setColumn(2, diff);

	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stfd      f30, 0x10(r1)
	  psq_st    f30,0x18(r1),0,0
	  lfs       f3, 0x0(r5)
	  lfs       f5, 0x10(r5)
	  lfs       f6, 0x20(r5)
	  lfs       f2, 0x4(r5)
	  lfs       f7, 0x14(r5)
	  lfs       f8, 0x24(r5)
	  lfs       f0, 0xC(r5)
	  lfs       f4, -0x11E0(r2)
	  stfs      f0, 0x0(r7)
	  lfs       f12, -0x11DC(r2)
	  lfs       f0, 0x1C(r5)
	  stfs      f0, 0x4(r7)
	  lfs       f0, 0x2C(r5)
	  stfs      f0, 0x8(r7)
	  lfs       f0, 0x1C(r4)
	  lfs       f1, 0x18(r4)
	  fmuls     f0, f2, f0
	  lfs       f2, 0x0(r7)
	  fmadds    f0, f3, f1, f0
	  fadds     f0, f2, f0
	  stfs      f0, 0x0(r7)
	  lfs       f0, 0x1C(r4)
	  lfs       f1, 0x18(r4)
	  fmuls     f0, f7, f0
	  lfs       f2, 0x4(r7)
	  fmadds    f0, f5, f1, f0
	  fadds     f0, f2, f0
	  stfs      f0, 0x4(r7)
	  lfs       f0, 0x1C(r4)
	  lfs       f1, 0x18(r4)
	  fmuls     f0, f8, f0
	  lfs       f2, 0x8(r7)
	  fmadds    f0, f6, f1, f0
	  fadds     f0, f2, f0
	  stfs      f0, 0x8(r7)
	  lfs       f7, 0x0(r7)
	  lfs       f6, 0x0(r6)
	  lfs       f9, 0x4(r7)
	  fsubs     f0, f7, f6
	  lfs       f8, 0x4(r6)
	  lfs       f11, 0x8(r7)
	  lfs       f10, 0x8(r6)
	  fsubs     f1, f9, f8
	  fmuls     f0, f4, f0
	  fsubs     f2, f11, f10
	  lfs       f30, 0x14(r4)
	  fmuls     f1, f4, f1
	  lfs       f13, 0xC(r4)
	  fmuls     f3, f0, f30
	  fmuls     f2, f4, f2
	  lfs       f31, 0x10(r4)
	  fmuls     f5, f1, f13
	  fmsubs    f4, f2, f13, f3
	  fmuls     f3, f2, f31
	  fmsubs    f5, f0, f31, f5
	  fmuls     f13, f4, f4
	  fmsubs    f3, f1, f30, f3
	  fmuls     f31, f5, f5
	  fmadds    f13, f3, f3, f13
	  fadds     f13, f31, f13
	  fcmpo     cr0, f13, f12
	  ble-      .loc_0x11C
	  ble-      .loc_0x120
	  fsqrte    f12, f13
	  fmuls     f13, f12, f13
	  b         .loc_0x120

	.loc_0x11C:
	  fmr       f13, f12

	.loc_0x120:
	  lfs       f12, -0x11DC(r2)
	  fcmpo     cr0, f13, f12
	  ble-      .loc_0x140
	  lfs       f12, -0x11D8(r2)
	  fdivs     f12, f12, f13
	  fmuls     f3, f3, f12
	  fmuls     f4, f4, f12
	  fmuls     f5, f5, f12

	.loc_0x140:
	  lfs       f30, 0x20(r4)
	  fadds     f12, f9, f8
	  lfs       f9, 0x24(r4)
	  fadds     f7, f7, f6
	  lfs       f13, -0x11E0(r2)
	  fadds     f6, f11, f10
	  lfs       f8, 0x4(r4)
	  lwz       r4, 0x1C(r3)
	  fmadds    f10, f13, f12, f9
	  lfs       f9, -0x11D4(r2)
	  fmuls     f3, f3, f30
	  stfs      f0, 0x0(r4)
	  fmuls     f4, f4, f30
	  fsubs     f0, f10, f8
	  stfs      f1, 0x10(r4)
	  fmuls     f5, f5, f30
	  lfs       f8, -0x11DC(r2)
	  fmuls     f1, f13, f7
	  stfs      f2, 0x20(r4)
	  fadds     f2, f9, f0
	  lwz       r4, 0x1C(r3)
	  fmuls     f0, f13, f6
	  stfs      f8, 0x4(r4)
	  stfs      f2, 0x14(r4)
	  stfs      f8, 0x24(r4)
	  lwz       r4, 0x1C(r3)
	  stfs      f3, 0x8(r4)
	  stfs      f4, 0x18(r4)
	  stfs      f5, 0x28(r4)
	  lwz       r3, 0x1C(r3)
	  stfs      f1, 0xC(r3)
	  stfs      f10, 0x1C(r3)
	  stfs      f0, 0x2C(r3)
	  psq_l     f31,0x28(r1),0,0
	  lfd       f31, 0x20(r1)
	  psq_l     f30,0x18(r1),0,0
	  lfd       f30, 0x10(r1)
	  addi      r1, r1, 0x30
	  blr
	*/
}

/**
 * @note Address: 0x802F29B8
 * @note Size: 0xCC
 */
void UmimushiSphereShadowNode::makeShadowSRT(JointShadowParm& parm, Matrixf* mat, Vector3f& vec, bool isAlive)
{
	Vector3f xVec;
	Vector3f zVec;

	if (isAlive) { // regswaps
		xVec = mat->getColumn(0) * (parm.mShadowScale + 2.5f);
		zVec = mat->getColumn(2) * parm.mShadowScale;
	} else {
		xVec = Vector3f(parm.mShadowScale, 0.0f, 0.0f);
		zVec = Vector3f(0.0f, 0.0f, parm.mShadowScale);
	}

	Vector3f pos = vec;
	pos.y += parm.mPositionMultiplier;

	Vector3f yVec(0.0f, (vec.y - parm.mPosition.y) + 25.0f, 0.0f);

	mMainMtx->setColumn(0, xVec);
	mMainMtx->setColumn(1, yVec);
	mMainMtx->setColumn(2, zVec);
	mMainMtx->setColumn(3, pos);
	/*
	.loc_0x0:
	  rlwinm.   r0,r7,0,24,31
	  beq-      .loc_0x48
	  lfs       f0, -0x11D0(r2)
	  lfs       f1, 0x20(r4)
	  lfs       f5, 0x8(r5)
	  lfs       f6, 0x18(r5)
	  fadds     f0, f0, f1
	  lfs       f11, 0x0(r5)
	  fmuls     f5, f5, f1
	  lfs       f3, 0x10(r5)
	  fmuls     f6, f6, f1
	  lfs       f4, 0x20(r5)
	  lfs       f7, 0x28(r5)
	  fmuls     f11, f11, f0
	  fmuls     f3, f3, f0
	  fmuls     f4, f4, f0
	  fmuls     f7, f7, f1
	  b         .loc_0x60

	.loc_0x48:
	  lfs       f3, -0x11DC(r2)
	  lfs       f11, 0x20(r4)
	  fmr       f4, f3
	  fmr       f5, f3
	  fmr       f6, f3
	  fmr       f7, f11

	.loc_0x60:
	  lfs       f8, 0x0(r6)
	  lfs       f2, 0x4(r6)
	  lfs       f1, 0x24(r4)
	  lfs       f0, 0x4(r4)
	  lfs       f10, 0x8(r6)
	  fadds     f9, f2, f1
	  lwz       r4, 0x1C(r3)
	  fsubs     f1, f2, f0
	  lfs       f2, -0x11D4(r2)
	  stfs      f11, 0x0(r4)
	  lfs       f0, -0x11DC(r2)
	  fadds     f1, f2, f1
	  stfs      f3, 0x10(r4)
	  stfs      f4, 0x20(r4)
	  lwz       r4, 0x1C(r3)
	  stfs      f0, 0x4(r4)
	  stfs      f1, 0x14(r4)
	  stfs      f0, 0x24(r4)
	  lwz       r4, 0x1C(r3)
	  stfs      f5, 0x8(r4)
	  stfs      f6, 0x18(r4)
	  stfs      f7, 0x28(r4)
	  lwz       r3, 0x1C(r3)
	  stfs      f8, 0xC(r3)
	  stfs      f9, 0x1C(r3)
	  stfs      f10, 0x2C(r3)
	  blr
	*/
}

namespace UmiMushi {

/**
 * @note Address: 0x802F2A84
 * @note Size: 0xC4
 */
UmimushiShadowMgr::UmimushiShadowMgr(Obj* obj)
{
	mObj        = obj;
	mRootNode   = new JointShadowRootNode(obj);
	mTubeShadow = new UmimushiTubeShadowNode;
	mRootNode->add(mTubeShadow);
	mSphereShadow = new UmimushiSphereShadowNode;
	mRootNode->add(mSphereShadow);
}

/**
 * @note Address: 0x802F2B48
 * @note Size: 0x68
 */
void UmimushiShadowMgr::init()
{
	SysShape::Model* model = mObj->mModel;
	mWeakMatrix1           = model->getJoint("weak_joint1")->getWorldMatrix();
	mWeakMatrix2           = model->getJoint("weak_joint2")->getWorldMatrix();
}

/**
 * @note Address: 0x802F2BB0
 * @note Size: 0x15C
 */
void UmimushiShadowMgr::update()
{
	Vector3f position = mObj->getPosition();
	JointShadowParm parm;
	Vector3f vec1;
	Vector3f vec2;

	parm.mPosition = position;
	parm.mRotation = Vector3f(0.0f, 1.0f, 0.0f);

	vec1 = mWeakMatrix1->getColumn(3);

	parm._18                 = -12.5f;
	parm._1C                 = 0.0f;
	parm.mShadowScale        = 1.5f;
	parm.mPositionMultiplier = 0.0f;

	mTubeShadow->makeShadowSRT(parm, mWeakMatrix2, vec1, vec2);

	parm._18                 = 0.0f;
	parm._1C                 = 0.0f;
	parm.mShadowScale        = 15.0f;
	parm.mPositionMultiplier = -12.5f;

	mSphereShadow->makeShadowSRT(parm, mWeakMatrix2, vec2, mObj->isAlive());

	Pellet* pellet = mObj->mPellet;
	if (pellet && pellet->isCarried()) {
		if (mTubeShadow->mParent) {
			mTubeShadow->del();
		}
	} else if (!mTubeShadow->mParent) {
		mRootNode->addHead(mTubeShadow);
	}
}
} // namespace UmiMushi
} // namespace Game
