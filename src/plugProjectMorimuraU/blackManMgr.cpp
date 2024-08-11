#include "Game/Entities/BlackMan.h"
#include "Game/generalEnemyMgr.h"
#include "LoadResource.h"
#include "JSystem/JUtility/JUTNameTab.h"

namespace Game {
namespace BlackMan {

static const char blackManMgrName[] = "blackManMgr";

/**
 * @note Address: 0x803A53C8
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "黒い人マネージャ"; // black man manager
}

/**
 * @note Address: 0x803A5418
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new Parms); }

/**
 * @note Address: 0x803A58B4
 * @note Size: 0x20
 */
EnemyBase* Mgr::birth(EnemyBirthArg& birthArg) { return EnemyMgrBase::birth(birthArg); }

/**
 * @note Address: 0x803A58D4
 * @note Size: 0x94
 */
void Mgr::loadModelData()
{
	EnemyMgrBase::loadModelData();
	J3DShape* shape;
	for (u16 j = 0; j < mModelData->getShapeNum(); j++) {
		shape = mModelData->mShapeTable.mItems[j];
		P2ASSERTLINE(56, shape);
		shape->setTexMtxLoadType(0x2000);
	}
}

/**
 * @note Address: 0x803A5968
 * @note Size: 0xBC
 */
void Mgr::loadTexData()
{
	SysShape::Model::enableMaterialAnim(mModelData, 0);
	void* btkFile = nullptr;
	LoadResource::Arg loadArgBtk("/enemy/data/BlackMan/kagebozu_model.btk");
	LoadResource::Node* resourceBtk = gLoadResourceMgr->load(loadArgBtk);
	if (resourceBtk) {
		btkFile = resourceBtk->mFile;
	}
	P2ASSERTLINE(83, btkFile);

	mTexAnimation = new Sys::MatTexAnimation;
	mTexAnimation->attachResource(btkFile, mModelData);
}

/**
 * @note Address: 0x803A5A24
 * @note Size: 0x2C
 */
J3DModelData* Mgr::doLoadBmd(void* filename) { return J3DModelLoaderDataBase::load(filename, 0x21300030); }

/**
 * @note Address: 0x803A5A50
 * @note Size: 0x124
 */
SysShape::Model* Mgr::createModel()
{
	SysShape::Model* model = new SysShape::Model(mModelData, J3DMODEL_ShareDL, mMtxBufferSize);
	P2ASSERTLINE(128, model != nullptr);

	for (u16 i = 0; i < mModelData->getMaterialNum(); i++) {
		const char* name = mModelData->mMaterialTable.mMaterialNames->getName(i);
		if (!strcmp(name, "kage_mat")) {

			model->mJ3dModel->mMatPackets[i].mShapePacket->newDifferedDisplayList(
			    J3DMDF_TexCoord1 | J3DMDF_DiffColorReg | J3DMDF_DiffTexCoordScale | J3DMDF_DiffTexGen | CREATE_DIFF_FLAG(0, 2, 0, 0));
		}
	}

	model->updateModel();
	return model;
}

} // namespace BlackMan
} // namespace Game
