#include "JSystem/JUT/JUTException.h"
#include "P2DScreen.h"
#include "System.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049A6C0
    lbl_8049A6C0:
        .4byte 0x50324453
        .4byte 0x63726565
        .4byte 0x6E2E6370
        .4byte 0x70000000
    .global lbl_8049A6D0
    lbl_8049A6D0:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q29P2DScreen10Mgr_tuning
    __vt__Q29P2DScreen10Mgr_tuning:
        .4byte 0
        .4byte 0
        .4byte __dt__Q29P2DScreen10Mgr_tuningFv
        .4byte getTypeID__9J2DScreenCFv
        .4byte move__7J2DPaneFff
        .4byte add__7J2DPaneFff
        .4byte resize__7J2DPaneFff
        .4byte setCullBack__7J2DPaneFb
        .4byte setCullBack__7J2DPaneF11_GXCullMode
        .4byte setAlpha__7J2DPaneFUc
        .4byte setConnectParent__7J2DPaneFb
        .4byte calcMtx__9J2DScreenFv
        .4byte update__Q29P2DScreen3MgrFv
        .4byte drawSelf__7J2DPaneFff
        .4byte drawSelf__9J2DScreenFffPA3_A4_f
        .4byte search__9J2DScreenFUx
        .4byte searchUserInfo__9J2DScreenFUx
        .4byte makeMatrix__7J2DPaneFff
        .4byte makeMatrix__7J2DPaneFffff
        .4byte isUsed__9J2DScreenFPC7ResTIMG
        .4byte isUsed__9J2DScreenFPC7ResFONT
        .4byte clearAnmTransform__9J2DScreenFv
        .4byte rewriteAlpha__7J2DPaneFv
        .4byte setAnimation__9J2DScreenFP10J2DAnmBase
        .4byte setAnimation__9J2DScreenFP15J2DAnmTransform
        .4byte setAnimation__9J2DScreenFP11J2DAnmColor
        .4byte setAnimation__9J2DScreenFP16J2DAnmTexPattern
        .4byte setAnimation__9J2DScreenFP19J2DAnmTextureSRTKey
        .4byte setAnimation__9J2DScreenFP15J2DAnmTevRegKey
        .4byte setAnimation__9J2DScreenFP20J2DAnmVisibilityFull
        .4byte setAnimation__9J2DScreenFP14J2DAnmVtxColor
        .4byte animationTransform__7J2DPaneFPC15J2DAnmTransform
        .4byte setVisibileAnimation__7J2DPaneFP20J2DAnmVisibilityFull
        .4byte setAnimationVF__9J2DScreenFP20J2DAnmVisibilityFull
        .4byte setVtxColorAnimation__7J2DPaneFP14J2DAnmVtxColor
        .4byte setAnimationVC__9J2DScreenFP14J2DAnmVtxColor
        .4byte animationPane__7J2DPaneFPC15J2DAnmTransform
        .4byte
   createPane__9J2DScreenFRC18J2DScrnBlockHeaderP20JSURandomInputStreamP7J2DPaneUl
        .4byte
   createPane__9J2DScreenFRC18J2DScrnBlockHeaderP20JSURandomInputStreamP7J2DPaneUlP10JKRArchive
        .4byte draw__Q29P2DScreen10Mgr_tuningFR8GraphicsR14J2DGrafContext
    .global __vt__Q29P2DScreen3Mgr
    __vt__Q29P2DScreen3Mgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q29P2DScreen3MgrFv
        .4byte getTypeID__9J2DScreenCFv
        .4byte move__7J2DPaneFff
        .4byte add__7J2DPaneFff
        .4byte resize__7J2DPaneFff
        .4byte setCullBack__7J2DPaneFb
        .4byte setCullBack__7J2DPaneF11_GXCullMode
        .4byte setAlpha__7J2DPaneFUc
        .4byte setConnectParent__7J2DPaneFb
        .4byte calcMtx__9J2DScreenFv
        .4byte update__Q29P2DScreen3MgrFv
        .4byte drawSelf__7J2DPaneFff
        .4byte drawSelf__9J2DScreenFffPA3_A4_f
        .4byte search__9J2DScreenFUx
        .4byte searchUserInfo__9J2DScreenFUx
        .4byte makeMatrix__7J2DPaneFff
        .4byte makeMatrix__7J2DPaneFffff
        .4byte isUsed__9J2DScreenFPC7ResTIMG
        .4byte isUsed__9J2DScreenFPC7ResFONT
        .4byte clearAnmTransform__9J2DScreenFv
        .4byte rewriteAlpha__7J2DPaneFv
        .4byte setAnimation__9J2DScreenFP10J2DAnmBase
        .4byte setAnimation__9J2DScreenFP15J2DAnmTransform
        .4byte setAnimation__9J2DScreenFP11J2DAnmColor
        .4byte setAnimation__9J2DScreenFP16J2DAnmTexPattern
        .4byte setAnimation__9J2DScreenFP19J2DAnmTextureSRTKey
        .4byte setAnimation__9J2DScreenFP15J2DAnmTevRegKey
        .4byte setAnimation__9J2DScreenFP20J2DAnmVisibilityFull
        .4byte setAnimation__9J2DScreenFP14J2DAnmVtxColor
        .4byte animationTransform__7J2DPaneFPC15J2DAnmTransform
        .4byte setVisibileAnimation__7J2DPaneFP20J2DAnmVisibilityFull
        .4byte setAnimationVF__9J2DScreenFP20J2DAnmVisibilityFull
        .4byte setVtxColorAnimation__7J2DPaneFP14J2DAnmVtxColor
        .4byte setAnimationVC__9J2DScreenFP14J2DAnmVtxColor
        .4byte animationPane__7J2DPaneFPC15J2DAnmTransform
        .4byte
   createPane__9J2DScreenFRC18J2DScrnBlockHeaderP20JSURandomInputStreamP7J2DPaneUl
        .4byte
   createPane__9J2DScreenFRC18J2DScrnBlockHeaderP20JSURandomInputStreamP7J2DPaneUlP10JKRArchive
        .4byte draw__Q29P2DScreen3MgrFR8GraphicsR14J2DGrafContext

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520790
    lbl_80520790:
        .4byte 0x00000000
    .global mstTuningScaleX__Q29P2DScreen10Mgr_tuning
    mstTuningScaleX__Q29P2DScreen10Mgr_tuning:
        .4byte 0x3F733333
    .global mstTuningScaleY__Q29P2DScreen10Mgr_tuning
    mstTuningScaleY__Q29P2DScreen10Mgr_tuning:
        .4byte 0x3F733333
    .global mstTuningTransX__Q29P2DScreen10Mgr_tuning
    mstTuningTransX__Q29P2DScreen10Mgr_tuning:
        .4byte 0xC1733333
    .global mstTuningTransY__Q29P2DScreen10Mgr_tuning
    mstTuningTransY__Q29P2DScreen10Mgr_tuning:
        .4byte 0xC1733333
    .global lbl_805207A4
    lbl_805207A4:
        .4byte 0x3F733333
    .global lbl_805207A8
    lbl_805207A8:
        .4byte 0xC1733333
    .global lbl_805207AC
    lbl_805207AC:
        .float 0.5
    .global lbl_805207B0
    lbl_805207B0:
        .4byte 0x43300000
        .4byte 0x00000000
*/

/* __ct
 * --INFO--
 * Address:	80434AC0
 * Size:	000064
 */
P2DScreen::Mgr::Mgr()
    : J2DScreen()
    , _118()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	bl       __ct__9J2DScreenFv
	lis      r3, __vt__Q29P2DScreen3Mgr@ha
	addi     r30, r31, 0x118
	addi     r0, r3, __vt__Q29P2DScreen3Mgr@l
	stw      r0, 0(r31)
	mr       r3, r30
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q29P2DScreen4Node@ha
	li       r0, 0
	addi     r4, r3, __vt__Q29P2DScreen4Node@l
	mr       r3, r31
	stw      r4, 0(r30)
	stw      r0, 0x18(r30)
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
 * Address:	80434B24
 * Size:	000138
 */
J2DPane* P2DScreen::Mgr::addCallBack(u64 tag, P2DScreen::Node* node)
{
	P2ASSERTLINE(73, (node != nullptr));
	J2DPane* pane = search(tag);
	if (pane) {
		node->_18 = pane;
		node->doInit();
		_118.add(node);
	} else {
		// TODO: There's stuff here... of some sort, at least.
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
void P2DScreen::Mgr::addCallBackPane(J2DPane* pane, P2DScreen::Node* node)
{
	P2ASSERTLINE(97, (node != nullptr));
	node->_18 = pane;
	node->doInit();
	_118.add(node);
}

/*
 * --INFO--
 * Address:	80434CE0
 * Size:	00004C
 */
void P2DScreen::Mgr::update(void)
{
	for (Node* node = (Node*)_118.m_child; node != nullptr; node = (Node*)node->m_next) {
		node->update();
	}
}

/*
 * --INFO--
 * Address:	80434D2C
 * Size:	000080
 */
void P2DScreen::Mgr::draw(Graphics& gfx, J2DGrafContext& context)
{
	J2DScreen::draw(0.0f, 0.0f, &context);
	for (Node* node = (Node*)_118.m_child; node != nullptr; node = (Node*)node->m_next) {
		node->draw(gfx, context);
	}
}

/*
 * --INFO--
 * Address:	80434DAC
 * Size:	000088
 */
P2DScreen::Mgr_tuning::Mgr_tuning(void)
    : Mgr()
    , m_widthMaybe(0.95f)
    , m_heightMaybe(0.95f)
    , m_someX(-15.2f)
    , m_someY(-15.2f)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	bl       __ct__9J2DScreenFv
	lis      r3, __vt__Q29P2DScreen3Mgr@ha
	addi     r30, r31, 0x118
	addi     r0, r3, __vt__Q29P2DScreen3Mgr@l
	stw      r0, 0(r31)
	mr       r3, r30
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q29P2DScreen4Node@ha
	lis      r3, __vt__Q29P2DScreen10Mgr_tuning@ha
	addi     r0, r4, __vt__Q29P2DScreen4Node@l
	li       r4, 0
	stw      r0, 0(r30)
	addi     r0, r3, __vt__Q29P2DScreen10Mgr_tuning@l
	lfs      f1, lbl_805207A4@sda21(r2)
	mr       r3, r31
	stw      r4, 0x18(r30)
	lfs      f0, lbl_805207A8@sda21(r2)
	stw      r0, 0(r31)
	stfs     f1, 0x138(r31)
	stfs     f1, 0x13c(r31)
	stfs     f0, 0x140(r31)
	stfs     f0, 0x144(r31)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/* draw__Q29P2DScreen10Mgr_tuningFR8GraphicsR14J2DGrafContext
 * --INFO--
 * Address:	80434E34
 * Size:	000128
 */
void P2DScreen::Mgr_tuning::draw(Graphics& gfx, J2DGrafContext& context)
{
	float xfb = (float)System::getRenderModeObj()->xfbHeight;
	float efb = (float)System::getRenderModeObj()->efbHeight;
	rotate(xfb * 0.5f, efb * 0.5f, 0x7A, 0.0f);
	m_scale.x = m_widthMaybe;
	m_scale.y = m_heightMaybe;
	calcMtx();
	_0D4[0] = m_someX;
	_0D4[1] = m_someY;
	calcMtx();
	Mgr::draw(gfx, context);

	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r30, r5
	stw      r29, 0x24(r1)
	mr       r29, r4
	stw      r28, 0x20(r1)
	mr       r28, r3
	bl       getRenderModeObj__6SystemFv
	lhz      r31, 4(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r5, 6(r3)
	lis      r0, 0x4330
	stw      r31, 0xc(r1)
	mr       r3, r28
	lfd      f2, lbl_805207B0@sda21(r2)
	li       r4, 0x7a
	stw      r0, 8(r1)
	lfs      f4, lbl_805207AC@sda21(r2)
	lfd      f0, 8(r1)
	stw      r5, 0x14(r1)
	fsubs    f1, f0, f2
	lfs      f3, lbl_80520790@sda21(r2)
	stw      r0, 0x10(r1)
	lfd      f0, 0x10(r1)
	fmuls    f1, f4, f1
	fsubs    f0, f0, f2
	fmuls    f2, f4, f0
	bl       rotate__7J2DPaneFff13J2DRotateAxisf
	lfs      f1, 0x13c(r28)
	mr       r3, r28
	lfs      f0, 0x138(r28)
	stfs     f0, 0xcc(r28)
	stfs     f1, 0xd0(r28)
	lwz      r12, 0(r28)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x144(r28)
	mr       r3, r28
	lfs      f0, 0x140(r28)
	stfs     f0, 0xd4(r28)
	stfs     f1, 0xd8(r28)
	lwz      r12, 0(r28)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f1, lbl_80520790@sda21(r2)
	mr       r3, r28
	mr       r4, r30
	fmr      f2, f1
	bl       draw__9J2DScreenFffPC14J2DGrafContext
	lwz      r31, 0x128(r28)
	b        lbl_80434F34

lbl_80434F14:
	mr       r3, r31
	mr       r4, r29
	lwz      r12, 0(r31)
	mr       r5, r30
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r31, 4(r31)

lbl_80434F34:
	cmplwi   r31, 0
	bne      lbl_80434F14
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}
