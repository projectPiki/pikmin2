#include "types.h"
#include "Game/Entities/BombOtakara.h"
#include "Game/Entities/Bomb.h"

namespace Game {
namespace BombOtakara {
/*
 * --INFO--
 * Address:	802F9624
 * Size:	000090
 */
Obj::Obj() { }

/*
 * --INFO--
 * Address:	802F96B4
 * Size:	0001A4
 */
void Obj::changeMaterial()
{
	J3DModelData* modelData;
	J3DModel* j3dModel = m_model->m_j3dModel;
	modelData          = j3dModel->m_modelData;
	ResTIMG* texture   = static_cast<Mgr*>(m_mgr)->getChangeTexture();

	j3dModel->calcMaterial();

	ResTIMG* newTexture;
	J3DTexture* j3dTexture = m_model->m_j3dModel->m_modelData->m_materialTable.m_texture;
	newTexture             = j3dTexture->_04;

	texture->copyTo(newTexture);

	j3dTexture->setImageOffset((u32)texture);
	j3dTexture->setPaletteOffset((u32)texture);

	for (u16 i = 0; i < modelData->m_materialTable.m_count1; i++) {
		J3DMatPacket* packet  = &j3dModel->m_matPackets[i];
		j3dSys.m_matPacket    = packet;
		J3DMaterial* material = modelData->m_materialTable.m_materials1[i];
		material->diff(packet->_2C->_34);
	}
}

/*
 * --INFO--
 * Address:	802F9858
 * Size:	0000B4
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if (m_targetCreature != nullptr && m_targetCreature->isAlive()) {
		if (isEvent(0, EB_Bittered)) {
			// If we're bittered, then register the damage
			static_cast<Bomb::Obj*>(m_targetCreature)->damageCallBack(creature, damage, collpart);
		} else {
			// If not, then explode
			static_cast<Bomb::Obj*>(m_targetCreature)->forceBomb();
		}
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	802F990C
 * Size:	00002C
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* collpart) { return damageCallBack(creature, damage, collpart); }

/*
 * --INFO--
 * Address:	802F9938
 * Size:	00007C
 */
bool Obj::earthquakeCallBack(Creature* creature, f32 p1)
{
	if ((m_targetCreature != nullptr) && m_targetCreature->isAlive()) {
		static_cast<Bomb::Obj*>(m_targetCreature)->forceBomb();
	}

	return EnemyBase::earthquakeCallBack(creature, p1);
}

/*
 * --INFO--
 * Address:	802F99B4
 * Size:	000030
 */
bool Obj::bombCallBack(Creature* creature, Vector3f& vec, f32 damage) { return damageCallBack(creature, damage, nullptr); }

/*
 * --INFO--
 * Address:	802F99E4
 * Size:	00007C
 */
void Obj::startEscapeSE()
{
	if (m_escapeSfxTimer > 2.5f) {
		getJAIObject()->startSound(PSSE_EN_OTAKARA_STANDUP, 0);
		m_escapeSfxTimer = 0.0f;
		return;
	}

	m_escapeSfxTimer += sys->m_deltaTime;
}
} // namespace BombOtakara
} // namespace Game
