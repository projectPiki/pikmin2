#include "Dolphin/gx.h"
#include "Dolphin/mtx.h"
#include "JSystem/J2D/J2DAnm.h"
#include "JSystem/J2D/J2DMaterial.h"
#include "JSystem/J2D/J2DPane.h"
#include "JSystem/J2D/J2DTypes.h"
#include "JSystem/J3D/J3DAnmVtxColor.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JUT/JUTPalette.h"
#include "JSystem/JUT/JUTTexture.h"
#include "JSystem/JUT/TColor.h"
#include "JSystem/ResTIMG.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_804785E0
    lbl_804785E0:
        .4byte 0x0F080A0F
        .4byte 0x0F080A0F
        .4byte 0x0F080E0F
        .4byte 0x0F080E00
        .4byte 0x0F0A000F
        .4byte 0x0204080F
        .4byte 0x0204080F
        .4byte 0x0204000F
        .4byte 0x07040507
        .4byte 0x05070707
        .4byte 0x07040607
        .4byte 0x07040600
        .4byte 0x07050007
        .4byte 0x01020407
        .4byte 0x07070702
        .4byte 0x01020007
        .4byte 0x00000001
        .4byte 0x00000000
        .4byte 0x01000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000001
        .4byte 0x00000000
        .4byte 0x01000000
        .4byte 0x00010000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__12J2DPictureEx
    __vt__12J2DPictureEx:
        .4byte 0
        .4byte 0
        .4byte __dt__12J2DPictureExFv
        .4byte getTypeID__10J2DPictureCFv
        .4byte move__7J2DPaneFff
        .4byte add__7J2DPaneFff
        .4byte resize__7J2DPaneFff
        .4byte setCullBack__12J2DPictureExFb
        .4byte setCullBack__12J2DPictureExF11_GXCullMode
        .4byte setAlpha__12J2DPictureExFUc
        .4byte setConnectParent__7J2DPaneFb
        .4byte calcMtx__7J2DPaneFv
        .4byte update__7J2DPaneFv
        .4byte drawSelf__10J2DPictureFff
        .4byte drawSelf__12J2DPictureExFffPA3_A4_f
        .4byte search__7J2DPaneFUx
        .4byte searchUserInfo__7J2DPaneFUx
        .4byte makeMatrix__7J2DPaneFff
        .4byte makeMatrix__7J2DPaneFffff
        .4byte isUsed__12J2DPictureExFPC7ResTIMG
        .4byte isUsed__12J2DPictureExFPC7ResFONT
        .4byte clearAnmTransform__7J2DPaneFv
        .4byte rewriteAlpha__12J2DPictureExFv
        .4byte setAnimation__12J2DPictureExFP10J2DAnmBase
        .4byte setAnimation__12J2DPictureExFP15J2DAnmTransform
        .4byte setAnimation__12J2DPictureExFP11J2DAnmColor
        .4byte setAnimation__12J2DPictureExFP16J2DAnmTexPattern
        .4byte setAnimation__12J2DPictureExFP19J2DAnmTextureSRTKey
        .4byte setAnimation__12J2DPictureExFP15J2DAnmTevRegKey
        .4byte setAnimation__12J2DPictureExFP20J2DAnmVisibilityFull
        .4byte setAnimation__12J2DPictureExFP14J2DAnmVtxColor
        .4byte animationTransform__7J2DPaneFPC15J2DAnmTransform
        .4byte setVisibileAnimation__7J2DPaneFP20J2DAnmVisibilityFull
        .4byte setAnimationVF__7J2DPaneFP20J2DAnmVisibilityFull
        .4byte setVtxColorAnimation__7J2DPaneFP14J2DAnmVtxColor
        .4byte setAnimationVC__7J2DPaneFP14J2DAnmVtxColor
        .4byte animationPane__12J2DPictureExFPC15J2DAnmTransform
        .4byte initiate__12J2DPictureExFPC7ResTIMGPC7ResTLUT
        .4byte prepareTexture__12J2DPictureExFUc
        .4byte append__12J2DPictureExFPC7ResTIMGf
        .4byte append__12J2DPictureExFPC7ResTIMGP10JUTPalettef
        .4byte append__12J2DPictureExFPCcf
        .4byte append__12J2DPictureExFPCcP10JUTPalettef
        .4byte append__12J2DPictureExFP10JUTTexturef
        .4byte prepend__12J2DPictureExFPC7ResTIMGf
        .4byte prepend__12J2DPictureExFPC7ResTIMGP10JUTPalettef
        .4byte prepend__12J2DPictureExFPCcf
        .4byte prepend__12J2DPictureExFPCcP10JUTPalettef
        .4byte prepend__12J2DPictureExFP10JUTTexturef
        .4byte insert__12J2DPictureExFPC7ResTIMGUcf
        .4byte insert__12J2DPictureExFPC7ResTIMGP10JUTPaletteUcf
        .4byte insert__12J2DPictureExFPCcUcf
        .4byte insert__12J2DPictureExFPCcP10JUTPaletteUcf
        .4byte insert__12J2DPictureExFP10JUTTextureUcf
        .4byte remove__12J2DPictureExFUc
        .4byte remove__12J2DPictureExFv
        .4byte remove__12J2DPictureExFP10JUTTexture
        .4byte draw__12J2DPictureExFffbbb
        .4byte draw__12J2DPictureExFffUcbbb
        .4byte draw__12J2DPictureExFffffbbb
        .4byte drawOut__12J2DPictureExFffffff
        .4byte drawOut__12J2DPictureExFffffffff
        .4byte
   "drawOut__12J2DPictureExFRCQ29JGeometry8TBox2<f>RCQ29JGeometry8TBox2<f>"
        .4byte load__12J2DPictureExF11_GXTexMapIDUc
        .4byte load__12J2DPictureExFUc
        .4byte setBlendRatio__10J2DPictureFffffffff
        .4byte setBlendColorRatio__12J2DPictureExFffffffff
        .4byte setBlendAlphaRatio__12J2DPictureExFffffffff
        .4byte changeTexture__12J2DPictureExFPC7ResTIMGUc
        .4byte changeTexture__12J2DPictureExFPCcUc
        .4byte changeTexture__12J2DPictureExFPC7ResTIMGUcP10JUTPalette
        .4byte changeTexture__12J2DPictureExFPCcUcP10JUTPalette
        .4byte getTexture__12J2DPictureExCFUc
        .4byte getTextureCount__12J2DPictureExCFv
        .4byte setBlack__12J2DPictureExFQ28JUtility6TColor
        .4byte setWhite__12J2DPictureExFQ28JUtility6TColor
        .4byte
   setBlackWhite__12J2DPictureExFQ28JUtility6TColorQ28JUtility6TColor .4byte
   getBlack__12J2DPictureExCFv .4byte getWhite__12J2DPictureExCFv .4byte
   getMaterial__12J2DPictureExCFv .4byte
   drawFullSet__12J2DPictureExFffffPA3_A4_f .4byte
   drawTexCoord__12J2DPictureExFffffssssssssPA3_A4_f .4byte
   getUsableTlut__12J2DPictureExFUc .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805168E0
    lbl_805168E0:
        .float 1.0
    .global lbl_805168E4
    lbl_805168E4:
        .4byte 0x00000000
    .global lbl_805168E8
    lbl_805168E8:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_805168F0
    lbl_805168F0:
        .4byte 0x437F0000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	80054AF0
 * Size:	000048
 */
J2DPictureEx::J2DPictureEx()
    : J2DPicture()
{
	initialize(0x1100000);
}

/*
 * --INFO--
 * Address:	80054B38
 * Size:	00007C
 * __ct__12J2DPictureExFPC7ResTIMGUl
 */
J2DPictureEx::J2DPictureEx(const ResTIMG* img, u32 p2)
    : J2DPicture()
{
	initialize(p2);
	append(img, 1.0f);
}

/*
 * --INFO--
 * Address:	80054BB4
 * Size:	000030
 * append__12J2DPictureExFPC7ResTIMGf
 */
bool J2DPictureEx::append(const ResTIMG* img, float p2) { return append(img, nullptr, p2); }

/*
 * --INFO--
 * Address:	80054BE4
 * Size:	000030
 * append__12J2DPictureExFPCcf
 */
bool J2DPictureEx::append(const char* p1, float p2) { return append(p1, nullptr, p2); }

/*
 * --INFO--
 * Address:	80054C14
 * Size:	0000AC
 * initiate__12J2DPictureExFPC7ResTIMGPC7ResTLUT
 */
void J2DPictureEx::initiate(const ResTIMG* img, const ResTLUT* lut)
{
	if (_168->m_texGenBlock.m_texGenNum != 0) {
		return;
	}
	if (append(img, 1.0f) && lut && !_168->m_tevBlock->getPalette(0)) {
		_168->m_tevBlock->setPalette(0, lut);
	}
}

/*
 * --INFO--
 * Address:	80054CC0
 * Size:	0000D0
 * initialize__12J2DPictureExFUl
 */
void J2DPictureEx::initialize(unsigned long p1)
{
	m_bloBlockType = 'PIC2';
	_168           = new J2DMaterial(p1);
	_198           = true;
	_16C           = 0xFFFF;
	_16E           = 0xFFFF;
	for (int i = 0; i < 4; i++) {
		_170[i] = 0xFFFF;
	}
	_178 = 1.0f;
	_188 = 1.0f;
	_17C = 1.0f;
	_18C = 1.0f;
	_180 = 1.0f;
	_190 = 1.0f;
	_184 = 1.0f;
	_194 = 1.0f;
	setTexCoord(nullptr, Binding_F, Mirror_0, false);
	m_anmVisibility = nullptr;
	m_anmVtxColor   = nullptr;
}

/*
 * --INFO--
 * Address:	80054D90
 * Size:	00029C
 * __ct__12J2DPictureExFP7J2DPaneP20JSURandomInputStreamUlP11J2DMaterial
 */
J2DPictureEx::J2DPictureEx(J2DPane*, JSURandomInputStream*, unsigned long, J2DMaterial*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stmw      r26, 0x58(r1)
	  mr        r28, r3
	  mr        r26, r4
	  mr        r29, r5
	  mr        r30, r7
	  bl        -0x1B2D4
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r4, r3, 0x11B0
	  mr        r3, r29
	  stw       r4, 0x0(r28)
	  stw       r0, 0x19C(r28)
	  stw       r0, 0x1A0(r28)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  mr        r3, r29
	  addi      r4, r1, 0x14
	  li        r5, 0x8
	  bl        -0x2EA1C
	  lwz       r0, 0x14(r1)
	  mr        r3, r29
	  stw       r0, 0x8(r28)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r27, r3
	  mr        r3, r29
	  addi      r4, r1, 0xC
	  li        r5, 0x8
	  bl        -0x2E7D4
	  mr        r3, r28
	  mr        r4, r26
	  mr        r5, r29
	  bl        -0x1BD34
	  lwz       r0, 0x10(r1)
	  mr        r3, r29
	  li        r5, 0
	  add       r4, r27, r0
	  bl        -0x2E73C
	  lis       r4, 0x8004
	  addi      r3, r1, 0x2C
	  subi      r4, r4, 0x6460
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x4
	  bl        0x6C9DC
	  mr        r3, r29
	  addi      r4, r1, 0x1C
	  li        r5, 0x30
	  bl        -0x2EA9C
	  lhz       r3, 0x1E(r1)
	  addi      r26, r1, 0x1C
	  li        r11, 0
	  li        r0, 0x2
	  sth       r3, 0x16C(r28)
	  mr        r12, r26
	  mr        r27, r11
	  lhz       r3, 0x20(r1)
	  sth       r3, 0x16E(r28)
	  mtctr     r0

	.loc_0x10C:
	  lhz       r3, 0x8(r26)
	  addi      r10, r11, 0x170
	  addi      r9, r27, 0x112
	  addi      r8, r27, 0x114
	  sthx      r3, r28, r10
	  addi      r10, r11, 0x172
	  addi      r7, r27, 0x150
	  addi      r6, r27, 0x151
	  lha       r3, 0x10(r12)
	  addi      r4, r27, 0x152
	  addi      r0, r27, 0x153
	  addi      r11, r11, 0x4
	  sthx      r3, r28, r9
	  addi      r9, r27, 0x116
	  lha       r3, 0x12(r12)
	  sthx      r3, r28, r8
	  addi      r8, r27, 0x118
	  lwz       r3, 0x20(r12)
	  stw       r3, 0x8(r1)
	  lbz       r5, 0x8(r1)
	  lbz       r3, 0x9(r1)
	  stbx      r5, r28, r7
	  addi      r7, r27, 0x154
	  lbz       r5, 0xA(r1)
	  stbx      r3, r28, r6
	  addi      r6, r27, 0x155
	  lbz       r3, 0xB(r1)
	  stbx      r5, r28, r4
	  addi      r4, r27, 0x156
	  stbx      r3, r28, r0
	  addi      r0, r27, 0x157
	  addi      r27, r27, 0x8
	  lhz       r3, 0xA(r26)
	  addi      r26, r26, 0x4
	  sthx      r3, r28, r10
	  lha       r3, 0x14(r12)
	  sthx      r3, r28, r9
	  lha       r3, 0x16(r12)
	  sthx      r3, r28, r8
	  lwz       r3, 0x24(r12)
	  addi      r12, r12, 0x8
	  stw       r3, 0x8(r1)
	  lbz       r5, 0x8(r1)
	  lbz       r3, 0x9(r1)
	  stbx      r5, r28, r7
	  lbz       r5, 0xA(r1)
	  stbx      r3, r28, r6
	  lbz       r3, 0xB(r1)
	  stbx      r5, r28, r4
	  stbx      r3, r28, r0
	  bdnz+     .loc_0x10C
	  lwz       r0, 0x18(r1)
	  mr        r3, r29
	  li        r5, 0
	  add       r4, r31, r0
	  bl        -0x2E870
	  li        r0, 0
	  stw       r0, 0x168(r28)
	  lhz       r0, 0x16E(r28)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x21C
	  mulli     r0, r0, 0x88
	  add       r0, r30, r0
	  stw       r0, 0x168(r28)
	  lhz       r0, 0x16E(r28)
	  mulli     r0, r0, 0x88
	  add       r3, r30, r0
	  stw       r28, 0x4(r3)

	.loc_0x21C:
	  li        r3, 0
	  li        r0, 0xFF
	  stb       r3, 0x198(r28)
	  mr        r3, r28
	  stb       r0, 0xB2(r28)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x7A80(r2)
	  mr        r3, r28
	  stfs      f0, 0x124(r28)
	  stfs      f0, 0x134(r28)
	  stfs      f0, 0x128(r28)
	  stfs      f0, 0x138(r28)
	  stfs      f0, 0x12C(r28)
	  stfs      f0, 0x13C(r28)
	  stfs      f0, 0x130(r28)
	  stfs      f0, 0x140(r28)
	  stfs      f0, 0x178(r28)
	  stfs      f0, 0x188(r28)
	  stfs      f0, 0x17C(r28)
	  stfs      f0, 0x18C(r28)
	  stfs      f0, 0x180(r28)
	  stfs      f0, 0x190(r28)
	  stfs      f0, 0x184(r28)
	  stfs      f0, 0x194(r28)
	  lmw       r26, 0x58(r1)
	  lwz       r0, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005502C
 * Size:	000110
 * __ct__12J2DPictureExFUxRCQ29JGeometry8TBox2<f>PC7ResTIMGUl
 */
J2DPictureEx::J2DPictureEx(u64 id, const JGeometry::TBox2f& bounds, const ResTIMG* img, u32 p4)
    : J2DPicture(id, bounds)
{
	m_bloBlockType = 'PIC2';
	initialize(p4);
	append(img, 1.0f);
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r9
	  stw       r30, 0x18(r1)
	  mr        r30, r8
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bl        -0x1AA28
	  lis       r3, 0x804A
	  lis       r4, 0x5049
	  addi      r0, r3, 0x11B0
	  li        r3, 0x88
	  stw       r0, 0x0(r29)
	  addi      r0, r4, 0x4332
	  stw       r0, 0x8(r29)
	  stw       r0, 0x8(r29)
	  bl        -0x311D0
	  mr.       r0, r3
	  beq-      .loc_0x60
	  mr        r4, r31
	  bl        -0x3048
	  mr        r0, r3

	.loc_0x60:
	  stw       r0, 0x168(r29)
	  li        r0, 0x1
	  lis       r3, 0x1
	  lfs       f0, -0x7A80(r2)
	  stb       r0, 0x198(r29)
	  subi      r0, r3, 0x1
	  mr        r3, r29
	  li        r4, 0
	  sth       r0, 0x16C(r29)
	  li        r5, 0xF
	  li        r6, 0
	  li        r7, 0
	  sth       r0, 0x16E(r29)
	  sth       r0, 0x170(r29)
	  sth       r0, 0x172(r29)
	  sth       r0, 0x174(r29)
	  sth       r0, 0x176(r29)
	  stfs      f0, 0x178(r29)
	  stfs      f0, 0x188(r29)
	  stfs      f0, 0x17C(r29)
	  stfs      f0, 0x18C(r29)
	  stfs      f0, 0x180(r29)
	  stfs      f0, 0x190(r29)
	  stfs      f0, 0x184(r29)
	  stfs      f0, 0x194(r29)
	  bl        -0x18288
	  li        r0, 0
	  mr        r3, r29
	  stw       r0, 0x19C(r29)
	  mr        r4, r30
	  lfs       f1, -0x7A80(r2)
	  stw       r0, 0x1A0(r29)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
	  mr        r3, r29
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005513C
 * Size:	000110
 * __ct__12J2DPictureExFUxRCQ29JGeometry8TBox2<f>PCcUl
 */
J2DPictureEx::J2DPictureEx(u64 id, const JGeometry::TBox2f& bounds, const char* p3, u32 p4)
    : J2DPicture(id, bounds)
{
	m_bloBlockType = 'PIC2';
	initialize(p4);
	append(p3, 1.0f);
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r9
	  stw       r30, 0x18(r1)
	  mr        r30, r8
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bl        -0x1AB38
	  lis       r3, 0x804A
	  lis       r4, 0x5049
	  addi      r0, r3, 0x11B0
	  li        r3, 0x88
	  stw       r0, 0x0(r29)
	  addi      r0, r4, 0x4332
	  stw       r0, 0x8(r29)
	  stw       r0, 0x8(r29)
	  bl        -0x312E0
	  mr.       r0, r3
	  beq-      .loc_0x60
	  mr        r4, r31
	  bl        -0x3158
	  mr        r0, r3

	.loc_0x60:
	  stw       r0, 0x168(r29)
	  li        r0, 0x1
	  lis       r3, 0x1
	  lfs       f0, -0x7A80(r2)
	  stb       r0, 0x198(r29)
	  subi      r0, r3, 0x1
	  mr        r3, r29
	  li        r4, 0
	  sth       r0, 0x16C(r29)
	  li        r5, 0xF
	  li        r6, 0
	  li        r7, 0
	  sth       r0, 0x16E(r29)
	  sth       r0, 0x170(r29)
	  sth       r0, 0x172(r29)
	  sth       r0, 0x174(r29)
	  sth       r0, 0x176(r29)
	  stfs      f0, 0x178(r29)
	  stfs      f0, 0x188(r29)
	  stfs      f0, 0x17C(r29)
	  stfs      f0, 0x18C(r29)
	  stfs      f0, 0x180(r29)
	  stfs      f0, 0x190(r29)
	  stfs      f0, 0x184(r29)
	  stfs      f0, 0x194(r29)
	  bl        -0x18398
	  li        r0, 0
	  mr        r3, r29
	  stw       r0, 0x19C(r29)
	  mr        r4, r30
	  lfs       f1, -0x7A80(r2)
	  stw       r0, 0x1A0(r29)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
	  mr        r3, r29
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005524C
 * Size:	000090
 * __dt__12J2DPictureExFv
 */
J2DPictureEx::~J2DPictureEx()
{
	if (_198 != 0) {
		delete _168;
	}
}

/*
 * --INFO--
 * Address:	800552DC
 * Size:	0000F8
 */
void J2DPictureEx::prepareTexture(unsigned char)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	stw      r29, 0x64(r1)
	mr       r29, r4
	stw      r28, 0x60(r1)
	mr       r28, r3
	lwz      r3, 0x168(r3)
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80055328
	li       r3, 0
	b        lbl_800553B4

lbl_80055328:
	lis      r3, j2dDefaultTexMtxInfo@ha
	clrlwi   r31, r29, 0x18
	addi     r30, r3, j2dDefaultTexMtxInfo@l
	li       r29, 0
	b        lbl_800553A4

lbl_8005533C:
	lfs      f7, 4(r30)
	clrlwi   r4, r29, 0x18
	lfs      f6, 8(r30)
	addi     r5, r1, 8
	lfs      f5, 0xc(r30)
	lbz      r3, 0(r30)
	lbz      r0, 1(r30)
	lfs      f4, 0x10(r30)
	lfs      f3, 0x14(r30)
	lfs      f2, 0x18(r30)
	lfs      f1, 0x1c(r30)
	lfs      f0, 0x20(r30)
	stfs     f7, 0xc(r1)
	stfs     f6, 0x10(r1)
	stfs     f5, 0x14(r1)
	stb      r3, 8(r1)
	stb      r0, 9(r1)
	stfs     f4, 0x18(r1)
	stfs     f3, 0x1c(r1)
	stfs     f2, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	lwz      r3, 0x168(r28)
	addi     r3, r3, 0x28
	bl       setTexMtx__14J2DTexGenBlockFUlR9J2DTexMtx
	addi     r29, r29, 1

lbl_800553A4:
	clrlwi   r0, r29, 0x18
	cmplw    r0, r31
	blt      lbl_8005533C
	li       r3, 1

lbl_800553B4:
	lwz      r0, 0x74(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	lwz      r29, 0x64(r1)
	lwz      r28, 0x60(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	800553D4
 * Size:	0000CC
 */
void J2DPictureEx::drawSelf(float p1, float p2, float (*mtx)[3][4])
{
	if (!_168) {
		return;
	}
	_168->setGX();
	GXClearVtxDesc();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
	GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
	drawFullSet(p1, p2, _020.f.x - _020.i.x, _020.f.y - _020.i.y, mtx);
}

/*
 * --INFO--
 * Address:	800554A0
 * Size:	00005C
 */
void J2DPictureEx::drawFullSet(float p1, float p2, float p3, float p4, float (*mtx)[3][4])
{
	drawTexCoord(_020.i.x, _020.i.y, p3, p4, _112[0].x, _112[0].y, _112[1].x, _112[1].y, _112[2].x, _112[2].y, _112[3].x, _112[3].y, mtx);
}

/*
 * --INFO--
 * Address:	800554FC
 * Size:	0002B4
 */
void J2DPictureEx::drawTexCoord(float p1, float p2, float p3, float p4, short p5, short p6, short p7, short p8, short p9, short p10,
                                short p11, short p12, float (*p13)[3][4])
{
	Mtx v1;
	PSMTXConcat(*p13, _080, v1);
	if (_168 && _168->_0E == 0) {
		return;
	}
	GXLoadPosMtxImm(v1, 0);
	JUtility::TColor colors[4] = { _150[0], _150[1], _150[2], _150[3] };
	if (_168) {
		if ((_168->m_colorBlock.m_channels[1].m_data & 1) == 1) {
			if (_168->_0F == 1) {
				for (int i = 0; i < 4; i++) {
					colors[i].a *= _0B3 / 0xFF;
				}
			}
		} else if (!_0B4) {
			JUtility::TColor matColor = _0B3;
			GXSetChanMatColor(GX_ALPHA0, matColor);
		}
	}
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_TEX_ST, GX_S16, 8);
	GXBegin(GX_QUADS, GX_VTXFMT0, 4);
	GXPosition3f32(p1, p2, 0.0f);
	GXTexCoord2s16(p5, p6);
	GXPosition3f32(p1 + p3, p2, 0.0f);
	GXTexCoord2s16(p7, p8);
	GXPosition3f32(p1 + p3, p2 + p4, 0.0f);
	GXTexCoord2s16(p9, p10);
	GXPosition3f32(p1, p2 + p4, 0.0f);
	GXTexCoord2s16(p11, p12);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 15);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_TEX_ST, GX_S16, 0);
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
	  stmw      r23, 0x5C(r1)
	  fmr       f28, f1
	  mr        r25, r5
	  fmr       f29, f2
	  lwz       r0, 0xCC(r1)
	  mr        r23, r3
	  mr        r24, r4
	  fadds     f31, f28, f3
	  lha       r31, 0xCA(r1)
	  fadds     f30, f29, f4
	  mr        r26, r6
	  mr        r27, r7
	  mr        r28, r8
	  mr        r29, r9
	  mr        r30, r10
	  mr        r3, r0
	  addi      r4, r23, 0x80
	  addi      r5, r1, 0x20
	  bl        0x94D90
	  lwz       r3, 0x168(r23)
	  cmplwi    r3, 0
	  beq-      .loc_0x90
	  lbz       r0, 0xE(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x280

	.loc_0x90:
	  addi      r3, r1, 0x20
	  li        r4, 0
	  bl        0x93FE4
	  lwz       r6, 0x168(r23)
	  lwz       r5, 0x150(r23)
	  lwz       r4, 0x154(r23)
	  cmplwi    r6, 0
	  lwz       r3, 0x158(r23)
	  lwz       r0, 0x15C(r23)
	  stw       r5, 0x1C(r1)
	  stw       r4, 0x18(r1)
	  stw       r3, 0x14(r1)
	  stw       r0, 0x10(r1)
	  beq-      .loc_0x198
	  lhz       r0, 0x1C(r6)
	  rlwinm    r0,r0,0,31,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x174
	  lbz       r0, 0xF(r6)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x198
	  lbz       r0, 0x1F(r1)
	  lis       r3, 0x8081
	  lbz       r7, 0xB3(r23)
	  subi      r9, r3, 0x7F7F
	  lbz       r4, 0x1B(r1)
	  mullw     r5, r0, r7
	  lbz       r0, 0x13(r1)
	  lbz       r3, 0x17(r1)
	  mullw     r6, r4, r7
	  mullw     r4, r3, r7
	  mullw     r0, r0, r7
	  mulhw     r7, r9, r5
	  mulhw     r3, r9, r6
	  add       r5, r7, r5
	  srawi     r7, r5, 0x7
	  mulhw     r5, r9, r4
	  rlwinm    r8,r7,1,31,31
	  add       r3, r3, r6
	  add       r7, r7, r8
	  srawi     r6, r3, 0x7
	  stb       r7, 0x1F(r1)
	  add       r4, r5, r4
	  rlwinm    r5,r6,1,31,31
	  mulhw     r3, r9, r0
	  add       r6, r6, r5
	  srawi     r4, r4, 0x7
	  stb       r6, 0x1B(r1)
	  rlwinm    r5,r4,1,31,31
	  add       r0, r3, r0
	  srawi     r0, r0, 0x7
	  add       r4, r4, r5
	  rlwinm    r3,r0,1,31,31
	  stb       r4, 0x17(r1)
	  add       r0, r0, r3
	  stb       r0, 0x13(r1)
	  b         .loc_0x198

	.loc_0x174:
	  lbz       r0, 0xB4(r23)
	  cmplwi    r0, 0
	  beq-      .loc_0x198
	  lbz       r0, 0xB3(r23)
	  addi      r4, r1, 0xC
	  li        r3, 0x2
	  stw       r0, 0x8(r1)
	  stw       r0, 0xC(r1)
	  bl        0x916E4

	.loc_0x198:
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        0x8F060
	  li        r3, 0
	  li        r4, 0xD
	  li        r5, 0x1
	  li        r6, 0x3
	  li        r7, 0x8
	  bl        0x8F048
	  li        r3, 0x80
	  li        r4, 0
	  li        r5, 0x4
	  bl        0x902B8
	  lis       r10, 0xCC01
	  lfs       f0, -0x7A7C(r2)
	  stfs      f28, -0x8000(r10)
	  li        r3, 0
	  lwz       r0, 0x1C(r1)
	  li        r4, 0xD
	  stfs      f29, -0x8000(r10)
	  li        r5, 0x1
	  lwz       r9, 0x18(r1)
	  li        r6, 0x2
	  stfs      f0, -0x8000(r10)
	  li        r7, 0xF
	  lwz       r8, 0x10(r1)
	  stw       r0, -0x8000(r10)
	  lwz       r0, 0x14(r1)
	  sth       r24, -0x8000(r10)
	  sth       r25, -0x8000(r10)
	  stfs      f31, -0x8000(r10)
	  stfs      f29, -0x8000(r10)
	  stfs      f0, -0x8000(r10)
	  stw       r9, -0x8000(r10)
	  sth       r26, -0x8000(r10)
	  sth       r27, -0x8000(r10)
	  stfs      f31, -0x8000(r10)
	  stfs      f30, -0x8000(r10)
	  stfs      f0, -0x8000(r10)
	  stw       r8, -0x8000(r10)
	  sth       r30, -0x8000(r10)
	  sth       r31, -0x8000(r10)
	  stfs      f28, -0x8000(r10)
	  stfs      f30, -0x8000(r10)
	  stfs      f0, -0x8000(r10)
	  stw       r0, -0x8000(r10)
	  sth       r28, -0x8000(r10)
	  sth       r29, -0x8000(r10)
	  bl        0x8EFA8
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x3
	  li        r7, 0
	  bl        0x8EF90

	.loc_0x280:
	  psq_l     f31,0xB8(r1),0,0
	  lfd       f31, 0xB0(r1)
	  psq_l     f30,0xA8(r1),0,0
	  lfd       f30, 0xA0(r1)
	  psq_l     f29,0x98(r1),0,0
	  lfd       f29, 0x90(r1)
	  psq_l     f28,0x88(r1),0,0
	  lfd       f28, 0x80(r1)
	  lmw       r23, 0x5C(r1)
	  lwz       r0, 0xC4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xC0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800557B0
 * Size:	000048
 * append__12J2DPictureExFPC7ResTIMGP10JUTPalettef
 */
bool J2DPictureEx::append(const ResTIMG* img, JUTPalette* palette, float p3)
{
	return (!_168) ? false : insert(img, palette, _168->m_texGenBlock.m_texGenNum, p3);
}

/*
 * --INFO--
 * Address:	800557F8
 * Size:	000048
 * append__12J2DPictureExFPCcP10JUTPalettef
 */
bool J2DPictureEx::append(const char* p1, JUTPalette* palette, float p3)
{
	return (!_168) ? false : insert(p1, palette, _168->m_texGenBlock.m_texGenNum, p3);
}

/*
 * --INFO--
 * Address:	80055840
 * Size:	000048
 * append__12J2DPictureExFP10JUTTexturef
 */
bool J2DPictureEx::append(JUTTexture* texture, float p2) { return (!_168) ? false : insert(texture, _168->m_texGenBlock.m_texGenNum, p2); }

/*
 * --INFO--
 * Address:	80055888
 * Size:	0000B4
 * insert__12J2DPictureExFPC7ResTIMGP10JUTPaletteUcf
 */
bool J2DPictureEx::insert(const ResTIMG* img, JUTPalette* palette, unsigned char p3, float p4)
{
	if (!img) {
		return false;
	}
	if (!isInsert(p3)) {
		return false;
	}
	insertCommon(p3, p4);
	_168->m_tevBlock->insertTexture(p3, img, palette);
	return true;
}

/*
 * --INFO--
 * Address:	8005593C
 * Size:	000078
 * insert__12J2DPictureExFPCcP10JUTPaletteUcf
 */
bool J2DPictureEx::insert(const char* p1, JUTPalette* palette, unsigned char p3, float p4)
{
	return insert((ResTIMG*)J2DScreen::getNameResource(p1), palette, p3, p4);
}

/*
 * --INFO--
 * Address:	800559B4
 * Size:	0000A4
 * insert__12J2DPictureExFP10JUTTextureUcf
 */
bool J2DPictureEx::insert(JUTTexture* texture, unsigned char p2, float p3)
{
	if (!texture) {
		return false;
	}
	if (!isInsert(p2)) {
		return false;
	}
	insertCommon(p2, p3);
	_168->m_tevBlock->insertTexture(p2, texture);
	return true;
}

/*
 * --INFO--
 * Address:	80055A58
 * Size:	000334
 * insertCommon__12J2DPictureExFUcf
 */
void J2DPictureEx::insertCommon(unsigned char, float)
{
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stfd     f31, 0x90(r1)
	psq_st   f31, 152(r1), 0, qr0
	stmw     r25, 0x74(r1)
	mr       r26, r3
	fmr      f31, f1
	lwz      r5, 0x168(r3)
	mr       r27, r4
	lwz      r3, 0x70(r5)
	lwz      r0, 0x28(r5)
	lwz      r12, 0(r3)
	clrlwi   r29, r0, 0x18
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x168(r26)
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	cmplwi   r29, 1
	bgt      lbl_80055AD4
	clrlwi   r4, r3, 0x18
	subfic   r3, r4, 1
	addi     r0, r4, -1
	or       r0, r3, r0
	srwi     r28, r0, 0x1f
	b        lbl_80055AEC

lbl_80055AD4:
	clrlwi   r4, r3, 0x18
	addi     r0, r29, 1
	subf     r3, r4, r0
	subf     r0, r0, r4
	or       r0, r3, r0
	srwi     r28, r0, 0x1f

lbl_80055AEC:
	fmr      f1, f31
	mr       r3, r26
	mr       r4, r27
	li       r5, 1
	li       r6, 1
	bl       shiftSetBlendRatio__12J2DPictureExFUcfbb
	fmr      f1, f31
	mr       r3, r26
	mr       r4, r27
	li       r5, 0
	li       r6, 1
	bl       shiftSetBlendRatio__12J2DPictureExFUcfbb
	addi     r30, r29, 1
	clrlwi   r29, r27, 0x18
	clrlwi   r31, r30, 0x18
	lwz      r3, 0x168(r26)
	addi     r10, r31, -1
	li       r7, 1
	mulli    r4, r10, 3
	stw      r31, 0x28(r3)
	cmpw     r10, r29
	addi     r3, r10, 1
	mr       r11, r10
	li       r6, 4
	addi     r8, r4, 0x1e
	subf     r3, r29, r3
	blt      lbl_80055C38
	rlwinm.  r0, r3, 0x1f, 1, 0x1f
	mtctr    r0
	beq      lbl_80055BF0

lbl_80055B64:
	stb      r8, 0xe(r1)
	rlwinm   r5, r11, 2, 0x16, 0x1d
	lwz      r0, 0x168(r26)
	addi     r8, r8, -3
	stb      r7, 0xc(r1)
	addi     r11, r11, -1
	add      r9, r0, r5
	stb      r6, 0xd(r1)
	rlwinm   r5, r11, 2, 0x16, 0x1d
	addi     r11, r11, -1
	lwz      r0, 0xc(r1)
	stw      r0, 8(r1)
	lbz      r0, 8(r1)
	lbz      r4, 9(r1)
	stb      r0, 0x2c(r9)
	lbz      r0, 0xa(r1)
	stb      r4, 0x2d(r9)
	stb      r0, 0x2e(r9)
	stb      r8, 0xe(r1)
	addi     r8, r8, -3
	lwz      r0, 0x168(r26)
	stb      r7, 0xc(r1)
	add      r9, r0, r5
	stb      r6, 0xd(r1)
	lwz      r0, 0xc(r1)
	stw      r0, 8(r1)
	lbz      r0, 8(r1)
	lbz      r4, 9(r1)
	stb      r0, 0x2c(r9)
	lbz      r0, 0xa(r1)
	stb      r4, 0x2d(r9)
	stb      r0, 0x2e(r9)
	bdnz     lbl_80055B64
	andi.    r3, r3, 1
	beq      lbl_80055C38

lbl_80055BF0:
	mtctr    r3

lbl_80055BF4:
	stb      r8, 0xe(r1)
	rlwinm   r5, r11, 2, 0x16, 0x1d
	lwz      r0, 0x168(r26)
	addi     r11, r11, -1
	stb      r7, 0xc(r1)
	addi     r8, r8, -3
	add      r9, r0, r5
	stb      r6, 0xd(r1)
	lwz      r0, 0xc(r1)
	stw      r0, 8(r1)
	lbz      r0, 8(r1)
	lbz      r4, 9(r1)
	stb      r0, 0x2c(r9)
	lbz      r0, 0xa(r1)
	stb      r4, 0x2d(r9)
	stb      r0, 0x2e(r9)
	bdnz     lbl_80055BF4

lbl_80055C38:
	mr       r25, r10
	b        lbl_80055C64

lbl_80055C40:
	addi     r0, r25, -1
	lwz      r3, 0x168(r26)
	rlwinm   r5, r0, 2, 0x16, 0x1d
	clrlwi   r4, r25, 0x18
	addi     r3, r3, 0x28
	addi     r0, r5, 0x24
	lwzx     r5, r3, r0
	bl       setTexMtx__14J2DTexGenBlockFUlR9J2DTexMtx
	addi     r25, r25, -1

lbl_80055C64:
	cmpw     r25, r29
	bgt      lbl_80055C40
	lis      r3, j2dDefaultTexMtxInfo@ha
	clrlwi   r4, r27, 0x18
	addi     r6, r3, j2dDefaultTexMtxInfo@l
	addi     r5, r1, 0x10
	lfs      f7, 4(r6)
	lfs      f6, 8(r6)
	lfs      f5, 0xc(r6)
	lbz      r3, 0(r6)
	lbz      r0, 1(r6)
	lfs      f4, 0x10(r6)
	lfs      f3, 0x14(r6)
	lfs      f2, 0x18(r6)
	lfs      f1, 0x1c(r6)
	lfs      f0, 0x20(r6)
	stfs     f7, 0x14(r1)
	stfs     f6, 0x18(r1)
	stfs     f5, 0x1c(r1)
	stb      r3, 0x10(r1)
	stb      r0, 0x11(r1)
	stfs     f4, 0x20(r1)
	stfs     f3, 0x24(r1)
	stfs     f2, 0x28(r1)
	stfs     f1, 0x2c(r1)
	stfs     f0, 0x30(r1)
	lwz      r3, 0x168(r26)
	addi     r3, r3, 0x28
	bl       setTexMtx__14J2DTexGenBlockFUlR9J2DTexMtx
	clrlwi   r0, r30, 0x18
	cmplwi   r0, 1
	bne      lbl_80055CEC
	li       r27, 1
	b        lbl_80055D08

lbl_80055CEC:
	clrlwi   r3, r28, 0x18
	neg      r0, r3
	or       r0, r0, r3
	srwi     r3, r0, 0x1f
	addi     r0, r3, 1
	add      r0, r31, r0
	clrlwi   r27, r0, 0x18

lbl_80055D08:
	lwz      r3, 0x168(r26)
	mr       r4, r27
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	mr       r3, r26
	mr       r5, r27
	mr       r6, r28
	clrlwi   r4, r30, 0x18
	bl       setTevOrder__12J2DPictureExFUcUcb
	mr       r3, r26
	mr       r5, r27
	mr       r6, r28
	clrlwi   r4, r30, 0x18
	bl       setTevStage__12J2DPictureExFUcUcb
	mr       r3, r26
	clrlwi   r4, r30, 0x18
	bl       setTevKColor__12J2DPictureExFUc
	mr       r3, r26
	clrlwi   r4, r30, 0x18
	bl       setTevKColorSel__12J2DPictureExFUc
	mr       r3, r26
	clrlwi   r4, r30, 0x18
	bl       setTevKAlphaSel__12J2DPictureExFUc
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	lmw      r25, 0x74(r1)
	lwz      r0, 0xa4(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80055D8C
 * Size:	0000F8
 */
bool J2DPictureEx::isInsert(unsigned char p1) const
{
	if (!_168) {
		return false;
	}
	if (!_168->m_tevBlock) {
		return false;
	}
	u8 texGenNum = _168->m_texGenBlock.m_texGenNum;
	if (!((texGenNum < 8 && p1 < 8) && p1 <= texGenNum)) {
		return false;
	}
	u32 maxStage = _168->m_tevBlock->getMaxStage();
	if ((u8)maxStage <= 2 && texGenNum != 0) {
		return false;
	}
	if ((u8)maxStage == _168->m_tevBlock->getTevStageNum() && texGenNum != 0) {
		return false;
	}
	return true;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lwz      r5, 0x168(r3)
	stw      r0, 0x24(r1)
	cmplwi   r5, 0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	bne      lbl_80055DBC
	li       r3, 0
	b        lbl_80055E68

lbl_80055DBC:
	lwz      r3, 0x70(r5)
	cmplwi   r3, 0
	bne      lbl_80055DD0
	li       r3, 0
	b        lbl_80055E68

lbl_80055DD0:
	lwz      r0, 0x28(r5)
	clrlwi   r30, r0, 0x18
	cmplwi   r30, 8
	bge      lbl_80055DF4
	clrlwi   r0, r4, 0x18
	cmplwi   r0, 8
	bge      lbl_80055DF4
	cmplw    r0, r30
	ble      lbl_80055DFC

lbl_80055DF4:
	li       r3, 0
	b        lbl_80055E68

lbl_80055DFC:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 2
	bgt      lbl_80055E2C
	cmplwi   r30, 0
	beq      lbl_80055E2C
	li       r3, 0
	b        lbl_80055E68

lbl_80055E2C:
	lwz      r3, 0x168(r29)
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	clrlwi   r4, r31, 0x18
	clrlwi   r0, r3, 0x18
	cmplw    r4, r0
	bne      lbl_80055E64
	cmplwi   r30, 0
	beq      lbl_80055E64
	li       r3, 0
	b        lbl_80055E68

lbl_80055E64:
	li       r3, 1

lbl_80055E68:
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
 * Address:	80055E84
 * Size:	0001AC
 * remove__12J2DPictureExFUc
 */
int J2DPictureEx::remove(unsigned char p1)
{
	if (!isRemove(p1)) {
		return 0;
	}
	u8 texGenNum = _168->m_texGenBlock.m_texGenNum;
	// TODO: IDK what operation this is.
	s8 v1 = -((texGenNum + 1) != _168->m_tevBlock->getTevStageNum());
	// u8 tevStageNum = _168->m_tevBlock->getTevStageNum();
	// s8 v1          = ((texGenNum + 1) - tevStageNum) | (tevStageNum - (texGenNum + 1));
	shiftSetBlendRatio(p1, 0.0f, true, false);
	shiftSetBlendRatio(p1, 0.0f, false, false);
	_168->m_texGenBlock.m_texGenNum = texGenNum - 1;
	_168->m_tevBlock->removeTexture(p1);
	if (texGenNum - 1 != 1) {
		p1 = texGenNum + (1 - (v1 < 0));
	} else {
		p1 = 1 - (v1 < 0);
	}
	_168->m_tevBlock->setTevStageNum(p1);
	setTevOrder(texGenNum - 1, p1, v1 < 0);
	setTevStage(texGenNum - 1, p1, v1 < 0);
	setTevKColor(texGenNum - 1);
	setTevKColorSel(texGenNum - 1);
	setTevKAlphaSel(texGenNum - 1);
	return 1;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	stw      r28, 0x10(r1)
	mr       r28, r4
	bl       isRemove__12J2DPictureExCFUc
	clrlwi.  r0, r3, 0x18
	bne      lbl_80055EBC
	li       r3, 0
	b        lbl_80056010

lbl_80055EBC:
	lwz      r4, 0x168(r29)
	lwz      r3, 0x70(r4)
	lwz      r0, 0x28(r4)
	lwz      r12, 0(r3)
	clrlwi   r30, r0, 0x18
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	clrlwi   r3, r3, 0x18
	addi     r0, r30, 1
	subf     r4, r3, r0
	lfs      f1, lbl_805168E4@sda21(r2)
	subf     r0, r0, r3
	mr       r3, r29
	or       r0, r4, r0
	mr       r4, r28
	srwi     r31, r0, 0x1f
	li       r5, 1
	li       r6, 0
	bl       shiftSetBlendRatio__12J2DPictureExFUcfbb
	lfs      f1, lbl_805168E4@sda21(r2)
	mr       r3, r29
	mr       r4, r28
	li       r5, 0
	li       r6, 0
	bl       shiftSetBlendRatio__12J2DPictureExFUcfbb
	addi     r0, r30, -1
	lwz      r3, 0x168(r29)
	clrlwi   r0, r0, 0x18
	clrlwi   r4, r28, 0x18
	stw      r0, 0x28(r3)
	lwz      r3, 0x168(r29)
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	addi     r0, r30, -1
	clrlwi   r4, r0, 0x18
	cmplwi   r4, 1
	beq      lbl_80055F7C
	neg      r0, r31
	or       r0, r0, r31
	srwi     r3, r0, 0x1f
	addi     r0, r3, 1
	add      r0, r4, r0
	clrlwi   r28, r0, 0x18
	b        lbl_80055F90

lbl_80055F7C:
	neg      r0, r31
	or       r0, r0, r31
	srwi     r3, r0, 0x1f
	addi     r0, r3, 1
	clrlwi   r28, r0, 0x18

lbl_80055F90:
	lwz      r3, 0x168(r29)
	mr       r4, r28
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	addi     r0, r30, -1
	mr       r3, r29
	mr       r5, r28
	mr       r6, r31
	clrlwi   r4, r0, 0x18
	bl       setTevOrder__12J2DPictureExFUcUcb
	addi     r0, r30, -1
	mr       r3, r29
	mr       r5, r28
	mr       r6, r31
	clrlwi   r4, r0, 0x18
	bl       setTevStage__12J2DPictureExFUcUcb
	addi     r0, r30, -1
	mr       r3, r29
	clrlwi   r4, r0, 0x18
	bl       setTevKColor__12J2DPictureExFUc
	addi     r0, r30, -1
	mr       r3, r29
	clrlwi   r4, r0, 0x18
	bl       setTevKColorSel__12J2DPictureExFUc
	addi     r0, r30, -1
	mr       r3, r29
	clrlwi   r4, r0, 0x18
	bl       setTevKAlphaSel__12J2DPictureExFUc
	li       r3, 1

lbl_80056010:
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
 * Address:	80056030
 * Size:	000064
 * remove__12J2DPictureExFv
 */
int J2DPictureEx::remove()
{
	if (!_168) {
		return 0;
	}
	return (!_168->m_tevBlock) ? 0 : remove(_168->m_texGenBlock.m_texGenNum - 1);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r4, 0x168(r3)
	cmplwi   r4, 0
	bne      lbl_80056050
	li       r3, 0
	b        lbl_80056084

lbl_80056050:
	lwz      r0, 0x70(r4)
	cmplwi   r0, 0
	bne      lbl_80056064
	li       r3, 0
	b        lbl_80056084

lbl_80056064:
	lwz      r0, 0x28(r4)
	lwz      r12, 0(r3)
	clrlwi   r4, r0, 0x18
	addi     r0, r4, -1
	lwz      r12, 0xd8(r12)
	clrlwi   r4, r0, 0x18
	mtctr    r12
	bctrl

lbl_80056084:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80056094
 * Size:	0000C8
 * remove__12J2DPictureExFP10JUTTexture
 */
int J2DPictureEx::remove(JUTTexture* texture)
{
	if (!_168) {
		return 0;
	}
	if (!_168->m_tevBlock) {
		return 0;
	}
	uint i;
	for (i = 0; i < _168->m_texGenBlock.m_texGenNum && _168->m_tevBlock->getTexture(i) != texture; i++) { }
	return remove(i);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r3, 0x168(r3)
	cmplwi   r3, 0
	bne      lbl_800560CC
	li       r3, 0
	b        lbl_8005613C

lbl_800560CC:
	lwz      r0, 0x70(r3)
	cmplwi   r0, 0
	bne      lbl_800560E0
	li       r3, 0
	b        lbl_8005613C

lbl_800560E0:
	lwz      r0, 0x28(r3)
	li       r30, 0
	clrlwi   r31, r0, 0x18
	b        lbl_80056118

lbl_800560F0:
	lwz      r3, 0x168(r28)
	clrlwi   r4, r30, 0x18
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xa0(r12)
	mtctr    r12
	bctrl
	cmplw    r3, r29
	beq      lbl_80056124
	addi     r30, r30, 1

lbl_80056118:
	clrlwi   r0, r30, 0x18
	cmplw    r0, r31
	blt      lbl_800560F0

lbl_80056124:
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	lwz      r12, 0xd8(r12)
	mtctr    r12
	bctrl

lbl_8005613C:
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
 * Address:	8005615C
 * Size:	000054
 */
bool J2DPictureEx::isRemove(u8 p1) const
{
	if (!_168) {
		return false;
	}
	if (!_168->m_tevBlock) {
		return false;
	}
	u8 texGenNum = _168->m_texGenBlock.m_texGenNum;
	if (texGenNum <= p1 || texGenNum == 1) {
		return false;
	}
	return true;
}

/*
 * --INFO--
 * Address:	800561B0
 * Size:	000124
 * draw__12J2DPictureExFffUcbbb
 */
void J2DPictureEx::draw(float p1, float p2, unsigned char p3, bool p4, bool p5, bool p6)
{
	if (_168 && _168->m_tevBlock && m_isVisible && p3 < _168->m_texGenBlock.m_texGenNum) {
		JUTTexture* texture = _168->m_tevBlock->getTexture(p3);
		if (texture) {
			draw(p1, p2, texture->getSizeX(), texture->getSizeY(), p4, p5, p6);
		}
	}
}

/*
 * --INFO--
 * Address:	800562D4
 * Size:	0005A8
 */
void J2DPictureEx::draw(float, float, float, float, bool, bool, bool)
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
	stmw     r23, 0x4c(r1)
	mr       r28, r3
	fmr      f28, f1
	lbz      r0, 0xb0(r3)
	fmr      f29, f2
	fmr      f30, f3
	mr       r29, r4
	fmr      f31, f4
	cmplwi   r0, 0
	mr       r30, r5
	mr       r31, r6
	beq      lbl_80056848
	lwz      r3, 0x168(r28)
	cmplwi   r3, 0
	beq      lbl_80056848
	lwz      r0, 0x70(r3)
	cmplwi   r0, 0
	beq      lbl_80056848
	lwz      r0, 0x28(r3)
	cmplwi   r0, 0
	beq      lbl_80056848
	bl       setGX__11J2DMaterialFv
	mr       r3, r28
	lfs      f3, lbl_805168E4@sda21(r2)
	lwz      r12, 0(r28)
	fmr      f1, f28
	fmr      f2, f29
	lwz      r12, 0x48(r12)
	fmr      f4, f3
	mtctr    r12
	bctrl
	addi     r3, r28, 0x50
	li       r4, 0
	bl       GXLoadPosMtxImm
	li       r3, 0
	bl       GXSetCurrentMtx
	lwz      r3, 0x168(r28)
	lbz      r0, 0xe(r3)
	cmplwi   r0, 0
	beq      lbl_80056848
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
	lbz      r3, 0xb2(r28)
	li       r0, -1
	stw      r0, 8(r1)
	stb      r3, 0xb3(r28)
	lwz      r3, 0x168(r28)
	lbz      r23, 0x150(r28)
	lbz      r3, 0xf(r3)
	lbz      r24, 0x151(r28)
	lbz      r25, 0x152(r28)
	cmpwi    r3, 1
	lbz      r26, 0x153(r28)
	stw      r0, 0xc(r1)
	lbz      r27, 0x154(r28)
	lbz      r12, 0x155(r28)
	lbz      r11, 0x156(r28)
	lbz      r10, 0x157(r28)
	stw      r0, 0x10(r1)
	lbz      r9, 0x158(r28)
	lbz      r8, 0x159(r28)
	lbz      r5, 0x15a(r28)
	lbz      r7, 0x15b(r28)
	stw      r0, 0x14(r1)
	lbz      r4, 0x15c(r28)
	lbz      r3, 0x15d(r28)
	lbz      r0, 0x15e(r28)
	lbz      r6, 0x15f(r28)
	stb      r23, 8(r1)
	stb      r24, 9(r1)
	stb      r25, 0xa(r1)
	stb      r26, 0xb(r1)
	stb      r27, 0xc(r1)
	stb      r12, 0xd(r1)
	stb      r11, 0xe(r1)
	stb      r10, 0xf(r1)
	stb      r9, 0x10(r1)
	stb      r8, 0x11(r1)
	stb      r5, 0x12(r1)
	stb      r7, 0x13(r1)
	stb      r4, 0x14(r1)
	stb      r3, 0x15(r1)
	stb      r0, 0x16(r1)
	stb      r6, 0x17(r1)
	bne      lbl_800564F0
	lbz      r0, 0xb3(r28)
	lis      r3, 0x80808081@ha
	addi     r9, r3, 0x80808081@l
	mullw    r5, r0, r26
	mullw    r4, r0, r7
	mullw    r3, r0, r10
	mulhw    r7, r9, r5
	mullw    r0, r0, r6
	add      r5, r7, r5
	srawi    r7, r5, 7
	mulhw    r6, r9, r3
	srwi     r8, r7, 0x1f
	add      r7, r7, r8
	stb      r7, 0xb(r1)
	mulhw    r5, r9, r4
	add      r3, r6, r3
	srawi    r6, r3, 7
	add      r4, r5, r4
	mulhw    r3, r9, r0
	srwi     r5, r6, 0x1f
	srawi    r4, r4, 7
	add      r6, r6, r5
	srwi     r5, r4, 0x1f
	stb      r6, 0xf(r1)
	add      r0, r3, r0
	add      r4, r4, r5
	srawi    r0, r0, 7
	stb      r4, 0x13(r1)
	srwi     r3, r0, 0x1f
	add      r0, r0, r3
	stb      r0, 0x17(r1)

lbl_800564F0:
	li       r3, 0
	li       r4, 9
	li       r5, 1
	li       r6, 4
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0x80
	li       r4, 0
	li       r5, 4
	bl       GXBegin
	lfs      f0, lbl_805168E4@sda21(r2)
	lis      r6, 0xCC008000@ha
	lwz      r3, 8(r1)
	clrlwi.  r0, r31, 0x18
	stfs     f0, 0xCC008000@l(r6)
	stfs     f0, -0x8000(r6)
	stfs     f0, -0x8000(r6)
	stw      r3, -0x8000(r6)
	bne      lbl_80056578
	clrlwi   r5, r29, 0x18
	lis      r4, 0x00008000@ha
	neg      r0, r5
	clrlwi   r3, r30, 0x18
	or       r5, r0, r5
	addi     r4, r4, 0x00008000@l
	neg      r0, r3
	srawi    r5, r5, 0x1f
	and      r5, r4, r5
	or       r0, r0, r3
	srawi    r0, r0, 0x1f
	sth      r5, -0x8000(r6)
	and      r0, r4, r0
	sth      r0, -0x8000(r6)
	b        lbl_800565B0

lbl_80056578:
	clrlwi   r5, r29, 0x18
	lis      r4, 0x00008000@ha
	neg      r0, r5
	clrlwi   r3, r30, 0x18
	or       r5, r0, r5
	addi     r4, r4, 0x00008000@l
	neg      r0, r3
	srawi    r5, r5, 0x1f
	and      r5, r4, r5
	or       r0, r0, r3
	srawi    r0, r0, 0x1f
	sth      r5, -0x8000(r6)
	andc     r0, r4, r0
	sth      r0, -0x8000(r6)

lbl_800565B0:
	lis      r6, 0xCC008000@ha
	clrlwi.  r0, r31, 0x18
	stfs     f30, 0xCC008000@l(r6)
	lfs      f0, lbl_805168E4@sda21(r2)
	lwz      r0, 0xc(r1)
	stfs     f0, -0x8000(r6)
	stfs     f0, -0x8000(r6)
	stw      r0, -0x8000(r6)
	bne      lbl_80056610
	clrlwi   r5, r29, 0x18
	lis      r4, 0x00008000@ha
	neg      r0, r5
	clrlwi   r3, r30, 0x18
	or       r5, r0, r5
	addi     r4, r4, 0x00008000@l
	neg      r0, r3
	srawi    r5, r5, 0x1f
	andc     r5, r4, r5
	or       r0, r0, r3
	srawi    r0, r0, 0x1f
	sth      r5, -0x8000(r6)
	and      r0, r4, r0
	sth      r0, -0x8000(r6)
	b        lbl_80056648

lbl_80056610:
	clrlwi   r5, r29, 0x18
	lis      r4, 0x00008000@ha
	neg      r0, r5
	clrlwi   r3, r30, 0x18
	or       r5, r0, r5
	addi     r4, r4, 0x00008000@l
	neg      r0, r3
	srawi    r5, r5, 0x1f
	and      r5, r4, r5
	or       r0, r0, r3
	srawi    r0, r0, 0x1f
	sth      r5, -0x8000(r6)
	and      r0, r4, r0
	sth      r0, -0x8000(r6)

lbl_80056648:
	lis      r6, 0xCC008000@ha
	clrlwi.  r0, r31, 0x18
	stfs     f30, 0xCC008000@l(r6)
	lfs      f0, lbl_805168E4@sda21(r2)
	stfs     f31, -0x8000(r6)
	lwz      r0, 0x14(r1)
	stfs     f0, -0x8000(r6)
	stw      r0, -0x8000(r6)
	bne      lbl_800566A8
	clrlwi   r5, r29, 0x18
	lis      r4, 0x00008000@ha
	neg      r0, r5
	clrlwi   r3, r30, 0x18
	or       r5, r0, r5
	addi     r4, r4, 0x00008000@l
	neg      r0, r3
	srawi    r5, r5, 0x1f
	andc     r5, r4, r5
	or       r0, r0, r3
	srawi    r0, r0, 0x1f
	sth      r5, -0x8000(r6)
	andc     r0, r4, r0
	sth      r0, -0x8000(r6)
	b        lbl_800566E0

lbl_800566A8:
	clrlwi   r5, r29, 0x18
	lis      r4, 0x00008000@ha
	neg      r0, r5
	clrlwi   r3, r30, 0x18
	or       r5, r0, r5
	addi     r4, r4, 0x00008000@l
	neg      r0, r3
	srawi    r5, r5, 0x1f
	andc     r5, r4, r5
	or       r0, r0, r3
	srawi    r0, r0, 0x1f
	sth      r5, -0x8000(r6)
	and      r0, r4, r0
	sth      r0, -0x8000(r6)

lbl_800566E0:
	lfs      f0, lbl_805168E4@sda21(r2)
	lis      r6, 0xCC008000@ha
	lwz      r3, 0x10(r1)
	clrlwi.  r0, r31, 0x18
	stfs     f0, 0xCC008000@l(r6)
	stfs     f31, -0x8000(r6)
	stfs     f0, -0x8000(r6)
	stw      r3, -0x8000(r6)
	bne      lbl_80056740
	clrlwi   r5, r29, 0x18
	lis      r4, 0x00008000@ha
	neg      r0, r5
	clrlwi   r3, r30, 0x18
	or       r5, r0, r5
	addi     r4, r4, 0x00008000@l
	neg      r0, r3
	srawi    r5, r5, 0x1f
	and      r5, r4, r5
	or       r0, r0, r3
	srawi    r0, r0, 0x1f
	sth      r5, -0x8000(r6)
	andc     r0, r4, r0
	sth      r0, -0x8000(r6)
	b        lbl_80056778

lbl_80056740:
	clrlwi   r5, r29, 0x18
	lis      r4, 0x00008000@ha
	neg      r0, r5
	clrlwi   r3, r30, 0x18
	or       r5, r0, r5
	addi     r4, r4, 0x00008000@l
	neg      r0, r3
	srawi    r5, r5, 0x1f
	andc     r5, r4, r5
	or       r0, r0, r3
	srawi    r0, r0, 0x1f
	sth      r5, -0x8000(r6)
	andc     r0, r4, r0
	sth      r0, -0x8000(r6)

lbl_80056778:
	li       r3, 0
	li       r4, 9
	li       r5, 1
	li       r6, 3
	li       r7, 0
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
	li       r23, 0

lbl_800567C4:
	mr       r3, r23
	li       r4, 0
	li       r5, 1
	li       r6, 2
	li       r7, 3
	bl       GXSetTevSwapModeTable
	addi     r23, r23, 1
	cmpwi    r23, 4
	blt      lbl_800567C4
	li       r3, 0
	bl       GXSetNumIndStages
	li       r23, 0

lbl_800567F4:
	mr       r3, r23
	bl       GXSetTevDirect
	addi     r23, r23, 1
	cmpwi    r23, 0x10
	blt      lbl_800567F4
	addi     r3, r1, 0x18
	bl       PSMTXIdentity
	addi     r3, r1, 0x18
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

lbl_80056848:
	psq_l    f31, 168(r1), 0, qr0
	lfd      f31, 0xa0(r1)
	psq_l    f30, 152(r1), 0, qr0
	lfd      f30, 0x90(r1)
	psq_l    f29, 136(r1), 0, qr0
	lfd      f29, 0x80(r1)
	psq_l    f28, 120(r1), 0, qr0
	lfd      f28, 0x70(r1)
	lmw      r23, 0x4c(r1)
	lwz      r0, 0xb4(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005687C
 * Size:	000168
 * drawOut__12J2DPictureExFffffff
 */
void J2DPictureEx::drawOut(float p1, float p2, float p3, float p4, float p5, float p6)
{
	if (_168 && _168->m_tevBlock && m_isVisible) {
		JUTTexture* texture = _168->m_tevBlock->getTexture(0);
		if (texture) {
			drawOut(JGeometry::TBox2f(p1, p2, p1 + p3, p2 + p4),
			        JGeometry::TBox2f(p5, p6, p5 + texture->getSizeX(), p6 + texture->getSizeY()));
		}
	}
}

/*
 * --INFO--
 * Address:	800569E4
 * Size:	0003E8
 */
void J2DPictureEx::drawOut(const JGeometry::TBox2<float>&, const JGeometry::TBox2<float>&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stfd      f31, 0x70(r1)
	  psq_st    f31,0x78(r1),0,0
	  stfd      f30, 0x60(r1)
	  psq_st    f30,0x68(r1),0,0
	  stfd      f29, 0x50(r1)
	  psq_st    f29,0x58(r1),0,0
	  stfd      f28, 0x40(r1)
	  psq_st    f28,0x48(r1),0,0
	  stmw      r24, 0x20(r1)
	  mr        r29, r3
	  mr        r30, r4
	  lwz       r3, 0x168(r3)
	  mr        r31, r5
	  cmplwi    r3, 0
	  beq-      .loc_0x3B4
	  lwz       r0, 0x70(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x3B4
	  lbz       r0, 0xB0(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x3B4
	  bl        -0x47FC
	  bl        0x8DC88
	  li        r3, 0x9
	  li        r4, 0x1
	  bl        0x8D830
	  li        r3, 0xB
	  li        r4, 0x1
	  bl        0x8D824
	  li        r3, 0xD
	  li        r4, 0x1
	  bl        0x8D818
	  lwz       r3, 0x168(r29)
	  lbz       r0, 0xE(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x3B4
	  lbz       r3, 0xB2(r29)
	  li        r0, -0x1
	  stw       r0, 0x8(r1)
	  stb       r3, 0xB3(r29)
	  lwz       r3, 0x168(r29)
	  lbz       r24, 0x150(r29)
	  lbz       r3, 0xF(r3)
	  lbz       r25, 0x151(r29)
	  lbz       r26, 0x152(r29)
	  cmpwi     r3, 0x1
	  lbz       r27, 0x153(r29)
	  stw       r0, 0xC(r1)
	  lbz       r28, 0x154(r29)
	  lbz       r12, 0x155(r29)
	  lbz       r11, 0x156(r29)
	  lbz       r10, 0x157(r29)
	  stw       r0, 0x10(r1)
	  lbz       r9, 0x158(r29)
	  lbz       r8, 0x159(r29)
	  lbz       r5, 0x15A(r29)
	  lbz       r7, 0x15B(r29)
	  stw       r0, 0x14(r1)
	  lbz       r4, 0x15C(r29)
	  lbz       r3, 0x15D(r29)
	  lbz       r0, 0x15E(r29)
	  lbz       r6, 0x15F(r29)
	  stb       r24, 0x8(r1)
	  stb       r25, 0x9(r1)
	  stb       r26, 0xA(r1)
	  stb       r27, 0xB(r1)
	  stb       r28, 0xC(r1)
	  stb       r12, 0xD(r1)
	  stb       r11, 0xE(r1)
	  stb       r10, 0xF(r1)
	  stb       r9, 0x10(r1)
	  stb       r8, 0x11(r1)
	  stb       r5, 0x12(r1)
	  stb       r7, 0x13(r1)
	  stb       r4, 0x14(r1)
	  stb       r3, 0x15(r1)
	  stb       r0, 0x16(r1)
	  stb       r6, 0x17(r1)
	  bne-      .loc_0x1C4
	  lbz       r0, 0xB3(r29)
	  lis       r3, 0x8081
	  subi      r9, r3, 0x7F7F
	  mullw     r5, r0, r27
	  mullw     r4, r0, r7
	  mullw     r3, r0, r10
	  mulhw     r7, r9, r5
	  mullw     r0, r0, r6
	  add       r5, r7, r5
	  srawi     r7, r5, 0x7
	  mulhw     r6, r9, r3
	  rlwinm    r8,r7,1,31,31
	  add       r7, r7, r8
	  stb       r7, 0xB(r1)
	  mulhw     r5, r9, r4
	  add       r3, r6, r3
	  srawi     r6, r3, 0x7
	  add       r4, r5, r4
	  mulhw     r3, r9, r0
	  rlwinm    r5,r6,1,31,31
	  srawi     r4, r4, 0x7
	  add       r6, r6, r5
	  rlwinm    r5,r4,1,31,31
	  stb       r6, 0xF(r1)
	  add       r0, r3, r0
	  add       r4, r4, r5
	  srawi     r0, r0, 0x7
	  stb       r4, 0x13(r1)
	  rlwinm    r3,r0,1,31,31
	  add       r0, r0, r3
	  stb       r0, 0x17(r1)

	.loc_0x1C4:
	  lfs       f3, 0x0(r31)
	  li        r3, 0
	  lfs       f2, 0x8(r31)
	  li        r4, 0xD
	  lfs       f0, 0x8(r30)
	  li        r5, 0x1
	  lfs       f1, 0x0(r30)
	  fsubs     f5, f2, f3
	  fsubs     f2, f0, f2
	  lfs       f6, 0x4(r31)
	  lfs       f8, 0xC(r31)
	  fsubs     f4, f1, f3
	  lfs       f0, 0xC(r30)
	  lfs       f1, 0x4(r30)
	  fsubs     f7, f8, f6
	  lfs       f3, -0x7A80(r2)
	  fsubs     f0, f0, f8
	  li        r6, 0x4
	  fdivs     f2, f2, f5
	  li        r7, 0
	  fsubs     f1, f1, f6
	  fdivs     f0, f0, f7
	  fdivs     f31, f4, f5
	  fdivs     f29, f1, f7
	  fadds     f30, f3, f2
	  fadds     f28, f3, f0
	  bl        0x8DAF8
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        0x8DAE0
	  li        r3, 0x80
	  li        r4, 0
	  li        r5, 0x4
	  bl        0x8ED50
	  lfs       f2, 0x0(r30)
	  lis       r10, 0xCC01
	  lfs       f3, 0x4(r30)
	  li        r3, 0
	  stfs      f2, -0x8000(r10)
	  li        r4, 0x9
	  lfs       f1, -0x7A7C(r2)
	  li        r5, 0x1
	  stfs      f3, -0x8000(r10)
	  li        r6, 0x3
	  lwz       r0, 0x8(r1)
	  li        r7, 0
	  stfs      f1, -0x8000(r10)
	  lfs       f0, 0x8(r30)
	  stw       r0, -0x8000(r10)
	  lwz       r9, 0xC(r1)
	  stfs      f31, -0x8000(r10)
	  lfs       f4, 0xC(r30)
	  stfs      f29, -0x8000(r10)
	  lwz       r8, 0x14(r1)
	  stfs      f0, -0x8000(r10)
	  lwz       r0, 0x10(r1)
	  stfs      f3, -0x8000(r10)
	  stfs      f1, -0x8000(r10)
	  stw       r9, -0x8000(r10)
	  stfs      f30, -0x8000(r10)
	  stfs      f29, -0x8000(r10)
	  stfs      f0, -0x8000(r10)
	  stfs      f4, -0x8000(r10)
	  stfs      f1, -0x8000(r10)
	  stw       r8, -0x8000(r10)
	  stfs      f30, -0x8000(r10)
	  stfs      f28, -0x8000(r10)
	  stfs      f2, -0x8000(r10)
	  stfs      f4, -0x8000(r10)
	  stfs      f1, -0x8000(r10)
	  stw       r0, -0x8000(r10)
	  stfs      f31, -0x8000(r10)
	  stfs      f28, -0x8000(r10)
	  bl        0x8DA30
	  li        r3, 0
	  li        r4, 0xD
	  li        r5, 0x1
	  li        r6, 0x2
	  li        r7, 0xF
	  bl        0x8DA18
	  li        r3, 0
	  bl        0x8E2A4
	  li        r3, 0x1
	  bl        0x91EB8
	  li        r3, 0
	  li        r4, 0x4
	  bl        0x91770
	  li        r3, 0
	  li        r4, 0xFF
	  li        r5, 0xFF
	  li        r6, 0x4
	  bl        0x91CFC
	  li        r24, 0

	.loc_0x344:
	  mr        r3, r24
	  li        r4, 0
	  li        r5, 0x1
	  li        r6, 0x2
	  li        r7, 0x3
	  bl        0x91B90
	  addi      r24, r24, 0x1
	  cmpwi     r24, 0x4
	  blt+      .loc_0x344
	  li        r3, 0
	  bl        0x91604
	  li        r24, 0

	.loc_0x374:
	  mr        r3, r24
	  bl        0x9161C
	  addi      r24, r24, 0x1
	  cmpwi     r24, 0x10
	  blt+      .loc_0x374
	  li        r3, 0x4
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x1
	  li        r7, 0
	  li        r8, 0
	  li        r9, 0x2
	  bl        0x90118
	  li        r3, 0xD
	  li        r4, 0
	  bl        0x8D4F0

	.loc_0x3B4:
	  psq_l     f31,0x78(r1),0,0
	  lfd       f31, 0x70(r1)
	  psq_l     f30,0x68(r1),0,0
	  lfd       f30, 0x60(r1)
	  psq_l     f29,0x58(r1),0,0
	  lfd       f29, 0x50(r1)
	  psq_l     f28,0x48(r1),0,0
	  lfd       f28, 0x40(r1)
	  lmw       r24, 0x20(r1)
	  lwz       r0, 0x84(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80056DCC
 * Size:	000048
 */
void J2DPictureEx::load(GXTexMapID p1, unsigned char p2)
{
	if (_168 && _168->m_tevBlock) {
		_168->m_tevBlock->loadTexture(p1, p2);
	}
}

/*
 * --INFO--
 * Address:	80056E14
 * Size:	0001FC
 */
void J2DPictureEx::setTevOrder(unsigned char p1, unsigned char p2, bool p3)
{
	u16 data[16];
	if (p1 == 1) {
		if (p3 == false) {
			data[0] = 4;
		} else {
			data[0] = 0x00FF;
			data[1] = 0xFF04;
		}
	} else {
		for (u8 i = 0; i < p1; i++) {
			data[i] = i * 0x100 | 0xFF;
		}
		if (p3 == false) {
			data[p1] = 0xFF04;
		} else {
			data[p1]     = 0xFFFF;
			data[p1 + 1] = 0xFF04;
		}
	}
	for (u8 i = 0; i < p2; i++) {
		J2DTevOrder order(data[i] >> 8, data[i] >> 8, data[i]);
		_168->m_tevBlock->setTevOrder(i, order);
	}
}

/*
 * --INFO--
 * Address:	80057010
 * Size:	0002BC
 */
void J2DPictureEx::setTevStage(unsigned char p1, unsigned char p2, bool p3)
{
	if (p1 == 1) {
		J2DTevStage* stage  = _168->m_tevBlock->getTevStage(0);
		JUTTexture* texture = _168->m_tevBlock->getTexture(0);
		stage_enum v1       = Stage_0;
		bool v2             = false;
		if (texture != nullptr) {
			if (texture->_20 != nullptr) {
				if ((texture->_20->m_textureFormat == (s8)GX_TF_I4 || texture->_20->m_textureFormat == (s8)GX_TF_I8)
				    && texture->_20->m_transparency == Transparency_0) {
					v1 = Stage_1;
					v2 = true;
				}
			}
		}
		if (p3 == false) {
			setStage(stage, (stage_enum)(-v1 < 0));
		} else {
			setStage(stage, (v2 ? Stage_6 : Stage_5));
			setStage(_168->m_tevBlock->getTevStage(1), Stage_4);
		}
	} else {
		if (p3 == false) {
			setStage(_168->m_tevBlock->getTevStage(0), Stage_2);
			for (u8 i = 1; i < p1; i++) {
				setStage(_168->m_tevBlock->getTevStage(i), Stage_3);
			}
			setStage(_168->m_tevBlock->getTevStage(p1), Stage_4);
		} else {
			setStage(_168->m_tevBlock->getTevStage(0), Stage_2);
			for (u8 i = 1; i < p1; i++) {
				setStage(_168->m_tevBlock->getTevStage(i), Stage_3);
			}
			setStage(_168->m_tevBlock->getTevStage(p1), Stage_7);
			setStage(_168->m_tevBlock->getTevStage(p1 + 1), Stage_4);
		}
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	clrlwi   r0, r4, 0x18
	cmplwi   r0, 1
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r6
	bne      lbl_80057130
	lwz      r3, 0x168(r31)
	li       r4, 0
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0x168(r31)
	mr       r29, r3
	li       r4, 0
	lwz      r3, 0x70(r5)
	lwz      r12, 0(r3)
	lwz      r12, 0xa0(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	li       r4, 0
	beq      lbl_800570BC
	lwz      r3, 0x20(r3)
	cmplwi   r3, 0
	beq      lbl_800570BC
	lbz      r0, 0(r3)
	cmpwi    r0, 0
	beq      lbl_800570AC
	cmpwi    r0, 1
	bne      lbl_800570BC

lbl_800570AC:
	lbz      r0, 1(r3)
	cmpwi    r0, 0
	bne      lbl_800570BC
	li       r4, 1

lbl_800570BC:
	clrlwi.  r0, r28, 0x18
	bne      lbl_800570E4
	clrlwi   r5, r4, 0x18
	mr       r3, r31
	neg      r0, r5
	mr       r4, r29
	or       r0, r0, r5
	srwi     r5, r0, 0x1f
	bl       setStage__12J2DPictureExFP11J2DTevStageQ212J2DPictureEx10stage_enum
	b        lbl_800572AC

lbl_800570E4:
	clrlwi.  r0, r4, 0x18
	mr       r3, r31
	mr       r4, r29
	li       r5, 5
	beq      lbl_800570FC
	li       r5, 6

lbl_800570FC:
	bl       setStage__12J2DPictureExFP11J2DTevStageQ212J2DPictureEx10stage_enum
	lwz      r3, 0x168(r31)
	li       r4, 1
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r31
	li       r5, 4
	bl       setStage__12J2DPictureExFP11J2DTevStageQ212J2DPictureEx10stage_enum
	b        lbl_800572AC

lbl_80057130:
	clrlwi.  r0, r28, 0x18
	bne      lbl_800571DC
	lwz      r3, 0x168(r31)
	li       r4, 0
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r31
	li       r5, 2
	bl       setStage__12J2DPictureExFP11J2DTevStageQ212J2DPictureEx10stage_enum
	clrlwi   r29, r30, 0x18
	li       r30, 1
	b        lbl_800571A0

lbl_80057170:
	lwz      r3, 0x168(r31)
	clrlwi   r4, r30, 0x18
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r31
	li       r5, 3
	bl       setStage__12J2DPictureExFP11J2DTevStageQ212J2DPictureEx10stage_enum
	addi     r30, r30, 1

lbl_800571A0:
	clrlwi   r0, r30, 0x18
	cmplw    r0, r29
	blt      lbl_80057170
	lwz      r3, 0x168(r31)
	mr       r4, r29
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r31
	li       r5, 4
	bl       setStage__12J2DPictureExFP11J2DTevStageQ212J2DPictureEx10stage_enum
	b        lbl_800572AC

lbl_800571DC:
	lwz      r3, 0x168(r31)
	li       r4, 0
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r31
	li       r5, 2
	bl       setStage__12J2DPictureExFP11J2DTevStageQ212J2DPictureEx10stage_enum
	clrlwi   r29, r30, 0x18
	li       r28, 1
	b        lbl_80057244

lbl_80057214:
	lwz      r3, 0x168(r31)
	clrlwi   r4, r28, 0x18
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r31
	li       r5, 3
	bl       setStage__12J2DPictureExFP11J2DTevStageQ212J2DPictureEx10stage_enum
	addi     r28, r28, 1

lbl_80057244:
	clrlwi   r0, r28, 0x18
	cmplw    r0, r29
	blt      lbl_80057214
	lwz      r3, 0x168(r31)
	mr       r4, r29
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r31
	li       r5, 7
	bl       setStage__12J2DPictureExFP11J2DTevStageQ212J2DPictureEx10stage_enum
	lwz      r3, 0x168(r31)
	addi     r0, r30, 1
	clrlwi   r4, r0, 0x18
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r31
	li       r5, 4
	bl       setStage__12J2DPictureExFP11J2DTevStageQ212J2DPictureEx10stage_enum

lbl_800572AC:
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
 * Address:	800572CC
 * Size:	000300
 */
void J2DPictureEx::setStage(J2DTevStage*, J2DPictureEx::stage_enum)
{
	/*
	stwu     r1, -0xc0(r1)
	lis      r3, lbl_804785E0@ha
	stmw     r14, 0x78(r1)
	addi     r17, r3, lbl_804785E0@l
	slwi     r16, r5, 2
	mulli    r15, r5, 5
	lwz      r18, 0(r17)
	lwz      r19, 4(r17)
	lwz      r20, 8(r17)
	lwz      r14, 0xc(r17)
	lwz      r21, 0x10(r17)
	lwz      r22, 0x14(r17)
	lwz      r23, 0x18(r17)
	lwz      r24, 0x1c(r17)
	stw      r14, 0x34(r1)
	addi     r14, r1, 0x28
	lwz      r25, 0x20(r17)
	lwz      r26, 0x24(r17)
	lwz      r27, 0x28(r17)
	lwz      r28, 0x2c(r17)
	lwz      r29, 0x30(r17)
	lwz      r30, 0x34(r17)
	lwz      r31, 0x38(r17)
	lwz      r12, 0x3c(r17)
	lwz      r11, 0x40(r17)
	lwz      r10, 0x44(r17)
	lwz      r9, 0x48(r17)
	lwz      r8, 0x4c(r17)
	lwz      r7, 0x50(r17)
	lwz      r6, 0x54(r17)
	lwz      r5, 0x58(r17)
	lwz      r3, 0x5c(r17)
	lwz      r0, 0x60(r17)
	lwz      r17, 0x64(r17)
	stw      r5, 0x60(r1)
	addi     r5, r1, 0x4b
	stw      r3, 0x64(r1)
	addi     r3, r1, 0x48
	stw      r18, 0x28(r1)
	stw      r19, 0x2c(r1)
	stw      r20, 0x30(r1)
	stw      r21, 0x38(r1)
	stw      r22, 0x3c(r1)
	stw      r23, 0x40(r1)
	stw      r24, 0x44(r1)
	lbzx     r20, r14, r16
	addi     r14, r1, 0x2a
	lbzx     r18, r14, r16
	addi     r14, r1, 0x29
	lbzx     r19, r14, r16
	slwi     r20, r20, 4
	addi     r14, r1, 0x2b
	slwi     r18, r18, 4
	or       r19, r20, r19
	lbzx     r14, r14, r16
	stw      r11, 0x48(r1)
	or       r11, r18, r14
	stb      r19, 2(r4)
	stb      r11, 3(r4)
	stw      r10, 0x4c(r1)
	lbz      r11, 1(r4)
	stw      r9, 0x50(r1)
	rlwinm   r10, r11, 0, 0x1e, 0x1c
	stw      r8, 0x54(r1)
	stw      r7, 0x58(r1)
	stw      r6, 0x5c(r1)
	stw      r0, 0x68(r1)
	stw      r17, 0x6c(r1)
	lbzx     r7, r3, r15
	addi     r3, r1, 0x4c
	stw      r25, 8(r1)
	rlwinm   r0, r7, 2, 0x16, 0x1d
	cmplwi   r7, 1
	or       r6, r10, r0
	lbzx     r0, r5, r15
	addi     r5, r1, 0x4a
	stw      r26, 0xc(r1)
	lbzx     r9, r5, r15
	addi     r5, r1, 0x49
	lbzx     r3, r3, r15
	stw      r27, 0x10(r1)
	lbzx     r8, r5, r15
	stw      r28, 0x14(r1)
	stw      r29, 0x18(r1)
	stw      r30, 0x1c(r1)
	stw      r31, 0x20(r1)
	stw      r12, 0x24(r1)
	stb      r6, 1(r4)
	bgt      lbl_80057458
	lbz      r6, 1(r4)
	rlwinm   r5, r9, 4, 0x14, 0x1b
	rlwinm   r6, r6, 0, 0x1c, 0x19
	or       r5, r6, r5
	stb      r5, 1(r4)
	lbz      r5, 1(r4)
	rlwinm   r5, r5, 0, 0, 0x1d
	or       r5, r5, r8
	stb      r5, 1(r4)
	b        lbl_80057474

lbl_80057458:
	lbz      r5, 1(r4)
	rlwimi   r5, r7, 3, 0x1a, 0x1b
	stb      r5, 1(r4)
	lbz      r5, 1(r4)
	rlwinm   r5, r5, 0, 0, 0x1d
	ori      r5, r5, 3
	stb      r5, 1(r4)

lbl_80057474:
	lbz      r6, 1(r4)
	rlwinm   r7, r3, 6, 0x12, 0x19
	addi     r3, r1, 0x48
	rlwinm   r0, r0, 3, 0x15, 0x1c
	rlwinm   r6, r6, 0, 0x1d, 0x1b
	lbzx     r3, r3, r15
	or       r6, r6, r0
	addi     r5, r1, 8
	stb      r6, 1(r4)
	addi     r6, r1, 0xb
	lbzx     r0, r5, r16
	addi     r5, r1, 9
	lbz      r8, 1(r4)
	cmplwi   r3, 1
	lbzx     r10, r5, r16
	addi     r5, r1, 0xa
	rlwimi   r7, r8, 0, 0x1a, 0x1f
	lbzx     r8, r5, r16
	stb      r7, 1(r4)
	rlwinm   r11, r10, 2, 0x16, 0x1d
	slwi     r0, r0, 5
	lbzx     r6, r6, r16
	lbz      r5, 6(r4)
	rlwinm   r9, r8, 7, 0x11, 0x18
	rlwinm   r10, r8, 0x1f, 0x19, 0x1f
	rlwinm   r8, r6, 4, 0x14, 0x1b
	rlwimi   r0, r5, 0, 0x1b, 0x1f
	addi     r5, r1, 0x4c
	stb      r0, 6(r4)
	addi     r6, r1, 0x4b
	lbzx     r0, r6, r15
	addi     r6, r1, 0x4a
	lbz      r12, 6(r4)
	rlwinm   r7, r3, 2, 0x16, 0x1d
	lbzx     r14, r6, r15
	addi     r6, r1, 0x49
	rlwinm   r12, r12, 0, 0x1e, 0x1a
	lbzx     r5, r5, r15
	or       r11, r12, r11
	lbzx     r12, r6, r15
	stb      r11, 6(r4)
	lbz      r6, 6(r4)
	rlwinm   r6, r6, 0, 0, 0x1d
	or       r6, r6, r10
	stb      r6, 6(r4)
	lbz      r6, 7(r4)
	rlwimi   r9, r6, 0, 0x19, 0x1f
	stb      r9, 7(r4)
	lbz      r6, 7(r4)
	rlwinm   r6, r6, 0, 0x1c, 0x18
	or       r6, r6, r8
	stb      r6, 7(r4)
	lbz      r6, 5(r4)
	rlwinm   r6, r6, 0, 0x1e, 0x1c
	or       r6, r6, r7
	stb      r6, 5(r4)
	bgt      lbl_80057580
	lbz      r6, 5(r4)
	rlwinm   r3, r14, 4, 0x14, 0x1b
	rlwinm   r6, r6, 0, 0, 0x1d
	or       r6, r6, r12
	stb      r6, 5(r4)
	lbz      r6, 5(r4)
	rlwinm   r6, r6, 0, 0x1c, 0x19
	or       r3, r6, r3
	stb      r3, 5(r4)
	b        lbl_8005759C

lbl_80057580:
	lbz      r6, 5(r4)
	rlwimi   r6, r3, 3, 0x1a, 0x1b
	stb      r6, 5(r4)
	lbz      r3, 5(r4)
	rlwinm   r3, r3, 0, 0, 0x1d
	ori      r3, r3, 3
	stb      r3, 5(r4)

lbl_8005759C:
	lbz      r6, 5(r4)
	rlwinm   r3, r5, 6, 0x12, 0x19
	rlwinm   r0, r0, 3, 0x15, 0x1c
	rlwinm   r5, r6, 0, 0x1d, 0x1b
	or       r0, r5, r0
	stb      r0, 5(r4)
	lbz      r0, 5(r4)
	rlwimi   r3, r0, 0, 0x1a, 0x1f
	stb      r3, 5(r4)
	lmw      r14, 0x78(r1)
	addi     r1, r1, 0xc0
	blr
	*/
}

/*
 * --INFO--
 * Address:	800575CC
 * Size:	0004A4
 */
void J2DPictureEx::setTevKColor(unsigned char)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	clrlwi   r5, r4, 0x18
	stw      r0, 0x74(r1)
	cmplwi   r5, 1
	stmw     r24, 0x50(r1)
	mr       r30, r3
	beq      lbl_80057A5C
	lfs      f0, lbl_805168E4@sda21(r2)
	cmplwi   r5, 4
	fmr      f1, f0
	bge      lbl_800576D8
	cmplwi   r5, 0
	li       r6, 0
	ble      lbl_800577E8
	cmplwi   r5, 8
	addi     r0, r4, -8
	ble      lbl_800576A4
	clrlwi   r0, r0, 0x18
	b        lbl_80057698

lbl_8005761C:
	rlwinm   r3, r6, 2, 0x16, 0x1d
	addi     r6, r6, 8
	add      r3, r30, r3
	lfs      f2, 0x124(r3)
	lfs      f9, 0x134(r3)
	fadds    f0, f0, f2
	lfs      f2, 0x128(r3)
	fadds    f1, f1, f9
	lfs      f8, 0x138(r3)
	lfs      f3, 0x12c(r3)
	fadds    f0, f0, f2
	fadds    f1, f1, f8
	lfs      f7, 0x13c(r3)
	lfs      f2, 0x130(r3)
	fadds    f0, f0, f3
	lfs      f6, 0x140(r3)
	fadds    f1, f1, f7
	lfs      f5, 0x144(r3)
	fadds    f0, f0, f2
	lfs      f4, 0x148(r3)
	fadds    f1, f1, f6
	lfs      f3, 0x14c(r3)
	lfs      f2, 0x150(r3)
	fadds    f0, f0, f9
	fadds    f1, f1, f5
	fadds    f0, f0, f8
	fadds    f1, f1, f4
	fadds    f0, f0, f7
	fadds    f1, f1, f3
	fadds    f0, f0, f6
	fadds    f1, f1, f2

lbl_80057698:
	clrlwi   r3, r6, 0x18
	cmplw    r3, r0
	blt      lbl_8005761C

lbl_800576A4:
	clrlwi   r0, r4, 0x18
	b        lbl_800576C8

lbl_800576AC:
	rlwinm   r3, r6, 2, 0x16, 0x1d
	addi     r6, r6, 1
	add      r3, r30, r3
	lfs      f3, 0x124(r3)
	lfs      f2, 0x134(r3)
	fadds    f0, f0, f3
	fadds    f1, f1, f2

lbl_800576C8:
	clrlwi   r3, r6, 0x18
	cmplw    r3, r0
	blt      lbl_800576AC
	b        lbl_800577E8

lbl_800576D8:
	lfs      f3, 0x124(r30)
	addic.   r6, r5, -4
	lfs      f2, 0x134(r30)
	li       r7, 0
	fadds    f0, f0, f3
	lfs      f4, 0x128(r30)
	fadds    f1, f1, f2
	lfs      f3, 0x138(r30)
	lfs      f2, 0x12c(r30)
	fadds    f0, f0, f4
	fadds    f1, f1, f3
	lfs      f4, 0x13c(r30)
	lfs      f3, 0x130(r30)
	fadds    f0, f0, f2
	lfs      f2, 0x140(r30)
	fadds    f1, f1, f4
	fadds    f0, f0, f3
	fadds    f1, f1, f2
	ble      lbl_800577E8
	cmpwi    r6, 8
	addi     r3, r5, -12
	ble      lbl_800577DC
	b        lbl_800577B0

lbl_80057734:
	rlwinm   r0, r7, 2, 0x16, 0x1d
	addi     r7, r7, 8
	add      r5, r30, r0
	lfs      f2, 0x178(r5)
	lfs      f9, 0x188(r5)
	fadds    f0, f0, f2
	lfs      f2, 0x17c(r5)
	fadds    f1, f1, f9
	lfs      f8, 0x18c(r5)
	lfs      f3, 0x180(r5)
	fadds    f0, f0, f2
	fadds    f1, f1, f8
	lfs      f7, 0x190(r5)
	lfs      f2, 0x184(r5)
	fadds    f0, f0, f3
	lfs      f6, 0x194(r5)
	fadds    f1, f1, f7
	lfs      f5, 0x198(r5)
	fadds    f0, f0, f2
	lfs      f4, 0x19c(r5)
	fadds    f1, f1, f6
	lfs      f3, 0x1a0(r5)
	lfs      f2, 0x1a4(r5)
	fadds    f0, f0, f9
	fadds    f1, f1, f5
	fadds    f0, f0, f8
	fadds    f1, f1, f4
	fadds    f0, f0, f7
	fadds    f1, f1, f3
	fadds    f0, f0, f6
	fadds    f1, f1, f2

lbl_800577B0:
	clrlwi   r0, r7, 0x18
	cmpw     r0, r3
	blt      lbl_80057734
	b        lbl_800577DC

lbl_800577C0:
	rlwinm   r0, r7, 2, 0x16, 0x1d
	addi     r7, r7, 1
	add      r3, r30, r0
	lfs      f3, 0x178(r3)
	lfs      f2, 0x188(r3)
	fadds    f0, f0, f3
	fadds    f1, f1, f2

lbl_800577DC:
	clrlwi   r0, r7, 0x18
	cmpw     r0, r6
	blt      lbl_800577C0

lbl_800577E8:
	li       r3, 0xff
	clrlwi   r0, r4, 0x18
	stb      r3, 0x24(r1)
	li       r8, 0
	stb      r3, 0x1c(r1)
	stb      r3, 0x25(r1)
	stb      r3, 0x1d(r1)
	stb      r3, 0x26(r1)
	stb      r3, 0x1e(r1)
	stb      r3, 0x27(r1)
	stb      r3, 0x1f(r1)
	stb      r3, 0x28(r1)
	stb      r3, 0x20(r1)
	stb      r3, 0x29(r1)
	stb      r3, 0x21(r1)
	stb      r3, 0x2a(r1)
	stb      r3, 0x22(r1)
	stb      r3, 0x2b(r1)
	stb      r3, 0x23(r1)
	b        lbl_800578E4

lbl_80057838:
	clrlwi   r7, r8, 0x18
	cmplwi   r7, 4
	bge      lbl_80057894
	rlwinm   r3, r8, 2, 0x16, 0x1d
	lfs      f4, lbl_805168F0@sda21(r2)
	add      r4, r30, r3
	addi     r5, r1, 0x24
	lfs      f3, 0x124(r4)
	addi     r3, r1, 0x1c
	lfs      f2, 0x134(r4)
	fmuls    f3, f4, f3
	fmuls    f2, f4, f2
	fdivs    f3, f3, f0
	fdivs    f2, f2, f1
	fctiwz   f3, f3
	fctiwz   f2, f2
	stfd     f3, 0x40(r1)
	stfd     f2, 0x48(r1)
	lwz      r6, 0x44(r1)
	lwz      r4, 0x4c(r1)
	stbx     r6, r5, r7
	stbx     r4, r3, r7
	b        lbl_800578E0

lbl_80057894:
	rlwinm   r3, r8, 2, 0x16, 0x1d
	lfs      f4, lbl_805168F0@sda21(r2)
	add      r4, r30, r3
	addi     r5, r1, 0x24
	lfs      f3, 0x168(r4)
	addi     r3, r1, 0x1c
	lfs      f2, 0x178(r4)
	fmuls    f3, f4, f3
	fmuls    f2, f4, f2
	fdivs    f3, f3, f0
	fdivs    f2, f2, f1
	fctiwz   f3, f3
	fctiwz   f2, f2
	stfd     f3, 0x48(r1)
	stfd     f2, 0x40(r1)
	lwz      r6, 0x4c(r1)
	lwz      r4, 0x44(r1)
	stbx     r6, r5, r7
	stbx     r4, r3, r7

lbl_800578E0:
	addi     r8, r8, 1

lbl_800578E4:
	clrlwi   r3, r8, 0x18
	cmplw    r3, r0
	blt      lbl_80057838
	lbz      r3, 0x26(r1)
	li       r0, -1
	lbz      r4, 0x1e(r1)
	addi     r29, r1, 0x2c
	lbz      r5, 0x2a(r1)
	slwi     r12, r3, 0x10
	lbz      r3, 0x22(r1)
	slwi     r6, r4, 0x10
	lbz      r7, 0x1f(r1)
	slwi     r9, r5, 0x10
	lbz      r5, 0x27(r1)
	slwi     r3, r3, 0x10
	lbz      r4, 0x23(r1)
	rlwimi   r6, r7, 0x18, 0, 7
	lbz      r10, 0x2b(r1)
	rlwimi   r12, r5, 0x18, 0, 7
	lbz      r24, 0x25(r1)
	rlwimi   r3, r4, 0x18, 0, 7
	lbz      r8, 0x1d(r1)
	rlwimi   r9, r10, 0x18, 0, 7
	lbz      r11, 0x29(r1)
	rlwimi   r12, r24, 8, 0x10, 0x17
	lbz      r7, 0x24(r1)
	rlwimi   r6, r8, 8, 0x10, 0x17
	lbz      r5, 0x21(r1)
	rlwimi   r9, r11, 8, 0x10, 0x17
	or       r10, r7, r12
	lbz      r4, 0x28(r1)
	stw      r10, 0x18(r1)
	rlwimi   r3, r5, 8, 0x10, 0x17
	or       r8, r4, r9
	lbz      r7, 0x1c(r1)
	stw      r8, 0x14(r1)
	li       r31, 0
	lbz      r4, 0x20(r1)
	or       r5, r7, r6
	stw      r5, 0x10(r1)
	or       r3, r4, r3
	lbz      r24, 0x18(r1)
	stw      r3, 0xc(r1)
	lbz      r25, 0x19(r1)
	stw      r0, 0x38(r1)
	lbz      r26, 0x1a(r1)
	lbz      r27, 0x1b(r1)
	stw      r0, 0x2c(r1)
	lbz      r6, 0xc(r1)
	lbz      r5, 0xd(r1)
	lbz      r4, 0xe(r1)
	lbz      r3, 0xf(r1)
	stw      r0, 0x30(r1)
	lbz      r10, 0x10(r1)
	lbz      r9, 0x11(r1)
	lbz      r8, 0x12(r1)
	lbz      r7, 0x13(r1)
	stw      r0, 0x34(r1)
	lbz      r28, 0x14(r1)
	lbz      r12, 0x15(r1)
	lbz      r11, 0x16(r1)
	lbz      r0, 0x17(r1)
	stb      r24, 0x38(r1)
	stb      r25, 0x39(r1)
	stb      r26, 0x3a(r1)
	stb      r27, 0x3b(r1)
	stb      r28, 0x34(r1)
	stb      r12, 0x35(r1)
	stb      r11, 0x36(r1)
	stb      r0, 0x37(r1)
	stb      r10, 0x30(r1)
	stb      r9, 0x31(r1)
	stb      r8, 0x32(r1)
	stb      r7, 0x33(r1)
	stb      r6, 0x2c(r1)
	stb      r5, 0x2d(r1)
	stb      r4, 0x2e(r1)
	stb      r3, 0x2f(r1)
	b        lbl_80057A50

lbl_80057A20:
	rlwinm   r0, r31, 2, 0x16, 0x1d
	clrlwi   r4, r31, 0x18
	lwzx     r0, r29, r0
	addi     r5, r1, 8
	stw      r0, 8(r1)
	lwz      r3, 0x168(r30)
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	addi     r31, r31, 1

lbl_80057A50:
	clrlwi   r0, r31, 0x18
	cmplwi   r0, 4
	blt      lbl_80057A20

lbl_80057A5C:
	lmw      r24, 0x50(r1)
	lwz      r0, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	80057A70
 * Size:	0000B0
 */
void J2DPictureEx::setTevKColorSel(unsigned char p1)
{
	for (u8 i = 0; i < p1; i++) {
		if (i < 4) {
			_168->m_tevBlock->setTevKColorSel(i, i * -4 + 31);
		} else {
			_168->m_tevBlock->setTevKColorSel(i, (i - 4) * -4 + 30);
		}
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	clrlwi   r31, r4, 0x18
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_80057AF8

lbl_80057A98:
	clrlwi   r4, r30, 0x18
	cmplwi   r4, 4
	bge      lbl_80057ACC
	lwz      r3, 0x168(r29)
	rlwinm   r0, r30, 2, 0x16, 0x1d
	subfic   r0, r0, 0x1f
	lwz      r3, 0x70(r3)
	clrlwi   r5, r0, 0x18
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	b        lbl_80057AF4

lbl_80057ACC:
	lwz      r3, 0x168(r29)
	addi     r0, r4, -4
	slwi     r0, r0, 2
	lwz      r3, 0x70(r3)
	subfic   r0, r0, 0x1e
	clrlwi   r5, r0, 0x18
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl

lbl_80057AF4:
	addi     r30, r30, 1

lbl_80057AF8:
	clrlwi   r0, r30, 0x18
	cmplw    r0, r31
	blt      lbl_80057A98
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
 * Address:	80057B20
 * Size:	0000B0
 */
void J2DPictureEx::setTevKAlphaSel(unsigned char)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	clrlwi   r31, r4, 0x18
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_80057BA8

lbl_80057B48:
	clrlwi   r4, r30, 0x18
	cmplwi   r4, 4
	bge      lbl_80057B7C
	lwz      r3, 0x168(r29)
	rlwinm   r0, r30, 2, 0x16, 0x1d
	subfic   r0, r0, 0x1d
	lwz      r3, 0x70(r3)
	clrlwi   r5, r0, 0x18
	lwz      r12, 0(r3)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	b        lbl_80057BA4

lbl_80057B7C:
	lwz      r3, 0x168(r29)
	addi     r0, r4, -4
	slwi     r0, r0, 2
	lwz      r3, 0x70(r3)
	subfic   r0, r0, 0x1c
	clrlwi   r5, r0, 0x18
	lwz      r12, 0(r3)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl

lbl_80057BA4:
	addi     r30, r30, 1

lbl_80057BA8:
	clrlwi   r0, r30, 0x18
	cmplw    r0, r31
	blt      lbl_80057B48
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
 * Address:	80057BD0
 * Size:	000118
 */
void J2DPictureEx::shiftSetBlendRatio(unsigned char, float, bool, bool)
{
	/*
	clrlwi.  r0, r5, 0x18
	beq      lbl_80057BE0
	addi     r7, r3, 0x124
	b        lbl_80057BE4

lbl_80057BE0:
	addi     r7, r3, 0x134

lbl_80057BE4:
	clrlwi.  r0, r5, 0x18
	beq      lbl_80057BF4
	addi     r5, r3, 0x178
	b        lbl_80057BF8

lbl_80057BF4:
	addi     r5, r3, 0x188

lbl_80057BF8:
	clrlwi.  r0, r6, 0x18
	beq      lbl_80057C84
	clrlwi   r8, r4, 0x18
	addi     r3, r5, 0x1c
	subfic   r0, r8, 7
	addi     r6, r7, 0x1c
	li       r9, 7
	mtctr    r0
	cmpwi    r8, 7
	bge      lbl_80057C5C

lbl_80057C20:
	cmpwi    r9, 4
	ble      lbl_80057C34
	lfs      f0, -0x14(r3)
	stfs     f0, -0x10(r3)
	b        lbl_80057C4C

lbl_80057C34:
	bne      lbl_80057C44
	lfs      f0, 0xc(r7)
	stfs     f0, 0(r5)
	b        lbl_80057C4C

lbl_80057C44:
	lfs      f0, -4(r6)
	stfs     f0, 0(r6)

lbl_80057C4C:
	addi     r3, r3, -4
	addi     r6, r6, -4
	addi     r9, r9, -1
	bdnz     lbl_80057C20

lbl_80057C5C:
	clrlwi   r0, r4, 0x18
	cmplwi   r0, 4
	blt      lbl_80057C78
	slwi     r0, r8, 2
	add      r3, r5, r0
	stfs     f1, -0x10(r3)
	blr

lbl_80057C78:
	rlwinm   r0, r4, 2, 0x16, 0x1d
	stfsx    f1, r7, r0
	blr

lbl_80057C84:
	clrlwi   r3, r4, 0x18
	addi     r6, r3, 1
	slwi     r4, r6, 2
	subfic   r0, r6, 8
	add      r3, r5, r4
	add      r4, r7, r4
	mtctr    r0
	cmpwi    r6, 8
	bgelr

lbl_80057CA8:
	cmpwi    r6, 4
	ble      lbl_80057CBC
	lfs      f0, -0x10(r3)
	stfs     f0, -0x14(r3)
	b        lbl_80057CD4

lbl_80057CBC:
	bne      lbl_80057CCC
	lfs      f0, 0(r5)
	stfs     f0, 0xc(r7)
	b        lbl_80057CD4

lbl_80057CCC:
	lfs      f0, 0(r4)
	stfs     f0, -4(r4)

lbl_80057CD4:
	addi     r3, r3, 4
	addi     r4, r4, 4
	addi     r6, r6, 1
	bdnz     lbl_80057CA8
	blr
	*/
}

/*
 * --INFO--
 * Address:	80057CE8
 * Size:	000058
 */
void J2DPictureEx::setBlendColorRatio(float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8)
{
	if (_168) {
		_124[0] = p1;
		_124[1] = p2;
		_124[2] = p3;
		_124[3] = p4;
		_178    = p5;
		_17C    = p6;
		_180    = p7;
		_188    = p8;
		setTevKColor(_168->m_texGenBlock.m_texGenNum);
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x168(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x48
	  stfs      f1, 0x124(r3)
	  stfs      f2, 0x128(r3)
	  stfs      f3, 0x12C(r3)
	  stfs      f4, 0x130(r3)
	  stfs      f5, 0x178(r3)
	  stfs      f6, 0x17C(r3)
	  stfs      f7, 0x180(r3)
	  stfs      f8, 0x184(r3)
	  lwz       r4, 0x168(r3)
	  lwz       r0, 0x28(r4)
	  rlwinm    r4,r0,0,24,31
	  bl        -0x760

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80057D40
 * Size:	000058
 */
void J2DPictureEx::setBlendAlphaRatio(float, float, float, float, float, float, float, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x168(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x48
	  stfs      f1, 0x134(r3)
	  stfs      f2, 0x138(r3)
	  stfs      f3, 0x13C(r3)
	  stfs      f4, 0x140(r3)
	  stfs      f5, 0x188(r3)
	  stfs      f6, 0x18C(r3)
	  stfs      f7, 0x190(r3)
	  stfs      f8, 0x194(r3)
	  lwz       r4, 0x168(r3)
	  lwz       r0, 0x28(r4)
	  rlwinm    r4,r0,0,24,31
	  bl        -0x7B8

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80057D98
 * Size:	000140
 */
ResTIMG* J2DPictureEx::changeTexture(const ResTIMG*, unsigned char)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	mr       r28, r4
	mr       r29, r5
	lwz      r3, 0x168(r3)
	cmplwi   r3, 0
	beq      lbl_80057DC8
	cmplwi   r28, 0
	bne      lbl_80057DD0

lbl_80057DC8:
	li       r3, 0
	b        lbl_80057EC4

lbl_80057DD0:
	lwz      r31, 0x28(r3)
	clrlwi   r30, r29, 0x18
	cmplw    r30, r31
	ble      lbl_80057DE8
	li       r3, 0
	b        lbl_80057EC4

lbl_80057DE8:
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	mr       r5, r30
	cmplwi   r0, 8
	li       r4, 8
	bgt      lbl_80057E14
	mr       r4, r3

lbl_80057E14:
	clrlwi   r0, r4, 0x18
	cmplw    r5, r0
	blt      lbl_80057E28
	li       r3, 0
	b        lbl_80057EC4

lbl_80057E28:
	cmplw    r30, r31
	bge      lbl_80057EA4
	mr       r3, r27
	mr       r4, r29
	lwz      r12, 0(r27)
	lwz      r12, 0x120(r12)
	mtctr    r12
	bctrl
	lbz      r0, 8(r28)
	li       r30, 0
	lwz      r31, 0x20(r3)
	cmplwi   r0, 0
	beq      lbl_80057E78
	mr       r3, r27
	mr       r4, r29
	lwz      r12, 0(r27)
	lwz      r12, 0x148(r12)
	mtctr    r12
	bctrl
	mr       r30, r3

lbl_80057E78:
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
	b        lbl_80057EC4

lbl_80057EA4:
	mr       r3, r27
	mr       r4, r28
	lwz      r12, 0(r27)
	lfs      f1, lbl_805168E0@sda21(r2)
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl
	li       r3, 0

lbl_80057EC4:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80057ED8
 * Size:	000058
 * changeTexture__12J2DPictureExFPCcUc
 */
ResTIMG* J2DPictureEx::changeTexture(const char* name, u8 p2) { return changeTexture((ResTIMG*)J2DScreen::getNameResource(name), p2); }

/*
 * --INFO--
 * Address:	80057F30
 * Size:	000160
 * changeTexture__12J2DPictureExFPC7ResTIMGUcP10JUTPalette
 */
ResTIMG* J2DPictureEx::changeTexture(const ResTIMG*, unsigned char, JUTPalette*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r28, r3
	mr       r29, r4
	mr       r30, r5
	mr       r31, r6
	lwz      r3, 0x168(r3)
	cmplwi   r3, 0
	beq      lbl_80057F64
	cmplwi   r29, 0
	bne      lbl_80057F6C

lbl_80057F64:
	li       r3, 0
	b        lbl_8005807C

lbl_80057F6C:
	lwz      r27, 0x28(r3)
	clrlwi   r26, r30, 0x18
	cmplw    r26, r27
	ble      lbl_80057F84
	li       r3, 0
	b        lbl_8005807C

lbl_80057F84:
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	mr       r5, r26
	cmplwi   r0, 8
	li       r4, 8
	bgt      lbl_80057FB0
	mr       r4, r3

lbl_80057FB0:
	clrlwi   r0, r4, 0x18
	cmplw    r5, r0
	blt      lbl_80057FC4
	li       r3, 0
	b        lbl_8005807C

lbl_80057FC4:
	cmplw    r26, r27
	bge      lbl_80058058
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	lwz      r12, 0x120(r12)
	mtctr    r12
	bctrl
	lbz      r0, 8(r29)
	li       r26, 0
	lwz      r27, 0x20(r3)
	cmplwi   r0, 0
	beq      lbl_80058028
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	lwz      r12, 0x148(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	mr       r3, r28
	mr       r5, r0
	mr       r4, r29
	bl       getTlutID__10J2DPictureFPC7ResTIMGUc
	mr       r26, r3

lbl_80058028:
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	lwz      r12, 0x120(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	mr       r5, r31
	mr       r6, r26
	bl       storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette7_GXTlut
	mr       r3, r27
	b        lbl_8005807C

lbl_80058058:
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	mr       r5, r31
	lfs      f1, lbl_805168E0@sda21(r2)
	lwz      r12, 0xa0(r12)
	mtctr    r12
	bctrl
	li       r3, 0

lbl_8005807C:
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80058090
 * Size:	000068
 * changeTexture__12J2DPictureExFPCcUcP10JUTPalette
 */
ResTIMG* J2DPictureEx::changeTexture(const char* name, unsigned char p2, JUTPalette* palette)
{
	return changeTexture((ResTIMG*)J2DScreen::getNameResource(name), p2, palette);
}

/*
 * --INFO--
 * Address:	800580F8
 * Size:	000058
 */
JUTTexture* J2DPictureEx::getTexture(unsigned char) const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lwz      r3, 0x168(r3)
	stw      r0, 0x14(r1)
	cmplwi   r3, 0
	bne      lbl_80058118
	li       r3, 0
	b        lbl_80058140

lbl_80058118:
	lwz      r3, 0x70(r3)
	cmplwi   r3, 0
	bne      lbl_8005812C
	li       r3, 0
	b        lbl_80058140

lbl_8005812C:
	lwz      r12, 0(r3)
	clrlwi   r4, r4, 0x18
	lwz      r12, 0xa0(r12)
	mtctr    r12
	bctrl

lbl_80058140:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80058150
 * Size:	000020
 */
u8 J2DPictureEx::getTextureCount() const
{
	if (_168 == nullptr) {
		return 0;
	}
	return _168->m_texGenBlock.m_texGenNum;
}

/*
 * --INFO--
 * Address:	80058170
 * Size:	000088
 */
bool J2DPictureEx::setBlack(JUtility::TColor newBlack)
{
	JUtility::TColor black, white;
	if (!getBlackWhite(&black, &white)) {
		return false;
	}
	return setBlackWhite(newBlack, white);
}

/*
 * --INFO--
 * Address:	800581F8
 * Size:	000088
 */
bool J2DPictureEx::setWhite(JUtility::TColor newWhite)
{
	JUtility::TColor black, white;
	if (!getBlackWhite(&black, &white)) {
		return false;
	}
	return setBlackWhite(black, newWhite);
}

/*
 * --INFO--
 * Address:	80058280
 * Size:	000454
 */
bool J2DPictureEx::setBlackWhite(JUtility::TColor black, JUtility::TColor white)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stmw     r23, 0x4c(r1)
	mr       r27, r4
	mr       r26, r3
	mr       r28, r5
	lwz      r4, 0x168(r3)
	cmplwi   r4, 0
	bne      lbl_800582B0
	li       r3, 0
	b        lbl_800586C0

lbl_800582B0:
	lwz      r0, 0x70(r4)
	cmplwi   r0, 0
	bne      lbl_800582C4
	li       r3, 0
	b        lbl_800586C0

lbl_800582C4:
	lwz      r6, 0(r28)
	addi     r4, r1, 0x14
	lwz      r0, 0(r27)
	addi     r5, r1, 0x10
	stw      r6, 0x10(r1)
	stw      r0, 0x14(r1)
	bl isSetBlackWhite__12J2DPictureExCFQ28JUtility6TColorQ28JUtility6TColor
	clrlwi.  r0, r3, 0x18
	bne      lbl_800582F0
	li       r3, 0
	b        lbl_800586C0

lbl_800582F0:
	lwz      r4, 0x168(r26)
	li       r31, 1
	lwz      r0, 0(r27)
	lwz      r3, 0x28(r4)
	cmplwi   r0, 0
	clrlwi   r30, r3, 0x18
	bne      lbl_80058320
	lwz      r3, 0(r28)
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	bne      lbl_80058320
	li       r31, 0

lbl_80058320:
	cmplwi   r30, 1
	bne      lbl_80058344
	clrlwi   r3, r31, 0x18
	neg      r0, r3
	or       r0, r0, r3
	srwi     r3, r0, 0x1f
	addi     r0, r3, 1
	clrlwi   r29, r0, 0x18
	b        lbl_80058360

lbl_80058344:
	clrlwi   r3, r31, 0x18
	neg      r0, r3
	or       r0, r0, r3
	srwi     r3, r0, 0x1f
	addi     r0, r3, 1
	add      r0, r30, r0
	clrlwi   r29, r0, 0x18

lbl_80058360:
	lwz      r3, 0x70(r4)
	mr       r4, r29
	lwz      r12, 0(r3)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	cmplwi   r30, 1
	bne      lbl_800583AC
	clrlwi.  r0, r31, 0x18
	bne      lbl_80058394
	li       r0, 4
	sth      r0, 0x28(r1)
	b        lbl_800584CC

lbl_80058394:
	lis      r3, 0x0000FF04@ha
	li       r4, 0xff
	addi     r0, r3, 0x0000FF04@l
	sth      r4, 0x28(r1)
	sth      r0, 0x2a(r1)
	b        lbl_800584CC

lbl_800583AC:
	cmplwi   r30, 0
	li       r3, 0
	ble      lbl_8005848C
	cmplwi   r30, 8
	addi     r0, r30, -8
	ble      lbl_80058464
	clrlwi   r0, r0, 0x18
	b        lbl_80058458

lbl_800583CC:
	rlwinm   r6, r3, 8, 0x10, 0x17
	rlwinm   r7, r3, 1, 0x17, 0x1e
	addi     r4, r1, 0x28
	addi     r5, r3, 1
	ori      r8, r6, 0xff
	addi     r6, r3, 2
	add      r4, r4, r7
	rlwinm   r5, r5, 8, 0x10, 0x17
	ori      r7, r5, 0xff
	sth      r8, 0(r4)
	rlwinm   r6, r6, 8, 0x10, 0x17
	addi     r5, r3, 3
	ori      r8, r6, 0xff
	sth      r7, 2(r4)
	rlwinm   r5, r5, 8, 0x10, 0x17
	addi     r6, r3, 4
	ori      r7, r5, 0xff
	sth      r8, 4(r4)
	rlwinm   r6, r6, 8, 0x10, 0x17
	addi     r5, r3, 5
	ori      r8, r6, 0xff
	sth      r7, 6(r4)
	rlwinm   r5, r5, 8, 0x10, 0x17
	addi     r6, r3, 6
	ori      r7, r5, 0xff
	sth      r8, 8(r4)
	addi     r5, r3, 7
	rlwinm   r6, r6, 8, 0x10, 0x17
	rlwinm   r5, r5, 8, 0x10, 0x17
	sth      r7, 0xa(r4)
	ori      r6, r6, 0xff
	addi     r3, r3, 8
	sth      r6, 0xc(r4)
	ori      r5, r5, 0xff
	sth      r5, 0xe(r4)

lbl_80058458:
	clrlwi   r4, r3, 0x18
	cmplw    r4, r0
	blt      lbl_800583CC

lbl_80058464:
	addi     r4, r1, 0x28
	b        lbl_80058480

lbl_8005846C:
	rlwinm   r5, r3, 8, 0x10, 0x17
	rlwinm   r0, r3, 1, 0x17, 0x1e
	ori      r5, r5, 0xff
	addi     r3, r3, 1
	sthx     r5, r4, r0

lbl_80058480:
	clrlwi   r0, r3, 0x18
	cmplw    r0, r30
	blt      lbl_8005846C

lbl_8005848C:
	clrlwi.  r0, r31, 0x18
	bne      lbl_800584AC
	lis      r3, 0x0000FF04@ha
	rlwinm   r0, r30, 1, 0x17, 0x1e
	addi     r4, r3, 0x0000FF04@l
	addi     r3, r1, 0x28
	sthx     r4, r3, r0
	b        lbl_800584CC

lbl_800584AC:
	lis      r5, 0x0000FFFF@ha
	rlwinm   r4, r30, 1, 0x17, 0x1e
	addi     r0, r5, 0x0000FFFF@l
	addi     r3, r1, 0x28
	sthx     r0, r3, r4
	addi     r0, r5, -252
	addi     r3, r1, 0x2a
	sthx     r0, r3, r4

lbl_800584CC:
	addi     r23, r1, 0x28
	clrlwi   r25, r29, 0x18
	li       r24, 0
	b        lbl_80058520

lbl_800584DC:
	rlwinm   r0, r24, 1, 0x17, 0x1e
	clrlwi   r4, r24, 0x18
	lhzx     r0, r23, r0
	addi     r5, r1, 0xc
	srawi    r3, r0, 8
	stb      r0, 0xa(r1)
	stb      r3, 8(r1)
	stb      r3, 9(r1)
	lwz      r0, 8(r1)
	stw      r0, 0xc(r1)
	lwz      r3, 0x168(r26)
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	addi     r24, r24, 1

lbl_80058520:
	clrlwi   r0, r24, 0x18
	cmplw    r0, r25
	blt      lbl_800584DC
	mr       r3, r26
	mr       r4, r30
	mr       r5, r29
	mr       r6, r31
	bl       setTevStage__12J2DPictureExFUcUcb
	mr       r3, r26
	mr       r4, r30
	bl       setTevKColor__12J2DPictureExFUc
	li       r24, 0
	b        lbl_800585B4

lbl_80058554:
	clrlwi   r4, r24, 0x18
	cmplwi   r4, 4
	bge      lbl_80058588
	lwz      r3, 0x168(r26)
	rlwinm   r0, r24, 2, 0x16, 0x1d
	subfic   r0, r0, 0x1f
	lwz      r3, 0x70(r3)
	clrlwi   r5, r0, 0x18
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	b        lbl_800585B0

lbl_80058588:
	lwz      r3, 0x168(r26)
	addi     r0, r4, -4
	slwi     r0, r0, 2
	lwz      r3, 0x70(r3)
	subfic   r0, r0, 0x1e
	clrlwi   r5, r0, 0x18
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl

lbl_800585B0:
	addi     r24, r24, 1

lbl_800585B4:
	clrlwi   r0, r24, 0x18
	cmplw    r0, r30
	blt      lbl_80058554
	li       r24, 0
	b        lbl_80058628

lbl_800585C8:
	clrlwi   r4, r24, 0x18
	cmplwi   r4, 4
	bge      lbl_800585FC
	lwz      r3, 0x168(r26)
	rlwinm   r0, r24, 2, 0x16, 0x1d
	subfic   r0, r0, 0x1d
	lwz      r3, 0x70(r3)
	clrlwi   r5, r0, 0x18
	lwz      r12, 0(r3)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	b        lbl_80058624

lbl_800585FC:
	lwz      r3, 0x168(r26)
	addi     r0, r4, -4
	slwi     r0, r0, 2
	lwz      r3, 0x70(r3)
	subfic   r0, r0, 0x1c
	clrlwi   r5, r0, 0x18
	lwz      r12, 0(r3)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl

lbl_80058624:
	addi     r24, r24, 1

lbl_80058628:
	clrlwi   r0, r24, 0x18
	cmplw    r0, r30
	blt      lbl_800585C8
	clrlwi.  r0, r31, 0x18
	beq      lbl_800586BC
	lbz      r3, 1(r27)
	addi     r5, r1, 0x20
	lbz      r6, 2(r27)
	li       r4, 0
	lbz      r7, 3(r27)
	lbz      r0, 0(r27)
	sth      r3, 0x22(r1)
	sth      r0, 0x20(r1)
	sth      r6, 0x24(r1)
	sth      r7, 0x26(r1)
	lwz      r3, 0x168(r26)
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	lbz      r3, 1(r28)
	addi     r5, r1, 0x18
	lbz      r6, 2(r28)
	li       r4, 1
	lbz      r7, 3(r28)
	lbz      r0, 0(r28)
	sth      r3, 0x1a(r1)
	sth      r0, 0x18(r1)
	sth      r6, 0x1c(r1)
	sth      r7, 0x1e(r1)
	lwz      r3, 0x168(r26)
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl

lbl_800586BC:
	li       r3, 1

lbl_800586C0:
	lmw      r23, 0x4c(r1)
	lwz      r0, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	800586D4
 * Size:	0001C4
 */
bool J2DPictureEx::getBlackWhite(JUtility::TColor* black, JUtility::TColor* white) const
{
	if (_168 == nullptr) {
		return false;
	}
	if (_168->m_tevBlock == nullptr) {
		return false;
	}
	s8 texGenNum   = _168->m_texGenBlock.m_texGenNum;
	u8 tevStageNum = _168->m_tevBlock->getTevStageNum();
	if (texGenNum == 1) {
		texGenNum = 1 - tevStageNum | tevStageNum - 1;
	} else {
		texGenNum = (texGenNum + 1) - tevStageNum | tevStageNum - (texGenNum + 1);
	}
	black->set(0, 0, 0, 0);
	white->set(0xFF, 0xFF, 0xFF, 0xFF);
	if (texGenNum < 0) {
		*black = *_168->m_tevBlock->getTevColor(0);
		*white = *_168->m_tevBlock->getTevColor(1);
	}
	return true;
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r26, 0x18(r1)
	mr       r30, r4
	lwz      r4, 0x168(r3)
	mr       r29, r3
	mr       r31, r5
	cmplwi   r4, 0
	bne      lbl_80058704
	li       r3, 0
	b        lbl_80058884

lbl_80058704:
	lwz      r3, 0x70(r4)
	cmplwi   r3, 0
	bne      lbl_80058718
	li       r3, 0
	b        lbl_80058884

lbl_80058718:
	lwz      r12, 0(r3)
	lwz      r0, 0x28(r4)
	lwz      r12, 0x58(r12)
	clrlwi   r26, r0, 0x18
	mtctr    r12
	bctrl
	cmplwi   r26, 1
	bne      lbl_80058750
	clrlwi   r4, r3, 0x18
	subfic   r3, r4, 1
	addi     r0, r4, -1
	or       r0, r3, r0
	srwi     r4, r0, 0x1f
	b        lbl_80058768

lbl_80058750:
	clrlwi   r4, r3, 0x18
	addi     r0, r26, 1
	subf     r3, r4, r0
	subf     r0, r0, r4
	or       r0, r3, r0
	srwi     r4, r0, 0x1f

lbl_80058768:
	li       r0, 0
	li       r3, -1
	stw      r0, 0x14(r1)
	clrlwi.  r0, r4, 0x18
	lbz      r4, 0x14(r1)
	stw      r3, 0x10(r1)
	lbz      r0, 0x15(r1)
	stb      r4, 0(r30)
	lbz      r3, 0x16(r1)
	stb      r0, 1(r30)
	lbz      r0, 0x17(r1)
	stb      r3, 2(r30)
	lbz      r3, 0x10(r1)
	stb      r0, 3(r30)
	lbz      r0, 0x11(r1)
	stb      r3, 0(r31)
	lbz      r3, 0x12(r1)
	stb      r0, 1(r31)
	lbz      r0, 0x13(r1)
	stb      r3, 2(r31)
	stb      r0, 3(r31)
	beq      lbl_80058880
	lwz      r3, 0x168(r29)
	li       r4, 0
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0x168(r29)
	li       r4, 1
	lha      r29, 0(r3)
	lha      r28, 2(r3)
	lha      r27, 4(r3)
	lha      r26, 6(r3)
	lwz      r3, 0x70(r5)
	lwz      r12, 0(r3)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	rlwinm   r4, r28, 0x10, 8, 0xf
	lha      r0, 2(r3)
	rlwimi   r4, r29, 0x18, 0, 7
	lha      r5, 0(r3)
	rlwimi   r4, r27, 8, 0x10, 0x17
	rlwinm   r0, r0, 0x10, 8, 0xf
	rlwimi   r4, r26, 0, 0x18, 0x1f
	lha      r6, 4(r3)
	stw      r4, 0xc(r1)
	rlwimi   r0, r5, 0x18, 0, 7
	lha      r7, 6(r3)
	rlwimi   r0, r6, 8, 0x10, 0x17
	lbz      r3, 0xc(r1)
	lbz      r5, 0xd(r1)
	rlwimi   r0, r7, 0, 0x18, 0x1f
	stb      r3, 0(r30)
	lbz      r4, 0xe(r1)
	stb      r5, 1(r30)
	lbz      r3, 0xf(r1)
	stw      r0, 8(r1)
	stb      r4, 2(r30)
	lbz      r0, 8(r1)
	stb      r3, 3(r30)
	lbz      r4, 9(r1)
	stb      r0, 0(r31)
	lbz      r3, 0xa(r1)
	stb      r4, 1(r31)
	lbz      r0, 0xb(r1)
	stb      r3, 2(r31)
	stb      r0, 3(r31)

lbl_80058880:
	li       r3, 1

lbl_80058884:
	lmw      r26, 0x18(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80058898
 * Size:	0000DC
 */
bool J2DPictureEx::isSetBlackWhite(JUtility::TColor, JUtility::TColor) const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0(r4)
	stw      r31, 0xc(r1)
	cmplwi   r0, 0
	stw      r30, 8(r1)
	mr       r30, r3
	bne      lbl_800588D4
	lwz      r3, 0(r5)
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	bne      lbl_800588D4
	li       r3, 1
	b        lbl_8005895C

lbl_800588D4:
	lwz      r4, 0x168(r30)
	lwz      r3, 0x70(r4)
	lwz      r0, 0x28(r4)
	lwz      r12, 0(r3)
	clrlwi   r31, r0, 0x18
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x168(r30)
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 0x10
	bne      lbl_80058920
	li       r3, 1
	b        lbl_8005895C

lbl_80058920:
	cmplwi   r0, 1
	bne      lbl_80058930
	li       r3, 0
	b        lbl_8005895C

lbl_80058930:
	cmplwi   r31, 1
	li       r0, 2
	beq      lbl_80058940
	addi     r0, r31, 2

lbl_80058940:
	clrlwi   r4, r0, 0x18
	clrlwi   r3, r3, 0x18
	subf     r0, r4, r3
	orc      r3, r3, r4
	srwi     r0, r0, 1
	subf     r0, r0, r3
	srwi     r3, r0, 0x1f

lbl_8005895C:
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
 * Address:	80058974
 * Size:	000060
 * getBlack__12J2DPictureExCFv
 */
JUtility::TColor J2DPictureEx::getBlack() const
{
	JUtility::TColor black, white;
	if (!getBlackWhite(&black, &white)) {
		return nullptr;
	}
	return black;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, -1
	addi     r5, r1, 8
	stw      r31, 0x1c(r1)
	mr       r31, r3
	mr       r3, r4
	addi     r4, r1, 0xc
	stw      r0, 0xc(r1)
	stw      r0, 8(r1)
	bl getBlackWhite__12J2DPictureExCFPQ28JUtility6TColorPQ28JUtility6TColor
	clrlwi.  r0, r3, 0x18
	bne      lbl_800589B8
	li       r0, 0
	stw      r0, 0(r31)
	b        lbl_800589C0

lbl_800589B8:
	lwz      r0, 0xc(r1)
	stw      r0, 0(r31)

lbl_800589C0:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800589D4
 * Size:	000060
 */
JUtility::TColor J2DPictureEx::getWhite() const
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, -1
	addi     r5, r1, 8
	stw      r31, 0x1c(r1)
	mr       r31, r3
	mr       r3, r4
	addi     r4, r1, 0xc
	stw      r0, 0xc(r1)
	stw      r0, 8(r1)
	bl getBlackWhite__12J2DPictureExCFPQ28JUtility6TColorPQ28JUtility6TColor
	clrlwi.  r0, r3, 0x18
	bne      lbl_80058A18
	li       r0, -1
	stw      r0, 0(r31)
	b        lbl_80058A20

lbl_80058A18:
	lwz      r0, 8(r1)
	stw      r0, 0(r31)

lbl_80058A20:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80058A34
 * Size:	000020
 */
void J2DPictureEx::setAlpha(unsigned char alpha)
{
	m_alpha = alpha;
	if (_168 == nullptr) {
		return;
	}
	// ???
	if (_168->m_colorBlock.m_colors[0].a == 0) {
		return;
	}
	_168->m_colorBlock.m_colors[0].a = alpha;
	/*
	stb      r4, 0xb2(r3)
	lwz      r3, 0x168(r3)
	cmplwi   r3, 0
	beqlr
	addic.   r3, r3, 0x10
	beqlr
	stb      r4, 3(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80058A54
 * Size:	000034
 */
void J2DPictureEx::setCullBack(_GXCullMode cullMode)
{
	m_cullMode = cullMode;
	if (_168 != nullptr) {
		_168->m_colorBlock.m_cullMode = cullMode;
	}
	J2DPane::setCullBack(cullMode);
}

/*
 * --INFO--
 * Address:	80058A88
 * Size:	000018
 */
void J2DPictureEx::rewriteAlpha()
{
	if (_168 == nullptr) {
		return;
	}
	m_alpha = _168->m_colorBlock.m_colors[0].a;
}

/*
 * --INFO--
 * Address:	80058AA0
 * Size:	0000A8
 */
bool J2DPictureEx::isUsed(const ResTIMG* img)
{
	if (_168 != nullptr && _168->m_tevBlock != nullptr) {
		for (u32 i = 0; i < 8; i++) {
			JUTTexture* texture = _168->m_tevBlock->getTexture(i);
			if (texture != nullptr && texture->_20 == img) {
				return true;
			}
		}
	}
	return J2DPane::isUsed(img);
}

/*
 * --INFO--
 * Address:	80058B48
 * Size:	00002C
 */
void J2DPictureEx::setAnimation(J2DAnmColor* animation)
{
	if (_168 != nullptr) {
		_168->setAnimation(animation);
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x168(r3)
	cmplwi   r3, 0
	beq      lbl_80058B64
	bl       setAnimation__11J2DMaterialFP11J2DAnmColor

lbl_80058B64:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80058B74
 * Size:	00002C
 */
void J2DPictureEx::setAnimation(J2DAnmTextureSRTKey* animation)
{
	if (_168 != nullptr) {
		_168->setAnimation(animation);
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x168(r3)
	cmplwi   r3, 0
	beq      lbl_80058B90
	bl       setAnimation__11J2DMaterialFP19J2DAnmTextureSRTKey

lbl_80058B90:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80058BA0
 * Size:	00002C
 */
void J2DPictureEx::setAnimation(J2DAnmTexPattern* animation)
{
	if (_168 != nullptr) {
		_168->setAnimation(animation);
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x168(r3)
	cmplwi   r3, 0
	beq      lbl_80058BBC
	bl       setAnimation__11J2DMaterialFP16J2DAnmTexPattern

lbl_80058BBC:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80058BCC
 * Size:	00002C
 */
void J2DPictureEx::setAnimation(J2DAnmTevRegKey* animation)
{
	if (_168 != nullptr) {
		_168->setAnimation(animation);
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x168(r3)
	cmplwi   r3, 0
	beq      lbl_80058BE8
	bl       setAnimation__11J2DMaterialFP15J2DAnmTevRegKey

lbl_80058BE8:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80058BF8
 * Size:	000008
 */
void J2DPictureEx::setAnimation(J2DAnmVisibilityFull* animation)
{
	// Generated from stw r4, 0x19C(r3)
	m_anmVisibility = animation;
}

/*
 * --INFO--
 * Address:	80058C00
 * Size:	0000E0
 * setAnimation__12J2DPictureExFP14J2DAnmVtxColor
 */
void J2DPictureEx::setAnimation(J2DAnmVtxColor* animation)
{
	m_anmVtxColor = animation;
	_1A4          = 0;
	if (animation != nullptr) {
		u16 v1 = animation->_10;
		for (u8 a = 0; a < 4; a++) {
			// if (_170[a / 2][a % 2] != -1) {
			if (_170[a] != 0xFFFF) {
				setAnmVtxColorHelper(animation, v1, a);
				// bool doBreak = false;
				// for (u16 b = 0; !doBreak && b < v1; b++) {
				// 	for (u16 c = 0; c < animation->_14[b]._00; c++) {
				// 		if (_170[a/2][a%2] == animation->_1C[animation->_14[b]._04 + c]) {
				// 			m_anmVtxColor = animation;
				// 			_1A4 |= 1 << a;
				// 			doBreak = true;
				// 			break;
				// 		}
				// 	}
				// }
			}
		}
	}
	if (_1A4 == 0) {
		m_anmVtxColor = nullptr;
	}
	/*
	stw      r4, 0x1a0(r3)
	li       r0, 0
	cmplwi   r4, 0
	stb      r0, 0x1a4(r3)
	beq      lbl_80058CC8
	lhz      r7, 0x10(r4)
	li       r9, 0
	b        lbl_80058CBC

lbl_80058C20:
	rlwinm   r5, r9, 1, 0x17, 0x1e
	addi     r8, r5, 0x170
	lhzx     r0, r3, r8
	cmplwi   r0, 0xffff
	beq      lbl_80058CB8
	li       r10, 0
	b        lbl_80058CAC

lbl_80058C3C:
	lwz      r6, 0x14(r4)
	rlwinm   r0, r10, 3, 0xd, 0x1c
	lwz      r5, 0x1c(r4)
	li       r12, 0
	add      r6, r6, r0
	lwz      r0, 4(r6)
	lhz      r6, 0(r6)
	slwi     r0, r0, 1
	add      r11, r5, r0
	b        lbl_80058C9C

lbl_80058C64:
	rlwinm   r0, r12, 1, 0xf, 0x1e
	lhzx     r5, r3, r8
	lhzx     r0, r11, r0
	cmplw    r5, r0
	bne      lbl_80058C98
	stw      r4, 0x1a0(r3)
	clrlwi   r0, r9, 0x18
	li       r5, 1
	lbz      r6, 0x1a4(r3)
	slw      r0, r5, r0
	or       r0, r6, r0
	stb      r0, 0x1a4(r3)
	b        lbl_80058CB8

lbl_80058C98:
	addi     r12, r12, 1

lbl_80058C9C:
	clrlwi   r0, r12, 0x10
	cmplw    r0, r6
	blt      lbl_80058C64
	addi     r10, r10, 1

lbl_80058CAC:
	clrlwi   r0, r10, 0x10
	cmplw    r0, r7
	blt      lbl_80058C3C

lbl_80058CB8:
	addi     r9, r9, 1

lbl_80058CBC:
	clrlwi   r0, r9, 0x18
	cmplwi   r0, 4
	blt      lbl_80058C20

lbl_80058CC8:
	lbz      r0, 0x1a4(r3)
	cmplwi   r0, 0
	bnelr
	li       r0, 0
	stw      r0, 0x1a0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80058CE0
 * Size:	000164
 */
const J2DAnmTransform* J2DPictureEx::animationPane(const J2DAnmTransform*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r3, 0x19c(r3)
	cmplwi   r3, 0
	beq      lbl_80058D44
	lhz      r4, 0x16c(r28)
	cmplwi   r4, 0xffff
	beq      lbl_80058D44
	addi     r5, r1, 8
	bl       getVisibility__20J2DAnmVisibilityFullCFUsPUc
	lbz      r0, 8(r1)
	cmplwi   r0, 0
	beq      lbl_80058D3C
	li       r0, 1
	stb      r0, 0xb0(r28)
	b        lbl_80058D44

lbl_80058D3C:
	li       r0, 0
	stb      r0, 0xb0(r28)

lbl_80058D44:
	lwz      r3, 0x1a0(r28)
	cmplwi   r3, 0
	beq      lbl_80058E18
	lhz      r31, 0x10(r3)
	li       r30, 0
	b        lbl_80058E0C

lbl_80058D5C:
	clrlwi   r7, r30, 0x18
	li       r0, 1
	lbz      r3, 0x1a4(r28)
	slw      r0, r0, r7
	and.     r0, r3, r0
	beq      lbl_80058E08
	rlwinm   r3, r30, 1, 0x17, 0x1e
	li       r5, 0
	addi     r8, r3, 0x170
	b        lbl_80058DFC

lbl_80058D84:
	lwz      r3, 0x1a0(r28)
	rlwinm   r0, r5, 3, 0xd, 0x1c
	li       r10, 0
	lwz      r6, 0x14(r3)
	lwz      r4, 0x1c(r3)
	add      r6, r6, r0
	lwz      r0, 4(r6)
	lhz      r6, 0(r6)
	slwi     r0, r0, 1
	add      r9, r4, r0
	b        lbl_80058DEC

lbl_80058DB0:
	rlwinm   r0, r10, 1, 0xf, 0x1e
	lhzx     r4, r28, r8
	lhzx     r0, r9, r0
	cmplw    r4, r0
	bne      lbl_80058DE8
	lwz      r12, 0(r3)
	slwi     r4, r7, 2
	addi     r6, r4, 0x150
	lwz      r12, 0x10(r12)
	li       r4, 0
	add      r6, r28, r6
	mtctr    r12
	bctrl
	b        lbl_80058E08

lbl_80058DE8:
	addi     r10, r10, 1

lbl_80058DEC:
	clrlwi   r0, r10, 0x10
	cmplw    r0, r6
	blt      lbl_80058DB0
	addi     r5, r5, 1

lbl_80058DFC:
	clrlwi   r0, r5, 0x10
	cmplw    r0, r31
	blt      lbl_80058D84

lbl_80058E08:
	addi     r30, r30, 1

lbl_80058E0C:
	clrlwi   r0, r30, 0x18
	cmplwi   r0, 4
	blt      lbl_80058D5C

lbl_80058E18:
	mr       r3, r28
	mr       r4, r29
	bl       animationPane__7J2DPaneFPC15J2DAnmTransform
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
 * Address:	80058E44
 * Size:	000104
 */
u8 J2DPictureEx::getUsableTlut(u8)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	clrlwi   r31, r4, 0x18
	li       r29, 0
	li       r28, 0
	lwz      r3, 0x168(r3)
	lwz      r30, 0x28(r3)
	b        lbl_80058EF0

lbl_80058E70:
	lwz      r3, 0x168(r27)
	clrlwi   r4, r28, 0x18
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xa0(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r28, 0x18
	cmplw    r0, r31
	beq      lbl_80058EEC
	cmplwi   r3, 0
	beq      lbl_80058EEC
	lwz      r4, 0x20(r3)
	cmplwi   r4, 0
	beq      lbl_80058EEC
	lbz      r0, 8(r4)
	cmplwi   r0, 0
	beq      lbl_80058EEC
	lbz      r3, 0x3a(r3)
	li       r0, 0
	cmpwi    r3, 0x10
	blt      lbl_80058ECC
	li       r0, 0x10

lbl_80058ECC:
	subf     r0, r0, r3
	clrlwi   r3, r0, 0x18
	cmplwi   r3, 8
	bge      lbl_80058EEC
	li       r0, 1
	slw      r0, r0, r3
	or       r0, r29, r0
	clrlwi   r29, r0, 0x18

lbl_80058EEC:
	addi     r28, r28, 1

lbl_80058EF0:
	clrlwi   r0, r28, 0x18
	cmplw    r0, r30
	blt      lbl_80058E70
	clrlwi   r5, r29, 0x18
	li       r3, 0
	li       r4, 1
	b        lbl_80058F24

lbl_80058F0C:
	clrlwi   r0, r3, 0x18
	slw      r0, r4, r0
	and.     r0, r5, r0
	bne      lbl_80058F20
	b        lbl_80058F34

lbl_80058F20:
	addi     r3, r3, 1

lbl_80058F24:
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 8
	blt      lbl_80058F0C
	li       r3, 0

lbl_80058F34:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80058F48
 * Size:	000008
 */
J2DMaterial* J2DPictureEx::getMaterial() const
{
	return _168;
	/*
	lwz      r3, 0x168(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80058F50
 * Size:	000030
 * prepend__12J2DPictureExFP10JUTTexturef
 */
bool J2DPictureEx::prepend(JUTTexture* texture, float p2) { return insert(texture, 0, p2); }

/*
 * --INFO--
 * Address:	80058F80
 * Size:	000030
 */
bool J2DPictureEx::prepend(const char*, JUTPalette*, float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r6, 0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0xd0(r12)
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
 * Address:	80058FB0
 * Size:	000030
 */
bool J2DPictureEx::prepend(const char*, float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0xcc(r12)
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
 * Address:	80058FE0
 * Size:	000030
 */
bool J2DPictureEx::prepend(const ResTIMG*, JUTPalette*, float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r6, 0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0xc8(r12)
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
 * Address:	80059010
 * Size:	000030
 */
bool J2DPictureEx::prepend(const ResTIMG*, float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0xc4(r12)
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
 * Address:	80059040
 * Size:	000034
 */
bool J2DPictureEx::insert(const char*, unsigned char, float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r6, r5
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0xd0(r12)
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
 * Address:	80059074
 * Size:	000034
 */
bool J2DPictureEx::insert(const ResTIMG*, unsigned char, float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r6, r5
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0xc8(r12)
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
 * Address:	800590A8
 * Size:	000040
 * draw__12J2DPictureExFffbbb
 */
void J2DPictureEx::draw(float p1, float p2, bool p3, bool p4, bool p5) { draw(p1, p2, 0, p3, p4, p5); }

/*
 * --INFO--
 * Address:	800590E8
 * Size:	000064
 * drawOut__12J2DPictureExFffffffff
 */
void J2DPictureEx::drawOut(float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8)
{
	drawOut(JGeometry::TBox2f(p1, p2, p1 + p3, p2 + p4), JGeometry::TBox2f(p5, p6, p5 + p7, p6 + p8));
}

/*
 * --INFO--
 * Address:	8005914C
 * Size:	000034
 */
void J2DPictureEx::load(unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r4
	clrlwi   r4, r4, 0x18
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0xfc(r12)
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
 * Address:	80059180
 * Size:	00003C
 */
void J2DPictureEx::setCullBack(bool)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	clrlwi.  r0, r4, 0x18
	li       r4, 0
	beq      lbl_8005919C
	li       r4, 2

lbl_8005919C:
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
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
 * Address:	800591BC
 * Size:	000020
 */
bool J2DPictureEx::isUsed(const ResFONT*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       isUsed__7J2DPaneFPC7ResFONT
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800591DC
 * Size:	000020
 */
void J2DPictureEx::setAnimation(J2DAnmTransform*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       setAnimation__7J2DPaneFP15J2DAnmTransform
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800591FC
 * Size:	000020
 */
void J2DPictureEx::setAnimation(J2DAnmBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       setAnimation__7J2DPaneFP10J2DAnmBase
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
