#include "JSystem/J2D/J2DPane.h"
#include "P2Macros.h"
#include "P2DScreen.h"
#include "System.h"

namespace P2DScreen {

/* __ct
 * --INFO--
 * Address:	80434AC0
 * Size:	000064
 */
Mgr::Mgr() { }

/*
 * --INFO--
 * Address:	80434B24
 * Size:	000138
 */
J2DPane* Mgr::addCallBack(u64 tag, Node* node)
{
	P2ASSERTLINE(73, node);
	J2DPane* pane = search(tag);
	if (pane) {
		node->mPane = pane;
		node->doInit();
		mScreenNode.add(node);
	} else {
		volatile s8 something[8];
		for (int i = 0; i < 8; i++) {
			if (!something[i]) {
				something[i] = 0x3f;
			}
		}
	}
	return pane;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	or.      r30, r7, r7
	stw      r29, 0x14(r1)
	mr       r29, r3
	stw      r5, 8(r1)
	stw      r6, 0xc(r1)
	bne      lbl_80434B6C
	lis      r3, lbl_8049A6C0@ha
	lis      r5, lbl_8049A6D0@ha
	addi     r3, r3, lbl_8049A6C0@l
	li       r4, 0x49
	addi     r5, r5, lbl_8049A6D0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80434B6C:
	mr       r3, r29
	lwz      r5, 8(r1)
	lwz      r12, 0(r29)
	lwz      r6, 0xc(r1)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	beq      lbl_80434BB8
	stw      r31, 0x18(r30)
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	addi     r3, r29, 0x118
	bl       add__5CNodeFP5CNode
	b        lbl_80434C3C

lbl_80434BB8:
	lbz      r3, 8(r1)
	li       r0, 0x3f
	extsb.   r3, r3
	bne      lbl_80434BCC
	stb      r0, 8(r1)

lbl_80434BCC:
	lbz      r3, 9(r1)
	extsb.   r3, r3
	bne      lbl_80434BDC
	stb      r0, 9(r1)

lbl_80434BDC:
	lbz      r3, 0xa(r1)
	extsb.   r3, r3
	bne      lbl_80434BEC
	stb      r0, 0xa(r1)

lbl_80434BEC:
	lbz      r3, 0xb(r1)
	extsb.   r3, r3
	bne      lbl_80434BFC
	stb      r0, 0xb(r1)

lbl_80434BFC:
	lbz      r3, 0xc(r1)
	extsb.   r3, r3
	bne      lbl_80434C0C
	stb      r0, 0xc(r1)

lbl_80434C0C:
	lbz      r3, 0xd(r1)
	extsb.   r3, r3
	bne      lbl_80434C1C
	stb      r0, 0xd(r1)

lbl_80434C1C:
	lbz      r3, 0xe(r1)
	extsb.   r3, r3
	bne      lbl_80434C2C
	stb      r0, 0xe(r1)

lbl_80434C2C:
	lbz      r3, 0xf(r1)
	extsb.   r3, r3
	bne      lbl_80434C3C
	stb      r0, 0xf(r1)

lbl_80434C3C:
	lwz      r0, 0x24(r1)
	mr       r3, r31
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
 * Address:	80434C5C
 * Size:	000084
 */
void Mgr::addCallBackPane(J2DPane* pane, Node* node)
{
	P2ASSERTLINE(97, node);
	node->mPane = pane;
	node->doInit();
	mScreenNode.add(node);
}

/*
 * --INFO--
 * Address:	80434CE0
 * Size:	00004C
 */
void Mgr::update()
{
	FOREACH_NODE(Node, mScreenNode.mChild, node) { node->update(); }
}

/*
 * --INFO--
 * Address:	80434D2C
 * Size:	000080
 */
void Mgr::draw(Graphics& gfx, J2DGrafContext& context)
{
	J2DScreen::draw(0.0f, 0.0f, &context);
	FOREACH_NODE(Node, mScreenNode.mChild, node) { node->draw(gfx, context); }
}

const f32 Mgr_tuning::mstTuningScaleX = 0.95f;
const f32 Mgr_tuning::mstTuningScaleY = 0.95f;
const f32 Mgr_tuning::mstTuningTransX = -15.2f;
const f32 Mgr_tuning::mstTuningTransY = -15.2f;

/*
 * --INFO--
 * Address:	80434DAC
 * Size:	000088
 */
Mgr_tuning::Mgr_tuning()
    : mScreenScaleX(0.95f)
    , mScreenScaleY(0.95f)
    , mSomeX(-15.2f)
    , mSomeY(-15.2f)
{
}

/* draw__Q29P2DScreen10Mgr_tuningFR8GraphicsR14J2DGrafContext
 * --INFO--
 * Address:	80434E34
 * Size:	000128
 */
void Mgr_tuning::draw(Graphics& gfx, J2DGrafContext& context)
{
	u16 x = System::getRenderModeObj()->fbWidth;
	u16 y = System::getRenderModeObj()->efbHeight;
	rotate(x * 0.5f, y * 0.5f, J2DROTATE_Z, 0.0f);
	updateScale(mScreenScaleX, mScreenScaleY);
	setOffset(mSomeX, mSomeY);
	Mgr::draw(gfx, context);
}

} // namespace P2DScreen
