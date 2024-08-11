#include "Game/Entities/DangoMushi.h"
#include "JSystem/JUtility/JUTNameTab.h"
#include "Sys/MatBaseAnimation.h"
#include "Dolphin/rand.h"
#include "LoadResource.h"

namespace Game {
namespace DangoMushi {

static const char dangoMushiMgrName[] = "246-DangoMushiMgr";

namespace {
static const char* cMatAnimBrkTexName = "/enemy/data/DangoMushi/dangomushi.brk";
} // namespace

/**
 * @note Address: 0x802FBD1C
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "ダンゴムシマネージャ"; // pill bug manager
}

/**
 * @note Address: 0x802FBD6C
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new Parms); }

/**
 * @note Address: 0x802FBF08
 * @note Size: 0x60
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/**
 * @note Address: 0x802FC024
 * @note Size: 0x10
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

/**
 * @note Address: 0x802FC034
 * @note Size: 0x68
 */
void Mgr::loadModelData()
{
	EnemyMgrBase::loadModelData();
	J3DShape* shape;
	for (u16 j = 0; j < mModelData->getShapeNum(); j++) {
		shape = mModelData->mShapeTable.mItems[j];
		shape->setTexMtxLoadType(0x2000);
	}
}

/**
 * @note Address: 0x802FC09C
 * @note Size: 0xB4
 */
void Mgr::loadTexData()
{
	SysShape::Model::enableMaterialAnim(mModelData, 0);
	void* brkFile = nullptr;
	LoadResource::Arg loadArgBrk(cMatAnimBrkTexName);
	LoadResource::Node* resourceBrk = gLoadResourceMgr->load(loadArgBrk);
	if (resourceBrk) {
		brkFile = resourceBrk->mFile;
	}
	P2ASSERTLINE(107, brkFile);

	mTevRegAnimation = new Sys::MatTevRegAnimation;
	mTevRegAnimation->attachResource(brkFile, mModelData);
}

/**
 * @note Address: 0x802FC150
 * @note Size: 0x130
 */
SysShape::Model* Mgr::createModel()
{
	SysShape::Model* model = new SysShape::Model(mModelData, J3DMODEL_ShareDL, mMtxBufferSize);
	P2ASSERTLINE(132, model != nullptr);

	for (u16 i = 0; i < mModelData->getMaterialNum(); i++) {
		const char* name = mModelData->mMaterialTable.mMaterialNames->getName(i);
		if (!strcmp(name, "body")) {
			model->mJ3dModel->mMatPackets[i].mShapePacket->newDifferedDisplayList(J3DMDF_DiffColorReg);
		}
	}

	// why is this not inlined here but IS inlined in the other mgrs SMH.
	Matrixf mtx;
	PSMTXIdentity(mtx.mMatrix.mtxView);
	PSMTXCopy(mtx.mMatrix.mtxView, j3dSys.mViewMtx);
	J3DModel* j3dModel = model->mJ3dModel;
	j3dModel->calc();
	j3dModel->calcMaterial();
	j3dModel->makeDL();
	j3dModel->lock();
	return model;
}

} // namespace DangoMushi
} // namespace Game
