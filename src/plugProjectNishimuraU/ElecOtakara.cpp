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
	Vector3f position = creature->getPosition();
	Vector3f sep      = position - m_position;
	sep.y             = 0.0f;

	_normalise(sep);

	f32 scaling = static_cast<OtakaraBase::Parms*>(m_parms)->m_general.m_fp14.m_value;
	sep.x *= scaling;
	sep.z *= scaling;

	if (creature->isPiki()) {
		sep.y = static_cast<OtakaraBase::Parms*>(m_parms)->m_general.m_fp26.m_value;
	}

	InteractDenki denki(this, static_cast<OtakaraBase::Parms*>(m_parms)->m_general.m_attackDamage.m_value, &sep);
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
	Matrixf* mat = m_model->getJoint("center")->getWorldMatrix();
	m_efxChargeElec->setMtxptr(mat->m_matrix.mtxView);
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
