#include "Game/Entities/Tank.h"

namespace Game {
namespace Ftank {

/*
 * --INFO--
 * Address:	8029E484
 * Size:	0000A4
 */
Obj::Obj() { createEffect(); }

/*
 * --INFO--
 * Address:	8029E528
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
 * Address:	8029E6CC
 * Size:	000048
 */
void Obj::createEffect() { m_tankEffect = new efx::TTankEffect(nullptr); }

/*
 * --INFO--
 * Address:	8029EAF0
 * Size:	000054
 */
void Obj::setupEffect()
{
	efx::TTankEffect* effect;
	Matrixf* mtx = m_joint->getWorldMatrix();
	effect       = m_tankEffect;

	effect->m_efxFire.m_efxABC.setMtxptr(mtx->m_matrix.mtxView);
	effect->m_efxFire.m_efxIND.m_mtx = mtx;
	effect->m_efxFireYodare.m_mtx    = mtx;
}

/*
 * --INFO--
 * Address:	8029EB44
 * Size:	000034
 */
void Obj::startEffect() { m_tankEffect->m_efxFire.create(nullptr); }

/*
 * --INFO--
 * Address:	8029EB78
 * Size:	000054
 */
void Obj::startYodare()
{
	efx::TTankEffect* tankEffect = m_tankEffect;
	tankEffect->m_efxFire.fade();
	tankEffect->m_efxFireYodare.create(nullptr);
}

/*
 * --INFO--
 * Address:	8029EC64
 * Size:	000050
 */
void Obj::finishEffect()
{
	efx::TTankEffect* effect = m_tankEffect;
	effect->m_efxFire.fade();
	effect->m_efxFireYodare.fade();
}

/*
 * --INFO--
 * Address:	8029ECB4
 * Size:	000064
 */
void Obj::effectDrawOn()
{
	efx::TTankEffect* effect = m_tankEffect;
	effect->m_efxFire.m_efxABC.endDemoDrawOn();
	effect->m_efxFire.m_efxIND.endDemoDrawOn();
	effect->m_efxFireYodare.endDemoDrawOn();
}

/*
 * --INFO--
 * Address:	8029ED58
 * Size:	000064
 */
void Obj::effectDrawOff()
{
	efx::TTankEffect* effect = m_tankEffect;
	effect->m_efxFire.m_efxABC.startDemoDrawOff();
	effect->m_efxFire.m_efxIND.startDemoDrawOff();
	effect->m_efxFireYodare.startDemoDrawOff();
}

/*
 * --INFO--
 * Address:	8029EDFC
 * Size:	000060
 */
void Obj::interactCreature(Creature* creature)
{
	InteractFire fire(this, static_cast<EnemyParmsBase*>(m_parms)->m_general.m_attackDamage.m_value);
	creature->stimulate(fire);
}

/*
 * --INFO--
 * Address:	8029EE5C
 * Size:	000010
 */
void Obj::stopEffectRadius(f32 radius)
{
	efx::TTankEffect* effect                          = m_tankEffect;
	effect->m_efxFire.m_efxABC.m_particleCallBack._04 = radius;
	effect->m_efxFire.m_efxIND.m_particleCallBack._04 = radius;
}

/*
 * --INFO--
 * Address:	8029EE6C
 * Size:	000044
 */
void Obj::createChargeSE() { getJAIObject()->startSound(PSSE_EN_TANK_BREATH, 0); }

/*
 * --INFO--
 * Address:	8029EEB0
 * Size:	000044
 */
void Obj::createDisChargeSE() { getJAIObject()->startSound(PSSE_EN_TANK_FIRE, 0); }

} // namespace Ftank
} // namespace Game
