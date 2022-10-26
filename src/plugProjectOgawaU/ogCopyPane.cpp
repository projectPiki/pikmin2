#include "types.h"
#include "og/Screen/ogScreen.h"

/*
    Generated from dpostproc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051D738
    lbl_8051D738:
        .4byte 0x00000000
    .global lbl_8051D73C
    lbl_8051D73C:
        .float 0.5
*/

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	8030E958
 * Size:	0002F8
 */
J2DPictureEx* CopyPicture(J2DPictureEx*, unsigned long long)
{
	/*
stwu     r1, -0xa0(r1)
mflr     r0
li       r4, 0
stw      r0, 0xa4(r1)
stmw     r20, 0x70(r1)
mr       r26, r3
mr       r28, r5
mr       r27, r6
lwz      r12, 0(r3)
lwz      r12, 0x120(r12)
mtctr    r12
bctrl
mr       r4, r26
lwz      r31, 0x20(r3)
lwz      r12, 0(r26)
addi     r3, r1, 0x24
lwz      r12, 0x138(r12)
mtctr    r12
bctrl
mr       r4, r26
lwz      r0, 0x24(r1)
lwz      r12, 0(r26)
addi     r3, r1, 0x20
stw      r0, 0x2c(r1)
lwz      r12, 0x134(r12)
mtctr    r12
bctrl
lfs      f3, 0x28(r26)
li       r0, -1
lfs      f2, 0x20(r26)
li       r3, 0x1a8
lfs      f1, 0x2c(r26)
lfs      f0, 0x24(r26)
fsubs    f3, f3, f2
lfs      f2, lbl_8051D738@sda21(r2)
fsubs    f0, f1, f0
lbz      r30, 0xb2(r26)
fadds    f1, f2, f3
lwz      r20, 0x20(r1)
stfs     f2, 0x60(r1)
fadds    f0, f2, f0
stfs     f2, 0x64(r1)
stfs     f1, 0x68(r1)
stfs     f0, 0x6c(r1)
stw      r0, 0x50(r1)
lbz      r21, 0x150(r26)
lbz      r22, 0x151(r26)
lbz      r23, 0x152(r26)
lbz      r24, 0x153(r26)
stw      r0, 0x54(r1)
lbz      r25, 0x154(r26)
lbz      r29, 0x155(r26)
lbz      r12, 0x156(r26)
lbz      r11, 0x157(r26)
stw      r0, 0x58(r1)
lbz      r10, 0x158(r26)
lbz      r9, 0x159(r26)
lbz      r8, 0x15a(r26)
lbz      r7, 0x15b(r26)
stw      r0, 0x5c(r1)
lbz      r6, 0x15c(r26)
lbz      r5, 0x15d(r26)
lbz      r4, 0x15e(r26)
lbz      r0, 0x15f(r26)
stw      r20, 0x28(r1)
stb      r21, 0x50(r1)
stb      r22, 0x51(r1)
stb      r23, 0x52(r1)
stb      r24, 0x53(r1)
stb      r25, 0x54(r1)
stb      r29, 0x55(r1)
stb      r12, 0x56(r1)
stb      r11, 0x57(r1)
stb      r10, 0x58(r1)
stb      r9, 0x59(r1)
stb      r8, 0x5a(r1)
stb      r7, 0x5b(r1)
stb      r6, 0x5c(r1)
stb      r5, 0x5d(r1)
stb      r4, 0x5e(r1)
stb      r0, 0x5f(r1)
bl       __nw__FUl
or.      r29, r3, r3
beq      lbl_8030EAC4
mr       r6, r27
mr       r5, r28
mr       r8, r31
addi     r7, r1, 0x60
lis      r9, 0x110
bl       "__ct__12J2DPictureExFUxRCQ29JGeometry8TBox2<f>PC7ResTIMGUl"
mr       r29, r3

lbl_8030EAC4:
cmplwi   r29, 0
beq      lbl_8030EC38
mr       r3, r29
li       r4, 0
bl       setBasePosition__7J2DPaneF15J2DBasePosition
mr       r3, r29
addi     r4, r1, 0x60
bl       "place__7J2DPaneFRCQ29JGeometry8TBox2<f>"
lwz      r0, 0x2c(r1)
mr       r3, r29
addi     r4, r1, 0x1c
stw      r0, 0x1c(r1)
lwz      r12, 0(r29)
lwz      r12, 0x12c(r12)
mtctr    r12
bctrl
lwz      r0, 0x28(r1)
mr       r3, r29
addi     r4, r1, 0x18
stw      r0, 0x18(r1)
lwz      r12, 0(r29)
lwz      r12, 0x128(r12)
mtctr    r12
bctrl
lwz      r10, 0x50(r1)
mr       r3, r29
lwz      r9, 0x54(r1)
mr       r4, r30
stw      r10, 8(r1)
lwz      r8, 0x58(r1)
lbz      r5, 8(r1)
stw      r9, 0xc(r1)
lbz      r0, 9(r1)
stb      r5, 0x150(r29)
lbz      r5, 0xa(r1)
stb      r0, 0x151(r29)
lbz      r0, 0xb(r1)
stb      r5, 0x152(r29)
lbz      r5, 0xc(r1)
stb      r0, 0x153(r29)
lbz      r0, 0xd(r1)
stb      r5, 0x154(r29)
lbz      r5, 0xe(r1)
stb      r0, 0x155(r29)
lbz      r0, 0xf(r1)
stw      r8, 0x10(r1)
lwz      r7, 0x5c(r1)
stb      r5, 0x156(r29)
lbz      r5, 0x10(r1)
stb      r0, 0x157(r29)
lbz      r0, 0x11(r1)
stb      r5, 0x158(r29)
lbz      r6, 0x12(r1)
stw      r7, 0x14(r1)
lbz      r5, 0x13(r1)
stb      r0, 0x159(r29)
lbz      r0, 0x14(r1)
stb      r6, 0x15a(r29)
lbz      r6, 0x15(r1)
stb      r5, 0x15b(r29)
lbz      r5, 0x16(r1)
stb      r0, 0x15c(r29)
lbz      r0, 0x17(r1)
stb      r6, 0x15d(r29)
stb      r5, 0x15e(r29)
stb      r0, 0x15f(r29)
lwz      r12, 0(r29)
stw      r10, 0x30(r1)
lwz      r12, 0x24(r12)
stw      r9, 0x34(r1)
stw      r8, 0x38(r1)
stw      r7, 0x3c(r1)
mtctr    r12
bctrl
lha      r0, 0x112(r26)
addi     r4, r1, 0x40
mr       r3, r29
sth      r0, 0x40(r1)
lha      r0, 0x114(r26)
sth      r0, 0x42(r1)
lha      r0, 0x116(r26)
sth      r0, 0x44(r1)
lha      r0, 0x118(r26)
sth      r0, 0x46(r1)
lha      r0, 0x11a(r26)
sth      r0, 0x48(r1)
lha      r0, 0x11c(r26)
sth      r0, 0x4a(r1)
lha      r0, 0x11e(r26)
sth      r0, 0x4c(r1)
lha      r0, 0x120(r26)
sth      r0, 0x4e(r1)
bl       "setTexCoord__10J2DPictureFPCQ29JGeometry8TVec2<s>"

lbl_8030EC38:
mr       r3, r29
lmw      r20, 0x70(r1)
lwz      r0, 0xa4(r1)
mtlr     r0
addi     r1, r1, 0xa0
blr
	*/
}

/*
 * --INFO--
 * Address:	8030EC50
 * Size:	000338
 */
J2DPictureEx* CopyPictureToPane(J2DPictureEx*, J2DPane*, float, float, u64)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xD0(r1)
	  mflr      r0
	  stw       r0, 0xD4(r1)
	  stfd      f31, 0xC0(r1)
	  psq_st    f31,0xC8(r1),0,0
	  stfd      f30, 0xB0(r1)
	  psq_st    f30,0xB8(r1),0,0
	  stmw      r19, 0x7C(r1)
	  lwz       r12, 0x0(r3)
	  mr        r26, r4
	  fmr       f30, f1
	  mr        r25, r3
	  lwz       r12, 0x120(r12)
	  fmr       f31, f2
	  mr        r28, r5
	  mr        r27, r6
	  li        r4, 0
	  mtctr     r12
	  bctrl
	  mr        r4, r25
	  lwz       r31, 0x20(r3)
	  lwz       r12, 0x0(r25)
	  addi      r3, r1, 0x24
	  lwz       r12, 0x138(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r25
	  lwz       r0, 0x24(r1)
	  lwz       r12, 0x0(r25)
	  addi      r3, r1, 0x20
	  stw       r0, 0x2C(r1)
	  lwz       r12, 0x134(r12)
	  mtctr     r12
	  bctrl
	  lfs       f3, 0x28(r25)
	  li        r0, -0x1
	  lfs       f0, 0x20(r25)
	  li        r3, 0x1A8
	  lfs       f2, 0x2C(r25)
	  lfs       f1, 0x24(r25)
	  fsubs     f3, f3, f0
	  lfs       f0, -0xC24(r2)
	  fsubs     f2, f2, f1
	  lwz       r19, 0x20(r1)
	  fnmsubs   f4, f3, f0, f30
	  lbz       r30, 0xB2(r25)
	  stw       r0, 0x50(r1)
	  fnmsubs   f5, f2, f0, f31
	  fadds     f1, f4, f3
	  stfs      f4, 0x60(r1)
	  fadds     f0, f5, f2
	  stfs      f5, 0x64(r1)
	  stfs      f1, 0x68(r1)
	  stfs      f0, 0x6C(r1)
	  lbz       r20, 0x150(r25)
	  lbz       r21, 0x151(r25)
	  lbz       r22, 0x152(r25)
	  lbz       r23, 0x153(r25)
	  stw       r0, 0x54(r1)
	  lbz       r24, 0x154(r25)
	  lbz       r29, 0x155(r25)
	  lbz       r12, 0x156(r25)
	  lbz       r11, 0x157(r25)
	  stw       r0, 0x58(r1)
	  lbz       r10, 0x158(r25)
	  lbz       r9, 0x159(r25)
	  lbz       r8, 0x15A(r25)
	  lbz       r7, 0x15B(r25)
	  stw       r0, 0x5C(r1)
	  lbz       r6, 0x15C(r25)
	  lbz       r5, 0x15D(r25)
	  lbz       r4, 0x15E(r25)
	  lbz       r0, 0x15F(r25)
	  stw       r19, 0x28(r1)
	  stb       r20, 0x50(r1)
	  stb       r21, 0x51(r1)
	  stb       r22, 0x52(r1)
	  stb       r23, 0x53(r1)
	  stb       r24, 0x54(r1)
	  stb       r29, 0x55(r1)
	  stb       r12, 0x56(r1)
	  stb       r11, 0x57(r1)
	  stb       r10, 0x58(r1)
	  stb       r9, 0x59(r1)
	  stb       r8, 0x5A(r1)
	  stb       r7, 0x5B(r1)
	  stb       r6, 0x5C(r1)
	  stb       r5, 0x5D(r1)
	  stb       r4, 0x5E(r1)
	  stb       r0, 0x5F(r1)
	  bl        -0x2EAF14
	  mr.       r29, r3
	  beq-      .loc_0x190
	  mr        r6, r27
	  mr        r5, r28
	  mr        r8, r31
	  addi      r7, r1, 0x60
	  lis       r9, 0x110
	  bl        -0x2B9DAC
	  mr        r29, r3

	.loc_0x190:
	  cmplwi    r29, 0
	  beq-      .loc_0x310
	  mr        r3, r26
	  mr        r4, r29
	  bl        -0x2D772C
	  mr        r3, r29
	  li        r4, 0x4
	  bl        -0x2D6140
	  mr        r3, r29
	  addi      r4, r1, 0x60
	  bl        -0x2D6ED0
	  lwz       r0, 0x2C(r1)
	  mr        r3, r29
	  addi      r4, r1, 0x1C
	  stw       r0, 0x1C(r1)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x12C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x28(r1)
	  mr        r3, r29
	  addi      r4, r1, 0x18
	  stw       r0, 0x18(r1)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x128(r12)
	  mtctr     r12
	  bctrl
	  lwz       r10, 0x50(r1)
	  mr        r3, r29
	  lwz       r9, 0x54(r1)
	  mr        r4, r30
	  stw       r10, 0x8(r1)
	  lwz       r8, 0x58(r1)
	  lbz       r5, 0x8(r1)
	  stw       r9, 0xC(r1)
	  lbz       r0, 0x9(r1)
	  stb       r5, 0x150(r29)
	  lbz       r5, 0xA(r1)
	  stb       r0, 0x151(r29)
	  lbz       r0, 0xB(r1)
	  stb       r5, 0x152(r29)
	  lbz       r5, 0xC(r1)
	  stb       r0, 0x153(r29)
	  lbz       r0, 0xD(r1)
	  stb       r5, 0x154(r29)
	  lbz       r5, 0xE(r1)
	  stb       r0, 0x155(r29)
	  lbz       r0, 0xF(r1)
	  stw       r8, 0x10(r1)
	  lwz       r7, 0x5C(r1)
	  stb       r5, 0x156(r29)
	  lbz       r5, 0x10(r1)
	  stb       r0, 0x157(r29)
	  lbz       r0, 0x11(r1)
	  stb       r5, 0x158(r29)
	  lbz       r6, 0x12(r1)
	  stw       r7, 0x14(r1)
	  lbz       r5, 0x13(r1)
	  stb       r0, 0x159(r29)
	  lbz       r0, 0x14(r1)
	  stb       r6, 0x15A(r29)
	  lbz       r6, 0x15(r1)
	  stb       r5, 0x15B(r29)
	  lbz       r5, 0x16(r1)
	  stb       r0, 0x15C(r29)
	  lbz       r0, 0x17(r1)
	  stb       r6, 0x15D(r29)
	  stb       r5, 0x15E(r29)
	  stb       r0, 0x15F(r29)
	  lwz       r12, 0x0(r29)
	  stw       r10, 0x30(r1)
	  lwz       r12, 0x24(r12)
	  stw       r9, 0x34(r1)
	  stw       r8, 0x38(r1)
	  stw       r7, 0x3C(r1)
	  mtctr     r12
	  bctrl
	  lha       r0, 0x112(r25)
	  addi      r4, r1, 0x40
	  mr        r3, r29
	  sth       r0, 0x40(r1)
	  lha       r0, 0x114(r25)
	  sth       r0, 0x42(r1)
	  lha       r0, 0x116(r25)
	  sth       r0, 0x44(r1)
	  lha       r0, 0x118(r25)
	  sth       r0, 0x46(r1)
	  lha       r0, 0x11A(r25)
	  sth       r0, 0x48(r1)
	  lha       r0, 0x11C(r25)
	  sth       r0, 0x4A(r1)
	  lha       r0, 0x11E(r25)
	  sth       r0, 0x4C(r1)
	  lha       r0, 0x120(r25)
	  sth       r0, 0x4E(r1)
	  bl        -0x2D2138

	.loc_0x310:
	  mr        r3, r29
	  psq_l     f31,0xC8(r1),0,0
	  lfd       f31, 0xC0(r1)
	  psq_l     f30,0xB8(r1),0,0
	  lfd       f30, 0xB0(r1)
	  lmw       r19, 0x7C(r1)
	  lwz       r0, 0xD4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xD0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00080C
 */
void CopyTreeToPaneSub(J2DPane*, J2DPane*, bool, unsigned long long*, unsigned short*)
{
	// UNUSED FUNCTION
}

} // namespace Screen
} // namespace og

/*
 * --INFO--
 * Address:	........
 * Size:	000170
 */
void J2DMaterial::operator=(const J2DMaterial&)
{
	// UNUSED FUNCTION
}

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void CopyTreeToPane(J2DPane*, J2DPane*, unsigned long long)
{
	// UNUSED FUNCTION
}
} // namespace Screen
} // namespace og
