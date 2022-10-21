#include "Game/Entities/Tyre.h"

namespace Game {
namespace Tyre {

/*
 * --INFO--
 * Address:	803ABE60
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	m_name = "タイヤマネージャ"; // tire manager
}

/*
 * --INFO--
 * Address:	803ABEB0
 * Size:	000048
 */
void Mgr::doAlloc(void) { init(new Parms); }

/*
 * --INFO--
 * Address:	803ABEF8
 * Size:	0000DC
 */
Parms::Parms(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q24Game14EnemyParmsBaseFv
	lis      r3, __vt__Q34Game4Tyre5Parms@ha
	lis      r5, 0x66703031@ha
	addi     r0, r3, __vt__Q34Game4Tyre5Parms@l
	lis      r4, lbl_804957E4@ha
	stw      r0, 0xd8(r31)
	addi     r0, r31, 0x82c
	lis      r3, lbl_804957F4@ha
	addi     r5, r5, 0x66703031@l
	stw      r0, 0x7f8(r31)
	addi     r6, r3, lbl_804957F4@l
	li       r3, 0
	addi     r0, r4, lbl_804957E4@l
	stw      r3, 0x7fc(r31)
	addi     r3, r31, 0x804
	addi     r4, r31, 0x7f8
	stw      r0, 0x800(r31)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lfs      f5, lbl_8051F598@sda21(r2)
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f4, lbl_8051F59C@sda21(r2)
	stw      r0, 0x804(r31)
	li       r5, 0
	lfs      f0, lbl_8051F5A0@sda21(r2)
	li       r4, 1
	stfs     f5, 0x81c(r31)
	li       r0, 0xa
	lfs      f3, lbl_8051F5A4@sda21(r2)
	mr       r3, r31
	stfs     f4, 0x824(r31)
	lfs      f2, lbl_8051F5A8@sda21(r2)
	stfs     f0, 0x828(r31)
	lfs      f1, lbl_8051F5AC@sda21(r2)
	stb      r5, 0x830(r31)
	lfs      f0, lbl_8051F5B0@sda21(r2)
	stb      r5, 0x831(r31)
	stb      r4, 0x832(r31)
	stb      r0, 0x833(r31)
	stfs     f4, 0x834(r31)
	stfs     f3, 0x838(r31)
	stfs     f2, 0x83c(r31)
	stfs     f1, 0x840(r31)
	stfs     f5, 0x844(r31)
	stfs     f0, 0x848(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803ABFD4
 * Size:	000020
 */
EnemyBase* Mgr::birth(Game::EnemyBirthArg& arg) { return birth(arg); }

/*
 * --INFO--
 * Address:	803ABFF4
 * Size:	000094
 */
J3DModelData* Mgr::loadModelData(void)
{
	return nullptr;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	bl       loadModelData__Q24Game12EnemyMgrBaseFv
	lis      r4, lbl_80495804@ha
	lis      r3, lbl_80495810@ha
	addi     r30, r4, lbl_80495804@l
	li       r28, 0
	addi     r31, r3, lbl_80495810@l
	b        lbl_803AC060

lbl_803AC024:
	lwz      r3, 0x80(r4)
	rlwinm   r0, r28, 2, 0xe, 0x1d
	lwzx     r29, r3, r0
	cmplwi   r29, 0
	bne      lbl_803AC04C
	mr       r3, r30
	mr       r5, r31
	li       r4, 0x38
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803AC04C:
	lwz      r0, 0xc(r29)
	addi     r28, r28, 1
	rlwinm   r0, r0, 0, 0x14, 0xf
	ori      r0, r0, 0x2000
	stw      r0, 0xc(r29)

lbl_803AC060:
	lwz      r4, 0x1c(r27)
	clrlwi   r0, r28, 0x10
	lhz      r3, 0x7c(r4)
	cmplw    r0, r3
	blt      lbl_803AC024
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AC088
 * Size:	00002C
 */
J3DModelData* Mgr::doLoadBmd(void* file)
{
	return J3DModelLoaderDataBase::load(file, 0x21240030); // flags should really be OR'd together
}

} // namespace Tyre
} // namespace Game
