#include "og/Screen/callbackNodes.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048F6B0
    lbl_8048F6B0:
        .4byte 0x7467615F
        .4byte 0x33645F61
        .4byte 0x6E696D5F
        .4byte 0x6F746168
        .4byte 0x2E626C6F
        .4byte 0x00000000
    .global lbl_8048F6C8
    lbl_8048F6C8:
        .4byte 0x7467615F
        .4byte 0x33645F61
        .4byte 0x6E696D5F
        .4byte 0x6F746168
        .4byte 0x2E627470
        .4byte 0x00000000
    .global lbl_8048F6E0
    lbl_8048F6E0:
        .4byte 0x7467615F
        .4byte 0x33645F61
        .4byte 0x6E696D5F
        .4byte 0x6F746168
        .4byte 0x5F33322E
        .4byte 0x626C6F00
    .global lbl_8048F6F8
    lbl_8048F6F8:
        .4byte 0x7467615F
        .4byte 0x33645F61
        .4byte 0x6E696D5F
        .4byte 0x6F746168
        .4byte 0x5F33322E
        .4byte 0x62747000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og6Screen16CallBack_Picture
    __vt__Q32og6Screen16CallBack_Picture:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32og6Screen16CallBack_PictureFv
        .4byte getChildCount__5CNodeFv
        .4byte update__Q32og6Screen16CallBack_PictureFv
        .4byte draw__Q32og6Screen16CallBack_PictureFR8GraphicsR14J2DGrafContext
        .4byte doInit__Q29P2DScreen4NodeFv
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051DF60
    lbl_8051DF60:
        .4byte 0x00000000
    .global lbl_8051DF64
    lbl_8051DF64:
        .float 0.25
    .global lbl_8051DF68
    lbl_8051DF68:
        .4byte 0x41A80000
    .global lbl_8051DF6C
    lbl_8051DF6C:
        .4byte 0x42200000
    .global lbl_8051DF70
    lbl_8051DF70:
        .4byte 0x41A00000
        .4byte 0x00000000
*/

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
CallBack_Picture::CallBack_Picture(P2DScreen::Mgr*, unsigned long long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8032CE18
 * Size:	000060
 */
void CallBack_Picture::update(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
lwz      r0, 0x1c(r3)
cmplwi   r0, 0
beq      lbl_8032CE64
lwz      r3, 0x34(r31)
cmplwi   r3, 0
beq      lbl_8032CE48
bl       update__Q32og6Screen9AnimGroupFv

lbl_8032CE48:
lwz      r3, 0x1c(r31)
bl       animation__9J2DScreenFv
lwz      r3, 0x1c(r31)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl

lbl_8032CE64:
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	8032CE78
 * Size:	0002BC
 */
void CallBack_Picture::draw(Graphics&, J2DGrafContext&)
{
	/*
stwu     r1, -0xd0(r1)
mflr     r0
stw      r0, 0xd4(r1)
stmw     r23, 0xac(r1)
mr       r29, r3
mr       r25, r4
mr       r24, r5
lwz      r0, 0x1c(r3)
cmplwi   r0, 0
beq      lbl_8032D120
lwz      r3, 0x20(r29)
lwz      r4, 0x24(r29)
lwz      r12, 0(r3)
lfs      f3, 0x28(r4)
lfs      f1, 0x20(r4)
lfs      f2, 0x2c(r4)
lfs      f0, 0x24(r4)
fsubs    f1, f3, f1
lwz      r12, 0x18(r12)
fsubs    f2, f2, f0
mtctr    r12
bctrl
lfs      f1, 0x28(r29)
addi     r3, r1, 0x78
lwz      r4, 0x24(r29)
fmr      f2, f1
lfs      f3, lbl_8051DF60@sda21(r2)
addi     r23, r4, 0x80
bl       PSMTXScale
addi     r4, r1, 0x78
mr       r3, r23
mr       r5, r4
bl       PSMTXConcat
lfs      f1, 0x2c(r29)
addi     r3, r1, 0x48
lfs      f2, 0x30(r29)
lfs      f3, lbl_8051DF60@sda21(r2)
bl       PSMTXTrans
mr       r5, r23
addi     r3, r1, 0x78
addi     r4, r1, 0x48
bl       PSMTXConcat
lwz      r4, 0x20(r29)
mr       r3, r23
addi     r4, r4, 0x50
bl       PSMTXCopy
lwz      r30, 0x24(r29)
addi     r3, r1, 0x20
lwz      r31, 0x20(r29)
mr       r4, r30
lwz      r12, 0(r30)
lwz      r12, 0x138(r12)
mtctr    r12
bctrl
lwz      r0, 0x20(r1)
mr       r3, r31
addi     r4, r1, 0x24
stw      r0, 0x24(r1)
lwz      r12, 0(r31)
lwz      r12, 0x12c(r12)
mtctr    r12
bctrl
mr       r4, r30
addi     r3, r1, 0x18
lwz      r12, 0(r30)
lwz      r12, 0x134(r12)
mtctr    r12
bctrl
lwz      r0, 0x18(r1)
mr       r3, r31
addi     r4, r1, 0x1c
stw      r0, 0x1c(r1)
lwz      r12, 0(r31)
lwz      r12, 0x128(r12)
mtctr    r12
bctrl
mr       r3, r31
lbz      r4, 0xb2(r30)
lwz      r12, 0(r31)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
li       r23, -1
lbz      r0, 0x150(r30)
stw      r23, 0x38(r1)
mr       r4, r25
lbz      r7, 0x151(r30)
mr       r5, r24
lbz      r6, 0x152(r30)
lbz      r3, 0x153(r30)
stb      r0, 0x38(r1)
lbz      r0, 0x154(r30)
stb      r7, 0x39(r1)
lbz      r24, 0x155(r30)
stw      r23, 0x3c(r1)
lbz      r25, 0x156(r30)
lbz      r8, 0x157(r30)
stb      r6, 0x3a(r1)
lbz      r26, 0x158(r30)
stb      r3, 0x3b(r1)
lbz      r27, 0x159(r30)
lwz      r9, 0x38(r1)
stw      r23, 0x40(r1)
lbz      r28, 0x15a(r30)
stw      r9, 8(r1)
lbz      r7, 0x15b(r30)
lbz      r12, 0x15c(r30)
lbz      r11, 0x15d(r30)
lbz      r10, 0x15e(r30)
lbz      r6, 0x15f(r30)
stw      r23, 0x44(r1)
lbz      r3, 8(r1)
stb      r0, 0x3c(r1)
lbz      r0, 9(r1)
stb      r3, 0x150(r31)
lbz      r3, 0xa(r1)
stb      r0, 0x151(r31)
lbz      r0, 0xb(r1)
stb      r3, 0x152(r31)
stb      r24, 0x3d(r1)
stb      r25, 0x3e(r1)
stb      r8, 0x3f(r1)
lwz      r8, 0x3c(r1)
stb      r0, 0x153(r31)
stw      r8, 0xc(r1)
lbz      r3, 0xc(r1)
stb      r26, 0x40(r1)
lbz      r0, 0xd(r1)
stb      r3, 0x154(r31)
lbz      r3, 0xe(r1)
stb      r0, 0x155(r31)
lbz      r0, 0xf(r1)
stb      r3, 0x156(r31)
stb      r27, 0x41(r1)
stb      r28, 0x42(r1)
stb      r7, 0x43(r1)
lwz      r7, 0x40(r1)
stb      r0, 0x157(r31)
stw      r7, 0x10(r1)
lbz      r3, 0x10(r1)
stb      r12, 0x44(r1)
lbz      r0, 0x11(r1)
stb      r3, 0x158(r31)
lbz      r3, 0x12(r1)
stb      r0, 0x159(r31)
lbz      r0, 0x13(r1)
stb      r3, 0x15a(r31)
stb      r11, 0x45(r1)
stb      r10, 0x46(r1)
stb      r6, 0x47(r1)
lwz      r6, 0x44(r1)
stb      r0, 0x15b(r31)
stw      r6, 0x14(r1)
lbz      r3, 0x14(r1)
lbz      r0, 0x15(r1)
stb      r3, 0x15c(r31)
lbz      r3, 0x16(r1)
stb      r0, 0x15d(r31)
lbz      r0, 0x17(r1)
stb      r3, 0x15e(r31)
stb      r0, 0x15f(r31)
lwz      r3, 0x1c(r29)
stw      r9, 0x28(r1)
lwz      r12, 0(r3)
stw      r8, 0x2c(r1)
lwz      r12, 0x9c(r12)
stw      r7, 0x30(r1)
stw      r6, 0x34(r1)
mtctr    r12
bctrl

lbl_8032D120:
lmw      r23, 0xac(r1)
lwz      r0, 0xd4(r1)
mtlr     r0
addi     r1, r1, 0xd0
blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D4
 */
void setCallBack_Picture(JKRArchive*, char*, unsigned long long, P2DScreen::Mgr*, unsigned long long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8032D134
 * Size:	00011C
 */
void setCallBack_3DStick(JKRArchive*, P2DScreen::Mgr*, unsigned long long)
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stmw     r26, 8(r1)
mr       r31, r3
mr       r26, r4
mr       r28, r5
mr       r27, r6
li       r3, 0x138
bl       __nw__FUl
or.      r30, r3, r3
beq      lbl_8032D16C
bl       __ct__Q29P2DScreen3MgrFv
mr       r30, r3

lbl_8032D16C:
lis      r4, lbl_8048F6B0@ha
mr       r3, r30
addi     r4, r4, lbl_8048F6B0@l
mr       r6, r31
lis      r5, 4
bl       set__9J2DScreenFPCcUlP10JKRArchive
li       r3, 0x38
bl       __nw__FUl
or.      r29, r3, r3
beq      lbl_8032D1BC
lis      r5, 0x6133646C@ha
mr       r4, r30
addi     r6, r5, 0x6133646C@l
li       r5, 0x6f74
bl       __ct__Q32og6Screen15CallBack_ScreenFPQ29P2DScreen3MgrUx
lis      r3, __vt__Q32og6Screen16CallBack_Picture@ha
li       r0, 0
addi     r3, r3, __vt__Q32og6Screen16CallBack_Picture@l
stw      r3, 0(r29)
stw      r0, 0x34(r29)

lbl_8032D1BC:
mr       r3, r26
mr       r6, r27
mr       r5, r28
bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
li       r0, 0
mr       r6, r27
stb      r0, 0xb0(r3)
mr       r5, r28
mr       r7, r29
stw      r3, 0x24(r29)
mr       r3, r26
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
mr       r3, r29
bl       getPartsScreen__Q32og6Screen15CallBack_ScreenFv
mr       r0, r3
li       r3, 0x1c
mr       r28, r0
bl       __nw__FUl
or.      r30, r3, r3
beq      lbl_8032D218
li       r4, 1
bl       __ct__Q32og6Screen9AnimGroupFi
mr       r30, r3

lbl_8032D218:
lis      r3, lbl_8048F6C8@ha
lfs      f1, lbl_8051DF64@sda21(r2)
addi     r6, r3, lbl_8048F6C8@l
mr       r4, r31
mr       r3, r30
mr       r5, r28
bl
registAnimGroupScreen__Q22og6ScreenFPQ32og6Screen9AnimGroupP10JKRArchiveP9J2DScreenPcf
stw      r30, 0x34(r29)
mr       r3, r29
lmw      r26, 8(r1)
lwz      r0, 0x24(r1)
mtlr     r0
addi     r1, r1, 0x20
blr
	*/
}

/*
 * --INFO--
 * Address:	8032D250
 * Size:	00011C
 */
void setCallBack_3DStickSmall(JKRArchive*, P2DScreen::Mgr*, unsigned long long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r31, r3
	  mr        r26, r4
	  mr        r28, r5
	  mr        r27, r6
	  li        r3, 0x138
	  bl        -0x3093D0
	  mr.       r30, r3
	  beq-      .loc_0x38
	  bl        0x107840
	  mr        r30, r3

	.loc_0x38:
	  lis       r4, 0x8049
	  mr        r3, r30
	  subi      r4, r4, 0x920
	  mr        r6, r31
	  lis       r5, 0x4
	  bl        -0x2EDC78
	  li        r3, 0x38
	  bl        -0x309400
	  mr.       r29, r3
	  beq-      .loc_0x88
	  lis       r5, 0x6133
	  mr        r4, r30
	  addi      r6, r5, 0x6473
	  li        r5, 0x6F74
	  bl        -0x21F50
	  lis       r3, 0x804E
	  li        r0, 0
	  subi      r3, r3, 0x5EC8
	  stw       r3, 0x0(r29)
	  stw       r0, 0x34(r29)

	.loc_0x88:
	  mr        r3, r26
	  mr        r6, r27
	  mr        r5, r28
	  bl        -0x2A438
	  li        r0, 0
	  mr        r6, r27
	  stb       r0, 0xB0(r3)
	  mr        r5, r28
	  mr        r7, r29
	  stw       r3, 0x24(r29)
	  mr        r3, r26
	  bl        0x107820
	  mr        r3, r29
	  bl        -0x21EF8
	  mr        r0, r3
	  li        r3, 0x1C
	  mr        r28, r0
	  bl        -0x309478
	  mr.       r30, r3
	  beq-      .loc_0xE4
	  li        r4, 0x1
	  bl        -0x27ED4
	  mr        r30, r3

	.loc_0xE4:
	  lis       r3, 0x8049
	  lfs       f1, -0x3FC(r2)
	  subi      r6, r3, 0x908
	  mr        r4, r31
	  mr        r3, r30
	  mr        r5, r28
	  bl        -0x279B4
	  stw       r30, 0x34(r29)
	  mr        r3, r29
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00011C
 */
void setCallBack_CStick(JKRArchive*, P2DScreen::Mgr*, unsigned long long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00011C
 */
void setCallBack_CStickSmall(JKRArchive*, P2DScreen::Mgr*, unsigned long long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void startCB_StickAnimAll(og::Screen::CallBack_Picture*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void startCB_StickAnimUp(og::Screen::CallBack_Picture*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void startCB_StickAnimDown(og::Screen::CallBack_Picture*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8032D36C
 * Size:	000010
 */
StickAnimMgr::StickAnimMgr(og::Screen::CallBack_Picture*)
{
	/*
stw      r4, 0(r3)
li       r0, 0
stw      r0, 4(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void StickAnimMgr::stickStop(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8032D37C
 * Size:	0000D4
 */
void StickAnimMgr::stickUp(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
stw      r30, 8(r1)
mr       r30, r3
lwz      r0, 4(r3)
cmpwi    r0, 1
beq      lbl_8032D438
lwz      r3, 0(r30)
lwz      r31, 0x34(r3)
mr       r3, r31
bl       getFrame__Q32og6Screen9AnimGroupFv
lwz      r0, 4(r30)
cmpwi    r0, 3
beq      lbl_8032D3E4
bge      lbl_8032D418
cmpwi    r0, 2
bge      lbl_8032D3CC
b        lbl_8032D418

lbl_8032D3CC:
lfs      f1, lbl_8051DF70@sda21(r2)
mr       r3, r31
lfs      f2, lbl_8051DF68@sda21(r2)
lfs      f3, lbl_8051DF6C@sda21(r2)
bl       reservAnim__Q32og6Screen9AnimGroupFfff
b        lbl_8032D430

lbl_8032D3E4:
lfs      f2, lbl_8051DF68@sda21(r2)
fcmpo    cr0, f1, f2
bge      lbl_8032D404
lfs      f1, lbl_8051DF70@sda21(r2)
mr       r3, r31
lfs      f3, lbl_8051DF6C@sda21(r2)
bl       reservAnim__Q32og6Screen9AnimGroupFfff
b        lbl_8032D430

lbl_8032D404:
lfs      f1, lbl_8051DF6C@sda21(r2)
mr       r3, r31
fmr      f3, f1
bl       reservAnim__Q32og6Screen9AnimGroupFfff
b        lbl_8032D430

lbl_8032D418:
lfs      f1, lbl_8051DF68@sda21(r2)
mr       r3, r31
lfs      f2, lbl_8051DF6C@sda21(r2)
bl       setArea__Q32og6Screen9AnimGroupFff
mr       r3, r31
bl       start__Q32og6Screen9AnimGroupFv

lbl_8032D430:
li       r0, 1
stw      r0, 4(r30)

lbl_8032D438:
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
 * Address:	8032D450
 * Size:	0000E8
 */
void StickAnimMgr::stickDown(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
stw      r30, 8(r1)
mr       r30, r3
lwz      r0, 4(r3)
cmpwi    r0, 2
beq      lbl_8032D520
lwz      r3, 0(r30)
lwz      r31, 0x34(r3)
mr       r3, r31
bl       getFrame__Q32og6Screen9AnimGroupFv
lwz      r0, 4(r30)
cmpwi    r0, 2
beq      lbl_8032D500
bge      lbl_8032D4A0
cmpwi    r0, 1
bge      lbl_8032D4AC
b        lbl_8032D500

lbl_8032D4A0:
cmpwi    r0, 4
bge      lbl_8032D500
b        lbl_8032D4C4

lbl_8032D4AC:
lfs      f1, lbl_8051DF6C@sda21(r2)
mr       r3, r31
lfs      f2, lbl_8051DF60@sda21(r2)
lfs      f3, lbl_8051DF70@sda21(r2)
bl       reservAnim__Q32og6Screen9AnimGroupFfff
b        lbl_8032D518

lbl_8032D4C4:
lfs      f0, lbl_8051DF68@sda21(r2)
fcmpo    cr0, f1, f0
bge      lbl_8032D4E8
lfs      f1, lbl_8051DF70@sda21(r2)
mr       r3, r31
lfs      f2, lbl_8051DF60@sda21(r2)
fmr      f3, f1
bl       reservAnim__Q32og6Screen9AnimGroupFfff
b        lbl_8032D518

lbl_8032D4E8:
lfs      f1, lbl_8051DF6C@sda21(r2)
mr       r3, r31
lfs      f2, lbl_8051DF60@sda21(r2)
lfs      f3, lbl_8051DF70@sda21(r2)
bl       reservAnim__Q32og6Screen9AnimGroupFfff
b        lbl_8032D518

lbl_8032D500:
lfs      f1, lbl_8051DF60@sda21(r2)
mr       r3, r31
lfs      f2, lbl_8051DF70@sda21(r2)
bl       setArea__Q32og6Screen9AnimGroupFff
mr       r3, r31
bl       start__Q32og6Screen9AnimGroupFv

lbl_8032D518:
li       r0, 2
stw      r0, 4(r30)

lbl_8032D520:
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
 * Address:	8032D538
 * Size:	0000BC
 */
void StickAnimMgr::stickUpDown(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
stw      r30, 8(r1)
mr       r30, r3
lwz      r0, 4(r3)
cmpwi    r0, 3
beq      lbl_8032D5DC
lwz      r3, 0(r30)
lwz      r31, 0x34(r3)
mr       r3, r31
bl       getFrame__Q32og6Screen9AnimGroupFv
lwz      r3, 0(r30)
lwz      r3, 0x34(r3)
bl       getLastFrame__Q32og6Screen9AnimGroupFv
lwz      r0, 4(r30)
cmpwi    r0, 2
beq      lbl_8032D5AC
bge      lbl_8032D5C4
cmpwi    r0, 1
bge      lbl_8032D594
b        lbl_8032D5C4

lbl_8032D594:
fmr      f3, f1
lfs      f1, lbl_8051DF6C@sda21(r2)
lfs      f2, lbl_8051DF60@sda21(r2)
mr       r3, r31
bl       reservAnim__Q32og6Screen9AnimGroupFfff
b        lbl_8032D5D4

lbl_8032D5AC:
fmr      f3, f1
lfs      f1, lbl_8051DF70@sda21(r2)
lfs      f2, lbl_8051DF60@sda21(r2)
mr       r3, r31
bl       reservAnim__Q32og6Screen9AnimGroupFfff
b        lbl_8032D5D4

lbl_8032D5C4:
mr       r3, r31
bl       setAllArea__Q32og6Screen9AnimGroupFv
mr       r3, r31
bl       start__Q32og6Screen9AnimGroupFv

lbl_8032D5D4:
li       r0, 3
stw      r0, 4(r30)

lbl_8032D5DC:
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
 * Address:	8032D5F4
 * Size:	000090
 */
CallBack_Picture::~CallBack_Picture(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_8032D668
lis      r4, __vt__Q32og6Screen16CallBack_Picture@ha
addi     r0, r4, __vt__Q32og6Screen16CallBack_Picture@l
stw      r0, 0(r30)
beq      lbl_8032D658
lis      r4, __vt__Q32og6Screen15CallBack_Screen@ha
addi     r0, r4, __vt__Q32og6Screen15CallBack_Screen@l
stw      r0, 0(r30)
beq      lbl_8032D658
lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r4, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0(r30)
beq      lbl_8032D658
lis      r5, __vt__Q29P2DScreen4Node@ha
li       r4, 0
addi     r0, r5, __vt__Q29P2DScreen4Node@l
stw      r0, 0(r30)
bl       __dt__5CNodeFv

lbl_8032D658:
extsh.   r0, r31
ble      lbl_8032D668
mr       r3, r30
bl       __dl__FPv

lbl_8032D668:
lwz      r0, 0x14(r1)
mr       r3, r30
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}
} // namespace Screen
} // namespace og
