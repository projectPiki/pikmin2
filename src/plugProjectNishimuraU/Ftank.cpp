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
	Matrixf* mtx             = m_joint->getWorldMatrix();
	efx::TTankEffect* effect = m_tankEffect;
	effect->m_efxFireABC.setMtxptr(*(Mtx*)mtx);
	effect->m_efxFireIND.m_mtx    = mtx;
	effect->m_efxFireYodare.m_mtx = mtx;
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
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r31, 0x308(r3)
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x8c
	lwz      r12, 0x8c(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029ECB4
 * Size:	000064
 */
void Obj::effectDrawOn()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r31, 0x308(r3)
	lwz      r12, 4(r31)
	addi     r3, r31, 4
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x6c
	lwz      r12, 0x6c(r31)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x8c
	lwz      r12, 0x8c(r31)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029ED58
 * Size:	000064
 */
void Obj::effectDrawOff()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r31, 0x308(r3)
	lwz      r12, 4(r31)
	addi     r3, r31, 4
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x6c
	lwz      r12, 0x6c(r31)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x8c
	lwz      r12, 0x8c(r31)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029EDFC
 * Size:	000060
 */
void Obj::interactCreature(Game::Creature*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r6, __vt__Q24Game11Interaction@ha
	mr       r8, r4
	stw      r0, 0x24(r1)
	lis      r5, __vt__Q24Game12InteractFire@ha
	addi     r6, r6, __vt__Q24Game11Interaction@l
	addi     r4, r1, 8
	lwz      r7, 0xc0(r3)
	addi     r0, r5, __vt__Q24Game12InteractFire@l
	lfs      f0, 0x604(r7)
	stw      r6, 8(r1)
	stw      r3, 0xc(r1)
	mr       r3, r8
	stw      r0, 8(r1)
	stfs     f0, 0x10(r1)
	lwz      r12, 0(r8)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029EE5C
 * Size:	000010
 */
void Obj::stopEffectRadius(float)
{
	/*
	lwz      r3, 0x308(r3)
	stfs     f1, 0x48(r3)
	stfs     f1, 0x84(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029EE6C
 * Size:	000044
 */
void Obj::createChargeSE()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x583d
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029EEB0
 * Size:	000044
 */
void Obj::createDisChargeSE()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x503c
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Ftank
} // namespace Game
