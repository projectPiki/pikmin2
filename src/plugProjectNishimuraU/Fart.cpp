#include "Game/Entities/Fart.h"
#include "Game/Entities/PelletNumber.h"
#include "Game/Entities/ItemHoney.h"
#include "Game/gamePlayData.h"

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
	newTexture = &j3dTexture->_04->_00;

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
	/*
	stwu     r1, -0xd0(r1)
	mflr     r0
	stw      r0, 0xd4(r1)
	stfd     f31, 0xc0(r1)
	psq_st   f31, 200(r1), 0, qr0
	stfd     f30, 0xb0(r1)
	psq_st   f30, 184(r1), 0, qr0
	stfd     f29, 0xa0(r1)
	psq_st   f29, 168(r1), 0, qr0
	stw      r31, 0x9c(r1)
	stw      r30, 0x98(r1)
	mr       r30, r3
	lfs      f0, lbl_8051B710@sda21(r2)
	lfs      f1, 0x2dc(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_80285924
	lwz      r5, sys@sda21(r13)
	addi     r3, r1, 0x30
	addi     r4, r1, 0x20
	lfs      f0, 0x54(r5)
	fadds    f0, f1, f0
	stfs     f0, 0x2dc(r30)
	lwz      r5, 0xc0(r30)
	lfs      f2, 0x2e4(r30)
	lfs      f1, 0x5b4(r5)
	lfs      f0, 0x2e0(r30)
	fadds    f31, f2, f1
	stfs     f0, 0x20(r1)
	fsubs    f30, f2, f1
	fmuls    f29, f1, f1
	lfs      f0, 0x2e4(r30)
	stfs     f0, 0x24(r1)
	lfs      f0, 0x2e8(r30)
	stfs     f0, 0x28(r1)
	stfs     f1, 0x2c(r1)
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	li       r0, 1
	addi     r3, r1, 0x50
	stb      r0, 0x4c(r1)
	addi     r4, r1, 0x30
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0x50
	bl       first__Q24Game12CellIteratorFv
	b        lbl_80285908

lbl_80285810:
	addi     r3, r1, 0x50
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80285900
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8028586C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80285900

lbl_8028586C:
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0xc(r1)
	lfs      f2, 8(r1)
	fcmpo    cr0, f0, f31
	lfs      f3, 0x10(r1)
	bge      lbl_80285900
	fcmpo    cr0, f0, f30
	ble      lbl_80285900
	lfs      f0, 0x2e8(r30)
	lfs      f1, 0x2e0(r30)
	fsubs    f0, f0, f3
	fsubs    f1, f1, f2
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f29
	bge      lbl_80285900
	lwz      r6, 0xc0(r30)
	lis      r5, __vt__Q24Game11Interaction@ha
	lis      r4, __vt__Q24Game11InteractGas@ha
	mr       r3, r31
	lfs      f0, 0x604(r6)
	addi     r5, r5, __vt__Q24Game11Interaction@l
	addi     r0, r4, __vt__Q24Game11InteractGas@l
	addi     r4, r1, 0x14
	stw      r5, 0x14(r1)
	stw      r30, 0x18(r1)
	stw      r0, 0x14(r1)
	stfs     f0, 0x1c(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_80285900:
	addi     r3, r1, 0x50
	bl       next__Q24Game12CellIteratorFv

lbl_80285908:
	addi     r3, r1, 0x50
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80285810
	addi     r4, r30, 0x2e0
	li       r3, 0x5164
	bl       PSStartSoundVec__FUlP3Vec

lbl_80285924:
	psq_l    f31, 200(r1), 0, qr0
	lfd      f31, 0xc0(r1)
	psq_l    f30, 184(r1), 0, qr0
	lfd      f30, 0xb0(r1)
	psq_l    f29, 168(r1), 0, qr0
	lfd      f29, 0xa0(r1)
	lwz      r31, 0x9c(r1)
	lwz      r0, 0xd4(r1)
	lwz      r30, 0x98(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
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
	m_fartTimer = 2.5f;
	_2E0        = m_position;
}

/*
 * --INFO--
 * Address:	80285B50
 * Size:	0000A8
 */
void Obj::startBodyEffect() { m_bodyEffect->create(nullptr); }

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
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stfd     f30, 0x70(r1)
	psq_st   f30, 120(r1), 0, qr0
	stfd     f29, 0x60(r1)
	psq_st   f29, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	lis      r4, __vt__Q23efx5TBase@ha
	li       r5, 0
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx8TSimple2@ha
	stw      r0, 0x14(r1)
	addi     r0, r4, __vt__Q23efx8TSimple2@l
	lis      r4, __vt__Q23efx7TBabaHe@ha
	li       r6, 1
	stw      r0, 0x14(r1)
	addi     r0, r4, __vt__Q23efx7TBabaHe@l
	li       r4, 2
	mr       r31, r3
	sth      r6, 0x18(r1)
	sth      r4, 0x1a(r1)
	stw      r5, 0x1c(r1)
	stw      r5, 0x20(r1)
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lfs      f30, 0x18c(r3)
	lwz      r12, 0x64(r12)
	lfs      f31, 0x190(r3)
	lfs      f29, 0x194(r3)
	mtctr    r12
	bctrl
	lis      r4, __vt__Q23efx3Arg@ha
	lis      r3, __vt__Q23efx7ArgRotY@ha
	addi     r4, r4, __vt__Q23efx3Arg@l
	stfs     f30, 0x28(r1)
	addi     r0, r3, __vt__Q23efx7ArgRotY@l
	addi     r3, r1, 0x14
	stw      r4, 0x24(r1)
	addi     r4, r1, 0x24
	stfs     f31, 0x2c(r1)
	stfs     f29, 0x30(r1)
	stw      r0, 0x24(r1)
	stfs     f1, 0x34(r1)
	bl       create__Q23efx7TBabaHeFPQ23efx3Arg
	lfs      f2, lbl_8051B718@sda21(r2)
	stfs     f2, 0x2dc(r31)
	lwz      r3, 0xc0(r31)
	lfs      f4, 0x1fc(r31)
	lfs      f1, 0x934(r3)
	lfs      f0, 0x564(r3)
	fmr      f3, f4
	fcmpo    cr0, f4, f2
	fmuls    f29, f1, f0
	bge      lbl_80285D10
	fneg     f3, f4

lbl_80285D10:
	lfs      f2, lbl_8051B71C@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051B718@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f3, f2
	fcmpo    cr0, f4, f0
	fctiwz   f0, f1
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f31, f29, f0
	bge      lbl_80285D6C
	lfs      f0, lbl_8051B720@sda21(r2)
	fmuls    f0, f4, f0
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f30, f0
	b        lbl_80285D84

lbl_80285D6C:
	fmuls    f0, f4, f2
	fctiwz   f0, f0
	stfd     f0, 0x48(r1)
	lwz      r0, 0x4c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f30, r4, r0

lbl_80285D84:
	mr       r4, r31
	addi     r3, r1, 8
	bl       getBodyJointPos__Q34Game6Kogane3ObjFv
	lfs      f2, 8(r1)
	fmuls    f1, f29, f30
	lfs      f0, lbl_8051B718@sda21(r2)
	mr       r3, r31
	stfs     f2, 0x2e0(r31)
	lfs      f2, 0xc(r1)
	stfs     f2, 0x2e4(r31)
	lfs      f2, 0x10(r1)
	stfs     f2, 0x2e8(r31)
	lfs      f2, 0x2e0(r31)
	fsubs    f1, f2, f1
	stfs     f1, 0x2e0(r31)
	lfs      f1, 0x2e4(r31)
	fsubs    f0, f1, f0
	stfs     f0, 0x2e4(r31)
	lfs      f0, 0x2e8(r31)
	fsubs    f0, f0, f31
	stfs     f0, 0x2e8(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x5960
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	lwz      r0, 0x94(r1)
	lwz      r31, 0x5c(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
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
