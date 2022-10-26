#include "og/Screen/callbackNodes.h"
#include "og/Screen/ogScreen.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048DFE0
    lbl_8048DFE0:
        .asciz "anim_text.blo"
        .skip 2
    .global lbl_8048DFF0
    lbl_8048DFF0:
        .asciz "anim_text.bck"
        .skip 2
    .global lbl_8048E000
    lbl_8048E000:
        .asciz "ogAnimTextScreen.cpp"
        .skip 3
    .global lbl_8048E018
    lbl_8048E018:
        .asciz "ColorType ERR!!\n"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og6Screen15AnimText_Screen
    __vt__Q32og6Screen15AnimText_Screen:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32og6Screen15AnimText_ScreenFv
        .4byte getChildCount__5CNodeFv
        .4byte update__Q32og6Screen15AnimText_ScreenFv
        .4byte draw__Q32og6Screen15CallBack_ScreenFR8GraphicsR14J2DGrafContext
        .4byte doInit__Q29P2DScreen4NodeFv
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051D640
    lbl_8051D640:
        .4byte 0x00000000
    .global lbl_8051D644
    lbl_8051D644:
        .4byte 0x00000000
    .global lbl_8051D648
    lbl_8051D648:
        .float 1.0
    .global lbl_8051D64C
    lbl_8051D64C:
        .float 0.1
    .global lbl_8051D650
    lbl_8051D650:
        .4byte 0x40C90FDB
    .global lbl_8051D654
    lbl_8051D654:
        .4byte 0xC3A2F983
    .global lbl_8051D658
    lbl_8051D658:
        .4byte 0x43A2F983
    .global lbl_8051D65C
    lbl_8051D65C:
        .float 0.5
    .global lbl_8051D660
    lbl_8051D660:
        .4byte 0x40400000
    .global lbl_8051D664
    lbl_8051D664:
        .float 0.05
    .global lbl_8051D668
    lbl_8051D668:
        .4byte 0x437F0000
    .global lbl_8051D66C
    lbl_8051D66C:
        .4byte 0xBF800000
*/

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	803087B8
 * Size:	000134
 */
void setAnimTextScreen(JKRArchive*, P2DScreen::Mgr*, unsigned long long)
{
	/*
stwu     r1, -0x30(r1)
mflr     r0
stw      r0, 0x34(r1)
stmw     r25, 0x14(r1)
mr       r28, r3
mr       r29, r4
mr       r31, r5
mr       r30, r6
li       r3, 0x138
bl       __nw__FUl
or.      r26, r3, r3
beq      lbl_803087F0
bl       __ct__Q29P2DScreen3MgrFv
mr       r26, r3

lbl_803087F0:
lis      r4, lbl_8048DFE0@ha
mr       r3, r26
addi     r4, r4, lbl_8048DFE0@l
mr       r6, r28
lis      r5, 4
bl       set__9J2DScreenFPCcUlP10JKRArchive
mr       r3, r29
mr       r6, r30
mr       r5, r31
bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
mr       r27, r3
addi     r4, r2, lbl_8051D640@sda21
crclr    6
bl       setString__10J2DTextBoxFPCce
li       r0, 0
li       r3, 0xb8
stb      r0, 0xb0(r27)
bl       __nw__FUl
or.      r25, r3, r3
beq      lbl_80308858
lis      r5, 0x6F696E74@ha
mr       r4, r26
addi     r6, r5, 0x6F696E74@l
li       r5, 0x6a
bl       __ct__Q32og6Screen15AnimText_ScreenFPQ29P2DScreen3MgrUx
mr       r25, r3

lbl_80308858:
stw      r27, 0x24(r25)
mr       r3, r25
lwz      r5, 0x18(r27)
lwz      r6, 0x1c(r27)
bl       setText__Q32og6Screen15AnimText_ScreenFUx
li       r3, 0x44
bl       __nw__FUl
or.      r27, r3, r3
beq      lbl_80308884
bl       __ct__Q32og6Screen10AnimScreenFv
mr       r27, r3

lbl_80308884:
lis      r4, lbl_8048DFF0@ha
mr       r3, r27
addi     r6, r4, lbl_8048DFF0@l
mr       r5, r26
mr       r4, r28
bl       init__Q32og6Screen10AnimScreenFP10JKRArchiveP9J2DScreenPc
mr       r3, r25
mr       r4, r27
bl setAnimScreen__Q32og6Screen15AnimText_ScreenFPQ32og6Screen10AnimScreen mr
r3, r29 mr       r6, r30 mr       r5, r31 mr       r7, r25 bl
addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node mr       r3, r26 bl
setCallBackMessage__Q22og6ScreenFPQ29P2DScreen3Mgr li       r0, 0 mr       r3,
r25 stb      r0, 0x38(r27) bl       stop__Q32og6Screen15AnimText_ScreenFv mr r3,
r25 lmw      r25, 0x14(r1) lwz      r0, 0x34(r1) mtlr     r0 addi     r1, r1,
0x30 blr
	*/
}

/*
 * --INFO--
 * Address:	803088EC
 * Size:	00013C
 */
void setMenuScreen(JKRArchive*, P2DScreen::Mgr*, unsigned long long)
{
	/*
stwu     r1, -0x30(r1)
mflr     r0
stw      r0, 0x34(r1)
stmw     r25, 0x14(r1)
mr       r28, r3
mr       r29, r4
mr       r31, r5
mr       r30, r6
li       r3, 0x138
bl       __nw__FUl
or.      r26, r3, r3
beq      lbl_80308924
bl       __ct__Q29P2DScreen3MgrFv
mr       r26, r3

lbl_80308924:
lis      r4, lbl_8048DFE0@ha
mr       r3, r26
addi     r4, r4, lbl_8048DFE0@l
mr       r6, r28
lis      r5, 4
bl       set__9J2DScreenFPCcUlP10JKRArchive
mr       r3, r29
mr       r6, r30
mr       r5, r31
bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
mr       r27, r3
addi     r4, r2, lbl_8051D640@sda21
crclr    6
bl       setString__10J2DTextBoxFPCce
li       r0, 0
li       r3, 0xb8
stb      r0, 0xb0(r27)
bl       __nw__FUl
or.      r25, r3, r3
beq      lbl_8030898C
lis      r5, 0x6F696E74@ha
mr       r4, r26
addi     r6, r5, 0x6F696E74@l
li       r5, 0x6a
bl       __ct__Q32og6Screen15AnimText_ScreenFPQ29P2DScreen3MgrUx
mr       r25, r3

lbl_8030898C:
stw      r27, 0x24(r25)
mr       r3, r25
lwz      r5, 0x18(r27)
lwz      r6, 0x1c(r27)
bl       setText__Q32og6Screen15AnimText_ScreenFUx
li       r3, 0x44
bl       __nw__FUl
or.      r27, r3, r3
beq      lbl_803089B8
bl       __ct__Q32og6Screen10AnimScreenFv
mr       r27, r3

lbl_803089B8:
lis      r4, lbl_8048DFF0@ha
mr       r3, r27
addi     r6, r4, lbl_8048DFF0@l
mr       r5, r26
mr       r4, r28
bl       init__Q32og6Screen10AnimScreenFP10JKRArchiveP9J2DScreenPc
mr       r3, r25
mr       r4, r27
bl setAnimScreen__Q32og6Screen15AnimText_ScreenFPQ32og6Screen10AnimScreen mr
r3, r29 mr       r6, r30 mr       r5, r31 mr       r7, r25 bl
addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node mr       r3, r26 bl
setCallBackMessage__Q22og6ScreenFPQ29P2DScreen3Mgr li       r0, 0 mr       r3,
r25 stb      r0, 0x38(r27) bl       stop__Q32og6Screen15AnimText_ScreenFv li r0,
1 mr       r3, r25 stw      r0, 0x34(r25) lmw      r25, 0x14(r1) lwz      r0,
0x34(r1) mtlr     r0 addi     r1, r1, 0x30 blr
	*/
}

/*
 * --INFO--
 * Address:	80308A28
 * Size:	00013C
 */
void setMenuTitleScreen(JKRArchive*, P2DScreen::Mgr*, unsigned long long)
{
	/*
stwu     r1, -0x30(r1)
mflr     r0
stw      r0, 0x34(r1)
stmw     r25, 0x14(r1)
mr       r28, r3
mr       r29, r4
mr       r31, r5
mr       r30, r6
li       r3, 0x138
bl       __nw__FUl
or.      r26, r3, r3
beq      lbl_80308A60
bl       __ct__Q29P2DScreen3MgrFv
mr       r26, r3

lbl_80308A60:
lis      r4, lbl_8048DFE0@ha
mr       r3, r26
addi     r4, r4, lbl_8048DFE0@l
mr       r6, r28
lis      r5, 4
bl       set__9J2DScreenFPCcUlP10JKRArchive
mr       r3, r29
mr       r6, r30
mr       r5, r31
bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
mr       r27, r3
addi     r4, r2, lbl_8051D640@sda21
crclr    6
bl       setString__10J2DTextBoxFPCce
li       r0, 0
li       r3, 0xb8
stb      r0, 0xb0(r27)
bl       __nw__FUl
or.      r25, r3, r3
beq      lbl_80308AC8
lis      r5, 0x6F696E74@ha
mr       r4, r26
addi     r6, r5, 0x6F696E74@l
li       r5, 0x6a
bl       __ct__Q32og6Screen15AnimText_ScreenFPQ29P2DScreen3MgrUx
mr       r25, r3

lbl_80308AC8:
stw      r27, 0x24(r25)
mr       r3, r25
lwz      r5, 0x18(r27)
lwz      r6, 0x1c(r27)
bl       setText__Q32og6Screen15AnimText_ScreenFUx
li       r3, 0x44
bl       __nw__FUl
or.      r27, r3, r3
beq      lbl_80308AF4
bl       __ct__Q32og6Screen10AnimScreenFv
mr       r27, r3

lbl_80308AF4:
lis      r4, lbl_8048DFF0@ha
mr       r3, r27
addi     r6, r4, lbl_8048DFF0@l
mr       r5, r26
mr       r4, r28
bl       init__Q32og6Screen10AnimScreenFP10JKRArchiveP9J2DScreenPc
mr       r3, r25
mr       r4, r27
bl setAnimScreen__Q32og6Screen15AnimText_ScreenFPQ32og6Screen10AnimScreen mr
r3, r29 mr       r6, r30 mr       r5, r31 mr       r7, r25 bl
addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node mr       r3, r26 bl
setCallBackMessage__Q22og6ScreenFPQ29P2DScreen3Mgr li       r0, 0 mr       r3,
r25 stb      r0, 0x38(r27) bl       stop__Q32og6Screen15AnimText_ScreenFv li r0,
3 mr       r3, r25 stw      r0, 0x34(r25) lmw      r25, 0x14(r1) lwz      r0,
0x34(r1) mtlr     r0 addi     r1, r1, 0x30 blr
	*/
}

/*
 * --INFO--
 * Address:	80308B64
 * Size:	000228
 */
AnimText_Screen::AnimText_Screen(P2DScreen::Mgr*, unsigned long long)
{
	/*
stwu     r1, -0x50(r1)
mflr     r0
stw      r0, 0x54(r1)
stw      r31, 0x4c(r1)
mr       r31, r3
stw      r30, 0x48(r1)
mr       r30, r4
stw      r29, 0x44(r1)
mr       r29, r6
stw      r28, 0x40(r1)
mr       r28, r5
bl       __ct__Q32og6Screen15CallBack_ScreenFPQ29P2DScreen3MgrUx
lis      r3, __vt__Q32og6Screen15AnimText_Screen@ha
li       r0, -1
addi     r3, r3, __vt__Q32og6Screen15AnimText_Screen@l
stw      r3, 0(r31)
stw      r0, 0x70(r31)
stw      r0, 0x74(r31)
stw      r0, 0x78(r31)
stw      r0, 0x7c(r31)
stw      r0, 0x80(r31)
stw      r0, 0x84(r31)
stw      r0, 0x88(r31)
stw      r0, 0x8c(r31)
stw      r0, 0x90(r31)
stw      r0, 0x94(r31)
stw      r0, 0x98(r31)
stw      r0, 0x9c(r31)
stw      r0, 0xa0(r31)
stw      r0, 0xa4(r31)
stw      r0, 0xa8(r31)
stw      r0, 0xac(r31)
stw      r0, 0xb0(r31)
lwz      r0, 0x20(r31)
cmplwi   r0, 0
bne      lbl_80308C04
mr       r4, r29
mr       r3, r28
addi     r5, r1, 0x28
bl       TagToName__Q22og6ScreenFUxPc

lbl_80308C04:
li       r0, 0
lis      r5, 0x626F6479@ha
stw      r0, 0x38(r31)
lis      r4, 0x6D73675F@ha
mr       r3, r30
addi     r6, r5, 0x626F6479@l
stb      r0, 0x3c(r31)
addi     r5, r4, 0x6D73675F@l
stw      r0, 0x40(r31)
stw      r0, 0x44(r31)
stb      r0, 0x48(r31)
stw      r0, 0x54(r31)
stw      r0, 0x50(r31)
bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
stw      r3, 0x40(r31)
lis      r5, 0x6261636B@ha
lis      r4, 0x6D73675F@ha
mr       r3, r30
addi     r6, r5, 0x6261636B@l
addi     r5, r4, 0x6D73675F@l
bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
stw      r3, 0x44(r31)
li       r8, 0
lfs      f1, lbl_8051D644@sda21(r2)
addi     r28, r31, 0x90
lfs      f0, lbl_8051D648@sda21(r2)
addi     r29, r31, 0x94
stfs     f1, 0x58(r31)
addi     r30, r31, 0xa4
addi     r12, r31, 0xa8
addi     r11, r31, 0xac
stfs     f1, 0x5c(r31)
addi     r0, r31, 0xb0
addi     r3, r31, 0x70
addi     r4, r31, 0x74
stfs     f0, 0x60(r31)
addi     r5, r31, 0x78
addi     r6, r31, 0x7c
addi     r7, r31, 0x80
stb      r8, 0x68(r31)
addi     r8, r31, 0x84
addi     r9, r31, 0x88
addi     r10, r31, 0x8c
stfs     f0, 0x6c(r31)
stw      r28, 8(r1)
stw      r29, 0xc(r1)
stw      r30, 0x10(r1)
stw      r12, 0x14(r1)
stw      r11, 0x18(r1)
stw      r0, 0x1c(r1)
bl
getMenuColor__Q42og9newScreen13ObjSMenuPause9ObjHIOValFPQ28JUtility6TColorPQ28JUtility6TColorPQ28JUtility6TColorPQ28JUtility6TColorPQ28JUtility6TColorPQ28JUtility6TColorPQ28JUtility6TColorPQ28JUtility6TColorPQ28JUtility6TColorPQ28JUtility6TColorPQ28JUtility6TColorPQ28JUtility6TColorPQ28JUtility6TColorPQ28JUtility6TColor
lwz      r4, 0x44(r31)
addi     r3, r1, 0x24
lwz      r12, 0(r4)
lwz      r12, 0xb4(r12)
mtctr    r12
bctrl
lbz      r0, 0x24(r1)
addi     r3, r1, 0x20
stb      r0, 0x98(r31)
lbz      r0, 0x25(r1)
stb      r0, 0x99(r31)
lbz      r0, 0x26(r1)
stb      r0, 0x9a(r31)
lbz      r0, 0x27(r1)
stb      r0, 0x9b(r31)
lwz      r4, 0x44(r31)
lwz      r12, 0(r4)
lwz      r12, 0xb0(r12)
mtctr    r12
bctrl
lbz      r4, 0x20(r1)
li       r0, 0
mr       r3, r31
stb      r4, 0x9c(r31)
lbz      r4, 0x21(r1)
stb      r4, 0x9d(r31)
lbz      r4, 0x22(r1)
stb      r4, 0x9e(r31)
lbz      r4, 0x23(r1)
stb      r4, 0x9f(r31)
lbz      r4, 0x80(r31)
stb      r4, 0xa0(r31)
lbz      r4, 0x81(r31)
stb      r4, 0xa1(r31)
lbz      r4, 0x82(r31)
stb      r4, 0xa2(r31)
lbz      r4, 0x83(r31)
stb      r4, 0xa3(r31)
stw      r0, 0x34(r31)
lwz      r31, 0x4c(r1)
lwz      r30, 0x48(r1)
lwz      r29, 0x44(r1)
lwz      r28, 0x40(r1)
lwz      r0, 0x54(r1)
mtlr     r0
addi     r1, r1, 0x50
blr
	*/
}

/*
 * --INFO--
 * Address:	80308D8C
 * Size:	000080
 */
CallBack_Screen::~CallBack_Screen(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_80308DF0
lis      r4, __vt__Q32og6Screen15CallBack_Screen@ha
addi     r0, r4, __vt__Q32og6Screen15CallBack_Screen@l
stw      r0, 0(r30)
beq      lbl_80308DE0
lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r4, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0(r30)
beq      lbl_80308DE0
lis      r5, __vt__Q29P2DScreen4Node@ha
li       r4, 0
addi     r0, r5, __vt__Q29P2DScreen4Node@l
stw      r0, 0(r30)
bl       __dt__5CNodeFv

lbl_80308DE0:
extsh.   r0, r31
ble      lbl_80308DF0
mr       r3, r30
bl       __dl__FPv

lbl_80308DF0:
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
 * Address:	80308E0C
 * Size:	00060C
 */
void AnimText_Screen::update(void)
{
	/*
stwu     r1, -0x70(r1)
mflr     r0
stw      r0, 0x74(r1)
stmw     r26, 0x58(r1)
mr       r31, r3
bl       update__Q32og6Screen15CallBack_ScreenFv
lwz      r3, 0x38(r31)
cmplwi   r3, 0
beq      lbl_803093FC
bl       update__Q32og6Screen12AnimBaseBaseFv
stb      r3, 0x3c(r31)
lbz      r0, 0x48(r31)
cmplwi   r0, 0
beq      lbl_80308EA0
lwz      r5, 0x50(r31)
li       r4, 0
lwz      r6, 0x54(r31)
xor      r0, r5, r4
xor      r3, r6, r4
or.      r0, r3, r0
beq      lbl_80308E90
lbz      r0, 0x3c(r31)
cmplwi   r0, 0
bne      lbl_80308EA0
mr       r3, r31
bl       setText__Q32og6Screen15AnimText_ScreenFUx
li       r0, 0
lfs      f1, lbl_8051D644@sda21(r2)
stw      r0, 0x54(r31)
mr       r3, r31
stw      r0, 0x50(r31)
bl       open__Q32og6Screen15AnimText_ScreenFf
b        lbl_80308EA0

lbl_80308E90:
lbz      r0, 0x3c(r31)
cmplwi   r0, 0
bne      lbl_80308EA0
stb      r4, 0x48(r31)

lbl_80308EA0:
lwz      r0, 0x34(r31)
li       r3, -1
stw      r3, 0x38(r1)
cmpwi    r0, 2
lwz      r26, 0x24(r31)
stw      r3, 0x34(r1)
stw      r3, 0x30(r1)
stw      r3, 0x2c(r1)
beq      lbl_8030901C
bge      lbl_80308ED8
cmpwi    r0, 0
beq      lbl_80308EE4
bge      lbl_80308F98
b        lbl_80309124

lbl_80308ED8:
cmpwi    r0, 4
bge      lbl_80309124
b        lbl_803090A0

lbl_80308EE4:
mr       r4, r26
addi     r3, r1, 0x20
lwz      r12, 0(r26)
lwz      r12, 0xb4(r12)
mtctr    r12
bctrl
mr       r4, r26
lbz      r7, 0x20(r1)
lwz      r12, 0(r26)
addi     r3, r1, 0x1c
lbz      r6, 0x21(r1)
lbz      r5, 0x22(r1)
lbz      r0, 0x23(r1)
lwz      r12, 0xb0(r12)
stb      r7, 0x38(r1)
stb      r6, 0x39(r1)
stb      r5, 0x3a(r1)
stb      r0, 0x3b(r1)
mtctr    r12
bctrl
lbz      r26, 0x1c(r1)
lbz      r12, 0x1d(r1)
lbz      r11, 0x1e(r1)
lbz      r10, 0x1f(r1)
lbz      r9, 0x98(r31)
lbz      r8, 0x99(r31)
lbz      r7, 0x9a(r31)
lbz      r6, 0x9b(r31)
lbz      r5, 0x9c(r31)
lbz      r4, 0x9d(r31)
lbz      r3, 0x9e(r31)
lbz      r0, 0x9f(r31)
stb      r26, 0x34(r1)
stb      r12, 0x35(r1)
stb      r11, 0x36(r1)
stb      r10, 0x37(r1)
stb      r9, 0x30(r1)
stb      r8, 0x31(r1)
stb      r7, 0x32(r1)
stb      r6, 0x33(r1)
stb      r5, 0x2c(r1)
stb      r4, 0x2d(r1)
stb      r3, 0x2e(r1)
stb      r0, 0x2f(r1)
b        lbl_80309140

lbl_80308F98:
lbz      r30, 0x80(r31)
lbz      r29, 0x81(r31)
lbz      r28, 0x82(r31)
lbz      r27, 0x83(r31)
lbz      r26, 0x84(r31)
lbz      r12, 0x85(r31)
lbz      r11, 0x86(r31)
lbz      r10, 0x87(r31)
lbz      r9, 0x88(r31)
lbz      r8, 0x89(r31)
lbz      r7, 0x8a(r31)
lbz      r6, 0x8b(r31)
lbz      r5, 0x8c(r31)
lbz      r4, 0x8d(r31)
lbz      r3, 0x8e(r31)
lbz      r0, 0x8f(r31)
stb      r30, 0x38(r1)
stb      r29, 0x39(r1)
stb      r28, 0x3a(r1)
stb      r27, 0x3b(r1)
stb      r26, 0x34(r1)
stb      r12, 0x35(r1)
stb      r11, 0x36(r1)
stb      r10, 0x37(r1)
stb      r9, 0x30(r1)
stb      r8, 0x31(r1)
stb      r7, 0x32(r1)
stb      r6, 0x33(r1)
stb      r5, 0x2c(r1)
stb      r4, 0x2d(r1)
stb      r3, 0x2e(r1)
stb      r0, 0x2f(r1)
b        lbl_80309140

lbl_8030901C:
lbz      r30, 0x70(r31)
lbz      r29, 0x71(r31)
lbz      r28, 0x72(r31)
lbz      r27, 0x73(r31)
lbz      r26, 0x74(r31)
lbz      r12, 0x75(r31)
lbz      r11, 0x76(r31)
lbz      r10, 0x77(r31)
lbz      r9, 0x90(r31)
lbz      r8, 0x91(r31)
lbz      r7, 0x92(r31)
lbz      r6, 0x93(r31)
lbz      r5, 0x94(r31)
lbz      r4, 0x95(r31)
lbz      r3, 0x96(r31)
lbz      r0, 0x97(r31)
stb      r30, 0x38(r1)
stb      r29, 0x39(r1)
stb      r28, 0x3a(r1)
stb      r27, 0x3b(r1)
stb      r26, 0x34(r1)
stb      r12, 0x35(r1)
stb      r11, 0x36(r1)
stb      r10, 0x37(r1)
stb      r9, 0x30(r1)
stb      r8, 0x31(r1)
stb      r7, 0x32(r1)
stb      r6, 0x33(r1)
stb      r5, 0x2c(r1)
stb      r4, 0x2d(r1)
stb      r3, 0x2e(r1)
stb      r0, 0x2f(r1)
b        lbl_80309140

lbl_803090A0:
lbz      r26, 0xa4(r31)
lbz      r27, 0xa5(r31)
lbz      r28, 0xa6(r31)
lbz      r29, 0xa7(r31)
lbz      r30, 0xa8(r31)
lbz      r12, 0xa9(r31)
lbz      r11, 0xaa(r31)
lbz      r10, 0xab(r31)
lbz      r9, 0xac(r31)
lbz      r8, 0xad(r31)
lbz      r7, 0xae(r31)
lbz      r6, 0xaf(r31)
lbz      r5, 0xb0(r31)
lbz      r4, 0xb1(r31)
lbz      r3, 0xb2(r31)
lbz      r0, 0xb3(r31)
stb      r26, 0x38(r1)
stb      r27, 0x39(r1)
stb      r28, 0x3a(r1)
stb      r29, 0x3b(r1)
stb      r30, 0x34(r1)
stb      r12, 0x35(r1)
stb      r11, 0x36(r1)
stb      r10, 0x37(r1)
stb      r9, 0x30(r1)
stb      r8, 0x31(r1)
stb      r7, 0x32(r1)
stb      r6, 0x33(r1)
stb      r5, 0x2c(r1)
stb      r4, 0x2d(r1)
stb      r3, 0x2e(r1)
stb      r0, 0x2f(r1)
b        lbl_80309140

lbl_80309124:
lis      r3, lbl_8048E000@ha
lis      r5, lbl_8048E018@ha
addi     r3, r3, lbl_8048E000@l
li       r4, 0xe5
addi     r5, r5, lbl_8048E018@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_80309140:
lwz      r0, 0x34(r1)
addi     r4, r1, 0x18
stw      r0, 0x18(r1)
lwz      r3, 0x40(r31)
lwz      r12, 0(r3)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl
lwz      r0, 0x30(r1)
addi     r4, r1, 0x14
stw      r0, 0x14(r1)
lwz      r3, 0x44(r31)
lwz      r12, 0(r3)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0x2c(r1)
addi     r4, r1, 0x10
stw      r0, 0x10(r1)
lwz      r3, 0x44(r31)
lwz      r12, 0(r3)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl
lbz      r0, 0x68(r31)
cmplwi   r0, 0
beq      lbl_80309380
lfs      f0, 0x5c(r31)
lfs      f2, lbl_8051D644@sda21(r2)
fcmpo    cr0, f0, f2
ble      lbl_803092B4
lwz      r3, sys@sda21(r13)
lfs      f1, 0x58(r31)
lfs      f0, 0x54(r3)
fadds    f0, f1, f0
stfs     f0, 0x58(r31)
lfs      f1, 0x58(r31)
lfs      f0, 0x5c(r31)
fcmpo    cr0, f1, f0
cror     2, 1, 2
bne      lbl_803091E8
stfs     f2, 0x58(r31)

lbl_803091E8:
lfs      f2, 0x60(r31)
lfs      f1, lbl_8051D644@sda21(r2)
fcmpo    cr0, f2, f1
ble      lbl_80309214
lfs      f0, lbl_8051D64C@sda21(r2)
fsubs    f0, f2, f0
stfs     f0, 0x60(r31)
lfs      f0, 0x60(r31)
fcmpo    cr0, f0, f1
bge      lbl_80309214
stfs     f1, 0x60(r31)

lbl_80309214:
lfs      f1, lbl_8051D650@sda21(r2)
lfs      f0, 0x58(r31)
lfs      f2, 0x5c(r31)
fmuls    f3, f1, f0
lfs      f0, lbl_8051D644@sda21(r2)
lfs      f4, 0x64(r31)
lfs      f1, lbl_8051D648@sda21(r2)
fdivs    f2, f3, f2
fcmpo    cr0, f2, f0
bge      lbl_80309268
lfs      f0, lbl_8051D654@sda21(r2)
lis      r3, sincosTable___5JMath@ha
addi     r3, r3, sincosTable___5JMath@l
fmuls    f0, f2, f0
fctiwz   f0, f0
stfd     f0, 0x40(r1)
lwz      r0, 0x44(r1)
rlwinm   r0, r0, 3, 0x12, 0x1c
lfsx     f0, r3, r0
fneg     f0, f0
b        lbl_8030928C

lbl_80309268:
lfs      f0, lbl_8051D658@sda21(r2)
lis      r3, sincosTable___5JMath@ha
addi     r3, r3, sincosTable___5JMath@l
fmuls    f0, f2, f0
fctiwz   f0, f0
stfd     f0, 0x48(r1)
lwz      r0, 0x4c(r1)
rlwinm   r0, r0, 3, 0x12, 0x1c
lfsx     f0, r3, r0

lbl_8030928C:
fadds    f3, f1, f0
lfs      f2, lbl_8051D65C@sda21(r2)
lfs      f1, 0x64(r31)
lfs      f0, lbl_8051D660@sda21(r2)
fmuls    f2, f3, f2
fsubs    f1, f2, f1
fdivs    f0, f1, f0
fadds    f0, f4, f0
stfs     f0, 0x64(r31)
b        lbl_803092E0

lbl_803092B4:
lfs      f2, 0x60(r31)
lfs      f1, lbl_8051D648@sda21(r2)
fcmpo    cr0, f2, f1
bge      lbl_803092E0
lfs      f0, lbl_8051D664@sda21(r2)
fadds    f0, f2, f0
stfs     f0, 0x60(r31)
lfs      f0, 0x60(r31)
fcmpo    cr0, f0, f1
ble      lbl_803092E0
stfs     f1, 0x60(r31)

lbl_803092E0:
li       r0, -1
lfs      f0, lbl_8051D644@sda21(r2)
stw      r0, 0x28(r1)
lfs      f1, 0x5c(r31)
fcmpo    cr0, f1, f0
ble      lbl_80309348
stw      r0, 0x24(r1)
addi     r3, r31, 0x78
addi     r4, r31, 0x7c
addi     r5, r1, 0x24
lfs      f1, 0x64(r31)
bl
blendColor__Q22og6ScreenFRQ28JUtility6TColorRQ28JUtility6TColorfPQ28JUtility6TColor
lfs      f1, 0x60(r31)
addi     r3, r1, 0x24
addi     r4, r31, 0x80
addi     r5, r1, 0x28
bl
blendColor__Q22og6ScreenFRQ28JUtility6TColorRQ28JUtility6TColorfPQ28JUtility6TColor
lbz      r0, 0x28(r1)
stb      r0, 0xa0(r31)
lbz      r0, 0x29(r1)
stb      r0, 0xa1(r31)
lbz      r0, 0x2a(r1)
stb      r0, 0xa2(r31)
lbz      r0, 0x2b(r1)
stb      r0, 0xa3(r31)
b        lbl_8030935C

lbl_80309348:
lfs      f1, 0x60(r31)
addi     r3, r31, 0xa0
addi     r4, r31, 0x80
addi     r5, r1, 0x28
bl
blendColor__Q22og6ScreenFRQ28JUtility6TColorRQ28JUtility6TColorfPQ28JUtility6TColor

lbl_8030935C:
lwz      r0, 0x28(r1)
addi     r4, r1, 0xc
stw      r0, 0xc(r1)
lwz      r3, 0x40(r31)
lwz      r12, 0(r3)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
b        lbl_803093A0

lbl_80309380:
lwz      r0, 0x38(r1)
addi     r4, r1, 8
stw      r0, 8(r1)
lwz      r3, 0x40(r31)
lwz      r12, 0(r3)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl

lbl_803093A0:
lfs      f1, lbl_8051D668@sda21(r2)
lfs      f0, 0x6c(r31)
lwz      r0, 0x34(r31)
fmuls    f0, f1, f0
cmpwi    r0, 2
fctiwz   f0, f0
stfd     f0, 0x48(r1)
lwz      r26, 0x4c(r1)
bne      lbl_803093C8
lbz      r26, 0x73(r31)

lbl_803093C8:
lwz      r3, 0x40(r31)
mr       r4, r26
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
lwz      r3, 0x44(r31)
mr       r4, r26
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
b        lbl_80309404

lbl_803093FC:
li       r0, 0
stb      r0, 0x3c(r31)

lbl_80309404:
lmw      r26, 0x58(r1)
lwz      r0, 0x74(r1)
mtlr     r0
addi     r1, r1, 0x70
blr
	*/
}

/*
 * --INFO--
 * Address:	80309418
 * Size:	000008
 */
void AnimText_Screen::setAnimScreen(og::Screen::AnimScreen* a1)
{
	// Generated from stw r4, 0x38(r3)
	_38 = a1;
}

/*
 * --INFO--
 * Address:	80309420
 * Size:	00001C
 */
void AnimText_Screen::setText(unsigned long long)
{
	/*
lwz      r4, 0x40(r3)
stw      r6, 0x1c(r4)
stw      r5, 0x18(r4)
lwz      r3, 0x44(r3)
stw      r6, 0x1c(r3)
stw      r5, 0x18(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void AnimText_Screen::setTextAnim(unsigned long long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030943C
 * Size:	000018
 */
void AnimText_Screen::stop(void)
{
	/*
lfs      f0, lbl_8051D644@sda21(r2)
lwz      r4, 0x38(r3)
stfs     f0, 0x20(r4)
lwz      r3, 0x38(r3)
stfs     f0, 0x18(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	80309454
 * Size:	00003C
 */
void AnimText_Screen::open(float)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
lfs      f2, lbl_8051D648@sda21(r2)
stw      r0, 0x14(r1)
lfs      f0, lbl_8051D644@sda21(r2)
lwz      r4, 0x38(r3)
stfs     f2, 0x20(r4)
lwz      r4, 0x38(r3)
stfs     f0, 0x18(r4)
lwz      r3, 0x38(r3)
bl       start__Q32og6Screen12AnimBaseBaseFf
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	80309490
 * Size:	000048
 */
void AnimText_Screen::close(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
lfs      f0, lbl_8051D66C@sda21(r2)
stw      r0, 0x14(r1)
lwz      r4, 0x38(r3)
stfs     f0, 0x20(r4)
lwz      r4, 0x38(r3)
lfs      f0, 0x1c(r4)
stfs     f0, 0x18(r4)
lwz      r3, 0x38(r3)
lwz      r12, 0(r3)
lwz      r12, 8(r12)
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
 * Address:	803094D8
 * Size:	0000AC
 */
void AnimText_Screen::blink(float, float)
{
	/*
lfs      f0, lbl_8051D644@sda21(r2)
stwu     r1, -0x20(r1)
fcmpo    cr0, f1, f0
ble      lbl_803094F0
li       r0, 1
stb      r0, 0x68(r3)

lbl_803094F0:
stfs     f1, 0x5c(r3)
lfs      f3, lbl_8051D650@sda21(r2)
stfs     f2, 0x58(r3)
lfs      f0, lbl_8051D644@sda21(r2)
lfs      f1, 0x58(r3)
lfs      f2, 0x5c(r3)
fmuls    f3, f3, f1
lfs      f1, lbl_8051D648@sda21(r2)
fdivs    f2, f3, f2
fcmpo    cr0, f2, f0
bge      lbl_80309548
lfs      f0, lbl_8051D654@sda21(r2)
lis      r4, sincosTable___5JMath@ha
addi     r4, r4, sincosTable___5JMath@l
fmuls    f0, f2, f0
fctiwz   f0, f0
stfd     f0, 8(r1)
lwz      r0, 0xc(r1)
rlwinm   r0, r0, 3, 0x12, 0x1c
lfsx     f0, r4, r0
fneg     f0, f0
b        lbl_8030956C

lbl_80309548:
lfs      f0, lbl_8051D658@sda21(r2)
lis      r4, sincosTable___5JMath@ha
addi     r4, r4, sincosTable___5JMath@l
fmuls    f0, f2, f0
fctiwz   f0, f0
stfd     f0, 0x10(r1)
lwz      r0, 0x14(r1)
rlwinm   r0, r0, 3, 0x12, 0x1c
lfsx     f0, r4, r0

lbl_8030956C:
fadds    f1, f1, f0
lfs      f0, lbl_8051D65C@sda21(r2)
fmuls    f0, f1, f0
stfs     f0, 0x64(r3)
addi     r1, r1, 0x20
blr
	*/
}

/*
 * --INFO--
 * Address:	80309584
 * Size:	000090
 */
AnimText_Screen::~AnimText_Screen(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_803095F8
lis      r4, __vt__Q32og6Screen15AnimText_Screen@ha
addi     r0, r4, __vt__Q32og6Screen15AnimText_Screen@l
stw      r0, 0(r30)
beq      lbl_803095E8
lis      r4, __vt__Q32og6Screen15CallBack_Screen@ha
addi     r0, r4, __vt__Q32og6Screen15CallBack_Screen@l
stw      r0, 0(r30)
beq      lbl_803095E8
lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r4, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0(r30)
beq      lbl_803095E8
lis      r5, __vt__Q29P2DScreen4Node@ha
li       r4, 0
addi     r0, r5, __vt__Q29P2DScreen4Node@l
stw      r0, 0(r30)
bl       __dt__5CNodeFv

lbl_803095E8:
extsh.   r0, r31
ble      lbl_803095F8
mr       r3, r30
bl       __dl__FPv

lbl_803095F8:
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
