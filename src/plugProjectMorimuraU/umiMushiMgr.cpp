#include "Game/Entities/UmiMushi.h"
#include "Game/generalEnemyMgr.h"
#include "LoadResource.h"

namespace Game {
namespace UmiMushi {

static const char umiMushiMgrName[] = "umiMushiMgr";

/**
 * @note Address: 0x8038273C
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "ウミムシマネージャ"; // sea worm manager
}

/**
 * @note Address: 0x8038278C
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new Parms); }

/**
 * @note Address: 0x80382BD8
 * @note Size: 0x20
 */
EnemyBase* Mgr::birth(EnemyBirthArg& birthArg) { return EnemyMgrBase::birth(birthArg); }

/**
 * @note Address: 0x80382BF8
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
 * @note Address: 0x80382C60
 * @note Size: 0xBC
 */
void Mgr::loadTexData()
{
	SysShape::Model::enableMaterialAnim(mModelData, 0);
	void* btkFile = nullptr;
	LoadResource::Arg loadArgBtk("/enemy/data/UmiMushi/umimusi_model1.btk");
	LoadResource::Node* resourceBtk = gLoadResourceMgr->load(loadArgBtk);
	if (resourceBtk) {
		btkFile = resourceBtk->mFile;
	}
	P2ASSERTLINE(91, btkFile);

	mTexAnimation = new Sys::MatTexAnimation;
	mTexAnimation->attachResource(btkFile, mModelData);
}

/**
 * @note Address: 0x80382D1C
 * @note Size: 0x7C
 */
SysShape::Model* Mgr::createModel()
{
	SysShape::Model* model = new SysShape::Model(mModelData, J3DMODEL_CreateNewDL, mMtxBufferSize);
	P2ASSERTLINE(111, model);
	return model;
}

/**
 * @note Address: 0x80382D98
 * @note Size: 0x160
 */
void Mgr::createObj(int count)
{
	mObj = new Obj[count];

	EnemyTypeID::EEnemyTypeID ids[] = { EnemyTypeID::EnemyID_UmiMushi, EnemyTypeID::EnemyID_UmiMushiBlind };

	int id_count = sizeof(ids) / sizeof(EnemyTypeID::EEnemyTypeID);
	int counter  = 0;
	for (int i = 0; i < id_count; i++) {
		int enemyNum = generalEnemyMgr->getEnemyNum(ids[i], false);
		for (int j = 0; j < enemyNum; j++, counter++) {
			mObj[counter].mBloysterType = ids[i];
		}
	}
}

} // namespace UmiMushi
} // namespace Game
