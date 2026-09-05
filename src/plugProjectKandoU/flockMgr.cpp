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
					if (sep.length2D() < p1) {
						sep.y = 0.0f; // lol
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
}

/**
 * @note Address: 0x8020F0C0
 * @note Size: 0x198
 */
void BaseFlockMgr::doSimpleDraw(Viewport* vp, J3DModelData** models, int p1)
{
	if (mIsAgentVisible[vp->mVpId]) {
		for (int i = 0; i < p1; i++) {
			J3DModelData* model = models[i];
			J3DMaterial* mat    = model->getJointNodePointer(0)->getMesh();
			j3dSys.setVtxPos(model->getVtxPosArray());
			j3dSys.setVtxNrm(model->getVtxNrmArray());
			j3dSys.setVtxCol(model->getVtxColorArray(0));
			J3DShape::resetVcdVatCache();

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
