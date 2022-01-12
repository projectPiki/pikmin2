#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q210JADUtility10PrmSetBase
    __vt__Q210JADUtility10PrmSetBase:
        .4byte 0
        .4byte 0
        .4byte __dt__Q210JADUtility10PrmSetBaseFv
        .4byte appendAfter__Q210JADUtility10PrmSetBaseFv
        .4byte load__Q210JADUtility10PrmSetBaseFR20JSUMemoryInputStream
        .4byte
   afterRemovingChildButton__Q210JADUtility10PrmSetBaseFPQ210JADUtility10PrmSetBase
        .4byte
   afterRemovingThisButton__Q210JADUtility10PrmSetBaseFPQ210JADUtility10PrmSetBase
        .4byte getEraseLink__Q210JADUtility10PrmSetBaseFv
        .4byte afterGetFromFree__Q210JADUtility10PrmSetBaseFv
    .global __vt__Q210JADUtility10PrmSetTree
    __vt__Q210JADUtility10PrmSetTree:
        .4byte 0
        .4byte 0
        .4byte
   "beforeRemovingChild__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>FPQ210JADUtility10PrmSetBase"
        .4byte
   "beforeRemovingThis__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>FPQ210JADUtility10PrmSetBase"
        .4byte
   "afterRemovingChildButton__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>FPQ210JADUtility10PrmSetBase"
        .4byte
   "afterRemovingThisButton__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>FPQ210JADUtility10PrmSetBasePQ210JADUtility10PrmSetBase"
    .global "__vt__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>"
    "__vt__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>":
        .4byte 0
        .4byte 0
        .4byte
   "beforeRemovingChild__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>FPQ210JADUtility10PrmSetBase"
        .4byte
   "beforeRemovingThis__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>FPQ210JADUtility10PrmSetBase"
        .4byte
   "afterRemovingChildButton__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>FPQ210JADUtility10PrmSetBase"
        .4byte
   "afterRemovingThisButton__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>FPQ210JADUtility10PrmSetBasePQ210JADUtility10PrmSetBase"
        .4byte 0
*/

/*
 * --INFO--
 * Address:	800BA564
 * Size:	0000AC
 */
JADUtility::PrmSetBase::PrmSetBase(bool)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q210JADUtility10PrmSetBase@ha
	li       r0, 0
	addi     r4, r3, __vt__Q210JADUtility10PrmSetBase@l
	addi     r3, r30, 0x1c
	stw      r4, 0(r30)
	stb      r0, 0x18(r30)
	stb      r0, 0x19(r30)
	stb      r31, 0x1a(r30)
	bl       initiate__10JSUPtrListFv
	addi     r31, r30, 0x2c
	mr       r3, r31
	bl       initiate__10JSUPtrListFv
	mr       r4, r30
	addi     r3, r31, 0xc
	bl       __ct__10JSUPtrLinkFPv
	lis      r4, "__vt__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>"@ha
	lis      r3, __vt__Q210JADUtility10PrmSetTree@ha
	addi     r0, r4,
	"__vt__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>"@l li       r4,
	0 stw      r0, 0x1c(r31) addi     r0, r3, __vt__Q210JADUtility10PrmSetTree@l
	mr       r3, r30
	stw      r4, 0x20(r31)
	stw      r4, 0x24(r31)
	stw      r4, 0x28(r31)
	stw      r4, 0x2c(r31)
	stw      r4, 0x30(r31)
	stw      r4, 0x34(r31)
	stw      r0, 0x1c(r31)
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
 * Address:	........
 * Size:	000094
 */
JADUtility::PrmSetTree::~PrmSetTree(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void __dt__Q210JADUtility36NodeTree<JADUtility::PrmSetBase> Fv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void JSUTree<JADUtility::PrmSetBase>::~JSUTree()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSULink<JADUtility::PrmSetBase>::~JSULink()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSUList<JADUtility::PrmSetBase>::~JSUList()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSUList<JADUtility::PrmBase>::~JSUList()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void JADUtility::PrmSetBase::appendDummy(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800BA610
 * Size:	000098
 */
void JADUtility::PrmSetBase::load(JSUMemoryInputStream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r3, r30
	lwz      r12, 0(r30)
	lbz      r4, 0x18(r29)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r31, 0x1c(r29)
	b        lbl_800BA66C

lbl_800BA650:
	lwz      r3, 0(r31)
	mr       r4, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r31, 0xc(r31)

lbl_800BA66C:
	cmplwi   r31, 0
	bne      lbl_800BA650
	mr       r3, r30
	lbz      r4, 0x19(r29)
	lwz      r12, 0(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
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
 * Address:	800BA6A8
 * Size:	000040
 */
void JADUtility::PrmBase::load(JSUMemoryInputStream&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lbz      r0, 0x18(r3)
	cmplwi   r0, 0
	beq      lbl_800BA6D8
	mr       r3, r4
	mr       r4, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_800BA6D8:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800BA6E8
 * Size:	0000E8
 */
JADUtility::PrmSetBase::~PrmSetBase(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_800BA7B4
	lis      r3, __vt__Q210JADUtility10PrmSetBase@ha
	addi     r0, r3, __vt__Q210JADUtility10PrmSetBase@l
	stw      r0, 0(r30)
	b        lbl_800BA720

lbl_800BA718:
	addi     r3, r30, 0x1c
	bl       remove__10JSUPtrListFP10JSUPtrLink

lbl_800BA720:
	lwz      r4, 0x1c(r30)
	cmplwi   r4, 0
	bne      lbl_800BA718
	addic.   r0, r30, 0x2c
	beq      lbl_800BA784
	lis      r3, __vt__Q210JADUtility10PrmSetTree@ha
	addic.   r0, r30, 0x2c
	addi     r0, r3, __vt__Q210JADUtility10PrmSetTree@l
	stw      r0, 0x48(r30)
	beq      lbl_800BA784
	lis      r3, "__vt__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>"@ha
	addic.   r0, r30, 0x2c
	addi     r0, r3,
"__vt__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>"@l stw      r0,
0x48(r30) beq      lbl_800BA784 addic.   r0, r30, 0x38 beq      lbl_800BA770
	addi     r3, r30, 0x38
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_800BA770:
	addic.   r0, r30, 0x2c
	beq      lbl_800BA784
	addi     r3, r30, 0x2c
	li       r4, 0
	bl       __dt__10JSUPtrListFv

lbl_800BA784:
	addic.   r0, r30, 0x1c
	beq      lbl_800BA798
	addi     r3, r30, 0x1c
	li       r4, 0
	bl       __dt__10JSUPtrListFv

lbl_800BA798:
	mr       r3, r30
	li       r4, 0
	bl       __dt__11JKRDisposerFv
	extsh.   r0, r31
	ble      lbl_800BA7B4
	mr       r3, r30
	bl       __dl__FPv

lbl_800BA7B4:
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
 * Address:	800BA7D0
 * Size:	000004
 */
void JADUtility::PrmSetBase::appendAfter(void) { }

/*
 * --INFO--
 * Address:	800BA7D4
 * Size:	000004
 */
void JADUtility::PrmSetBase::afterRemovingChildButton(JADUtility::PrmSetBase*) { }

/*
 * --INFO--
 * Address:	800BA7D8
 * Size:	000004
 */
void JADUtility::PrmSetBase::afterRemovingThisButton(JADUtility::PrmSetBase*) { }

/*
 * --INFO--
 * Address:	800BA7DC
 * Size:	000008
 */
u32 JADUtility::PrmSetBase::getEraseLink(void) { return 0x0; }

/*
 * --INFO--
 * Address:	800BA7E4
 * Size:	000004
 */
void JADUtility::PrmSetBase::afterGetFromFree(void) { }

/*
 * --INFO--
 * Address:	800BA7E8
 * Size:	000004
 */
void beforeRemovingChild__Q210JADUtility36NodeTree<JADUtility::PrmSetBase> FPQ210JADUtility10PrmSetBase(void) { }

/*
 * --INFO--
 * Address:	800BA7EC
 * Size:	000004
 */
void beforeRemovingThis__Q210JADUtility36NodeTree<JADUtility::PrmSetBase> FPQ210JADUtility10PrmSetBase(void) { }

/*
 * --INFO--
 * Address:	800BA7F0
 * Size:	000004
 */
void afterRemovingChildButton__Q210JADUtility36NodeTree<JADUtility::PrmSetBase> FPQ210JADUtility10PrmSetBase(void) { }

/*
 * --INFO--
 * Address:	800BA7F4
 * Size:	000004
 */
void afterRemovingThisButton__Q210JADUtility36NodeTree<JADUtility::PrmSetBase> FPQ210JADUtility10PrmSetBasePQ210JADUtility10PrmSetBase(void)
{
}
