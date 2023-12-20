#include "P2Macros.h"
#include "ParticleMgr.h"
#include "nans.h"

/**
 * @note Address: 0x8043D49C
 * @note Size: 0x6C
 */
void ModelEffectData::entry()
{
	loadResources();
	P2ASSERTLINE(44, particleMgr);
	particleMgr->entryModelEffect(this);
}

/**
 * @note Address: N/A
 * @note Size: 0x90
 */
ModelEffect* ModelEffectData::create(ModelEffectCreateArg* arg)
{
	ModelEffect* efx = onCreate(arg);
	if (efx) {
		TObjectNode<ModelEffect>* node = new TObjectNode<ModelEffect>(efx);
		particleMgr->mModelEffectMgr.mNode.add(node);
		node->mContents->constructor();
	}
	return efx;
}

/**
 * @note Address: 0x8043D508
 * @note Size: 0x10C
 */
void ModelEffectData::allocModelData(int count)
{
	mCount     = count;
	mModelData = new J3DModelData*[mCount];
	for (int i = 0; i < count; i++) {
		mModelData[i] = nullptr;
	}
}

/**
 * @note Address: 0x8043D614
 * @note Size: 0x24
 */
void ParticleMgr::entryModelEffect(ModelEffectData* data) { mModelEffectDataRoot.add(data); }

/**
 * @note Address: N/A
 * @note Size: 0x80
 */
ModelEffectData* ParticleMgr::getModelEffectData(u64 id)
{
	FOREACH_NODE(ModelEffectData, mModelEffectDataRoot.mChild, node)
	{
		if (node->getID() == id) {
			return node;
		}
	}
	return nullptr;
}

/**
 * @note Address: 0x8043D638
 * @note Size: 0x11C
 */
ModelEffect* ParticleMgr::createModelEffect(ModelEffectCreateArg* arg)
{
	ModelEffectData* data = getModelEffectData(arg->getID());
	if (data) {
		return data->create(arg);
	}
	return nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0x178
 */
void ParticleMgr::testCreateModelEffect(int, int, Vector3f&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8043D754
 * @note Size: 0x1A8
 */
void ModelEffect::doAnimation()
{
	PSMTXCopy(mMtx.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
	mModel->mJ3dModel->calc();

	if (mCulled) {
		for (int i = 0; i < sys->mGfx->mActiveViewports; i++) {
			mViewportVisibleFlag[i] = 0;
		}
	} else {
		Sys::Sphere bounds;
		getLODSphere(bounds);

		Graphics* gfx = sys->mGfx;
		for (int i = 0; i < gfx->mActiveViewports; i++) {
			Viewport* vp = gfx->getViewport(i);

			if (!vp->viewable()) {
				mViewportVisibleFlag[i] = false;
			} else {
				Camera* cam = vp->mCamera;
				if (useCylinderLOD()) {
					Sys::Cylinder cylinder;
					getLODCylinder(cylinder);
					if (cam->isCylinderVisible(cylinder)) {
						mViewportVisibleFlag[i] = true;
					} else {
						mViewportVisibleFlag[i] = false;
					}
				} else {
					if (cam->isVisible(bounds)) {
						mViewportVisibleFlag[i] = true;
					} else {
						mViewportVisibleFlag[i] = false;
					}
				}
			}
		}
	}
}

/**
 * @note Address: 0x8043D8FC
 * @note Size: 0x4
 */
void ModelEffect::getLODCylinder(Sys::Cylinder&) { }

/**
 * @note Address: 0x8043D900
 * @note Size: 0x8
 */
bool ModelEffect::useCylinderLOD() { return false; }

/**
 * @note Address: 0x8043D908
 * @note Size: 0x98
 */
void ModelEffect::doEntry()
{
	if (mViewportVisibleFlag[0] != 0 || mViewportVisibleFlag[1] != 0) {
		mModel->show();
	} else {
		mModel->hide();
	}
	changeMaterial();
	mModel->getJ3DModel()->entry();
}

/**
 * @note Address: 0x8043D9A0
 * @note Size: 0x4
 */
void ModelEffect::changeMaterial() { }

/**
 * @note Address: 0x8043D9A4
 * @note Size: 0x78
 */
void ModelEffect::doSetView(int viewportNumber)
{
	mModel->setCurrentViewNo(viewportNumber);
	if (mViewportVisibleFlag[viewportNumber] != 0) {
		mModel->showPackets();
	} else {
		mModel->hidePackets();
	}
}

/**
 * @note Address: 0x8043DA1C
 * @note Size: 0x24
 */
void ModelEffect::doViewCalc() { mModel->viewCalc(); }

/**
 * @note Address: 0x8043DA40
 * @note Size: 0x2C
 */
void ParticleMgr::doAnimation() { mModelEffectMgr.doAnimation(); }

/**
 * @note Address: 0x8043DA6C
 * @note Size: 0x2C
 */
void ParticleMgr::doEntry() { mModelEffectMgr.doEntry(); }

/**
 * @note Address: 0x8043DA98
 * @note Size: 0x2C
 */
void ParticleMgr::doSetView(int viewportNumber) { mModelEffectMgr.doSetView(viewportNumber); }

/**
 * @note Address: 0x8043DAC4
 * @note Size: 0x2C
 */
void ParticleMgr::doViewCalc() { mModelEffectMgr.doViewCalc(); }
