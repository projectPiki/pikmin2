#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80490100
    lbl_80490100:
        .4byte 0x50535365
        .4byte 0x42617365
        .4byte 0x2E637070
        .4byte 0x00000000
    .global lbl_80490110
    lbl_80490110:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q38PSSystem9ClusterSe7Factory
    __vt__Q38PSSystem9ClusterSe7Factory:
        .4byte 0
        .4byte 0
        .4byte constructPart__Q38PSSystem9ClusterSe7FactoryFv
        .4byte 0
    .global __vt__Q38PSSystem9ClusterSe4Part
    __vt__Q38PSSystem9ClusterSe4Part:
        .4byte 0
        .4byte 0
        .4byte callSe__Q38PSSystem9ClusterSe4PartFPQ27JAInter6Object
    .global __vt__Q28PSSystem24EnvSe_PauseOffReservator
    __vt__Q28PSSystem24EnvSe_PauseOffReservator:
        .4byte 0
        .4byte 0
        .4byte reservatorTask__Q28PSSystem24EnvSe_PauseOffReservatorFv
    .global __vt__Q28PSSystem9EnvSeBase
    __vt__Q28PSSystem9EnvSeBase:
        .4byte 0
        .4byte 0
        .4byte exec__Q28PSSystem9EnvSeBaseFv
        .4byte play__Q28PSSystem9EnvSeBaseFv
        .4byte getCastType__Q28PSSystem9EnvSeBaseFv
        .4byte setPanAndDolby__Q28PSSystem9EnvSeBaseFP8JAISound

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051E1C0
    lbl_8051E1C0:
        .4byte 0x00000000
    .global lbl_8051E1C4
    lbl_8051E1C4:
        .float 0.3
    .global lbl_8051E1C8
    lbl_8051E1C8:
        .4byte 0x3ECCCCCD
    .global lbl_8051E1CC
    lbl_8051E1CC:
        .float 1.0
    .global lbl_8051E1D0
    lbl_8051E1D0:
        .4byte 0x43300000
        .4byte 0x00000000
*/

namespace PSSystem {

/*
 * --INFO--
 * Address:	80340838
 * Size:	0000A4
 */
EnvSeBase::EnvSeBase(unsigned long, float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	fmr      f31, f1
	mr       r30, r3
	mr       r31, r4
	mr       r4, r30
	bl       __ct__10JSUPtrLinkFPv
	lis      r3, __vt__Q28PSSystem9EnvSeBase@ha
	lfs      f1, lbl_8051E1C0@sda21(r2)
	addi     r0, r3, __vt__Q28PSSystem9EnvSeBase@l
	li       r5, 0
	stw      r0, 0x10(r30)
	li       r4, 2
	lfs      f0, lbl_8051E1C4@sda21(r2)
	li       r0, 1
	stfs     f1, 0x14(r30)
	mr       r3, r30
	stw      r5, 0x18(r30)
	stw      r4, 0x1c(r30)
	stb      r5, 0x20(r30)
	stw      r31, 0x24(r30)
	stfs     f31, 0x28(r30)
	stfs     f1, 0x2c(r30)
	stfs     f0, 0x30(r30)
	stw      r5, 0x34(r30)
	stb      r0, 0x38(r30)
	stb      r5, 0x39(r30)
	stb      r5, 0x3a(r30)
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803408DC
 * Size:	00035C
 */
void EnvSeBase::exec()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	lbz      r0, 0x39(r3)
	cmplwi   r0, 0
	bne      lbl_8034092C
	lwz      r3, 0x34(r31)
	cmplwi   r3, 0
	beq      lbl_80340C20
	lwz      r12, 0x10(r3)
	li       r4, 0
	lfs      f1, lbl_8051E1C0@sda21(r2)
	li       r5, 5
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80340C20

lbl_8034092C:
	lbz      r0, 0x38(r31)
	cmpwi    r0, 1
	beq      lbl_80340C20
	bge      lbl_80340948
	cmpwi    r0, 0
	bge      lbl_80340954
	b        lbl_80340C04

lbl_80340948:
	cmpwi    r0, 3
	bge      lbl_80340C04
	b        lbl_80340AAC

lbl_80340954:
	lwz      r12, 0x10(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	or.      r30, r3, r3
	beq      lbl_80340C20
	mr       r3, r31
	mr       r4, r30
	lwz      r12, 0x10(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	lfs      f1, 0x28(r31)
	lwz      r12, 0x10(r30)
	li       r4, 0
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	lfs      f1, lbl_8051E1C8@sda21(r2)
	lwz      r12, 0x10(r30)
	li       r4, 0
	li       r5, 0
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	lfs      f1, lbl_8051E1CC@sda21(r2)
	lwz      r12, 0x10(r30)
	li       r4, 0x14
	li       r5, 5
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	lfs      f1, 0x30(r31)
	lwz      r12, 0x10(r30)
	li       r4, 0
	li       r5, 0
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x1c(r31)
	cmpwi    r0, 2
	beq      lbl_80340C20
	cmpwi    r0, 1
	beq      lbl_80340A4C
	bge      lbl_80340A70
	cmpwi    r0, 0
	bge      lbl_80340A28
	b        lbl_80340A70

lbl_80340A28:
	lwz      r3, 0x34(r31)
	lfs      f1, 0x14(r31)
	lwz      r12, 0x10(r3)
	lwz      r4, 0x18(r31)
	lwz      r12, 0x1c(r12)
	lbz      r5, 0x20(r31)
	mtctr    r12
	bctrl
	b        lbl_80340A8C

lbl_80340A4C:
	lwz      r3, 0x34(r31)
	lfs      f1, 0x14(r31)
	lwz      r12, 0x10(r3)
	lwz      r4, 0x18(r31)
	lwz      r12, 0x2c(r12)
	lbz      r5, 0x20(r31)
	mtctr    r12
	bctrl
	b        lbl_80340A8C

lbl_80340A70:
	lis      r3, lbl_80490100@ha
	lis      r5, lbl_80490110@ha
	addi     r3, r3, lbl_80490100@l
	li       r4, 0x3e
	addi     r5, r5, lbl_80490110@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80340A8C:
	lfs      f0, lbl_8051E1C0@sda21(r2)
	li       r3, 0
	li       r0, 2
	stfs     f0, 0x14(r31)
	stw      r3, 0x18(r31)
	stw      r0, 0x1c(r31)
	stb      r3, 0x20(r31)
	b        lbl_80340C20

lbl_80340AAC:
	lwz      r12, 0x10(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	or.      r30, r3, r3
	beq      lbl_80340C20
	mr       r3, r31
	mr       r4, r30
	lwz      r12, 0x10(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	lfs      f1, 0x28(r31)
	lwz      r12, 0x10(r30)
	li       r4, 0
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	lfs      f1, lbl_8051E1C8@sda21(r2)
	lwz      r12, 0x10(r30)
	li       r4, 0
	li       r5, 0
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	lfs      f1, 0x2c(r31)
	lwz      r12, 0x10(r30)
	li       r4, 0
	li       r5, 5
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	lfs      f1, 0x30(r31)
	lwz      r12, 0x10(r30)
	li       r4, 0
	li       r5, 0
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x1c(r31)
	cmpwi    r0, 2
	beq      lbl_80340C20
	cmpwi    r0, 1
	beq      lbl_80340BA4
	bge      lbl_80340BC8
	cmpwi    r0, 0
	bge      lbl_80340B80
	b        lbl_80340BC8

lbl_80340B80:
	lwz      r3, 0x34(r31)
	lfs      f1, 0x14(r31)
	lwz      r12, 0x10(r3)
	lwz      r4, 0x18(r31)
	lwz      r12, 0x1c(r12)
	lbz      r5, 0x20(r31)
	mtctr    r12
	bctrl
	b        lbl_80340BE4

lbl_80340BA4:
	lwz      r3, 0x34(r31)
	lfs      f1, 0x14(r31)
	lwz      r12, 0x10(r3)
	lwz      r4, 0x18(r31)
	lwz      r12, 0x2c(r12)
	lbz      r5, 0x20(r31)
	mtctr    r12
	bctrl
	b        lbl_80340BE4

lbl_80340BC8:
	lis      r3, lbl_80490100@ha
	lis      r5, lbl_80490110@ha
	addi     r3, r3, lbl_80490100@l
	li       r4, 0x3e
	addi     r5, r5, lbl_80490110@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80340BE4:
	lfs      f0, lbl_8051E1C0@sda21(r2)
	li       r3, 0
	li       r0, 2
	stfs     f0, 0x14(r31)
	stw      r3, 0x18(r31)
	stw      r0, 0x1c(r31)
	stb      r3, 0x20(r31)
	b        lbl_80340C20

lbl_80340C04:
	lis      r3, lbl_80490100@ha
	lis      r5, lbl_80490110@ha
	addi     r3, r3, lbl_80490100@l
	li       r4, 0x84
	addi     r5, r5, lbl_80490110@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80340C20:
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
 * Address:	80340C38
 * Size:	000040
 */
void EnvSeBase::play()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r6, 0x3c
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r5, r31, 0x34
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	lwz      r4, 0x24(r31)
	bl       playSystemSe__Q28PSSystem5SysIFFUlPP8JAISoundUl
	lwz      r0, 0x14(r1)
	lwz      r3, 0x34(r31)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80340C78
 * Size:	000034
 */
void EnvSeMgr::setAllPauseFlag(unsigned char)
{
	/*
	lwz      r6, 0(r3)
	li       r0, 0
	b        lbl_80340CA0

lbl_80340C84:
	lwz      r5, 0(r6)
	stb      r4, 0x38(r5)
	lbz      r3, 0x3a(r5)
	cmplwi   r3, 0
	beq      lbl_80340C9C
	stb      r0, 0x38(r5)

lbl_80340C9C:
	lwz      r6, 0xc(r6)

lbl_80340CA0:
	cmplwi   r6, 0
	bne      lbl_80340C84
	blr
	*/
}

/*
 * --INFO--
 * Address:	80340CAC
 * Size:	000024
 */
void EnvSeMgr::on()
{
	/*
	lwz      r4, 0(r3)
	li       r0, 1
	b        lbl_80340CC4

lbl_80340CB8:
	lwz      r3, 0(r4)
	stb      r0, 0x39(r3)
	lwz      r4, 0xc(r4)

lbl_80340CC4:
	cmplwi   r4, 0
	bne      lbl_80340CB8
	blr
	*/
}

/*
 * --INFO--
 * Address:	80340CD0
 * Size:	000050
 */
void EnvSeMgr::on(unsigned long, bool)
{
	/*
	lwz      r7, 0(r3)
	clrlwi   r5, r5, 0x18
	li       r0, 1
	b        lbl_80340D14

lbl_80340CE0:
	lwz      r6, 0(r7)
	lwz      r3, 0x24(r6)
	cmplw    r4, r3
	bne      lbl_80340CF8
	cmplwi   r5, 1
	beq      lbl_80340D0C

lbl_80340CF8:
	lwz      r3, 0x24(r6)
	cmplw    r4, r3
	beq      lbl_80340D10
	cmplwi   r5, 0
	bne      lbl_80340D10

lbl_80340D0C:
	stb      r0, 0x39(r6)

lbl_80340D10:
	lwz      r7, 0xc(r7)

lbl_80340D14:
	cmplwi   r7, 0
	bne      lbl_80340CE0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80340D20
 * Size:	000024
 */
void EnvSeMgr::off()
{
	/*
	lwz      r4, 0(r3)
	li       r0, 0
	b        lbl_80340D38

lbl_80340D2C:
	lwz      r3, 0(r4)
	stb      r0, 0x39(r3)
	lwz      r4, 0xc(r4)

lbl_80340D38:
	cmplwi   r4, 0
	bne      lbl_80340D2C
	blr
	*/
}

/*
 * --INFO--
 * Address:	80340D44
 * Size:	000050
 */
void EnvSeMgr::off(unsigned long, bool)
{
	/*
	lwz      r7, 0(r3)
	clrlwi   r5, r5, 0x18
	li       r0, 0
	b        lbl_80340D88

lbl_80340D54:
	lwz      r6, 0(r7)
	lwz      r3, 0x24(r6)
	cmplw    r4, r3
	bne      lbl_80340D6C
	cmplwi   r5, 1
	beq      lbl_80340D80

lbl_80340D6C:
	lwz      r3, 0x24(r6)
	cmplw    r4, r3
	beq      lbl_80340D84
	cmplwi   r5, 0
	bne      lbl_80340D84

lbl_80340D80:
	stb      r0, 0x39(r6)

lbl_80340D84:
	lwz      r7, 0xc(r7)

lbl_80340D88:
	cmplwi   r7, 0
	bne      lbl_80340D54
	blr
	*/
}

/*
 * --INFO--
 * Address:	80340D94
 * Size:	00000C
 */
void EnvSeMgr::reservePauseOff()
{
	// Generated from sth r0, 0x10(r3)
	_10 = 31;
}

/*
 * --INFO--
 * Address:	80340DA0
 * Size:	000070
 */
void EnvSeMgr::setVolumeRequest(float, unsigned long, unsigned char)
{
	/*
	stwu     r1, -0x30(r1)
	lwz      r7, 0(r3)
	li       r3, 0
	b        lbl_80340E00

lbl_80340DB0:
	lwz      r6, 0(r7)
	cmplwi   r6, 0
	beq      lbl_80340DFC
	stfs     f1, 0x18(r1)
	lwz      r0, 0x18(r1)
	stb      r5, 0x24(r1)
	stw      r0, 8(r1)
	lwz      r0, 0x24(r1)
	lfs      f0, 8(r1)
	stw      r0, 0x14(r1)
	stfs     f0, 0x14(r6)
	lbz      r0, 0x14(r1)
	stw      r4, 0x18(r6)
	stw      r3, 0x1c(r6)
	stw      r4, 0x1c(r1)
	stw      r3, 0x20(r1)
	stw      r4, 0xc(r1)
	stw      r3, 0x10(r1)
	stb      r0, 0x20(r6)

lbl_80340DFC:
	lwz      r7, 0xc(r7)

lbl_80340E00:
	cmplwi   r7, 0
	bne      lbl_80340DB0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80340E10
 * Size:	000080
 */
void EnvSeMgr::exec()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lhz      r3, 0x10(r3)
	cmplwi   r3, 0
	beq      lbl_80340E54
	addi     r0, r3, -1
	cmplwi   r3, 1
	sth      r0, 0x10(r31)
	bne      lbl_80340E54
	addi     r3, r31, 0xc
	lwz      r12, 0xc(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80340E54:
	lwz      r31, 0(r31)
	b        lbl_80340E74

lbl_80340E5C:
	lwz      r3, 0(r31)
	lwz      r12, 0x10(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r31, 0xc(r31)

lbl_80340E74:
	cmplwi   r31, 0
	bne      lbl_80340E5C
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80340E90
 * Size:	000038
 */
void EnvSe_PauseOffReservator::reservatorTask()
{
	/*
	lwz      r4, 8(r3)
	li       r3, 0
	lwz      r4, 0(r4)
	b        lbl_80340EBC

lbl_80340EA0:
	lwz      r5, 0(r4)
	stb      r3, 0x38(r5)
	lbz      r0, 0x3a(r5)
	cmplwi   r0, 0
	beq      lbl_80340EB8
	stb      r3, 0x38(r5)

lbl_80340EB8:
	lwz      r4, 0xc(r4)

lbl_80340EBC:
	cmplwi   r4, 0
	bne      lbl_80340EA0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80340EC8
 * Size:	000020
 */
ClusterSe::PartInitArg::PartInitArg()
{
	/*
	li       r4, 0xff
	li       r0, -1
	stb      r4, 0(r3)
	stb      r4, 1(r3)
	stb      r4, 2(r3)
	stb      r4, 3(r3)
	stw      r0, 4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80340EE8
 * Size:	00002C
 */
ClusterSe::Part::Part()
{
	/*
	lis      r5, __vt__Q38PSSystem9ClusterSe4Part@ha
	li       r4, 0xff
	addi     r5, r5, __vt__Q38PSSystem9ClusterSe4Part@l
	li       r0, -1
	stw      r5, 0(r3)
	stb      r4, 4(r3)
	stb      r4, 5(r3)
	stb      r4, 6(r3)
	stb      r4, 7(r3)
	stw      r0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80340F14
 * Size:	00003C
 */
void ClusterSe::Part::callSe(JAInter::Object*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r3
	mr       r3, r4
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r4, 8(r5)
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
 * Address:	80340F50
 * Size:	000060
 */
ClusterSe::Factory::Factory(unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, __vt__Q38PSSystem9ClusterSe7Factory@ha
	stw      r0, 0x14(r1)
	clrlwi.  r0, r4, 0x18
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r5, __vt__Q38PSSystem9ClusterSe7Factory@l
	stw      r3, 0(r31)
	stb      r4, 4(r31)
	bne      lbl_80340F98
	lis      r3, lbl_80490100@ha
	lis      r5, lbl_80490110@ha
	addi     r3, r3, lbl_80490100@l
	li       r4, 0x1da
	addi     r5, r5, lbl_80490110@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80340F98:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80340FB0
 * Size:	000074
 */
void ClusterSe::Factory::constructPart()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lbz      r31, 4(r3)
	mulli    r3, r31, 0xc
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q38PSSystem9ClusterSe4PartFv@ha
	mr       r7, r31
	addi     r4, r4, __ct__Q38PSSystem9ClusterSe4PartFv@l
	li       r5, 0
	li       r6, 0xc
	bl       __construct_new_array
	or.      r31, r3, r3
	bne      lbl_8034100C
	lis      r3, lbl_80490100@ha
	lis      r5, lbl_80490110@ha
	addi     r3, r3, lbl_80490100@l
	li       r4, 0x1e4
	addi     r5, r5, lbl_80490110@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8034100C:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80341024
 * Size:	0002B4
 */
void ClusterSe::Mgr::constructParts(PSSystem::ClusterSe::Factory&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	mr       r29, r3
	stw      r28, 0x20(r1)
	mr       r28, r4
	mr       r3, r28
	lbz      r0, 4(r4)
	stb      r0, 0(r29)
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r29)
	lwz      r0, 4(r29)
	cmplwi   r0, 0
	bne      lbl_80341090
	lis      r3, lbl_80490100@ha
	lis      r5, lbl_80490110@ha
	addi     r3, r3, lbl_80490100@l
	li       r4, 0x1fa
	addi     r5, r5, lbl_80490110@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80341090:
	li       r30, 0
	b        lbl_803412A8

lbl_80341098:
	mr       r4, r28
	addi     r3, r1, 0x10
	lwz      r12, 0(r28)
	clrlwi   r5, r30, 0x18
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lbz      r5, 0x10(r1)
	clrlwi   r0, r30, 0x18
	lbz      r4, 0x11(r1)
	mulli    r3, r0, 0xc
	lbz      r7, 0x12(r1)
	li       r0, 0
	lbz      r6, 0x13(r1)
	stb      r5, 0x18(r1)
	lwz      r5, 0x14(r1)
	stb      r4, 0x19(r1)
	lwz      r4, 4(r29)
	stb      r7, 0x1a(r1)
	add      r31, r4, r3
	stb      r6, 0x1b(r1)
	lwz      r3, 0x18(r1)
	stw      r5, 0x1c(r1)
	stw      r3, 8(r1)
	lbz      r3, 8(r1)
	stw      r5, 0xc(r1)
	cmplwi   r3, 0
	beq      lbl_80341114
	cmplwi   r3, 0xff
	beq      lbl_80341114
	li       r0, 1

lbl_80341114:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80341138
	lis      r3, lbl_80490100@ha
	lis      r5, lbl_80490110@ha
	addi     r3, r3, lbl_80490100@l
	li       r4, 0x170
	addi     r5, r5, lbl_80490110@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80341138:
	lbz      r4, 9(r1)
	li       r3, 0
	cmplwi   r4, 0xff
	beq      lbl_80341158
	lbz      r0, 8(r1)
	cmplw    r0, r4
	ble      lbl_80341158
	li       r3, 1

lbl_80341158:
	clrlwi.  r0, r3, 0x18
	bne      lbl_8034117C
	lis      r3, lbl_80490100@ha
	lis      r5, lbl_80490110@ha
	addi     r3, r3, lbl_80490100@l
	li       r4, 0x171
	addi     r5, r5, lbl_80490110@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8034117C:
	lbz      r0, 0xa(r1)
	cmplwi   r0, 0xff
	bne      lbl_803411A4
	lis      r3, lbl_80490100@ha
	lis      r5, lbl_80490110@ha
	addi     r3, r3, lbl_80490100@l
	li       r4, 0x172
	addi     r5, r5, lbl_80490110@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803411A4:
	lbz      r0, 0xb(r1)
	cmplwi   r0, 0xff
	bne      lbl_803411CC
	lis      r3, lbl_80490100@ha
	lis      r5, lbl_80490110@ha
	addi     r3, r3, lbl_80490100@l
	li       r4, 0x173
	addi     r5, r5, lbl_80490110@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803411CC:
	lbz      r3, 8(r1)
	lbz      r0, 0xa(r1)
	cmplw    r3, r0
	bge      lbl_803411F8
	lis      r3, lbl_80490100@ha
	lis      r5, lbl_80490110@ha
	addi     r3, r3, lbl_80490100@l
	li       r4, 0x175
	addi     r5, r5, lbl_80490110@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803411F8:
	lbz      r3, 0xa(r1)
	lbz      r0, 0xb(r1)
	cmplw    r3, r0
	bgt      lbl_80341224
	lis      r3, lbl_80490100@ha
	lis      r5, lbl_80490110@ha
	addi     r3, r3, lbl_80490100@l
	li       r4, 0x176
	addi     r5, r5, lbl_80490110@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80341224:
	lbz      r3, 0xb(r1)
	lbz      r0, 9(r1)
	cmplw    r3, r0
	bge      lbl_80341250
	lis      r3, lbl_80490100@ha
	lis      r5, lbl_80490110@ha
	addi     r3, r3, lbl_80490100@l
	li       r4, 0x177
	addi     r5, r5, lbl_80490110@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80341250:
	lwz      r3, 0xc(r1)
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	bne      lbl_8034127C
	lis      r3, lbl_80490100@ha
	lis      r5, lbl_80490110@ha
	addi     r3, r3, lbl_80490100@l
	li       r4, 0x179
	addi     r5, r5, lbl_80490110@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8034127C:
	lbz      r0, 8(r1)
	addi     r30, r30, 1
	lbz      r3, 9(r1)
	stb      r0, 4(r31)
	lbz      r0, 0xa(r1)
	stb      r3, 5(r31)
	lbz      r3, 0xb(r1)
	stb      r0, 6(r31)
	lwz      r0, 0xc(r1)
	stb      r3, 7(r31)
	stw      r0, 8(r31)

lbl_803412A8:
	lbz      r0, 0(r29)
	clrlwi   r3, r30, 0x18
	cmplw    r3, r0
	blt      lbl_80341098
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	803412D8
 * Size:	0001A4
 */
void ClusterSe::Mgr::play(unsigned char, JAInter::Object*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r25, 0x24(r1)
	or.      r30, r5, r5
	mr       r28, r3
	mr       r29, r4
	bne      lbl_80341314
	lis      r3, lbl_80490100@ha
	lis      r5, lbl_80490110@ha
	addi     r3, r3, lbl_80490100@l
	li       r4, 0x20a
	addi     r5, r5, lbl_80490110@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80341314:
	clrlwi   r27, r29, 0x18
	li       r31, 0
	b        lbl_80341458

lbl_80341320:
	clrlwi   r0, r31, 0x18
	lwz      r3, 4(r28)
	mulli    r0, r0, 0xc
	add      r25, r3, r0
	lbz      r0, 4(r25)
	cmplw    r27, r0
	bgt      lbl_80341454
	lbz      r0, 5(r25)
	cmplw    r27, r0
	blt      lbl_80341454
	mr       r3, r25
	mr       r4, r30
	lwz      r12, 0(r25)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	or.      r26, r3, r3
	beq      lbl_80341454
	lbz      r5, 6(r25)
	clrlwi   r3, r29, 0x18
	lfs      f5, lbl_8051E1CC@sda21(r2)
	cmplw    r3, r5
	ble      lbl_803413CC
	lis      r4, 0x4330
	lbz      r0, 4(r25)
	stw      r3, 0xc(r1)
	li       r3, 1
	lfd      f3, lbl_8051E1D0@sda21(r2)
	stw      r4, 8(r1)
	lfs      f4, lbl_8051E1C0@sda21(r2)
	lfd      f0, 8(r1)
	stw      r0, 0x14(r1)
	fsubs    f1, f0, f3
	stw      r4, 0x10(r1)
	lfd      f0, 0x10(r1)
	stw      r5, 0x1c(r1)
	fsubs    f2, f0, f3
	stw      r4, 0x18(r1)
	lfd      f0, 0x18(r1)
	fsubs    f3, f0, f3
	bl       linearTransform__7JALCalcFfffffb
	fmr      f5, f1
	b        lbl_80341428

lbl_803413CC:
	lbz      r5, 7(r25)
	cmplw    r5, r3
	ble      lbl_80341428
	lbz      r0, 5(r25)
	lis      r4, 0x4330
	stw      r3, 0x1c(r1)
	fmr      f4, f5
	lfd      f3, lbl_8051E1D0@sda21(r2)
	li       r3, 1
	stw      r4, 0x18(r1)
	lfs      f5, lbl_8051E1C0@sda21(r2)
	lfd      f0, 0x18(r1)
	stw      r5, 0x14(r1)
	fsubs    f1, f0, f3
	stw      r4, 0x10(r1)
	lfd      f0, 0x10(r1)
	stw      r0, 0xc(r1)
	fsubs    f2, f0, f3
	stw      r4, 8(r1)
	lfd      f0, 8(r1)
	fsubs    f3, f0, f3
	bl       linearTransform__7JALCalcFfffffb
	fmr      f5, f1

lbl_80341428:
	lfs      f0, lbl_8051E1CC@sda21(r2)
	fcmpu    cr0, f0, f5
	beq      lbl_80341454
	mr       r3, r26
	fmr      f1, f5
	lwz      r12, 0x10(r26)
	li       r4, 0
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80341454:
	addi     r31, r31, 1

lbl_80341458:
	lbz      r0, 0(r28)
	clrlwi   r3, r31, 0x18
	cmplw    r3, r0
	blt      lbl_80341320
	lmw      r25, 0x24(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}
} // namespace PSSystem
