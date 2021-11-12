#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_JSTFindCreature_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049A338
    lbl_8049A338:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x4A535446
        .4byte 0x696E6443
        .4byte 0x72656174
        .4byte 0x75726500
        .4byte 0x4A535446
        .4byte 0x696E6443
        .4byte 0x72656174
        .4byte 0x7572652E
        .4byte 0x63707000
        .4byte 0x4F472D44
        .4byte 0x524F4E0A
        .4byte 0x00000000
        .4byte 0x7468654F
        .4byte 0x72696D61
        .4byte 0x00000000
        .4byte 0x7468654C
        .4byte 0x6F756965
        .4byte 0x00000000
        .4byte 0x6F72696D
        .4byte 0x61416C69
        .4byte 0x76650000
        .asciz "P2Assert"
        .skip 3
        .4byte 0x6F72696D
        .4byte 0x61446561
        .4byte 0x64000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804EC358
    lbl_804EC358:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80516208
    lbl_80516208:
        .skip 0x4
    .global lbl_8051620C
    lbl_8051620C:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805206C8
    lbl_805206C8:
        .4byte 0x6F6E796F
        .4byte 0x6E000000
    .global lbl_805206D0
    lbl_805206D0:
        .4byte 0x70696B6D
        .4byte 0x696E0000
    .global lbl_805206D8
    lbl_805206D8:
        .4byte 0x74617267
        .4byte 0x65740000
    .global lbl_805206E0
    lbl_805206E0:
        .4byte 0x75666F00
    .global lbl_805206E4
    lbl_805206E4:
        .4byte 0x706F6400
    .global lbl_805206E8
    lbl_805206E8:
        .4byte 0x6F72696D
        .4byte 0x61000000
    .global lbl_805206F0
    lbl_805206F0:
        .4byte 0x706C6179
        .4byte 0x65720000
*/

namespace Game {

/*
 * --INFO--
 * Address:	804313B8
 * Size:	000450
 */
void P2JST::ObjectSystem::findCreature(const(char const*))
{
	/*
	stwu     r1, -0x130(r1)
	mflr     r0
	lis      r3, lbl_8049A338@ha
	stw      r0, 0x134(r1)
	li       r0, 0
	stmw     r25, 0x114(r1)
	addi     r30, r3, lbl_8049A338@l
	addi     r27, r4, 1
	addi     r26, r1, 8
	li       r29, 0x30
	li       r28, 0
	li       r25, 0
	stb      r0, 8(r1)

lbl_804313EC:
	lbz      r3, 0(r27)
	extsb.   r0, r3
	bne      lbl_80431404
	li       r0, 0
	stb      r0, 0(r26)
	b        lbl_80431474

lbl_80431404:
	extsb    r0, r3
	cmpwi    r0, 0x5f
	bne      lbl_80431420
	li       r0, 0
	lbz      r29, 1(r27)
	stb      r0, 0(r26)
	b        lbl_80431474

lbl_80431420:
	cmpwi    r0, 0x30
	blt      lbl_80431440
	cmpwi    r0, 0x39
	bgt      lbl_80431440
	li       r0, 0
	mr       r29, r3
	stb      r0, 0(r26)
	b        lbl_80431474

lbl_80431440:
	lbz      r0, 0(r27)
	addi     r25, r25, 1
	cmpwi    r25, 0xff
	addi     r27, r27, 1
	stb      r0, 0(r26)
	addi     r26, r26, 1
	blt      lbl_804313EC
	addi     r3, r30, 0x1c
	addi     r5, r30, 0x30
	li       r4, 0x75
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_804313EC

lbl_80431474:
	addi     r3, r1, 8
	addi     r4, r30, 0x3c
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_804314A8
	lwz      r3, naviMgr__4Game@sda21(r13)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r28, r3
	b        lbl_804317F0

lbl_804314A8:
	addi     r3, r1, 8
	addi     r4, r30, 0x48
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_804314DC
	lwz      r3, naviMgr__4Game@sda21(r13)
	li       r4, 1
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r28, r3
	b        lbl_804317F0

lbl_804314DC:
	addi     r3, r1, 8
	addi     r4, r30, 0x54
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_8043153C
	extsb    r3, r29
	li       r0, 0
	addic.   r25, r3, -49
	blt      lbl_8043150C
	cmpwi    r25, 1
	bgt      lbl_8043150C
	li       r0, 1

lbl_8043150C:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80431528
	addi     r3, r30, 0x1c
	addi     r5, r30, 0x60
	li       r4, 0x92
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80431528:
	lwz      r3, naviMgr__4Game@sda21(r13)
	mr       r4, r25
	bl       getAliveOrima__Q24Game7NaviMgrFi
	mr       r28, r3
	b        lbl_804317F0

lbl_8043153C:
	addi     r3, r1, 8
	addi     r4, r30, 0x6c
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_8043159C
	extsb    r3, r29
	li       r0, 0
	addic.   r25, r3, -49
	blt      lbl_8043156C
	cmpwi    r25, 1
	bgt      lbl_8043156C
	li       r0, 1

lbl_8043156C:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80431588
	addi     r3, r30, 0x1c
	addi     r5, r30, 0x60
	li       r4, 0x9e
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80431588:
	lwz      r3, naviMgr__4Game@sda21(r13)
	mr       r4, r25
	bl       getDeadOrima__Q24Game7NaviMgrFi
	mr       r28, r3
	b        lbl_804317F0

lbl_8043159C:
	addi     r3, r1, 8
	addi     r4, r2, lbl_805206C8@sda21
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_8043162C
	extsb    r3, r29
	cmpwi    r3, 0x30
	blt      lbl_804315CC
	cmpwi    r3, 0x32
	bgt      lbl_804315CC
	addi     r31, r3, -48
	b        lbl_804315FC

lbl_804315CC:
	extsb    r0, r29
	cmpwi    r0, 0x52
	bne      lbl_804315E0
	li       r31, 1
	b        lbl_804315FC

lbl_804315E0:
	cmpwi    r0, 0x42
	bne      lbl_804315F0
	li       r31, 0
	b        lbl_804315FC

lbl_804315F0:
	cmpwi    r0, 0x59
	bne      lbl_804315FC
	li       r31, 2

lbl_804315FC:
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	mr       r4, r31
	bl       getOnyon__Q34Game9ItemOnyon3MgrFi
	mr       r0, r3
	lwz      r3, playData__4Game@sda21(r13)
	mr       r28, r0
	mr       r4, r31
	bl       hasBootContainer__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_804317F0
	li       r28, 0
	b        lbl_804317F0

lbl_8043162C:
	addi     r3, r1, 8
	addi     r4, r2, lbl_805206D0@sda21
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_8043166C
	lwz      r3, moviePlayer__4Game@sda21(r13)
	lwz      r3, 0x194(r3)
	lwz      r12, 0(r3)
	mr       r28, r3
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_804317F0
	li       r28, 0
	b        lbl_804317F0

lbl_8043166C:
	addi     r3, r1, 8
	addi     r4, r2, lbl_805206D8@sda21
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_8043168C
	lwz      r3, moviePlayer__4Game@sda21(r13)
	lwz      r28, 0x194(r3)
	b        lbl_804317F0

lbl_8043168C:
	addi     r3, r1, 8
	addi     r4, r2, lbl_805206E0@sda21
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_804316AC
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	lwz      r28, 0xb0(r3)
	b        lbl_804317F0

lbl_804316AC:
	addi     r3, r1, 8
	addi     r4, r2, lbl_805206E4@sda21
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_804316CC
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	lwz      r28, 0xac(r3)
	b        lbl_804317F0

lbl_804316CC:
	addi     r3, r1, 8
	addi     r4, r2, lbl_805206E8@sda21
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_804316F0
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       getActiveOrima__Q24Game11MoviePlayerFv
	mr       r28, r3
	b        lbl_804317F0

lbl_804316F0:
	addi     r3, r1, 8
	addi     r4, r2, lbl_805206F0@sda21
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_80431714
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       getActiveOrima__Q24Game11MoviePlayerFv
	mr       r28, r3
	b        lbl_804317F0

lbl_80431714:
	addi     r3, r1, 8
	addi     r4, r2, lbl_805206E8@sda21
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_8043174C
	lwz      r3, naviMgr__4Game@sda21(r13)
	extsb    r4, r29
	addi     r4, r4, -48
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r28, r3
	b        lbl_804317F0

lbl_8043174C:
	addi     r3, r1, 8
	addi     r4, r2, lbl_805206C8@sda21
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_80431798
	extsb    r4, r29
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	addi     r25, r4, -48
	mr       r4, r25
	bl       getOnyon__Q34Game9ItemOnyon3MgrFi
	mr       r0, r3
	lwz      r3, playData__4Game@sda21(r13)
	mr       r28, r0
	mr       r4, r25
	bl       hasBootContainer__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_804317F0
	li       r28, 0
	b        lbl_804317F0

lbl_80431798:
	addi     r3, r1, 8
	addi     r4, r2, lbl_805206E0@sda21
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_804317D4
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	lwz      r28, 0xb0(r3)
	cmplwi   r28, 0
	bne      lbl_804317F0
	addi     r3, r30, 0x1c
	addi     r5, r30, 0x60
	li       r4, 0xe7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_804317F0

lbl_804317D4:
	addi     r3, r1, 8
	addi     r4, r2, lbl_805206E4@sda21
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_804317F0
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	lwz      r28, 0xac(r3)

lbl_804317F0:
	mr       r3, r28
	lmw      r25, 0x114(r1)
	lwz      r0, 0x134(r1)
	mtlr     r0
	addi     r1, r1, 0x130
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	80431808
 * Size:	000028
 */
void __sinit_JSTFindCreature_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804EC358@ha
	stw      r0, lbl_80516208@sda21(r13)
	stfsu    f0, lbl_804EC358@l(r3)
	stfs     f0, lbl_8051620C@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
