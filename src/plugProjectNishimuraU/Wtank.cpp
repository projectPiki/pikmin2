#include "Game/Entities/Tank.h"

namespace Game {
namespace Wtank {

/*
 * --INFO--
 * Address:	8027C80C
 * Size:	0000A4
 */
Obj::Obj() { createEffect(); }

/*
 * --INFO--
 * Address:	8027C8B0
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
 * Address:	8027CA54
 * Size:	00019C
 */
void Obj::createEffect() { m_tankEffect = new efx::TWtankEffect(nullptr); }

/*
 * --INFO--
 * Address:	8027CDDC
 * Size:	000050
 */
void Obj::setupEffect()
{
	efx::TWtankEffect* effect;
	Matrixf* mtx = m_joint->getWorldMatrix();
	effect       = m_tankEffect;

	effect->m_efxWat.setMtxptr(mtx->m_matrix.mtxView);
	// effect->m_efxWat.m_efxIND.m_mtx = mtx;
	effect->m_efxWatYodare.m_mtx = mtx;
}

/*
 * --INFO--
 * Address:	8027CE2C
 * Size:	000034
 */
void Obj::startEffect() { m_tankEffect->m_efxWat.create(nullptr); }

/*
 * --INFO--
 * Address:	8027CE60
 * Size:	000054
 */
void Obj::startYodare()
{
	efx::TWtankEffect* tankEffect = m_tankEffect;
	tankEffect->m_efxWat.fade();
	tankEffect->m_efxWatYodare.create(nullptr);
}

/*
 * --INFO--
 * Address:	8027CF40
 * Size:	000050
 */
void Obj::finishEffect()
{
	efx::TWtankEffect* effect = m_tankEffect;
	effect->m_efxWat.fade();
	effect->m_efxWatYodare.fade();
}

/*
 * --INFO--
 * Address:	8027CF90
 * Size:	000050
 */
void Obj::effectDrawOn()
{
	efx::TWtankEffect* effect = m_tankEffect;
	effect->m_efxWat.endDemoDrawOn();
	effect->m_efxWatYodare.endDemoDrawOn();
}

/*
 * --INFO--
 * Address:	8027D03C
 * Size:	000050
 */
void Obj::effectDrawOff()
{
	efx::TWtankEffect* effect = m_tankEffect;
	effect->m_efxWat.startDemoDrawOff();
	effect->m_efxWatYodare.startDemoDrawOff();
}

/*
 * --INFO--
 * Address:	8027D0E8
 * Size:	000060
 */
void Obj::interactCreature(Creature* creature)
{
	InteractBubble bubble(this, static_cast<EnemyParmsBase*>(m_parms)->m_general.m_attackDamage.m_value);
	creature->stimulate(bubble);
}

/*
 * --INFO--
 * Address:	8027D148
 * Size:	00000C
 */
void Obj::stopEffectRadius(f32 radius)
{
	efx::TWtankEffect* effect               = m_tankEffect;
	effect->m_efxWat.m_particleCallBack._04 = radius;
}

/*
 * --INFO--
 * Address:	8027D154
 * Size:	000044
 */
void Obj::createChargeSE() { getJAIObject()->startSound(PSSE_EN_WATERTANK_BREATH, 0); }

/*
 * --INFO--
 * Address:	8027D198
 * Size:	000044
 */
void Obj::createDisChargeSE() { getJAIObject()->startSound(PSSE_EN_WATERTANK_SHOT, 0); }

} // namespace Wtank
} // namespace Game
