#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_804839F0
    lbl_804839F0:
        .4byte 0x67616D65
        .4byte 0x49636F6E
        .4byte 0x54657874
        .4byte 0x7572652E
        .4byte 0x63707000
    .global lbl_80483A04
    lbl_80483A04:
        .4byte 0x6661696C
        .4byte 0x65642074
        .4byte 0x6F206F70
        .4byte 0x656E205B
        .4byte 0x25735D0A
        .4byte 0x00000000
    .global lbl_80483A1C
    lbl_80483A1C:
        .asciz "P2Assert"
        .skip 3
    .global lbl_80483A28
    lbl_80483A28:
        .asciz "illegal index [%d] [0..%d)\n"

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game11IconTexture3Mgr
    __vt__Q34Game11IconTexture3Mgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game11IconTexture3MgrFv
    .global __vt__Q34Game11IconTexture6Loader
    __vt__Q34Game11IconTexture6Loader:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game11IconTexture6LoaderFv
*/

namespace Game {

/*
 * --INFO--
 * Address:	80233484
 * Size:	000048
 */
IconTexture::Loader::Loader(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q34Game11IconTexture6Loader@ha
	li       r0, 0
	addi     r4, r3, __vt__Q34Game11IconTexture6Loader@l
	mr       r3, r31
	stw      r4, 0(r31)
	stw      r0, 0x1c(r31)
	stw      r0, 0x18(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802334CC
 * Size:	00008C
 */
IconTexture::Loader::~Loader(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8023353C
	lis      r3, __vt__Q34Game11IconTexture6Loader@ha
	addi     r0, r3, __vt__Q34Game11IconTexture6Loader@l
	stw      r0, 0(r30)
	lwz      r0, 0x1c(r30)
	cmplwi   r0, 0
	beq      lbl_8023350C
	li       r0, 0
	stw      r0, 0x1c(r30)

lbl_8023350C:
	lwz      r0, 0x18(r30)
	cmplwi   r0, 0
	beq      lbl_80233520
	li       r0, 0
	stw      r0, 0x18(r30)

lbl_80233520:
	mr       r3, r30
	li       r4, 0
	bl       __dt__11JKRDisposerFv
	extsh.   r0, r31
	ble      lbl_8023353C
	mr       r3, r30
	bl       __dl__FPv

lbl_8023353C:
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
 * Address:	80233558
 * Size:	000084
 */
void IconTexture::Loader::loadResource(char*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r4
	stw      r30, 0x38(r1)
	mr       r30, r3
	addi     r3, r1, 8
	bl       __ct__Q212LoadResource3ArgFPCc
	lwz      r3, gLoadResourceMgr@sda21(r13)
	addi     r4, r1, 8
	bl       mountArchive__Q212LoadResource3MgrFRQ212LoadResource3Arg
	stw      r3, 0x18(r30)
	lwz      r3, 0x18(r30)
	cmplwi   r3, 0
	beq      lbl_802335A4
	lwz      r0, 0x34(r3)
	stw      r0, 0x1c(r30)
	b        lbl_802335C4

lbl_802335A4:
	lis      r3, lbl_804839F0@ha
	lis      r4, lbl_80483A04@ha
	addi     r5, r4, lbl_80483A04@l
	mr       r6, r31
	addi     r3, r3, lbl_804839F0@l
	li       r4, 0x2d
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802335C4:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802335DC
 * Size:	000030
 */
void IconTexture::Loader::getResTIMG(char*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x1c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
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
 * Address:	8023360C
 * Size:	000048
 */
IconTexture::Mgr::Mgr(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q34Game11IconTexture3Mgr@ha
	li       r0, 0
	addi     r4, r3, __vt__Q34Game11IconTexture3Mgr@l
	mr       r3, r31
	stw      r4, 0(r31)
	stw      r0, 0x18(r31)
	stw      r0, 0x1c(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80233654
 * Size:	00008C
 */
IconTexture::Mgr::~Mgr(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802336C4
	lis      r3, __vt__Q34Game11IconTexture3Mgr@ha
	addi     r0, r3, __vt__Q34Game11IconTexture3Mgr@l
	stw      r0, 0(r30)
	lwz      r3, 0x18(r30)
	cmplwi   r3, 0
	beq      lbl_802336A0
	lis      r4, __dt__10JUTTextureFv@ha
	addi     r4, r4, __dt__10JUTTextureFv@l
	bl       __destroy_new_array
	li       r0, 0
	stw      r0, 0x18(r30)

lbl_802336A0:
	li       r0, 0
	mr       r3, r30
	stw      r0, 0x1c(r30)
	li       r4, 0
	bl       __dt__11JKRDisposerFv
	extsh.   r0, r31
	ble      lbl_802336C4
	mr       r3, r30
	bl       __dl__FPv

lbl_802336C4:
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
 * Address:	802336E0
 * Size:	000084
 */
void IconTexture::Mgr::create(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bgt      lbl_8023371C
	lis      r3, lbl_804839F0@ha
	lis      r5, lbl_80483A1C@ha
	addi     r3, r3, lbl_804839F0@l
	li       r4, 0x4e
	addi     r5, r5, lbl_80483A1C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8023371C:
	slwi     r3, r31, 6
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__10JUTTextureFv@ha
	lis      r5, __dt__10JUTTextureFv@ha
	addi     r4, r4, __ct__10JUTTextureFv@l
	mr       r7, r31
	addi     r5, r5, __dt__10JUTTextureFv@l
	li       r6, 0x40
	bl       __construct_new_array
	stw      r3, 0x18(r30)
	stw      r31, 0x1c(r30)
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
 * Address:	80233764
 * Size:	00008C
 */
void IconTexture::Mgr::setTexture(int, ResTIMG*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	or.      r30, r4, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	blt      lbl_80233798
	lwz      r0, 0x1c(r29)
	cmpw     r30, r0
	blt      lbl_802337BC

lbl_80233798:
	lis      r3, lbl_804839F0@ha
	lis      r4, lbl_80483A28@ha
	addi     r5, r4, lbl_80483A28@l
	lwz      r7, 0x1c(r29)
	addi     r3, r3, lbl_804839F0@l
	mr       r6, r30
	li       r4, 0x56
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802337BC:
	lwz      r3, 0x18(r29)
	slwi     r0, r30, 6
	mr       r4, r31
	li       r5, 0
	add      r3, r3, r0
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
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
 * Address:	802337F0
 * Size:	00002C
 */
void IconTexture::Mgr::getTexture(int)
{
	/*
	cmpwi    r4, 0
	blt      lbl_80233804
	lwz      r0, 0x1c(r3)
	cmpw     r4, r0
	blt      lbl_8023380C

lbl_80233804:
	li       r3, 0
	blr

lbl_8023380C:
	lwz      r3, 0x18(r3)
	slwi     r0, r4, 6
	add      r3, r3, r0
	blr
	*/
}
} // namespace Game
