#include "P2Macros.h"
#include "System.h"
#include "Graphics.h"
#include "Viewport.h"
#include "Camera.h"
#include "Game/flockMgr.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DSys.h"
#include "nans.h"

namespace Game {
/**
 * @note Address: 0x8020EADC
 * @note Size: 0xE0
 */
void BaseFlockMgr::update()
{
	do_update_boundSphere();

	Graphics* gfx = sys->mGfx;
	for (int i = 0; i < gfx->mActiveViewports; i++) {
		Viewport* vp = gfx->getViewport(i);

		if (!vp->viewable()) {
			mIsAgentVisible[i] = false;
			continue;
		}

		if (vp->mCamera->isVisible(mActivationSpherePosition)) {
			mIsAgentVisible[i] = true;
		} else {
			mIsAgentVisible[i] = false;
		}
	}

	do_update();
}

/**
 * @note Address: 0x8020EBBC
 * @note Size: 0x154
 */
int BaseFlockMgr::getNearestFlock(Vector3f& pos)
{
	f32 minDist = 12800.0f;
	int idx     = -1;

	for (int i = 0; i < getMaxObjects(); i++) {
		if (isFlagAlive(i) && getFlock(i)->isVisible()) {
			Vector3f sep = *getFlock(i) - pos;
			f32 dist     = sep.length();
			if (dist < minDist) {
				minDist = dist;
				idx     = i;
			}
		}
	}

	return idx;
}

/**
 * @note Address: N/A
 * @note Size: 0x140
 */
// void BaseFlockMgr::getRandomFlock()
// {
// UNUSED FUNCTION
// }

/**
 * @note Address: 0x8020ED10
 * @note Size: 0x11C
 */
int BaseFlockMgr::attackFlock(int idx, f32 damage)
{
	P2ASSERTBOUNDSLINE(93, 0, idx, getMaxObjects());
	TFlock* flock = getFlock(idx);
	if (isFlagAlive(idx)) {
		if (flock->damaged(damage)) {
			killFlock(flock);
			return 1;
		}
		return 0;
	}
	return 2;
}

/**
 * @note Address: 0x8020EE2C
 * @note Size: 0x294
 */
void BaseFlockMgr::resolveCollision(f32 p1)
{
	f32 halfVal = 0.5f * p1; // f31
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < getMaxObjects(); j++) {
			if (!isFlagAlive(j)) {
				continue;
			}

			for (int k = 0; k < getMaxObjects(); k++) {
				if (isFlagAlive(k) && j != k) {
					TFlock* flock1 = getFlock(j); // r31
					TFlock* flock2 = getFlock(k); // r3
					Vector3f sep   = *flock1 - *flock2;
					sep.y          = 0.0f;
					if (sep.length2D() < p1) {
						sep.normalise();
						sep *= halfVal;
						(Vector3f)* flock1 = *flock1 - sep;
						(Vector3f)* flock2 = *flock2 + sep;
					}
				}
			}
		}
	}

	for (int i = 0; i < getMaxObjects(); i++) {
		if (isFlagAlive(i)) {
			getFlock(i)->makeMatrix();
		}
	}
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stmw     r27, 0xc(r1)
	fmr      f30, f1
	lfs      f0, lbl_80519EF0@sda21(r2)
	mr       r27, r3
	li       r30, 0
	fmuls    f31, f0, f30

	lbl_8020EE60:
	li       r29, 0
	b        lbl_8020F004

	lbl_8020EE68:
	mr       r3, r27
	mr       r4, r29
	lwz      r12, 0(r27)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020F000
	li       r28, 0
	b        lbl_8020EFE4

	lbl_8020EE90:
	mr       r3, r27
	mr       r4, r28
	lwz      r12, 0(r27)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020EFE0
	cmpw     r29, r28
	beq      lbl_8020EFE0
	mr       r3, r27
	mr       r4, r29
	lwz      r12, 0(r27)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	mr       r3, r27
	lwz      r12, 0(r27)
	mr       r4, r28
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f7, 8(r31)
	lfs      f0, 8(r3)
	lfs      f9, 0(r31)
	fsubs    f5, f7, f0
	lfs      f1, 0(r3)
	lfs      f0, lbl_80519EEC@sda21(r2)
	fsubs    f3, f9, f1
	lfs      f8, 4(r31)
	fmuls    f2, f5, f5
	fmuls    f6, f3, f3
	fadds    f1, f6, f2
	fcmpo    cr0, f1, f0
	ble      lbl_8020EF38
	fmadds   f1, f3, f3, f2
	fcmpo    cr0, f1, f0
	ble      lbl_8020EF3C
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8020EF3C

	lbl_8020EF38:
	fmr      f1, f0

	lbl_8020EF3C:
	fcmpo    cr0, f1, f30
	bge      lbl_8020EFE0
	lfs      f4, lbl_80519EEC@sda21(r2)
	fadds    f0, f6, f4
	fadds    f0, f2, f0
	fcmpo    cr0, f0, f4
	ble      lbl_8020EF74
	fmadds   f0, f3, f3, f4
	fadds    f1, f2, f0
	fcmpo    cr0, f1, f4
	ble      lbl_8020EF78
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8020EF78

	lbl_8020EF74:
	fmr      f1, f4

	lbl_8020EF78:
	lfs      f0, lbl_80519EEC@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8020EF98
	lfs      f0, lbl_80519EF4@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0
	fmuls    f5, f5, f0

	lbl_8020EF98:
	fmuls    f3, f3, f31
	fmuls    f4, f4, f31
	fmuls    f5, f5, f31
	fsubs    f2, f9, f3
	fsubs    f1, f8, f4
	fsubs    f0, f7, f5
	stfs     f2, 0(r31)
	stfs     f1, 4(r31)
	stfs     f0, 8(r31)
	lfs      f0, 0(r3)
	lfs      f1, 4(r3)
	fadds    f0, f0, f3
	lfs      f2, 8(r3)
	fadds    f1, f1, f4
	fadds    f2, f2, f5
	stfs     f0, 0(r3)
	stfs     f1, 4(r3)
	stfs     f2, 8(r3)

	lbl_8020EFE0:
	addi     r28, r28, 1

	lbl_8020EFE4:
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmpw     r28, r3
	blt      lbl_8020EE90

	lbl_8020F000:
	addi     r29, r29, 1

	lbl_8020F004:
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmpw     r29, r3
	blt      lbl_8020EE68
	addi     r30, r30, 1
	cmpwi    r30, 4
	blt      lbl_8020EE60
	li       r28, 0
	b        lbl_8020F080

	lbl_8020F034:
	mr       r3, r27
	mr       r4, r28
	lwz      r12, 0(r27)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020F07C
	mr       r3, r27
	mr       r4, r28
	lwz      r12, 0(r27)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0xc(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

	lbl_8020F07C:
	addi     r28, r28, 1

	lbl_8020F080:
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmpw     r28, r3
	blt      lbl_8020F034
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	lmw      r27, 0xc(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x8020F0C0
 * @note Size: 0x198
 */
void BaseFlockMgr::doSimpleDraw(Viewport* vp, J3DModelData** models, int p1)
{
	if (mIsAgentVisible[vp->mVpId]) {
		for (int i = 0; i < p1; i++) {
			J3DModelData* model     = models[i];
			J3DMaterial* mat        = model->mJointTree.mJoints[0]->mMaterial;
			j3dSys.mVtxPos          = model->mVertexData.mVtxPos;
			j3dSys.mVtxNorm         = model->mVertexData.mVtxNorm;
			j3dSys.mVtxColor        = model->mVertexData.mVtxColor[0];
			J3DShape::sOldVcdVatCmd = nullptr;

			while (mat) {
				mat->loadSharedDL();
				mat->mShape->loadPreDrawSetting();

				for (int j = 0; j < getMaxObjects(); j++) {
					TFlock* flock = getFlock(j);
					if (isFlagAlive(j)) {
						if (flock->isVisible() && flock->mModelIdx == i) {
							Matrixf mtx;
							PSMTXConcat(vp->getMatrix(true)->mMatrix.mtxView, flock->mTransformationMtx.mMatrix.mtxView,
							            mtx.mMatrix.mtxView);
							GXLoadPosMtxImm(mtx.mMatrix.mtxView, GX_PNMTX0);
							GXLoadNrmMtxImm(mtx.mMatrix.mtxView, GX_PNMTX0);
							mat->mShape->simpleDrawCache();
						}
					}
				}

				mat = mat->mNext;
			}
		}
	}
}

} // namespace Game
