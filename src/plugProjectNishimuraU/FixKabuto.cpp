#include "types.h"
#include "Game/Entities/Kabuto.h"

namespace Game {
namespace FixKabuto {

/*
 * --INFO--
 * Address:	803006EC
 * Size:	0000A4
 */
Obj::Obj() { createEffect(); }

/*
 * --INFO--
 * Address:	80300790
 * Size:	000064
 */
void Obj::onKill(Game::CreatureKillArg* killArg)
{
	finishRotateEffect();
	finishWaitEffect();
	EnemyBase::onKill(killArg);
}

/*
 * --INFO--
 * Address:	803007F4
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
 * Address:	80300998
 * Size:	000140
 */
void Obj::createEffect()
{
	m_efxRot  = new efx::TKkabutoRot(&m_position);
	m_efxWait = new efx::TKkabutoWait(&m_position);
}

/*
 * --INFO--
 * Address:	80300AD8
 * Size:	000018
 */
void Obj::setupEffect()
{
	m_efxRot->m_position  = &m_position;
	m_efxWait->m_position = &m_position;
}

/*
 * --INFO--
 * Address:	80300AF0
 * Size:	000058
 */
void Obj::startRotateEffect()
{
	efx::Arg arg(m_position);
	m_efxRot->create(&arg);
}

/*
 * --INFO--
 * Address:	80300B48
 * Size:	000030
 */
void Obj::finishRotateEffect() { m_efxRot->fade(); }

/*
 * --INFO--
 * Address:	80300B78
 * Size:	000058
 */
void Obj::startWaitEffect()
{
	efx::Arg arg(m_position);
	m_efxWait->create(&arg);
}

/*
 * --INFO--
 * Address:	80300BD0
 * Size:	000030
 */
void Obj::finishWaitEffect() { m_efxWait->fade(); }

/*
 * --INFO--
 * Address:	80300C00
 * Size:	000050
 */
void FixKabuto::Obj::effectDrawOn()
{
	m_efxRot->endDemoDrawOn();
	m_efxWait->endDemoDrawOn();
}

/*
 * --INFO--
 * Address:	80300C50
 * Size:	000050
 */
void FixKabuto::Obj::effectDrawOff()
{
	m_efxRot->startDemoDrawOff();
	m_efxWait->startDemoDrawOff();
}

} // namespace FixKabuto
} // namespace Game
