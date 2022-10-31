#include "Game/Entities/GasOtakara.h"

namespace Game {
namespace GasOtakara {
/*
 * --INFO--
 * Address:	802B9294
 * Size:	0000A4
 */
Obj::Obj() { createEffect(); }

/*
 * --INFO--
 * Address:	802B9338
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
 * Address:	802B94DC
 * Size:	000060
 */
void Obj::interactCreature(Creature* creature)
{
	f32 damage = static_cast<OtakaraBase::Parms*>(m_parms)->m_general.m_attackDamage.m_value;
	InteractGas gas(this, damage);
	creature->stimulate(gas);
}

/*
 * --INFO--
 * Address:	802B953C
 * Size:	000060
 */
void Obj::createEffect() { m_efxChargeGas = new efx::TOtaChargegas; }

/*
 * --INFO--
 * Address:	802B959C
 * Size:	000048
 */
void Obj::setupEffect()
{
	Matrixf* centerJointMtx = m_model->getJoint("center")->getWorldMatrix();
	m_efxChargeGas->setMtxptr(centerJointMtx->m_matrix.mtxView);
}

/*
 * --INFO--
 * Address:	802B95E4
 * Size:	000034
 */
void Obj::startChargeEffect() { m_efxChargeGas->create(nullptr); }

/*
 * --INFO--
 * Address:	802B9618
 * Size:	000030
 */
void Obj::finishChargeEffect() { m_efxChargeGas->fade(); }

/*
 * --INFO--
 * Address:	802B9648
 * Size:	00008C
 */
void Obj::createDisChargeEffect()
{
	efx::Arg fxArg(m_position);
	efx::TOtaGas dischargeFX;
	dischargeFX.create(&fxArg);
}

/*
 * --INFO--
 * Address:	802B96D4
 * Size:	000030
 */
void Obj::effectDrawOn() { m_efxChargeGas->endDemoDrawOn(); }

/*
 * --INFO--
 * Address:	802B9704
 * Size:	000030
 */
void Obj::effectDrawOff() { m_efxChargeGas->startDemoDrawOff(); }

/*
 * --INFO--
 * Address:	802B9734
 * Size:	000044
 */
void Obj::startDisChargeSE() { getJAIObject()->startSound(PSSE_EN_OTAKARA_ATK_GAS, 0); }
} // namespace GasOtakara
} // namespace Game
