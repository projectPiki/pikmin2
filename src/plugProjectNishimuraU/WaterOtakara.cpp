#include "Game/Entities/WaterOtakara.h"

namespace Game {
namespace WaterOtakara {

/*
 * --INFO--
 * Address:	802B8A38
 * Size:	0000A4
 */
Obj::Obj() { createEffect(); }

/*
 * --INFO--
 * Address:	802B8ADC
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
 * Address:	802B8C80
 * Size:	000060
 */
void Obj::interactCreature(Creature* creature)
{
	f32 damage = static_cast<OtakaraBase::Parms*>(m_parms)->m_general.m_attackDamage.m_value;
	InteractBubble bubble(this, damage);
	creature->stimulate(bubble);
}

/*
 * --INFO--
 * Address:	802B8CE0
 * Size:	000060
 */
void Obj::createEffect() { m_efxChargeWater = new efx::TOtaChargewat; }

/*
 * --INFO--
 * Address:	802B8D40
 * Size:	000048
 */
void Obj::setupEffect()
{
	Matrixf* centerJointMtx = m_model->getJoint("center")->getWorldMatrix();
	m_efxChargeWater->setMtxptr(centerJointMtx->m_matrix.mtxView);
}

/*
 * --INFO--
 * Address:	802B8D88
 * Size:	000034
 */
void Obj::startChargeEffect() { m_efxChargeWater->create(nullptr); }

/*
 * --INFO--
 * Address:	802B8DBC
 * Size:	000030
 */
void Obj::finishChargeEffect() { m_efxChargeWater->fade(); }

/*
 * --INFO--
 * Address:	802B8DEC
 * Size:	0000A4
 */
void Obj::createDisChargeEffect()
{
	efx::Arg fxArg(m_position);
	efx::TOtaWat dischargeFX;
	dischargeFX.create(&fxArg);
}

/*
 * --INFO--
 * Address:	802B8E90
 * Size:	000030
 */
void Obj::effectDrawOn() { m_efxChargeWater->endDemoDrawOn(); }

/*
 * --INFO--
 * Address:	802B8EC0
 * Size:	000030
 */
void Obj::effectDrawOff() { m_efxChargeWater->startDemoDrawOff(); }

/*
 * --INFO--
 * Address:	802B8EF0
 * Size:	000044
 */
void Obj::startDisChargeSE() { getJAIObject()->startSound(PSSE_EN_OTAKARA_ATK_WATER, 0); }
} // namespace WaterOtakara
} // namespace Game
