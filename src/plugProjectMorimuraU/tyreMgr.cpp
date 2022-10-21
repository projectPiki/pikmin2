#include "Game/Entities/Tyre.h"

namespace Game {
namespace Tyre {

/*
 * --INFO--
 * Address:	803ABE60
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	m_name = "タイヤマネージャ"; // tire manager
}

/*
 * --INFO--
 * Address:	803ABEB0
 * Size:	000048
 */
void Mgr::doAlloc(void) { init(new Parms); }

/*
 * --INFO--
 * Address:	803ABFD4
 * Size:	000020
 */
EnemyBase* Mgr::birth(EnemyBirthArg& arg) { return EnemyMgrBase::birth(arg); }

/*
 * --INFO--
 * Address:	803ABFF4
 * Size:	000094
 */
void Mgr::loadModelData()
{
	EnemyMgrBase::loadModelData();
	J3DShape* shape;
	for (u16 j = 0; j < m_modelData->getShapeCount(); j++) {
		shape = m_modelData->m_shapeTable.m_items[j];
		P2ASSERTLINE(56, shape != nullptr);
		shape->m_flags = (shape->m_flags & (~0xF000)) | 0x2000;
	}
}

/*
 * --INFO--
 * Address:	803AC088
 * Size:	00002C
 */
J3DModelData* Mgr::doLoadBmd(void* file)
{
	return J3DModelLoaderDataBase::load(file, 0x21240030); // flags should really be OR'd together
}

} // namespace Tyre
} // namespace Game
