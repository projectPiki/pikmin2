#include "ebi/E2DGraph.h"
#include "ebi/Utility.h"
#include "JSystem/J2D/J2DPane.h"
#include "JSystem/JUT/JUTException.h"
#include "P2DScreen.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80496428
    lbl_80496428:
        .4byte 0x65626932
        .4byte 0x44477261
        .4byte 0x70682E63
        .4byte 0x70700000
    .global lbl_80496438
    lbl_80496438:
        .asciz "P2Assert"
        .skip 3

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global kFadeTime__Q23ebi8E2DFader
    kFadeTime__Q23ebi8E2DFader:
        .float 0.5
    .global lbl_8051F9FC
    lbl_8051F9FC:
        .float 0.5
*/

namespace ebi {

/*
 * --INFO--
 * Address:	803CA358
 * Size:	00008C
 */
J2DPane* E2DScreen_searchAssert(J2DScreen* screen, u64 tag)
{
	char name[16];
	J2DPane* result = screen->search(tag);
	P2ASSERTLINE(20, (result != nullptr || (EUTDebug_Tag64ToName(tag, name), result != nullptr)));
	return result;
}

/*
 * --INFO--
 * Address:	803CA3E4
 * Size:	0001D8
 */
void E2DPane_setTreeInfluencedAlpha(J2DPane* pane, bool p2)
{
	// pane->setInfluencedAlpha(p2, false);
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x34(r1)
	stmw     r24, 0x10(r1)
	mr       r24, r3
	mr       r31, r4
	bl       setInfluencedAlpha__7J2DPaneFbb
	lwz      r30, 0xdc(r24)
	cmplwi   r30, 0
	beq      lbl_803CA5A0
	addi     r30, r30, -12
	b        lbl_803CA5A0

lbl_803CA418:
	lwz      r27, 0xc(r30)
	mr       r4, r31
	li       r5, 0
	mr       r3, r27
	bl       setInfluencedAlpha__7J2DPaneFbb
	lwz      r29, 0xdc(r27)
	cmplwi   r29, 0
	beq      lbl_803CA588
	addi     r29, r29, -12
	b        lbl_803CA588

lbl_803CA440:
	lwz      r27, 0xc(r29)
	mr       r4, r31
	li       r5, 0
	mr       r3, r27
	bl       setInfluencedAlpha__7J2DPaneFbb
	lwz      r28, 0xdc(r27)
	cmplwi   r28, 0
	beq      lbl_803CA570
	addi     r28, r28, -12
	b        lbl_803CA570

lbl_803CA468:
	lwz      r27, 0xc(r28)
	mr       r4, r31
	li       r5, 0
	mr       r3, r27
	bl       setInfluencedAlpha__7J2DPaneFbb
	addi     r3, r27, 0xdc
	bl       getFirstLink__10JSUPtrListCFv
	cmplwi   r3, 0
	beq      lbl_803CA490
	addi     r3, r3, -12

lbl_803CA490:
	mr       r25, r3
	b        lbl_803CA558

lbl_803CA498:
	lwz      r27, 0xc(r25)
	mr       r4, r31
	li       r5, 0
	mr       r3, r27
	bl       setInfluencedAlpha__7J2DPaneFbb
	addi     r26, r27, 0xdc
	mr       r3, r26
	bl       "getFirstChild__17JSUTree<7J2DPane>CFv"
	mr       r24, r3
	b        lbl_803CA538

lbl_803CA4C0:
	mr       r3, r24
	bl       "getObject__17JSUTree<7J2DPane>CFv"
	mr       r4, r31
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
	b        lbl_803CA510

lbl_803CA4F8:
	addi     r3, r1, 8
	bl       "getObject__25JSUTreeIterator<7J2DPane>CFv"
	mr       r4, r31
	bl       E2DPane_setTreeInfluencedAlpha__3ebiFP7J2DPaneb
	addi     r3, r1, 8
	bl       "__pp__25JSUTreeIterator<7J2DPane>Fv"

lbl_803CA510:
	mr       r3, r27
	bl       "getEndChild__17JSUTree<7J2DPane>CFv"
	mr       r4, r3
	addi     r3, r1, 8
	bl       "__ne__25JSUTreeIterator<7J2DPane>CFPC17JSUTree<7J2DPane>"
	clrlwi.  r0, r3, 0x18
	bne      lbl_803CA4F8
	mr       r3, r24
	bl       "getNextChild__17JSUTree<7J2DPane>CFv"
	mr       r24, r3

lbl_803CA538:
	mr       r3, r26
	bl       "getEndChild__17JSUTree<7J2DPane>CFv"
	cmplw    r24, r3
	bne      lbl_803CA4C0
	lwz      r25, 0x18(r25)
	cmplwi   r25, 0
	beq      lbl_803CA558
	addi     r25, r25, -12

lbl_803CA558:
	cmplwi   r25, 0
	bne      lbl_803CA498
	lwz      r28, 0x18(r28)
	cmplwi   r28, 0
	beq      lbl_803CA570
	addi     r28, r28, -12

lbl_803CA570:
	cmplwi   r28, 0
	bne      lbl_803CA468
	lwz      r29, 0x18(r29)
	cmplwi   r29, 0
	beq      lbl_803CA588
	addi     r29, r29, -12

lbl_803CA588:
	cmplwi   r29, 0
	bne      lbl_803CA440
	lwz      r30, 0x18(r30)
	cmplwi   r30, 0
	beq      lbl_803CA5A0
	addi     r30, r30, -12

lbl_803CA5A0:
	cmplwi   r30, 0
	bne      lbl_803CA418
	lmw      r24, 0x10(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	803CA5BC
 * Size:	0001A4
 */
void E2DPane_setTreeShow(J2DPane*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	li       r0, 1
	stmw     r25, 0x14(r1)
	stb      r0, 0xb0(r3)
	lwz      r31, 0xdc(r3)
	cmplwi   r31, 0
	beq      lbl_803CA744
	addi     r31, r31, -12
	b        lbl_803CA744

lbl_803CA5E8:
	lwz      r3, 0xc(r31)
	li       r0, 1
	stb      r0, 0xb0(r3)
	lwz      r30, 0xdc(r3)
	cmplwi   r30, 0
	beq      lbl_803CA72C
	addi     r30, r30, -12
	b        lbl_803CA72C

lbl_803CA608:
	lwz      r3, 0xc(r30)
	li       r0, 1
	stb      r0, 0xb0(r3)
	lwz      r29, 0xdc(r3)
	cmplwi   r29, 0
	beq      lbl_803CA714
	addi     r29, r29, -12
	b        lbl_803CA714

lbl_803CA628:
	lwz      r3, 0xc(r29)
	li       r0, 1
	stb      r0, 0xb0(r3)
	addi     r3, r3, 0xdc
	bl       getFirstLink__10JSUPtrListCFv
	cmplwi   r3, 0
	beq      lbl_803CA648
	addi     r3, r3, -12

lbl_803CA648:
	mr       r26, r3
	b        lbl_803CA6FC

lbl_803CA650:
	lwz      r3, 0xc(r26)
	li       r0, 1
	addi     r27, r3, 0xdc
	stb      r0, 0xb0(r3)
	mr       r3, r27
	bl       "getFirstChild__17JSUTree<7J2DPane>CFv"
	mr       r25, r3
	b        lbl_803CA6DC

lbl_803CA670:
	mr       r3, r25
	bl       "getObject__17JSUTree<7J2DPane>CFv"
	mr       r28, r3
	bl       show__7J2DPaneFv
	mr       r3, r28
	bl       getPaneTree__7J2DPaneFv
	mr       r28, r3
	bl       "getFirstChild__17JSUTree<7J2DPane>CFv"
	mr       r4, r3
	addi     r3, r1, 8
	bl       "__ct__25JSUTreeIterator<7J2DPane>FP17JSUTree<7J2DPane>"
	b        lbl_803CA6B4

lbl_803CA6A0:
	addi     r3, r1, 8
	bl       "getObject__25JSUTreeIterator<7J2DPane>CFv"
	bl       E2DPane_setTreeShow__3ebiFP7J2DPane
	addi     r3, r1, 8
	bl       "__pp__25JSUTreeIterator<7J2DPane>Fv"

lbl_803CA6B4:
	mr       r3, r28
	bl       "getEndChild__17JSUTree<7J2DPane>CFv"
	mr       r4, r3
	addi     r3, r1, 8
	bl       "__ne__25JSUTreeIterator<7J2DPane>CFPC17JSUTree<7J2DPane>"
	clrlwi.  r0, r3, 0x18
	bne      lbl_803CA6A0
	mr       r3, r25
	bl       "getNextChild__17JSUTree<7J2DPane>CFv"
	mr       r25, r3

lbl_803CA6DC:
	mr       r3, r27
	bl       "getEndChild__17JSUTree<7J2DPane>CFv"
	cmplw    r25, r3
	bne      lbl_803CA670
	lwz      r26, 0x18(r26)
	cmplwi   r26, 0
	beq      lbl_803CA6FC
	addi     r26, r26, -12

lbl_803CA6FC:
	cmplwi   r26, 0
	bne      lbl_803CA650
	lwz      r29, 0x18(r29)
	cmplwi   r29, 0
	beq      lbl_803CA714
	addi     r29, r29, -12

lbl_803CA714:
	cmplwi   r29, 0
	bne      lbl_803CA628
	lwz      r30, 0x18(r30)
	cmplwi   r30, 0
	beq      lbl_803CA72C
	addi     r30, r30, -12

lbl_803CA72C:
	cmplwi   r30, 0
	bne      lbl_803CA608
	lwz      r31, 0x18(r31)
	cmplwi   r31, 0
	beq      lbl_803CA744
	addi     r31, r31, -12

lbl_803CA744:
	cmplwi   r31, 0
	bne      lbl_803CA5E8
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * @generated{J2DPane::show()}
 * --INFO--
 * Address:	803CA760
 * Size:	00000C
 */

/*
 * --INFO--
 * Address:	803CA76C
 * Size:	0001A4
 */
void E2DPane_setTreeHide(J2DPane*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	li       r0, 0
	stmw     r25, 0x14(r1)
	stb      r0, 0xb0(r3)
	lwz      r31, 0xdc(r3)
	cmplwi   r31, 0
	beq      lbl_803CA8F4
	addi     r31, r31, -12
	b        lbl_803CA8F4

lbl_803CA798:
	lwz      r3, 0xc(r31)
	li       r0, 0
	stb      r0, 0xb0(r3)
	lwz      r30, 0xdc(r3)
	cmplwi   r30, 0
	beq      lbl_803CA8DC
	addi     r30, r30, -12
	b        lbl_803CA8DC

lbl_803CA7B8:
	lwz      r3, 0xc(r30)
	li       r0, 0
	stb      r0, 0xb0(r3)
	lwz      r29, 0xdc(r3)
	cmplwi   r29, 0
	beq      lbl_803CA8C4
	addi     r29, r29, -12
	b        lbl_803CA8C4

lbl_803CA7D8:
	lwz      r3, 0xc(r29)
	li       r0, 0
	stb      r0, 0xb0(r3)
	addi     r3, r3, 0xdc
	bl       getFirstLink__10JSUPtrListCFv
	cmplwi   r3, 0
	beq      lbl_803CA7F8
	addi     r3, r3, -12

lbl_803CA7F8:
	mr       r26, r3
	b        lbl_803CA8AC

lbl_803CA800:
	lwz      r3, 0xc(r26)
	li       r0, 0
	addi     r27, r3, 0xdc
	stb      r0, 0xb0(r3)
	mr       r3, r27
	bl       "getFirstChild__17JSUTree<7J2DPane>CFv"
	mr       r25, r3
	b        lbl_803CA88C

lbl_803CA820:
	mr       r3, r25
	bl       "getObject__17JSUTree<7J2DPane>CFv"
	mr       r28, r3
	bl       hide__7J2DPaneFv
	mr       r3, r28
	bl       getPaneTree__7J2DPaneFv
	mr       r28, r3
	bl       "getFirstChild__17JSUTree<7J2DPane>CFv"
	mr       r4, r3
	addi     r3, r1, 8
	bl       "__ct__25JSUTreeIterator<7J2DPane>FP17JSUTree<7J2DPane>"
	b        lbl_803CA864

lbl_803CA850:
	addi     r3, r1, 8
	bl       "getObject__25JSUTreeIterator<7J2DPane>CFv"
	bl       E2DPane_setTreeHide__3ebiFP7J2DPane
	addi     r3, r1, 8
	bl       "__pp__25JSUTreeIterator<7J2DPane>Fv"

lbl_803CA864:
	mr       r3, r28
	bl       "getEndChild__17JSUTree<7J2DPane>CFv"
	mr       r4, r3
	addi     r3, r1, 8
	bl       "__ne__25JSUTreeIterator<7J2DPane>CFPC17JSUTree<7J2DPane>"
	clrlwi.  r0, r3, 0x18
	bne      lbl_803CA850
	mr       r3, r25
	bl       "getNextChild__17JSUTree<7J2DPane>CFv"
	mr       r25, r3

lbl_803CA88C:
	mr       r3, r27
	bl       "getEndChild__17JSUTree<7J2DPane>CFv"
	cmplw    r25, r3
	bne      lbl_803CA820
	lwz      r26, 0x18(r26)
	cmplwi   r26, 0
	beq      lbl_803CA8AC
	addi     r26, r26, -12

lbl_803CA8AC:
	cmplwi   r26, 0
	bne      lbl_803CA800
	lwz      r29, 0x18(r29)
	cmplwi   r29, 0
	beq      lbl_803CA8C4
	addi     r29, r29, -12

lbl_803CA8C4:
	cmplwi   r29, 0
	bne      lbl_803CA7D8
	lwz      r30, 0x18(r30)
	cmplwi   r30, 0
	beq      lbl_803CA8DC
	addi     r30, r30, -12

lbl_803CA8DC:
	cmplwi   r30, 0
	bne      lbl_803CA7B8
	lwz      r31, 0x18(r31)
	cmplwi   r31, 0
	beq      lbl_803CA8F4
	addi     r31, r31, -12

lbl_803CA8F4:
	cmplwi   r31, 0
	bne      lbl_803CA798
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * @generated{J2DPane::hide()}
 * --INFO--
 * Address:	803CA910
 * Size:	00000C
 */

/*
 * --INFO--
 * Address:	803CA91C
 * Size:	0003DC
 */
void E2DPane_setTreeCallBackMessage(P2DScreen::Mgr*, J2DPane*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r23, 0x1c(r1)
	mr       r26, r4
	mr       r31, r3
	mr       r3, r26
	lwz      r12, 0(r26)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x10
	cmplwi   r0, 0x13
	bne      lbl_803CA9E0
	lis      r3, 0x30303030@ha
	lwz      r4, 0x18(r26)
	addi     r3, r3, 0x30303030@l
	lwz      r5, 0x1c(r26)
	xor      r0, r4, r3
	xor      r3, r5, r3
	or.      r0, r3, r0
	beq      lbl_803CA9E0
	li       r0, 0
	xor      r3, r5, r0
	xor      r0, r4, r0
	or.      r0, r3, r0
	beq      lbl_803CA9E0
	lwz      r24, 0x10(r26)
	li       r3, 0x48
	lwz      r25, 0x14(r26)
	bl       __nw__FUl
	or.      r27, r3, r3
	beq      lbl_803CA9A8
	bl       __ct__Q32og6Screen16CallBack_MessageFv
	mr       r27, r3

lbl_803CA9A8:
	cmplwi   r27, 0
	bne      lbl_803CA9CC
	lis      r3, lbl_80496428@ha
	lis      r5, lbl_80496438@ha
	addi     r3, r3, lbl_80496428@l
	li       r4, 0x4f
	addi     r5, r5, lbl_80496438@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803CA9CC:
	mr       r3, r31
	mr       r6, r25
	mr       r5, r24
	mr       r7, r27
	bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node

lbl_803CA9E0:
	lwz      r28, 0xdc(r26)
	cmplwi   r28, 0
	beq      lbl_803CACDC
	addi     r28, r28, -12
	b        lbl_803CACDC

lbl_803CA9F4:
	lwz      r24, 0xc(r28)
	mr       r3, r24
	lwz      r12, 0(r24)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x10
	cmplwi   r0, 0x13
	bne      lbl_803CAAA4
	lis      r3, 0x30303030@ha
	lwz      r4, 0x18(r24)
	addi     r3, r3, 0x30303030@l
	lwz      r5, 0x1c(r24)
	xor      r0, r4, r3
	xor      r3, r5, r3
	or.      r0, r3, r0
	beq      lbl_803CAAA4
	li       r0, 0
	xor      r3, r5, r0
	xor      r0, r4, r0
	or.      r0, r3, r0
	beq      lbl_803CAAA4
	lwz      r25, 0x10(r24)
	li       r3, 0x48
	lwz      r26, 0x14(r24)
	bl       __nw__FUl
	or.      r27, r3, r3
	beq      lbl_803CAA6C
	bl       __ct__Q32og6Screen16CallBack_MessageFv
	mr       r27, r3

lbl_803CAA6C:
	cmplwi   r27, 0
	bne      lbl_803CAA90
	lis      r3, lbl_80496428@ha
	lis      r5, lbl_80496438@ha
	addi     r3, r3, lbl_80496428@l
	li       r4, 0x4f
	addi     r5, r5, lbl_80496438@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803CAA90:
	mr       r3, r31
	mr       r6, r26
	mr       r5, r25
	mr       r7, r27
	bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node

lbl_803CAAA4:
	addi     r3, r24, 0xdc
	bl       getFirstLink__10JSUPtrListCFv
	cmplwi   r3, 0
	beq      lbl_803CAAB8
	addi     r3, r3, -12

lbl_803CAAB8:
	mr       r29, r3
	b        lbl_803CACC4

lbl_803CAAC0:
	lwz      r27, 0xc(r29)
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x10
	cmplwi   r0, 0x13
	bne      lbl_803CAB70
	lis      r3, 0x30303030@ha
	lwz      r4, 0x18(r27)
	addi     r3, r3, 0x30303030@l
	lwz      r5, 0x1c(r27)
	xor      r0, r4, r3
	xor      r3, r5, r3
	or.      r0, r3, r0
	beq      lbl_803CAB70
	li       r0, 0
	xor      r3, r5, r0
	xor      r0, r4, r0
	or.      r0, r3, r0
	beq      lbl_803CAB70
	lwz      r24, 0x10(r27)
	li       r3, 0x48
	lwz      r25, 0x14(r27)
	bl       __nw__FUl
	or.      r26, r3, r3
	beq      lbl_803CAB38
	bl       __ct__Q32og6Screen16CallBack_MessageFv
	mr       r26, r3

lbl_803CAB38:
	cmplwi   r26, 0
	bne      lbl_803CAB5C
	lis      r3, lbl_80496428@ha
	lis      r5, lbl_80496438@ha
	addi     r3, r3, lbl_80496428@l
	li       r4, 0x4f
	addi     r5, r5, lbl_80496438@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803CAB5C:
	mr       r3, r31
	mr       r6, r25
	mr       r5, r24
	mr       r7, r26
	bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node

lbl_803CAB70:
	addi     r30, r27, 0xdc
	mr       r3, r30
	bl       "getFirstChild__17JSUTree<7J2DPane>CFv"
	mr       r27, r3
	b        lbl_803CACA4

lbl_803CAB84:
	mr       r3, r27
	bl       "getObject__17JSUTree<7J2DPane>CFv"
	lwz      r12, 0(r3)
	mr       r26, r3
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x10
	cmplwi   r0, 0x13
	bne      lbl_803CAC40
	mr       r3, r26
	bl       getUserInfo__7J2DPaneCFv
	lis      r5, 0x30303030@ha
	addi     r0, r5, 0x30303030@l
	xor      r5, r4, r0
	xor      r0, r3, r0
	or.      r0, r5, r0
	beq      lbl_803CAC40
	li       r0, 0
	xor      r4, r4, r0
	xor      r0, r3, r0
	or.      r0, r4, r0
	beq      lbl_803CAC40
	mr       r3, r26
	bl       getTagName__7J2DPaneCFv
	mr       r25, r3
	mr       r24, r4
	li       r3, 0x48
	bl       __nw__FUl
	or.      r23, r3, r3
	beq      lbl_803CAC08
	bl       __ct__Q32og6Screen16CallBack_MessageFv
	mr       r23, r3

lbl_803CAC08:
	cmplwi   r23, 0
	bne      lbl_803CAC2C
	lis      r3, lbl_80496428@ha
	lis      r5, lbl_80496438@ha
	addi     r3, r3, lbl_80496428@l
	li       r4, 0x4f
	addi     r5, r5, lbl_80496438@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803CAC2C:
	mr       r3, r31
	mr       r6, r24
	mr       r5, r25
	mr       r7, r23
	bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node

lbl_803CAC40:
	mr       r3, r26
	bl       getPaneTree__7J2DPaneFv
	mr       r26, r3
	bl       "getFirstChild__17JSUTree<7J2DPane>CFv"
	mr       r4, r3
	addi     r3, r1, 8
	bl       "__ct__25JSUTreeIterator<7J2DPane>FP17JSUTree<7J2DPane>"
	b        lbl_803CAC7C

lbl_803CAC60:
	addi     r3, r1, 8
	bl       "getObject__25JSUTreeIterator<7J2DPane>CFv"
	mr       r4, r3
	mr       r3, r31
	bl       E2DPane_setTreeCallBackMessage__3ebiFPQ29P2DScreen3MgrP7J2DPane
	addi     r3, r1, 8
	bl       "__pp__25JSUTreeIterator<7J2DPane>Fv"

lbl_803CAC7C:
	mr       r3, r26
	bl       "getEndChild__17JSUTree<7J2DPane>CFv"
	mr       r4, r3
	addi     r3, r1, 8
	bl       "__ne__25JSUTreeIterator<7J2DPane>CFPC17JSUTree<7J2DPane>"
	clrlwi.  r0, r3, 0x18
	bne      lbl_803CAC60
	mr       r3, r27
	bl       "getNextChild__17JSUTree<7J2DPane>CFv"
	mr       r27, r3

lbl_803CACA4:
	mr       r3, r30
	bl       "getEndChild__17JSUTree<7J2DPane>CFv"
	cmplw    r27, r3
	bne      lbl_803CAB84
	lwz      r29, 0x18(r29)
	cmplwi   r29, 0
	beq      lbl_803CACC4
	addi     r29, r29, -12

lbl_803CACC4:
	cmplwi   r29, 0
	bne      lbl_803CAAC0
	lwz      r28, 0x18(r28)
	cmplwi   r28, 0
	beq      lbl_803CACDC
	addi     r28, r28, -12

lbl_803CACDC:
	cmplwi   r28, 0
	bne      lbl_803CA9F4
	lmw      r23, 0x1c(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000194
 */
void E2DPane_getCalcGlbVisible(J2DPane*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803CACF8
 * Size:	0000D0
 */
void E2DPane_getGlbCenter(J2DPane*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	or.      r31, r4, r4
	stw      r30, 0x38(r1)
	mr       r30, r3
	bne      lbl_803CAD34
	lis      r3, lbl_80496428@ha
	lis      r5, lbl_80496438@ha
	addi     r3, r3, lbl_80496428@l
	li       r4, 0x73
	addi     r5, r5, lbl_80496438@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803CAD34:
	mr       r4, r31
	addi     r3, r1, 0x14
	li       r5, 0
	bl       getGlbVtx__7J2DPaneCFUc
	lwz      r5, 0x14(r1)
	mr       r4, r31
	lwz      r6, 0x18(r1)
	addi     r3, r1, 8
	lwz      r0, 0x1c(r1)
	stw      r5, 0x2c(r1)
	li       r5, 3
	stw      r6, 0x30(r1)
	stw      r0, 0x34(r1)
	bl       getGlbVtx__7J2DPaneCFUc
	lwz      r0, 8(r1)
	lwz      r3, 0xc(r1)
	stw      r0, 0x20(r1)
	lwz      r0, 0x10(r1)
	stw      r3, 0x24(r1)
	lfs      f3, 0x2c(r1)
	lfs      f2, 0x20(r1)
	lfs      f1, 0x30(r1)
	lfs      f0, 0x24(r1)
	fadds    f2, f3, f2
	lfs      f3, lbl_8051F9FC@sda21(r2)
	fadds    f0, f1, f0
	stw      r0, 0x28(r1)
	fmuls    f1, f3, f2
	fmuls    f0, f3, f0
	stfs     f1, 0(r30)
	stfs     f0, 4(r30)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0002C0
 */
void EUTDrawWindow(J2DGrafContext&, long, long, long, long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void E2DDebugWindow::draw(void)
{
	// UNUSED FUNCTION
}
} // namespace ebi
