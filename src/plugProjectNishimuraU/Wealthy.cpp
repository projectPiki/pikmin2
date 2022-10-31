#include "Game/Entities/Wealthy.h"
#include "Game/Entities/PelletNumber.h"
#include "Game/Entities/ItemHoney.h"
#include "Game/gamePlayData.h"

namespace Game {
namespace Wealthy {

/*
 * --INFO--
 * Address:	80284A9C
 * Size:	000098
 */
Obj::Obj() { createEffect(); }

/*
 * --INFO--
 * Address:	80284B34
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
	karadaMat->m_tevBlock->setTevKColor(0, J3DGXColor(0x64, 0x64, 0x64, 0xFF));

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
 * Address:	80284D24
 * Size:	000144
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
		if (gameSystem && gameSystem->m_inCave) {
			createPelletItem = false;
			initArg          = HONEY_Y;
			amount           = 3;
		} else {
			initArg = PELLET_NUMBER_FIVE; // pellet size: 5
			amount  = 3;
		}

		break;
	case 1: // second flip
		createPelletItem = false;

		if (playData && playData->isDemoFlag(DEMO_First_Spicy_Spray_Made)) {
			initArg = HONEY_R;
			amount  = 1;
		} else {
			initArg = HONEY_Y;
			amount  = 3;
		}
		break;
	case 2: // third flip
		createPelletItem = false;

		if (playData && playData->isDemoFlag(DEMO_First_Spicy_Spray_Made)) {
			initArg = HONEY_R;
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
 * Address:	80284E68
 * Size:	0000B0
 */
void Obj::createEffect() { m_bodyEffect = new efx::TOoganeKira; }

/*
 * --INFO--
 * Address:	80284F18
 * Size:	000058
 */
void Obj::startBodyEffect()
{
	SysShape::Joint* bodyJoint = m_model->getJoint("body");
	m_bodyEffect->m_mtx        = bodyJoint->getWorldMatrix();
	m_bodyEffect->create(nullptr);
}

/*
 * --INFO--
 * Address:	80284F70
 * Size:	000030
 */
void Obj::finishBodyEffect() { m_bodyEffect->fade(); }

/*
 * --INFO--
 * Address:	80284FA0
 * Size:	000030
 */
void Obj::effectDrawOn() { m_bodyEffect->endDemoDrawOn(); }

/*
 * --INFO--
 * Address:	80284FD0
 * Size:	000030
 */
void Obj::effectDrawOff() { m_bodyEffect->startDemoDrawOff(); }

/*
 * --INFO--
 * Address:	80285000
 * Size:	000044
 */
void Obj::createPressSENormal() { getJAIObject()->startSound(PSSE_EN_OOGANE_HIT, 0); }

} // namespace Wealthy
} // namespace Game
