#include "kh/khUtil.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JSupport/JSUList.h"
#include "JSystem/JUT/JUTException.h"
#include "types.h"
#include "Vector3.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80498CB0
    lbl_80498CB0:
        .asciz "khUtil.cpp"
        .skip 1
    .global lbl_80498CBC
    lbl_80498CBC:
        .asciz "P2Assert"
        .skip 3
    .global lbl_80498CC8
    lbl_80498CC8:
        .asciz "khUtil.h"
        .skip 7

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32kh6Screen14khUtilColorAnm
    __vt__Q32kh6Screen14khUtilColorAnm:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32kh6Screen14khUtilColorAnmFv
        .4byte getChildCount__5CNodeFv
        .4byte update__Q32kh6Screen14khUtilColorAnmFv
        .4byte draw__Q29P2DScreen4NodeFR8GraphicsR14J2DGrafContext
        .4byte doInit__Q29P2DScreen4NodeFv
        .4byte do_update__Q32kh6Screen14khUtilColorAnmFv
    .global __vt__Q32kh6Screen14khUtilFadePane
    __vt__Q32kh6Screen14khUtilFadePane:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32kh6Screen14khUtilFadePaneFv
        .4byte getChildCount__5CNodeFv
        .4byte update__Q32kh6Screen14khUtilFadePaneFv
        .4byte draw__Q29P2DScreen4NodeFR8GraphicsR14J2DGrafContext
        .4byte doInit__Q29P2DScreen4NodeFv
        .4byte fadein_finish__Q32kh6Screen14khUtilFadePaneFv
        .4byte fadeout_finish__Q32kh6Screen14khUtilFadePaneFv
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520180
    lbl_80520180:
        .float 0.25
    .global lbl_80520184
    lbl_80520184:
        .float 1.0
    .global lbl_80520188
    lbl_80520188:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80520190
    lbl_80520190:
        .4byte 0x43300000
        .4byte 0x00000000
*/

namespace kh {
namespace Screen {

/*
 * --INFO--
 * Address:	8040B3F4
 * Size:	00004C
 */
u64 getSerialTagName(u64, int)
{
	/*
lis      r6, 0x66666667@ha
addi     r0, r6, 0x66666667@l
mulhw    r8, r0, r5
srawi    r0, r8, 2
srwi     r6, r0, 0x1f
add      r0, r0, r6
mulli    r0, r0, 0xa
subf     r7, r0, r5
srawi    r6, r7, 0x1f
srawi    r0, r8, 2
srwi     r5, r0, 0x1f
add      r0, r0, r5
slwi     r5, r0, 8
srawi    r0, r5, 0x1f
addc     r4, r4, r5
adde     r0, r3, r0
addc     r4, r7, r4
adde     r3, r6, r0
blr
	*/
}

/*
 * --INFO--
 * Address:	8040B440
 * Size:	000050
 */
void setTex(J2DScreen* screen, u64 tag, const ResTIMG* tex)
{
	reinterpret_cast<J2DPicture*>(screen->search(tag))->changeTexture(tex, '\0');
}

/*
 * --INFO--
 * Address:	8040B490
 * Size:	000050
 */
void setTex(J2DScreen* screen, u64 tag, const char* str)
{
	reinterpret_cast<J2DPicture*>(screen->search(tag))->changeTexture(str, '\0');
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r7
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
mr       r4, r31
li       r5, 0
lwz      r12, 0x114(r12)
mtctr    r12
bctrl
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	8040B4E0
 * Size:	000210
 */
void setMatAnm(J2DPane* pane, J2DAnmBase* anm)
{
	pane->setAnimation(anm);
	JSUTree<J2DPane>* tree = pane->getPaneTree();
	JSUTreeIterator<J2DPane> iterator(tree->getFirstChild());
	while (iterator != tree->getEndChild()) {
		setMatAnm(iterator.getObject(), anm);
		++iterator;
	}
	/*
stwu     r1, -0x30(r1)
mflr     r0
stw      r0, 0x34(r1)
stmw     r25, 0x14(r1)
mr       r25, r3
mr       r31, r4
lwz      r12, 0(r3)
lwz      r12, 0x5c(r12)
mtctr    r12
bctrl
lwz      r30, 0xdc(r25)
cmplwi   r30, 0
beq      lbl_8040B6D4
addi     r30, r30, -12
b        lbl_8040B6D4

lbl_8040B51C:
lwz      r27, 0xc(r30)
mr       r4, r31
mr       r3, r27
lwz      r12, 0(r27)
lwz      r12, 0x5c(r12)
mtctr    r12
bctrl
lwz      r29, 0xdc(r27)
cmplwi   r29, 0
beq      lbl_8040B6BC
addi     r29, r29, -12
b        lbl_8040B6BC

lbl_8040B54C:
lwz      r27, 0xc(r29)
mr       r4, r31
mr       r3, r27
lwz      r12, 0(r27)
lwz      r12, 0x5c(r12)
mtctr    r12
bctrl
lwz      r28, 0xdc(r27)
cmplwi   r28, 0
beq      lbl_8040B6A4
addi     r28, r28, -12
b        lbl_8040B6A4

lbl_8040B57C:
lwz      r27, 0xc(r28)
mr       r4, r31
mr       r3, r27
lwz      r12, 0(r27)
lwz      r12, 0x5c(r12)
mtctr    r12
bctrl
addi     r3, r27, 0xdc
bl       getFirstLink__10JSUPtrListCFv
cmplwi   r3, 0
beq      lbl_8040B5AC
addi     r3, r3, -12

lbl_8040B5AC:
mr       r25, r3
b        lbl_8040B68C

lbl_8040B5B4:
mr       r3, r25
bl       "getObject__17JSUTree<7J2DPane>CFv"
lwz      r12, 0(r3)
mr       r27, r3
mr       r4, r31
lwz      r12, 0x5c(r12)
mtctr    r12
bctrl
addi     r26, r27, 0xdc
mr       r3, r26
bl       "getFirstChild__17JSUTree<7J2DPane>CFv"
stw      r3, 0xc(r1)
b        lbl_8040B668

lbl_8040B5E8:
addi     r3, r1, 0xc
bl       "getObject__25JSUTreeIterator<7J2DPane>CFv"
lwz      r12, 0(r3)
mr       r27, r3
mr       r4, r31
lwz      r12, 0x5c(r12)
mtctr    r12
bctrl
mr       r3, r27
bl       getPaneTree__7J2DPaneFv
mr       r27, r3
bl       "getFirstChild__17JSUTree<7J2DPane>CFv"
mr       r4, r3
addi     r3, r1, 8
bl       "__ct__25JSUTreeIterator<7J2DPane>FP17JSUTree<7J2DPane>"
b        lbl_8040B640

lbl_8040B628:
addi     r3, r1, 8
bl       "getObject__25JSUTreeIterator<7J2DPane>CFv"
mr       r4, r31
bl       setMatAnm__Q22kh6ScreenFP7J2DPaneP10J2DAnmBase
addi     r3, r1, 8
bl       "__pp__25JSUTreeIterator<7J2DPane>Fv"

lbl_8040B640:
mr       r3, r27
bl       "getEndChild__17JSUTree<7J2DPane>CFv"
mr       r4, r3
addi     r3, r1, 8
bl       "__ne__25JSUTreeIterator<7J2DPane>CFPC17JSUTree<7J2DPane>"
clrlwi.  r0, r3, 0x18
bne      lbl_8040B628
lwz      r3, 0xc(r1)
bl       "getNextChild__17JSUTree<7J2DPane>CFv"
stw      r3, 0xc(r1)

lbl_8040B668:
mr       r3, r26
bl       "getEndChild__17JSUTree<7J2DPane>CFv"
lwz      r0, 0xc(r1)
cmplw    r0, r3
bne      lbl_8040B5E8
lwz      r25, 0x18(r25)
cmplwi   r25, 0
beq      lbl_8040B68C
addi     r25, r25, -12

lbl_8040B68C:
cmplwi   r25, 0
bne      lbl_8040B5B4
lwz      r28, 0x18(r28)
cmplwi   r28, 0
beq      lbl_8040B6A4
addi     r28, r28, -12

lbl_8040B6A4:
cmplwi   r28, 0
bne      lbl_8040B57C
lwz      r29, 0x18(r29)
cmplwi   r29, 0
beq      lbl_8040B6BC
addi     r29, r29, -12

lbl_8040B6BC:
cmplwi   r29, 0
bne      lbl_8040B54C
lwz      r30, 0x18(r30)
cmplwi   r30, 0
beq      lbl_8040B6D4
addi     r30, r30, -12

lbl_8040B6D4:
cmplwi   r30, 0
bne      lbl_8040B51C
lmw      r25, 0x14(r1)
lwz      r0, 0x34(r1)
mtlr     r0
addi     r1, r1, 0x30
blr
	*/
}

/*
 * --INFO--
 * Address:	8040B6F0
 * Size:	00021C
 */
void setInfAlpha(J2DPane* pane)
{
	pane->setInfluencedAlpha(true, false);
	JSUTree<J2DPane>* tree = pane->getPaneTree();
	JSUTreeIterator<J2DPane> iterator(tree->getFirstChild());
	while (iterator != tree->getEndChild()) {
		setInfAlpha(iterator.getObject());
		++iterator;
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	li       r4, 1
	li       r5, 0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r25, r3
	bl       setInfluencedAlpha__7J2DPaneFbb
	lwz      r31, 0xdc(r25)
	cmplwi   r31, 0
	beq      lbl_8040B8F0
	addi     r31, r31, -12
	b        lbl_8040B8F0

lbl_8040B724:
	lwz      r27, 0xc(r31)
	li       r4, 1
	li       r5, 0
	mr       r3, r27
	bl       setInfluencedAlpha__7J2DPaneFbb
	lwz      r30, 0xdc(r27)
	cmplwi   r30, 0
	beq      lbl_8040B8D8
	addi     r30, r30, -12
	b        lbl_8040B8D8

lbl_8040B74C:
	lwz      r27, 0xc(r30)
	li       r4, 1
	li       r5, 0
	mr       r3, r27
	bl       setInfluencedAlpha__7J2DPaneFbb
	lwz      r29, 0xdc(r27)
	cmplwi   r29, 0
	beq      lbl_8040B8C0
	addi     r29, r29, -12
	b        lbl_8040B8C0

lbl_8040B774:
	lwz      r27, 0xc(r29)
	li       r4, 1
	li       r5, 0
	mr       r3, r27
	bl       setInfluencedAlpha__7J2DPaneFbb
	lwz      r28, 0xdc(r27)
	cmplwi   r28, 0
	beq      lbl_8040B8A8
	addi     r28, r28, -12
	b        lbl_8040B8A8

lbl_8040B79C:
	lwz      r27, 0xc(r28)
	li       r4, 1
	li       r5, 0
	mr       r3, r27
	bl       setInfluencedAlpha__7J2DPaneFbb
	addi     r3, r27, 0xdc
	bl       getFirstLink__10JSUPtrListCFv
	cmplwi   r3, 0
	beq      lbl_8040B7C4
	addi     r3, r3, -12

lbl_8040B7C4:
	mr       r25, r3
	b        lbl_8040B890

lbl_8040B7CC:
	mr       r3, r25
	bl       "getObject__17JSUTree<7J2DPane>CFv"
	mr       r27, r3
	li       r4, 1
	li       r5, 0
	bl       setInfluencedAlpha__7J2DPaneFbb
	addi     r26, r27, 0xdc
	mr       r3, r26
	bl       "getFirstChild__17JSUTree<7J2DPane>CFv"
	stw      r3, 0xc(r1)
	b        lbl_8040B86C

lbl_8040B7F8:
	addi     r3, r1, 0xc
	bl       "getObject__25JSUTreeIterator<7J2DPane>CFv"
	li       r4, 1
	mr       r27, r3
	li       r5, 0
	bl       setInfluencedAlpha__7J2DPaneFbb
	mr       r3, r27
	bl       getPaneTree__7J2DPaneFv
	mr       r27, r3
	bl       "getFirstChild__17JSUTree<7J2DPane>CFv"
	mr       r4, r3
	addi     r3, r1, 8
	bl       "__ct__25JSUTreeIterator<7J2DPane>FP17JSUTree<7J2DPane>"
	b        lbl_8040B844

lbl_8040B830:
	addi     r3, r1, 8
	bl       "getObject__25JSUTreeIterator<7J2DPane>CFv"
	bl       setInfAlpha__Q22kh6ScreenFP7J2DPane
	addi     r3, r1, 8
	bl       "__pp__25JSUTreeIterator<7J2DPane>Fv"

lbl_8040B844:
	mr       r3, r27
	bl       "getEndChild__17JSUTree<7J2DPane>CFv"
	mr       r4, r3
	addi     r3, r1, 8
	bl       "__ne__25JSUTreeIterator<7J2DPane>CFPC17JSUTree<7J2DPane>"
	clrlwi.  r0, r3, 0x18
	bne      lbl_8040B830
	lwz      r3, 0xc(r1)
	bl       "getNextChild__17JSUTree<7J2DPane>CFv"
	stw      r3, 0xc(r1)

lbl_8040B86C:
	mr       r3, r26
	bl       "getEndChild__17JSUTree<7J2DPane>CFv"
	lwz      r0, 0xc(r1)
	cmplw    r0, r3
	bne      lbl_8040B7F8
	lwz      r25, 0x18(r25)
	cmplwi   r25, 0
	beq      lbl_8040B890
	addi     r25, r25, -12

lbl_8040B890:
	cmplwi   r25, 0
	bne      lbl_8040B7CC
	lwz      r28, 0x18(r28)
	cmplwi   r28, 0
	beq      lbl_8040B8A8
	addi     r28, r28, -12

lbl_8040B8A8:
	cmplwi   r28, 0
	bne      lbl_8040B79C
	lwz      r29, 0x18(r29)
	cmplwi   r29, 0
	beq      lbl_8040B8C0
	addi     r29, r29, -12

lbl_8040B8C0:
	cmplwi   r29, 0
	bne      lbl_8040B774
	lwz      r30, 0x18(r30)
	cmplwi   r30, 0
	beq      lbl_8040B8D8
	addi     r30, r30, -12

lbl_8040B8D8:
	cmplwi   r30, 0
	bne      lbl_8040B74C
	lwz      r31, 0x18(r31)
	cmplwi   r31, 0
	beq      lbl_8040B8F0
	addi     r31, r31, -12

lbl_8040B8F0:
	cmplwi   r31, 0
	bne      lbl_8040B724
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	    */
}

/*
 * --INFO--
 * Address:	8040B90C
 * Size:	0000EC
 */
float getPaneCenterX(J2DPane* pane)
{
	return (pane->getGlbVtx(POS_BOTTOM_RIGHT).x + pane->getGlbVtx(POS_BOTTOM_LEFT).x + pane->getGlbVtx(POS_TOP_LEFT).x
	        + pane->getGlbVtx(POS_TOP_RIGHT).x)
	     * 0.25f;
	/*
stwu     r1, -0x70(r1)
mflr     r0
li       r5, 0
stw      r0, 0x74(r1)
stw      r31, 0x6c(r1)
mr       r31, r3
mr       r4, r31
addi     r3, r1, 0x2c
bl       getGlbVtx__7J2DPaneCFUc
lwz      r5, 0x2c(r1)
mr       r4, r31
lwz      r6, 0x30(r1)
addi     r3, r1, 0x20
lwz      r0, 0x34(r1)
stw      r5, 0x5c(r1)
li       r5, 1
stw      r6, 0x60(r1)
stw      r0, 0x64(r1)
bl       getGlbVtx__7J2DPaneCFUc
lwz      r5, 0x20(r1)
mr       r4, r31
lwz      r6, 0x24(r1)
addi     r3, r1, 0x14
lwz      r0, 0x28(r1)
stw      r5, 0x50(r1)
li       r5, 2
stw      r6, 0x54(r1)
stw      r0, 0x58(r1)
bl       getGlbVtx__7J2DPaneCFUc
lwz      r5, 0x14(r1)
mr       r4, r31
lwz      r6, 0x18(r1)
addi     r3, r1, 8
lwz      r0, 0x1c(r1)
stw      r5, 0x44(r1)
li       r5, 3
stw      r6, 0x48(r1)
stw      r0, 0x4c(r1)
bl       getGlbVtx__7J2DPaneCFUc
lfs      f1, 0x5c(r1)
lfs      f0, 0x50(r1)
lwz      r0, 8(r1)
fadds    f0, f1, f0
lfs      f1, 0x44(r1)
stw      r0, 0x38(r1)
lwz      r3, 0xc(r1)
fadds    f0, f1, f0
lfs      f1, 0x38(r1)
lwz      r0, 0x10(r1)
lfs      f2, lbl_80520180@sda21(r2)
fadds    f0, f1, f0
stw      r3, 0x3c(r1)
stw      r0, 0x40(r1)
fmuls    f1, f2, f0
lwz      r31, 0x6c(r1)
lwz      r0, 0x74(r1)
mtlr     r0
addi     r1, r1, 0x70
blr
	*/
}

/*
 * --INFO--
 * Address:	8040B9F8
 * Size:	0000EC
 */
float getPaneCenterY(J2DPane* pane)
{
	JGeometry::TVec3f br = pane->getGlbVtx(0);
	JGeometry::TVec3f bl = pane->getGlbVtx(1);
	JGeometry::TVec3f tl = pane->getGlbVtx(2);
	JGeometry::TVec3f tr = pane->getGlbVtx(3);
	return (br.y + bl.y + tl.y + tr.y) * 0.25f;
	// return (pane->getGlbVtx(POS_BOTTOM_RIGHT).y
	// + pane->getGlbVtx(POS_BOTTOM_LEFT).y
	// + pane->getGlbVtx(POS_TOP_LEFT).y
	// + pane->getGlbVtx(POS_TOP_RIGHT).y) * 0.25f;
	/*
stwu     r1, -0x70(r1)
mflr     r0
li       r5, 0
stw      r0, 0x74(r1)
stw      r31, 0x6c(r1)
mr       r31, r3
mr       r4, r31
addi     r3, r1, 0x2c
bl       getGlbVtx__7J2DPaneCFUc
lwz      r5, 0x2c(r1)
mr       r4, r31
lwz      r6, 0x30(r1)
addi     r3, r1, 0x20
lwz      r0, 0x34(r1)
stw      r5, 0x5c(r1)
li       r5, 1
stw      r6, 0x60(r1)
stw      r0, 0x64(r1)
bl       getGlbVtx__7J2DPaneCFUc
lwz      r5, 0x20(r1)
mr       r4, r31
lwz      r6, 0x24(r1)
addi     r3, r1, 0x14
lwz      r0, 0x28(r1)
stw      r5, 0x50(r1)
li       r5, 2
stw      r6, 0x54(r1)
stw      r0, 0x58(r1)
bl       getGlbVtx__7J2DPaneCFUc
lwz      r5, 0x14(r1)
mr       r4, r31
lwz      r6, 0x18(r1)
addi     r3, r1, 8
lwz      r0, 0x1c(r1)
stw      r5, 0x44(r1)
li       r5, 3
stw      r6, 0x48(r1)
stw      r0, 0x4c(r1)
bl       getGlbVtx__7J2DPaneCFUc
lfs      f1, 0x60(r1)
lfs      f0, 0x54(r1)
lwz      r0, 0xc(r1)
fadds    f0, f1, f0
lfs      f1, 0x48(r1)
stw      r0, 0x3c(r1)
lwz      r3, 8(r1)
fadds    f0, f1, f0
lfs      f1, 0x3c(r1)
lwz      r0, 0x10(r1)
lfs      f2, lbl_80520180@sda21(r2)
fadds    f0, f1, f0
stw      r3, 0x38(r1)
stw      r0, 0x40(r1)
fmuls    f1, f2, f0
lwz      r31, 0x6c(r1)
lwz      r0, 0x74(r1)
mtlr     r0
addi     r1, r1, 0x70
blr
	*/
}

/*
 * --INFO--
 * Address:	8040BAE4
 * Size:	0000A4
 */
khUtilFadePane* khUtilFadePane::create(P2DScreen::Mgr* mgr, u64 tag, u8 c)
{
	if (mgr == nullptr) {
		return nullptr;
	}
	khUtilFadePane* pane = new khUtilFadePane(c);
	P2ASSERTLINE(146, pane != nullptr);
	pane->add(mgr->addCallBack(tag, pane));
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr.       r27, r3
	  mr        r29, r5
	  mr        r28, r6
	  mr        r30, r7
	  bne-      .loc_0x2C
	  li        r3, 0
	  b         .loc_0x90

	.loc_0x2C:
	  li        r3, 0x30
	  bl        -0x3E7C70
	  mr.       r31, r3
	  beq-      .loc_0x48
	  mr        r4, r30
	  bl        .loc_0xA4
	  mr        r31, r3

	.loc_0x48:
	  cmplwi    r31, 0
	  bne-      .loc_0x6C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x7350
	  li        r4, 0x92
	  subi      r5, r5, 0x7344
	  crclr     6, 0x6
	  bl        -0x3E150C

	.loc_0x6C:
	  mr        r3, r27
	  mr        r6, r28
	  mr        r5, r29
	  mr        r7, r31
	  bl        0x28FC4
	  mr        r4, r3
	  mr        r3, r31
	  bl        0x1AC
	  mr        r3, r31

	.loc_0x90:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0xA4:
	*/
}

/*
 * --INFO--
 * Address:	8040BB88
 * Size:	000088
 */
khUtilFadePane::khUtilFadePane(u8 c)
    : CallBackNode()
    , m_paneNode()
    , _28(0)
    , m_fadePaneAlpha('\0')
    , _2D(c)
{

	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
mr       r30, r3
bl       __ct__5CNodeFv
lis      r3, __vt__Q29P2DScreen4Node@ha
lis      r5, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r3, __vt__Q29P2DScreen4Node@l
lis      r4, __vt__Q32kh6Screen14khUtilFadePane@ha
stw      r0, 0(r30)
li       r6, 0
lis      r3, __vt__Q42kh6Screen14khUtilFadePane10khPaneNode@ha
addi     r5, r5, __vt__Q29P2DScreen12CallBackNode@l
stw      r6, 0x18(r30)
addi     r4, r4, __vt__Q32kh6Screen14khUtilFadePane@l
addi     r0, r3, __vt__Q42kh6Screen14khUtilFadePane10khPaneNode@l
mr       r3, r30
stw      r5, 0(r30)
stw      r4, 0(r30)
stw      r0, 0x1c(r30)
stw      r6, 0x20(r30)
stw      r6, 0x24(r30)
stw      r6, 0x28(r30)
stb      r6, 0x2c(r30)
stb      r31, 0x2d(r30)
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
 * Address:	8040BC10
 * Size:	000104
 */
void khUtilFadePane::update()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
stw      r30, 8(r1)
mr       r30, r3
lwz      r0, 0x28(r3)
cmpwi    r0, 1
beq      lbl_8040BCD0
bge      lbl_8040BC44
cmpwi    r0, 0
bge      lbl_8040BC50
b        lbl_8040BCD0

lbl_8040BC44:
cmpwi    r0, 3
bge      lbl_8040BCD0
b        lbl_8040BC94

lbl_8040BC50:
lbz      r5, 0x2d(r30)
lbz      r4, 0x2c(r30)
subfic   r0, r5, 0xff
cmpw     r4, r0
ble      lbl_8040BC88
li       r4, 0xff
li       r0, 1
stb      r4, 0x2c(r30)
stw      r0, 0x28(r30)
lwz      r12, 0(r3)
lwz      r12, 0x1c(r12)
mtctr    r12
bctrl
b        lbl_8040BCD0

lbl_8040BC88:
add      r0, r4, r5
stb      r0, 0x2c(r30)
b        lbl_8040BCD0

lbl_8040BC94:
lbz      r0, 0x2c(r30)
lbz      r4, 0x2d(r30)
cmplw    r0, r4
bge      lbl_8040BCC8
li       r4, 0
li       r0, 3
stb      r4, 0x2c(r30)
stw      r0, 0x28(r30)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
b        lbl_8040BCD0

lbl_8040BCC8:
subf     r0, r4, r0
stb      r0, 0x2c(r30)

lbl_8040BCD0:
lwz      r31, 0x24(r30)
b        lbl_8040BCF4

lbl_8040BCD8:
lwz      r3, 4(r31)
lbz      r4, 0x2c(r30)
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
lwz      r31, 8(r31)

lbl_8040BCF4:
cmplwi   r31, 0
bne      lbl_8040BCD8
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
 * Address:	8040BD14
 * Size:	000004
 */
void khUtilFadePane::fadeout_finish() { }

/*
 * --INFO--
 * Address:	8040BD18
 * Size:	0000B8
 */
void khUtilFadePane::add(J2DPane* pane)
{
	bool result = false;
	if (pane) {
		khPaneNode* node        = &m_paneNode;
		khPaneNode* nonnullNode = nullptr;
		do {
			nonnullNode = node;
			node        = nonnullNode->m_next;
		} while (node != nullptr);
		khPaneNode* newNode = new khPaneNode();
		// TODO: Bleh
	}
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
stw      r30, 0x18(r1)
li       r30, 0
stw      r29, 0x14(r1)
or.      r29, r4, r4
beq      lbl_8040BDB0
addi     r30, r3, 0x1c
b        lbl_8040BD48

lbl_8040BD44:
mr       r30, r0

lbl_8040BD48:
lwz      r0, 8(r30)
cmplwi   r0, 0
bne      lbl_8040BD44
li       r3, 0xc
bl       __nw__FUl
or.      r31, r3, r3
beq      lbl_8040BD7C
lis      r3, __vt__Q42kh6Screen14khUtilFadePane10khPaneNode@ha
li       r0, 0
addi     r3, r3, __vt__Q42kh6Screen14khUtilFadePane10khPaneNode@l
stw      r3, 0(r31)
stw      r29, 4(r31)
stw      r0, 8(r31)

lbl_8040BD7C:
cmplwi   r31, 0
bne      lbl_8040BDA0
lis      r3, lbl_80498CC8@ha
lis      r5, lbl_80498CBC@ha
addi     r3, r3, lbl_80498CC8@l
li       r4, 0x40
addi     r5, r5, lbl_80498CBC@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8040BDA0:
stw      r31, 8(r30)
mr       r3, r29
li       r30, 1
bl       setInfAlpha__Q22kh6ScreenFP7J2DPane

lbl_8040BDB0:
lwz      r0, 0x24(r1)
mr       r3, r30
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
 * Address:	8040BDD0
 * Size:	000020
 */
void khUtilFadePane::fadein()
{
	/*
lwz      r0, 0x28(r3)
cmpwi    r0, 2
beq      lbl_8040BDE4
cmpwi    r0, 3
bnelr

lbl_8040BDE4:
li       r0, 0
stw      r0, 0x28(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	8040BDF0
 * Size:	000020
 */
void khUtilFadePane::fadeout()
{
	/*
lwz      r0, 0x28(r3)
cmpwi    r0, 0
beq      lbl_8040BE04
cmpwi    r0, 1
bnelr

lbl_8040BE04:
li       r0, 2
stw      r0, 0x28(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	8040BE10
 * Size:	000060
 */
void khUtilFadePane::set_init_alpha(u8)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
stw      r30, 8(r1)
mr       r30, r3
stb      r4, 0x2c(r3)
lwz      r31, 0x24(r3)
b        lbl_8040BE50

lbl_8040BE34:
lwz      r3, 4(r31)
lbz      r4, 0x2c(r30)
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
lwz      r31, 8(r31)

lbl_8040BE50:
cmplwi   r31, 0
bne      lbl_8040BE34
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
 * Address:	8040BE70
 * Size:	000158
 */
khUtilColorAnm::khUtilColorAnm(P2DScreen::Mgr*, u64, int, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r28, r3
	  mr        r0, r28
	  mr        r29, r4
	  mr        r31, r5
	  mr        r30, r6
	  mr        r26, r7
	  mr        r27, r8
	  mr        r25, r0
	  bl        0x54F0
	  lis       r3, 0x804D
	  lis       r4, 0x804D
	  addi      r0, r3, 0x7B0C
	  lis       r3, 0x804F
	  stw       r0, 0x0(r25)
	  li        r5, 0
	  addi      r4, r4, 0x7F2C
	  subi      r3, r3, 0x4E48
	  stw       r5, 0x18(r25)
	  li        r0, -0x1
	  stw       r4, 0x0(r25)
	  stw       r3, 0x0(r28)
	  stw       r0, 0x20(r28)
	  stw       r0, 0x24(r28)
	  stw       r26, 0x28(r28)
	  stw       r27, 0x2C(r28)
	  stw       r5, 0x30(r28)
	  stb       r5, 0x20(r28)
	  stb       r5, 0x21(r28)
	  stb       r5, 0x22(r28)
	  stb       r5, 0x23(r28)
	  lwz       r27, 0x28(r28)
	  rlwinm    r3,r27,2,0,29
	  addi      r3, r3, 0x10
	  bl        -0x3E7F58
	  lis       r4, 0x8004
	  mr        r7, r27
	  subi      r4, r4, 0x646C
	  li        r5, 0
	  li        r6, 0x4
	  bl        -0x34A52C
	  li        r8, 0
	  stw       r3, 0x1C(r28)
	  mr        r6, r8
	  li        r9, 0
	  mr        r5, r8
	  mr        r4, r8
	  mr        r3, r8
	  b         .loc_0xF0

	.loc_0xD0:
	  lwz       r0, 0x1C(r28)
	  addi      r9, r9, 0x1
	  add       r7, r0, r8
	  addi      r8, r8, 0x4
	  stb       r6, 0x0(r7)
	  stb       r5, 0x1(r7)
	  stb       r4, 0x2(r7)
	  stb       r3, 0x3(r7)

	.loc_0xF0:
	  lwz       r0, 0x28(r28)
	  cmpw      r9, r0
	  blt+      .loc_0xD0
	  lbz       r3, 0x20(r28)
	  cmplwi    r29, 0
	  li        r0, 0
	  stb       r3, 0x24(r28)
	  lbz       r3, 0x21(r28)
	  stb       r3, 0x25(r28)
	  lbz       r3, 0x22(r28)
	  stb       r3, 0x26(r28)
	  lbz       r3, 0x23(r28)
	  stb       r3, 0x27(r28)
	  stb       r0, 0x34(r28)
	  beq-      .loc_0x140
	  mr        r3, r29
	  mr        r6, r30
	  mr        r5, r31
	  mr        r7, r28
	  bl        0x28B78

	.loc_0x140:
	  mr        r3, r28
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8040BFC8
 * Size:	00021C
 */
void khUtilColorAnm::update()
{
	/*
stwu     r1, -0x90(r1)
mflr     r0
stw      r0, 0x94(r1)
lbz      r0, 0x34(r3)
cmplwi   r0, 0
beq      lbl_8040C19C
lwz      r4, 0x28(r3)
lis      r6, 0x4330
lwz      r5, 0x30(r3)
addi     r4, r4, -1
lwz      r0, 0x2c(r3)
mullw    r4, r5, r4
stw      r6, 0x10(r1)
xoris    r0, r0, 0x8000
lfd      f3, lbl_80520188@sda21(r2)
stw      r0, 0x1c(r1)
lwz      r8, 0x1c(r3)
xoris    r0, r4, 0x8000
stw      r6, 0x18(r1)
lfd      f6, lbl_80520190@sda21(r2)
stw      r0, 0x14(r1)
lfd      f0, 0x18(r1)
lfd      f1, 0x10(r1)
fsubs    f0, f0, f3
stw      r6, 0x28(r1)
fsubs    f2, f1, f3
lfs      f1, lbl_80520184@sda21(r2)
stw      r6, 0x38(r1)
fdivs    f8, f2, f0
stw      r6, 0x50(r1)
stw      r6, 0x30(r1)
stw      r6, 0x68(r1)
stw      r6, 0x48(r1)
stw      r6, 0x60(r1)
fctiwz   f0, f8
stfd     f0, 0x20(r1)
lwz      r7, 0x24(r1)
addi     r0, r7, 1
slwi     r5, r7, 2
slwi     r4, r0, 2
xoris    r0, r7, 0x8000
lwzx     r4, r8, r4
stw      r0, 0x2c(r1)
lwzx     r0, r8, r5
stw      r4, 8(r1)
lfd      f0, 0x28(r1)
stw      r0, 0xc(r1)
lbz      r4, 8(r1)
fsubs    f0, f0, f3
lbz      r0, 9(r1)
stw      r4, 0x3c(r1)
lbz      r4, 0xc(r1)
fsubs    f8, f8, f0
stw      r0, 0x54(r1)
lfd      f0, 0x38(r1)
lbz      r0, 0xa(r1)
fsubs    f7, f1, f8
stw      r4, 0x34(r1)
fsubs    f1, f0, f6
lbz      r4, 0xd(r1)
stw      r0, 0x6c(r1)
lfd      f0, 0x50(r1)
fmuls    f4, f1, f8
stw      r4, 0x4c(r1)
lfd      f2, 0x30(r1)
fsubs    f1, f0, f6
lbz      r0, 0xe(r1)
lfd      f0, 0x68(r1)
fsubs    f5, f2, f6
stw      r0, 0x64(r1)
fmuls    f2, f1, f8
lfd      f3, 0x48(r1)
fsubs    f0, f0, f6
lfd      f1, 0x60(r1)
fsubs    f3, f3, f6
fmadds   f4, f5, f7, f4
fsubs    f1, f1, f6
fmuls    f0, f0, f8
fmadds   f2, f3, f7, f2
fctiwz   f3, f4
fmadds   f0, f1, f7, f0
fctiwz   f1, f2
stfd     f3, 0x40(r1)
fctiwz   f0, f0
stfd     f1, 0x58(r1)
lwz      r0, 0x44(r1)
stfd     f0, 0x70(r1)
lwz      r4, 0x5c(r1)
stb      r0, 0x20(r3)
lwz      r0, 0x74(r1)
stb      r4, 0x21(r3)
stb      r0, 0x22(r3)
lbz      r0, 0xb(r1)
lbz      r4, 0xf(r1)
stw      r0, 0x84(r1)
stw      r6, 0x80(r1)
lfd      f0, 0x80(r1)
stw      r4, 0x7c(r1)
fsubs    f0, f0, f6
stw      r6, 0x78(r1)
lfd      f1, 0x78(r1)
fmuls    f0, f0, f8
fsubs    f1, f1, f6
fmadds   f0, f1, f7, f0
fctiwz   f0, f0
stfd     f0, 0x88(r1)
lwz      r0, 0x8c(r1)
stb      r0, 0x23(r3)
lwz      r4, 0x30(r3)
addi     r4, r4, 1
stw      r4, 0x30(r3)
lwz      r0, 0x2c(r3)
cmpw     r4, r0
blt      lbl_8040C1C4
li       r0, 0
stw      r0, 0x30(r3)
b        lbl_8040C1C4

lbl_8040C19C:
lbz      r4, 0x24(r3)
li       r0, 0
stb      r4, 0x20(r3)
lbz      r4, 0x25(r3)
stb      r4, 0x21(r3)
lbz      r4, 0x26(r3)
stb      r4, 0x22(r3)
lbz      r4, 0x27(r3)
stb      r4, 0x23(r3)
stw      r0, 0x30(r3)

lbl_8040C1C4:
lwz      r12, 0(r3)
lwz      r12, 0x1c(r12)
mtctr    r12
bctrl
lwz      r0, 0x94(r1)
mtlr     r0
addi     r1, r1, 0x90
blr
	*/
}

/*
 * --INFO--
 * Address:	8040C1E4
 * Size:	000004
 */
void khUtilColorAnm::do_update() { }
} // namespace Screen
} // namespace kh
