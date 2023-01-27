#include "Game/Entities/Demon.h"

namespace Game {
namespace Demon {

/*
 * --INFO--
 * Address:	8028E048
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "オニサライマネージャ"; // onisarai manager
}

/*
 * --INFO--
 * Address:	8028E098
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Sarai::Parms); }

/*
 * --INFO--
 * Address:	8028E0E0
 * Size:	000060
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/*
 * --INFO--
 * Address:	8028E230
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

/*
 * --INFO--
 * Address:	8028E240
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

} // namespace Demon
} // namespace Game
