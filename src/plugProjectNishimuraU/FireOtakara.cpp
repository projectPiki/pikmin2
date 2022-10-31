#include "Game/Entities/FireOtakara.h"

namespace Game {
namespace FireOtakara {
/*
 * --INFO--
 * Address:	802B81C8
 * Size:	0000A4
 */
Obj::Obj() { createEffect(); }

/*
 * --INFO--
 * Address:	802B826C
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
 * Address:	802B8410
 * Size:	000060
 */
void Obj::interactCreature(Creature* creature)
{
	f32 damage = static_cast<OtakaraBase::Parms*>(m_parms)->m_general.m_attackDamage.m_value;
	InteractFire fire(this, damage);
	creature->stimulate(fire);
}

/*
 * --INFO--
 * Address:	802B8470
 * Size:	000060
 */
void Obj::createEffect() { m_efxChargeFire = new efx::TOtaChargefire; }

/*
 * --INFO--
 * Address:	802B84D0
 * Size:	000048
 */
void Obj::setupEffect()
{
	Matrixf* centerJointMtx = m_model->getJoint("center")->getWorldMatrix();
	m_efxChargeFire->setMtxptr(centerJointMtx->m_matrix.mtxView);
}

/*
 * --INFO--
 * Address:	802B8518
 * Size:	000034
 */
void Obj::startChargeEffect() { m_efxChargeFire->create(nullptr); }

/*
 * --INFO--
 * Address:	802B854C
 * Size:	000030
 */
void Obj::finishChargeEffect() { m_efxChargeFire->fade(); }

/*
 * --INFO--
 * Address:	802B857C
 * Size:	0000B0
 */
void Obj::createDisChargeEffect()
{
	efx::Arg fxArg(m_position);
	efx::TOtaFire dischargeFX;
	dischargeFX.create(&fxArg);
}

/*
 * --INFO--
 * Address:	802B862C
 * Size:	000030
 */
void Obj::effectDrawOn() { m_efxChargeFire->endDemoDrawOn(); }

/*
 * --INFO--
 * Address:	802B865C
 * Size:	000030
 */
void Obj::effectDrawOff() { m_efxChargeFire->startDemoDrawOff(); }

/*
 * --INFO--
 * Address:	802B868C
 * Size:	000044
 */
void Obj::startDisChargeSE() { getJAIObject()->startSound(PSSE_EN_OTAKARA_ATTACK_FIRE, 0); }
} // namespace FireOtakara
} // namespace Game
