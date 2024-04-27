#include "Game/Entities/Tyre.h"
#include "Game/MapMgr.h"

namespace Game {

/**
 * @note Address: 0x803019EC
 * @note Size: 0x25C
 */
void TyreTubeShadowNode::makeShadowSRT(JointShadowParm& shadowParm, Matrixf* mat)
{
	Vector3f matVecs[4];
	matVecs[0] = Vector3f(mat->getColumn(0));
	matVecs[3] = mat->getColumn(3);

	Vector3f xVec = Vector3f(mat->getColumn(0));
	xVec.normalise();
	xVec       = xVec * shadowParm._18;
	matVecs[0] = xVec;

	matVecs[2] = cross(matVecs[0], shadowParm.mRotation);
	matVecs[2].normalise();
	matVecs[2].x = matVecs[2].x * shadowParm._1C;
	matVecs[2].y = matVecs[2].y * shadowParm._1C;
	matVecs[2].z = matVecs[2].z * shadowParm._1C;
	matVecs[3].y += shadowParm.mPositionMultiplier;
	matVecs[1].x = 0.0f;
	matVecs[1].z = 0.0f;
	f32 minY     = mapMgr->getMinY(matVecs[3]);
	if (matVecs[3].y - minY < 0.0f) {
		matVecs[1].y = 10.0f;
	} else {
		matVecs[1].y = (matVecs[3].y - minY) * 5.0f;
	}

	mMainMtx->setColumn(0, matVecs[0]);

	mMainMtx->setColumn(1, matVecs[1]);
	mMainMtx->setColumn(2, matVecs[2]);
	mMainMtx->setColumn(3, matVecs[3]);
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lfs      f0, lbl_8051D4E8@sda21(r2)
	stw      r0, 0x44(r1)
	addi     r0, r1, 0x2c
	stw      r31, 0x3c(r1)
	mr       r31, r3
	lfs      f6, 0x10(r5)
	lfs      f7, 0x20(r5)
	fmuls    f2, f6, f6
	lfs      f5, 0(r5)
	lfs      f1, 0xc(r5)
	fmuls    f3, f7, f7
	stfs     f1, 0x2c(r1)
	fmadds   f1, f5, f5, f2
	lfs      f2, 0x1c(r5)
	stfs     f2, 0x30(r1)
	fadds    f2, f3, f1
	lfs      f1, 0x2c(r5)
	fcmpo    cr0, f2, f0
	stfs     f1, 0x34(r1)
	ble      lbl_80301A54
	ble      lbl_80301A58
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_80301A58

lbl_80301A54:
	fmr      f2, f0

lbl_80301A58:
	lfs      f0, lbl_8051D4E8@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_80301A78
	lfs      f0, lbl_8051D4EC@sda21(r2)
	fdivs    f0, f0, f2
	fmuls    f5, f5, f0
	fmuls    f6, f6, f0
	fmuls    f7, f7, f0

lbl_80301A78:
	lfs      f0, 0x18(r4)
	lfs      f1, lbl_8051D4E8@sda21(r2)
	fmuls    f3, f5, f0
	fmuls    f2, f6, f0
	fmuls    f0, f7, f0
	stfs     f3, 8(r1)
	stfs     f2, 0xc(r1)
	stfs     f0, 0x10(r1)
	lfs      f9, 0x10(r4)
	lfs      f2, 0x14(r4)
	fmuls    f0, f7, f9
	lfs      f8, 0xc(r4)
	fmuls    f3, f5, f2
	fmuls    f4, f6, f8
	fmsubs   f2, f6, f2, f0
	fmsubs   f3, f7, f8, f3
	fmsubs   f4, f5, f9, f4
	fmuls    f0, f2, f2
	stfs     f2, 0x20(r1)
	fmuls    f5, f3, f3
	fmuls    f6, f4, f4
	stfs     f3, 0x24(r1)
	fadds    f0, f0, f5
	stfs     f4, 0x28(r1)
	fadds    f0, f6, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80301B00
	fmadds   f0, f2, f2, f5
	fadds    f3, f6, f0
	fcmpo    cr0, f3, f1
	ble      lbl_80301B04
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_80301B04

lbl_80301B00:
	fmr      f3, f1

lbl_80301B04:
	lfs      f0, lbl_8051D4E8@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_80301B3C
	lfs      f0, lbl_8051D4EC@sda21(r2)
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

lbl_80301B3C:
	lfs      f2, 0x20(r1)
	lfs      f5, 0x1c(r4)
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	fmuls    f4, f2, f5
	fmuls    f3, f1, f5
	lfs      f2, 0x30(r1)
	fmuls    f1, f0, f5
	lfs      f0, lbl_8051D4E8@sda21(r2)
	stfs     f4, 0x20(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f3, 0x24(r1)
	stfs     f1, 0x28(r1)
	lfs      f1, 0x24(r4)
	mr       r4, r0
	fadds    f1, f2, f1
	stfs     f0, 0x14(r1)
	stfs     f0, 0x1c(r1)
	stfs     f1, 0x30(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x30(r1)
	lfs      f0, lbl_8051D4E8@sda21(r2)
	fsubs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80301BB8
	lfs      f0, lbl_8051D4F0@sda21(r2)
	stfs     f0, 0x18(r1)
	b        lbl_80301BC4

lbl_80301BB8:
	lfs      f0, lbl_8051D4F4@sda21(r2)
	fmuls    f0, f0, f1
	stfs     f0, 0x18(r1)

lbl_80301BC4:
	lwz      r3, 0x1c(r31)
	lfs      f0, 8(r1)
	stfs     f0, 0(r3)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x10(r3)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x20(r3)
	lwz      r3, 0x1c(r31)
	lfs      f0, 0x14(r1)
	stfs     f0, 4(r3)
	lfs      f0, 0x18(r1)
	stfs     f0, 0x14(r3)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x24(r3)
	lwz      r3, 0x1c(r31)
	lfs      f0, 0x20(r1)
	stfs     f0, 8(r3)
	lfs      f0, 0x24(r1)
	stfs     f0, 0x18(r3)
	lfs      f0, 0x28(r1)
	stfs     f0, 0x28(r3)
	lwz      r3, 0x1c(r31)
	lfs      f0, 0x2c(r1)
	stfs     f0, 0xc(r3)
	lfs      f0, 0x30(r1)
	stfs     f0, 0x1c(r3)
	lfs      f0, 0x34(r1)
	stfs     f0, 0x2c(r3)
	lwz      r31, 0x3c(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

namespace Tyre {

/**
 * @note Address: 0x80301C48
 * @note Size: 0xE4
 */
TyreShadowMgr::TyreShadowMgr(Obj* obj)
{
	mObj         = obj;
	mGlobalScale = 1.0f;
	mRootNode    = new JointShadowRootNode(obj);

	mFrontShadow              = new TyreTubeShadowNode;
	mFrontShadow->mCylinderID = 2;
	mRootNode->add(mFrontShadow);

	mBackShadow              = new TyreTubeShadowNode;
	mBackShadow->mCylinderID = 2;
	mRootNode->add(mBackShadow);
}

/**
 * @note Address: 0x80301D2C
 * @note Size: 0x68
 */
void TyreShadowMgr::init()
{
	SysShape::Model* model = mObj->mModel;
	mFrontMatrix           = model->getJoint("tyrefront")->getWorldMatrix();
	mBackMatrix            = model->getJoint("tyreback")->getWorldMatrix();
}

/**
 * @note Address: 0x80301D94
 * @note Size: 0xB4
 */
void TyreShadowMgr::update()
{
	JointShadowParm parm;
	parm.mPosition = mObj->getPosition();
	parm.mRotation = Vector3f(0.0f, 1.0f, 0.0f);

	f32 scale1 = 31.5f * mGlobalScale;
	f32 scale2 = 17.5f * mGlobalScale;
	parm.setBoth(scale1, scale2);
	mFrontShadow->makeShadowSRT(parm, mFrontMatrix);
	mBackShadow->makeShadowSRT(parm, mBackMatrix);
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r3
	addi     r3, r1, 8
	lwz      r4, 0xc(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f4, lbl_8051D4E8@sda21(r2)
	addi     r4, r1, 0x14
	lfs      f2, 8(r1)
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	lfs      f3, lbl_8051D4EC@sda21(r2)
	stfs     f2, 0x14(r1)
	lfs      f2, lbl_8051D4F8@sda21(r2)
	stfs     f1, 0x18(r1)
	lfs      f1, lbl_8051D4FC@sda21(r2)
	stfs     f0, 0x1c(r1)
	lfs      f0, lbl_8051D500@sda21(r2)
	stfs     f4, 0x20(r1)
	stfs     f3, 0x24(r1)
	stfs     f4, 0x28(r1)
	lfs      f3, 0(r31)
	fmuls    f2, f2, f3
	stfs     f4, 0x34(r1)
	fmuls    f1, f1, f3
	stfs     f0, 0x38(r1)
	stfs     f2, 0x2c(r1)
	stfs     f1, 0x30(r1)
	lwz      r3, 0x14(r31)
	lwz      r5, 4(r31)
	bl
	makeShadowSRT__Q24Game18TyreTubeShadowNodeFRQ24Game15JointShadowParmP7Matrixf
	lwz      r3, 0x18(r31)
	addi     r4, r1, 0x14
	lwz      r5, 8(r31)
	bl
	makeShadowSRT__Q24Game18TyreTubeShadowNodeFRQ24Game15JointShadowParmP7Matrixf
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}
} // namespace Tyre
} // namespace Game
