#include "Game/Entities/SnakeCrow.h"

namespace Game {
namespace SnakeCrow {

static const char snakeCrowMgrName[] = "246-SnakeCrowMgr";

/*
 * --INFO--
 * Address:	80292B9C
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	m_name = "ヘビガラスマネージャ"; // snake crow manager
}

/*
 * --INFO--
 * Address:	80292BEC
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Parms); }

/*
 * --INFO--
 * Address:	80292DC4
 * Size:	000060
 */
void Mgr::createObj(int count) { m_obj = new Obj[count]; }

/*
 * --INFO--
 * Address:	80292EE0
 * Size:	000010
 */
EnemyBase* Mgr::getEnemy(int index) { return &m_obj[index]; }

/*
 * --INFO--
 * Address:	80292EF0
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

} // namespace SnakeCrow
} // namespace Game
