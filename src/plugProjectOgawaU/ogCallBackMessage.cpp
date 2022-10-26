#include "P2DScreen.h"
#include "og/Screen/callbackNodes.h"
#include "og/ogLib2D.h"
#include "types.h"
/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og6Screen16CallBack_Message
    __vt__Q32og6Screen16CallBack_Message:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32og6Screen16CallBack_MessageFv
        .4byte getChildCount__5CNodeFv
        .4byte update__Q32og6Screen16CallBack_MessageFv
        .4byte draw__Q32og6Screen16CallBack_MessageFR8GraphicsR14J2DGrafContext
        .4byte doInit__Q29P2DScreen4NodeFv
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051D670
    lbl_8051D670:
        .4byte 0x00000000
    .global lbl_8051D674
    lbl_8051D674:
        .float 1.0
    .global lbl_8051D678
    lbl_8051D678:
        .float 0.5
    .global lbl_8051D67C
    lbl_8051D67C:
        .4byte 0x00000000
*/

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	80309614
 * Size:	000098
 */
CallBack_Message::CallBack_Message()
    : P2DScreen::CallBackNode()
{
	m_message           = og::gLib2D->m_message;
	m_messageIDAsULL    = 0;
	m_messageIDAs2UL[0] = 0;
	m_messageIDAs2UL[1] = 0;
	_30                 = 0.0f;
	_34                 = 0.0f;
	_44                 = 1.0f;
	_40                 = 1.0f;
	_3C                 = 1.0f;
	_38                 = 1.0f;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000134
 */
void CallBack_Message::drawInfo(J2DGrafContext&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803096AC
 * Size:	0001B4
 */
void CallBack_Message::draw(Graphics&, J2DGrafContext&)
{
	/*
stwu     r1, -0x50(r1)
mflr     r0
stw      r0, 0x54(r1)
stw      r31, 0x4c(r1)
mr       r31, r4
stw      r30, 0x48(r1)
mr       r30, r3
stw      r29, 0x44(r1)
mr       r29, r5
lwz      r3, 0x18(r3)
bl       checkVisibleGlb__Q22og6ScreenFP7J2DPane
clrlwi.  r0, r3, 0x18
beq      lbl_80309844
lwz      r3, 0x18(r30)
lwz      r0, 0x20(r30)
lwz      r4, 0x18(r3)
lwz      r5, 0x1c(r3)
lwz      r3, 0x24(r30)
xor      r0, r4, r0
xor      r3, r5, r3
or.      r0, r3, r0
beq      lbl_80309720
stw      r5, 0x24(r30)
addi     r5, r30, 0x28
addi     r6, r30, 0x2c
stw      r4, 0x20(r30)
lwz      r3, 0x20(r30)
lwz      r4, 0x24(r30)
bl       convertU64ToMessageID__5P2JMEFUxPUlPUl

lbl_80309720:
lwz      r4, 0x18(r30)
addi     r3, r29, 0x80
addi     r5, r1, 8
addi     r4, r4, 0x80
bl       PSMTXConcat
addi     r3, r1, 8
li       r4, 0
bl       GXLoadPosMtxImm
lwz      r5, 0x18(r30)
lis      r3, 0x55555556@ha
lfs      f5, lbl_8051D670@sda21(r2)
addi     r0, r3, 0x55555556@l
lbz      r4, 0xb7(r5)
lfs      f3, 0x28(r5)
fmr      f4, f5
mulhw    r3, r0, r4
lfs      f2, 0x20(r5)
lfs      f1, 0x2c(r5)
lfs      f0, 0x24(r5)
fsubs    f2, f3, f2
fsubs    f1, f1, f0
srwi     r0, r3, 0x1f
add      r0, r3, r0
mulli    r0, r0, 3
subf     r0, r0, r4
cmpwi    r0, 1
bne      lbl_80309798
lfs      f0, lbl_8051D678@sda21(r2)
fmuls    f5, f2, f0
b        lbl_803097A4

lbl_80309798:
cmpwi    r0, 2
bne      lbl_803097A4
fmr      f5, f2

lbl_803097A4:
lis      r3, 0x55555556@ha
addi     r0, r3, 0x55555556@l
mulhw    r3, r0, r4
srwi     r0, r3, 0x1f
add      r0, r3, r0
cmpwi    r0, 1
bne      lbl_803097CC
lfs      f0, lbl_8051D678@sda21(r2)
fmuls    f4, f1, f0
b        lbl_803097D8

lbl_803097CC:
cmpwi    r0, 2
bne      lbl_803097D8
fmr      f4, f1

lbl_803097D8:
stfs     f5, 0x30(r30)
stfs     f4, 0x34(r30)
lfs      f0, 0x30(r30)
lwz      r3, 0x1c(r30)
fneg     f0, f0
lwz      r3, 0(r3)
stfs     f0, 0x54(r3)
lfs      f0, 0x34(r30)
fneg     f0, f0
stfs     f0, 0x58(r3)
lwz      r4, 0x18(r30)
bl       setTextBoxInfo__Q25P2JME19TRenderingProcessorFP7J2DPane
lwz      r3, 0x1c(r30)
mr       r4, r31
lfs      f3, 0x44(r30)
lfs      f2, 0x40(r30)
lfs      f1, 0x3c(r30)
lwz      r3, 0(r3)
lfs      f0, 0x38(r30)
stfs     f0, 0x7c(r3)
stfs     f1, 0x80(r3)
stfs     f2, 0x84(r3)
stfs     f3, 0x88(r3)
lwz      r3, 0x1c(r30)
lwz      r5, 0x28(r30)
lwz      r6, 0x2c(r30)
bl       drawMessageID__Q25P2JME13SimpleMessageFR8GraphicsUlUl

lbl_80309844:
lwz      r0, 0x54(r1)
lwz      r31, 0x4c(r1)
lwz      r30, 0x48(r1)
lwz      r29, 0x44(r1)
mtlr     r0
addi     r1, r1, 0x50
blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
CallBack_MessageAndShadow::CallBack_MessageAndShadow(float, float, J2DPane*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80309860
 * Size:	000080
 */
CallBack_Message::~CallBack_Message(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_803098C4
lis      r4, __vt__Q32og6Screen16CallBack_Message@ha
addi     r0, r4, __vt__Q32og6Screen16CallBack_Message@l
stw      r0, 0(r30)
beq      lbl_803098B4
lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r4, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0(r30)
beq      lbl_803098B4
lis      r5, __vt__Q29P2DScreen4Node@ha
li       r4, 0
addi     r0, r5, __vt__Q29P2DScreen4Node@l
stw      r0, 0(r30)
bl       __dt__5CNodeFv

lbl_803098B4:
extsh.   r0, r31
ble      lbl_803098C4
mr       r3, r30
bl       __dl__FPv

lbl_803098C4:
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
 * Address:	........
 * Size:	0001DC
 */
void CallBack_MessageAndShadow::draw(Graphics&, J2DGrafContext&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0003C4
 */
void MessageSetInfoShadow(J2DPane*, P2JME::TRenderingProcessor*, J2DPane*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803098E0
 * Size:	000194
 */
bool checkVisibleGlb(J2DPane* pane)
{
	if (pane->isVisible()) {
		J2DPane* parent = pane->getParentPane();
		return (parent != nullptr) ? checkVisibleGlb(parent) : true;
	} else {
		return false;
	}
}

/*
 * @generated{J2DPane::isVisible() const}
 * --INFO--
 * Address:	80309A74
 * Size:	000008
 */

/*
 * --INFO--
 * Address:	80309A7C
 * Size:	00031C
 */
void setCallBackMessageSub(P2DScreen::Mgr*, J2DPane*)
{
	/*
stwu     r1, -0x30(r1)
mflr     r0
stw      r0, 0x34(r1)
stmw     r25, 0x14(r1)
mr       r28, r4
mr       r31, r3
mr       r3, r28
lwz      r12, 0(r28)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
clrlwi   r0, r3, 0x10
cmplwi   r0, 0x13
bne      lbl_80309B78
lwz      r0, 0x18(r28)
li       r3, 0
lwz      r4, 0x1c(r28)
xor      r0, r0, r3
xor      r3, r4, r3
or.      r0, r3, r0
beq      lbl_80309B78
lwz      r26, 0x10(r28)
li       r3, 0x48
lwz      r27, 0x14(r28)
bl       __nw__FUl
or.      r29, r3, r3
beq      lbl_80309B54
bl       __ct__5CNodeFv
lis      r3, __vt__Q29P2DScreen4Node@ha
lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r3, __vt__Q29P2DScreen4Node@l
lis      r3, __vt__Q32og6Screen16CallBack_Message@ha
stw      r0, 0(r29)
li       r5, 0
addi     r4, r4, __vt__Q29P2DScreen12CallBackNode@l
addi     r0, r3, __vt__Q32og6Screen16CallBack_Message@l
stw      r5, 0x18(r29)
lfs      f1, lbl_8051D670@sda21(r2)
stw      r4, 0(r29)
lfs      f0, lbl_8051D674@sda21(r2)
stw      r0, 0(r29)
lwz      r3, gLib2D__2og@sda21(r13)
lwz      r0, 0x18(r3)
stw      r0, 0x1c(r29)
stw      r5, 0x24(r29)
stw      r5, 0x20(r29)
stw      r5, 0x28(r29)
stw      r5, 0x2c(r29)
stfs     f1, 0x30(r29)
stfs     f1, 0x34(r29)
stfs     f0, 0x44(r29)
stfs     f0, 0x40(r29)
stfs     f0, 0x3c(r29)
stfs     f0, 0x38(r29)

lbl_80309B54:
mr       r3, r31
mr       r6, r27
mr       r5, r26
mr       r7, r29
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
mr       r3, r28
addi     r4, r2, lbl_8051D67C@sda21
crclr    6
bl       setString__10J2DTextBoxFPCce

lbl_80309B78:
lwz      r30, 0xdc(r28)
cmplwi   r30, 0
beq      lbl_80309D7C
addi     r30, r30, -12
b        lbl_80309D7C

lbl_80309B8C:
lwz      r26, 0xc(r30)
mr       r3, r26
lwz      r12, 0(r26)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
clrlwi   r0, r3, 0x10
cmplwi   r0, 0x13
bne      lbl_80309C58
lwz      r0, 0x18(r26)
li       r3, 0
lwz      r4, 0x1c(r26)
xor      r0, r0, r3
xor      r3, r4, r3
or.      r0, r3, r0
beq      lbl_80309C58
lwz      r27, 0x10(r26)
li       r3, 0x48
lwz      r29, 0x14(r26)
bl       __nw__FUl
or.      r28, r3, r3
beq      lbl_80309C34
bl       __ct__Q29P2DScreen12CallBackNodeFv
lis      r3, __vt__Q32og6Screen16CallBack_Message@ha
addi     r0, r3, __vt__Q32og6Screen16CallBack_Message@l
stw      r0, 0(r28)
lwz      r3, gLib2D__2og@sda21(r13)
bl       getMsgPtr__Q22og5Lib2DFv
stw      r3, 0x1c(r28)
li       r0, 0
lfs      f1, lbl_8051D670@sda21(r2)
stw      r0, 0x24(r28)
lfs      f0, lbl_8051D674@sda21(r2)
stw      r0, 0x20(r28)
stw      r0, 0x28(r28)
stw      r0, 0x2c(r28)
stfs     f1, 0x30(r28)
stfs     f1, 0x34(r28)
stfs     f0, 0x44(r28)
stfs     f0, 0x40(r28)
stfs     f0, 0x3c(r28)
stfs     f0, 0x38(r28)

lbl_80309C34:
mr       r3, r31
mr       r6, r29
mr       r5, r27
mr       r7, r28
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
mr       r3, r26
addi     r4, r2, lbl_8051D67C@sda21
crclr    6
bl       setString__10J2DTextBoxFPCce

lbl_80309C58:
addi     r29, r26, 0xdc
mr       r3, r29
bl       "getFirstChild__17JSUTree<7J2DPane>CFv"
mr       r28, r3
b        lbl_80309D5C

lbl_80309C6C:
mr       r3, r28
bl       "getObject__17JSUTree<7J2DPane>CFv"
lwz      r12, 0(r3)
mr       r25, r3
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
clrlwi   r0, r3, 0x10
cmplwi   r0, 0x13
bne      lbl_80309CF8
mr       r3, r25
bl       getUserInfo__7J2DPaneCFv
li       r0, 0
xor      r4, r4, r0
xor      r0, r3, r0
or.      r0, r4, r0
beq      lbl_80309CF8
mr       r3, r25
bl       getTagName__7J2DPaneCFv
mr       r27, r3
mr       r26, r4
li       r3, 0x48
bl       __nw__FUl
or.      r7, r3, r3
beq      lbl_80309CD8
bl       __ct__Q32og6Screen16CallBack_MessageFv
mr       r7, r3

lbl_80309CD8:
mr       r3, r31
mr       r6, r26
mr       r5, r27
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
mr       r3, r25
addi     r4, r2, lbl_8051D67C@sda21
crclr    6
bl       setString__10J2DTextBoxFPCce

lbl_80309CF8:
mr       r3, r25
bl       getPaneTree__7J2DPaneFv
mr       r27, r3
bl       "getFirstChild__17JSUTree<7J2DPane>CFv"
mr       r4, r3
addi     r3, r1, 8
bl       "__ct__25JSUTreeIterator<7J2DPane>FP17JSUTree<7J2DPane>"
b        lbl_80309D34

lbl_80309D18:
addi     r3, r1, 8
bl       "getObject__25JSUTreeIterator<7J2DPane>CFv"
mr       r4, r3
mr       r3, r31
bl       setCallBackMessageSub__Q22og6ScreenFPQ29P2DScreen3MgrP7J2DPane
addi     r3, r1, 8
bl       "__pp__25JSUTreeIterator<7J2DPane>Fv"

lbl_80309D34:
mr       r3, r27
bl       "getEndChild__17JSUTree<7J2DPane>CFv"
mr       r4, r3
addi     r3, r1, 8
bl       "__ne__25JSUTreeIterator<7J2DPane>CFPC17JSUTree<7J2DPane>"
clrlwi.  r0, r3, 0x18
bne      lbl_80309D18
mr       r3, r28
bl       "getNextChild__17JSUTree<7J2DPane>CFv"
mr       r28, r3

lbl_80309D5C:
mr       r3, r29
bl       "getEndChild__17JSUTree<7J2DPane>CFv"
cmplw    r28, r3
bne      lbl_80309C6C
lwz      r30, 0x18(r30)
cmplwi   r30, 0
beq      lbl_80309D7C
addi     r30, r30, -12

lbl_80309D7C:
cmplwi   r30, 0
bne      lbl_80309B8C
lmw      r25, 0x14(r1)
lwz      r0, 0x34(r1)
mtlr     r0
addi     r1, r1, 0x30
blr
	*/
}

} // namespace Screen
} // namespace og

/*
 * @generated{2DPane::getUserInfo() const}
 * --INFO--
 * Address:	80309D98
 * Size:	000010
 */
// u64 J2DPane::getUserInfo() const
// {
// 	return m_messageID;
// 	/*
// 	mr       r4, r3
// 	lwz      r3, 0x18(r3)
// 	lwz      r4, 0x1c(r4)
// 	blr
// 	*/
// }

/*
 * @generated{og::Lib2D::getMsgPtr()}
 * --INFO--
 * Address:	80309DA8
 * Size:	000008
 */
// void og::Lib2D::getMsgPtr(void)
// {
// 	/*
// 	lwz      r3, 0x18(r3)
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	80309DB0
 * Size:	000050
 */
// P2DScreen::CallBackNode::CallBackNode()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r3
// 	bl       __ct__5CNodeFv
// 	lis      r4, __vt__Q29P2DScreen4Node@ha
// 	lis      r3, __vt__Q29P2DScreen12CallBackNode@ha
// 	addi     r0, r4, __vt__Q29P2DScreen4Node@l
// 	li       r4, 0
// 	stw      r0, 0(r31)
// 	addi     r0, r3, __vt__Q29P2DScreen12CallBackNode@l
// 	mr       r3, r31
// 	stw      r4, 0x18(r31)
// 	stw      r0, 0(r31)
// 	lwz      r31, 0xc(r1)
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	80309E00
 * Size:	000024
 */
void setCallBackMessage(P2DScreen::Mgr*)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
mr       r4, r3
stw      r0, 0x14(r1)
bl       setCallBackMessageSub__Q22og6ScreenFPQ29P2DScreen3MgrP7J2DPane
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0003DC
 */
void setCallBackMessageAndShadowSub(P2DScreen::Mgr*, J2DPane*, float, float, J2DPane*, unsigned long long, unsigned long long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void setCallBackMessageAndShadow(P2DScreen::Mgr*, float, float, J2DPane*, unsigned long long, unsigned long long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
CallBack_MessageAndShadow::~CallBack_MessageAndShadow()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80309E24
 * Size:	000004
 */
void CallBack_Message::update() { }
} // namespace Screen
} // namespace og
