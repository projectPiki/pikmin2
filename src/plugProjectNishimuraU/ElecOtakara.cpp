#include "Game/Entities/ElecOtakara.h"

namespace Game {
namespace ElecOtakara {
/*
 * --INFO--
 * Address:	802B9AD8
 * Size:	0000A4
 */
Obj::Obj() { createEffect(); }

/*
 * --INFO--
 * Address:	802B9B7C
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
 * Address:	802B9D20
 * Size:	000168
 */
void Obj::interactCreature(Creature* creature)
{
	// Get direction from US -> Creature, then make it normalise it to a unit direction
	Vector3f direction = creature->getPosition() - m_position;
	direction.y        = 0.0f;
	_normalise(direction);

	// Then scale the direction based on fp14's value
	f32 scaling = static_cast<OtakaraBase::Parms*>(m_parms)->m_general.m_fp14.m_value;
	direction.x *= scaling;
	direction.z *= scaling;

	// If the creature is a Pikmin, change the up/down direction to fp26
	if (creature->isPiki()) {
		direction.y = static_cast<OtakaraBase::Parms*>(m_parms)->m_general.m_fp26.m_value;
	}

	// Start the interaction
	InteractDenki denki(this, static_cast<OtakaraBase::Parms*>(m_parms)->m_general.m_attackDamage.m_value, &direction);
	creature->stimulate(denki);
}

/*
 * --INFO--
 * Address:	802B9E88
 * Size:	000060
 */
void Obj::createEffect() { m_efxChargeElec = new efx::TOtaChargeelec; }

/*
 * --INFO--
 * Address:	802B9EE8
 * Size:	000048
 */
void Obj::setupEffect()
{
	Matrixf* centerJointMtx = m_model->getJoint("center")->getWorldMatrix();
	m_efxChargeElec->setMtxptr(centerJointMtx->m_matrix.mtxView);
}

/*
 * --INFO--
 * Address:	802B9F30
 * Size:	000034
 */
void Obj::startChargeEffect() { m_efxChargeElec->create(nullptr); }

/*
 * --INFO--
 * Address:	802B9F64
 * Size:	000030
 */
void Obj::finishChargeEffect() { m_efxChargeElec->fade(); }

/*
 * --INFO--
 * Address:	802B9F94
 * Size:	000098
 */
void Obj::createDisChargeEffect()
{
	efx::Arg fxArg(m_position);
	efx::TOtaElec dischargeFX;
	dischargeFX.create(&fxArg);
}

/*
 * --INFO--
 * Address:	802BA02C
 * Size:	000030
 */
void Obj::effectDrawOn() { m_efxChargeElec->endDemoDrawOn(); }

/*
 * --INFO--
 * Address:	802BA05C
 * Size:	000030
 */
void Obj::effectDrawOff() { m_efxChargeElec->startDemoDrawOff(); }

/*
 * --INFO--
 * Address:	802BA08C
 * Size:	000044
 */
void Obj::startDisChargeSE() { getJAIObject()->startSound(PSSE_EN_OTAKARA_ATK_ELEC, 0); }
} // namespace ElecOtakara
} // namespace Game
