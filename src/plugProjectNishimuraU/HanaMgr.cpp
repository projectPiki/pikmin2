#include "Game/Entities/Hana.h"

namespace Game {
namespace Hana {

/*
 * --INFO--
 * Address:	802F2DEC
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "ハナドックリマネージャ"; // hanadokkuri manager
}

/*
 * --INFO--
 * Address:	802F2E3C
 * Size:	000048
 */
void Mgr::doAlloc() { init(new ChappyBase::Parms); }

/*
 * --INFO--
 * Address:	802F2E84
 * Size:	000060
 */
void Mgr::createObj(int count) { mObj = new Obj[count]; }

/*
 * --INFO--
 * Address:	802F2FD4
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &mObj[index]; }

/*
 * --INFO--
 * Address:	802F2FE4
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

} // namespace Hana
} // namespace Game
