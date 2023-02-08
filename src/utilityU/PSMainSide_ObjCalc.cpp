#include "PSM/ObjCalc.h"
#include "Iterator.h"
#include "Game/Navi.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049E1C8
    lbl_8049E1C8:
        .asciz "PSMainSide_ObjCalc.cpp"
        .skip 1
    .global lbl_8049E1E0
    lbl_8049E1E0:
        .asciz "P2Assert"
        .skip 3
    .global lbl_8049E1EC
    lbl_8049E1EC:
        .4byte 0x82A082E8
        .4byte 0x82A682C8
        .4byte 0x82A28350
        .4byte 0x815B8358
        .asciz "1"
        .skip 2
    .global lbl_8049E200
    lbl_8049E200:
        .4byte 0x82A082E8
        .4byte 0x82A682C8
        .4byte 0x82A28350
        .4byte 0x815B8358
        .asciz "2"

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23PSM14ObjCalc_2PGame
    __vt__Q23PSM14ObjCalc_2PGame:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23PSM14ObjCalc_2PGameFv
        .4byte getPlayerNo__Q23PSM14ObjCalc_2PGameFPQ23PSM8Creature
        .4byte getPlayerNo__Q23PSM14ObjCalc_2PGameFR3Vec
        .4byte setMode__Q23PSM11ObjCalcBaseFQ33PSM11ObjCalcBase4Mode
        .4byte is1PGame__Q23PSM14ObjCalc_2PGameFv
    .global __vt__Q23PSM18ObjCalc_SingleGame
    __vt__Q23PSM18ObjCalc_SingleGame:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23PSM18ObjCalc_SingleGameFv
        .4byte getPlayerNo__Q23PSM18ObjCalc_SingleGameFPQ23PSM8Creature
        .4byte getPlayerNo__Q23PSM18ObjCalc_SingleGameFR3Vec
        .4byte setMode__Q23PSM11ObjCalcBaseFQ33PSM11ObjCalcBase4Mode
        .4byte is1PGame__Q23PSM11ObjCalcBaseFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520E28
    lbl_80520E28:
        .float 100000.0
    .global lbl_80520E2C
    lbl_80520E2C:
        .float 1000000.0
*/

namespace PSM {

/*
 * --INFO--
 * Address:	804728A4
 * Size:	000060
 */
void ObjCalc_SingleGame::newInstance_SingleGame() { new ObjCalc_SingleGame; }

/*
 * --INFO--
 * Address:	80472904
 * Size:	000008
 */
u8 ObjCalc_SingleGame::getPlayerNo(PSM::Creature*) { return mPlayerNum; }

/*
 * --INFO--
 * Address:	8047290C
 * Size:	000008
 */
u8 ObjCalc_SingleGame::getPlayerNo(Vec&) { return mPlayerNum; }

/*
 * --INFO--
 * Address:	80472914
 * Size:	00005C
 */
void ObjCalc_2PGame::newInstance_2PGame() { new ObjCalc_2PGame; }

/*
 * --INFO--
 * Address:	80472970
 * Size:	0003BC
 */
u8 ObjCalc_2PGame::getPlayerNo(Vec& pos)
{
	switch (mMode) {
	case OBJCALC_2:
		return 0;

	case OBJCALC_1:
		f32 dists[2] = { 100000.0f, 1000000.0f };
		Iterator<Game::Navi> it(Game::naviMgr);
		int i = 0;
		CI_LOOP(it)
		{
			Game::Navi* navi = *it;
			Vector3f pos     = navi->getPosition();
			f32 x, y, z;
			z = pos.z;
			y = pos.y;
			x = pos.x;
			P2ASSERTLINE(65, navi);
			P2ASSERTLINE(66, i < 2);

			// this makes the stack line up, but uhhhhh
			volatile Vector3f v1 = pos;
			volatile Vector3f v2 = pos;
			volatile Vector3f v3 = pos;
			volatile Vector3f v4 = pos;
			volatile Vector3f v5 = pos;
			volatile Vector3f v6 = pos;
			i++;

			Vector3f dist;
			dist.x   = pos.x - x;
			dist.y   = pos.y - y;
			dist.z   = pos.z - z;
			dists[i] = dist.sqrMagnitude();
		}
		return !(dists[0] < dists[1]);
	default:
		JUT_PANICLINE(77, "P2Assert");
		return 0;
	}
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stw      r31, 0x8c(r1)
	stw      r30, 0x88(r1)
	stw      r29, 0x84(r1)
	mr       r29, r4
	lwz      r0, 4(r3)
	cmpwi    r0, 1
	beq      lbl_804729A8
	bge      lbl_80472CF0
	cmpwi    r0, 0
	bge      lbl_804729B0
	b        lbl_80472CF0

lbl_804729A8:
	li       r3, 0
	b        lbl_80472D10

lbl_804729B0:
	li       r0, 0
	lwz      r6, lbl_80520E28@sda21(r2)
	lwz      r5, lbl_80520E2C@sda21(r2)
	lis      r4, "__vt__22Iterator<Q24Game4Navi>"@ha
	lwz      r3, naviMgr__4Game@sda21(r13)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
	cmplwi   r0, 0
	stw      r6, 8(r1)
	li       r30, 0
	stw      r5, 0xc(r1)
	stw      r4, 0x64(r1)
	stw      r0, 0x70(r1)
	stw      r0, 0x68(r1)
	stw      r3, 0x6c(r1)
	bne      lbl_80472A04
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x68(r1)
	b        lbl_80472A8C

lbl_80472A04:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x68(r1)
	b        lbl_80472A70

lbl_80472A1C:
	lwz      r3, 0x6c(r1)
	lwz      r4, 0x68(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x70(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80472A8C
	lwz      r3, 0x6c(r1)
	lwz      r4, 0x68(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x68(r1)

lbl_80472A70:
	lwz      r12, 0x64(r1)
	addi     r3, r1, 0x64
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80472A1C

lbl_80472A8C:
	addi     r31, r1, 8
	b        lbl_80472CB0

lbl_80472A94:
	lwz      r3, 0x6c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r1, 0x4c
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x4c(r1)
	addic.   r0, r1, 0x58
	lfs      f1, 0x50(r1)
	lfs      f0, 0x54(r1)
	stfs     f2, 0x58(r1)
	stfs     f1, 0x5c(r1)
	stfs     f0, 0x60(r1)
	bne      lbl_80472AFC
	lis      r3, lbl_8049E1C8@ha
	lis      r5, lbl_8049E1E0@ha
	addi     r3, r3, lbl_8049E1C8@l
	li       r4, 0x41
	addi     r5, r5, lbl_8049E1E0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80472AFC:
	cmpwi    r30, 2
	blt      lbl_80472B20
	lis      r3, lbl_8049E1C8@ha
	lis      r5, lbl_8049E1E0@ha
	addi     r3, r3, lbl_8049E1C8@l
	li       r4, 0x42
	addi     r5, r5, lbl_8049E1E0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80472B20:
	lfs      f0, 0x58(r1)
	addi     r30, r30, 1
	lfs      f1, 0x5c(r1)
	stfs     f0, 0x34(r1)
	lfs      f0, 0x60(r1)
	stfs     f1, 0x38(r1)
	lwz      r0, 0x34(r1)
	lwz      r3, 0x38(r1)
	stw      r0, 0x40(r1)
	lfs      f1, 0(r29)
	stfs     f0, 0x3c(r1)
	lfs      f0, 0x40(r1)
	lwz      r0, 0x3c(r1)
	fsubs    f3, f1, f0
	stw      r3, 0x44(r1)
	lfs      f2, 4(r29)
	lfs      f0, 0x44(r1)
	stw      r0, 0x48(r1)
	fsubs    f2, f2, f0
	lfs      f1, 8(r29)
	lfs      f0, 0x48(r1)
	stfs     f3, 0x28(r1)
	fsubs    f0, f1, f0
	lwz      r0, 0x70(r1)
	stfs     f2, 0x2c(r1)
	lwz      r4, 0x28(r1)
	cmplwi   r0, 0
	lwz      r3, 0x2c(r1)
	stfs     f0, 0x30(r1)
	stw      r4, 0x10(r1)
	lwz      r0, 0x30(r1)
	stw      r3, 0x14(r1)
	lfs      f1, 0x10(r1)
	lfs      f0, 0x14(r1)
	fmuls    f2, f1, f1
	stw      r0, 0x18(r1)
	fmuls    f1, f0, f0
	lfs      f0, 0x18(r1)
	stfs     f2, 0x10(r1)
	fmuls    f0, f0, f0
	stfs     f1, 0x14(r1)
	lwz      r0, 0x10(r1)
	lwz      r3, 0x14(r1)
	stw      r0, 0x1c(r1)
	stfs     f0, 0x18(r1)
	lfs      f1, 0x1c(r1)
	stw      r3, 0x20(r1)
	lwz      r0, 0x18(r1)
	lfs      f0, 0x20(r1)
	stw      r0, 0x24(r1)
	fadds    f0, f1, f0
	lfs      f1, 0x24(r1)
	fadds    f0, f1, f0
	stfs     f0, 0(r31)
	addi     r31, r31, 4
	bne      lbl_80472C20
	lwz      r3, 0x6c(r1)
	lwz      r4, 0x68(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x68(r1)
	b        lbl_80472CB0

lbl_80472C20:
	lwz      r3, 0x6c(r1)
	lwz      r4, 0x68(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x68(r1)
	b        lbl_80472C94

lbl_80472C40:
	lwz      r3, 0x6c(r1)
	lwz      r4, 0x68(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x70(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80472CB0
	lwz      r3, 0x6c(r1)
	lwz      r4, 0x68(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x68(r1)

lbl_80472C94:
	lwz      r12, 0x64(r1)
	addi     r3, r1, 0x64
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80472C40

lbl_80472CB0:
	lwz      r3, 0x6c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x68(r1)
	cmplw    r4, r3
	bne      lbl_80472A94
	lfs      f1, 8(r1)
	lfs      f0, 0xc(r1)
	fcmpo    cr0, f1, f0
	mfcr     r0
	srwi     r0, r0, 0x1f
	cntlzw   r0, r0
	srwi     r3, r0, 5
	b        lbl_80472D10

lbl_80472CF0:
	lis      r3, lbl_8049E1C8@ha
	lis      r5, lbl_8049E1E0@ha
	addi     r3, r3, lbl_8049E1C8@l
	li       r4, 0x4d
	addi     r5, r5, lbl_8049E1E0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r3, 0

lbl_80472D10:
	lwz      r0, 0x94(r1)
	lwz      r31, 0x8c(r1)
	lwz      r30, 0x88(r1)
	lwz      r29, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	80472D2C
 * Size:	0000C8
 */
u8 ObjCalc_2PGame::getPlayerNo(PSM::Creature* obj)
{
	P2ASSERTLINE(87, obj);
	switch (mMode) {
	case OBJCALC_2:
		return 0;
	case OBJCALC_1:
		return obj->mGameObj->getSound_AILOD()->mSndVpId;
	default:
		JUT_PANICLINE(125, "ありえないケース1");
		JUT_PANICLINE(128, "ありえないケース2");
		return 0;
	}
}

} // namespace PSM
