#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80499E10
    lbl_80499E10:
        .4byte 0x73797354
        .4byte 0x696D6572
        .4byte 0x73000000
    .global lbl_80499E1C
    lbl_80499E1C:
        .4byte 0x73797354
        .4byte 0x696D6572
        .4byte 0x732E6370
        .4byte 0x70000000
    .global lbl_80499E2C
    lbl_80499E2C:
        .asciz "P2Assert"
        .skip 3
    .global lbl_80499E38
    lbl_80499E38:
        .4byte 0x974C82E8
        .4byte 0x82A682C8
        .4byte 0x82A2815B
        .4byte 0x8140974C
        .4byte 0x82E882A6
        .4byte 0x82C882A2
        .4byte 0x815C2083
        .4byte 0x55837D83
        .4byte 0x56838183
        .4byte 0x62834E81
        .4byte 0x4981490A
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__8TimerInf
    __vt__8TimerInf:
        .4byte 0
        .4byte 0
        .4byte __dt__8TimerInfFv
    .global __vt__9SysTimers
    __vt__9SysTimers:
        .4byte 0
        .4byte 0
        .4byte __dt__9SysTimersFv
        .4byte getChildCount__5CNodeFv
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global drawFlag__9SysTimers
    drawFlag__9SysTimers:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520588
    lbl_80520588:
        .4byte 0x6E6F6E61
        .4byte 0x6D650000
    .global lbl_80520590
    lbl_80520590:
        .4byte 0x00000000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	8042A7FC
 * Size:	0000E0
 */
SysTimers::SysTimers()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	bl       __ct__5CNodeFv
	lis      r3, __vt__9SysTimers@ha
	li       r4, -1
	addi     r0, r3, __vt__9SysTimers@l
	li       r3, 0
	stw      r0, 0(r31)
	li       r0, 0x40
	stw      r4, 0x18(r31)
	stb      r3, drawFlag__9SysTimers@sda21(r13)
	stw      r0, 0x1c(r31)
	lwz      r30, 0x1c(r31)
	mulli    r3, r30, 0x3c
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __defctor__8TimerInfFv@ha
	lis      r5, __dt__8TimerInfFv@ha
	addi     r4, r4, __defctor__8TimerInfFv@l
	mr       r7, r30
	addi     r5, r5, __dt__8TimerInfFv@l
	li       r6, 0x3c
	bl       __construct_new_array
	stw      r3, 0x20(r31)
	li       r29, 0
	addi     r30, r2, lbl_80520588@sda21
	b        lbl_8042A89C

lbl_8042A87C:
	mr       r3, r31
	mr       r4, r29
	bl       get__9SysTimersFi
	lbz      r0, 0x38(r3)
	addi     r29, r29, 1
	ori      r0, r0, 1
	stb      r0, 0x38(r3)
	stw      r30, 0x18(r3)

lbl_8042A89C:
	lwz      r0, 0x1c(r31)
	cmpw     r29, r0
	blt      lbl_8042A87C
	lfs      f0, lbl_80520590@sda21(r2)
	lis      r3, lbl_80499E10@ha
	addi     r0, r3, lbl_80499E10@l
	mr       r3, r31
	stfs     f0, 0x24(r31)
	stw      r0, 0x14(r31)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042A8DC
 * Size:	00006C
 */
void TimerInf::__defctor()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__8TimerInf@ha
	li       r5, 0
	addi     r0, r3, __vt__8TimerInf@l
	addi     r4, r2, lbl_80520588@sda21
	stw      r0, 0(r31)
	li       r0, -1
	lfs      f0, lbl_80520590@sda21(r2)
	mr       r3, r31
	stb      r5, 0x38(r31)
	stw      r4, 0x18(r31)
	stfs     f0, 0x20(r31)
	stfs     f0, 0x24(r31)
	stfs     f0, 0x28(r31)
	stfs     f0, 0x2c(r31)
	stw      r5, 0x30(r31)
	stw      r0, 0x34(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042A948
 * Size:	000068
 */
SysTimers::~SysTimers()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8042A994
	lis      r4, __vt__9SysTimers@ha
	addi     r0, r4, __vt__9SysTimers@l
	stw      r0, 0(r30)
	bl       reset__9SysTimersFv
	mr       r3, r30
	li       r4, 0
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_8042A994
	mr       r3, r30
	bl       __dl__FPv

lbl_8042A994:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042A9B0
 * Size:	00007C
 */
void SysTimers::get(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0
	blt      lbl_8042A9E4
	lwz      r0, 0x1c(r30)
	cmpw     r31, r0
	bge      lbl_8042A9E4
	li       r3, 1

lbl_8042A9E4:
	clrlwi.  r0, r3, 0x18
	bne      lbl_8042AA08
	lis      r3, lbl_80499E1C@ha
	lis      r5, lbl_80499E2C@ha
	addi     r3, r3, lbl_80499E1C@l
	li       r4, 0x77
	addi     r5, r5, lbl_80499E2C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8042AA08:
	mulli    r0, r31, 0x3c
	lwz      r3, 0x20(r30)
	add      r3, r3, r0
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
 * Address:	8042AA2C
 * Size:	000074
 */
TimerInf::~TimerInf()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8042AA84
	lis      r3, __vt__8TimerInf@ha
	mr       r4, r30
	addi     r0, r3, __vt__8TimerInf@l
	stw      r0, 0(r30)
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x28(r3)
	bl       remove__9SysTimersFP8TimerInf
	mr       r3, r30
	li       r4, 0
	bl       __dt__11JKRDisposerFv
	extsh.   r0, r31
	ble      lbl_8042AA84
	mr       r3, r30
	bl       __dl__FPv

lbl_8042AA84:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042AAA0
 * Size:	000038
 */
void SysTimers::reset()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, lbl_80499E1C@ha
	lis      r5, lbl_80499E38@ha
	stw      r0, 0x14(r1)
	addi     r3, r3, lbl_80499E1C@l
	li       r4, 0x88
	addi     r5, r5, lbl_80499E38@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042AAD8
 * Size:	000010
 */
void SysTimers::newFrame()
{
	/*
	lwz      r4, 0x18(r3)
	addi     r0, r4, 1
	stw      r0, 0x18(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042AAE8
 * Size:	000010
 */
void SysTimers::remove(TimerInf*)
{
	/*
	lbz      r0, 0x38(r4)
	ori      r0, r0, 1
	stb      r0, 0x38(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042AAF8
 * Size:	000004
 */
void SysTimers::_start(char*, bool) { }

/*
 * --INFO--
 * Address:	8042AAFC
 * Size:	000004
 */
void SysTimers::_stop(char*) { }

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void SysTimers::showTimes()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void SysTimers::draw(J2DGrafContext&)
{
	// UNUSED FUNCTION
}
