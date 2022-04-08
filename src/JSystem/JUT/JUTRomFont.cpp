#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JUT/JUTFont.h"
#include "types.h"

/*
    Generated from dpostproc

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_80474280:
    .asciz "Font Encode Type %d\n"
.balign 4
lbl_80474298:
    .asciz "IPLROM fontdata size : %u\n"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global saoAboutEncoding___10JUTRomFont
saoAboutEncoding___10JUTRomFont:
    .4byte 0x00000000
    .4byte 0x00020120
    .4byte isLeadByte_1Byte__7JUTFontFi
    .4byte 0x00000002
    .4byte 0x00120F00
    .4byte isLeadByte_ShiftJIS__7JUTFontFi
.global __vt__10JUTRomFont
__vt__10JUTRomFont:
    .4byte 0
    .4byte 0
    .4byte __dt__10JUTRomFontFv
    .4byte setGX__10JUTRomFontFv
    .4byte setGX__7JUTFontFQ28JUtility6TColorQ28JUtility6TColor
    .4byte drawChar_scale__10JUTRomFontFffffib
    .4byte getLeading__10JUTRomFontCFv
    .4byte getAscent__10JUTRomFontCFv
    .4byte getDescent__10JUTRomFontCFv
    .4byte getHeight__10JUTRomFontCFv
    .4byte getWidth__10JUTRomFontCFv
    .4byte getWidthEntry__10JUTRomFontCFiPQ27JUTFont6TWidth
    .4byte getCellWidth__10JUTRomFontCFv
    .4byte getCellHeight__10JUTRomFontCFv
    .4byte getFontType__10JUTRomFontCFv
    .4byte getResFont__10JUTRomFontCFv
    .4byte isLeadByte__10JUTRomFontCFi

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global spAboutEncoding___10JUTRomFont
spAboutEncoding___10JUTRomFont:
    .skip 0x4
.global spFontHeader___10JUTRomFont
spFontHeader___10JUTRomFont:
    .skip 0x4
.global suFontHeaderRefered___10JUTRomFont
suFontHeaderRefered___10JUTRomFont:
    .skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_805166F8:
    .float 0.0
lbl_805166FC:
    .float 0.5
.balign 8
lbl_80516700:
    .4byte 0x43300000
    .4byte 0x80000000
*/
JUTRomFont::AboutEncoding JUTRomFont::saoAboutEncoding_[2]
    = { 0, 0x00020120, &JUTFont::isLeadByte_1Byte, 2, 0x00120F00, &JUTFont::isLeadByte_ShiftJIS };
/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
JUTRomFont::JUTRomFont()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8003264C
 * Size:	000054
 */
JUTRomFont::JUTRomFont(JKRHeap* heap) { initiate(heap); }

/*
 * --INFO--
 * Address:	800326A0
 * Size:	000054
 */
void JUTRomFont::initiate(JKRHeap* heap)
{
	_04 = false;
	JUTFont::initialize_state();
	JUTRomFont::loadImage(heap);
	_04 = true;
}

/*
 * --INFO--
 * Address:	800326F4
 * Size:	00009C
 */
JUTRomFont::~JUTRomFont()
{
	if (--suFontHeaderRefered_ == 0) {
		JKRHeap::free(spFontHeader_, nullptr);
		spFontHeader_    = nullptr;
		spAboutEncoding_ = nullptr;
	}
	_04 = false;
}

/*
 * --INFO--
 * Address:	80032790
 * Size:	0000CC
 */
void JUTRomFont::loadImage(JKRHeap* param_1)
{
	u32 byteCount;

	if (param_1 == nullptr) {
		param_1 = JKRHeap::sCurrentHeap;
	}
	if (spFontHeader_ == nullptr) {
		JUTReportConsole_f("Font Encode Type %d\n", OSGetFontEncode());
		spAboutEncoding_ = &saoAboutEncoding_[OSGetFontEncode()];
		byteCount        = (spAboutEncoding_->m_dataSize);
		JUTReportConsole_f("IPLROM fontdata size : %u\n", byteCount);
		spFontHeader_ = (FontHeader*)JKRHeap::alloc(byteCount, 0x20, param_1);
		OSInitFont();
		_08 = spFontHeader_->m_width;
	}
	suFontHeaderRefered_++;
}

/*
 * --INFO--
 * Address:	8003285C
 * Size:	0000F8
 * TODO: finish GX enums
 */
void JUTRomFont::setGX(void)
{
	GXSetNumChans(1);
	GXSetNumTevStages(1);
	GXSetNumTexGens(1);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP0, 4);
	GXSetChanCtrl(4, GX_DISABLE, 0, 1, 0, 0, 2);
	GXSetTevOp(0, 0);
	GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_SET);
	GXSetVtxAttrFmt(0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXSetVtxAttrFmt(0, GX_VA_CLR0, GX_POS_XYZ, GX_RGB565, 0);
	GXSetVtxAttrFmt(0, GX_VA_TEX0, GX_POS_XYZ, GX_U16, 0xf);
	GXClearVtxDesc();
	GXSetVtxDesc(9, 1);
	GXSetVtxDesc(0xb, 1);
	GXSetVtxDesc(0xd, 1);
}

/*
 * --INFO--
 * Address:	80032954
 * Size:	000480
 */
float JUTRomFont::drawChar_scale(float, float, float, float, int, bool)
{
	/*
	stwu     r1, -0x160(r1)
	mflr     r0
	stw      r0, 0x164(r1)
	stfd     f31, 0x150(r1)
	psq_st   f31, 344(r1), 0, qr0
	stfd     f30, 0x140(r1)
	psq_st   f30, 328(r1), 0, qr0
	stfd     f29, 0x130(r1)
	psq_st   f29, 312(r1), 0, qr0
	stfd     f28, 0x120(r1)
	psq_st   f28, 296(r1), 0, qr0
	stfd     f27, 0x110(r1)
	psq_st   f27, 280(r1), 0, qr0
	stfd     f26, 0x100(r1)
	psq_st   f26, 264(r1), 0, qr0
	stmw     r26, 0xe8(r1)
	or.      r27, r4, r4
	fmr      f28, f1
	fmr      f30, f2
	mr       r26, r3
	fmr      f27, f3
	fmr      f26, f4
	bne      lbl_800329B8
	lfs      f1, lbl_805166F8@sda21(r2)
	b        lbl_80032D90

lbl_800329B8:
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x44(r1)
	mr       r3, r26
	lwz      r12, 0(r26)
	stw      r0, 0x40(r1)
	lfd      f1, lbl_80516700@sda21(r2)
	lfd      f0, 0x40(r1)
	lwz      r12, 0x34(r12)
	fsubs    f0, f0, f1
	fdivs    f31, f27, f0
	mtctr    r12
	bctrl
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x4c(r1)
	cmpwi    r27, 0x100
	lfd      f1, lbl_80516700@sda21(r2)
	addi     r3, r1, 8
	stw      r0, 0x48(r1)
	lfd      f0, 0x48(r1)
	fsubs    f0, f0, f1
	fdivs    f29, f26, f0
	blt      lbl_80032A34
	srawi    r0, r27, 8
	addi     r3, r3, 1
	stb      r0, 8(r1)

lbl_80032A34:
	stb      r27, 0(r3)
	addi     r3, r1, 8
	addi     r4, r1, 0x14
	addi     r5, r1, 0x10
	addi     r6, r1, 0xc
	addi     r7, r1, 0x18
	bl       OSGetFontTexture
	lwz      r4, 0x14(r1)
	addi     r3, r1, 0x1c
	li       r5, 0x200
	li       r6, 0x200
	li       r7, 0
	li       r8, 0
	li       r9, 0
	li       r10, 0
	bl       GXInitTexObj
	lfs      f1, lbl_805166F8@sda21(r2)
	addi     r3, r1, 0x1c
	li       r4, 1
	li       r5, 1
	fmr      f2, f1
	li       r6, 0
	fmr      f3, f1
	li       r7, 0
	li       r8, 0
	bl       GXInitTexObjLOD
	addi     r3, r1, 0x1c
	li       r4, 0
	bl       GXLoadTexObj
	lbz      r0, 5(r26)
	cmplwi   r0, 0
	beq      lbl_80032AC4
	lwz      r3, 0x18(r1)
	lwz      r0, 8(r26)
	subf     r31, r3, r0
	b        lbl_80032AC8

lbl_80032AC4:
	li       r31, 0

lbl_80032AC8:
	lis      r4, 0x4330
	xoris    r0, r31, 0x8000
	stw      r0, 0x4c(r1)
	mr       r3, r26
	lwz      r0, 0x18(r1)
	stw      r4, 0x48(r1)
	lfd      f3, lbl_80516700@sda21(r2)
	xoris    r0, r0, 0x8000
	lfd      f0, 0x48(r1)
	lwz      r12, 0(r26)
	fsubs    f0, f0, f3
	stw      r0, 0x44(r1)
	lfs      f1, lbl_805166FC@sda21(r2)
	stw      r4, 0x40(r1)
	fmuls    f2, f31, f0
	lwz      r12, 0x1c(r12)
	lfd      f0, 0x40(r1)
	fmadds   f28, f2, f1, f28
	fsubs    f0, f0, f3
	fmadds   f27, f0, f31, f28
	mtctr    r12
	bctrl
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x54(r1)
	mr       r3, r26
	lwz      r12, 0(r26)
	stw      r0, 0x50(r1)
	lfd      f1, lbl_80516700@sda21(r2)
	lfd      f0, 0x50(r1)
	lwz      r12, 0x20(r12)
	fsubs    f0, f0, f1
	fnmsubs  f26, f29, f0, f30
	mtctr    r12
	bctrl
	xoris    r6, r3, 0x8000
	lis      r5, 0x4330
	lwz      r7, 0x10(r1)
	mr       r3, r26
	lwz      r0, 0x18(r1)
	slwi     r4, r7, 0xf
	stw      r6, 0x5c(r1)
	srawi    r4, r4, 9
	add      r0, r7, r0
	stw      r5, 0x58(r1)
	addze    r30, r4
	slwi     r4, r0, 0xf
	lwz      r0, 0xc(r1)
	lwz      r12, 0(r26)
	srawi    r4, r4, 9
	lfd      f1, lbl_80516700@sda21(r2)
	addze    r29, r4
	lfd      f0, 0x58(r1)
	slwi     r0, r0, 0xf
	srawi    r0, r0, 9
	lwz      r12, 0x24(r12)
	fsubs    f0, f0, f1
	addze    r28, r0
	fmadds   f29, f29, f0, f30
	mtctr    r12
	bctrl
	lwz      r0, 0xc(r1)
	li       r4, 0
	li       r5, 4
	add      r0, r0, r3
	li       r3, 0x80
	slwi     r0, r0, 0xf
	srawi    r0, r0, 9
	addze    r27, r0
	bl       GXBegin
	fctiwz   f7, f28
	lis      r0, 0x4330
	fctiwz   f2, f26
	stw      r0, 0x68(r1)
	fctiwz   f3, f27
	lfd      f6, lbl_80516700@sda21(r2)
	stfd     f7, 0x60(r1)
	fctiwz   f1, f29
	lis      r3, 0xCC008000@ha
	lfs      f4, lbl_805166F8@sda21(r2)
	stfd     f2, 0x70(r1)
	lwz      r5, 0x64(r1)
	lwz      r4, 0x74(r1)
	extsh    r5, r5
	stw      r0, 0x78(r1)
	xoris    r5, r5, 0x8000
	extsh    r4, r4
	stw      r5, 0x6c(r1)
	xoris    r5, r4, 0x8000
	lfd      f0, 0x68(r1)
	stfd     f3, 0x80(r1)
	fsubs    f5, f0, f6
	stw      r5, 0x7c(r1)
	lwz      r4, 0x84(r1)
	lfd      f0, 0x78(r1)
	extsh    r4, r4
	stfs     f5, 0xCC008000@l(r3)
	fsubs    f0, f0, f6
	xoris    r5, r4, 0x8000
	stfd     f2, 0x90(r1)
	stfs     f0, -0x8000(r3)
	lwz      r4, 0x94(r1)
	stfs     f4, -0x8000(r3)
	extsh    r4, r4
	xoris    r6, r4, 0x8000
	lwz      r4, 0xc(r26)
	stw      r5, 0x8c(r1)
	stw      r0, 0x88(r1)
	stw      r4, -0x8000(r3)
	lfd      f0, 0x88(r1)
	sth      r30, -0x8000(r3)
	fsubs    f2, f0, f6
	sth      r28, -0x8000(r3)
	stfd     f3, 0xa0(r1)
	lwz      r5, 0xa4(r1)
	stfd     f1, 0xb0(r1)
	extsh    r5, r5
	lwz      r4, 0xb4(r1)
	xoris    r5, r5, 0x8000
	stw      r6, 0x9c(r1)
	extsh    r4, r4
	stw      r0, 0x98(r1)
	xoris    r4, r4, 0x8000
	lfd      f0, 0x98(r1)
	stfs     f2, -0x8000(r3)
	fsubs    f0, f0, f6
	stw      r5, 0xac(r1)
	stfs     f0, -0x8000(r3)
	stfs     f4, -0x8000(r3)
	lwz      r5, 0x10(r26)
	stw      r0, 0xa8(r1)
	stw      r5, -0x8000(r3)
	lfd      f0, 0xa8(r1)
	sth      r29, -0x8000(r3)
	fsubs    f2, f0, f6
	sth      r28, -0x8000(r3)
	stw      r4, 0xbc(r1)
	stw      r0, 0xb8(r1)
	lfd      f0, 0xb8(r1)
	stfs     f2, -0x8000(r3)
	fsubs    f0, f0, f6
	stfs     f0, -0x8000(r3)
	stfd     f7, 0xc0(r1)
	lwz      r4, 0xc4(r1)
	stfs     f4, -0x8000(r3)
	extsh    r5, r4
	stfd     f1, 0xd0(r1)
	xoris    r5, r5, 0x8000
	lwz      r6, 0x18(r26)
	lwz      r4, 0xd4(r1)
	stw      r6, -0x8000(r3)
	extsh    r4, r4
	xoris    r4, r4, 0x8000
	sth      r29, -0x8000(r3)
	stw      r5, 0xcc(r1)
	stw      r0, 0xc8(r1)
	lfd      f0, 0xc8(r1)
	stw      r4, 0xdc(r1)
	fsubs    f1, f0, f6
	stw      r0, 0xd8(r1)
	lfd      f0, 0xd8(r1)
	sth      r27, -0x8000(r3)
	fsubs    f0, f0, f6
	stfs     f1, -0x8000(r3)
	stfs     f0, -0x8000(r3)
	stfs     f4, -0x8000(r3)
	stw      r0, 0xe0(r1)
	lwz      r0, 0x14(r26)
	stw      r0, -0x8000(r3)
	sth      r30, -0x8000(r3)
	sth      r27, -0x8000(r3)
	lwz      r0, 0x18(r1)
	add      r0, r0, r31
	xoris    r0, r0, 0x8000
	stw      r0, 0xe4(r1)
	lfd      f0, 0xe0(r1)
	fsubs    f0, f0, f6
	fmuls    f1, f31, f0

lbl_80032D90:
	psq_l    f31, 344(r1), 0, qr0
	lfd      f31, 0x150(r1)
	psq_l    f30, 328(r1), 0, qr0
	lfd      f30, 0x140(r1)
	psq_l    f29, 312(r1), 0, qr0
	lfd      f29, 0x130(r1)
	psq_l    f28, 296(r1), 0, qr0
	lfd      f28, 0x120(r1)
	psq_l    f27, 280(r1), 0, qr0
	lfd      f27, 0x110(r1)
	psq_l    f26, 264(r1), 0, qr0
	lfd      f26, 0x100(r1)
	lmw      r26, 0xe8(r1)
	lwz      r0, 0x164(r1)
	mtlr     r0
	addi     r1, r1, 0x160
	blr
	*/
}

/*
 * --INFO--
 * Address:	80032DD4
 * Size:	00005C
 */
u16 JUTRomFont::getHeight() const
{
	return getAscent() + getDescent();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	add      r3, r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80032E30
 * Size:	00000C
 */
u16 JUTRomFont::getDescent() const { return spFontHeader_->m_descent; }

/*
 * --INFO--
 * Address:	80032E3C
 * Size:	00000C
 */
u16 JUTRomFont::getAscent() const { return spFontHeader_->m_ascent; }

/*
 * --INFO--
 * Address:	80032E48
 * Size:	00000C
 */
u16 JUTRomFont::getCellHeight() const { return spFontHeader_->m_cellHeight; }

/*
 * --INFO--
 * Address:	80032E54
 * Size:	00000C
 */
u16 JUTRomFont::getCellWidth() const { return spFontHeader_->m_cellWidth; }

/*
 * --INFO--
 * Address:	80032E60
 * Size:	000060
 */
void JUTRomFont::getWidthEntry(int, JUTFont::TWidth*) const
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	cmpwi    r4, 0x100
	stw      r0, 0x24(r1)
	addi     r3, r1, 8
	stw      r31, 0x1c(r1)
	mr       r31, r5
	blt      lbl_80032E8C
	srawi    r0, r4, 8
	addi     r3, r3, 1
	stb      r0, 8(r1)

lbl_80032E8C:
	stb      r4, 0(r3)
	addi     r3, r1, 8
	addi     r4, r1, 0xc
	bl       OSGetFontWidth
	lwz      r3, 0xc(r1)
	li       r0, 0
	stb      r3, 1(r31)
	stb      r0, 0(r31)
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80032EC0
 * Size:	000030
 */
bool JUTRomFont::isLeadByte(int c) const { return spAboutEncoding_->m_isLeadByteFunction(c); }

/*
 * --INFO--
 * Address:	80032EF0
 * Size:	00000C
 */
u16 JUTRomFont::getWidth() const
{
	return spFontHeader_->m_width;
	/*
	lwz      r3, spFontHeader___10JUTRomFont@sda21(r13)
	lhz      r3, 0xc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80032EFC
 * Size:	00000C
 */
u16 JUTRomFont::getLeading() const { return spFontHeader_->m_leading; }

/*
 * --INFO--
 * Address:	80032F08
 * Size:	000008
 */
ResFONT* JUTRomFont::getResFont() const { return nullptr; }

/*
 * --INFO--
 * Address:	80032F10
 * Size:	00000C
 */
u32 JUTRomFont::getFontType() const { return spAboutEncoding_->m_fontType; }
