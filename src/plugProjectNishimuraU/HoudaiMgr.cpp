#include "Game/Entities/Houdai.h"
#include "LoadResource.h"
#include "JSystem/JUtility/JUTNameTab.h"
#include "Sys/MatBaseAnimation.h"

namespace Game {
namespace Houdai {

static const char houdaiMgrName[] = "246-HoudaiMgr";

namespace {
static const char* cMatAnimBtkTexName = "/enemy/data/Houdai/houdai_model.btk";
static const char* cMatAnimBrkTexName = "/enemy/data/Houdai/houdai_model.brk";
} // namespace

/*
 * --INFO--
 * Address:	802BEDE0
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "ホウダイマネージャ"; // houdai manager
}

/*
 * --INFO--
 * Address:	802BEE30
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Parms); }

/*
 * --INFO--
 * Address:	802BF1AC
 * Size:	000060
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/*
 * --INFO--
 * Address:	802BF2C8
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

/*
 * --INFO--
 * Address:	802BF2D8
 * Size:	000068
 */
void Mgr::loadModelData()
{
	EnemyMgrBase::loadModelData();
	J3DShape* shape;
	for (u16 j = 0; j < mModelData->getShapeNum(); j++) {
		shape         = mModelData->mShapeTable.mItems[j];
		shape->mFlags = (shape->mFlags & (~0xF000)) | 0x2000;
	}
}

} // namespace Houdai
} // namespace Game
