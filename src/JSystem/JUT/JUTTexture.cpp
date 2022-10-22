#include "JSystem/JUT/JUTTexture.h"
#include "Dolphin/gx.h"
#include "Dolphin/os.h"
#include "JSystem/JUT/JUTPalette.h"
#include "JSystem/ResTIMG.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516708
    lbl_80516708:
        .4byte 0x3E000000
    .global lbl_8051670C
    lbl_8051670C:
        .4byte 0x42C80000
    .global lbl_80516710
    lbl_80516710:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_80516718
    lbl_80516718:
        .4byte 0x43300000
        .4byte 0x80000000
*/

/*
 * --INFO--
 * Address:	80032F1C
 * Size:	0000F4
 */
JUTTexture::JUTTexture(int sizeX, int sizeY, _GXTexFmt textureFormat)
{
	m_flags                  = (m_flags & 2) | 1;
	u32 texBufferSize        = GXGetTexBufferSize(sizeX, sizeY, textureFormat, 0, 1);
	_3C                      = reinterpret_cast<ResTIMG*>(new u8[texBufferSize]);
	_3C->m_textureFormat     = textureFormat;
	_3C->m_transparency      = 0;
	_3C->m_sizeX             = sizeX;
	_3C->m_sizeY             = sizeY;
	_3C->m_wrapS             = 0;
	_3C->m_wrapT             = 0;
	_3C->m_paletteFormat     = 0;
	_3C->m_lutFormat         = 0;
	_3C->m_paletteEntryCount = 0;
	_3C->m_paletteOffset     = 0;
	_3C->_10                 = GX_FALSE;
	_3C->_11                 = GX_FALSE;
	_3C->_12                 = GX_FALSE;
	_3C->_13                 = GX_FALSE;
	_3C->m_magFilterType     = 1;
	_3C->m_minFilterType     = 1;
	_3C->_16                 = 0;
	_3C->_17                 = 0;
	_3C->m_totalImageCount   = 1;
	_3C->_1A                 = 0;
	_3C->m_imageDataOffset   = 0x20;
	_28                      = nullptr;
	storeTIMG(_3C, '\0');
	DCFlushRange(_24, texBufferSize);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	li       r7, 1
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r30, r6
	mr       r27, r3
	mr       r28, r4
	mr       r29, r5
	li       r6, 0
	lbz      r0, 0x3b(r3)
	clrlwi   r3, r4, 0x10
	clrlwi   r4, r5, 0x10
	mr       r5, r30
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	ori      r0, r0, 1
	stb      r0, 0x3b(r27)
	bl       GXGetTexBufferSize
	mr       r31, r3
	li       r4, 0x20
	addi     r3, r31, 0x20
	bl       __nwa__FUli
	stw      r3, 0x3c(r27)
	li       r7, 0
	li       r6, 1
	li       r0, 0x20
	lwz      r4, 0x3c(r27)
	mr       r3, r27
	li       r5, 0
	stb      r30, 0(r4)
	stb      r7, 1(r4)
	sth      r28, 2(r4)
	sth      r29, 4(r4)
	stb      r7, 6(r4)
	stb      r7, 7(r4)
	stb      r7, 8(r4)
	stb      r7, 9(r4)
	sth      r7, 0xa(r4)
	stw      r7, 0xc(r4)
	stb      r7, 0x10(r4)
	stb      r7, 0x11(r4)
	stb      r7, 0x12(r4)
	stb      r7, 0x13(r4)
	stb      r6, 0x14(r4)
	stb      r6, 0x15(r4)
	stb      r7, 0x16(r4)
	stb      r7, 0x17(r4)
	stb      r6, 0x18(r4)
	sth      r7, 0x1a(r4)
	stw      r0, 0x1c(r4)
	stw      r7, 0x28(r27)
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lwz      r3, 0x24(r27)
	mr       r4, r31
	bl       DCFlushRange
	mr       r3, r27
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80033010
 * Size:	000074
 */
JUTTexture::~JUTTexture()
{
	if (m_flags & 1) {
		delete[] _3C;
	}
	if (m_flags & 2) {
		delete _28;
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80033068
	lbz      r0, 0x3b(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80033044
	lwz      r3, 0x3c(r30)
	bl       __dla__FPv

lbl_80033044:
	lbz      r0, 0x3b(r30)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_80033058
	lwz      r3, 0x28(r30)
	bl       __dl__FPv

lbl_80033058:
	extsh.   r0, r31
	ble      lbl_80033068
	mr       r3, r30
	bl       __dl__FPv

lbl_80033068:
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
 * Address:	80033084
 * Size:	0001AC
 */
void JUTTexture::storeTIMG(const ResTIMG*, unsigned char)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	cmplwi   r4, 0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	beq      lbl_80033214
	clrlwi   r0, r5, 0x18
	cmplwi   r0, 0x10
	bge      lbl_80033214
	stw      r4, 0x20(r31)
	lwz      r3, 0x20(r31)
	lwz      r0, 0x1c(r3)
	add      r0, r3, r0
	stw      r0, 0x24(r31)
	lwz      r3, 0x20(r31)
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0
	bne      lbl_800330E0
	addi     r0, r3, 0x20
	stw      r0, 0x24(r31)

lbl_800330E0:
	li       r0, 0
	stw      r0, 0x2c(r31)
	stb      r0, 0x3a(r31)
	lwz      r3, 0x20(r31)
	lbz      r0, 6(r3)
	stb      r0, 0x30(r31)
	lwz      r3, 0x20(r31)
	lbz      r0, 7(r3)
	stb      r0, 0x31(r31)
	lwz      r3, 0x20(r31)
	lbz      r0, 0x14(r3)
	stb      r0, 0x32(r31)
	lwz      r3, 0x20(r31)
	lbz      r0, 0x15(r3)
	stb      r0, 0x33(r31)
	lwz      r3, 0x20(r31)
	lbz      r0, 0x16(r3)
	extsb    r0, r0
	sth      r0, 0x34(r31)
	lwz      r3, 0x20(r31)
	lbz      r0, 0x17(r3)
	extsb    r0, r0
	sth      r0, 0x36(r31)
	lwz      r3, 0x20(r31)
	lha      r0, 0x1a(r3)
	sth      r0, 0x38(r31)
	lwz      r8, 0x20(r31)
	lhz      r7, 0xa(r8)
	cmplwi   r7, 0
	bne      lbl_80033164
	mr       r3, r31
	bl       initTexObj__10JUTTextureFv
	b        lbl_80033214

lbl_80033164:
	cmplwi   r7, 0x100
	ble      lbl_8003318C
	clrlwi   r3, r5, 0x18
	slwi     r0, r5, 0x1e
	srwi     r3, r3, 0x1f
	subf     r0, r3, r0
	rotlwi   r0, r0, 2
	add      r3, r0, r3
	addi     r29, r3, 0x10
	b        lbl_80033190

lbl_8003318C:
	clrlwi   r29, r5, 0x18

lbl_80033190:
	lwz      r3, 0x28(r31)
	cmplwi   r3, 0
	beq      lbl_800331A8
	lbz      r0, 0x3b(r31)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	bne      lbl_800331F0

lbl_800331A8:
	li       r3, 0x18
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_800331D8
	lwz      r7, 0x20(r31)
	mr       r4, r29
	lwz      r0, 0xc(r7)
	lbz      r5, 9(r7)
	lbz      r6, 1(r7)
	add      r8, r7, r0
	lhz      r7, 0xa(r7)
	bl       storeTLUT__10JUTPaletteF7_GXTlut10_GXTlutFmt15JUTTransparencyUsPv

lbl_800331D8:
	stw      r30, 0x28(r31)
	lbz      r0, 0x3b(r31)
	clrlwi   r0, r0, 0x1f
	ori      r0, r0, 2
	stb      r0, 0x3b(r31)
	b        lbl_80033208

lbl_800331F0:
	lwz      r0, 0xc(r8)
	mr       r4, r29
	lbz      r5, 9(r8)
	lbz      r6, 1(r8)
	add      r8, r8, r0
	bl       storeTLUT__10JUTPaletteF7_GXTlut10_GXTlutFmt15JUTTransparencyUsPv

lbl_80033208:
	lwz      r4, 0x28(r31)
	mr       r3, r31
	bl       attachPalette__10JUTTextureFP10JUTPalette

lbl_80033214:
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
 * Address:	80033230
 * Size:	000034
 */
void JUTTexture::storeTIMG(const ResTIMG* img, JUTPalette* palette)
{
	storeTIMG(img, palette, palette == nullptr ? GX_TLUT0 : palette->m_tlutID);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r5, 0
	stw      r0, 0x14(r1)
	beq      lbl_8003324C
	lbz      r6, 0xc(r5)
	b        lbl_80033250

lbl_8003324C:
	li       r6, 0

lbl_80033250:
	bl       storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette7_GXTlut
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80033264
 * Size:	000138
 */
void JUTTexture::storeTIMG(const ResTIMG*, JUTPalette*, _GXTlut)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	cmplwi   r4, 0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	mr       r30, r6
	stw      r29, 0x14(r1)
	mr       r29, r5
	beq      lbl_80033380
	stw      r4, 0x20(r31)
	lwz      r3, 0x20(r31)
	lwz      r0, 0x1c(r3)
	add      r0, r3, r0
	stw      r0, 0x24(r31)
	lwz      r3, 0x20(r31)
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0
	bne      lbl_800332BC
	addi     r0, r3, 0x20
	stw      r0, 0x24(r31)

lbl_800332BC:
	lbz      r0, 0x3b(r31)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_800332D0
	lwz      r3, 0x28(r31)
	bl       __dl__FPv

lbl_800332D0:
	stw      r29, 0x28(r31)
	cmplwi   r29, 0
	li       r0, 0
	lbz      r3, 0x3b(r31)
	clrlwi   r3, r3, 0x1f
	stb      r3, 0x3b(r31)
	stw      r0, 0x2c(r31)
	beq      lbl_8003331C
	stb      r30, 0x3a(r31)
	lbz      r0, 0xc(r29)
	cmpw     r30, r0
	beq      lbl_8003331C
	lbz      r5, 0xd(r29)
	mr       r3, r29
	lbz      r6, 0x16(r29)
	mr       r4, r30
	lhz      r7, 0x14(r29)
	lwz      r8, 0x10(r29)
	bl       storeTLUT__10JUTPaletteF7_GXTlut10_GXTlutFmt15JUTTransparencyUsPv

lbl_8003331C:
	lwz      r4, 0x20(r31)
	mr       r3, r31
	lbz      r0, 6(r4)
	stb      r0, 0x30(r31)
	lwz      r4, 0x20(r31)
	lbz      r0, 7(r4)
	stb      r0, 0x31(r31)
	lwz      r4, 0x20(r31)
	lbz      r0, 0x14(r4)
	stb      r0, 0x32(r31)
	lwz      r4, 0x20(r31)
	lbz      r0, 0x15(r4)
	stb      r0, 0x33(r31)
	lwz      r4, 0x20(r31)
	lbz      r0, 0x16(r4)
	extsb    r0, r0
	sth      r0, 0x34(r31)
	lwz      r4, 0x20(r31)
	lbz      r0, 0x17(r4)
	extsb    r0, r0
	sth      r0, 0x36(r31)
	lwz      r4, 0x20(r31)
	lha      r0, 0x1a(r4)
	sth      r0, 0x38(r31)
	bl       init__10JUTTextureFv

lbl_80033380:
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
 * Address:	8003339C
 * Size:	000058
 */
void JUTTexture::attachPalette(JUTPalette* palette)
{
	if (_20->m_paletteFormat == 0) {
		return;
	}
	if (palette == nullptr && _28 != nullptr) {
		_2C = _28;
	} else {
		_2C = palette;
	}
	initTexObj(_2C->m_tlutID);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r5, 0x20(r3)
	lbz      r0, 8(r5)
	cmplwi   r0, 0
	beq      lbl_800333E4
	cmplwi   r4, 0
	bne      lbl_800333D4
	lwz      r0, 0x28(r3)
	cmplwi   r0, 0
	beq      lbl_800333D4
	stw      r0, 0x2c(r3)
	b        lbl_800333D8

lbl_800333D4:
	stw      r4, 0x2c(r3)

lbl_800333D8:
	lwz      r4, 0x2c(r3)
	lbz      r4, 0xc(r4)
	bl       initTexObj__10JUTTextureF7_GXTlut

lbl_800333E4:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800333F4
 * Size:	000050
 */
void JUTTexture::init()
{
	if (_20->m_paletteEntryCount == 0) {
		initTexObj();
	} else if (_28 != nullptr) {
		_2C = _28;
		initTexObj(_2C->m_tlutID);
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r4, 0x20(r3)
	lhz      r0, 0xa(r4)
	cmplwi   r0, 0
	bne      lbl_80033418
	bl       initTexObj__10JUTTextureFv
	b        lbl_80033434

lbl_80033418:
	lwz      r0, 0x28(r3)
	cmplwi   r0, 0
	beq      lbl_80033434
	stw      r0, 0x2c(r3)
	lwz      r4, 0x2c(r3)
	lbz      r4, 0xc(r4)
	bl       initTexObj__10JUTTextureF7_GXTlut

lbl_80033434:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80033444
 * Size:	0000F0
 */
void JUTTexture::initTexObj()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	li       r0, 0x20
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lwz      r7, 0x20(r3)
	lbz      r4, 0x10(r7)
	lwz      r5, 0x1c(r7)
	neg      r3, r4
	or       r3, r3, r4
	cmplwi   r5, 0
	srwi     r10, r3, 0x1f
	beq      lbl_80033480
	mr       r0, r5

lbl_80033480:
	add      r4, r7, r0
	lhz      r5, 2(r7)
	lhz      r6, 4(r7)
	mr       r3, r31
	lbz      r7, 0(r7)
	lbz      r8, 0x30(r31)
	lbz      r9, 0x31(r31)
	bl       GXInitTexObj
	lha      r0, 0x38(r31)
	lis      r5, 0x4330
	lwz      r8, 0x20(r31)
	mr       r3, r31
	xoris    r0, r0, 0x8000
	lhz      r4, 0x34(r31)
	stw      r0, 0x1c(r1)
	lhz      r0, 0x36(r31)
	stw      r5, 0x18(r1)
	lfd      f2, lbl_80516718@sda21(r2)
	lfd      f1, 0x18(r1)
	lfs      f0, lbl_8051670C@sda21(r2)
	fsubs    f1, f1, f2
	stw      r4, 0xc(r1)
	lfd      f4, lbl_80516710@sda21(r2)
	stw      r5, 8(r1)
	fdivs    f3, f1, f0
	lfs      f2, lbl_80516708@sda21(r2)
	lfd      f1, 8(r1)
	stw      r0, 0x14(r1)
	lbz      r4, 0x32(r31)
	stw      r5, 0x10(r1)
	lfd      f0, 0x10(r1)
	fsubs    f1, f1, f4
	lbz      r5, 0x33(r31)
	fsubs    f0, f0, f4
	lbz      r6, 0x12(r8)
	fmuls    f1, f1, f2
	lbz      r7, 0x11(r8)
	lbz      r8, 0x13(r8)
	fmuls    f2, f0, f2
	bl       GXInitTexObjLOD
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80033534
 * Size:	0000FC
 */
void JUTTexture::initTexObj(_GXTlut)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	li       r0, 0x20
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lwz      r3, 0x20(r3)
	lbz      r5, 0x10(r3)
	stb      r4, 0x3a(r31)
	neg      r3, r5
	or       r3, r3, r5
	lwz      r7, 0x20(r31)
	srwi     r10, r3, 0x1f
	lwz      r3, 0x1c(r7)
	cmplwi   r3, 0
	beq      lbl_80033578
	mr       r0, r3

lbl_80033578:
	stw      r4, 8(r1)
	add      r4, r7, r0
	mr       r3, r31
	lhz      r5, 2(r7)
	lhz      r6, 4(r7)
	lbz      r7, 0(r7)
	lbz      r8, 0x30(r31)
	lbz      r9, 0x31(r31)
	bl       GXInitTexObjCI
	lha      r0, 0x38(r31)
	lis      r5, 0x4330
	lwz      r8, 0x20(r31)
	mr       r3, r31
	xoris    r0, r0, 0x8000
	lhz      r4, 0x34(r31)
	stw      r0, 0x24(r1)
	lhz      r0, 0x36(r31)
	stw      r5, 0x20(r1)
	lfd      f2, lbl_80516718@sda21(r2)
	lfd      f1, 0x20(r1)
	lfs      f0, lbl_8051670C@sda21(r2)
	fsubs    f1, f1, f2
	stw      r4, 0x14(r1)
	lfd      f4, lbl_80516710@sda21(r2)
	stw      r5, 0x10(r1)
	fdivs    f3, f1, f0
	lfs      f2, lbl_80516708@sda21(r2)
	lfd      f1, 0x10(r1)
	stw      r0, 0x1c(r1)
	lbz      r4, 0x32(r31)
	stw      r5, 0x18(r1)
	lfd      f0, 0x18(r1)
	fsubs    f1, f1, f4
	lbz      r5, 0x33(r31)
	fsubs    f0, f0, f4
	lbz      r6, 0x12(r8)
	fmuls    f1, f1, f2
	lbz      r7, 0x11(r8)
	lbz      r8, 0x13(r8)
	fmuls    f2, f0, f2
	bl       GXInitTexObjLOD
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80033630
 * Size:	000050
 */
void JUTTexture::load(_GXTexMapID id)
{
	if (_2C != nullptr) {
		_2C->load();
	}
	GXLoadTexObj(this, id);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x2c(r3)
	cmplwi   r3, 0
	beq      lbl_8003365C
	bl       load__10JUTPaletteFv

lbl_8003365C:
	mr       r3, r30
	mr       r4, r31
	bl       GXLoadTexObj
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
 * Address:	80033680
 * Size:	0000C4
 */
void JUTTexture::capture(int p1, int p2, _GXTexFmt textureFormat, bool p4, unsigned char p5)
{
	if ((m_flags & 1) == 0) {
		return;
	}
	if (p4) {
		GXSetTexCopySrc(p1, p2, _20->m_sizeX << 1, _20->m_sizeY << 1, p4, p5);
	} else {
		GXSetTexCopySrc(p1, p2, _20->m_sizeX, _20->m_sizeY, GX_FALSE, p5);
	}
	GXSetTexCopyDst(_20->m_sizeX, _20->m_sizeY, textureFormat, p4);
	GXCopyTex(_24, p5);
	GXPixModeSync();
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r8
	stw      r30, 0x18(r1)
	mr       r30, r7
	stw      r29, 0x14(r1)
	mr       r29, r6
	stw      r28, 0x10(r1)
	mr       r28, r3
	lbz      r0, 0x3b(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80033724
	clrlwi.  r0, r30, 0x18
	beq      lbl_800336E4
	lwz      r6, 0x20(r28)
	clrlwi   r3, r4, 0x10
	clrlwi   r4, r5, 0x10
	lhz      r5, 2(r6)
	lhz      r0, 4(r6)
	rlwinm   r5, r5, 1, 0x10, 0x1e
	rlwinm   r6, r0, 1, 0x10, 0x1e
	bl       GXSetTexCopySrc
	b        lbl_800336FC

lbl_800336E4:
	lwz      r6, 0x20(r28)
	clrlwi   r3, r4, 0x10
	clrlwi   r4, r5, 0x10
	lhz      r5, 2(r6)
	lhz      r6, 4(r6)
	bl       GXSetTexCopySrc

lbl_800336FC:
	lwz      r4, 0x20(r28)
	mr       r5, r29
	clrlwi   r6, r30, 0x18
	lhz      r3, 2(r4)
	lhz      r4, 4(r4)
	bl       GXSetTexCopyDst
	lwz      r3, 0x24(r28)
	mr       r4, r31
	bl       GXCopyTex
	bl       GXPixModeSync

lbl_80033724:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000188
 */
void JUTTexture::captureTexture(int, int, int, int, bool, _GXTexFmt, _GXTexFmt)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void JUTTexture::captureDolTexture(void*, int, int, int, int, bool, _GXTexFmt)
{
	// UNUSED FUNCTION
}
