#include "Game/Entities/BigTreasure.h"
#include "LoadResource.h"
#include "JSystem/JUtility/JUTNameTab.h"
#include "Sys/MatBaseAnimation.h"

namespace Game {
namespace BigTreasure {

static const char bigTreasureMgrName[] = "246-BigTreasureMgr";

namespace {
static const char cMatAnimBtkTexName[] = "/enemy/data/BigTreasure/oootakara_model.btk";
static const char cMatAnimBrkTexName[] = "/enemy/data/BigTreasure/oootakara_model.brk";
} // namespace

/**
 * @note Address: 0x802D90E4
 * @note Size: 0x110
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "オオオタカラマネージャ"; // big otakara manager

	char* treasures[] = { "elec", "fire", "gas", "water", "loozy" };
	int treasureCount = sizeof(treasures) / sizeof(char*);

	for (int i = 0; i < treasureCount; i++) {
		PelletInitArg initArg;
		if (pelletMgr->makePelletInitArg(initArg, treasures[i])) {
			pelletMgr->setUse(&initArg);
		}
	}
}

/**
 * @note Address: 0x802D91F4
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new Parms); }

/**
 * @note Address: 0x802DA27C
 * @note Size: 0x60
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/**
 * @note Address: 0x802DA398
 * @note Size: 0x10
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

/**
 * @note Address: 0x802DA3A8
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
 * @note Address: 0x802DA410
 * @note Size: 0x7C
 */
SysShape::Model* Mgr::createModel()
{
	SysShape::Model* model = new SysShape::Model(mModelData, J3DMODEL_UseSingleSharedDL, mMtxBufferSize);
	P2ASSERTLINE(120, model);
	return model;
}

} // namespace BigTreasure
} // namespace Game
