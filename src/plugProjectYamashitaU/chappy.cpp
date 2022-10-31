#include "Game/Entities/Chappy.h"

namespace Game {
namespace Chappy {

/*
 * --INFO--
 * Address:	80115F90
 * Size:	000144
 */
Obj::Obj()
{
	m_animator = new ChappyBase::ProperAnimator;
	setFSM(new ChappyBase::FSM);
	createEffect();
}

/*
 * --INFO--
 * Address:	801161DC
 * Size:	0002B0
 */
void Obj::changeMaterial()
{
	J3DModelData* modelData;
	J3DModel* j3dModel = m_model->m_j3dModel;
	modelData          = j3dModel->m_modelData;
	ResTIMG* texture0  = static_cast<Mgr*>(m_mgr)->getChangeTexture0();
	ResTIMG* texture1  = static_cast<Mgr*>(m_mgr)->getChangeTexture1();

	j3dModel->calcMaterial();

	ResTIMG* newTexture0;
	J3DTexture* j3dTexture0 = m_model->m_j3dModel->m_modelData->m_materialTable.m_texture;
	newTexture0             = j3dTexture0->_04;

	texture0->copyTo(newTexture0);

	j3dTexture0->setImageOffset((u32)texture0);
	j3dTexture0->setPaletteOffset((u32)texture0);

	ResTIMG* newTexture1;
	J3DTexture* j3dTexture1 = m_model->m_j3dModel->m_modelData->m_materialTable.m_texture;
	newTexture1             = &j3dTexture1->_04[1];

	texture1->copyTo(newTexture1);

	j3dTexture1->setImageOffset2((u32)texture1);
	j3dTexture1->setPaletteOffset2((u32)texture1);

	for (u16 i = 0; i < modelData->m_materialTable.m_count1; i++) {
		J3DMatPacket* packet  = &j3dModel->m_matPackets[i];
		j3dSys.m_matPacket    = packet;
		J3DMaterial* material = modelData->m_materialTable.m_materials1[i];
		material->diff(packet->_2C->_34);
	}
}

} // namespace Chappy
} // namespace Game
