#include "Dolphin/gx.h"
#include "Dolphin/mtx.h"
#include "JSystem/J2D/J2DGXColorS10.h"
#include "JSystem/J2D/J2DMaterial.h"
#include "JSystem/J2D/J2DPane.h"
#include "JSystem/J2D/J2DTevBlock.h"
#include "JSystem/J2D/J2DTypes.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JSupport/JSUStream.h"
#include "JSystem/JUT/JUTPalette.h"
#include "JSystem/JUT/JUTTexture.h"
#include "JSystem/JUT/TColor.h"
#include "JSystem/ResTIMG.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__10J2DPicture
    __vt__10J2DPicture:
        .4byte 0
        .4byte 0
        .4byte __dt__10J2DPictureFv
        .4byte getTypeID__10J2DPictureCFv
        .4byte move__7J2DPaneFff
        .4byte add__7J2DPaneFff
        .4byte resize__7J2DPaneFff
        .4byte setCullBack__7J2DPaneFb
        .4byte setCullBack__7J2DPaneF11_GXCullMode
        .4byte setAlpha__7J2DPaneFUc
        .4byte setConnectParent__7J2DPaneFb
        .4byte calcMtx__7J2DPaneFv
        .4byte update__7J2DPaneFv
        .4byte drawSelf__10J2DPictureFff
        .4byte drawSelf__10J2DPictureFffPA3_A4_f
        .4byte search__7J2DPaneFUx
        .4byte searchUserInfo__7J2DPaneFUx
        .4byte makeMatrix__7J2DPaneFff
        .4byte makeMatrix__7J2DPaneFffff
        .4byte isUsed__10J2DPictureFPC7ResTIMG
        .4byte isUsed__10J2DPictureFPC7ResFONT
        .4byte clearAnmTransform__7J2DPaneFv
        .4byte rewriteAlpha__10J2DPictureFv
        .4byte setAnimation__7J2DPaneFP10J2DAnmBase
        .4byte setAnimation__7J2DPaneFP15J2DAnmTransform
        .4byte setAnimation__7J2DPaneFP11J2DAnmColor
        .4byte setAnimation__7J2DPaneFP16J2DAnmTexPattern
        .4byte setAnimation__7J2DPaneFP19J2DAnmTextureSRTKey
        .4byte setAnimation__7J2DPaneFP15J2DAnmTevRegKey
        .4byte setAnimation__7J2DPaneFP20J2DAnmVisibilityFull
        .4byte setAnimation__7J2DPaneFP14J2DAnmVtxColor
        .4byte animationTransform__7J2DPaneFPC15J2DAnmTransform
        .4byte setVisibileAnimation__7J2DPaneFP20J2DAnmVisibilityFull
        .4byte setAnimationVF__7J2DPaneFP20J2DAnmVisibilityFull
        .4byte setVtxColorAnimation__7J2DPaneFP14J2DAnmVtxColor
        .4byte setAnimationVC__7J2DPaneFP14J2DAnmVtxColor
        .4byte animationPane__7J2DPaneFPC15J2DAnmTransform
        .4byte initiate__10J2DPictureFPC7ResTIMGPC7ResTLUT
        .4byte prepareTexture__10J2DPictureFUc
        .4byte append__10J2DPictureFPC7ResTIMGf
        .4byte append__10J2DPictureFPC7ResTIMGP10JUTPalettef
        .4byte append__10J2DPictureFPCcf
        .4byte append__10J2DPictureFPCcP10JUTPalettef
        .4byte append__10J2DPictureFP10JUTTexturef
        .4byte prepend__10J2DPictureFPC7ResTIMGf
        .4byte prepend__10J2DPictureFPC7ResTIMGP10JUTPalettef
        .4byte prepend__10J2DPictureFPCcf
        .4byte prepend__10J2DPictureFPCcP10JUTPalettef
        .4byte prepend__10J2DPictureFP10JUTTexturef
        .4byte insert__10J2DPictureFPC7ResTIMGUcf
        .4byte insert__10J2DPictureFPC7ResTIMGP10JUTPaletteUcf
        .4byte insert__10J2DPictureFPCcUcf
        .4byte insert__10J2DPictureFPCcP10JUTPaletteUcf
        .4byte insert__10J2DPictureFP10JUTTextureUcf
        .4byte remove__10J2DPictureFUc
        .4byte remove__10J2DPictureFv
        .4byte remove__10J2DPictureFP10JUTTexture
        .4byte draw__10J2DPictureFffbbb
        .4byte draw__10J2DPictureFffUcbbb
        .4byte draw__10J2DPictureFffffbbb
        .4byte drawOut__10J2DPictureFffffff
        .4byte drawOut__10J2DPictureFffffffff
        .4byte
   "drawOut__10J2DPictureFRCQ29JGeometry8TBox2<f>RCQ29JGeometry8TBox2<f>" .4byte
   load__10J2DPictureF11_GXTexMapIDUc .4byte load__10J2DPictureFUc .4byte
   setBlendRatio__10J2DPictureFffffffff .4byte
   setBlendColorRatio__10J2DPictureFffffffff .4byte
   setBlendAlphaRatio__10J2DPictureFffffffff .4byte
   changeTexture__10J2DPictureFPC7ResTIMGUc .4byte
   changeTexture__10J2DPictureFPCcUc .4byte
   changeTexture__10J2DPictureFPC7ResTIMGUcP10JUTPalette .4byte
   changeTexture__10J2DPictureFPCcUcP10JUTPalette .4byte
   getTexture__10J2DPictureCFUc .4byte getTextureCount__10J2DPictureCFv .4byte
   setBlack__10J2DPictureFQ28JUtility6TColor .4byte
   setWhite__10J2DPictureFQ28JUtility6TColor .4byte
   setBlackWhite__10J2DPictureFQ28JUtility6TColorQ28JUtility6TColor .4byte
   getBlack__10J2DPictureCFv .4byte getWhite__10J2DPictureCFv .4byte
   getMaterial__10J2DPictureCFv .4byte drawFullSet__10J2DPictureFffffPA3_A4_f
        .4byte drawTexCoord__10J2DPictureFffffssssssssPA3_A4_f
        .4byte getUsableTlut__10J2DPictureFUc
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805167F0
    lbl_805167F0:
        .float 1.0
        .4byte 0x00000000
    .global lbl_805167F8
    lbl_805167F8:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_80516800
    lbl_80516800:
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_80516808
    lbl_80516808:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80516810
    lbl_80516810:
        .4byte 0x437F0000
    .global lbl_80516814
    lbl_80516814:
        .float 0.5
*/

/*
 * --INFO--
 * Address:	80039ADC
 * Size:	0000B8
 * __ct__10J2DPictureFv
 */
J2DPicture::J2DPicture()
    : J2DPane()
    , _112()
    , m_palette(nullptr)
    , m_white(0xFFFFFFFF)
    , m_black(0xFFFFFFFF)
    , _150()
    , _160(0xFFFFFFFF)
    , _164(0xFFFFFFFF)
{
	for (int i = 0; i < 4; i++) {
		m_textures[i] = nullptr;
	}
	_111           = 0;
	m_textureCount = 0;
	initinfo();
}

/*
 * --INFO--
 * Address:	80039B94
 * Size:	00000C
 */
// JUtility::TColor::TColor() { }

/*
 * --INFO--
 * Address:	80039BA0
 * Size:	000004
 */
// JGeometry::TVec2<short>::TVec2() { }

/*
 * --INFO--
 * Address:	80039BA4
 * Size:	0000CC
 * __ct__10J2DPictureFP7J2DPaneP20JSURandomInputStreamP10JKRArchive
 */
J2DPicture::J2DPicture(J2DPane* parent, JSURandomInputStream* input, JKRArchive* archive)
    : J2DPane()
    , m_palette(nullptr)
    , m_white(0xFFFFFFFF)
    , m_black(0xFFFFFFFF)
    , _150()
    , _160(0xFFFFFFFF)
    , _164(0xFFFFFFFF)
{
	private_readStream(parent, input, archive);
}

/*
 * --INFO--
 * Address:	80039C70
 * Size:	0005EC
 * __ct__10J2DPictureFP7J2DPaneP20JSURandomInputStreamP11J2DMaterial
 */
J2DPicture::J2DPicture(J2DPane* parent, JSURandomInputStream* input, J2DMaterial* materials)
    : J2DPane()
    , _112()
    , m_palette(nullptr)
    , m_white(0xFFFFFFFF)
    , m_black(0xFFFFFFFF)
    , _150()
    , _160(0xFFFFFFFF)
    , _164(0xFFFFFFFF)
{
	J2DScrnBlockHeader header;
	int headerPosition = input->getPosition();
	input->read(&header, sizeof(J2DScrnBlockHeader));
	m_bloBlockType     = 'PIC1';
	int paneExPosition = input->getPosition();
	J2DScrnBlockHeader paneExHeader;
	input->peek(&paneExHeader, sizeof(J2DScrnBlockHeader));
	makePaneExStream(parent, input);
	input->seek(paneExPosition + paneExHeader.m_blockLength, SEEK_SET);

	J2DPictureBlockTrailer trailer;
	input->read(&trailer, sizeof(J2DPictureBlockTrailer));
	u16 v1 = trailer._04;
	for (int i = 0; i < 4; i++) {
		_112[i] = trailer._10[i];
		_150[i].set(trailer._20[i]);
	}
	input->seek(headerPosition + header.m_blockLength, SEEK_SET);

	J2DMaterial* material = (v1 != 0xFFFF) ? &materials[v1] : nullptr;
	m_alpha               = 0xFF;
	if (material != nullptr) {
		m_alpha = material->m_colorBlock.m_colors[0].a;
	}
	m_black        = 0x0;
	m_white        = 0xFFFFFFFF;
	m_textureCount = 0;
	if (material != nullptr && material->m_tevBlock != nullptr) {
		u8 texGenNum   = material->m_texGenBlock.m_texGenNum;
		u8 tevStageNum = material->m_tevBlock->getTevStageNum();
		if ((texGenNum == 1 && tevStageNum != 1) || (texGenNum != 1 && tevStageNum != texGenNum + 1)) {
			J2DGXColorS10 black(*material->m_tevBlock->getTevColor(0));
			J2DGXColorS10 white(*material->m_tevBlock->getTevColor(1));
			m_black.r = black.r;
			m_black.g = black.g;
			m_black.b = black.b;
			m_black.a = black.a;
			m_white.r = white.r;
			m_white.g = white.g;
			m_white.b = white.b;
			m_white.a = white.a;
			// m_black = black;
			// m_white = white;
		}
		m_textureCount = (texGenNum <= 4) ? texGenNum : 4;
	}
	_111 = 0;
	for (int i = 0; i < 4; i++) {
		m_textures[i] = nullptr;
		if (material != nullptr && material->m_tevBlock != nullptr) {
			JUTTexture* texture = material->m_tevBlock->getTexture(i);
			if (texture != nullptr) {
				m_textures[i] = texture;
				_111          = _111 | (1 << i);
			}
		}
	}
	if (material != nullptr && material->m_tevBlock != nullptr) {
		material->m_tevBlock->setUndeleteFlag(0xF0);
	}
	m_palette           = nullptr;
	JUtility::TColor v2 = 0xFFFFFFFF;
	JUtility::TColor v3 = 0xFFFFFFFF;
	if (material != nullptr && material->m_tevBlock != nullptr) {
		v2 = *material->m_tevBlock->getTevKColor(3);
		v3 = *material->m_tevBlock->getTevKColor(1);
	}
	setBlendColorRatio(v2.a, v2.b, v2.g, v2.r, 1.0f, 1.0f, 1.0f, 1.0f);
	setBlendAlphaRatio(v3.a, v3.b, v3.g, v3.r, 1.0f, 1.0f, 1.0f, 1.0f);
	/*
	stwu     r1, -0xd0(r1)
	mflr     r0
	stw      r0, 0xd4(r1)
	stmw     r25, 0xb4(r1)
	mr       r31, r3
	mr       r25, r4
	mr       r27, r5
	mr       r28, r6
	bl       __ct__7J2DPaneFv
	lis      r3, __vt__10J2DPicture@ha
	lis      r4, "__ct__Q29JGeometry8TVec2<s>Fv"@ha
	addi     r0, r3, __vt__10J2DPicture@l
	li       r5, 0
	stw      r0, 0(r31)
	addi     r3, r31, 0x112
	addi     r4, r4, "__ct__Q29JGeometry8TVec2<s>Fv"@l
	li       r6, 4
	li       r7, 4
	bl       __construct_array
	li       r0, 0
	lis      r3, __ct__Q28JUtility6TColorFv@ha
	stw      r0, 0x144(r31)
	li       r0, -1
	addi     r4, r3, __ct__Q28JUtility6TColorFv@l
	addi     r3, r31, 0x150
	stw      r0, 0x148(r31)
	li       r5, 0
	li       r6, 4
	li       r7, 4
	stw      r0, 0x14c(r31)
	bl       __construct_array
	li       r0, -1
	mr       r3, r27
	stw      r0, 0x160(r31)
	stw      r0, 0x164(r31)
	lwz      r12, 0(r27)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r30, r3
	mr       r3, r27
	addi     r4, r1, 0x2c
	li       r5, 8
	bl       read__14JSUInputStreamFPvl
	lis      r4, 0x50494331@ha
	mr       r3, r27
	addi     r0, r4, 0x50494331@l
	stw      r0, 8(r31)
	lwz      r12, 0(r27)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r29, r3
	mr       r3, r27
	addi     r4, r1, 0x24
	li       r5, 8
	bl       peek__20JSURandomInputStreamFPvl
	mr       r3, r31
	mr       r4, r25
	mr       r5, r27
	bl       makePaneExStream__7J2DPaneFP7J2DPaneP20JSURandomInputStream
	lwz      r0, 0x28(r1)
	mr       r3, r27
	li       r5, 0
	add      r4, r29, r0
	bl       seek__20JSURandomInputStreamFl17JSUStreamSeekFrom
	lis      r4, "__ct__Q29JGeometry8TVec2<s>Fv"@ha
	addi     r3, r1, 0x44
	addi     r4, r4, "__ct__Q29JGeometry8TVec2<s>Fv"@l
	li       r5, 0
	li       r6, 4
	li       r7, 4
	bl       __construct_array
	mr       r3, r27
	addi     r4, r1, 0x34
	li       r5, 0x30
	bl       read__14JSUInputStreamFPvl
	li       r0, 2
	addi     r10, r1, 0x34
	lhz      r29, 0x38(r1)
	li       r11, 0
	mtctr    r0

lbl_80039DB8:
	lha      r3, 0x10(r10)
	addi     r9, r11, 0x112
	addi     r8, r11, 0x114
	addi     r7, r11, 0x150
	sthx     r3, r31, r9
	addi     r6, r11, 0x151
	addi     r4, r11, 0x152
	addi     r0, r11, 0x153
	lha      r3, 0x12(r10)
	addi     r9, r11, 0x116
	sthx     r3, r31, r8
	addi     r8, r11, 0x118
	lwz      r3, 0x20(r10)
	stw      r3, 0x18(r1)
	lbz      r5, 0x18(r1)
	lbz      r3, 0x19(r1)
	stbx     r5, r31, r7
	addi     r7, r11, 0x154
	lbz      r5, 0x1a(r1)
	stbx     r3, r31, r6
	addi     r6, r11, 0x155
	lbz      r3, 0x1b(r1)
	stbx     r5, r31, r4
	addi     r4, r11, 0x156
	stbx     r3, r31, r0
	addi     r0, r11, 0x157
	addi     r11, r11, 8
	lha      r3, 0x14(r10)
	sthx     r3, r31, r9
	lha      r3, 0x16(r10)
	sthx     r3, r31, r8
	lwz      r3, 0x24(r10)
	addi     r10, r10, 8
	stw      r3, 0x18(r1)
	lbz      r5, 0x18(r1)
	lbz      r3, 0x19(r1)
	stbx     r5, r31, r7
	lbz      r5, 0x1a(r1)
	stbx     r3, r31, r6
	lbz      r3, 0x1b(r1)
	stbx     r5, r31, r4
	stbx     r3, r31, r0
	bdnz     lbl_80039DB8
	lwz      r0, 0x30(r1)
	mr       r3, r27
	li       r5, 0
	add      r4, r30, r0
	bl       seek__20JSURandomInputStreamFl17JSUStreamSeekFrom
	cmplwi   r29, 0xffff
	li       r30, 0
	beq      lbl_80039E8C
	mulli    r0, r29, 0x88
	add      r30, r28, r0

lbl_80039E8C:
	li       r0, 0xff
	cmplwi   r30, 0
	stb      r0, 0xb2(r31)
	beq      lbl_80039EA4
	lbz      r0, 0x13(r30)
	stb      r0, 0xb2(r31)

lbl_80039EA4:
	li       r4, 0
	li       r0, -1
	stw      r4, 0x14(r1)
	cmplwi   r30, 0
	lbz      r3, 0x14(r1)
	stw      r0, 0x10(r1)
	lbz      r0, 0x15(r1)
	stb      r3, 0x14c(r31)
	lbz      r3, 0x16(r1)
	stb      r0, 0x14d(r31)
	lbz      r0, 0x17(r1)
	stb      r3, 0x14e(r31)
	lbz      r3, 0x10(r1)
	stb      r0, 0x14f(r31)
	lbz      r0, 0x11(r1)
	stb      r3, 0x148(r31)
	lbz      r3, 0x12(r1)
	stb      r0, 0x149(r31)
	lbz      r0, 0x13(r1)
	stb      r3, 0x14a(r31)
	stb      r0, 0x14b(r31)
	stb      r4, 0x110(r31)
	beq      lbl_8003A01C
	lwz      r3, 0x70(r30)
	cmplwi   r3, 0
	beq      lbl_8003A01C
	lwz      r12, 0(r3)
	lwz      r0, 0x28(r30)
	lwz      r12, 0x58(r12)
	clrlwi   r29, r0, 0x18
	mtctr    r12
	bctrl
	cmplwi   r29, 1
	bne      lbl_80039F38
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 1
	bne      lbl_80039F50

lbl_80039F38:
	cmplwi   r29, 1
	beq      lbl_8003A008
	clrlwi   r3, r3, 0x18
	addi     r0, r29, 1
	cmpw     r3, r0
	beq      lbl_8003A008

lbl_80039F50:
	lwz      r3, 0x70(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	lha      r27, 0(r3)
	li       r4, 1
	lha      r28, 2(r3)
	lha      r26, 4(r3)
	lha      r25, 6(r3)
	lwz      r3, 0x70(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	rlwinm   r4, r28, 0x10, 8, 0xf
	lha      r0, 2(r3)
	rlwimi   r4, r27, 0x18, 0, 7
	lha      r5, 0(r3)
	rlwimi   r4, r26, 8, 0x10, 0x17
	rlwinm   r0, r0, 0x10, 8, 0xf
	rlwimi   r4, r25, 0, 0x18, 0x1f
	lha      r6, 4(r3)
	stw      r4, 0xc(r1)
	rlwimi   r0, r5, 0x18, 0, 7
	lha      r7, 6(r3)
	rlwimi   r0, r6, 8, 0x10, 0x17
	lbz      r3, 0xc(r1)
	lbz      r5, 0xd(r1)
	rlwimi   r0, r7, 0, 0x18, 0x1f
	stb      r3, 0x14c(r31)
	lbz      r4, 0xe(r1)
	stb      r5, 0x14d(r31)
	lbz      r3, 0xf(r1)
	stw      r0, 8(r1)
	stb      r4, 0x14e(r31)
	lbz      r0, 8(r1)
	stb      r3, 0x14f(r31)
	lbz      r4, 9(r1)
	stb      r0, 0x148(r31)
	lbz      r3, 0xa(r1)
	stb      r4, 0x149(r31)
	lbz      r0, 0xb(r1)
	stb      r3, 0x14a(r31)
	stb      r0, 0x14b(r31)

lbl_8003A008:
	cmplwi   r29, 4
	li       r0, 4
	bgt      lbl_8003A018
	mr       r0, r29

lbl_8003A018:
	stb      r0, 0x110(r31)

lbl_8003A01C:
	li       r25, 0
	li       r26, 0
	stb      r25, 0x111(r31)

lbl_8003A028:
	cmplwi   r30, 0
	addi     r0, r25, 0x100
	li       r3, 0
	stwx     r3, r31, r0
	beq      lbl_8003A080
	lwz      r3, 0x70(r30)
	cmplwi   r3, 0
	beq      lbl_8003A080
	lwz      r12, 0(r3)
	mr       r4, r26
	lwz      r12, 0xa0(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_8003A080
	addi     r4, r25, 0x100
	li       r0, 1
	stwx     r3, r31, r4
	slw      r0, r0, r26
	lbz      r3, 0x111(r31)
	or       r0, r3, r0
	stb      r0, 0x111(r31)

lbl_8003A080:
	addi     r26, r26, 1
	addi     r25, r25, 4
	cmplwi   r26, 4
	blt      lbl_8003A028
	cmplwi   r30, 0
	beq      lbl_8003A0B8
	lwz      r3, 0x70(r30)
	cmplwi   r3, 0
	beq      lbl_8003A0B8
	lwz      r12, 0(r3)
	li       r4, 0xf0
	lwz      r12, 0xb0(r12)
	mtctr    r12
	bctrl

lbl_8003A0B8:
	li       r0, -1
	li       r3, 0
	cmplwi   r30, 0
	stw      r3, 0x144(r31)
	stw      r0, 0x20(r1)
	stw      r0, 0x1c(r1)
	beq      lbl_8003A14C
	lwz      r3, 0x70(r30)
	cmplwi   r3, 0
	beq      lbl_8003A14C
	lwz      r12, 0(r3)
	li       r4, 3
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lbz      r7, 0(r3)
	li       r4, 1
	lbz      r6, 1(r3)
	lbz      r5, 2(r3)
	lbz      r0, 3(r3)
	lwz      r3, 0x70(r30)
	stb      r7, 0x20(r1)
	lwz      r12, 0(r3)
	stb      r6, 0x21(r1)
	lwz      r12, 0x40(r12)
	stb      r5, 0x22(r1)
	stb      r0, 0x23(r1)
	mtctr    r12
	bctrl
	lbz      r6, 0(r3)
	lbz      r5, 1(r3)
	lbz      r4, 2(r3)
	lbz      r0, 3(r3)
	stb      r6, 0x1c(r1)
	stb      r5, 0x1d(r1)
	stb      r4, 0x1e(r1)
	stb      r0, 0x1f(r1)

lbl_8003A14C:
	lbz      r7, 0x23(r1)
	lis      r6, 0x4330
	lbz      r5, 0x22(r1)
	mr       r3, r31
	lbz      r4, 0x21(r1)
	lbz      r0, 0x20(r1)
	lfs      f5, lbl_805167F0@sda21(r2)
	lwz      r12, 0(r31)
	stw      r7, 0x6c(r1)
	fmr      f6, f5
	lfd      f4, lbl_805167F8@sda21(r2)
	fmr      f7, f5
	stw      r6, 0x68(r1)
	fmr      f8, f5
	lwz      r12, 0x108(r12)
	lfd      f0, 0x68(r1)
	stw      r5, 0x74(r1)
	fsubs    f1, f0, f4
	stw      r6, 0x70(r1)
	lfd      f0, 0x70(r1)
	stw      r4, 0x7c(r1)
	fsubs    f2, f0, f4
	stw      r6, 0x78(r1)
	lfd      f0, 0x78(r1)
	stw      r0, 0x84(r1)
	fsubs    f3, f0, f4
	stw      r6, 0x80(r1)
	lfd      f0, 0x80(r1)
	fsubs    f4, f0, f4
	mtctr    r12
	bctrl
	lbz      r7, 0x1f(r1)
	lis      r6, 0x4330
	lbz      r5, 0x1e(r1)
	mr       r3, r31
	lbz      r4, 0x1d(r1)
	lbz      r0, 0x1c(r1)
	lfs      f5, lbl_805167F0@sda21(r2)
	lwz      r12, 0(r31)
	stw      r7, 0x8c(r1)
	fmr      f6, f5
	lfd      f4, lbl_805167F8@sda21(r2)
	fmr      f7, f5
	stw      r6, 0x88(r1)
	fmr      f8, f5
	lwz      r12, 0x10c(r12)
	lfd      f0, 0x88(r1)
	stw      r5, 0x94(r1)
	fsubs    f1, f0, f4
	stw      r6, 0x90(r1)
	lfd      f0, 0x90(r1)
	stw      r4, 0x9c(r1)
	fsubs    f2, f0, f4
	stw      r6, 0x98(r1)
	lfd      f0, 0x98(r1)
	stw      r0, 0xa4(r1)
	fsubs    f3, f0, f4
	stw      r6, 0xa0(r1)
	lfd      f0, 0xa0(r1)
	fsubs    f4, f0, f4
	mtctr    r12
	bctrl
	mr       r3, r31
	lmw      r25, 0xb4(r1)
	lwz      r0, 0xd4(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8003A25C
 * Size:	000008
 */
// JUtility::TColor* J2DTevBlock::getTevKColor(unsigned long) { return nullptr; }

/*
 * --INFO--
 * Address:	8003A264
 * Size:	000004
 */
void J2DTevBlock::setUndeleteFlag(unsigned char) { }

/*
 * --INFO--
 * Address:	8003A268
 * Size:	000008
 */
// JUtility::TColor* J2DTevBlock::getTevColor(unsigned long) { return 0x0; }

/*
 * --INFO--
 * Address:	8003A270
 * Size:	000008
 */
// u32 J2DTevBlock::getTevStageNum() const { return 0x1; }

/*
 * --INFO--
 * Address:	8003A278
 * Size:	0000E8
 * __ct__10J2DPictureFPC7ResTIMG
 */
J2DPicture::J2DPicture(const ResTIMG* img)
    : J2DPane()
    , _112()
    , m_white(0xFFFFFFFF)
    , m_black(0xFFFFFFFF)
    , _150()
    , _160(0xFFFFFFFF)
    , _164(0xFFFFFFFF)
{
	for (int i = 0; i < 4; i++) {
		m_textures[i] = nullptr;
	}
	_111           = 0;
	m_textureCount = 0;
	if (img != nullptr) {
		append(img, 0.0f);
	}
	m_palette = nullptr;
	initinfo();
}

/*
 * --INFO--
 * Address:	8003A360
 * Size:	000030
 * append__10J2DPictureFPC7ResTIMGf
 */
bool J2DPicture::append(const ResTIMG* resource, float p2) { return insert(resource, m_textureCount, p2); }

/*
 * --INFO--
 * Address:	8003A390
 * Size:	000034
 * insert__10J2DPictureFPC7ResTIMGUcf
 */
bool J2DPicture::insert(const ResTIMG* resource, u8 textureCount, float p3) { return insert(resource, nullptr, textureCount, p3); }

/*
 * --INFO--
 * Address:	8003A3C4
 * Size:	0000E8
 * __ct__10J2DPictureFPCc
 */
J2DPicture::J2DPicture(const char* p1)
    : J2DPane()
    , _112()
    , m_white(0xFFFFFFFF)
    , m_black(0xFFFFFFFF)
    , _150()
    , _160(0xFFFFFFFF)
    , _164(0xFFFFFFFF)
{
	for (int i = 0; i < 4; i++) {
		m_textures[i] = 0;
	}
	_111           = 0;
	m_textureCount = 0;
	if (p1) {
		append(p1, 0.0f);
	}
	m_palette = nullptr;
	initinfo();
}

/*
 * --INFO--
 * Address:	8003A4AC
 * Size:	000030
 * append__10J2DPictureFPCcf
 */
bool J2DPicture::append(const char* p1, float p2) { return insert(p1, m_textureCount, p2); }

/*
 * --INFO--
 * Address:	8003A4DC
 * Size:	000034
 * insert__10J2DPictureFPCcUcf
 */
bool J2DPicture::insert(const char* p1, u8 p2, float p3) { return insert(p1, nullptr, p2, p3); }

/*
 * --INFO--
 * Address:	8003A510
 * Size:	0000E8
 * __ct__10J2DPictureFP10JUTTexture
 */
J2DPicture::J2DPicture(JUTTexture* texture)
    : J2DPane()
    , _112()
    , m_white(0xFFFFFFFF)
    , m_black(0xFFFFFFFF)
    , _150()
    , _160(0xFFFFFFFF)
    , _164(0xFFFFFFFF)
{
	for (int i = 0; i < 4; i++) {
		m_textures[i] = 0;
	}
	_111           = 0;
	m_textureCount = 0;
	if (texture) {
		append(texture, 0.0f);
	}
	m_palette = nullptr;
	initinfo();
}

/*
 * --INFO--
 * Address:	8003A5F8
 * Size:	000030
 * append__10J2DPictureFP10JUTTexturef
 */
bool J2DPicture::append(JUTTexture* texture, float p2) { return insert(texture, m_textureCount, p2); }

/*
 * --INFO--
 * Address:	8003A628
 * Size:	0000EC
 * __ct__10J2DPictureFUxRCQ29JGeometry8TBox2<f>
 */
J2DPicture::J2DPicture(u64 id, const JGeometry::TBox2f& bounds)
    : J2DPane(id, bounds)
    , _112()
    , m_palette(nullptr)
    , m_white(0xFFFFFFFF)
    , m_black(0xFFFFFFFF)
    , _150()
    , _160(0xFFFFFFFF)
    , _164(0xFFFFFFFF)
{
	initinfo();
	for (int i = 0; i < 4; i++) {
		m_textures[i] = 0;
	}
	_111           = 0;
	m_textureCount = 0;
	setBlendRatio(1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
}

/*
 * --INFO--
 * Address:	8003A714
 * Size:	00009C
 * setBlendRatio__10J2DPictureFffffffff
 */
void J2DPicture::setBlendRatio(float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8)
{
	setBlendColorRatio(p1, p2, p3, p4, p5, p6, p7, p8);
	setBlendAlphaRatio(p1, p2, p3, p4, p5, p6, p7, p8);
}

/*
 * --INFO--
 * Address:	8003A7B0
 * Size:	0003F4
 * TODO: Among other issues, the ctors for JUTPalette and JUTTexture seem incompatible with this function. But we also know what the default
 * ctor of JUTTexture is. Strange.
 */
void J2DPicture::private_readStream(J2DPane* parent, JSURandomInputStream* input, JKRArchive* archive)
{
	J2DScrnBlockHeader header;
	int headerPosition = input->getPosition();
	input->read(&header, sizeof(J2DScrnBlockHeader));
	m_bloBlockType = header.m_bloBlockType;
	makePaneStream(parent, input);

	u32 v1 = 0;
	u8 v2;
	input->read(&v2, sizeof(u8));

	ResTIMG* img = (ResTIMG*)getPointer(input, 'TIMG', archive);
	ResTLUT* lut = (ResTLUT*)getPointer(input, 'TLUT', archive);
	u8 v3;
	input->read(&v3, sizeof(u8));
	s8 countdown = v2 - 3;
	if (v2 != 3) {
		u8 v4;
		input->read(&v4, sizeof(u8));
		v1        = v4;
		countdown = v2 - 4;
	}

	if (countdown != 0) {
		u8 v120;
		input->read(&v120, sizeof(u8));
		countdown--;
	}

	m_black = 0x0;
	m_white = 0xFFFFFFFF;

	if (countdown != 0) {
		GXColor black;
		input->read(&black, sizeof(GXColor));
		m_black = black;
		countdown--;
	}

	if (countdown != 0) {
		GXColor white;
		input->read(&white, sizeof(GXColor));
		m_white = white;
		countdown--;
	}

	for (int i = 0; i < 4; i++) {
		JUtility::TColor color(0xFFFFFFFF);
		_150[i] = color;
	}
	for (int i = 0; countdown != 0 && i < 4; i++) {
		JUtility::TColor color;
		input->read(&color, sizeof(JUtility::TColor));
		countdown--;
		_150[i] = color;
	}

	input->seek(headerPosition + header.m_blockLength, SEEK_SET);

	for (int i = 0; i < 4; i++) {
		m_textures[i] = nullptr;
	}
	m_textureCount = 0;
	_111           = 1;
	if (img != nullptr) {
		m_textures[0] = new JUTTexture();
		m_textureCount++;
	}
	if (lut != nullptr) {
		m_palette = new JUTPalette();
		m_textures[0]->attachPalette(m_palette);
	}

	setTexCoord(m_textures[0], (J2DBinding)v3, (J2DMirror)(v1 & 3), (bool)((v1 >> 2) & 1));

	setBlendRatio(1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stmw      r22, 0x58(r1)
	  mr        r23, r5
	  mr        r22, r3
	  mr        r25, r4
	  mr        r3, r23
	  mr        r24, r6
	  lwz       r12, 0x0(r23)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  mr        r3, r23
	  addi      r4, r1, 0x4C
	  li        r5, 0x8
	  bl        -0x14420
	  lwz       r0, 0x4C(r1)
	  mr        r3, r22
	  mr        r4, r25
	  mr        r5, r23
	  stw       r0, 0x8(r22)
	  bl        -0x3724
	  mr        r3, r23
	  addi      r4, r1, 0xB
	  li        r26, 0
	  li        r5, 0x1
	  bl        -0x1444C
	  lis       r5, 0x5449
	  lbz       r25, 0xB(r1)
	  mr        r3, r22
	  mr        r4, r23
	  mr        r6, r24
	  addi      r5, r5, 0x4D47
	  bl        -0x147C
	  lis       r5, 0x544C
	  mr        r28, r3
	  mr        r3, r22
	  mr        r4, r23
	  mr        r6, r24
	  addi      r5, r5, 0x5554
	  bl        -0x1498
	  mr        r0, r3
	  mr        r3, r23
	  mr        r27, r0
	  addi      r4, r1, 0xA
	  li        r5, 0x1
	  bl        -0x1449C
	  subi      r25, r25, 0x3
	  lbz       r30, 0xA(r1)
	  rlwinm.   r0,r25,0,24,31
	  beq-      .loc_0xEC
	  mr        r3, r23
	  addi      r4, r1, 0x9
	  li        r5, 0x1
	  bl        -0x144BC
	  lbz       r26, 0x9(r1)
	  subi      r25, r25, 0x1

	.loc_0xEC:
	  rlwinm.   r0,r25,0,24,31
	  beq-      .loc_0x108
	  mr        r3, r23
	  addi      r4, r1, 0x8
	  li        r5, 0x1
	  bl        -0x144DC
	  subi      r25, r25, 0x1

	.loc_0x108:
	  li        r0, 0
	  li        r3, -0x1
	  stw       r0, 0x48(r1)
	  rlwinm.   r0,r25,0,24,31
	  lbz       r4, 0x48(r1)
	  stw       r3, 0x44(r1)
	  lbz       r0, 0x49(r1)
	  stb       r4, 0x14C(r22)
	  lbz       r3, 0x4A(r1)
	  stb       r0, 0x14D(r22)
	  lbz       r0, 0x4B(r1)
	  stb       r3, 0x14E(r22)
	  lbz       r3, 0x44(r1)
	  stb       r0, 0x14F(r22)
	  lbz       r0, 0x45(r1)
	  stb       r3, 0x148(r22)
	  lbz       r3, 0x46(r1)
	  stb       r0, 0x149(r22)
	  lbz       r0, 0x47(r1)
	  stb       r3, 0x14A(r22)
	  stb       r0, 0x14B(r22)
	  beq-      .loc_0x19C
	  mr        r3, r23
	  addi      r4, r1, 0x14
	  li        r5, 0x4
	  bl        -0x14548
	  lwz       r0, 0x14(r1)
	  subi      r25, r25, 0x1
	  stw       r0, 0x40(r1)
	  lbz       r3, 0x40(r1)
	  lbz       r0, 0x41(r1)
	  stb       r3, 0x14C(r22)
	  lbz       r3, 0x42(r1)
	  stb       r0, 0x14D(r22)
	  lbz       r0, 0x43(r1)
	  stb       r3, 0x14E(r22)
	  stb       r0, 0x14F(r22)

	.loc_0x19C:
	  rlwinm.   r0,r25,0,24,31
	  beq-      .loc_0x1E0
	  mr        r3, r23
	  addi      r4, r1, 0x10
	  li        r5, 0x4
	  bl        -0x1458C
	  lwz       r0, 0x10(r1)
	  subi      r25, r25, 0x1
	  stw       r0, 0x3C(r1)
	  lbz       r3, 0x3C(r1)
	  lbz       r0, 0x3D(r1)
	  stb       r3, 0x148(r22)
	  lbz       r3, 0x3E(r1)
	  stb       r0, 0x149(r22)
	  lbz       r0, 0x3F(r1)
	  stb       r3, 0x14A(r22)
	  stb       r0, 0x14B(r22)

	.loc_0x1E0:
	  li        r5, -0x1
	  mr        r29, r22
	  stw       r5, 0x38(r1)
	  li        r24, 0
	  lbz       r3, 0x38(r1)
	  stw       r5, 0x30(r1)
	  lbz       r0, 0x39(r1)
	  stb       r3, 0x150(r22)
	  lbz       r3, 0x3A(r1)
	  stb       r0, 0x151(r22)
	  lbz       r0, 0x3B(r1)
	  stb       r3, 0x152(r22)
	  lbz       r3, 0x30(r1)
	  stb       r0, 0x153(r22)
	  lbz       r0, 0x31(r1)
	  stb       r3, 0x154(r22)
	  lbz       r3, 0x32(r1)
	  stb       r0, 0x155(r22)
	  lbz       r0, 0x33(r1)
	  stw       r5, 0x28(r1)
	  stb       r3, 0x156(r22)
	  lbz       r3, 0x28(r1)
	  stb       r0, 0x157(r22)
	  lbz       r0, 0x29(r1)
	  stb       r3, 0x158(r22)
	  lbz       r4, 0x2A(r1)
	  stw       r5, 0x20(r1)
	  lbz       r3, 0x2B(r1)
	  stb       r0, 0x159(r22)
	  lbz       r0, 0x20(r1)
	  stb       r4, 0x15A(r22)
	  lbz       r4, 0x21(r1)
	  stb       r3, 0x15B(r22)
	  lbz       r3, 0x22(r1)
	  stb       r0, 0x15C(r22)
	  lbz       r0, 0x23(r1)
	  stb       r4, 0x15D(r22)
	  stb       r3, 0x15E(r22)
	  stw       r5, 0x1C(r1)
	  stw       r5, 0x24(r1)
	  stw       r5, 0x2C(r1)
	  stw       r5, 0x34(r1)
	  stb       r0, 0x15F(r22)
	  b         .loc_0x2D4

	.loc_0x290:
	  mr        r3, r23
	  addi      r4, r1, 0xC
	  li        r5, 0x4
	  bl        -0x14678
	  lwz       r0, 0xC(r1)
	  subi      r25, r25, 0x1
	  addi      r24, r24, 0x1
	  stw       r0, 0x18(r1)
	  lbz       r3, 0x18(r1)
	  lbz       r0, 0x19(r1)
	  stb       r3, 0x150(r29)
	  lbz       r3, 0x1A(r1)
	  stb       r0, 0x151(r29)
	  lbz       r0, 0x1B(r1)
	  stb       r3, 0x152(r29)
	  stb       r0, 0x153(r29)
	  addi      r29, r29, 0x4

	.loc_0x2D4:
	  rlwinm.   r0,r25,0,24,31
	  beq-      .loc_0x2E4
	  cmpwi     r24, 0x4
	  blt+      .loc_0x290

	.loc_0x2E4:
	  lwz       r0, 0x50(r1)
	  mr        r3, r23
	  li        r5, 0
	  add       r4, r31, r0
	  bl        -0x1439C
	  li        r3, 0
	  cmplwi    r28, 0
	  stw       r3, 0x100(r22)
	  li        r0, 0x1
	  stw       r3, 0x104(r22)
	  stw       r3, 0x108(r22)
	  stw       r3, 0x10C(r22)
	  stb       r3, 0x110(r22)
	  stb       r0, 0x111(r22)
	  beq-      .loc_0x360
	  li        r3, 0x40
	  bl        -0x16C30
	  mr.       r23, r3
	  beq-      .loc_0x350
	  li        r0, 0
	  mr        r4, r28
	  stw       r0, 0x28(r23)
	  li        r5, 0
	  bl        -0x7A6C
	  lbz       r0, 0x3B(r23)
	  rlwinm    r0,r0,0,30,30
	  stb       r0, 0x3B(r23)

	.loc_0x350:
	  stw       r23, 0x100(r22)
	  lbz       r3, 0x110(r22)
	  addi      r0, r3, 0x1
	  stb       r0, 0x110(r22)

	.loc_0x360:
	  cmplwi    r27, 0
	  beq-      .loc_0x394
	  li        r3, 0x18
	  bl        -0x16C78
	  mr.       r23, r3
	  beq-      .loc_0x384
	  mr        r5, r27
	  li        r4, 0
	  bl        -0xBC6C

	.loc_0x384:
	  stw       r23, 0x144(r22)
	  lwz       r3, 0x100(r22)
	  lwz       r4, 0x144(r22)
	  bl        -0x77A4

	.loc_0x394:
	  lwz       r4, 0x100(r22)
	  rlwinm    r7,r26,30,31,31
	  mr        r3, r22
	  mr        r5, r30
	  rlwinm    r6,r26,0,30,31
	  bl        0x2310
	  mr        r3, r22
	  lfs       f1, -0x7B70(r2)
	  lwz       r12, 0x0(r22)
	  fmr       f2, f1
	  lwz       r12, 0x104(r12)
	  fmr       f3, f1
	  fmr       f4, f1
	  fmr       f5, f1
	  fmr       f6, f1
	  fmr       f7, f1
	  fmr       f8, f1
	  mtctr     r12
	  bctrl
	  lmw       r22, 0x58(r1)
	  lwz       r0, 0x84(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003ABA4
 * Size:	000094
 */
void J2DPicture::initiate(const ResTIMG* img, const ResTLUT* lut)
{
	private_initiate(img, lut);
	if (m_textures[0] == nullptr) {
		return;
	}
	place(JGeometry::TBox2f(0.0f, 0.0f, m_textures[0]->getSizeX(), m_textures[0]->getSizeY()));
}

/*
 * --INFO--
 * Address:	8003AC38
 * Size:	00013C
 */
void J2DPicture::private_initiate(const ResTIMG*, const ResTLUT*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r4
	lbz      r0, 0x110(r3)
	cmplwi   r0, 0
	bne      lbl_8003AD54
	cmplwi   r28, 0
	beq      lbl_8003AD04
	lwz      r3, 0x100(r30)
	cmplwi   r3, 0
	bne      lbl_8003ACE0
	li       r3, 0x40
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_8003ACB0
	li       r0, 0
	mr       r4, r28
	stw      r0, 0x28(r29)
	li       r5, 0
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r0, 0x3b(r29)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	stb      r0, 0x3b(r29)

lbl_8003ACB0:
	stw      r29, 0x100(r30)
	lwz      r0, 0x100(r30)
	cmplwi   r0, 0
	beq      lbl_8003AD04
	lbz      r3, 0x110(r30)
	addi     r0, r3, 1
	stb      r0, 0x110(r30)
	lbz      r0, 0x111(r30)
	rlwinm   r0, r0, 0, 0x1c, 0x1e
	ori      r0, r0, 1
	stb      r0, 0x111(r30)
	b        lbl_8003AD04

lbl_8003ACE0:
	li       r5, 0
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r3, 0x110(r30)
	addi     r0, r3, 1
	stb      r0, 0x110(r30)
	lbz      r0, 0x111(r30)
	rlwinm   r0, r0, 0, 0x1c, 0x1e
	ori      r0, r0, 1
	stb      r0, 0x111(r30)

lbl_8003AD04:
	li       r0, 0
	cmplwi   r31, 0
	stw      r0, 0x144(r30)
	beq      lbl_8003AD54
	lwz      r0, 0x144(r30)
	cmplwi   r0, 0
	bne      lbl_8003AD54
	li       r3, 0x18
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_8003AD3C
	mr       r5, r31
	li       r4, 0
	bl       storeTLUT__10JUTPaletteF7_GXTlutP7ResTLUT

lbl_8003AD3C:
	stw      r29, 0x144(r30)
	lwz      r3, 0x100(r30)
	cmplwi   r3, 0
	beq      lbl_8003AD54
	lwz      r4, 0x144(r30)
	bl       attachPalette__10JUTTextureFP10JUTPalette

lbl_8003AD54:
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
 * Address:	8003AD74
 * Size:	00016C
 */
void J2DPicture::initinfo()
{
	m_bloBlockType = 'PIC1';
	setTexCoord(nullptr, Binding_F, Mirror_0, false);
	setBlendRatio(1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
	m_black.set(0, 0, 0, 0);
	JUtility::TColor white(0xFF, 0xFF, 0xFF, 0xFF);
	m_white.set(white);
	for (int i = 0; i < 4; i++) {
		JUtility::TColor white(0xFF, 0xFF, 0xFF, 0xFF);
		_150[i].set(white);
	}
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lis      r4, 0x50494331@ha
	li       r5, 0xf
	stw      r0, 0x44(r1)
	addi     r0, r4, 0x50494331@l
	li       r4, 0
	li       r6, 0
	stw      r31, 0x3c(r1)
	mr       r31, r3
	li       r7, 0
	stw      r0, 8(r3)
	bl       setTexCoord__10J2DPictureFPC10JUTTexture10J2DBinding9J2DMirrorb
	mr       r3, r31
	lfs      f1, lbl_805167F0@sda21(r2)
	lwz      r12, 0(r31)
	fmr      f2, f1
	lwz      r12, 0x104(r12)
	fmr      f3, f1
	fmr      f4, f1
	fmr      f5, f1
	fmr      f6, f1
	fmr      f7, f1
	fmr      f8, f1
	mtctr    r12
	bctrl
	li       r0, 0
	li       r7, -1
	stw      r0, 0x2c(r1)
	lbz      r0, 0x2c(r1)
	stw      r7, 0x28(r1)
	lbz      r3, 0x2d(r1)
	stb      r0, 0x14c(r31)
	lbz      r0, 0x2e(r1)
	stb      r3, 0x14d(r31)
	lbz      r3, 0x2f(r1)
	stb      r0, 0x14e(r31)
	lbz      r0, 0x28(r1)
	stb      r3, 0x14f(r31)
	lbz      r3, 0x29(r1)
	stb      r0, 0x148(r31)
	lbz      r0, 0x2a(r1)
	stb      r3, 0x149(r31)
	lbz      r3, 0x2b(r1)
	stw      r7, 0x24(r1)
	stb      r0, 0x14a(r31)
	lbz      r0, 0x24(r1)
	stb      r3, 0x14b(r31)
	lbz      r4, 0x25(r1)
	stb      r0, 0x150(r31)
	lbz      r3, 0x26(r1)
	stw      r7, 0x1c(r1)
	lbz      r0, 0x27(r1)
	stb      r4, 0x151(r31)
	lbz      r4, 0x1c(r1)
	stb      r3, 0x152(r31)
	lbz      r3, 0x1d(r1)
	stb      r0, 0x153(r31)
	lbz      r0, 0x1e(r1)
	stw      r7, 0x14(r1)
	lbz      r5, 0x1f(r1)
	stb      r4, 0x154(r31)
	lbz      r4, 0x14(r1)
	stb      r3, 0x155(r31)
	lbz      r3, 0x15(r1)
	stb      r0, 0x156(r31)
	lbz      r0, 0x16(r1)
	stw      r7, 0xc(r1)
	lbz      r6, 0x17(r1)
	stb      r5, 0x157(r31)
	lbz      r5, 0xc(r1)
	stb      r4, 0x158(r31)
	lbz      r4, 0xd(r1)
	stb      r3, 0x159(r31)
	lbz      r3, 0xe(r1)
	stb      r0, 0x15a(r31)
	lbz      r0, 0xf(r1)
	stb      r6, 0x15b(r31)
	stb      r5, 0x15c(r31)
	stb      r4, 0x15d(r31)
	stb      r3, 0x15e(r31)
	stw      r7, 8(r1)
	stw      r7, 0x10(r1)
	stw      r7, 0x18(r1)
	stw      r7, 0x20(r1)
	stb      r0, 0x15f(r31)
	lwz      r31, 0x3c(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8003AEE0
 * Size:	00009C
 * __dt__10J2DPictureFv
 */
J2DPicture::~J2DPicture()
{
	for (int i = 0; i < 4; i++) {
		if ((_111 & 1 << i) != 0) {
			delete m_textures[i];
		}
	}
	delete m_palette;
}

/*
 * --INFO--
 * Address:	8003AF7C
 * Size:	0000E0
 */
void J2DPicture::prepareTexture(u8)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	clrlwi   r31, r4, 0x18
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	li       r29, 0
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_8003B02C

lbl_8003AFA8:
	clrlwi   r0, r29, 0x18
	cmplwi   r0, 4
	blt      lbl_8003AFBC
	li       r3, 0
	b        lbl_8003B03C

lbl_8003AFBC:
	rlwinm   r3, r29, 2, 0x16, 0x1d
	addi     r30, r3, 0x100
	lwzx     r0, r28, r30
	cmplwi   r0, 0
	bne      lbl_8003B028
	li       r3, 0x40
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8003AFF8
	lbz      r4, 0x3b(r3)
	li       r0, 0
	rlwinm   r4, r4, 0, 0x1e, 0x1e
	stb      r4, 0x3b(r3)
	stw      r0, 0x28(r3)
	stw      r0, 0x20(r3)

lbl_8003AFF8:
	stwx     r3, r28, r30
	lwzx     r0, r28, r30
	cmplwi   r0, 0
	bne      lbl_8003B010
	li       r3, 0
	b        lbl_8003B03C

lbl_8003B010:
	clrlwi   r0, r29, 0x18
	li       r3, 1
	lbz      r4, 0x111(r28)
	slw      r0, r3, r0
	or       r0, r4, r0
	stb      r0, 0x111(r28)

lbl_8003B028:
	addi     r29, r29, 1

lbl_8003B02C:
	clrlwi   r0, r29, 0x18
	cmplw    r0, r31
	blt      lbl_8003AFA8
	li       r3, 1

lbl_8003B03C:
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
 * Address:	8003B05C
 * Size:	00032C
 */
bool J2DPicture::insert(const ResTIMG*, JUTPalette*, u8, float)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stmw     r26, 0x38(r1)
	or.      r28, r4, r4
	fmr      f31, f1
	mr       r27, r3
	mr       r29, r5
	mr       r30, r6
	beq      lbl_8003B0AC
	lbz      r4, 0x110(r27)
	cmplwi   r4, 4
	bge      lbl_8003B0AC
	clrlwi   r0, r30, 0x18
	cmplwi   r0, 4
	bge      lbl_8003B0AC
	cmplw    r0, r4
	ble      lbl_8003B0B4

lbl_8003B0AC:
	li       r3, 0
	b        lbl_8003B36C

lbl_8003B0B4:
	lbz      r0, 8(r28)
	li       r26, 0
	cmplwi   r0, 0
	beq      lbl_8003B0E0
	cmplwi   r29, 0
	bne      lbl_8003B0E0
	lwz      r12, 0(r3)
	lwz      r12, 0x148(r12)
	mtctr    r12
	bctrl
	mr       r26, r3

lbl_8003B0E0:
	lbz      r0, 0x110(r27)
	slwi     r0, r0, 2
	add      r3, r27, r0
	lwz      r3, 0x100(r3)
	cmplwi   r3, 0
	bne      lbl_8003B1B0
	li       r3, 0x40
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8003B128
	li       r0, 0
	mr       r4, r28
	stw      r0, 0x28(r31)
	mr       r5, r26
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r0, 0x3b(r31)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	stb      r0, 0x3b(r31)

lbl_8003B128:
	cmplwi   r29, 0
	beq      lbl_8003B140
	mr       r3, r31
	mr       r4, r28
	mr       r5, r29
	bl       storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette

lbl_8003B140:
	clrlwi   r3, r30, 0x18
	li       r5, 3
	b        lbl_8003B170

lbl_8003B14C:
	rlwinm   r0, r5, 2, 0x16, 0x1d
	addi     r5, r5, -1
	add      r4, r27, r0
	lwz      r0, 0xfc(r4)
	stw      r0, 0x100(r4)
	lfs      f0, 0x120(r4)
	stfs     f0, 0x124(r4)
	lfs      f0, 0x130(r4)
	stfs     f0, 0x134(r4)

lbl_8003B170:
	clrlwi   r0, r5, 0x18
	cmplw    r0, r3
	bgt      lbl_8003B14C
	li       r0, 1
	lbz      r4, 0x111(r27)
	slw      r5, r0, r3
	addi     r3, r5, -1
	andc     r0, r4, r3
	and      r3, r4, r3
	slwi     r0, r0, 1
	or       r0, r3, r0
	stb      r0, 0x111(r27)
	lbz      r0, 0x111(r27)
	or       r0, r0, r5
	stb      r0, 0x111(r27)
	b        lbl_8003B2AC

lbl_8003B1B0:
	cmplwi   r29, 0
	mr       r31, r3
	bne      lbl_8003B1CC
	mr       r4, r28
	mr       r5, r26
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	b        lbl_8003B1D8

lbl_8003B1CC:
	mr       r4, r28
	mr       r5, r29
	bl       storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette

lbl_8003B1D8:
	lbz      r3, 0x111(r27)
	addi     r4, r1, 8
	lbz      r8, 0x110(r27)
	clrlwi   r0, r30, 0x18
	clrlwi   r7, r3, 0x1f
	rlwinm   r6, r3, 0x1f, 0x1f, 0x1f
	rlwinm   r5, r3, 0x1e, 0x1f, 0x1f
	rlwinm   r3, r3, 0x1d, 0x1f, 0x1f
	stb      r7, 8(r1)
	stb      r6, 9(r1)
	stb      r5, 0xa(r1)
	stb      r3, 0xb(r1)
	b        lbl_8003B240

lbl_8003B20C:
	rlwinm   r3, r8, 2, 0x16, 0x1d
	clrlwi   r6, r8, 0x18
	add      r7, r27, r3
	addi     r8, r8, -1
	lwz      r5, 0xfc(r7)
	addi     r3, r6, -1
	lbzx     r3, r4, r3
	stw      r5, 0x100(r7)
	lfs      f0, 0x120(r7)
	stbx     r3, r4, r6
	stfs     f0, 0x124(r7)
	lfs      f0, 0x130(r7)
	stfs     f0, 0x134(r7)

lbl_8003B240:
	clrlwi   r3, r8, 0x18
	cmplw    r3, r0
	bgt      lbl_8003B20C
	li       r0, 0
	addi     r5, r1, 8
	stb      r0, 0x111(r27)
	li       r7, 0
	li       r3, 1
	b        lbl_8003B288

lbl_8003B264:
	clrlwi   r6, r7, 0x18
	lbzx     r0, r5, r6
	cmplwi   r0, 0
	beq      lbl_8003B284
	lbz      r4, 0x111(r27)
	slw      r0, r3, r6
	or       r0, r4, r0
	stb      r0, 0x111(r27)

lbl_8003B284:
	addi     r7, r7, 1

lbl_8003B288:
	clrlwi   r0, r7, 0x18
	cmplwi   r0, 4
	blt      lbl_8003B264
	clrlwi   r0, r30, 0x18
	li       r3, 1
	lbz      r4, 0x111(r27)
	slw      r0, r3, r0
	or       r0, r4, r0
	stb      r0, 0x111(r27)

lbl_8003B2AC:
	rlwinm   r0, r30, 2, 0x16, 0x1d
	add      r3, r27, r0
	stw      r31, 0x100(r3)
	stfs     f31, 0x124(r3)
	stfs     f31, 0x134(r3)
	lbz      r0, 0x110(r27)
	cmplwi   r0, 0
	bne      lbl_8003B34C
	lwz      r3, 0x100(r27)
	cmplwi   r3, 0
	beq      lbl_8003B34C
	lwz      r6, 0x20(r3)
	lis      r5, 0x4330
	stw      r5, 0x20(r1)
	mr       r3, r27
	lhz      r0, 4(r6)
	addi     r4, r1, 0xc
	lhz      r6, 2(r6)
	xoris    r0, r0, 0x8000
	lfs      f3, lbl_80516800@sda21(r2)
	xoris    r6, r6, 0x8000
	stw      r0, 0x2c(r1)
	lfd      f2, lbl_80516808@sda21(r2)
	stw      r6, 0x24(r1)
	stw      r5, 0x28(r1)
	lfd      f1, 0x20(r1)
	lfd      f0, 0x28(r1)
	fsubs    f1, f1, f2
	stfs     f3, 0xc(r1)
	fsubs    f0, f0, f2
	stfs     f3, 0x10(r1)
	stfs     f1, 0x14(r1)
	stfs     f0, 0x18(r1)
	bl       "place__7J2DPaneFRCQ29JGeometry8TBox2<f>"
	mr       r3, r27
	li       r4, 0
	li       r5, 0xf
	li       r6, 0
	li       r7, 0
	bl       setTexCoord__10J2DPictureFPC10JUTTexture10J2DBinding9J2DMirrorb

lbl_8003B34C:
	lbz      r4, 0x110(r27)
	mr       r3, r27
	addi     r0, r4, 1
	stb      r0, 0x110(r27)
	bl       setBlendKonstColor__10J2DPictureFv
	mr       r3, r27
	bl       setBlendKonstAlpha__10J2DPictureFv
	li       r3, 1

lbl_8003B36C:
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	lmw      r26, 0x38(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	8003B388
 * Size:	000078
 * insert__10J2DPictureFPCcP10JUTPaletteUcf
 */
bool J2DPicture::insert(const char* p1, JUTPalette* palette, u8 p3, float p4)
{
	return insert((ResTIMG*)J2DScreen::getNameResource(p1), palette, p3, p4);
}

/*
 * --INFO--
 * Address:	8003B400
 * Size:	0001D8
 */
bool J2DPicture::insert(JUTTexture*, u8, float)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	or.      r31, r4, r4
	fmr      f31, f1
	mr       r30, r3
	mr       r29, r5
	beq      lbl_8003B454
	lbz      r3, 0x110(r30)
	cmplwi   r3, 4
	bge      lbl_8003B454
	clrlwi   r0, r29, 0x18
	cmplwi   r0, 4
	bge      lbl_8003B454
	cmplw    r0, r3
	ble      lbl_8003B45C

lbl_8003B454:
	li       r3, 0
	b        lbl_8003B5B4

lbl_8003B45C:
	lwz      r3, 0x10c(r30)
	cmplwi   r3, 0
	beq      lbl_8003B488
	lbz      r0, 0x111(r30)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	beq      lbl_8003B488
	li       r4, 1
	bl       __dt__10JUTTextureFv
	lbz      r0, 0x111(r30)
	clrlwi   r0, r0, 0x1d
	stb      r0, 0x111(r30)

lbl_8003B488:
	clrlwi   r3, r29, 0x18
	li       r5, 3
	b        lbl_8003B4B8

lbl_8003B494:
	rlwinm   r0, r5, 2, 0x16, 0x1d
	addi     r5, r5, -1
	add      r4, r30, r0
	lwz      r0, 0xfc(r4)
	stw      r0, 0x100(r4)
	lfs      f0, 0x120(r4)
	stfs     f0, 0x124(r4)
	lfs      f0, 0x130(r4)
	stfs     f0, 0x134(r4)

lbl_8003B4B8:
	clrlwi   r0, r5, 0x18
	cmplw    r0, r3
	bgt      lbl_8003B494
	li       r0, 1
	lbz      r5, 0x111(r30)
	slw      r6, r0, r3
	rlwinm   r7, r29, 2, 0x16, 0x1d
	addi     r4, r6, -1
	andc     r0, r5, r4
	add      r3, r30, r7
	and      r4, r5, r4
	slwi     r0, r0, 1
	or       r0, r4, r0
	stb      r0, 0x111(r30)
	stw      r31, 0x100(r3)
	lbz      r0, 0x111(r30)
	andc     r0, r0, r6
	stb      r0, 0x111(r30)
	stfs     f31, 0x124(r3)
	stfs     f31, 0x134(r3)
	lbz      r0, 0x110(r30)
	cmplwi   r0, 0
	bne      lbl_8003B594
	addic.   r0, r30, 0x100
	beq      lbl_8003B594
	lwz      r4, 0x100(r30)
	lis      r0, 0x4330
	stw      r0, 0x18(r1)
	mr       r3, r30
	lwz      r5, 0x20(r4)
	addi     r4, r1, 8
	stw      r0, 0x20(r1)
	lhz      r0, 4(r5)
	lhz      r5, 2(r5)
	xoris    r0, r0, 0x8000
	lfs      f3, lbl_80516800@sda21(r2)
	xoris    r5, r5, 0x8000
	stw      r0, 0x24(r1)
	lfd      f2, lbl_80516808@sda21(r2)
	stw      r5, 0x1c(r1)
	lfd      f0, 0x20(r1)
	lfd      f1, 0x18(r1)
	fsubs    f0, f0, f2
	stfs     f3, 8(r1)
	fsubs    f1, f1, f2
	stfs     f3, 0xc(r1)
	stfs     f1, 0x10(r1)
	stfs     f0, 0x14(r1)
	bl       "place__7J2DPaneFRCQ29JGeometry8TBox2<f>"
	mr       r3, r30
	li       r4, 0
	li       r5, 0xf
	li       r6, 0
	li       r7, 0
	bl       setTexCoord__10J2DPictureFPC10JUTTexture10J2DBinding9J2DMirrorb

lbl_8003B594:
	lbz      r4, 0x110(r30)
	mr       r3, r30
	addi     r0, r4, 1
	stb      r0, 0x110(r30)
	bl       setBlendKonstColor__10J2DPictureFv
	mr       r3, r30
	bl       setBlendKonstAlpha__10J2DPictureFv
	li       r3, 1

lbl_8003B5B4:
	psq_l    f31, 72(r1), 0, qr0
	lwz      r0, 0x54(r1)
	lfd      f31, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8003B5D8
 * Size:	000130
 */
int J2DPicture::remove(u8 textureIndex)
{
	if (textureIndex >= m_textureCount || m_textureCount == 1) {
		return false;
	}
	if ((_111 & 1 << textureIndex) != 0) {
		delete m_textures[textureIndex];
	}
	for (u8 i = textureIndex; m_textureCount - 1 > i; i++) {
		m_textures[i] = m_textures[i + 1];
		_124[i]       = _124[i + 1];
		_134[i]       = _134[i + 1];
	}
	m_textures[m_textureCount - 1] = nullptr;
	_111                           = (_111 & ~(1 << textureIndex)) >> 1;
	setBlendKonstColor();
	setBlendKonstAlpha();
	return true;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	clrlwi   r29, r4, 0x18
	stw      r28, 0x10(r1)
	mr       r28, r4
	lbz      r0, 0x110(r3)
	cmplw    r0, r29
	ble      lbl_8003B614
	cmplwi   r0, 1
	bne      lbl_8003B61C

lbl_8003B614:
	li       r3, 0
	b        lbl_8003B6E8

lbl_8003B61C:
	li       r0, 1
	lbz      r3, 0x111(r30)
	slw      r31, r0, r29
	and.     r0, r3, r31
	beq      lbl_8003B644
	rlwinm   r0, r28, 2, 0x16, 0x1d
	li       r4, 1
	add      r3, r30, r0
	lwz      r3, 0x100(r3)
	bl       __dt__10JUTTextureFv

lbl_8003B644:
	mr       r6, r28
	b        lbl_8003B678

lbl_8003B64C:
	slwi     r3, r3, 2
	rlwinm   r0, r6, 2, 0x16, 0x1d
	add      r4, r30, r3
	addi     r6, r6, 1
	lwz      r3, 0x104(r4)
	add      r5, r30, r0
	stw      r3, 0x100(r5)
	lfs      f0, 0x128(r4)
	stfs     f0, 0x124(r5)
	lfs      f0, 0x138(r4)
	stfs     f0, 0x134(r5)

lbl_8003B678:
	lbz      r4, 0x110(r30)
	clrlwi   r3, r6, 0x18
	addi     r0, r4, -1
	cmpw     r3, r0
	blt      lbl_8003B64C
	slwi     r0, r4, 2
	li       r4, 0
	add      r3, r30, r0
	stw      r4, 0xfc(r3)
	addi     r0, r29, 1
	li       r3, 1
	addi     r4, r31, -1
	slw      r3, r3, r0
	lbz      r5, 0x111(r30)
	addi     r0, r3, -1
	andc     r0, r5, r0
	and      r4, r5, r4
	srawi    r0, r0, 1
	mr       r3, r30
	or       r0, r4, r0
	stb      r0, 0x111(r30)
	lbz      r4, 0x110(r30)
	addi     r0, r4, -1
	stb      r0, 0x110(r30)
	bl       setBlendKonstColor__10J2DPictureFv
	mr       r3, r30
	bl       setBlendKonstAlpha__10J2DPictureFv
	li       r3, 1

lbl_8003B6E8:
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
 * Address:	8003B708
 * Size:	000060
 * remove__10J2DPictureFP10JUTTexture
 */
int J2DPicture::remove(JUTTexture* texture)
{
	u8 i;
	for (i = 0; i < m_textureCount && m_textures[i] != texture; i++) { }
	return remove(i);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r7, 0
	stw      r0, 0x14(r1)
	lbz      r6, 0x110(r3)
	b        lbl_8003B738

lbl_8003B720:
	rlwinm   r5, r7, 2, 0x16, 0x1d
	addi     r0, r5, 0x100
	lwzx     r0, r3, r0
	cmplw    r0, r4
	beq      lbl_8003B744
	addi     r7, r7, 1

lbl_8003B738:
	clrlwi   r0, r7, 0x18
	cmplw    r0, r6
	blt      lbl_8003B720

lbl_8003B744:
	lwz      r12, 0(r3)
	mr       r4, r7
	lwz      r12, 0xd8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8003B768
 * Size:	0000E8
 */
ResTIMG* J2DPicture::changeTexture(const ResTIMG* img, u8 textureIndex)
{
	if (textureIndex > m_textureCount || 4 <= textureIndex || img == nullptr) {
		return nullptr;
	}
	ResTIMG* result;
	if (textureIndex < m_textureCount) {
		JUTTexture* texture = getTexture(textureIndex);
		result              = texture->_20;
		u8 v1               = (img->m_paletteFormat != 0) ? getUsableTlut(textureIndex) : 0;
		getTexture(textureIndex)->storeTIMG(img, v1);
		return result;
	}
	append(img, 1.0f);
	return nullptr;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r29, r5
	clrlwi   r0, r29, 0x18
	mr       r27, r3
	mr       r28, r4
	lbz      r5, 0x110(r3)
	cmplw    r0, r5
	bgt      lbl_8003B7A4
	cmplwi   r0, 4
	bge      lbl_8003B7A4
	cmplwi   r28, 0
	bne      lbl_8003B7AC

lbl_8003B7A4:
	li       r3, 0
	b        lbl_8003B83C

lbl_8003B7AC:
	cmplw    r0, r5
	bge      lbl_8003B824
	lwz      r12, 0(r3)
	mr       r4, r29
	lwz      r12, 0x120(r12)
	mtctr    r12
	bctrl
	lbz      r0, 8(r28)
	li       r30, 0
	lwz      r31, 0x20(r3)
	cmplwi   r0, 0
	beq      lbl_8003B7F8
	mr       r3, r27
	mr       r4, r29
	lwz      r12, 0(r27)
	lwz      r12, 0x148(r12)
	mtctr    r12
	bctrl
	mr       r30, r3

lbl_8003B7F8:
	mr       r3, r27
	mr       r4, r29
	lwz      r12, 0(r27)
	lwz      r12, 0x120(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	mr       r5, r30
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	mr       r3, r31
	b        lbl_8003B83C

lbl_8003B824:
	lwz      r12, 0(r3)
	lfs      f1, lbl_805167F0@sda21(r2)
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl
	li       r3, 0

lbl_8003B83C:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8003B850
 * Size:	000024
 */
JUTTexture* J2DPicture::getTexture(u8 index) const { return (index < 4) ? m_textures[index] : nullptr; }

/*
 * --INFO--
 * Address:	8003B874
 * Size:	000058
 * changeTexture__10J2DPictureFPCcUc
 */
ResTIMG* J2DPicture::changeTexture(const char* name, unsigned char index)
{
	return changeTexture((ResTIMG*)J2DScreen::getNameResource(name), index);
}

/*
 * --INFO--
 * Address:	8003B8CC
 * Size:	000108
 */
ResTIMG* J2DPicture::changeTexture(const ResTIMG*, unsigned char, JUTPalette*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r28, r5
	clrlwi   r0, r28, 0x18
	mr       r26, r3
	mr       r27, r4
	mr       r29, r6
	lbz      r5, 0x110(r3)
	cmplw    r0, r5
	bgt      lbl_8003B90C
	cmplwi   r0, 4
	bge      lbl_8003B90C
	cmplwi   r27, 0
	bne      lbl_8003B914

lbl_8003B90C:
	li       r3, 0
	b        lbl_8003B9C0

lbl_8003B914:
	cmplw    r0, r5
	bge      lbl_8003B9A4
	lwz      r12, 0(r3)
	mr       r4, r28
	lwz      r12, 0x120(r12)
	mtctr    r12
	bctrl
	lbz      r0, 8(r27)
	li       r30, 0
	lwz      r31, 0x20(r3)
	cmplwi   r0, 0
	beq      lbl_8003B974
	mr       r3, r26
	mr       r4, r28
	lwz      r12, 0(r26)
	lwz      r12, 0x148(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	mr       r3, r26
	mr       r5, r0
	mr       r4, r27
	bl       getTlutID__10J2DPictureFPC7ResTIMGUc
	mr       r30, r3

lbl_8003B974:
	mr       r3, r26
	mr       r4, r28
	lwz      r12, 0(r26)
	lwz      r12, 0x120(r12)
	mtctr    r12
	bctrl
	mr       r4, r27
	mr       r5, r29
	mr       r6, r30
	bl       storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette7_GXTlut
	mr       r3, r31
	b        lbl_8003B9C0

lbl_8003B9A4:
	lwz      r12, 0(r3)
	mr       r5, r29
	lfs      f1, lbl_805167F0@sda21(r2)
	lwz      r12, 0xa0(r12)
	mtctr    r12
	bctrl
	li       r3, 0

lbl_8003B9C0:
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8003B9D4
 * Size:	000030
 * append__10J2DPictureFPC7ResTIMGP10JUTPalettef
 */
bool J2DPicture::append(const ResTIMG* img, JUTPalette* palette, float p3) { return insert(img, palette, m_textureCount, p3); }

/*
 * --INFO--
 * Address:	8003BA04
 * Size:	000068
 * changeTexture__10J2DPictureFPCcUcP10JUTPalette
 */
ResTIMG* J2DPicture::changeTexture(const char* name, unsigned char index, JUTPalette* palette)
{
	return changeTexture((ResTIMG*)J2DScreen::getNameResource(name), index, palette);
}

/*
 * --INFO--
 * Address:	8003BA6C
 * Size:	000068
 */
void J2DPicture::drawSelf(float p1, float p2)
{
	Mtx mtx;
	PSMTXIdentity(mtx);
	drawSelf(p1, p2, &mtx);
}

/*
 * --INFO--
 * Address:	8003BAD4
 * Size:	00006C
 * drawSelf__10J2DPictureFffPA3_A4_f
 */
void J2DPicture::drawSelf(float p1, float p2, float (*mtx)[3][4])
{
	if (m_textures[0] != nullptr && m_textureCount != 0) {
		drawFullSet(_030 + p1, _034 + p2, _020.getWidth(), _020.getHeight(), mtx);
	}
}

/*
 * --INFO--
 * Address:	8003BB40
 * Size:	000074
 */
void J2DPicture::drawFullSet(float p1, float p2, float width, float height, float (*mtx)[3][4])
{
	if (m_textures[0] != nullptr && m_textureCount != 0) {
		drawTexCoord(_020.i.x, _020.i.y, width, height, _112[0].x, _112[0].y, _112[1].x, _112[1].y, _112[2].x, _112[2].y, _112[3].x,
		             _112[3].y, mtx);
	}
}

/*
 * --INFO--
 * Address:	8003BBB4
 * Size:	0002F4
 */
void J2DPicture::draw(float, float, float, float, bool, bool, bool)
{
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	stw      r0, 0xb4(r1)
	stfd     f31, 0xa0(r1)
	psq_st   f31, 168(r1), 0, qr0
	stfd     f30, 0x90(r1)
	psq_st   f30, 152(r1), 0, qr0
	stfd     f29, 0x80(r1)
	psq_st   f29, 136(r1), 0, qr0
	stfd     f28, 0x70(r1)
	psq_st   f28, 120(r1), 0, qr0
	stmw     r27, 0x5c(r1)
	mr       r27, r3
	fmr      f28, f1
	lbz      r0, 0xb0(r3)
	fmr      f29, f2
	fmr      f30, f3
	mr       r28, r4
	fmr      f31, f4
	cmplwi   r0, 0
	mr       r29, r5
	mr       r30, r6
	beq      lbl_8003BE74
	lbz      r0, 0x110(r27)
	cmplwi   r0, 0
	beq      lbl_8003BE74
	lwz      r0, 0x100(r27)
	cmplwi   r0, 0
	beq      lbl_8003BE74
	li       r31, 0
	b        lbl_8003BC4C

lbl_8003BC30:
	mr       r3, r27
	mr       r4, r31
	lwz      r12, 0(r27)
	lwz      r12, 0x100(r12)
	mtctr    r12
	bctrl
	addi     r31, r31, 1

lbl_8003BC4C:
	lbz      r3, 0x110(r27)
	clrlwi   r0, r31, 0x18
	cmplw    r0, r3
	blt      lbl_8003BC30
	bl       GXSetNumTexGens
	lbz      r5, 0xb2(r27)
	li       r0, -1
	mr       r3, r27
	addi     r4, r1, 0x18
	stb      r5, 0xb3(r27)
	stw      r0, 0x18(r1)
	stw      r0, 0x1c(r1)
	stw      r0, 0x20(r1)
	stw      r0, 0x24(r1)
	bl       getNewColor__10J2DPictureFPQ28JUtility6TColor
	mr       r3, r27
	bl       setTevMode__10J2DPictureFv
	mr       r3, r27
	lfs      f3, lbl_80516800@sda21(r2)
	lwz      r12, 0(r27)
	fmr      f1, f28
	fmr      f2, f29
	lwz      r12, 0x48(r12)
	fmr      f4, f3
	mtctr    r12
	bctrl
	addi     r3, r27, 0x50
	li       r4, 0
	bl       GXLoadPosMtxImm
	li       r3, 0
	bl       GXSetCurrentMtx
	bl       GXClearVtxDesc
	li       r3, 9
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0xb
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0xd
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0
	li       r4, 9
	li       r5, 1
	li       r6, 4
	li       r7, 0
	bl       GXSetVtxAttrFmt
	rlwinm   r6, r28, 1, 0x17, 0x1e
	clrlwi   r0, r29, 0x18
	or       r7, r6, r0
	lwz      r5, 0x100(r27)
	mr       r3, r27
	mr       r8, r30
	addi     r4, r1, 8
	li       r6, 0xf
	bl
"setTexCoord__10J2DPictureFPQ29JGeometry8TVec2<s>PC10JUTTexture10J2DBinding9J2DMirrorb"
	li       r3, 0
	li       r4, 0xd
	li       r5, 1
	li       r6, 3
	li       r7, 8
	bl       GXSetVtxAttrFmt
	li       r3, 0x80
	li       r4, 0
	li       r5, 4
	bl       GXBegin
	lfs      f0, lbl_80516800@sda21(r2)
	lis      r8, 0xCC008000@ha
	li       r3, 0
	li       r4, 0xd
	stfs     f0, 0xCC008000@l(r8)
	li       r5, 1
	li       r6, 2
	li       r7, 0xf
	stfs     f0, -0x8000(r8)
	stfs     f0, -0x8000(r8)
	lwz      r0, 0x18(r1)
	stw      r0, -0x8000(r8)
	lha      r0, 8(r1)
	sth      r0, -0x8000(r8)
	lha      r0, 0xa(r1)
	sth      r0, -0x8000(r8)
	stfs     f30, -0x8000(r8)
	stfs     f0, -0x8000(r8)
	stfs     f0, -0x8000(r8)
	lwz      r0, 0x1c(r1)
	stw      r0, -0x8000(r8)
	lha      r0, 0xc(r1)
	sth      r0, -0x8000(r8)
	lha      r0, 0xe(r1)
	sth      r0, -0x8000(r8)
	stfs     f30, -0x8000(r8)
	stfs     f31, -0x8000(r8)
	stfs     f0, -0x8000(r8)
	lwz      r0, 0x24(r1)
	stw      r0, -0x8000(r8)
	lha      r0, 0x14(r1)
	sth      r0, -0x8000(r8)
	lha      r0, 0x16(r1)
	sth      r0, -0x8000(r8)
	stfs     f0, -0x8000(r8)
	stfs     f31, -0x8000(r8)
	stfs     f0, -0x8000(r8)
	lwz      r0, 0x20(r1)
	stw      r0, -0x8000(r8)
	lha      r0, 0x10(r1)
	sth      r0, -0x8000(r8)
	lha      r0, 0x12(r1)
	sth      r0, -0x8000(r8)
	bl       GXSetVtxAttrFmt
	li       r3, 0
	bl       GXSetNumTexGens
	li       r3, 1
	bl       GXSetNumTevStages
	li       r3, 0
	li       r4, 4
	bl       GXSetTevOp
	li       r3, 0
	li       r4, 0xff
	li       r5, 0xff
	li       r6, 4
	bl       GXSetTevOrder
	addi     r3, r1, 0x28
	bl       PSMTXIdentity
	addi     r3, r1, 0x28
	li       r4, 0
	bl       GXLoadPosMtxImm
	li       r3, 4
	li       r4, 0
	li       r5, 0
	li       r6, 1
	li       r7, 0
	li       r8, 0
	li       r9, 2
	bl       GXSetChanCtrl
	li       r3, 0xd
	li       r4, 0
	bl       GXSetVtxDesc

lbl_8003BE74:
	psq_l    f31, 168(r1), 0, qr0
	lfd      f31, 0xa0(r1)
	psq_l    f30, 152(r1), 0, qr0
	lfd      f30, 0x90(r1)
	psq_l    f29, 136(r1), 0, qr0
	lfd      f29, 0x80(r1)
	psq_l    f28, 120(r1), 0, qr0
	lfd      f28, 0x70(r1)
	lmw      r27, 0x5c(r1)
	lwz      r0, 0xb4(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8003BEA8
 * Size:	000034
 * load__10J2DPictureFUc
 */
void J2DPicture::load(unsigned char p1) { load((GXTexMapID)p1, p1); }

/*
 * --INFO--
 * Address:	8003BEDC
 * Size:	00004C
 * load__10J2DPictureF11_GXTexMapIDUc
 */
void J2DPicture::load(_GXTexMapID texMapID, u8 textureIndex)
{
	if (textureIndex < m_textureCount && textureIndex < 4 && m_textures[textureIndex] != nullptr) {
		m_textures[textureIndex]->load(texMapID);
	}
}

/*
 * --INFO--
 * Address:	8003BF28
 * Size:	0003FC
 */
void J2DPicture::drawOut(const JGeometry::TBox2<float>&, const JGeometry::TBox2<float>&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xF0(r1)
	  mflr      r0
	  stw       r0, 0xF4(r1)
	  stfd      f31, 0xE0(r1)
	  psq_st    f31,0xE8(r1),0,0
	  stfd      f30, 0xD0(r1)
	  psq_st    f30,0xD8(r1),0,0
	  stfd      f29, 0xC0(r1)
	  psq_st    f29,0xC8(r1),0,0
	  stfd      f28, 0xB0(r1)
	  psq_st    f28,0xB8(r1),0,0
	  stw       r31, 0xAC(r1)
	  stw       r30, 0xA8(r1)
	  stw       r29, 0xA4(r1)
	  stw       r28, 0xA0(r1)
	  mr        r28, r3
	  mr        r29, r4
	  lbz       r0, 0xB0(r3)
	  mr        r30, r5
	  cmplwi    r0, 0
	  beq-      .loc_0x3BC
	  lbz       r0, 0x110(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0x3BC
	  lwz       r0, 0x100(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0x3BC
	  li        r31, 0
	  b         .loc_0x90

	.loc_0x74:
	  mr        r3, r28
	  mr        r4, r31
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x100(r12)
	  mtctr     r12
	  bctrl
	  addi      r31, r31, 0x1

	.loc_0x90:
	  lbz       r3, 0x110(r28)
	  rlwinm    r0,r31,0,24,31
	  cmplw     r0, r3
	  blt+      .loc_0x74
	  bl        0xA8FD4
	  lfs       f3, 0x0(r30)
	  li        r0, -0x1
	  lfs       f2, 0x8(r30)
	  mr        r3, r28
	  lfs       f0, 0x8(r29)
	  addi      r4, r1, 0x8
	  lfs       f1, 0x0(r29)
	  fsubs     f5, f2, f3
	  fsubs     f2, f0, f2
	  lfs       f6, 0x4(r30)
	  lfs       f8, 0xC(r30)
	  fsubs     f4, f1, f3
	  lfs       f0, 0xC(r29)
	  lfs       f1, 0x4(r29)
	  fsubs     f7, f8, f6
	  lbz       r5, 0xB2(r28)
	  fsubs     f0, f0, f8
	  lfs       f3, -0x7B70(r2)
	  fdivs     f2, f2, f5
	  stb       r5, 0xB3(r28)
	  stw       r0, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r0, 0x10(r1)
	  stw       r0, 0x14(r1)
	  fsubs     f1, f1, f6
	  fdivs     f0, f0, f7
	  fdivs     f31, f4, f5
	  fdivs     f29, f1, f7
	  fadds     f30, f3, f2
	  fadds     f28, f3, f0
	  bl        0xCBC
	  mr        r3, r28
	  bl        0x514
	  bl        0xA8680
	  li        r3, 0x9
	  li        r4, 0x1
	  bl        0xA8228
	  li        r3, 0xB
	  li        r4, 0x1
	  bl        0xA821C
	  li        r3, 0xD
	  li        r4, 0x1
	  bl        0xA8210
	  li        r3, 0
	  li        r4, 0xD
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        0xA867C
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        0xA8664
	  li        r3, 0x80
	  li        r4, 0
	  li        r5, 0x4
	  bl        0xA98D4
	  lfs       f0, 0x0(r29)
	  lis       r0, 0x4330
	  lfs       f2, 0x4(r29)
	  lis       r8, 0xCC01
	  fctiwz    f4, f0
	  lfs       f1, 0x8(r29)
	  fctiwz    f7, f2
	  lfs       f0, 0xC(r29)
	  fctiwz    f1, f1
	  stw       r0, 0x30(r1)
	  stfd      f4, 0x28(r1)
	  fctiwz    f2, f0
	  lfd       f6, -0x7B58(r2)
	  stfd      f7, 0x18(r1)
	  lwz       r3, 0x2C(r1)
	  lwz       r4, 0x1C(r1)
	  extsh     r3, r3
	  stfd      f1, 0x48(r1)
	  xoris     r3, r3, 0x8000
	  extsh     r4, r4
	  stw       r3, 0x34(r1)
	  xoris     r4, r4, 0x8000
	  lwz       r3, 0x4C(r1)
	  lfd       f0, 0x30(r1)
	  stw       r4, 0x24(r1)
	  extsh     r3, r3
	  fsubs     f0, f0, f6
	  xoris     r3, r3, 0x8000
	  stw       r0, 0x20(r1)
	  lfs       f3, -0x7B60(r2)
	  lfd       f5, 0x20(r1)
	  stfd      f7, 0x38(r1)
	  fsubs     f5, f5, f6
	  stfs      f0, -0x8000(r8)
	  lwz       r4, 0x3C(r1)
	  stfs      f5, -0x8000(r8)
	  extsh     r4, r4
	  stfs      f3, -0x8000(r8)
	  xoris     r5, r4, 0x8000
	  lwz       r4, 0x8(r1)
	  stw       r3, 0x54(r1)
	  stw       r0, 0x50(r1)
	  stw       r4, -0x8000(r8)
	  lfd       f0, 0x50(r1)
	  stfs      f31, -0x8000(r8)
	  fsubs     f0, f0, f6
	  stfs      f29, -0x8000(r8)
	  stfd      f1, 0x68(r1)
	  stfd      f2, 0x58(r1)
	  lwz       r3, 0x6C(r1)
	  lwz       r4, 0x5C(r1)
	  extsh     r3, r3
	  stw       r5, 0x44(r1)
	  xoris     r3, r3, 0x8000
	  extsh     r4, r4
	  stw       r0, 0x40(r1)
	  xoris     r4, r4, 0x8000
	  lfd       f1, 0x40(r1)
	  stfs      f0, -0x8000(r8)
	  fsubs     f0, f1, f6
	  stw       r3, 0x74(r1)
	  stfs      f0, -0x8000(r8)
	  stfs      f3, -0x8000(r8)
	  lwz       r3, 0xC(r1)
	  stw       r0, 0x70(r1)
	  stw       r3, -0x8000(r8)
	  lfd       f0, 0x70(r1)
	  stfs      f30, -0x8000(r8)
	  fsubs     f0, f0, f6
	  stfs      f29, -0x8000(r8)
	  stw       r4, 0x64(r1)
	  stw       r0, 0x60(r1)
	  lfd       f1, 0x60(r1)
	  stfs      f0, -0x8000(r8)
	  fsubs     f0, f1, f6
	  stfd      f4, 0x88(r1)
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  stfs      f0, -0x8000(r8)
	  li        r6, 0x3
	  lwz       r9, 0x8C(r1)
	  li        r7, 0
	  stfd      f2, 0x78(r1)
	  extsh     r9, r9
	  stfs      f3, -0x8000(r8)
	  xoris     r9, r9, 0x8000
	  lwz       r10, 0x7C(r1)
	  lwz       r11, 0x14(r1)
	  extsh     r10, r10
	  stw       r9, 0x94(r1)
	  xoris     r9, r10, 0x8000
	  stw       r0, 0x90(r1)
	  stw       r11, -0x8000(r8)
	  lfd       f0, 0x90(r1)
	  stfs      f30, -0x8000(r8)
	  fsubs     f0, f0, f6
	  stfs      f28, -0x8000(r8)
	  stw       r9, 0x84(r1)
	  stw       r0, 0x80(r1)
	  lfd       f1, 0x80(r1)
	  stfs      f0, -0x8000(r8)
	  fsubs     f0, f1, f6
	  stfs      f0, -0x8000(r8)
	  stfs      f3, -0x8000(r8)
	  lwz       r0, 0x10(r1)
	  stw       r0, -0x8000(r8)
	  stfs      f31, -0x8000(r8)
	  stfs      f28, -0x8000(r8)
	  bl        0xA849C
	  li        r3, 0
	  li        r4, 0xD
	  li        r5, 0x1
	  li        r6, 0x2
	  li        r7, 0xF
	  bl        0xA8484
	  li        r3, 0
	  bl        0xA8D10
	  li        r3, 0x1
	  bl        0xAC924
	  li        r3, 0
	  li        r4, 0x4
	  bl        0xAC1DC
	  li        r3, 0
	  li        r4, 0xFF
	  li        r5, 0xFF
	  li        r6, 0x4
	  bl        0xAC768
	  li        r3, 0x4
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x1
	  li        r7, 0
	  li        r8, 0
	  li        r9, 0x2
	  bl        0xAABCC
	  li        r3, 0xD
	  li        r4, 0
	  bl        0xA7FA4

	.loc_0x3BC:
	  psq_l     f31,0xE8(r1),0,0
	  lfd       f31, 0xE0(r1)
	  psq_l     f30,0xD8(r1),0,0
	  lfd       f30, 0xD0(r1)
	  psq_l     f29,0xC8(r1),0,0
	  lfd       f29, 0xC0(r1)
	  psq_l     f28,0xB8(r1),0,0
	  lfd       f28, 0xB0(r1)
	  lwz       r31, 0xAC(r1)
	  lwz       r30, 0xA8(r1)
	  lwz       r29, 0xA4(r1)
	  lwz       r0, 0xF4(r1)
	  lwz       r28, 0xA0(r1)
	  mtlr      r0
	  addi      r1, r1, 0xF0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003C324
 * Size:	00023C
 */
void J2DPicture::drawTexCoord(float, float, float, float, short, short, short, short, short, short, short, short, float (*)[3][4])
{
	/*
	.loc_0x0:
	  stwu      r1, -0xC0(r1)
	  mflr      r0
	  stw       r0, 0xC4(r1)
	  stfd      f31, 0xB0(r1)
	  psq_st    f31,0xB8(r1),0,0
	  stfd      f30, 0xA0(r1)
	  psq_st    f30,0xA8(r1),0,0
	  stfd      f29, 0x90(r1)
	  psq_st    f29,0x98(r1),0,0
	  stfd      f28, 0x80(r1)
	  psq_st    f28,0x88(r1),0,0
	  stmw      r21, 0x54(r1)
	  mr        r21, r3
	  fmr       f28, f1
	  lbz       r0, 0x110(r3)
	  fmr       f29, f2
	  fmr       f31, f3
	  lha       r29, 0xCA(r1)
	  fmr       f30, f4
	  cmplwi    r0, 0
	  lwz       r30, 0xCC(r1)
	  mr        r22, r4
	  mr        r23, r5
	  mr        r24, r6
	  mr        r25, r7
	  mr        r26, r8
	  mr        r27, r9
	  mr        r28, r10
	  beq-      .loc_0x208
	  li        r31, 0
	  b         .loc_0x98

	.loc_0x7C:
	  mr        r3, r21
	  mr        r4, r31
	  lwz       r12, 0x0(r21)
	  lwz       r12, 0x100(r12)
	  mtctr     r12
	  bctrl
	  addi      r31, r31, 0x1

	.loc_0x98:
	  lbz       r3, 0x110(r21)
	  rlwinm    r0,r31,0,24,31
	  cmplw     r0, r3
	  blt+      .loc_0x7C
	  fadds     f31, f28, f31
	  fadds     f30, f29, f30
	  bl        0xA8BC8
	  li        r0, -0x1
	  mr        r3, r21
	  stw       r0, 0x8(r1)
	  addi      r4, r1, 0x8
	  stw       r0, 0xC(r1)
	  stw       r0, 0x10(r1)
	  stw       r0, 0x14(r1)
	  bl        0x90C
	  mr        r3, r21
	  bl        .loc_0x23C
	  mr        r3, r30
	  addi      r4, r21, 0x80
	  addi      r5, r1, 0x18
	  bl        0xADEF4
	  addi      r3, r1, 0x18
	  li        r4, 0
	  bl        0xAD160
	  bl        0xA82B4
	  li        r3, 0x9
	  li        r4, 0x1
	  bl        0xA7E5C
	  li        r3, 0xB
	  li        r4, 0x1
	  bl        0xA7E50
	  li        r3, 0xD
	  li        r4, 0x1
	  bl        0xA7E44
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        0xA82B0
	  li        r3, 0
	  li        r4, 0xD
	  li        r5, 0x1
	  li        r6, 0x3
	  li        r7, 0x8
	  bl        0xA8298
	  li        r3, 0x80
	  li        r4, 0
	  li        r5, 0x4
	  bl        0xA9508
	  lis       r8, 0xCC01
	  lfs       f0, -0x7B60(r2)
	  stfs      f28, -0x8000(r8)
	  li        r3, 0
	  li        r4, 0xD
	  li        r5, 0x1
	  stfs      f29, -0x8000(r8)
	  li        r6, 0x2
	  li        r7, 0xF
	  stfs      f0, -0x8000(r8)
	  lwz       r0, 0x8(r1)
	  stw       r0, -0x8000(r8)
	  sth       r22, -0x8000(r8)
	  sth       r23, -0x8000(r8)
	  stfs      f31, -0x8000(r8)
	  stfs      f29, -0x8000(r8)
	  stfs      f0, -0x8000(r8)
	  lwz       r0, 0xC(r1)
	  stw       r0, -0x8000(r8)
	  sth       r24, -0x8000(r8)
	  sth       r25, -0x8000(r8)
	  stfs      f31, -0x8000(r8)
	  stfs      f30, -0x8000(r8)
	  stfs      f0, -0x8000(r8)
	  lwz       r0, 0x14(r1)
	  stw       r0, -0x8000(r8)
	  sth       r28, -0x8000(r8)
	  sth       r29, -0x8000(r8)
	  stfs      f28, -0x8000(r8)
	  stfs      f30, -0x8000(r8)
	  stfs      f0, -0x8000(r8)
	  lwz       r0, 0x10(r1)
	  stw       r0, -0x8000(r8)
	  sth       r26, -0x8000(r8)
	  sth       r27, -0x8000(r8)
	  bl        0xA81F8
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x3
	  li        r7, 0
	  bl        0xA81E0

	.loc_0x208:
	  psq_l     f31,0xB8(r1),0,0
	  lfd       f31, 0xB0(r1)
	  psq_l     f30,0xA8(r1),0,0
	  lfd       f30, 0xA0(r1)
	  psq_l     f29,0x98(r1),0,0
	  lfd       f29, 0x90(r1)
	  psq_l     f28,0x88(r1),0,0
	  lfd       f28, 0x80(r1)
	  lmw       r21, 0x54(r1)
	  lwz       r0, 0xC4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xC0
	  blr

	.loc_0x23C:
	*/
}

/*
 * --INFO--
 * Address:	8003C560
 * Size:	0004A0
 */
void J2DPicture::setTevMode()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r30, r3
	stw      r29, 0x24(r1)
	stw      r28, 0x20(r1)
	li       r28, 0
	b        lbl_8003C5A0

lbl_8003C588:
	clrlwi   r3, r28, 0x18
	li       r6, 0xff
	mr       r4, r3
	mr       r5, r3
	bl       GXSetTevOrder
	addi     r28, r28, 1

lbl_8003C5A0:
	lbz      r0, 0x110(r30)
	clrlwi   r3, r28, 0x18
	cmplw    r3, r0
	blt      lbl_8003C588
	li       r0, -1
	addi     r4, r1, 0x1c
	stw      r0, 0x18(r1)
	li       r3, 3
	stw      r0, 0x1c(r1)
	bl       GXSetTevColor
	li       r3, 0
	li       r4, 8
	li       r5, 0xf
	li       r6, 0xf
	li       r7, 0xf
	bl       GXSetTevColorIn
	lwz      r3, 0x100(r30)
	cmplwi   r3, 0
	bne      lbl_8003C608
	li       r3, 0
	li       r4, 3
	li       r5, 7
	li       r6, 7
	li       r7, 7
	bl       GXSetTevAlphaIn
	b        lbl_8003C64C

lbl_8003C608:
	lwz      r3, 0x20(r3)
	lbz      r0, 1(r3)
	cmpwi    r0, 0
	beq      lbl_8003C634
	li       r3, 0
	li       r4, 4
	li       r5, 7
	li       r6, 7
	li       r7, 7
	bl       GXSetTevAlphaIn
	b        lbl_8003C64C

lbl_8003C634:
	li       r3, 0
	li       r4, 3
	li       r5, 7
	li       r6, 7
	li       r7, 7
	bl       GXSetTevAlphaIn

lbl_8003C64C:
	li       r3, 0
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 1
	li       r8, 0
	bl       GXSetTevColorOp
	li       r3, 0
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 1
	li       r8, 0
	bl       GXSetTevAlphaOp
	lwz      r0, 0x160(r30)
	addi     r4, r1, 0x14
	li       r3, 0
	stw      r0, 0x14(r1)
	bl       GXSetTevKColor
	lwz      r0, 0x164(r30)
	addi     r4, r1, 0x10
	li       r3, 2
	stw      r0, 0x10(r1)
	bl       GXSetTevKColor
	li       r31, 1
	b        lbl_8003C79C

lbl_8003C6B4:
	clrlwi   r29, r31, 0x18
	rlwinm   r28, r31, 2, 0x16, 0x1d
	mr       r3, r29
	subfic   r4, r28, 0x20
	bl       GXSetTevKColorSel
	mr       r3, r29
	subfic   r4, r28, 0x22
	bl       GXSetTevKAlphaSel
	mr       r3, r29
	li       r4, 0
	li       r5, 8
	li       r6, 0xe
	li       r7, 0xf
	bl       GXSetTevColorIn
	mr       r3, r28
	addi     r0, r3, 0x100
	lwzx     r3, r30, r0
	cmplwi   r3, 0
	bne      lbl_8003C71C
	mr       r3, r29
	li       r4, 0
	li       r5, 3
	li       r6, 6
	li       r7, 7
	bl       GXSetTevAlphaIn
	b        lbl_8003C760

lbl_8003C71C:
	lwz      r3, 0x20(r3)
	lbz      r0, 1(r3)
	cmpwi    r0, 0
	beq      lbl_8003C748
	mr       r3, r29
	li       r4, 0
	li       r5, 4
	li       r6, 6
	li       r7, 7
	bl       GXSetTevAlphaIn
	b        lbl_8003C760

lbl_8003C748:
	mr       r3, r29
	li       r4, 0
	li       r5, 3
	li       r6, 6
	li       r7, 7
	bl       GXSetTevAlphaIn

lbl_8003C760:
	mr       r3, r29
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 1
	li       r8, 0
	bl       GXSetTevColorOp
	mr       r3, r29
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 1
	li       r8, 0
	bl       GXSetTevAlphaOp
	addi     r31, r31, 1

lbl_8003C79C:
	lbz      r0, 0x110(r30)
	clrlwi   r3, r31, 0x18
	cmplw    r3, r0
	blt      lbl_8003C6B4
	lwz      r0, 0x14c(r30)
	cmplwi   r0, 0
	bne      lbl_8003C7C8
	lwz      r3, 0x148(r30)
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	beq      lbl_8003C874

lbl_8003C7C8:
	clrlwi   r28, r31, 0x18
	li       r4, 0xff
	mr       r3, r28
	li       r5, 0xff
	li       r6, 0xff
	bl       GXSetTevOrder
	lwz      r0, 0x14c(r30)
	addi     r4, r1, 0xc
	li       r3, 1
	stw      r0, 0xc(r1)
	bl       GXSetTevColor
	lwz      r0, 0x148(r30)
	addi     r4, r1, 8
	li       r3, 2
	stw      r0, 8(r1)
	bl       GXSetTevColor
	mr       r3, r28
	li       r4, 2
	li       r5, 4
	li       r6, 0
	li       r7, 0xf
	bl       GXSetTevColorIn
	mr       r3, r28
	li       r4, 1
	li       r5, 2
	li       r6, 0
	li       r7, 7
	bl       GXSetTevAlphaIn
	mr       r3, r28
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 1
	li       r8, 0
	bl       GXSetTevColorOp
	mr       r3, r28
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 1
	li       r8, 0
	bl       GXSetTevAlphaOp
	addi     r31, r31, 1

lbl_8003C874:
	lbz      r0, 0xb3(r30)
	cmplwi   r0, 0xff
	bne      lbl_8003C8C0
	lwz      r3, 0x150(r30)
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	bne      lbl_8003C8C0
	lwz      r3, 0x154(r30)
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	bne      lbl_8003C8C0
	lwz      r3, 0x158(r30)
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	bne      lbl_8003C8C0
	lwz      r3, 0x15c(r30)
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	beq      lbl_8003C944

lbl_8003C8C0:
	clrlwi   r28, r31, 0x18
	li       r4, 0xff
	mr       r3, r28
	li       r5, 0xff
	li       r6, 4
	bl       GXSetTevOrder
	mr       r3, r28
	li       r4, 0xf
	li       r5, 0
	li       r6, 0xa
	li       r7, 0xf
	bl       GXSetTevColorIn
	mr       r3, r28
	li       r4, 7
	li       r5, 0
	li       r6, 5
	li       r7, 7
	bl       GXSetTevAlphaIn
	mr       r3, r28
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 1
	li       r8, 0
	bl       GXSetTevColorOp
	mr       r3, r28
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 1
	li       r8, 0
	bl       GXSetTevAlphaOp
	addi     r31, r31, 1

lbl_8003C944:
	mr       r3, r31
	bl       GXSetNumTevStages
	li       r3, 1
	li       r4, 4
	li       r5, 5
	li       r6, 0xf
	bl       GXSetBlendMode
	li       r28, 0
	b        lbl_8003C988

lbl_8003C968:
	clrlwi   r3, r28, 0x18
	li       r4, 1
	li       r5, 4
	li       r6, 0x3c
	li       r7, 0
	li       r8, 0x7d
	bl       GXSetTexCoordGen2
	addi     r28, r28, 1

lbl_8003C988:
	lbz      r0, 0x110(r30)
	clrlwi   r3, r28, 0x18
	cmplw    r3, r0
	blt      lbl_8003C968
	li       r3, 1
	bl       GXSetNumChans
	li       r3, 4
	li       r4, 0
	li       r5, 0
	li       r6, 1
	li       r7, 0
	li       r8, 0
	li       r9, 2
	bl       GXSetChanCtrl
	li       r3, 0
	bl       GXSetNumIndStages
	li       r28, 0

lbl_8003C9CC:
	mr       r3, r28
	bl       GXSetTevDirect
	addi     r28, r28, 1
	cmpwi    r28, 0x10
	blt      lbl_8003C9CC
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

/*
 * --INFO--
 * Address:	8003CA00
 * Size:	000030
 */
void J2DPicture::setBlendColorRatio(float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8)
{
	_124[0] = p1;
	_124[1] = p2;
	_124[2] = p3;
	_124[3] = p4;
	setBlendKonstColor();
}

/*
 * --INFO--
 * Address:	8003CA30
 * Size:	000030
 */
void J2DPicture::setBlendAlphaRatio(float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8)
{
	_134[0] = p1;
	_134[1] = p2;
	_134[2] = p3;
	_134[3] = p4;
	setBlendKonstAlpha();
}

/*
 * --INFO--
 * Address:	8003CA60
 * Size:	000150
 */
void J2DPicture::setBlendKonstColor()
{
	/*
	stwu     r1, -0x20(r1)
	li       r7, 0
	lfs      f3, lbl_80516800@sda21(r2)
	li       r8, 1
	lbz      r6, 0x110(r3)
	b        lbl_8003CB78

lbl_8003CA78:
	clrlwi   r0, r8, 0x18
	lfs      f7, lbl_80516800@sda21(r2)
	cmplwi   r0, 0
	li       r5, 0
	ble      lbl_8003CB24
	cmplwi   r0, 8
	addi     r0, r8, -8
	ble      lbl_8003CAFC
	clrlwi   r0, r0, 0x18
	b        lbl_8003CAF0

lbl_8003CAA0:
	rlwinm   r4, r5, 2, 0x16, 0x1d
	addi     r5, r5, 8
	addi     r4, r4, 0x124
	add      r4, r3, r4
	lfs      f1, 0(r4)
	lfs      f0, 4(r4)
	fadds    f7, f7, f1
	lfs      f6, 8(r4)
	lfs      f5, 0xc(r4)
	lfs      f4, 0x10(r4)
	fadds    f7, f7, f0
	lfs      f2, 0x14(r4)
	lfs      f1, 0x18(r4)
	lfs      f0, 0x1c(r4)
	fadds    f7, f7, f6
	fadds    f7, f7, f5
	fadds    f7, f7, f4
	fadds    f7, f7, f2
	fadds    f7, f7, f1
	fadds    f7, f7, f0

lbl_8003CAF0:
	clrlwi   r4, r5, 0x18
	cmplw    r4, r0
	blt      lbl_8003CAA0

lbl_8003CAFC:
	clrlwi   r0, r8, 0x18
	b        lbl_8003CB18

lbl_8003CB04:
	rlwinm   r4, r5, 2, 0x16, 0x1d
	addi     r5, r5, 1
	addi     r4, r4, 0x124
	lfsx     f0, r3, r4
	fadds    f7, f7, f0

lbl_8003CB18:
	clrlwi   r4, r5, 0x18
	cmplw    r4, r0
	blt      lbl_8003CB04

lbl_8003CB24:
	rlwinm   r4, r8, 2, 0x16, 0x1d
	clrlwi   r5, r8, 0x18
	addi     r0, r4, 0x124
	lfsx     f0, r3, r0
	fadds    f0, f7, f0
	fcmpu    cr0, f3, f0
	beq      lbl_8003CB74
	fdivs    f0, f7, f0
	lfs      f1, lbl_805167F0@sda21(r2)
	addi     r0, r5, -1
	lfs      f2, lbl_80516810@sda21(r2)
	slwi     r0, r0, 3
	fsubs    f0, f1, f0
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r4, 0x14(r1)
	clrlwi   r4, r4, 0x18
	slw      r0, r4, r0
	or       r7, r7, r0

lbl_8003CB74:
	addi     r8, r8, 1

lbl_8003CB78:
	clrlwi   r0, r8, 0x18
	cmplw    r0, r6
	blt      lbl_8003CA78
	stw      r7, 8(r1)
	lbz      r4, 8(r1)
	lbz      r0, 9(r1)
	stb      r4, 0x160(r3)
	lbz      r4, 0xa(r1)
	stb      r0, 0x161(r3)
	lbz      r0, 0xb(r1)
	stb      r4, 0x162(r3)
	stb      r0, 0x163(r3)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8003CBB0
 * Size:	000150
 */
void J2DPicture::setBlendKonstAlpha()
{
	/*
	stwu     r1, -0x20(r1)
	li       r7, 0
	lfs      f3, lbl_80516800@sda21(r2)
	li       r8, 1
	lbz      r6, 0x110(r3)
	b        lbl_8003CCC8

lbl_8003CBC8:
	clrlwi   r0, r8, 0x18
	lfs      f7, lbl_80516800@sda21(r2)
	cmplwi   r0, 0
	li       r5, 0
	ble      lbl_8003CC74
	cmplwi   r0, 8
	addi     r0, r8, -8
	ble      lbl_8003CC4C
	clrlwi   r0, r0, 0x18
	b        lbl_8003CC40

lbl_8003CBF0:
	rlwinm   r4, r5, 2, 0x16, 0x1d
	addi     r5, r5, 8
	addi     r4, r4, 0x134
	add      r4, r3, r4
	lfs      f1, 0(r4)
	lfs      f0, 4(r4)
	fadds    f7, f7, f1
	lfs      f6, 8(r4)
	lfs      f5, 0xc(r4)
	lfs      f4, 0x10(r4)
	fadds    f7, f7, f0
	lfs      f2, 0x14(r4)
	lfs      f1, 0x18(r4)
	lfs      f0, 0x1c(r4)
	fadds    f7, f7, f6
	fadds    f7, f7, f5
	fadds    f7, f7, f4
	fadds    f7, f7, f2
	fadds    f7, f7, f1
	fadds    f7, f7, f0

lbl_8003CC40:
	clrlwi   r4, r5, 0x18
	cmplw    r4, r0
	blt      lbl_8003CBF0

lbl_8003CC4C:
	clrlwi   r0, r8, 0x18
	b        lbl_8003CC68

lbl_8003CC54:
	rlwinm   r4, r5, 2, 0x16, 0x1d
	addi     r5, r5, 1
	addi     r4, r4, 0x134
	lfsx     f0, r3, r4
	fadds    f7, f7, f0

lbl_8003CC68:
	clrlwi   r4, r5, 0x18
	cmplw    r4, r0
	blt      lbl_8003CC54

lbl_8003CC74:
	rlwinm   r4, r8, 2, 0x16, 0x1d
	clrlwi   r5, r8, 0x18
	addi     r0, r4, 0x134
	lfsx     f0, r3, r0
	fadds    f0, f7, f0
	fcmpu    cr0, f3, f0
	beq      lbl_8003CCC4
	fdivs    f0, f7, f0
	lfs      f1, lbl_805167F0@sda21(r2)
	addi     r0, r5, -1
	lfs      f2, lbl_80516810@sda21(r2)
	slwi     r0, r0, 3
	fsubs    f0, f1, f0
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r4, 0x14(r1)
	clrlwi   r4, r4, 0x18
	slw      r0, r4, r0
	or       r7, r7, r0

lbl_8003CCC4:
	addi     r8, r8, 1

lbl_8003CCC8:
	clrlwi   r0, r8, 0x18
	cmplw    r0, r6
	blt      lbl_8003CBC8
	stw      r7, 8(r1)
	lbz      r4, 8(r1)
	lbz      r0, 9(r1)
	stb      r4, 0x164(r3)
	lbz      r4, 0xa(r1)
	stb      r0, 0x165(r3)
	lbz      r0, 0xb(r1)
	stb      r4, 0x166(r3)
	stb      r0, 0x167(r3)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8003CD00
 * Size:	000124
 */
void J2DPicture::getNewColor(JUtility::TColor* newColor)
{
	for (int i = 0; i < 4; i++) {
		newColor[i] = _150[i];
	}
	if (_0B3 != 0xFF) {
		newColor[0].a = newColor[0].a * _0B3 / 0xFF;
		newColor[1].a = newColor[1].a * _0B3 / 0xFF;
		newColor[2].a = newColor[2].a * _0B3 / 0xFF;
		newColor[3].a = newColor[3].a * _0B3 / 0xFF;
	}
}

/*
 * --INFO--
 * Address:	8003CE24
 * Size:	000044
 */
void J2DPicture::setTexCoord(const JGeometry::TVec2<short>* coords)
{
	for (int i = 0; i < 4; i++) {
		_112[i].x = coords[i].x;
		_112[i].y = coords[i].y;
	}
}

/*
 * --INFO--
 * Address:	8003CE68
 * Size:	00003C
 * setTexCoord__10J2DPictureFPC10JUTTexture10J2DBinding9J2DMirrorb
 */
void J2DPicture::setTexCoord(const JUTTexture* texture, J2DBinding binding, J2DMirror mirror, bool p4)
{
	setTexCoord(_112, texture, binding, mirror, p4);
}

/*
 * --INFO--
 * Address:	8003CEA4
 * Size:	000318
 */
void J2DPicture::setTexCoord(JGeometry::TVec2<short>*, const JUTTexture*, J2DBinding, J2DMirror, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stfd      f30, 0x40(r1)
	  psq_st    f30,0x48(r1),0,0
	  stfd      f29, 0x30(r1)
	  psq_st    f29,0x38(r1),0,0
	  stmw      r27, 0x1C(r1)
	  rlwinm.   r0,r8,0,24,31
	  mr        r31, r8
	  mr        r30, r4
	  bne-      .loc_0x98
	  rlwinm.   r4,r7,0,30,30
	  beq-      .loc_0x48
	  rlwinm    r0,r6,30,31,31
	  b         .loc_0x4C

	.loc_0x48:
	  rlwinm    r0,r6,29,31,31

	.loc_0x4C:
	  cmpwi     r4, 0
	  beq-      .loc_0x5C
	  rlwinm    r4,r6,29,31,31
	  b         .loc_0x60

	.loc_0x5C:
	  rlwinm    r4,r6,30,31,31

	.loc_0x60:
	  rlwinm.   r9,r7,0,31,31
	  beq-      .loc_0x70
	  rlwinm    r8,r6,0,31,31
	  b         .loc_0x74

	.loc_0x70:
	  rlwinm    r8,r6,31,31,31

	.loc_0x74:
	  cmpwi     r9, 0
	  mr        r9, r8
	  beq-      .loc_0x8C
	  rlwinm    r6,r6,31,31,31
	  mr        r10, r6
	  b         .loc_0xF4

	.loc_0x8C:
	  rlwinm    r6,r6,0,31,31
	  mr        r10, r6
	  b         .loc_0xF4

	.loc_0x98:
	  rlwinm.   r4,r7,0,30,30
	  beq-      .loc_0xA8
	  rlwinm    r0,r6,0,31,31
	  b         .loc_0xAC

	.loc_0xA8:
	  rlwinm    r0,r6,31,31,31

	.loc_0xAC:
	  cmpwi     r4, 0
	  beq-      .loc_0xBC
	  rlwinm    r4,r6,31,31,31
	  b         .loc_0xC0

	.loc_0xBC:
	  rlwinm    r4,r6,0,31,31

	.loc_0xC0:
	  rlwinm.   r9,r7,0,31,31
	  beq-      .loc_0xD0
	  rlwinm    r8,r6,29,31,31
	  b         .loc_0xD4

	.loc_0xD0:
	  rlwinm    r8,r6,30,31,31

	.loc_0xD4:
	  cmpwi     r9, 0
	  mr        r9, r8
	  beq-      .loc_0xEC
	  rlwinm    r6,r6,30,31,31
	  mr        r10, r6
	  b         .loc_0xF4

	.loc_0xEC:
	  rlwinm    r6,r6,29,31,31
	  mr        r10, r6

	.loc_0xF4:
	  rlwinm    r6,r31,0,24,31
	  cntlzw    r8, r6
	  rlwinm.   r6,r8,27,24,31
	  rlwinm    r6,r8,27,5,31
	  beq-      .loc_0x118
	  lfs       f1, 0x28(r3)
	  lfs       f0, 0x20(r3)
	  fsubs     f3, f1, f0
	  b         .loc_0x124

	.loc_0x118:
	  lfs       f1, 0x2C(r3)
	  lfs       f0, 0x24(r3)
	  fsubs     f3, f1, f0

	.loc_0x124:
	  rlwinm.   r6,r6,0,24,31
	  beq-      .loc_0x13C
	  lfs       f1, 0x2C(r3)
	  lfs       f0, 0x24(r3)
	  fsubs     f4, f1, f0
	  b         .loc_0x148

	.loc_0x13C:
	  lfs       f1, 0x28(r3)
	  lfs       f0, 0x20(r3)
	  fsubs     f4, f1, f0

	.loc_0x148:
	  cmplwi    r5, 0
	  bne-      .loc_0x15C
	  fmr       f5, f3
	  fmr       f6, f4
	  b         .loc_0x198

	.loc_0x15C:
	  lwz       r3, 0x20(r5)
	  lis       r5, 0x4330
	  stw       r5, 0x8(r1)
	  lhz       r6, 0x2(r3)
	  lhz       r3, 0x4(r3)
	  xoris     r6, r6, 0x8000
	  stw       r5, 0x10(r1)
	  xoris     r3, r3, 0x8000
	  lfd       f2, -0x7B58(r2)
	  stw       r6, 0xC(r1)
	  stw       r3, 0x14(r1)
	  lfd       f1, 0x8(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f5, f1, f2
	  fsubs     f6, f0, f2

	.loc_0x198:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x1BC
	  rlwinm.   r0,r4,0,24,31
	  lfs       f1, -0x7B60(r2)
	  beq-      .loc_0x1B4
	  lfs       f30, -0x7B70(r2)
	  b         .loc_0x1EC

	.loc_0x1B4:
	  fdivs     f30, f3, f5
	  b         .loc_0x1EC

	.loc_0x1BC:
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x1D8
	  fdivs     f0, f3, f5
	  lfs       f1, -0x7B70(r2)
	  fmr       f30, f1
	  fsubs     f1, f1, f0
	  b         .loc_0x1EC

	.loc_0x1D8:
	  fdivs     f0, f3, f5
	  lfs       f2, -0x7B4C(r2)
	  fmuls     f0, f0, f2
	  fsubs     f1, f2, f0
	  fadds     f30, f2, f0

	.loc_0x1EC:
	  rlwinm.   r0,r9,0,24,31
	  beq-      .loc_0x210
	  rlwinm.   r0,r10,0,24,31
	  lfs       f31, -0x7B60(r2)
	  beq-      .loc_0x208
	  lfs       f29, -0x7B70(r2)
	  b         .loc_0x240

	.loc_0x208:
	  fdivs     f29, f4, f6
	  b         .loc_0x240

	.loc_0x210:
	  rlwinm.   r0,r10,0,24,31
	  beq-      .loc_0x22C
	  fdivs     f0, f4, f6
	  lfs       f2, -0x7B70(r2)
	  fmr       f29, f2
	  fsubs     f31, f2, f0
	  b         .loc_0x240

	.loc_0x22C:
	  fdivs     f0, f4, f6
	  lfs       f2, -0x7B4C(r2)
	  fmuls     f0, f0, f2
	  fsubs     f31, f2, f0
	  fadds     f29, f2, f0

	.loc_0x240:
	  rlwinm.   r0,r7,0,30,30
	  beq-      .loc_0x254
	  fmr       f0, f1
	  fmr       f1, f30
	  fmr       f30, f0

	.loc_0x254:
	  rlwinm.   r0,r7,0,31,31
	  beq-      .loc_0x268
	  fmr       f0, f31
	  fmr       f31, f29
	  fmr       f29, f0

	.loc_0x268:
	  li        r3, 0x8
	  bl        -0x3E08
	  fmr       f1, f30
	  mr        r27, r3
	  li        r3, 0x8
	  bl        -0x3E18
	  fmr       f1, f31
	  mr        r28, r3
	  li        r3, 0x8
	  bl        -0x3E28
	  fmr       f1, f29
	  mr        r29, r3
	  li        r3, 0x8
	  bl        -0x3E38
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0x2CC
	  sth       r27, 0x0(r30)
	  sth       r29, 0x2(r30)
	  sth       r28, 0x4(r30)
	  sth       r29, 0x6(r30)
	  sth       r27, 0x8(r30)
	  sth       r3, 0xA(r30)
	  sth       r28, 0xC(r30)
	  sth       r3, 0xE(r30)
	  b         .loc_0x2EC

	.loc_0x2CC:
	  sth       r27, 0x0(r30)
	  sth       r3, 0x2(r30)
	  sth       r27, 0x4(r30)
	  sth       r29, 0x6(r30)
	  sth       r28, 0x8(r30)
	  sth       r3, 0xA(r30)
	  sth       r28, 0xC(r30)
	  sth       r29, 0xE(r30)

	.loc_0x2EC:
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  psq_l     f29,0x38(r1),0,0
	  lfd       f29, 0x30(r1)
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003D1BC
 * Size:	000064
 */
bool J2DPicture::isUsed(const ResTIMG*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r7, 0
	stw      r0, 0x14(r1)
	lbz      r6, 0x110(r3)
	b        lbl_8003D200

lbl_8003D1D4:
	rlwinm   r5, r7, 2, 0x16, 0x1d
	addi     r0, r5, 0x100
	lwzx     r5, r3, r0
	cmplwi   r5, 0
	beq      lbl_8003D1FC
	lwz      r0, 0x20(r5)
	cmplw    r0, r4
	bne      lbl_8003D1FC
	li       r3, 1
	b        lbl_8003D210

lbl_8003D1FC:
	addi     r7, r7, 1

lbl_8003D200:
	clrlwi   r0, r7, 0x18
	cmplw    r0, r6
	blt      lbl_8003D1D4
	bl       isUsed__7J2DPaneFPC7ResTIMG

lbl_8003D210:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8003D220
 * Size:	0000D0
 */
u8 J2DPicture::getUsableTlut(u8)
{
	/*
	lbz      r6, 0x110(r3)
	clrlwi   r5, r4, 0x18
	li       r8, 0
	li       r9, 0
	b        lbl_8003D2A4

lbl_8003D234:
	clrlwi   r0, r9, 0x18
	cmplw    r0, r5
	beq      lbl_8003D2A0
	rlwinm   r4, r9, 2, 0x16, 0x1d
	addi     r0, r4, 0x100
	lwzx     r7, r3, r0
	cmplwi   r7, 0
	beq      lbl_8003D2A0
	lwz      r4, 0x20(r7)
	cmplwi   r4, 0
	beq      lbl_8003D2A0
	lbz      r0, 8(r4)
	cmplwi   r0, 0
	beq      lbl_8003D2A0
	lbz      r4, 0x3a(r7)
	li       r0, 0
	cmpwi    r4, 0x10
	blt      lbl_8003D280
	li       r0, 0x10

lbl_8003D280:
	subf     r0, r0, r4
	clrlwi   r4, r0, 0x18
	cmplwi   r4, 4
	bge      lbl_8003D2A0
	li       r0, 1
	slw      r0, r0, r4
	or       r0, r8, r0
	clrlwi   r8, r0, 0x18

lbl_8003D2A0:
	addi     r9, r9, 1

lbl_8003D2A4:
	clrlwi   r0, r9, 0x18
	cmplw    r0, r6
	blt      lbl_8003D234
	clrlwi   r5, r8, 0x18
	li       r3, 0
	li       r6, 0
	li       r4, 1
	b        lbl_8003D2E0

lbl_8003D2C4:
	clrlwi   r0, r6, 0x18
	slw      r0, r4, r0
	and.     r0, r5, r0
	bne      lbl_8003D2DC
	mr       r3, r6
	blr

lbl_8003D2DC:
	addi     r6, r6, 1

lbl_8003D2E0:
	clrlwi   r0, r6, 0x18
	cmplwi   r0, 4
	blt      lbl_8003D2C4
	blr
	*/
}

/*
 * --INFO--
 * Address:	8003D2F0
 * Size:	000034
 */
u8 J2DPicture::getTlutID(const ResTIMG* img, unsigned char index)
{
	return (0x100 < img->m_paletteEntryCount) ? (index & 3) + 0x10 : index;
	/*
	lhz      r0, 0xa(r4)
	cmplwi   r0, 0x100
	ble      lbl_8003D31C
	clrlwi   r3, r5, 0x18
	slwi     r0, r5, 0x1e
	srwi     r3, r3, 0x1f
	subf     r0, r3, r0
	rotlwi   r0, r0, 2
	add      r3, r0, r3
	addi     r3, r3, 0x10
	blr

lbl_8003D31C:
	clrlwi   r3, r5, 0x18
	blr
	*/
}

/*
 * --INFO--
 * Address:	8003D324
 * Size:	000008
 */
// u32 J2DPicture::getTypeID() const { return 0x12; }

/*
 * --INFO--
 * Address:	8003D32C
 * Size:	000030
 * append__10J2DPictureFPCcP10JUTPalettef
 */
bool J2DPicture::append(const char* p1, JUTPalette* palette, float p3) { return insert(p1, palette, m_textureCount, p3); }

/*
 * --INFO--
 * Address:	8003D35C
 * Size:	000030
 * prepend__10J2DPictureFP10JUTTexturef
 */
bool J2DPicture::prepend(JUTTexture* texture, float p2) { return insert(texture, 0, p2); }

/*
 * --INFO--
 * Address:	8003D38C
 * Size:	000030
 * prepend__10J2DPictureFPCcP10JUTPalettef
 */
bool J2DPicture::prepend(const char* p1, JUTPalette* palette, float p3) { return insert(p1, palette, 0, p3); }

/*
 * --INFO--
 * Address:	8003D3BC
 * Size:	000030
 * prepend__10J2DPictureFPCcf
 */
bool J2DPicture::prepend(const char* p1, float p2) { return insert(p1, 0, p2); }

/*
 * --INFO--
 * Address:	8003D3EC
 * Size:	000030
 * prepend__10J2DPictureFPC7ResTIMGP10JUTPalettef
 */
bool J2DPicture::prepend(const ResTIMG* img, JUTPalette* palette, float p3) { return insert(img, palette, 0, p3); }

/*
 * --INFO--
 * Address:	8003D41C
 * Size:	000030
 * prepend__10J2DPictureFPC7ResTIMGf
 */
bool J2DPicture::prepend(const ResTIMG* img, float p2) { return insert(img, 0, p2); }

/*
 * --INFO--
 * Address:	8003D44C
 * Size:	000038
 * remove__10J2DPictureFv
 */
int J2DPicture::remove() { return remove(m_textureCount - 1); }

/*
 * --INFO--
 * Address:	8003D484
 * Size:	000098
 * draw__10J2DPictureFffUcbbb
 */
void J2DPicture::draw(float p1, float p2, unsigned char textureIndex, bool p4, bool p5, bool p6)
{
	if (textureIndex < m_textureCount && m_textures[textureIndex] != nullptr) {
		// ResTIMG* img = m_textures[textureIndex]->_20;
		// int height   = img->m_sizeY;
		// int width    = img->m_sizeX;
		draw(p1, p2, m_textures[textureIndex]->getSizeX(), m_textures[textureIndex]->getSizeY(), p4, p5, p6);
	}
}

/*
 * --INFO--
 * Address:	8003D51C
 * Size:	000040
 * draw__10J2DPictureFffbbb
 */
void J2DPicture::draw(float p1, float p2, bool p3, bool p4, bool p5) { draw(p1, p2, 0, p3, p4, p5); }

/*
 * --INFO--
 * Address:	8003D55C
 * Size:	000064
 * drawOut__10J2DPictureFffffffff
 */
void J2DPicture::drawOut(float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8)
{
	drawOut(JGeometry::TBox2f(p1, p2, p1 + p3, p2 + p4), JGeometry::TBox2f(p5, p6, p5 + p7, p6 + p8));
}

/*
 * --INFO--
 * Address:	8003D5C0
 * Size:	0000AC
 * drawOut__10J2DPictureFffffff
 * TODO: Check if this is correct. The mangled name of it is a substring of another one, and thus isn't checkable by vanilla genasm.sh
 */
void J2DPicture::drawOut(float p1, float p2, float p3, float p4, float p5, float p6)
{
	if (m_textures[0] == nullptr) {
		return;
	}
	drawOut(JGeometry::TBox2f(p1, p2, p1 + p3, p2 + p4),
	        JGeometry::TBox2f(p5, p6, p5 + m_textures[0]->getSizeX(), p6 + m_textures[0]->getSizeY()));

	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	lwz      r4, 0x100(r3)
	cmplwi   r4, 0
	beq      lbl_8003D65C
	lwz      r4, 0x20(r4)
	lis      r6, 0x4330
	stw      r6, 0x28(r1)
	fadds    f3, f1, f3
	lhz      r0, 4(r4)
	fadds    f0, f2, f4
	lhz      r5, 2(r4)
	addi     r4, r1, 0x18
	xoris    r0, r0, 0x8000
	xoris    r7, r5, 0x8000
	stw      r0, 0x34(r1)
	lfd      f8, lbl_80516808@sda21(r2)
	addi     r5, r1, 8
	stw      r7, 0x2c(r1)
	stw      r6, 0x30(r1)
	lfd      f7, 0x28(r1)
	lfd      f4, 0x30(r1)
	fsubs    f7, f7, f8
	stfs     f5, 8(r1)
	fsubs    f4, f4, f8
	stfs     f6, 0xc(r1)
	fadds    f5, f5, f7
	fadds    f4, f6, f4
	stfs     f1, 0x18(r1)
	stfs     f5, 0x10(r1)
	stfs     f4, 0x14(r1)
	stfs     f2, 0x1c(r1)
	stfs     f3, 0x20(r1)
	stfs     f0, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0xf8(r12)
	mtctr    r12
	bctrl

lbl_8003D65C:
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8003D66C
 * Size:	000008
 */
u8 J2DPicture::getTextureCount() const { return m_textureCount; }

/*
 * --INFO--
 * Address:	8003D674
 * Size:	000028
 */
bool J2DPicture::setBlack(JUtility::TColor black)
{
	m_black = black;
	return true;
}

/*
 * --INFO--
 * Address:	8003D69C
 * Size:	000028
 */
bool J2DPicture::setWhite(JUtility::TColor white)
{
	m_white = white;
	return true;
}

/*
 * --INFO--
 * Address:	8003D6C4
 * Size:	000048
 */
bool J2DPicture::setBlackWhite(JUtility::TColor black, JUtility::TColor white)
{
	m_black = black;
	m_white = white;
	return true;
}

/*
 * --INFO--
 * Address:	8003D70C
 * Size:	00000C
 */
JUtility::TColor J2DPicture::getBlack() const { return m_black; }

/*
 * --INFO--
 * Address:	8003D718
 * Size:	00000C
 */
JUtility::TColor J2DPicture::getWhite() const { return m_white; }

/*
 * --INFO--
 * Address:	8003D724
 * Size:	000008
 */
J2DMaterial* J2DPicture::getMaterial() const { return nullptr; }

/*
 * --INFO--
 * Address:	8003D72C
 * Size:	000020
 * isUsed__10J2DPictureFPC7ResFONT
 */
bool J2DPicture::isUsed(const ResFONT* font) { return J2DPane::isUsed(font); }

/*
 * --INFO--
 * Address:	8003D74C
 * Size:	000004
 */
void J2DPicture::rewriteAlpha() { }
