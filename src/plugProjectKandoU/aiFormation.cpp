#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_aiFormation_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047F168
    lbl_8047F168:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x61637446
        .4byte 0x6F726D61
        .4byte 0x74696F6E
        .4byte 0x00000000
    .global lbl_8047F184
    lbl_8047F184:
        .4byte 0x466F726D
        .4byte 0x6174696F
        .4byte 0x6E000000
    .global lbl_8047F190
    lbl_8047F190:
        .4byte 0x6169466F
        .4byte 0x726D6174
        .4byte 0x696F6E2E
        .4byte 0x63707000
        .asciz "P2Assert"
        .skip 3
        .4byte 0x736C6F74
        .4byte 0x20696420
        .4byte 0x6973202D
        .4byte 0x31000000
        .4byte 0x7830325F
        .4byte 0x77617463
        .4byte 0x685F7265
        .4byte 0x645F7069
        .4byte 0x6B6D696E
        .4byte 0x00000000
        .4byte 0x67616D65
        .4byte 0x53746174
        .4byte 0x2E680000
    .global lbl_8047F1E0
    lbl_8047F1E0:
        .4byte 0x696E7661
        .4byte 0x6C696420
        .4byte 0x736C6F74
        .4byte 0x4964210A
        .4byte 0x00000000
        .4byte 0x43726561
        .4byte 0x74757265
        .4byte 0x41637469
        .4byte 0x6F6E4172
        .4byte 0x67000000
        .4byte 0x41637469
        .4byte 0x6F6E4172
        .4byte 0x67000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804B4CF0
    lbl_804B4CF0:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q26PikiAI12ActFormation
    __vt__Q26PikiAI12ActFormation:
        .4byte 0
        .4byte 0
        .4byte init__Q26PikiAI12ActFormationFPQ26PikiAI9ActionArg
        .4byte exec__Q26PikiAI12ActFormationFv
        .4byte cleanup__Q26PikiAI12ActFormationFv
        .4byte emotion_success__Q26PikiAI6ActionFv
        .4byte emotion_fail__Q26PikiAI6ActionFv
        .4byte applicable__Q26PikiAI6ActionFv
        .4byte getNextAIType__Q26PikiAI12ActFormationFv
        .4byte bounceCallback__Q26PikiAI6ActionFPQ24Game4PikiPQ23Sys8Triangle
        .4byte
   collisionCallback__Q26PikiAI12ActFormationFPQ24Game4PikiRQ24Game9CollEvent
        .4byte
   platCallback__Q26PikiAI12ActFormationFPQ24Game4PikiRQ24Game9PlatEvent .4byte
   doDirectDraw__Q26PikiAI6ActionFR8Graphics .4byte
   "wallCallback__Q26PikiAI12ActFormationFR10Vector3<f>" .4byte
   getInfo__Q26PikiAI6ActionFPc .4byte resumable__Q26PikiAI12ActFormationFv
        .4byte inform__Q26PikiAI12ActFormationFi
        .4byte onKeyEvent__Q26PikiAI12ActFormationFRCQ28SysShape8KeyEvent
        .4byte 0
        .4byte 0
        .4byte "@100@4@inform__Q26PikiAI12ActFormationFi"
        .4byte 0
        .4byte 0
        .4byte
   "@108@4@onKeyEvent__Q26PikiAI12ActFormationFRCQ28SysShape8KeyEvent" .global
   __vt__Q24Game18SlotChangeListener
    __vt__Q24Game18SlotChangeListener:
        .4byte 0
        .4byte 0
        .4byte 0

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global newVer
    newVer:
        .4byte 0x01000000

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_805159E8
    lbl_805159E8:
        .skip 0x4
    .global lbl_805159EC
    lbl_805159EC:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80518FE8
    lbl_80518FE8:
        .4byte 0x00000000
    .global lbl_80518FEC
    lbl_80518FEC:
        .4byte 0x41200000
    .global lbl_80518FF0
    lbl_80518FF0:
        .4byte 0x3F747AE1
    .global lbl_80518FF4
    lbl_80518FF4:
        .4byte 0x42700000
    .global lbl_80518FF8
    lbl_80518FF8:
        .float 1.0
    .global lbl_80518FFC
    lbl_80518FFC:
        .4byte 0x41A00000
    .global lbl_80519000
    lbl_80519000:
        .4byte 0x42C80000
    .global lbl_80519004
    lbl_80519004:
        .4byte 0x42DC0000
    .global lbl_80519008
    lbl_80519008:
        .4byte 0x47000000
    .global lbl_8051900C
    lbl_8051900C:
        .4byte 0x3F7D70A4
    .global lbl_80519010
    lbl_80519010:
        .float 0.7
    .global lbl_80519014
    lbl_80519014:
        .4byte 0x40000000
    .global lbl_80519018
    lbl_80519018:
        .4byte 0x42200000
    .global lbl_8051901C
    lbl_8051901C:
        .float 0.3
    .global lbl_80519020
    lbl_80519020:
        .4byte 0x40E00000
    .global lbl_80519024
    lbl_80519024:
        .4byte 0x41700000
    .global lbl_80519028
    lbl_80519028:
        .float 0.1
    .global lbl_8051902C
    lbl_8051902C:
        .float 0.5
    .global lbl_80519030
    lbl_80519030:
        .4byte 0x41000000
        .4byte 0x00000000
    .global lbl_80519038
    lbl_80519038:
        .4byte 0x43300000
        .4byte 0x80000000
*/

/*
 * --INFO--
 * Address:	8019CD70
 * Size:	0000F8
 */
PikiAI::ActFormation::ActFormation(Game::Piki*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	beq      lbl_8019CDB4
	addi     r0, r31, 0x64
	lis      r4, __vt__Q24Game18SlotChangeListener@ha
	stw      r0, 0xc(r31)
	addi     r0, r31, 0x6c
	lis      r3, __vt__Q28SysShape14MotionListener@ha
	addi     r4, r4, __vt__Q24Game18SlotChangeListener@l
	stw      r0, 0x10(r31)
	addi     r0, r3, __vt__Q28SysShape14MotionListener@l
	stw      r4, 0x64(r31)
	stw      r0, 0x6c(r31)

lbl_8019CDB4:
	mr       r3, r31
	mr       r4, r5
	bl       __ct__Q26PikiAI6ActionFPQ24Game4Piki
	lis      r3, __vt__Q26PikiAI12ActFormation@ha
	lis      r6, __vt__Q26PikiAI9ActionArg@ha
	addi     r8, r3, __vt__Q26PikiAI12ActFormation@l
	lis      r5, __vt__Q26PikiAI17CreatureActionArg@ha
	stw      r8, 0(r31)
	lis      r4, __vt__Q26PikiAI19ActFormationInitArg@ha
	lis      r3, lbl_8047F184@ha
	addi     r0, r8, 0x48
	lwz      r7, 0xc(r31)
	addi     r12, r8, 0x54
	addi     r10, r31, 0x64
	addi     r9, r31, 0x6c
	stw      r0, 0(r7)
	addi     r8, r6, __vt__Q26PikiAI9ActionArg@l
	addi     r7, r5, __vt__Q26PikiAI17CreatureActionArg@l
	li       r6, 0
	lwz      r11, 0x10(r31)
	addi     r5, r4, __vt__Q26PikiAI19ActFormationInitArg@l
	addi     r4, r3, lbl_8047F184@l
	li       r0, -1
	stw      r12, 0(r11)
	mr       r3, r31
	lwz      r11, 0xc(r31)
	subf     r10, r11, r10
	stw      r10, 4(r11)
	lwz      r10, 0x10(r31)
	subf     r9, r10, r9
	stw      r9, 4(r10)
	stw      r8, 0x18(r31)
	stw      r7, 0x18(r31)
	stw      r6, 0x1c(r31)
	stw      r5, 0x18(r31)
	stb      r6, 0x20(r31)
	stw      r4, 8(r31)
	stw      r6, 0x5c(r31)
	stw      r0, 0x34(r31)
	stw      r6, 0x14(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019CE68
 * Size:	000008
 */
void PikiAI::ActFormation::inform(int a1)
{
	// Generated from stw r4, 0x34(r3)
	_34 = a1;
}

/*
 * --INFO--
 * Address:	8019CE70
 * Size:	00000C
 */
void PikiAI::ActFormation::startSort(void)
{
	// Generated from sth r0, 0x28(r3)
	_28 = 2;
}

/*
 * --INFO--
 * Address:	8019CE7C
 * Size:	0001B4
 */
void PikiAI::ActFormation::init(PikiAI::ActionArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	or.      r29, r4, r4
	lis      r4, lbl_8047F168@ha
	addi     r30, r4, lbl_8047F168@l
	bne      lbl_8019CEBC
	addi     r3, r30, 0x28
	addi     r5, r30, 0x38
	li       r4, 0x10b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8019CEBC:
	li       r0, 1
	lis      r3, formationPikis__Q24Game8GameStat@ha
	stw      r0, 0x24(r31)
	addi     r3, r3, formationPikis__Q24Game8GameStat@l
	lwz      r4, 4(r31)
	lwz      r0, 0x2c4(r4)
	stw      r0, 0x14(r31)
	lwz      r4, 4(r31)
	bl       inc__Q34Game8GameStat15PikiNaviCounterFPQ24Game4Piki
	lwz      r0, 4(r29)
	stw      r0, 0x1c(r31)
	lbz      r0, 8(r29)
	stb      r0, 0x20(r31)
	lbz      r0, 9(r29)
	stb      r0, 0x21(r31)
	lbz      r0, 0x21(r31)
	cmplwi   r0, 0
	beq      lbl_8019CF10
	li       r0, 0x2d
	stb      r0, 0x38(r31)
	b        lbl_8019CF18

lbl_8019CF10:
	li       r0, 0
	stb      r0, 0x38(r31)

lbl_8019CF18:
	lwz      r4, 4(r29)
	lbz      r29, 8(r29)
	cmplwi   r4, 0
	bne      lbl_8019CF34
	li       r0, -1
	stw      r0, 0x34(r31)
	b        lbl_8019D014

lbl_8019CF34:
	li       r3, 5
	li       r0, 0
	sth      r3, 0x2a(r31)
	cmplwi   r31, 0
	mr       r5, r31
	sth      r3, 0x2c(r31)
	sth      r0, 0x2e(r31)
	stb      r0, 0x60(r31)
	stb      r0, 0x61(r31)
	lwz      r0, 0x254(r4)
	stw      r0, 0x5c(r31)
	beq      lbl_8019CF68
	lwz      r5, 0xc(r31)

lbl_8019CF68:
	lwz      r3, 0x5c(r31)
	mr       r6, r29
	lwz      r4, 4(r31)
	bl getSlot__Q24Game6CPlateFPQ24Game8CreaturePQ24Game18SlotChangeListenerb
	stw      r3, 0x34(r31)
	lwz      r0, 0x34(r31)
	cmpwi    r0, -1
	bne      lbl_8019CFA4
	cmplwi   r29, 0
	beq      lbl_8019CFA4
	addi     r3, r30, 0x28
	addi     r5, r30, 0x44
	li       r4, 0x14a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8019CFA4:
	lwz      r3, 4(r31)
	li       r4, 0x1d
	li       r5, 0x1d
	li       r6, 0
	lwz      r12, 0(r3)
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	lfs      f0, lbl_80518FE8@sda21(r2)
	stb      r0, 0x30(r31)
	li       r4, 0
	stb      r0, 0x31(r31)
	sth      r0, 0x28(r31)
	stw      r0, 0x4c(r31)
	stfs     f0, 0x50(r31)
	stb      r0, 0x54(r31)
	stw      r0, 0x3c(r31)
	lwz      r3, 4(r31)
	bl       setPastel__Q24Game4PikiFb
	li       r3, 0
	li       r0, -1
	stb      r3, 0x40(r31)
	li       r4, 0
	stw      r0, 0x48(r31)
	lwz      r3, 4(r31)
	bl       setFreeLightEffect__Q24Game4PikiFb

lbl_8019D014:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019D030
 * Size:	000058
 */
void wallCallback__Q26PikiAI12ActFormationFR10Vector3f(void)
{
	/*
	lwz      r4, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x50(r4)
	stw      r0, 0x44(r3)
	lbz      r4, 0x40(r3)
	cmplwi   r4, 0x1e
	bge      lbl_8019D050
	addi     r0, r4, 1
	stb      r0, 0x40(r3)

lbl_8019D050:
	lbz      r0, 0x40(r3)
	cmplwi   r0, 8
	ble      lbl_8019D070
	lhz      r0, 0x28(r3)
	cmplwi   r0, 1
	beq      lbl_8019D070
	li       r0, 0
	stb      r0, 0x40(r3)

lbl_8019D070:
	lbz      r0, 0x40(r3)
	cmplwi   r0, 0x14
	blelr
	li       r0, 0
	stb      r0, 0x40(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019D088
 * Size:	00045C
 */
void PikiAI::ActFormation::setFormed(void)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	li       r4, 0x23
	stw      r0, 0x74(r1)
	li       r0, 1
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	mr       r30, r3
	stw      r29, 0x64(r1)
	sth      r0, 0x28(r3)
	lis      r3, lbl_8047F168@ha
	addi     r31, r3, lbl_8047F168@l
	lwz      r3, playData__4Game@sda21(r13)
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019D374
	li       r0, 0
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x20(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r0, 0
	stw      r4, 0x14(r1)
	stw      r0, 0x18(r1)
	stw      r3, 0x1c(r1)
	bne      lbl_8019D108
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_8019D26C

lbl_8019D108:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_8019D174

lbl_8019D120:
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019D26C
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)

lbl_8019D174:
	lwz      r12, 0x14(r1)
	addi     r3, r1, 0x14
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019D120
	b        lbl_8019D26C

lbl_8019D194:
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb
	lwz      r0, 0x20(r1)
	cmplwi   r0, 0
	bne      lbl_8019D1DC
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_8019D26C

lbl_8019D1DC:
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_8019D250

lbl_8019D1FC:
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019D26C
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)

lbl_8019D250:
	lwz      r12, 0x14(r1)
	addi     r3, r1, 0x14
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019D1FC

lbl_8019D26C:
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x18(r1)
	cmplw    r4, r3
	bne      lbl_8019D194
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       getActiveNavi__Q24Game7NaviMgrFv
	or.      r29, r3, r3
	bne      lbl_8019D2B0
	addi     r3, r31, 0x28
	addi     r5, r31, 0x38
	li       r4, 0x1b6
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8019D2B0:
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x23
	bl       setDemoFlag__Q24Game8PlayDataFi
	lfs      f0, lbl_80518FE8@sda21(r2)
	li       r0, 0
	addi     r5, r31, 0x54
	stw      r0, 0x28(r1)
	mr       r4, r29
	addi     r3, r1, 8
	stw      r5, 0x24(r1)
	stw      r0, 0x30(r1)
	stfs     f0, 0x3c(r1)
	stfs     f0, 0x40(r1)
	stfs     f0, 0x44(r1)
	stfs     f0, 0x48(r1)
	stw      r0, 0x4c(r1)
	stw      r0, 0x34(r1)
	stw      r0, 0x2c(r1)
	stw      r0, 0x50(r1)
	stw      r0, 0x38(r1)
	stw      r0, 0x54(r1)
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	mr       r3, r29
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x3c(r1)
	stfs     f1, 0x40(r1)
	stfs     f0, 0x44(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x48(r1)
	addi     r4, r1, 0x24
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r29, 0x194(r3)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 4
	lwz      r3, 0x58(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl

lbl_8019D374:
	lwz      r3, 4(r30)
	li       r29, 0
	lwz      r3, 0x2c4(r3)
	cmplwi   r3, 0
	beq      lbl_8019D38C
	lhz      r29, 0x2dc(r3)

lbl_8019D38C:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x48(r3)
	cmplwi   r0, 0
	bne      lbl_8019D4C8
	lbz      r0, 0x3c(r3)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	beq      lbl_8019D4C8
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x2e
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019D4C8
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0xd
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019D4C8
	cmpwi    r29, 0
	li       r0, 0
	blt      lbl_8019D3E8
	cmpwi    r29, 7
	bge      lbl_8019D3E8
	li       r0, 1

lbl_8019D3E8:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8019D404
	addi     r3, r31, 0x6c
	addi     r5, r31, 0x38
	li       r4, 0x77
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8019D404:
	lis      r3, formationPikis__Q24Game8GameStat@ha
	slwi     r5, r29, 5
	addi     r0, r3, formationPikis__Q24Game8GameStat@l
	li       r4, 1
	add      r30, r0, r5
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	ble      lbl_8019D4C8
	cmpwi    r29, 0
	li       r0, 0
	blt      lbl_8019D44C
	cmpwi    r29, 7
	bge      lbl_8019D44C
	li       r0, 1

lbl_8019D44C:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8019D468
	addi     r3, r31, 0x6c
	addi     r5, r31, 0x38
	li       r4, 0x77
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8019D468:
	mr       r3, r30
	li       r4, 3
	lwz      r12, 0(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	ble      lbl_8019D4C8
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x58(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 5
	beq      lbl_8019D4C8
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 5
	lfs      f1, lbl_80518FEC@sda21(r2)
	lwz      r3, 0x58(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl

lbl_8019D4C8:
	lwz      r0, 0x74(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	lwz      r29, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019D4E4
 * Size:	0000F8
 */
void PikiAI::ActFormation::onKeyEvent(SysShape::KeyEvent const&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x1c(r4)
	cmpwi    r0, 2
	beq      lbl_8019D518
	bge      lbl_8019D50C
	cmpwi    r0, 1
	bge      lbl_8019D54C
	b        lbl_8019D5CC

lbl_8019D50C:
	cmpwi    r0, 0x3e8
	beq      lbl_8019D594
	b        lbl_8019D5CC

lbl_8019D518:
	lbz      r0, 0x54(r3)
	cmplwi   r0, 0
	beq      lbl_8019D5CC
	lwz      r4, 4(r3)
	lfs      f0, lbl_80518FE8@sda21(r2)
	stfs     f0, 0x200(r4)
	stfs     f0, 0x204(r4)
	stfs     f0, 0x208(r4)
	lwz      r3, 4(r3)
	stfs     f0, 0x1e4(r3)
	stfs     f0, 0x1e8(r3)
	stfs     f0, 0x1ec(r3)
	b        lbl_8019D5CC

lbl_8019D54C:
	lbz      r0, 0x54(r3)
	cmplwi   r0, 0
	beq      lbl_8019D5CC
	lwz      r4, 0x4c(r3)
	addi     r0, r4, -1
	stw      r0, 0x4c(r3)
	lwz      r0, 0x4c(r3)
	cmpwi    r0, 0
	bgt      lbl_8019D5CC
	lwz      r4, 4(r3)
	lbz      r0, 0x1c4(r4)
	ori      r0, r0, 2
	stb      r0, 0x1c4(r4)
	lwz      r3, 4(r3)
	lbz      r0, 0x1e0(r3)
	ori      r0, r0, 2
	stb      r0, 0x1e0(r3)
	b        lbl_8019D5CC

lbl_8019D594:
	lbz      r0, 0x54(r3)
	cmplwi   r0, 0
	beq      lbl_8019D5CC
	li       r0, 0
	li       r4, 0x1e
	stb      r0, 0x54(r3)
	li       r5, 0x1e
	li       r6, 0
	li       r7, 0
	lwz      r3, 4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl

lbl_8019D5CC:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019D5DC
 * Size:	0000A4
 */
void PikiAI::ActFormation::cleanup(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 4(r3)
	bl       setGasInvincible__Q24Game4PikiFUc
	lwz      r3, 4(r30)
	li       r4, 1
	lwz      r12, 0(r3)
	lwz      r12, 0x1d8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r30)
	lis      r3, formationPikis__Q24Game8GameStat@ha
	lwz      r0, 0x14(r30)
	addi     r3, r3, formationPikis__Q24Game8GameStat@l
	lwz      r31, 0x2c4(r4)
	stw      r0, 0x2c4(r4)
	lwz      r4, 4(r30)
	bl       dec__Q34Game8GameStat15PikiNaviCounterFPQ24Game4Piki
	lwz      r3, 4(r30)
	stw      r31, 0x2c4(r3)
	lwz      r5, 0x34(r30)
	cmpwi    r5, -1
	beq      lbl_8019D658
	lwz      r3, 0x5c(r30)
	lwz      r4, 4(r30)
	bl       releaseSlot__Q24Game6CPlateFPQ24Game8Creaturei

lbl_8019D658:
	li       r3, 0
	li       r0, -1
	stw      r3, 0x5c(r30)
	stw      r0, 0x34(r30)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019D680
 * Size:	0016E8
 */
void PikiAI::ActFormation::exec(void)
{
	/*
	stwu     r1, -0x1c0(r1)
	mflr     r0
	stw      r0, 0x1c4(r1)
	stfd     f31, 0x1b0(r1)
	psq_st   f31, 440(r1), 0, qr0
	stfd     f30, 0x1a0(r1)
	psq_st   f30, 424(r1), 0, qr0
	stfd     f29, 0x190(r1)
	psq_st   f29, 408(r1), 0, qr0
	stfd     f28, 0x180(r1)
	psq_st   f28, 392(r1), 0, qr0
	stfd     f27, 0x170(r1)
	psq_st   f27, 376(r1), 0, qr0
	stfd     f26, 0x160(r1)
	psq_st   f26, 360(r1), 0, qr0
	stw      r31, 0x15c(r1)
	stw      r30, 0x158(r1)
	stw      r29, 0x154(r1)
	mr       r31, r3
	lbz      r3, 0x38(r3)
	cmplwi   r3, 0
	beq      lbl_8019D6E0
	addi     r0, r3, -1
	stb      r0, 0x38(r31)

lbl_8019D6E0:
	lwz      r0, 0x34(r31)
	cmpwi    r0, -1
	bne      lbl_8019D6F4
	li       r3, 2
	b        lbl_8019ED1C

lbl_8019D6F4:
	lbz      r0, 0x20(r31)
	cmplwi   r0, 0
	bne      lbl_8019D724
	lwz      r3, 0x14(r31)
	cmplwi   r3, 0
	beq      lbl_8019D724
	lwz      r3, 0x250(r3)
	lwz      r0, 4(r3)
	cmplwi   r0, 0
	beq      lbl_8019D724
	li       r3, 2
	b        lbl_8019ED1C

lbl_8019D724:
	lwz      r3, 0x14(r31)
	cmplwi   r3, 0
	beq      lbl_8019D750
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019D750
	li       r3, 2
	b        lbl_8019ED1C

lbl_8019D750:
	lbz      r0, 0x20(r31)
	cmplwi   r0, 0
	bne      lbl_8019D7CC
	lwz      r4, gameSystem__4Game@sda21(r13)
	li       r3, 0
	lwz      r0, 0x44(r4)
	cmpwi    r0, 1
	beq      lbl_8019D778
	cmpwi    r0, 3
	bne      lbl_8019D77C

lbl_8019D778:
	li       r3, 1

lbl_8019D77C:
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019D7CC
	lwz      r3, 0x14(r31)
	cmplwi   r3, 0
	beq      lbl_8019D7CC
	lwz      r0, 0x278(r3)
	cmplwi   r0, 0
	bne      lbl_8019D7CC
	bl       getStateID__Q24Game4NaviFv
	cmpwi    r3, 1
	bne      lbl_8019D7CC
	li       r0, 0
	stw      r0, 0x24(r31)
	lwz      r3, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1ac(r12)
	mtctr    r12
	bctrl
	li       r3, 2
	b        lbl_8019ED1C

lbl_8019D7CC:
	lwz      r3, 4(r31)
	li       r4, 1
	lwz      r12, 0(r3)
	lwz      r12, 0x1d8(r12)
	mtctr    r12
	bctrl
	lhz      r3, 0x2a(r31)
	li       r0, 5
	sth      r3, 0x2c(r31)
	sth      r0, 0x2a(r31)
	lbz      r0, 0x54(r31)
	cmplwi   r0, 0
	beq      lbl_8019D884
	lwz      r3, 4(r31)
	lwz      r3, 0x1b8(r3)
	cmplwi   r3, 0
	beq      lbl_8019D818
	lha      r0, 0x20(r3)
	b        lbl_8019D81C

lbl_8019D818:
	li       r0, -1

lbl_8019D81C:
	cmpwi    r0, 0x1a
	beq      lbl_8019D850
	li       r0, 0
	li       r4, 0x1e
	stb      r0, 0x54(r31)
	li       r5, 0x1e
	li       r6, 0
	li       r7, 0
	lwz      r3, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl

lbl_8019D850:
	lwz      r4, 4(r31)
	li       r3, 1
	lfs      f2, lbl_80518FF0@sda21(r2)
	lfs      f0, 0x1e4(r4)
	lfs      f1, 0x1e8(r4)
	fmuls    f0, f0, f2
	lfs      f3, 0x1ec(r4)
	fmuls    f1, f1, f2
	fmuls    f2, f3, f2
	stfs     f0, 0x1e4(r4)
	stfs     f1, 0x1e8(r4)
	stfs     f2, 0x1ec(r4)
	b        lbl_8019ED1C

lbl_8019D884:
	lbz      r0, 0x60(r31)
	stb      r0, 0x61(r31)
	lwz      r3, 4(r31)
	lwz      r3, 0x2c4(r3)
	cmplwi   r3, 0
	bne      lbl_8019D8A4
	li       r3, 2
	b        lbl_8019ED1C

lbl_8019D8A4:
	bl       isCStickNetural__Q24Game4NaviFv
	mr       r30, r3
	lwz      r3, 0x5c(r31)
	lwz      r4, 0x34(r31)
	bl       validSlot__Q24Game6CPlateFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019D8DC
	lis      r3, lbl_8047F190@ha
	lis      r5, lbl_8047F1E0@ha
	addi     r3, r3, lbl_8047F190@l
	li       r4, 0x295
	addi     r5, r5, lbl_8047F1E0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8019D8DC:
	lwz      r3, 0x5c(r31)
	addi     r5, r1, 0x138
	lwz      r4, 0x34(r31)
	bl       "getSlotPosition__Q24Game6CPlateFiR10Vector3<f>"
	lwz      r3, 4(r31)
	lwz      r3, 0x2c4(r3)
	bl       commandOn__Q24Game4NaviFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019DB10
	lwz      r4, 4(r31)
	addi     r3, r1, 0xec
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x138(r1)
	lfs      f0, 0xec(r1)
	lfs      f1, 0x13c(r1)
	fsubs    f3, f2, f0
	lfs      f0, 0xf0(r1)
	lfs      f4, 0x140(r1)
	fsubs    f2, f1, f0
	lfs      f1, 0xf4(r1)
	fmuls    f0, f3, f3
	fsubs    f4, f4, f1
	lfs      f1, lbl_80518FE8@sda21(r2)
	fmuls    f5, f2, f2
	stfs     f3, 0x12c(r1)
	fmuls    f6, f4, f4
	fadds    f0, f0, f5
	stfs     f2, 0x130(r1)
	stfs     f4, 0x134(r1)
	fadds    f0, f6, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8019D984
	fmadds   f0, f3, f3, f5
	fadds    f26, f6, f0
	fcmpo    cr0, f26, f1
	ble      lbl_8019D988
	frsqrte  f0, f26
	fmuls    f26, f0, f26
	b        lbl_8019D988

lbl_8019D984:
	fmr      f26, f1

lbl_8019D988:
	lwz      r4, 4(r31)
	addi     r3, r1, 0xe0
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0xe0(r1)
	lfs      f1, 0xe4(r1)
	lfs      f0, 0xe8(r1)
	stfs     f2, 0x120(r1)
	lwz      r3, gameSystem__4Game@sda21(r13)
	stfs     f1, 0x124(r1)
	stfs     f0, 0x128(r1)
	lwz      r4, 0x44(r31)
	lwz      r0, 0x50(r3)
	subf     r0, r4, r0
	srawi    r3, r0, 0x1f
	xor      r0, r3, r0
	subf     r0, r3, r0
	cmpwi    r0, 0x32
	bge      lbl_8019DAFC
	lfs      f0, lbl_80518FF4@sda21(r2)
	fcmpo    cr0, f26, f0
	ble      lbl_8019DAFC
	lbz      r0, 0x40(r31)
	cmplwi   r0, 3
	ble      lbl_8019DB20
	lwz      r3, 4(r31)
	addi     r4, r1, 0x120
	lwz      r5, 0x48(r31)
	lwz      r3, 0x2c4(r3)
	lwz      r3, 0x2d8(r3)
	bl       "findNearest2__Q24Game9FootmarksFR10Vector3<f>i"
	stw      r3, 0x3c(r31)
	lwz      r3, 0x3c(r31)
	cmplwi   r3, 0
	beq      lbl_8019DB20
	lfs      f3, 4(r3)
	lfs      f2, 0x124(r1)
	lfs      f1, 0(r3)
	lfs      f0, 0x120(r1)
	fsubs    f4, f3, f2
	lfs      f3, 8(r3)
	fsubs    f2, f1, f0
	lfs      f0, 0x128(r1)
	fmuls    f5, f4, f4
	lfs      f1, lbl_80518FE8@sda21(r2)
	fsubs    f3, f3, f0
	stfs     f4, 0x130(r1)
	fmuls    f0, f2, f2
	stfs     f2, 0x12c(r1)
	fmuls    f4, f3, f3
	stfs     f3, 0x134(r1)
	fadds    f0, f0, f5
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8019DA88
	fmadds   f0, f2, f2, f5
	fadds    f4, f4, f0
	fcmpo    cr0, f4, f1
	ble      lbl_8019DA8C
	frsqrte  f0, f4
	fmuls    f4, f0, f4
	b        lbl_8019DA8C

lbl_8019DA88:
	fmr      f4, f1

lbl_8019DA8C:
	lfs      f0, lbl_80518FE8@sda21(r2)
	fcmpo    cr0, f4, f0
	ble      lbl_8019DAC8
	lfs      f0, lbl_80518FF8@sda21(r2)
	lfs      f2, 0x12c(r1)
	fdivs    f3, f0, f4
	lfs      f1, 0x130(r1)
	lfs      f0, 0x134(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x12c(r1)
	stfs     f1, 0x130(r1)
	stfs     f0, 0x134(r1)
	b        lbl_8019DACC

lbl_8019DAC8:
	fmr      f4, f0

lbl_8019DACC:
	lfs      f0, lbl_80518FFC@sda21(r2)
	fcmpo    cr0, f4, f0
	bge      lbl_8019DAE4
	lwz      r3, 0x3c(r31)
	lwz      r0, 0xc(r3)
	stw      r0, 0x48(r31)

lbl_8019DAE4:
	lwz      r3, 4(r31)
	addi     r4, r1, 0x12c
	lfs      f1, lbl_80518FF8@sda21(r2)
	bl       "setSpeed__Q24Game4PikiFfR10Vector3<f>"
	li       r3, 1
	b        lbl_8019ED1C

lbl_8019DAFC:
	li       r3, 0
	li       r0, -1
	stb      r3, 0x40(r31)
	stw      r0, 0x48(r31)
	b        lbl_8019DB20

lbl_8019DB10:
	li       r3, 0
	li       r0, -1
	stb      r3, 0x40(r31)
	stw      r0, 0x48(r31)

lbl_8019DB20:
	lwz      r4, 4(r31)
	addi     r3, r1, 0xd4
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 4(r31)
	lfs      f0, 0xd8(r1)
	lfs      f1, 0x23c(r3)
	lfs      f3, 0x240(r3)
	fsubs    f4, f1, f0
	lfs      f2, 0xdc(r1)
	lfs      f1, 0x238(r3)
	lfs      f0, 0xd4(r1)
	fsubs    f2, f3, f2
	fmuls    f3, f4, f4
	fsubs    f1, f1, f0
	lfs      f0, lbl_80518FE8@sda21(r2)
	fmuls    f2, f2, f2
	fmadds   f1, f1, f1, f3
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8019DB8C
	ble      lbl_8019DB90
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8019DB90

lbl_8019DB8C:
	fmr      f1, f0

lbl_8019DB90:
	lfs      f0, 0x50(r31)
	fadds    f0, f0, f1
	stfs     f0, 0x50(r31)
	lwz      r3, 4(r31)
	lbz      r0, 0x2b8(r3)
	cmpwi    r0, 5
	beq      lbl_8019DCCC
	lfs      f1, 0x50(r31)
	lfs      f0, lbl_80519000@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8019DCCC
	lfs      f2, 0x200(r3)
	lfs      f1, 0x204(r3)
	fmuls    f0, f2, f2
	lfs      f3, 0x208(r3)
	fmuls    f4, f1, f1
	lfs      f1, lbl_80518FE8@sda21(r2)
	fmuls    f3, f3, f3
	fadds    f0, f0, f4
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8019DC08
	fmadds   f0, f2, f2, f4
	fadds    f2, f3, f0
	fcmpo    cr0, f2, f1
	ble      lbl_8019DC0C
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8019DC0C

lbl_8019DC08:
	fmr      f2, f1

lbl_8019DC0C:
	lfs      f0, lbl_80519004@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_8019DCCC
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14c(r1)
	lfd      f3, lbl_80519038@sda21(r2)
	stw      r0, 0x148(r1)
	lfs      f1, lbl_80519008@sda21(r2)
	lfd      f2, 0x148(r1)
	lfs      f0, lbl_8051900C@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8019DCC4
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14c(r1)
	lfd      f3, lbl_80519038@sda21(r2)
	stw      r0, 0x148(r1)
	lfs      f1, lbl_80519008@sda21(r2)
	lfd      f2, 0x148(r1)
	lfs      f0, lbl_80519010@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8019DCC4
	lwz      r3, 4(r31)
	bl       getStateID__Q24Game4PikiFv
	cmpwi    r3, 0
	bne      lbl_8019DCB4
	lwz      r4, 4(r31)
	li       r5, 0x1e
	li       r6, 0
	lwz      r3, 0x28c(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8019DCB4:
	lfs      f0, lbl_80518FE8@sda21(r2)
	li       r3, 1
	stfs     f0, 0x50(r31)
	b        lbl_8019ED1C

lbl_8019DCC4:
	lfs      f0, lbl_80518FE8@sda21(r2)
	stfs     f0, 0x50(r31)

lbl_8019DCCC:
	lwz      r4, 4(r31)
	addi     r3, r1, 0xc8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x140(r1)
	lfs      f0, 0xd0(r1)
	lfs      f1, 0x138(r1)
	fsubs    f4, f2, f0
	lfs      f0, 0xc8(r1)
	lfs      f3, 0x13c(r1)
	fsubs    f2, f1, f0
	lfs      f0, 0xcc(r1)
	fmuls    f5, f4, f4
	fsubs    f3, f3, f0
	lfs      f0, lbl_80518FE8@sda21(r2)
	fmuls    f6, f2, f2
	stfs     f2, 0x114(r1)
	fadds    f1, f6, f5
	stfs     f3, 0x118(r1)
	stfs     f4, 0x11c(r1)
	fcmpo    cr0, f1, f0
	ble      lbl_8019DD44
	fmadds   f31, f2, f2, f5
	fcmpo    cr0, f31, f0
	ble      lbl_8019DD48
	frsqrte  f0, f31
	fmuls    f31, f0, f31
	b        lbl_8019DD48

lbl_8019DD44:
	fmr      f31, f0

lbl_8019DD48:
	lfs      f0, 0x118(r1)
	lfs      f1, lbl_80518FE8@sda21(r2)
	fmuls    f3, f0, f0
	fadds    f0, f6, f3
	fadds    f0, f5, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8019DD80
	fmadds   f0, f2, f2, f3
	fadds    f3, f5, f0
	fcmpo    cr0, f3, f1
	ble      lbl_8019DD84
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8019DD84

lbl_8019DD80:
	fmr      f3, f1

lbl_8019DD84:
	lfs      f0, lbl_80518FE8@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8019DDBC
	lfs      f0, lbl_80518FF8@sda21(r2)
	lfs      f2, 0x114(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0x118(r1)
	lfs      f0, 0x11c(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x114(r1)
	stfs     f1, 0x118(r1)
	stfs     f0, 0x11c(r1)

lbl_8019DDBC:
	lfs      f0, lbl_80518FF4@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8019E2A0
	lwz      r3, 4(r31)
	lwz      r3, 0x2c4(r3)
	lbz      r0, 0x30c(r3)
	cmplwi   r0, 0
	beq      lbl_8019E2A0
	lhz      r0, 0x28(r31)
	cmplwi   r0, 2
	beq      lbl_8019E2A0
	lbz      r0, 0x60(r31)
	cmplwi   r0, 0
	bne      lbl_8019DE54
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14c(r1)
	lwz      r3, 4(r31)
	stw      r0, 0x148(r1)
	lfd      f2, lbl_80519038@sda21(r2)
	lfd      f1, 0x148(r1)
	lfs      f0, lbl_80519008@sda21(r2)
	fsubs    f1, f1, f2
	lwz      r4, 0x2c4(r3)
	lfs      f2, lbl_80519014@sda21(r2)
	lwz      r3, 0xc0(r4)
	fdivs    f3, f1, f0
	lfs      f1, 0x308(r4)
	lfs      f0, 0x8b8(r3)
	fnmsubs  f1, f2, f3, f1
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8019DE54
	li       r0, 1
	li       r3, 1
	stb      r0, 0x60(r31)
	b        lbl_8019ED1C

lbl_8019DE54:
	lhz      r0, 0x28(r31)
	cmplwi   r0, 0
	bne      lbl_8019E1E4
	li       r4, 0
	lis      r3, "__vt__26Iterator<Q24Game8Creature>"@ha
	sth      r4, 0x2a(r31)
	cmplwi   r4, 0
	addi     r0, r3, "__vt__26Iterator<Q24Game8Creature>"@l
	lwz      r3, 4(r31)
	lwz      r3, 0x2c4(r3)
	lwz      r3, 0x254(r3)
	stw      r0, 0x104(r1)
	stw      r4, 0x110(r1)
	stw      r4, 0x108(r1)
	stw      r3, 0x10c(r1)
	bne      lbl_8019DEAC
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x108(r1)
	b        lbl_8019E008

lbl_8019DEAC:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x108(r1)
	b        lbl_8019DF18

lbl_8019DEC4:
	lwz      r3, 0x10c(r1)
	lwz      r4, 0x108(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x110(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019E008
	lwz      r3, 0x10c(r1)
	lwz      r4, 0x108(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x108(r1)

lbl_8019DF18:
	lwz      r12, 0x104(r1)
	addi     r3, r1, 0x104
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019DEC4
	b        lbl_8019E008

lbl_8019DF38:
	lwz      r3, 0x10c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x110(r1)
	cmplwi   r0, 0
	bne      lbl_8019DF78
	lwz      r3, 0x10c(r1)
	lwz      r4, 0x108(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x108(r1)
	b        lbl_8019E008

lbl_8019DF78:
	lwz      r3, 0x10c(r1)
	lwz      r4, 0x108(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x108(r1)
	b        lbl_8019DFEC

lbl_8019DF98:
	lwz      r3, 0x10c(r1)
	lwz      r4, 0x108(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x110(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019E008
	lwz      r3, 0x10c(r1)
	lwz      r4, 0x108(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x108(r1)

lbl_8019DFEC:
	lwz      r12, 0x104(r1)
	addi     r3, r1, 0x104
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019DF98

lbl_8019E008:
	lwz      r3, 0x10c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x108(r1)
	cmplw    r4, r3
	bne      lbl_8019DF38
	lwz      r4, 4(r31)
	addi     r3, r1, 0xbc
	lwz      r4, 0x2c4(r4)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0xbc(r1)
	li       r0, 0
	lfs      f1, 0xc0(r1)
	addi     r3, r1, 0xb0
	lfs      f0, 0xc4(r1)
	stfs     f2, 0x138(r1)
	stfs     f1, 0x13c(r1)
	stfs     f0, 0x140(r1)
	stb      r0, 0x60(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x138(r1)
	lfs      f0, 0xb0(r1)
	lfs      f1, 0x13c(r1)
	fsubs    f3, f2, f0
	lfs      f0, 0xb4(r1)
	lfs      f4, 0x140(r1)
	fsubs    f2, f1, f0
	lfs      f1, 0xb8(r1)
	fmuls    f0, f3, f3
	fsubs    f4, f4, f1
	lfs      f1, lbl_80518FE8@sda21(r2)
	fmuls    f5, f2, f2
	stfs     f3, 0xf8(r1)
	fmuls    f6, f4, f4
	fadds    f0, f0, f5
	stfs     f2, 0xfc(r1)
	stfs     f4, 0x100(r1)
	fadds    f0, f6, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8019E0E8
	fmadds   f0, f3, f3, f5
	fadds    f3, f6, f0
	fcmpo    cr0, f3, f1
	ble      lbl_8019E0EC
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8019E0EC

lbl_8019E0E8:
	fmr      f3, f1

lbl_8019E0EC:
	lfs      f0, lbl_80518FE8@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8019E124
	lfs      f0, lbl_80518FF8@sda21(r2)
	lfs      f2, 0xf8(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0xfc(r1)
	lfs      f0, 0x100(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0xf8(r1)
	stfs     f1, 0xfc(r1)
	stfs     f0, 0x100(r1)

lbl_8019E124:
	lwz      r4, 4(r31)
	addi     r3, r1, 0x98
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r31)
	addi     r3, r1, 0xa4
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x138(r1)
	lfs      f2, 0x140(r1)
	lfs      f3, 0xa4(r1)
	lfs      f4, 0xa0(r1)
	bl       qdist2__Fffff
	lfs      f0, lbl_80519018@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8019E190
	lhz      r0, 0x28(r31)
	cmplwi   r0, 1
	beq      lbl_8019E1DC
	mr       r3, r31
	bl       setFormed__Q26PikiAI12ActFormationFv
	b        lbl_8019E1DC

lbl_8019E190:
	lwz      r3, 4(r31)
	addi     r4, r1, 0xf8
	lfs      f1, lbl_80518FF8@sda21(r2)
	bl       "setSpeed__Q24Game4PikiFfR10Vector3<f>"
	lbz      r0, 0x61(r31)
	cmplwi   r0, 0
	beq      lbl_8019E1DC
	lbz      r0, 0x60(r31)
	cmplwi   r0, 0
	bne      lbl_8019E1DC
	lwz      r3, 4(r31)
	li       r4, 0x1e
	li       r5, 0x1e
	li       r6, 0
	lwz      r12, 0(r3)
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl

lbl_8019E1DC:
	li       r3, 1
	b        lbl_8019ED1C

lbl_8019E1E4:
	li       r0, 1
	lfs      f0, lbl_80518FE8@sda21(r2)
	sth      r0, 0x2a(r31)
	addi     r3, r1, 0x80
	lwz      r4, 4(r31)
	stfs     f0, 0x1e4(r4)
	stfs     f0, 0x1e8(r4)
	stfs     f0, 0x1ec(r4)
	lwz      r4, 4(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r31)
	addi     r3, r1, 0x8c
	lwz      r4, 0x2c4(r4)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f3, 0x8c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f1, 0x80(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f2, 0x94(r1)
	lfs      f0, 0x88(r1)
	fsubs    f1, f3, f1
	fsubs    f2, f2, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	lwz      r3, 4(r31)
	fmr      f26, f1
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x1d8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 4(r31)
	fmr      f1, f26
	lfs      f2, 0x1fc(r3)
	bl       angDist__Fff
	lwz      r4, 4(r31)
	li       r3, 1
	lfs      f2, lbl_8051901C@sda21(r2)
	lfs      f0, 0x1fc(r4)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x1fc(r4)
	b        lbl_8019ED1C

lbl_8019E2A0:
	lfs      f0, lbl_80519020@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_8019E2BC
	li       r0, 0
	sth      r0, 0x2e(r31)
	b        lbl_8019E320

lbl_8019E2BC:
	lfs      f0, lbl_80519024@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8019E318
	lhz      r3, 0x2e(r31)
	addi     r0, r3, 1
	sth      r0, 0x2e(r31)
	lhz      r0, 0x2c(r31)
	cmplwi   r0, 2
	bne      lbl_8019E300
	lwz      r3, 4(r31)
	lfs      f0, lbl_80519028@sda21(r2)
	lwz      r3, 0x2c4(r3)
	lfs      f1, 0x308(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_8019E300
	li       r0, 0
	sth      r0, 0x2e(r31)

lbl_8019E300:
	lhz      r0, 0x2e(r31)
	cmplwi   r0, 6
	blt      lbl_8019E320
	li       r0, 6
	sth      r0, 0x2e(r31)
	b        lbl_8019E320

lbl_8019E318:
	li       r0, 0
	sth      r0, 0x2e(r31)

lbl_8019E320:
	lfs      f0, lbl_80519020@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	beq      lbl_8019E34C
	lhz      r0, 0x2e(r31)
	cmplwi   r0, 6
	bge      lbl_8019E42C
	lfs      f0, lbl_80519024@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_8019E42C

lbl_8019E34C:
	li       r0, 2
	lfs      f0, lbl_80518FE8@sda21(r2)
	sth      r0, 0x2a(r31)
	addi     r3, r1, 0x68
	lwz      r4, 4(r31)
	stfs     f0, 0x1e4(r4)
	stfs     f0, 0x1e8(r4)
	stfs     f0, 0x1ec(r4)
	lwz      r4, 4(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r31)
	addi     r3, r1, 0x74
	lwz      r4, 0x2c4(r4)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x7c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x70(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x74(r1)
	fsubs    f2, f2, f0
	lfs      f0, 0x68(r1)
	lfs      f3, 0x78(r1)
	fsubs    f1, f1, f0
	lfs      f0, 0x6c(r1)
	stfs     f2, 0x11c(r1)
	fsubs    f0, f3, f0
	stfs     f1, 0x114(r1)
	stfs     f0, 0x118(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	lwz      r3, 4(r31)
	lfs      f2, 0x1fc(r3)
	bl       angDist__Fff
	lwz      r3, 4(r31)
	fmr      f26, f1
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x1d8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 4(r31)
	lfs      f1, lbl_8051901C@sda21(r2)
	lfs      f0, 0x1fc(r3)
	fmadds   f0, f1, f26, f0
	stfs     f0, 0x1fc(r3)
	lhz      r0, 0x28(r31)
	cmplwi   r0, 1
	beq      lbl_8019EBF8
	mr       r3, r31
	bl       setFormed__Q26PikiAI12ActFormationFv
	b        lbl_8019EBF8

lbl_8019E42C:
	lfs      f0, lbl_80519024@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8019E914
	li       r0, 3
	li       r4, 0
	sth      r0, 0x2a(r31)
	lwz      r3, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1d8(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x60(r31)
	cmplwi   r0, 0
	beq      lbl_8019E478
	lfs      f0, lbl_80518FEC@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8019E478
	li       r0, 1
	stb      r0, 0x60(r31)

lbl_8019E478:
	lwz      r3, 4(r31)
	lfs      f2, lbl_80518FEC@sda21(r2)
	lwz      r4, 0xc0(r3)
	lfs      f1, lbl_80518FF8@sda21(r2)
	lfs      f0, 0x9c(r4)
	fdivs    f26, f2, f0
	bl       getSpeed__Q24Game4PikiFf
	fdivs    f0, f1, f26
	lwz      r4, 4(r31)
	lfs      f2, lbl_8051902C@sda21(r2)
	lfs      f5, 0x200(r4)
	lfs      f4, 0x204(r4)
	lfs      f6, 0x208(r4)
	fmuls    f3, f2, f0
	lfs      f2, lbl_80518FE8@sda21(r2)
	fmuls    f0, f5, f5
	fmuls    f4, f4, f4
	fmuls    f6, f6, f6
	fmuls    f7, f3, f1
	fadds    f0, f0, f4
	fadds    f0, f6, f0
	fcmpo    cr0, f0, f2
	ble      lbl_8019E4F0
	fmadds   f0, f5, f5, f4
	fadds    f3, f6, f0
	fcmpo    cr0, f3, f2
	ble      lbl_8019E4F4
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8019E4F4

lbl_8019E4F0:
	fmr      f3, f2

lbl_8019E4F4:
	fdivs    f0, f3, f26
	lfs      f1, lbl_8051902C@sda21(r2)
	fmuls    f0, f1, f0
	fmuls    f0, f0, f3
	fcmpo    cr0, f31, f0
	bge      lbl_8019E5CC
	lfs      f0, lbl_80518FE8@sda21(r2)
	addi     r3, r1, 0x50
	stfs     f0, 0x1e4(r4)
	stfs     f0, 0x1e8(r4)
	stfs     f0, 0x1ec(r4)
	lwz      r4, 4(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r31)
	addi     r3, r1, 0x5c
	lwz      r4, 0x2c4(r4)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x64(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x58(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x5c(r1)
	fsubs    f2, f2, f0
	lfs      f0, 0x50(r1)
	lfs      f3, 0x60(r1)
	fsubs    f1, f1, f0
	lfs      f0, 0x54(r1)
	stfs     f2, 0x11c(r1)
	fsubs    f0, f3, f0
	stfs     f1, 0x114(r1)
	stfs     f0, 0x118(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	lwz      r3, 4(r31)
	lfs      f2, 0x1fc(r3)
	bl       angDist__Fff
	lwz      r3, 4(r31)
	fmr      f26, f1
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x1d8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 4(r31)
	lfs      f1, lbl_8051901C@sda21(r2)
	lfs      f0, 0x1fc(r3)
	fmadds   f0, f1, f26, f0
	stfs     f0, 0x1fc(r3)
	b        lbl_8019E644

lbl_8019E5CC:
	fcmpo    cr0, f31, f7
	bge      lbl_8019E634
	lfs      f1, lbl_80519030@sda21(r2)
	lfs      f0, lbl_80518FE8@sda21(r2)
	fmuls    f1, f1, f26
	fmuls    f1, f1, f31
	fmadds   f2, f3, f3, f1
	fcmpo    cr0, f2, f0
	ble      lbl_8019E600
	ble      lbl_8019E604
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8019E604

lbl_8019E600:
	fmr      f2, f0

lbl_8019E604:
	lfs      f1, lbl_8051902C@sda21(r2)
	lfs      f0, 0x114(r1)
	fmadds   f3, f1, f2, f3
	lfs      f1, 0x118(r1)
	lfs      f2, 0x11c(r1)
	fmuls    f0, f0, f3
	fmuls    f1, f1, f3
	fmuls    f2, f2, f3
	stfs     f0, 0x1e4(r4)
	stfs     f1, 0x1e8(r4)
	stfs     f2, 0x1ec(r4)
	b        lbl_8019E644

lbl_8019E634:
	lfs      f1, lbl_80518FF8@sda21(r2)
	mr       r3, r4
	addi     r4, r1, 0x114
	bl       "setSpeed__Q24Game4PikiFfR10Vector3<f>"

lbl_8019E644:
	lwz      r4, 4(r31)
	addi     r3, r1, 0x38
	lwz      r4, 0x2c4(r4)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r31)
	addi     r3, r1, 0x44
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r31)
	addi     r3, r1, 0x2c
	lfs      f1, 0x4c(r1)
	lwz      r4, 0x2c4(r4)
	lfs      f0, 0x40(r1)
	lwz      r12, 0(r4)
	lfs      f3, 0x48(r1)
	fsubs    f28, f1, f0
	lfs      f2, 0x3c(r1)
	lfs      f1, 0x44(r1)
	lfs      f0, 0x38(r1)
	fsubs    f29, f3, f2
	lwz      r12, 8(r12)
	fsubs    f30, f1, f0
	lwz      r29, 0x5c(r31)
	mtctr    r12
	bctrl
	lfs      f1, 0x30(r1)
	lfs      f0, 0xa8(r29)
	lfs      f2, 0x34(r1)
	fsubs    f3, f1, f0
	lfs      f0, 0xac(r29)
	lfs      f1, 0x2c(r1)
	fsubs    f4, f2, f0
	lfs      f0, 0xa4(r29)
	fmuls    f5, f3, f3
	fsubs    f2, f1, f0
	lfs      f0, lbl_80518FE8@sda21(r2)
	fmuls    f6, f4, f4
	fmadds   f1, f2, f2, f5
	fadds    f1, f6, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8019E70C
	ble      lbl_8019E710
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8019E710

lbl_8019E70C:
	fmr      f1, f0

lbl_8019E710:
	lfs      f0, lbl_80518FE8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8019E730
	lfs      f0, lbl_80518FF8@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f2, f2, f0
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0

lbl_8019E730:
	fmuls    f0, f3, f29
	lfs      f27, lbl_80518FE8@sda21(r2)
	fmadds   f0, f2, f30, f0
	fmadds   f0, f4, f28, f0
	fcmpo    cr0, f0, f27
	ble      lbl_8019EBF8
	lwz      r0, 0x34(r31)
	fneg     f29, f28
	clrlwi.  r0, r0, 0x1f
	bne      lbl_8019E764
	fneg     f29, f29
	fneg     f27, f27
	fneg     f30, f30

lbl_8019E764:
	fmuls    f1, f27, f27
	lfs      f0, lbl_80518FE8@sda21(r2)
	fmuls    f2, f30, f30
	fmadds   f1, f29, f29, f1
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8019E790
	ble      lbl_8019E794
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8019E794

lbl_8019E790:
	fmr      f1, f0

lbl_8019E794:
	lfs      f0, lbl_80518FE8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8019E7B4
	lfs      f0, lbl_80518FF8@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f29, f29, f0
	fmuls    f27, f27, f0
	fmuls    f30, f30, f0

lbl_8019E7B4:
	lbz      r0, newVer@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8019E7D4
	clrlwi.  r0, r30, 0x18
	bne      lbl_8019E7D4
	lfs      f29, lbl_80518FE8@sda21(r2)
	fmr      f27, f29
	fmr      f30, f29

lbl_8019E7D4:
	lwz      r3, 4(r31)
	lfs      f1, lbl_80518FE8@sda21(r2)
	lfs      f3, 0x1e4(r3)
	lfs      f2, 0x1e8(r3)
	fmuls    f0, f3, f3
	lfs      f4, 0x1ec(r3)
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8019E820
	fmadds   f0, f3, f3, f2
	fadds    f28, f4, f0
	fcmpo    cr0, f28, f1
	ble      lbl_8019E824
	frsqrte  f0, f28
	fmuls    f28, f0, f28
	b        lbl_8019E824

lbl_8019E820:
	fmr      f28, f1

lbl_8019E824:
	lfs      f1, lbl_8051902C@sda21(r2)
	bl       getSpeed__Q24Game4PikiFf
	lwz      r3, 4(r31)
	fmuls    f0, f29, f1
	fmuls    f4, f27, f1
	lfs      f2, lbl_80518FE8@sda21(r2)
	lfs      f3, 0x1e4(r3)
	fmuls    f5, f30, f1
	lfs      f1, 0x1e8(r3)
	fadds    f0, f3, f0
	lfs      f3, 0x1ec(r3)
	fadds    f1, f1, f4
	stfs     f0, 0x1e4(r3)
	fadds    f0, f3, f5
	stfs     f1, 0x1e8(r3)
	stfs     f0, 0x1ec(r3)
	lwz      r3, 4(r31)
	lfs      f3, 0x1e4(r3)
	lfs      f1, 0x1e8(r3)
	fmuls    f0, f3, f3
	lfs      f4, 0x1ec(r3)
	fmuls    f1, f1, f1
	fmuls    f4, f4, f4
	fadds    f0, f0, f1
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f2
	ble      lbl_8019E8AC
	fmadds   f0, f3, f3, f1
	fadds    f3, f4, f0
	fcmpo    cr0, f3, f2
	ble      lbl_8019E8B0
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8019E8B0

lbl_8019E8AC:
	fmr      f3, f2

lbl_8019E8B0:
	lfs      f0, lbl_80518FE8@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8019E8E8
	lfs      f1, lbl_80518FF8@sda21(r2)
	lfs      f0, 0x1e4(r3)
	fdivs    f1, f1, f3
	fmuls    f0, f0, f1
	stfs     f0, 0x1e4(r3)
	lfs      f0, 0x1e8(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x1e8(r3)
	lfs      f0, 0x1ec(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x1ec(r3)

lbl_8019E8E8:
	lwz      r3, 4(r31)
	lfs      f0, 0x1e4(r3)
	lfs      f1, 0x1e8(r3)
	fmuls    f0, f0, f28
	lfs      f2, 0x1ec(r3)
	fmuls    f1, f1, f28
	fmuls    f2, f2, f28
	stfs     f0, 0x1e4(r3)
	stfs     f1, 0x1e8(r3)
	stfs     f2, 0x1ec(r3)
	b        lbl_8019EBF8

lbl_8019E914:
	li       r0, 4
	lfs      f1, lbl_80518FF8@sda21(r2)
	sth      r0, 0x2a(r31)
	addi     r4, r1, 0x114
	lwz      r3, 4(r31)
	bl       "setSpeed__Q24Game4PikiFfR10Vector3<f>"
	lwz      r4, 4(r31)
	addi     r3, r1, 0x14
	lwz      r4, 0x2c4(r4)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r31)
	addi     r3, r1, 0x20
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r31)
	addi     r3, r1, 8
	lfs      f1, 0x28(r1)
	lwz      r4, 0x2c4(r4)
	lfs      f0, 0x1c(r1)
	lwz      r12, 0(r4)
	lfs      f3, 0x24(r1)
	fsubs    f29, f1, f0
	lfs      f2, 0x18(r1)
	lfs      f1, 0x20(r1)
	lfs      f0, 0x14(r1)
	fsubs    f28, f3, f2
	lwz      r12, 8(r12)
	fsubs    f30, f1, f0
	lwz      r29, 0x5c(r31)
	mtctr    r12
	bctrl
	lfs      f1, 0xc(r1)
	lfs      f0, 0xa8(r29)
	lfs      f2, 0x10(r1)
	fsubs    f3, f1, f0
	lfs      f0, 0xac(r29)
	lfs      f1, 8(r1)
	fsubs    f4, f2, f0
	lfs      f0, 0xa4(r29)
	fmuls    f5, f3, f3
	fsubs    f2, f1, f0
	lfs      f0, lbl_80518FE8@sda21(r2)
	fmuls    f6, f4, f4
	fmadds   f1, f2, f2, f5
	fadds    f1, f6, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8019E9F4
	ble      lbl_8019E9F8
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8019E9F8

lbl_8019E9F4:
	fmr      f1, f0

lbl_8019E9F8:
	lfs      f0, lbl_80518FE8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8019EA18
	lfs      f0, lbl_80518FF8@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f2, f2, f0
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0

lbl_8019EA18:
	fmuls    f0, f3, f28
	lfs      f26, lbl_80518FE8@sda21(r2)
	fmadds   f0, f2, f30, f0
	fmadds   f0, f4, f29, f0
	fcmpo    cr0, f0, f26
	ble      lbl_8019EBF8
	lwz      r0, 0x34(r31)
	fneg     f27, f29
	clrlwi.  r0, r0, 0x1f
	bne      lbl_8019EA4C
	fneg     f27, f27
	fneg     f26, f26
	fneg     f30, f30

lbl_8019EA4C:
	fmuls    f1, f26, f26
	lfs      f0, lbl_80518FE8@sda21(r2)
	fmuls    f2, f30, f30
	fmadds   f1, f27, f27, f1
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8019EA78
	ble      lbl_8019EA7C
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8019EA7C

lbl_8019EA78:
	fmr      f1, f0

lbl_8019EA7C:
	lfs      f0, lbl_80518FE8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8019EA9C
	lfs      f0, lbl_80518FF8@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f27, f27, f0
	fmuls    f26, f26, f0
	fmuls    f30, f30, f0

lbl_8019EA9C:
	lbz      r0, newVer@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8019EABC
	clrlwi.  r0, r30, 0x18
	bne      lbl_8019EABC
	lfs      f27, lbl_80518FE8@sda21(r2)
	fmr      f26, f27
	fmr      f30, f27

lbl_8019EABC:
	lwz      r3, 4(r31)
	lfs      f1, lbl_80518FE8@sda21(r2)
	lfs      f3, 0x1e4(r3)
	lfs      f2, 0x1e8(r3)
	fmuls    f0, f3, f3
	lfs      f4, 0x1ec(r3)
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8019EB08
	fmadds   f0, f3, f3, f2
	fadds    f28, f4, f0
	fcmpo    cr0, f28, f1
	ble      lbl_8019EB0C
	frsqrte  f0, f28
	fmuls    f28, f0, f28
	b        lbl_8019EB0C

lbl_8019EB08:
	fmr      f28, f1

lbl_8019EB0C:
	lfs      f1, lbl_8051902C@sda21(r2)
	bl       getSpeed__Q24Game4PikiFf
	lwz      r3, 4(r31)
	fmuls    f0, f27, f1
	fmuls    f4, f26, f1
	lfs      f2, lbl_80518FE8@sda21(r2)
	lfs      f3, 0x1e4(r3)
	fmuls    f5, f30, f1
	lfs      f1, 0x1e8(r3)
	fadds    f0, f3, f0
	lfs      f3, 0x1ec(r3)
	fadds    f1, f1, f4
	stfs     f0, 0x1e4(r3)
	fadds    f0, f3, f5
	stfs     f1, 0x1e8(r3)
	stfs     f0, 0x1ec(r3)
	lwz      r3, 4(r31)
	lfs      f3, 0x1e4(r3)
	lfs      f1, 0x1e8(r3)
	fmuls    f0, f3, f3
	lfs      f4, 0x1ec(r3)
	fmuls    f1, f1, f1
	fmuls    f4, f4, f4
	fadds    f0, f0, f1
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f2
	ble      lbl_8019EB94
	fmadds   f0, f3, f3, f1
	fadds    f3, f4, f0
	fcmpo    cr0, f3, f2
	ble      lbl_8019EB98
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8019EB98

lbl_8019EB94:
	fmr      f3, f2

lbl_8019EB98:
	lfs      f0, lbl_80518FE8@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8019EBD0
	lfs      f1, lbl_80518FF8@sda21(r2)
	lfs      f0, 0x1e4(r3)
	fdivs    f1, f1, f3
	fmuls    f0, f0, f1
	stfs     f0, 0x1e4(r3)
	lfs      f0, 0x1e8(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x1e8(r3)
	lfs      f0, 0x1ec(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x1ec(r3)

lbl_8019EBD0:
	lwz      r3, 4(r31)
	lfs      f0, 0x1e4(r3)
	lfs      f1, 0x1e8(r3)
	fmuls    f0, f0, f28
	lfs      f2, 0x1ec(r3)
	fmuls    f1, f1, f28
	fmuls    f2, f2, f28
	stfs     f0, 0x1e4(r3)
	stfs     f1, 0x1e8(r3)
	stfs     f2, 0x1ec(r3)

lbl_8019EBF8:
	lwz      r3, 4(r31)
	lwz      r3, 0xc0(r3)
	lfs      f0, 0x840(r3)
	fcmpo    cr0, f31, f0
	bge      lbl_8019EC20
	lfs      f0, lbl_80518FE8@sda21(r2)
	li       r0, 0
	stfs     f0, 0x58(r31)
	stb      r0, 0x30(r31)
	b        lbl_8019ECDC

lbl_8019EC20:
	lfs      f0, 0x868(r3)
	fcmpo    cr0, f31, f0
	bge      lbl_8019ECC8
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x58(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x58(r31)
	lbz      r0, 0x30(r31)
	cmplwi   r0, 0
	bne      lbl_8019EC90
	lwz      r5, 0x34(r31)
	cmpwi    r5, -1
	beq      lbl_8019EC88
	lwz      r3, 0x5c(r31)
	lwz      r4, 4(r31)
	bl       releaseSlot__Q24Game6CPlateFPQ24Game8Creaturei
	cmplwi   r31, 0
	mr       r5, r31
	beq      lbl_8019EC74
	lwz      r5, 0xc(r31)

lbl_8019EC74:
	lwz      r3, 0x5c(r31)
	li       r6, 0
	lwz      r4, 4(r31)
	bl getSlot__Q24Game6CPlateFPQ24Game8CreaturePQ24Game18SlotChangeListenerb
	stw      r3, 0x34(r31)

lbl_8019EC88:
	li       r0, 1
	stb      r0, 0x30(r31)

lbl_8019EC90:
	lbz      r0, 0x20(r31)
	cmplwi   r0, 0
	bne      lbl_8019ECA8
	lwz      r0, 0x34(r31)
	cmpwi    r0, -1
	beq      lbl_8019ECC0

lbl_8019ECA8:
	lwz      r3, 4(r31)
	lfs      f1, 0x58(r31)
	lwz      r3, 0xc0(r3)
	lfs      f0, 0x890(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_8019ECDC

lbl_8019ECC0:
	li       r3, 2
	b        lbl_8019ED1C

lbl_8019ECC8:
	lbz      r0, 0x20(r31)
	cmplwi   r0, 0
	bne      lbl_8019ECDC
	li       r3, 2
	b        lbl_8019ED1C

lbl_8019ECDC:
	lbz      r0, 0x61(r31)
	cmplwi   r0, 0
	beq      lbl_8019ED18
	lbz      r0, 0x60(r31)
	cmplwi   r0, 0
	bne      lbl_8019ED18
	lwz      r3, 4(r31)
	li       r4, 0x1e
	li       r5, 0x1e
	li       r6, 0
	lwz      r12, 0(r3)
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl

lbl_8019ED18:
	li       r3, 1

lbl_8019ED1C:
	psq_l    f31, 440(r1), 0, qr0
	lfd      f31, 0x1b0(r1)
	psq_l    f30, 424(r1), 0, qr0
	lfd      f30, 0x1a0(r1)
	psq_l    f29, 408(r1), 0, qr0
	lfd      f29, 0x190(r1)
	psq_l    f28, 392(r1), 0, qr0
	lfd      f28, 0x180(r1)
	psq_l    f27, 376(r1), 0, qr0
	lfd      f27, 0x170(r1)
	psq_l    f26, 360(r1), 0, qr0
	lfd      f26, 0x160(r1)
	lwz      r31, 0x15c(r1)
	lwz      r30, 0x158(r1)
	lwz      r0, 0x1c4(r1)
	lwz      r29, 0x154(r1)
	mtlr     r0
	addi     r1, r1, 0x1c0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019ED68
 * Size:	000074
 */
void PikiAI::ActFormation::collisionCallback(Game::Piki*, Game::CollEvent&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	li       r5, 0
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, 0x2c4(r4)
	cmplwi   r3, 0
	beq      lbl_8019EDB4
	bl       commandOn__Q24Game4NaviFv
	lbz      r0, 0x38(r29)
	mr       r5, r3
	cmplwi   r0, 0
	beq      lbl_8019EDB4
	li       r5, 0

lbl_8019EDB4:
	mr       r3, r30
	mr       r4, r31
	bl       invokeAI__Q24Game4PikiFPQ24Game9CollEventb
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019EDDC
 * Size:	000058
 */
void PikiAI::ActFormation::platCallback(Game::Piki*, Game::PlatEvent&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	stw      r30, 8(r1)
	mr       r30, r4
	lwz      r3, 0x2c4(r4)
	cmplwi   r3, 0
	beq      lbl_8019EE1C
	bl       commandOn__Q24Game4NaviFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019EE1C
	mr       r3, r30
	mr       r4, r31
	bl       invokeAI__Q24Game4PikiFPQ24Game9PlatEvent

lbl_8019EE1C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019EE34
 * Size:	000008
 */
u32 PikiAI::ActFormation::resumable(void) { return 0x1; }

/*
 * --INFO--
 * Address:	8019EE3C
 * Size:	000008
 */
void PikiAI::ActFormation::getNextAIType(void)
{
	/*
	lwz      r3, 0x24(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019EE44
 * Size:	000028
 */
void __sinit_aiFormation_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804B4CF0@ha
	stw      r0, lbl_805159E8@sda21(r13)
	stfsu    f0, lbl_804B4CF0@l(r3)
	stfs     f0, lbl_805159EC@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019EE6C
 * Size:	000014
 */
void @100 @4 @PikiAI::ActFormation::inform(int)
{
	/*
	li       r11, 4
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -100
	b        inform__Q26PikiAI12ActFormationFi
	*/
}

/*
 * --INFO--
 * Address:	8019EE80
 * Size:	000014
 */
void @108 @4 @PikiAI::ActFormation::onKeyEvent(SysShape::KeyEvent const&)
{
	/*
	li       r11, 4
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -108
	b        onKeyEvent__Q26PikiAI12ActFormationFRCQ28SysShape8KeyEvent
	*/
}
