#include "Game/Entities/YellowChappy.h"

namespace Game {
namespace YellowChappy {

/*
 * --INFO--
 * Address:	8012C378
 * Size:	000154
 */
Obj::Obj()
{
	m_efxTest     = nullptr;
	m_globalAlpha = 0xFF;
	m_animator    = new ChappyBase::ProperAnimator;
	setFSM(new ChappyBase::FSM);
	createEffect();
}

/*
 * --INFO--
 * Address:	8012C4CC
 * Size:	000048
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	ChappyBase::Obj::onInit(initArg);
	m_globalAlpha   = 0xFF;
	m_hasHair       = true;
	m_effectAnimMgr = &static_cast<Mgr*>(m_mgr)->m_effectAnimMgr;
}

/*
 * --INFO--
 * Address:	8012C514
 * Size:	0001B0
 */
void Obj::doUpdateCommon()
{
	EnemyBase::doUpdateCommon();
	int alpha = m_globalAlpha;

	if (isEvent(0, EB_Bittered)) {
		alpha += -10;

	} else {
		if (m_health < 0.5f * m_maxHealth) {
			if (m_hasHair != 0) {
				SysShape::Joint* joint = m_model->getJoint("body");
				P2ASSERTLINE(124, joint != nullptr);
				Matrixf* mat = joint->getWorldMatrix();
				P2ASSERTLINE(126, mat != nullptr);

				efx::TKechappyOff offEffect(mat);
				offEffect.create(nullptr);

				m_hasHair = false;
			}
			alpha += -50;
		} else {
			alpha += 10;
		}
	}

	if (alpha < 0) {
		alpha = 0;
	} else if (alpha > 0xFF) {
		alpha     = 0xFF;
		m_hasHair = true;
	}

	m_globalAlpha = alpha;
	m_efxTest->setGlobalAlpha(m_globalAlpha);
	m_efxTest->setGlobalDynamicsScale(m_scale);

	f32 frame = getMotionFrame();
	int idx   = getCurrAnimIndex();
	m_effectAnimMgr->update(m_efxTest, idx, frame);
}

/*
 * --INFO--
 * Address:	8012C6C4
 * Size:	000040
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	EnemyBase::onKill(killArg);
	m_efxTest->forceKill();
}

/*
 * --INFO--
 * Address:	8012C704
 * Size:	000068
 */
void Obj::createEffect()
{
	ChappyBase::Obj::createEffect();
	m_efxTest = new efx::TKechappyTest;
}

/*
 * --INFO--
 * Address:	8012C76C
 * Size:	0000B4
 */
void Obj::setupEffect()
{
	ChappyBase::Obj::setupEffect();
	SysShape::Joint* joint = m_model->getJoint("body");
	P2ASSERTLINE(192, joint != nullptr);
	Matrixf* mat = joint->getWorldMatrix();
	P2ASSERTLINE(194, mat != nullptr);

	m_efxTest->setMtxptr(mat->m_matrix.mtxView);
	m_efxTest->create(nullptr);
}

/*
 * --INFO--
 * Address:	8012C820
 * Size:	000028
 */
void Obj::doStartMovie() { m_efxTest->setGlobalAlpha(0); }

/*
 * --INFO--
 * Address:	8012C848
 * Size:	000004
 */
void Obj::doEndMovie() { }

/*
 * --INFO--
 * Address:	8012C84C
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
	newTexture0             = &j3dTexture0->_04[0];

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

/*
 * --INFO--
 * Address:	8012CAFC
 * Size:	00004C
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	m_efxTest->setGlobalAlpha(0);
	m_efxTest->startDemoDrawOff();
}

/*
 * --INFO--
 * Address:	8012CB48
 * Size:	00004C
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	m_efxTest->setGlobalAlpha(0xFF);
	m_efxTest->endDemoDrawOn();
}

} // namespace YellowChappy
} // namespace Game
