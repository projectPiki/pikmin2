#include "Graphics.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JUT/TColor.h"
#include "System.h"
#include "types.h"
#include "wipe.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_wipe_cpp

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804EBED8
    lbl_804EBED8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__10BlackFader
    __vt__10BlackFader:
        .4byte 0
        .4byte 0
        .4byte __dt__10BlackFaderFv
        .4byte getChildCount__5CNodeFv
        .4byte update__8WipeBaseFv
        .4byte draw__8WipeBaseFv
        .4byte isWhite__10BlackFaderFv
        .4byte isBlack__10BlackFaderFv
        .4byte on_start__8WipeBaseFv
        .4byte do_draw__10BlackFaderFf
    .global __vt__14WipeOutInFader
    __vt__14WipeOutInFader:
        .4byte 0
        .4byte 0
        .4byte __dt__14WipeOutInFaderFv
        .4byte getChildCount__5CNodeFv
        .4byte update__8WipeBaseFv
        .4byte draw__8WipeBaseFv
        .4byte isWhite__14WipeOutInFaderFv
        .4byte isBlack__14WipeOutInFaderFv
        .4byte on_start__14WipeOutInFaderFv
        .4byte do_draw__14WipeOutInFaderFf
    .global __vt__12WipeOutFader
    __vt__12WipeOutFader:
        .4byte 0
        .4byte 0
        .4byte __dt__12WipeOutFaderFv
        .4byte getChildCount__5CNodeFv
        .4byte update__8WipeBaseFv
        .4byte draw__8WipeBaseFv
        .4byte isWhite__12WipeOutFaderFv
        .4byte isBlack__12WipeOutFaderFv
        .4byte on_start__12WipeOutFaderFv
        .4byte do_draw__12WipeOutFaderFf
    .global __vt__11WipeInFader
    __vt__11WipeInFader:
        .4byte 0
        .4byte 0
        .4byte __dt__11WipeInFaderFv
        .4byte getChildCount__5CNodeFv
        .4byte update__8WipeBaseFv
        .4byte draw__8WipeBaseFv
        .4byte isWhite__11WipeInFaderFv
        .4byte isBlack__11WipeInFaderFv
        .4byte on_start__8WipeBaseFv
        .4byte do_draw__11WipeInFaderFf
    .global __vt__8WipeBase
    __vt__8WipeBase:
        .4byte 0
        .4byte 0
        .4byte __dt__8WipeBaseFv
        .4byte getChildCount__5CNodeFv
        .4byte update__8WipeBaseFv
        .4byte draw__8WipeBaseFv
        .4byte isWhite__8WipeBaseFv
        .4byte isBlack__8WipeBaseFv
        .4byte on_start__8WipeBaseFv
        .4byte do_draw__8WipeBaseFf
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_805161C0
    lbl_805161C0:
        .skip 0x4
    .global lbl_805161C4
    lbl_805161C4:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805205E8
    lbl_805205E8:
        .4byte 0x00000000
    .global lbl_805205EC
    lbl_805205EC:
        .float 1.0
    .global lbl_805205F0
    lbl_805205F0:
        .float 0.5
    .global lbl_805205F4
    lbl_805205F4:
        .4byte 0x3E4CCCCD
    .global lbl_805205F8
    lbl_805205F8:
        .4byte 0x3F4CCCCD
    .global lbl_805205FC
    lbl_805205FC:
        .4byte 0x437F0000
    .global lbl_80520600
    lbl_80520600:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_80520608
    lbl_80520608:
        .4byte 0x3FA00000
    .global lbl_8052060C
    lbl_8052060C:
        .float 0.1
*/

/*
 * --INFO--
 * Address:	8042BD0C
 * Size:	00005C
 */
WipeBase::WipeBase()
    : CNode()
{
	_18 = 0.0f;
	_1C = 1.0f;
	_20 = false;
	_21 = 1;
}

/*
 * --INFO--
 * Address:	8042BD68
 * Size:	000040
 */
void WipeBase::start(float p1)
{
	_18 = 0.0f;
	_1C = p1;
	_20 = true;
	on_start();
}

// /*
//  * --INFO--
//  * Address:	8042BDA8
//  * Size:	000004
//  */
// void WipeBase::on_start() { }

/*
 * --INFO--
 * Address:	8042BDAC
 * Size:	000078
 */
void WipeBase::update()
{
	draw();
	if (_20) {
		_18 += sys->m_deltaTime / _1C;
		if (_18 >= 1.0f) {
			_18 = 1.0f;
		}
	}
}

/*
 * --INFO--
 * Address:	8042BE24
 * Size:	000060
 */
void WipeBase::draw()
{
	if (_20) {
		do_draw(_18);
		if (_18 == 1.0f) {
			_20 = false;
		}
	}
}

// /*
//  * --INFO--
//  * Address:	8042BE84
//  * Size:	000004
//  */
// void WipeBase::do_draw(float) { }

/*
 * --INFO--
 * Address:	8042BE88
 * Size:	000018
 */
bool WipeInFader::isWhite() { return _18 > 0.5f; }

/*
 * --INFO--
 * Address:	8042BEA0
 * Size:	000018
 */
bool WipeInFader::isBlack() { return _18 < 0.5f; }

/*
 * __ct__11WipeInFaderFv
 * --INFO--
 * Address:	8042BEB8
 * Size:	000078
 */
WipeInFader::WipeInFader()
    : WipeBase()
{
	_24.channels.r = 0;
	_24.channels.g = 0;
	_24.channels.b = 0;
	_24.channels.a = 0;
}

/*
 * do_draw__11WipeInFaderFf
 * --INFO--
 * Address:	8042BF30
 * Size:	000144
 */
void WipeInFader::do_draw(float)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	lwz      r4, sys@sda21(r13)
	mr       r30, r3
	fmr      f31, f1
	lwz      r31, 0x24(r4)
	addi     r3, r31, 0xbc
	lwz      r12, 0xbc(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_805205F4@sda21(r2)
	addi     r31, r31, 0xbc
	fcmpo    cr0, f31, f0
	bge      lbl_8042BF88
	lfs      f1, lbl_805205E8@sda21(r2)
	b        lbl_8042BF94

lbl_8042BF88:
	fsubs    f1, f31, f0
	lfs      f0, lbl_805205F8@sda21(r2)
	fdivs    f1, f1, f0

lbl_8042BF94:
	lfs      f0, lbl_805205FC@sda21(r2)
	mr       r3, r31
	lbz      r0, 0x26(r30)
	addi     r4, r1, 8
	fmuls    f0, f0, f1
	lbz      r6, 0x24(r30)
	lbz      r7, 0x25(r30)
	addi     r5, r1, 0xc
	stb      r6, 0x18(r1)
	addi     r6, r1, 0x10
	fctiwz   f0, f0
	stb      r7, 0x19(r1)
	addi     r7, r1, 0x14
	stb      r0, 0x1a(r1)
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	subfic   r0, r0, 0xff
	stb      r0, 0x1b(r1)
	lwz      r0, 0x18(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0x10(r1)
	stw      r0, 0xc(r1)
	stw      r0, 8(r1)
	bl
setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
	bl       getRenderModeObj__6SystemFv
	lhz      r30, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r4, 4(r3)
	lis      r0, 0x4330
	lfs      f3, lbl_805205E8@sda21(r2)
	mr       r3, r31
	stw      r4, 0x3c(r1)
	addi     r4, r1, 0x1c
	lfd      f2, lbl_80520600@sda21(r2)
	stw      r0, 0x38(r1)
	lfd      f0, 0x38(r1)
	stw      r30, 0x44(r1)
	fsubs    f1, f0, f2
	stw      r0, 0x40(r1)
	lfd      f0, 0x40(r1)
	fadds    f1, f3, f1
	stfs     f3, 0x1c(r1)
	fsubs    f0, f0, f2
	stfs     f3, 0x20(r1)
	fadds    f0, f3, f0
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	bl       "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
	psq_l    f31, 88(r1), 0, qr0
	lwz      r0, 0x64(r1)
	lfd      f31, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * __ct__12WipeOutFaderFv
 * --INFO--
 * Address:	8042C074
 * Size:	000078
 */
WipeOutFader::WipeOutFader()
    : WipeBase()
{
	_24.channels.r = 0;
	_24.channels.g = 0;
	_24.channels.b = 0;
	_24.channels.a = 0;
}

/*
 * --INFO--
 * Address:	8042C0EC
 * Size:	000004
 */
void WipeOutFader::on_start() { }

/*
 * isWhite__12WipeOutFaderFv
 * --INFO--
 * Address:	8042C0F0
 * Size:	000018
 */
bool WipeOutFader::isWhite() { return _18 < 0.5f; }

/*
 * isBlack__12WipeOutFaderFv
 * --INFO--
 * Address:	8042C108
 * Size:	000018
 */
bool WipeOutFader::isBlack() { return _18 > 0.5f; }

/*
 * doDraw__12WipeOutFaderFf
 * --INFO--
 * Address:	8042C120
 * Size:	000138
 */
void WipeOutFader::do_draw(float)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	lfs      f0, lbl_805205F8@sda21(r2)
	mr       r30, r3
	fcmpo    cr0, f1, f0
	ble      lbl_8042C154
	lfs      f31, lbl_805205EC@sda21(r2)
	b        lbl_8042C15C

lbl_8042C154:
	lfs      f0, lbl_80520608@sda21(r2)
	fmuls    f31, f0, f1

lbl_8042C15C:
	lwz      r3, sys@sda21(r13)
	lwz      r31, 0x24(r3)
	addi     r3, r31, 0xbc
	lwz      r12, 0xbc(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_805205FC@sda21(r2)
	addi     r31, r31, 0xbc
	lbz      r0, 0x26(r30)
	mr       r3, r31
	fmuls    f0, f0, f31
	lbz      r5, 0x24(r30)
	lbz      r6, 0x25(r30)
	addi     r4, r1, 8
	stb      r5, 0x18(r1)
	addi     r5, r1, 0xc
	fctiwz   f0, f0
	stb      r6, 0x19(r1)
	addi     r6, r1, 0x10
	addi     r7, r1, 0x14
	stb      r0, 0x1a(r1)
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	stb      r0, 0x1b(r1)
	lwz      r0, 0x18(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0x10(r1)
	stw      r0, 0xc(r1)
	stw      r0, 8(r1)
	bl
setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
	bl       getRenderModeObj__6SystemFv
	lhz      r30, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r4, 4(r3)
	lis      r0, 0x4330
	lfs      f3, lbl_805205E8@sda21(r2)
	mr       r3, r31
	stw      r4, 0x3c(r1)
	addi     r4, r1, 0x1c
	lfd      f2, lbl_80520600@sda21(r2)
	stw      r0, 0x38(r1)
	lfd      f0, 0x38(r1)
	stw      r30, 0x44(r1)
	fsubs    f1, f0, f2
	stw      r0, 0x40(r1)
	lfd      f0, 0x40(r1)
	fadds    f1, f3, f1
	stfs     f3, 0x1c(r1)
	fsubs    f0, f0, f2
	stfs     f3, 0x20(r1)
	fadds    f0, f3, f0
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	bl       "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
	psq_l    f31, 88(r1), 0, qr0
	lwz      r0, 0x64(r1)
	lfd      f31, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * on_start__14WipeOutInFaderFv
 * --INFO--
 * Address:	8042C258
 * Size:	000050
 */
void WipeOutInFader::on_start()
{
	_74                = 1;
	m_wipeOutFader._18 = 0.0f;
	m_wipeOutFader._1C = 0.1f;
	m_wipeOutFader._20 = true;
	m_wipeOutFader.on_start();
}

/*
 * isWhite__14WipeOutInFaderFv
 * --INFO--
 * Address:	8042C2A8
 * Size:	00003C
 */
bool WipeOutInFader::isWhite() { return (_74 ? _18 < 0.5 : _18 > 0.5); }

bool WipeOutInFader::isBlack() { return !isWhite(); }

/*
 * do_draw__14WipeOutInFaderFf
 * --INFO--
 * Address:	8042C31C
 * Size:	0000A8
 */
void WipeOutInFader::do_draw(float)
{
	if (_74) {
		if (!m_wipeOutFader._20) {
			_74               = 0;
			float v1          = _1C - 0.1f;
			m_wipeInFader._18 = 0.0f;
			m_wipeInFader._1C = v1;
			m_wipeInFader._20 = true;
			m_wipeInFader.on_start();
		}
		m_wipeOutFader.on_start();
	} else {
		m_wipeInFader.update();
	}
}

/*
 * __ct__10BlackFaderFv
 * --INFO--
 * Address:	8042C3C4
 * Size:	00007C
 */
BlackFader::BlackFader()
    : WipeBase()
{
	_24.channels.r = 0;
	_24.channels.g = 0;
	_24.channels.b = 0;
	_24.channels.a = 0;
	_28            = true;
}

/*
 * isWhite__10BlackFaderFv
 * --INFO--
 * Address:	8042C440
 * Size:	000010
 */
bool BlackFader::isWhite() { return !_28; }

/*
 * isBlack__10BlackFaderFv
 * --INFO--
 * Address:	8042C450
 * Size:	000008
 */
bool BlackFader::isBlack() { return _28; }

/*
 * do_draw__10BlackFaderFf
 * --INFO--
 * Address:	8042C458
 * Size:	000120
 */
void BlackFader::do_draw(float)
{
	// JUtility::TColor c0;
	// JUtility::TColor c1;
	// JUtility::TColor c2;
	// JUtility::TColor c3;
	// JUtility::TColor c4;
	Graphics* gfx = sys->m_gfx;
	gfx->m_orthoGraph.setPort();
	JUtility::TColor color(_24.channels.r, _24.channels.g, _24.channels.b, 0xFF);
	J2DOrthoGraph* orthoGraph = &gfx->m_orthoGraph;
	if (!_28) {
		color.channels.r = _24.channels.r;
		color.channels.g = _24.channels.g;
		color.channels.b = _24.channels.b;
		color.channels.a = 0x00;
	}
	// JUtility::TColor* c0 = &color;
	// JUtility::TColor* c1 = &color;
	// JUtility::TColor* c2 = &color;
	// JUtility::TColor* c3 = &color;
	// JUtility::TColor* c4 = &color;
	// orthoGraph->setColor(*c4, *c4, *c4, *c4);
	JUtility::TColor* c0[4];
	c0[3] = &color;
	c0[2] = &color;
	c0[1] = &color;
	c0[0] = &color;
	orthoGraph->setColor(*c0[0], *c0[1], *c0[2], *c0[3]);
	// orthoGraph->setColor(color, color, color, color);
	// c0.asU32 = color.asU32;
	// c1.asU32 = c0.asU32;
	// c2.asU32 = c0.asU32;
	// c3.asU32 = c0.asU32;
	// c4.asU32 = c0.asU32;
	// orthoGraph->setColor(c1, c2, c3, c4);
	// orthoGraph->setColor(*(JUtility::TColor*)(void*)(&color),
	// *(JUtility::TColor*)(void*)(&color), *(JUtility::TColor*)(void*)(&color),
	// *(JUtility::TColor*)(void*)(&color));
	u16 xfbHeight = System::getRenderModeObj()->xfbHeight;
	u16 efbHeight = System::getRenderModeObj()->efbHeight;
	float zero    = 0.0f;
	// JGeometry::TVec2f min(0.0f, 0.0f);
	// JGeometry::TVec2f max(min.x + xfbHeight, min.y + efbHeight);
	// JGeometry::TBox2f box(min, max);
	// JGeometry::TBox2f box(0.0f, 0.0f, 0.0f, 0.0f);
	// box.maxX += xfbHeight;
	// box.maxY += efbHeight;
	float xfbF = zero + xfbHeight;
	float efbF = zero + efbHeight;
	JGeometry::TBox2f box(0.0f, 0.0f, xfbF, efbF);
	orthoGraph->fillBox(box);
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	mr       r30, r3
	lwz      r4, sys@sda21(r13)
	lwz      r31, 0x24(r4)
	lwz      r12, 0xbc(r31)
	addi     r3, r31, 0xbc
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x28(r30)
	li       r3, 0xff
	lbz      r4, 0x24(r30)
	addi     r31, r31, 0xbc
	lbz      r5, 0x25(r30)
	cmplwi   r0, 0
	lbz      r6, 0x26(r30)
	stb      r4, 0x1c(r1)
	stb      r5, 0x1d(r1)
	stb      r6, 0x1e(r1)
	stb      r3, 0x1f(r1)
	bne      lbl_8042C4D0
	li       r0, 0
	stb      r4, 0x1c(r1)
	stb      r5, 0x1d(r1)
	stb      r6, 0x1e(r1)
	stb      r0, 0x1f(r1)

lbl_8042C4D0:
	lwz      r0, 0x1c(r1)
	mr       r3, r31
	addi     r4, r1, 0xc
	addi     r5, r1, 0x10
	stw      r0, 8(r1)
	addi     r6, r1, 0x14
	addi     r7, r1, 0x18
	stw      r0, 0x18(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0x10(r1)
	stw      r0, 0xc(r1)
	bl
setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
	bl       getRenderModeObj__6SystemFv
	lhz      r30, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r4, 4(r3)
	lis      r0, 0x4330
	lfs      f3, lbl_805205E8@sda21(r2)
	mr       r3, r31
	stw      r4, 0x34(r1)
	addi     r4, r1, 0x20
	lfd      f2, lbl_80520600@sda21(r2)
	stw      r0, 0x30(r1)
	lfd      f0, 0x30(r1)
	stw      r30, 0x3c(r1)
	fsubs    f1, f0, f2
	stw      r0, 0x38(r1)
	lfd      f0, 0x38(r1)
	fadds    f1, f3, f1
	stfs     f3, 0x20(r1)
	fsubs    f0, f0, f2
	stfs     f3, 0x24(r1)
	fadds    f0, f3, f0
	stfs     f1, 0x28(r1)
	stfs     f0, 0x2c(r1)
	bl       "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000164
 */
BallFader::BallFader(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
BallFader::Ball::Ball(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void BallFader::on_start()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void BallFader::do_draw(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void BallFader::computeForces()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000180
 */
void BallFader::emitBalls(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00017C
 */
void drawBall(Graphics&, Vector2<float>, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000334
 */
void drawBall2(Graphics&, Vector2<float>, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void BallFader::drawAll()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
void BallFader::simulate()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000324
 */
void BallFader::resolveCollision()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void BallFader::birth()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
BallFader::~BallFader()
{
	// UNUSED FUNCTION
}

// /*
//  * --INFO--
//  * Address:	8042C578
//  * Size:	000008
//  */
// bool WipeBase::isWhite() { return false; }

// /*
//  * --INFO--
//  * Address:	8042C580
//  * Size:	000008
//  */
// bool WipeBase::isBlack() { return false; }

// /*
//  * __dt__10BlackFaderFv
//  * --INFO--
//  * Address:	8042C588
//  * Size:	000070
//  */
// BlackFader::~BlackFader() { }

// /*
//  * __dt__14WipeOutInFaderFv
//  * --INFO--
//  * Address:	8042C5F8
//  * Size:	0000E0
//  */
// WipeOutInFader::~WipeOutInFader()
// {
// }

/*
 * --INFO--
 * Address:	8042C6D8
 * Size:	000028
 */
void __sinit_wipe_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804EBED8@ha
	stw      r0, lbl_805161C0@sda21(r13)
	stfsu    f0, lbl_804EBED8@l(r3)
	stfs     f0, lbl_805161C4@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
