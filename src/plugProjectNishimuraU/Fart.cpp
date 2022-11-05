#include "Game/Entities/Fart.h"
#include "Game/Entities/PelletNumber.h"
#include "Game/Entities/ItemHoney.h"
#include "Game/gamePlayData.h"
#include "PS.h"
#include "trig.h"

namespace Game {
namespace Fart {

/*
 * --INFO--
 * Address:	80285448
 * Size:	000098
 */
Obj::Obj() { createEffect(); }

/*
 * --INFO--
 * Address:	802854E0
 * Size:	000070
 */
void Obj::doUpdateCommon()
{
	EnemyBase::doUpdateCommon();
	interactFartGasAttack();
	if (getStateID() >= 2) {
		getJAIObject()->startSound(PSSE_EN_FART_BUZZ, 0);
	}
}

/*
 * --INFO--
 * Address:	80285550
 * Size:	0001F0
 */
void Obj::changeMaterial()
{
	J3DModelData* modelData;
	J3DModel* j3dModel;
	ResTIMG* changeTexture;
	ResTIMG* newTexture;
	J3DTexture* j3dTexture;

	j3dModel      = m_model->m_j3dModel;
	modelData     = j3dModel->m_modelData;
	changeTexture = static_cast<Mgr*>(m_mgr)->getChangeTexture();

	u16 idx                = modelData->m_materialTable._0C->getIndex("karada");
	J3DMaterial* karadaMat = modelData->m_materialTable.m_materials1[idx];
	karadaMat->m_tevBlock->setTevKColor(0, J3DGXColor(0xF, 0xF, 0xF, 0xFF));

	j3dModel->calcMaterial();

	j3dTexture = m_model->m_j3dModel->m_modelData->m_materialTable.m_texture;
	newTexture = j3dTexture->_04;

	changeTexture->copyTo(newTexture);

	j3dTexture->setImageOffset((u32)changeTexture);
	j3dTexture->setPaletteOffset((u32)changeTexture);

	for (u16 i = 0; i < modelData->m_materialTable.m_count1; i++) {
		J3DMatPacket* packet  = &j3dModel->m_matPackets[i];
		j3dSys.m_matPacket    = packet;
		J3DMaterial* material = modelData->m_materialTable.m_materials1[i];
		material->diff(packet->_2C->_34);
	}
}

/*
 * --INFO--
 * Address:	80285740
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	80285760
 * Size:	0001F4
 */
void Obj::interactFartGasAttack()
{
	if (m_fartTimer < 2.5f) {
		m_fartTimer += sys->m_deltaTime;
		Kogane::Parms* parms = static_cast<Kogane::Parms*>(m_parms);
		f32 max              = m_fartPosition.y + parms->m_general.m_fp22.m_value;
		f32 min              = m_fartPosition.y - parms->m_general.m_fp22.m_value;
		f32 radSqr           = SQUARE(parms->m_general.m_fp22.m_value);

		Sys::Sphere sphere(m_fartPosition);
		sphere.m_radius = parms->m_general.m_fp22.m_value;

		CellIteratorArg arg(sphere);
		arg._1C = true;

		CellIterator iterator(arg);
		CI_LOOP(iterator)
		{
			Creature* creature = static_cast<Creature*>(*iterator);

			if (creature->isAlive() && (creature->isNavi() || creature->isPiki())) {
				Vector3f position = creature->getPosition();
				if ((position.y < max) && (position.y > min)) {
					Vector2f delta;
					getFartDistance2D(position, delta);
					if (SQUARE(delta.x) + SQUARE(delta.y) < radSqr) {
						InteractGas gas(this, static_cast<Kogane::Parms*>(m_parms)->m_general.m_attackDamage.m_value);
						creature->stimulate(gas);
					}
				}
			}
		}
		PSStartSoundVec(PSSE_EN_OTAKARA_ATK_GAS, (Vec*)&m_fartPosition);
	}
}

/*
 * --INFO--
 * Address:	80285954
 * Size:	000120
 */
void Obj::createItem()
{
	if (createTreasureItem()) {
		return;
	}

	bool createPelletItem = true;
	u32 initArg           = 0;
	u32 amount            = 0;

	switch (m_flipTally) {
	case 0: // initial flip
		createPelletItem = false;
		initArg          = HONEY_Y;
		amount           = 3;
		break;
	case 1: // second flip
		createPelletItem = false;

		if (playData && playData->isDemoFlag(DEMO_First_Bitter_Spray_Made)) {
			initArg = HONEY_B;
			amount  = 1;
		} else {
			initArg = HONEY_Y;
			amount  = 3;
		}
		break;
	case 2: // third flip
		createPelletItem = false;

		if (playData && playData->isDemoFlag(DEMO_First_Bitter_Spray_Made)) {
			initArg = HONEY_B;
			amount  = 1;
		} else {
			initArg = HONEY_Y;
			amount  = 3;
		}

		m_appearTimer = 12800.0f;
		break;
	default:
		break;
	}

	if (createPelletItem) {
		createPellet(initArg, amount);
	} else {
		createDoping(initArg, amount);
	}

	m_flipTally++;
}

/*
 * --INFO--
 * Address:	80285A74
 * Size:	0000B8
 */
void Obj::createEffect()
{
	m_bodyEffect = new efx::TBabaFly_ver01(&m_position);
	m_fartTimer  = 2.5f;
}

/*
 * --INFO--
 * Address:	80285B2C
 * Size:	000024
 */
void Obj::resetFartTimer()
{
	m_fartTimer    = 2.5f;
	m_fartPosition = m_position;
}

/*
 * --INFO--
 * Address:	80285B50
 * Size:	0000A8
 */
void Obj::startBodyEffect()
{
	efx::ArgScale arg(m_position, static_cast<Kogane::Parms*>(m_parms)->m_properParms.m_fp40.m_value);
	m_bodyEffect->create(&arg);
	resetFartTimer();
}

/*
 * --INFO--
 * Address:	80285BF8
 * Size:	000030
 */
void Obj::finishBodyEffect() { m_bodyEffect->fade(); }

/*
 * --INFO--
 * Address:	80285C28
 * Size:	000204
 */
void Obj::createFartEffect()
{
	efx::TBabaHe fartEffectFX;
	Vector3f position = m_position;
	efx::ArgRotY arg(position.x, position.y, position.z, getFaceDir());
	fartEffectFX.create(&arg);
	m_fartTimer = 0.0f;

	Kogane::Parms* parms = static_cast<Kogane::Parms*>(m_parms);
	f32 scale            = (parms->m_properParms.m_fp40.m_value * parms->m_general.m_fp20.m_value);

	Vector3f temp_vec(scale * pikmin2_sinf(m_faceDir), 0.0f, scale * pikmin2_cosf(m_faceDir));

	m_fartPosition = getBodyJointPos();
	m_fartPosition -= temp_vec;

	getJAIObject()->startSound(PSSE_EN_FART_GAS, 0);
}

/*
 * --INFO--
 * Address:	80285E2C
 * Size:	000030
 */
void Obj::effectDrawOn() { m_bodyEffect->endDemoDrawOn(); }

/*
 * --INFO--
 * Address:	80285E5C
 * Size:	000030
 */
void Obj::effectDrawOff() { m_bodyEffect->startDemoDrawOff(); }

/*
 * --INFO--
 * Address:	80285E8C
 * Size:	000044
 */
void Obj::createPressSESpecial() { getJAIObject()->startSound(PSSE_EN_FART_HIT, 0); }

} // namespace Fart
} // namespace Game
