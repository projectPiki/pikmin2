#include "P2Macros.h"
#include "ParticleMgr.h"
#include "nans.h"

/*
 * --INFO--
 * Address:	8043D49C
 * Size:	00006C
 */
void ModelEffectData::entry()
{
	loadResources();
	P2ASSERTLINE(44, particleMgr);
	particleMgr->entryModelEffect(this);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
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

/*
 * --INFO--
 * Address:	8043D508
 * Size:	00010C
 */
void ModelEffectData::allocModelData(int count)
{
	mCount     = count;
	mModelData = new J3DModelData*[mCount];
	for (int i = 0; i < count; i++) {
		mModelData[i] = nullptr;
	}
}

/*
 * --INFO--
 * Address:	8043D614
 * Size:	000024
 */
void ParticleMgr::entryModelEffect(ModelEffectData* data) { mModelEffectDataRoot.add(data); }

/*
 * --INFO--
 * Address:	........
 * Size:	000080
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

/*
 * --INFO--
 * Address:	8043D638
 * Size:	00011C
 */
ModelEffect* ParticleMgr::createModelEffect(ModelEffectCreateArg* arg)
{
	ModelEffectData* data = getModelEffectData(arg->getID());
	if (data) {
		return data->create(arg);
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000178
 */
void ParticleMgr::testCreateModelEffect(int, int, Vector3f&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8043D754
 * Size:	0001A8
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

/*
 * --INFO--
 * Address:	8043D8FC
 * Size:	000004
 */
void ModelEffect::getLODCylinder(Sys::Cylinder&) { }

/*
 * --INFO--
 * Address:	8043D900
 * Size:	000008
 */
bool ModelEffect::useCylinderLOD() { return false; }

/*
 * --INFO--
 * Address:	8043D908
 * Size:	000098
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

/*
 * --INFO--
 * Address:	8043D9A0
 * Size:	000004
 */
void ModelEffect::changeMaterial() { }

/*
 * --INFO--
 * Address:	8043D9A4
 * Size:	000078
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

/*
 * --INFO--
 * Address:	8043DA1C
 * Size:	000024
 */
void ModelEffect::doViewCalc() { mModel->viewCalc(); }

/*
 * --INFO--
 * Address:	8043DA40
 * Size:	00002C
 */
void ParticleMgr::doAnimation() { mModelEffectMgr.doAnimation(); }

/*
 * --INFO--
 * Address:	8043DA6C
 * Size:	00002C
 */
void ParticleMgr::doEntry() { mModelEffectMgr.doEntry(); }

/*
 * --INFO--
 * Address:	8043DA98
 * Size:	00002C
 */
void ParticleMgr::doSetView(int viewportNumber) { mModelEffectMgr.doSetView(viewportNumber); }

/*
 * --INFO--
 * Address:	8043DAC4
 * Size:	00002C
 */
void ParticleMgr::doViewCalc() { mModelEffectMgr.doViewCalc(); }
