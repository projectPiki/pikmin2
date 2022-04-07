#include "JSystem/JUtility.h"
#include "types.h"
#include "JSystem/JUT/JUTFont.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__7JUTFont
    __vt__7JUTFont:
        .4byte 0
        .4byte 0
        .4byte __dt__7JUTFontFv
        .4byte 0
        .4byte setGX__7JUTFontFQ28JUtility6TColorQ28JUtility6TColor
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte getCellWidth__7JUTFontCFv
        .4byte getCellHeight__7JUTFontCFv
        .4byte 0
        .4byte 0
        .4byte 0
*/

/*
 * --INFO--
 * Address:	8002D144
 * Size:	00002C
 * Matches
 */
JUTFont::JUTFont()
    : _0C()
    , _10()
    , _14()
    , _18()
{
	_04 = 0;
}

/*
 * --INFO--
 * Address:	8002D170
 * Size:	00004C
 * Matches
 */
void JUTFont::initialize_state()
{
	setCharColor(JUtility::TColor());
	_05 = 0;
	_08 = 0;
	_04 = 0;
}

/*
 * --INFO--
 * Address:	8002D1BC
 * Size:	000054
 * Matches
 */
void JUTFont::setCharColor(JUtility::TColor color)
{
	_0C.channels.r = color.channels.r;
	_0C.channels.g = color.channels.g;
	_0C.channels.b = color.channels.b;
	_0C.channels.a = color.channels.a;
	_10.channels.r = color.channels.r;
	_10.channels.g = color.channels.g;
	_10.channels.b = color.channels.b;
	_10.channels.a = color.channels.a;
	_14.channels.r = color.channels.r;
	_14.channels.g = color.channels.g;
	_14.channels.b = color.channels.b;
	_14.channels.a = color.channels.a;
	_18.channels.r = color.channels.r;
	_18.channels.g = color.channels.g;
	_18.channels.b = color.channels.b;
	_18.channels.a = color.channels.a;
}

/*
 * --INFO--
 * Address:	8002D210
 * Size:	000064
 * Matches
 */
void JUTFont::setGradColor(JUtility::TColor color, JUtility::TColor color2)
{
	_0C.channels.r = color.channels.r;
	_0C.channels.g = color.channels.g;
	_0C.channels.b = color.channels.b;
	_0C.channels.a = color.channels.a;
	_10.channels.r = color.channels.r;
	_10.channels.g = color.channels.g;
	_10.channels.b = color.channels.b;
	_10.channels.a = color.channels.a;
	_14.channels.r = color2.channels.r;
	_14.channels.g = color2.channels.g;
	_14.channels.b = color2.channels.b;
	_14.channels.a = color2.channels.a;
	_18.channels.r = color2.channels.r;
	_18.channels.g = color2.channels.g;
	_18.channels.b = color2.channels.b;
	_18.channels.a = color2.channels.a;
}

/*
 * --INFO--
 * Address:	8002D274
 * Size:	000118
 */
void JUTFont::drawString_size_scale(f32, f32, f32, f32, const char* str, u32, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stfd      f31, 0x60(r1)
	  psq_st    f31,0x68(r1),0,0
	  stfd      f30, 0x50(r1)
	  psq_st    f30,0x58(r1),0,0
	  stfd      f29, 0x40(r1)
	  psq_st    f29,0x48(r1),0,0
	  stfd      f28, 0x30(r1)
	  psq_st    f28,0x38(r1),0,0
	  stfd      f27, 0x20(r1)
	  psq_st    f27,0x28(r1),0,0
	  stmw      r27, 0xC(r1)
	  fmr       f27, f1
	  mr        r27, r3
	  fmr       f28, f2
	  mr        r28, r4
	  fmr       f29, f3
	  mr        r29, r5
	  fmr       f30, f4
	  mr        r30, r6
	  fmr       f31, f27
	  b         .loc_0xD0

	.loc_0x60:
	  lwz       r12, 0x0(r27)
	  mr        r3, r27
	  lbz       r4, 0x0(r28)
	  lwz       r12, 0x40(r12)
	  mr        r31, r4
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x94
	  lbzu      r0, 0x1(r28)
	  rlwinm    r31,r31,8,0,23
	  subi      r29, r29, 0x1
	  or        r31, r31, r0

	.loc_0x94:
	  mr        r3, r27
	  fmr       f1, f27
	  lwz       r12, 0x0(r27)
	  fmr       f2, f28
	  fmr       f3, f29
	  mr        r4, r31
	  lwz       r12, 0x14(r12)
	  fmr       f4, f30
	  mr        r5, r30
	  mtctr     r12
	  bctrl
	  fadds     f27, f27, f1
	  li        r30, 0x1
	  subi      r29, r29, 0x1
	  addi      r28, r28, 0x1

	.loc_0xD0:
	  cmplwi    r29, 0
	  bne+      .loc_0x60
	  fsubs     f1, f27, f31
	  psq_l     f31,0x68(r1),0,0
	  lfd       f31, 0x60(r1)
	  psq_l     f30,0x58(r1),0,0
	  lfd       f30, 0x50(r1)
	  psq_l     f29,0x48(r1),0,0
	  lfd       f29, 0x40(r1)
	  psq_l     f28,0x38(r1),0,0
	  lfd       f28, 0x30(r1)
	  psq_l     f27,0x28(r1),0,0
	  lfd       f27, 0x20(r1)
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002D38C
 * Size:	000048
 * JUTFont::~JUTFont()
 * Weak function.
 */

/*
 * --INFO--
 * Address:	8002D3D4
 * Size:	00002C
 * void JUTFont::setGX(JUtility::TColor, JUtility::TColor)
 * Weak function.
 */

/*
 * --INFO--
 * Address:	8002D400
 * Size:	00002C
 * Weak function.
 * u16 JUTFont::getCellWidth() const
 */

/*
 * --INFO--
 * Address:	8002D42C
 * Size:	00002C
 * Weak function.
 * u16 JUTFont::getCellHeight() const
 */
