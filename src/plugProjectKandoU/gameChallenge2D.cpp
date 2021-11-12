#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80483AB0
    lbl_80483AB0:
        .asciz "gameChallenge2D.cpp"
    .global lbl_80483AC4
    lbl_80483AC4:
        .asciz "P2Assert"
        .skip 3

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A3B8
    lbl_8051A3B8:
        .4byte 0x5A414E4E
        .4byte 0x454E0A00
*/

namespace Game {

/*
 * --INFO--
 * Address:	802350A0
 * Size:	000064
 */
Challenge2D_TitleInfo::Challenge2D_TitleInfo(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mulli    r3, r31, 0x24
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q34Game21Challenge2D_TitleInfo4InfoFv@ha
	mr       r7, r31
	addi     r4, r4, __ct__Q34Game21Challenge2D_TitleInfo4InfoFv@l
	li       r5, 0
	li       r6, 0x24
	bl       __construct_new_array
	stw      r3, 0(r30)
	mr       r3, r30
	stw      r31, 4(r30)
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
 * Address:	80235104
 * Size:	000030
 */
Challenge2D_TitleInfo::Info::Info(void)
{
	/*
	li       r0, 0
	stb      r0, 0x20(r3)
	stw      r0, 0(r3)
	stw      r0, 8(r3)
	stw      r0, 4(r3)
	stw      r0, 0xc(r3)
	stw      r0, 0x10(r3)
	stw      r0, 0x18(r3)
	stw      r0, 0x14(r3)
	stw      r0, 0x1c(r3)
	stb      r0, 0x20(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80235134
 * Size:	00007C
 */
void Challenge2D_TitleInfo::operator()(int)
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
	blt      lbl_80235168
	lwz      r0, 4(r30)
	cmpw     r31, r0
	bge      lbl_80235168
	li       r3, 1

lbl_80235168:
	clrlwi.  r0, r3, 0x18
	bne      lbl_8023518C
	lis      r3, lbl_80483AB0@ha
	lis      r5, lbl_80483AC4@ha
	addi     r3, r3, lbl_80483AB0@l
	li       r4, 0x1f
	addi     r5, r5, lbl_80483AC4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8023518C:
	mulli    r0, r31, 0x24
	lwz      r3, 0(r30)
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
 * Address:	802351B0
 * Size:	000064
 */
Vs2D_TitleInfo::Vs2D_TitleInfo(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	slwi     r3, r4, 2
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q34Game14Vs2D_TitleInfo4InfoFv@ha
	mr       r7, r31
	addi     r4, r4, __ct__Q34Game14Vs2D_TitleInfo4InfoFv@l
	li       r5, 0
	li       r6, 4
	bl       __construct_new_array
	stw      r3, 0(r30)
	mr       r3, r30
	stw      r31, 4(r30)
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
 * Address:	80235214
 * Size:	00000C
 */
Vs2D_TitleInfo::Info::Info(void)
{
	/*
	li       r0, 0
	stw      r0, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80235220
 * Size:	0000A8
 */
void Vs2D_TitleInfo::operator()(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	blt      lbl_8023524C
	lwz      r0, 4(r30)
	cmpw     r31, r0
	blt      lbl_80235264

lbl_8023524C:
	lis      r3, lbl_80483AB0@ha
	li       r4, 0x34
	addi     r3, r3, lbl_80483AB0@l
	addi     r5, r2, lbl_8051A3B8@sda21
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80235264:
	cmpwi    r31, 0
	li       r3, 0
	blt      lbl_80235280
	lwz      r0, 4(r30)
	cmpw     r31, r0
	bge      lbl_80235280
	li       r3, 1

lbl_80235280:
	clrlwi.  r0, r3, 0x18
	bne      lbl_802352A4
	lis      r3, lbl_80483AB0@ha
	lis      r5, lbl_80483AC4@ha
	addi     r3, r3, lbl_80483AB0@l
	li       r4, 0x36
	addi     r5, r5, lbl_80483AC4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802352A4:
	lwz      r3, 0(r30)
	slwi     r0, r31, 2
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
 * Address:	802352C8
 * Size:	000028
 */
Challenge2D_ResultInfo::Challenge2D_ResultInfo(void)
{
	/*
	li       r0, 0
	stb      r0, 0(r3)
	stb      r0, 0(r3)
	stw      r0, 8(r3)
	stw      r0, 0xc(r3)
	stw      r0, 0x10(r3)
	stw      r0, 0x14(r3)
	stw      r0, 0x1c(r3)
	stw      r0, 0x18(r3)
	blr
	*/
}
} // namespace Game
