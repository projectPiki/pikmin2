#include "Game/BaseHIO.h"
#include "CNode.h"
#include "Controller.h"
#include "Dolphin/os.h"
#include "JSystem/JFW/JFWDisplay.h"
#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JUT/JUTException.h"
#include "JSystem/JUT/JUTXfb.h"
#include "nans.h"
#include "System.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_baseHIOSection_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047E2A0
    lbl_8047E2A0:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x62617365
        .4byte 0x48494F53
        .4byte 0x65637469
        .4byte 0x6F6E0000
        .4byte 0x42617365
        .4byte 0x48494F53
        .4byte 0x65637469
        .4byte 0x6F6E0000
    .global lbl_8047E2CC
    lbl_8047E2CC:
        .4byte 0x62617365
        .4byte 0x48494F53
        .4byte 0x65637469
        .4byte 0x6F6E2E63
        .4byte 0x70700000
        .4byte 0x66726167
        .4byte 0x6D656E74
        .4byte 0x6174696F
        .4byte 0x6E206F63
        .4byte 0x63757272
        .4byte 0x6564203A
        .4byte 0x20616674
        .4byte 0x65722073
        .4byte 0x6F756E64
        .4byte 0x0A000000
    .global lbl_8047E308
    lbl_8047E308:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804B19F0
    lbl_804B19F0:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q24Game11HIORootNode
    __vt__Q24Game11HIORootNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game11HIORootNodeFv
        .4byte getChildCount__5CNodeFv
    .global __vt__Q24Game14BaseHIOSection
    __vt__Q24Game14BaseHIOSection:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game14BaseHIOSectionFv
        .4byte run__7SectionFv
        .4byte update__7SectionFv
        .4byte draw__7SectionFR8Graphics
        .4byte init__7SectionFv
        .4byte drawInit__7SectionFR8Graphics
        .4byte drawInit__7SectionFR8GraphicsQ27Section13EDrawInitMode
        .4byte doExit__7SectionFv
        .4byte forceFinish__7SectionFv
        .4byte forceReset__7SectionFv
        .4byte getCurrentSection__7SectionFv
        .4byte doLoadingStart__7SectionFv
        .4byte doLoading__7SectionFv
        .4byte doUpdate__Q24Game14BaseHIOSectionFv
        .4byte 0
        .4byte isFinishable__7SectionFv
        .4byte initHIO__Q24Game14BaseHIOSectionFPQ24Game11HIORootNode
        .4byte refreshHIO__Q24Game14BaseHIOSectionFv
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515990
    lbl_80515990:
        .skip 0x4
    .global lbl_80515994
    lbl_80515994:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805188D8
    lbl_805188D8:
        .4byte 0x73797374
        .4byte 0x656D0000
*/

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void check_fragmentation()
{
	// UNUSED FUNCTION
}

namespace Game {

/*
 * --INFO--
 * Address:	80164BF0
 * Size:	0000C0
 */
BaseHIOSection::BaseHIOSection(JKRHeap* heap)
    : Section(nullptr, heap, false)
{
	System::assert_fragmentation("BaseHIOSection");
	m_rootNode = nullptr;
	JUT_ASSERTLINE(314, JKRHeap::sCurrentHeap->getTotalFreeSize() == JKRHeap::sCurrentHeap->getFreeSize(),
	               "fragmentation occurred : after sound\n");
	_44 = new Controller(Controller::PORT_3);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	mr       r5, r4
	lis      r6, lbl_8047E2A0@ha
	stw      r0, 0x24(r1)
	li       r4, 0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	addi     r30, r6, lbl_8047E2A0@l
	li       r6, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	bl       __ct__7SectionFP10JFWDisplayP7JKRHeapb
	lis      r4, __vt__Q24Game14BaseHIOSection@ha
	addi     r3, r30, 0x1c
	addi     r0, r4, __vt__Q24Game14BaseHIOSection@l
	stw      r0, 0(r29)
	bl       assert_fragmentation__6SystemFPc
	li       r0, 0
	stw      r0, 0x3c(r29)
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       getFreeSize__7JKRHeapFv
	mr       r31, r3
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       getTotalFreeSize__7JKRHeapFv
	cmplw    r31, r3
	beq      lbl_80164C70
	addi     r3, r30, 0x2c
	addi     r5, r30, 0x40
	li       r4, 0x13a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80164C70:
	li       r3, 0xb0
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80164C8C
	li       r4, 3
	bl       __ct__10ControllerFQ210JUTGamePad8EPadPort
	mr       r0, r3

lbl_80164C8C:
	stw      r0, 0x44(r29)
	mr       r3, r29
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
 * Address:	80164CB0
 * Size:	0000C4
 */
BaseHIOSection::~BaseHIOSection(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80164D58
	lis      r3, __vt__Q24Game14BaseHIOSection@ha
	addi     r0, r3, __vt__Q24Game14BaseHIOSection@l
	stw      r0, 0(r30)
	lwz      r3, 0x3c(r30)
	cmplwi   r3, 0
	beq      lbl_80164D0C
	bl       del__5CNodeFv
	lwz      r3, 0x3c(r30)
	cmplwi   r3, 0
	beq      lbl_80164D0C
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80164D0C:
	li       r0, 0
	stw      r0, 0x3c(r30)
	lwz      r3, 0x44(r30)
	cmplwi   r3, 0
	beq      lbl_80164D34
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80164D34:
	li       r0, 0
	mr       r3, r30
	stw      r0, 0x44(r30)
	li       r4, 0
	bl       __dt__7SectionFv
	extsh.   r0, r31
	ble      lbl_80164D58
	mr       r3, r30
	bl       __dl__FPv

lbl_80164D58:
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
 * @generated{HIORootNode::~HIORootNode()}
 * --INFO--
 * Address:	80164D74
 * Size:	000060
 */
// HIORootNode::~HIORootNode(void)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	or.      r30, r3, r3
// 	beq      lbl_80164DB8
// 	lis      r5, __vt__Q24Game11HIORootNode@ha
// 	li       r4, 0
// 	addi     r0, r5, __vt__Q24Game11HIORootNode@l
// 	stw      r0, 0(r30)
// 	bl       __dt__5CNodeFv
// 	extsh.   r0, r31
// 	ble      lbl_80164DB8
// 	mr       r3, r30
// 	bl       __dl__FPv

// lbl_80164DB8:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r30
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	80164DD4
 * Size:	000150
 */
void BaseHIOSection::setDisplay(JFWDisplay* display, int secondsPer60Frames)
{
	// bool check = false;
	// if (m_display == nullptr && display ) {
	// 	check = true;
	// }
	// P2ASSERTLINE(333, check);
	// m_display = display;
	// m_fader = new JUTFader(0, 0, JUTVideo::sManager->m_renderModeObj->fbWidth, JUTVideo::sManager->m_renderModeObj->efbHeight, 0);
	// m_display->m_fader = m_fader;
	// _35 = 1;
	// sys->setCurrentDisplay(m_display);
	// sys->setFrameRate(secondsPer60Frames);
	// DCInvalidateRange(JFWDisplay::sManager->m_Xfb->m_buffers[0], JUTXfb::accumeXfbSize());
	// DCInvalidateRange(JFWDisplay::sManager->m_Xfb->m_buffers[1], JUTXfb::accumeXfbSize());
	// JUTProcBar::sManager->_10C = 0;
	// JUTProcBar::sManager->_130 = 0;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	mr       r29, r4
	lwz      r0, 0x24(r3)
	li       r3, 0
	cmplwi   r0, 0
	bne      lbl_80164E14
	cmplwi   r29, 0
	beq      lbl_80164E14
	li       r3, 1

lbl_80164E14:
	clrlwi.  r0, r3, 0x18
	bne      lbl_80164E38
	lis      r3, lbl_8047E2CC@ha
	lis      r5, lbl_8047E308@ha
	addi     r3, r3, lbl_8047E2CC@l
	li       r4, 0x14d
	addi     r5, r5, lbl_8047E308@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80164E38:
	stw      r29, 0x24(r30)
	li       r3, 0x28
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80164E8C
	li       r0, 0
	lwz      r6, sManager__8JUTVideo@sda21(r13)
	stb      r0, 8(r1)
	addi     r8, r1, 0xc
	li       r4, 0
	li       r5, 0
	stb      r0, 9(r1)
	stb      r0, 0xa(r1)
	stb      r0, 0xb(r1)
	lwz      r0, 8(r1)
	stw      r0, 0xc(r1)
	lwz      r7, 4(r6)
	lhz      r6, 4(r7)
	lhz      r7, 6(r7)
	bl       __ct__8JUTFaderFiiiiQ28JUtility6TColor
	mr       r0, r3

lbl_80164E8C:
	stw      r0, 0x28(r30)
	li       r0, 1
	lwz      r4, 0x28(r30)
	lwz      r3, 0x24(r30)
	stw      r4, 4(r3)
	stb      r0, 0x35(r30)
	lwz      r3, sys@sda21(r13)
	lwz      r4, 0x24(r30)
	bl       setCurrentDisplay__6SystemFP10JFWDisplay
	lwz      r3, sys@sda21(r13)
	mr       r4, r31
	bl       setFrameRate__6SystemFi
	lwz      r3, sManager__10JFWDisplay@sda21(r13)
	lwz      r3, 0x10(r3)
	lwz      r30, 0(r3)
	bl       accumeXfbSize__6JUTXfbFv
	mr       r4, r3
	mr       r3, r30
	bl       DCInvalidateRange
	lwz      r3, sManager__10JFWDisplay@sda21(r13)
	lwz      r3, 0x10(r3)
	lwz      r30, 4(r3)
	bl       accumeXfbSize__6JUTXfbFv
	mr       r4, r3
	mr       r3, r30
	bl       DCInvalidateRange
	lwz      r3, sManager__10JUTProcBar@sda21(r13)
	li       r0, 0
	stb      r0, 0x10c(r3)
	lwz      r3, sManager__10JUTProcBar@sda21(r13)
	stb      r0, 0x130(r3)
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
 * Address:	80164F24
 * Size:	000080
 */
void BaseHIOSection::initHIO(Game::HIORootNode* node)
{
	// if (node == nullptr) {
	// 	m_hioRootNode = new HIORootNode(this);
	// } else {
	// 	m_hioRootNode = node;
	// }
	// sys->addGenNode(m_hioRootNode);
	// if (JUTProcBar::sManager ) {
	// 	JUTProcBar::sManager->_10C = 0;
	// 	JUTProcBar::sManager->_130 = 0;
	// }
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bne      lbl_80164F64
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80164F5C
	mr       r4, r31
	bl       __ct__Q24Game11HIORootNodeFP7Section
	mr       r0, r3

lbl_80164F5C:
	stw      r0, 0x3c(r31)
	b        lbl_80164F68

lbl_80164F64:
	stw      r4, 0x3c(r31)

lbl_80164F68:
	lwz      r3, sys@sda21(r13)
	lwz      r4, 0x3c(r31)
	bl       addGenNode__6SystemFP5CNode
	lwz      r3, sManager__10JUTProcBar@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80164F90
	li       r0, 0
	stb      r0, 0x10c(r3)
	lwz      r3, sManager__10JUTProcBar@sda21(r13)
	stb      r0, 0x130(r3)

lbl_80164F90:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80164FA4
 * Size:	000004
 */
void BaseHIOSection::createScreenRootNode() { }

/*
 * --INFO--
 * Address:	80164FA8
 * Size:	000008
 */
bool BaseHIOSection::doUpdate() { return true; }

/*
 * --INFO--
 * Address:	80164FB0
 * Size:	000024
 */
void BaseHIOSection::addGenNode(CNode* node) { m_rootNode->add(node); }

/*
 * --INFO--
 * Address:	80164FD4
 * Size:	000004
 */
void BaseHIOSection::refreshHIO(void) { }

/*
 * --INFO--
 * Address:	80164FD8
 * Size:	000054
 */
HIORootNode::HIORootNode(Section* section)
    : CNode()
{
	m_section = section;
	setName("system");
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q24Game11HIORootNode@ha
	addi     r0, r2, lbl_805188D8@sda21
	addi     r4, r3, __vt__Q24Game11HIORootNode@l
	mr       r3, r30
	stw      r4, 0(r30)
	stw      r31, 0x18(r30)
	stw      r0, 0x14(r30)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8016502C
 * Size:	00002C
 */
void Section::drawInit(Graphics& gfx, Section::EDrawInitMode mode) { drawInit(gfx); }

/*
 * --INFO--
 * Address:	80165058
 * Size:	000008
 */
bool Section::forceFinish() { return false; }

/*
 * --INFO--
 * Address:	80165060
 * Size:	000028
 */
void __sinit_baseHIOSection_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804B19F0@ha
	stw      r0, lbl_80515990@sda21(r13)
	stfsu    f0, lbl_804B19F0@l(r3)
	stfs     f0, lbl_80515994@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
