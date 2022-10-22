#include "Game/Entities/SnakeWhole.h"

namespace Game {
namespace SnakeWhole {

static const char snakeWholeMgrName[] = "246-SnakeWholeMgr";

/*
 * --INFO--
 * Address:	802CE2DC
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	m_name = "ヘビガラス全身マネージャ"; // snake crow whole body manager
}

/*
 * --INFO--
 * Address:	802CE32C
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Parms); }

/*
 * --INFO--
 * Address:	802CE4C8
 * Size:	000060
 */
void Mgr::createObj(int count) { m_obj = new Obj[count]; }

/*
 * --INFO--
 * Address:	802CE5E4
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &m_obj[index]; }

/*
 * --INFO--
 * Address:	802CE5F4
 * Size:	000068
 */
void Mgr::loadModelData()
{
	EnemyMgrBase::loadModelData();
	J3DShape* shape;
	for (u16 j = 0; j < m_modelData->getShapeCount(); j++) {
		shape          = m_modelData->m_shapeTable.m_items[j];
		shape->m_flags = (shape->m_flags & (~0xF000)) | 0x2000;
	}
}

} // namespace SnakeWhole
} // namespace Game
