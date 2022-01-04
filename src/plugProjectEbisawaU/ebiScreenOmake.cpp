#include "ebi/Omake.h"
#include "ebi/E2DCallBack.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80497A18
    lbl_80497A18:
        .asciz "ebiScreenOmake"
        .skip 1
        .asciz "Screen_newScreen_of_TOmake"
        .skip 1
        .asciz "omake.blo"
        .skip 2
        .asciz "Screen_setCallBackMessage_of_TOmake"
        .asciz "omake.bck"
        .skip 2
    .global lbl_80497A80
    lbl_80497A80:
        .asciz "ebiScreenOmake.cpp"
        .skip 1
    .global lbl_80497A94
    lbl_80497A94:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804EA198
    lbl_804EA198:
        .4byte lbl_803EE28C
        .4byte lbl_803EE674
        .4byte lbl_803EE520
        .4byte lbl_803EE5BC
        .4byte lbl_803EE674
        .4byte lbl_803EE648
        .4byte lbl_803EE660
    .global __vt__Q33ebi6Screen6TOmake
    __vt__Q33ebi6Screen6TOmake:
        .4byte 0
        .4byte 0
        .4byte setArchive__Q33ebi6Screen11TScreenBaseFP10JKRArchive
        .4byte openScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen7ArgOpen
        .4byte closeScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen8ArgClose
        .4byte killScreen__Q33ebi6Screen11TScreenBaseFv
        .4byte update__Q33ebi6Screen11TScreenBaseFv
        .4byte draw__Q33ebi6Screen11TScreenBaseFv
        .4byte isFinishScreen__Q33ebi6Screen11TScreenBaseFv
        .4byte doSetArchive__Q33ebi6Screen6TOmakeFP10JKRArchive
        .4byte doOpenScreen__Q33ebi6Screen6TOmakeFPQ33ebi6Screen7ArgOpen
        .4byte doCloseScreen__Q33ebi6Screen6TOmakeFPQ33ebi6Screen8ArgClose
        .4byte doKillScreen__Q33ebi6Screen11TScreenBaseFv
        .4byte doInitWaitState__Q33ebi6Screen6TOmakeFv
        .4byte doUpdateStateOpen__Q33ebi6Screen6TOmakeFv
        .4byte doUpdateStateWait__Q33ebi6Screen6TOmakeFv
        .4byte doUpdateStateClose__Q33ebi6Screen6TOmakeFv
        .4byte doDraw__Q33ebi6Screen6TOmakeFv
        .4byte getName__Q33ebi6Screen6TOmakeFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051FE60
    lbl_8051FE60:
        .float 1.0
    .global lbl_8051FE64
    lbl_8051FE64:
        .4byte 0x00000000
    .global lbl_8051FE68
    lbl_8051FE68:
        .4byte 0x3D08850A
    .global lbl_8051FE6C
    lbl_8051FE6C:
        .4byte 0x42700000
    .global lbl_8051FE70
    lbl_8051FE70:
        .float 0.1
    .global lbl_8051FE74
    lbl_8051FE74:
        .4byte 0x40555555
    .global lbl_8051FE78
    lbl_8051FE78:
        .4byte 0x41F00000
    .global lbl_8051FE7C
    lbl_8051FE7C:
        .4byte 0x3F19999A
    .global lbl_8051FE80
    lbl_8051FE80:
        .4byte 0x437F0000
        .4byte 0x00000000
    .global lbl_8051FE88
    lbl_8051FE88:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_8051FE90
    lbl_8051FE90:
        .4byte 0x3F28F5C3
    .global lbl_8051FE94
    lbl_8051FE94:
        .float 0.15
    .global lbl_8051FE98
    lbl_8051FE98:
        .4byte 0x544F6D61
        .4byte 0x6B650000
*/

namespace ebi {

namespace Screen {

/*
 * --INFO--
 * Address:	803ED2A8
 * Size:	000274
 */
TOmake::TOmake(void)
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
lis      r4, __vt__Q33ebi6Screen20TScreenBaseInterface@ha
li       r5, 0
stw      r0, 0x24(r1)
addi     r0, r4, __vt__Q33ebi6Screen20TScreenBaseInterface@l
stw      r31, 0x1c(r1)
stw      r30, 0x18(r1)
mr       r30, r3
lis      r3, __vt__Q33ebi6Screen11TScreenBase@ha
stw      r29, 0x14(r1)
addi     r31, r30, 0xe0
stw      r0, 0(r30)
addi     r0, r3, __vt__Q33ebi6Screen11TScreenBase@l
lis      r3, __vt__Q33ebi6Screen6TOmake@ha
stw      r0, 0(r30)
addi     r4, r3, __vt__Q33ebi6Screen6TOmake@l
li       r0, 0xff
mr       r3, r31
stw      r5, 4(r30)
stw      r5, 8(r30)
stw      r4, 0(r30)
stw      r5, 0x14(r30)
stw      r5, 0x18(r30)
stw      r5, 0x40(r30)
stb      r5, 0x44(r30)
stb      r5, 0x45(r30)
stb      r5, 0x46(r30)
stb      r0, 0x47(r30)
stb      r0, 0x48(r30)
stw      r5, 0x4c(r30)
stw      r5, 0x50(r30)
stw      r5, 0x54(r30)
stw      r5, 0x58(r30)
bl       __ct__5CNodeFv
lis      r3, __vt__Q29P2DScreen4Node@ha
lis      r6, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r3, __vt__Q29P2DScreen4Node@l
lis      r5, __vt__Q23ebi16E2DCallBack_Base@ha
stw      r0, 0(r31)
li       r0, 0
lis      r4, __vt__Q23ebi19E2DCallBack_AnmBase@ha
lis      r3, __vt__12J3DFrameCtrl@ha
stw      r0, 0x18(r31)
addi     r0, r6, __vt__Q29P2DScreen12CallBackNode@l
addi     r7, r5, __vt__Q23ebi16E2DCallBack_Base@l
li       r6, 1
stw      r0, 0(r31)
addi     r5, r4, __vt__Q23ebi19E2DCallBack_AnmBase@l
addi     r0, r3, __vt__12J3DFrameCtrl@l
addi     r3, r31, 0x20
stw      r7, 0(r31)
li       r4, 0
stb      r6, 0x1c(r31)
stw      r5, 0(r31)
stw      r0, 0x20(r31)
bl       init__12J3DFrameCtrlFs
addi     r31, r30, 0x11c
mr       r3, r31
bl       __ct__5CNodeFv
lis      r3, __vt__Q29P2DScreen4Node@ha
lis      r6, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r3, __vt__Q29P2DScreen4Node@l
lis      r5, __vt__Q23ebi16E2DCallBack_Base@ha
stw      r0, 0(r31)
li       r0, 0
lis      r4, __vt__Q23ebi19E2DCallBack_AnmBase@ha
lis      r3, __vt__12J3DFrameCtrl@ha
stw      r0, 0x18(r31)
addi     r0, r6, __vt__Q29P2DScreen12CallBackNode@l
addi     r7, r5, __vt__Q23ebi16E2DCallBack_Base@l
li       r6, 1
stw      r0, 0(r31)
addi     r5, r4, __vt__Q23ebi19E2DCallBack_AnmBase@l
addi     r0, r3, __vt__12J3DFrameCtrl@l
addi     r3, r31, 0x20
stw      r7, 0(r31)
li       r4, 0
stb      r6, 0x1c(r31)
stw      r5, 0(r31)
stw      r0, 0x20(r31)
bl       init__12J3DFrameCtrlFs
addi     r29, r30, 0x158
mr       r3, r29
bl       __ct__5CNodeFv
lis      r3, __vt__Q29P2DScreen4Node@ha
lis      r5, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r3, __vt__Q29P2DScreen4Node@l
lis      r4, __vt__Q23ebi16E2DCallBack_Base@ha
stw      r0, 0(r29)
li       r0, 0
lis      r3, __vt__Q23ebi25E2DCallBack_CalcAnimation@ha
addi     r31, r30, 0x178
stw      r0, 0x18(r29)
addi     r0, r5, __vt__Q29P2DScreen12CallBackNode@l
addi     r5, r4, __vt__Q23ebi16E2DCallBack_Base@l
li       r4, 1
stw      r0, 0(r29)
addi     r0, r3, __vt__Q23ebi25E2DCallBack_CalcAnimation@l
mr       r3, r31
stw      r5, 0(r29)
stb      r4, 0x1c(r29)
stw      r0, 0(r29)
bl       __ct__5CNodeFv
lis      r3, __vt__Q29P2DScreen4Node@ha
lis      r5, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r3, __vt__Q29P2DScreen4Node@l
lis      r4, __vt__Q23ebi16E2DCallBack_Base@ha
stw      r0, 0(r31)
li       r7, 0
lis      r3, __vt__Q23ebi24E2DCallBack_WindowCursor@ha
addi     r6, r5, __vt__Q29P2DScreen12CallBackNode@l
stw      r7, 0x18(r31)
addi     r5, r4, __vt__Q23ebi16E2DCallBack_Base@l
li       r4, 1
addi     r0, r3, __vt__Q23ebi24E2DCallBack_WindowCursor@l
stw      r6, 0(r31)
addi     r3, r31, 0x48
stw      r5, 0(r31)
stb      r4, 0x1c(r31)
stw      r0, 0(r31)
stw      r7, 0x40(r31)
stw      r7, 0x44(r31)
bl       __ct__Q32og6Screen8ScaleMgrFv
lfs      f0, lbl_8051FE60@sda21(r2)
lis      r4, __ct__Q23ebi26E2DCallBack_BlinkFontColorFv@ha
lis      r3, __dt__Q23ebi26E2DCallBack_BlinkFontColorFv@ha
li       r0, 0
stfs     f0, 0x64(r31)
addi     r5, r3, __dt__Q23ebi26E2DCallBack_BlinkFontColorFv@l
addi     r4, r4, __ct__Q23ebi26E2DCallBack_BlinkFontColorFv@l
addi     r3, r30, 0x1e4
stw      r0, 0x68(r31)
li       r6, 0x4c
li       r7, 7
bl       __construct_array
li       r0, -1
mr       r3, r30
stw      r0, 0x430(r30)
stw      r0, 0x434(r30)
stw      r0, 0x438(r30)
stw      r0, 0x43c(r30)
stw      r0, 0x440(r30)
stw      r0, 0x444(r30)
stw      r0, 0x448(r30)
stw      r0, 0x44c(r30)
stw      r0, 0x450(r30)
stw      r0, 0x454(r30)
stw      r0, 0x458(r30)
stw      r0, 0x45c(r30)
lwz      r31, 0x1c(r1)
lwz      r30, 0x18(r1)
lwz      r29, 0x14(r1)
lwz      r0, 0x24(r1)
mtlr     r0
addi     r1, r1, 0x20
blr
	*/
}

/*
 * --INFO--
 * Address:	803ED51C
 * Size:	0005F0
 */
void TOmake::doSetArchive(JKRArchive*)
{
	/*
stwu     r1, -0x60(r1)
mflr     r0
lis      r5, lbl_80497A18@ha
stw      r0, 0x64(r1)
stmw     r24, 0x40(r1)
mr       r29, r3
addi     r31, r5, lbl_80497A18@l
mr       r30, r4
li       r5, 0
addi     r4, r31, 0x10
lwz      r3, sys@sda21(r13)
bl       heapStatusStart__6SystemFPcP7JKRHeap
li       r3, 0x148
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_803ED564
bl       __ct__Q29P2DScreen10Mgr_tuningFv
mr       r0, r3

lbl_803ED564:
stw      r0, 0x58(r29)
mr       r6, r30
addi     r4, r31, 0x2c
lis      r5, 0x110
lwz      r3, 0x58(r29)
bl       set__9J2DScreenFPCcUlP10JKRArchive
lwz      r3, sys@sda21(r13)
addi     r4, r31, 0x10
bl       heapStatusEnd__6SystemFPc
lis      r4, 0x77696E30@ha
lwz      r3, 0x58(r29)
addi     r6, r4, 0x77696E30@l
li       r5, 0x4e
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x5c(r29)
lis      r3, 0x69746C30@ha
addi     r6, r3, 0x69746C30@l
li       r5, 0x4e74
lwz      r3, 0x58(r29)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x60(r29)
lis      r3, 0x6162746E@ha
addi     r6, r3, 0x6162746E@l
li       r5, 0x4e
lwz      r3, 0x58(r29)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x64(r29)
lis      r3, 0x6262746E@ha
addi     r6, r3, 0x6262746E@l
li       r5, 0x4e
lwz      r3, 0x58(r29)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x68(r29)
li       r4, 1
lwz      r3, 0x60(r29)
bl       E2DPane_setTreeInfluencedAlpha__3ebiFP7J2DPaneb
lwz      r3, 0x64(r29)
li       r4, 1
bl       E2DPane_setTreeInfluencedAlpha__3ebiFP7J2DPaneb
lwz      r3, 0x68(r29)
li       r4, 1
bl       E2DPane_setTreeInfluencedAlpha__3ebiFP7J2DPaneb
lis      r3, 0x74733030@ha
mr       r28, r29
addi     r27, r3, 0x74733030@l
li       r25, 0

lbl_803ED61C:
addis    r4, r25, 0x4e6e
lwz      r3, 0x58(r29)
addi     r6, r4, 0x3030
li       r5, 0
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x6c(r28)
addis    r3, r25, 0x5777
addi     r6, r3, 0x3030
li       r5, 0
lwz      r3, 0x58(r29)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x8c(r28)
addis    r3, r25, 0x5474
addi     r6, r3, 0x3030
li       r5, 0
lwz      r3, 0x58(r29)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0xa8(r28)
srawi    r3, r25, 0x1f
addc     r6, r25, r27
li       r0, 0x54
adde     r5, r3, r0
lwz      r3, 0x58(r29)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
addi     r25, r25, 1
stw      r3, 0xc4(r28)
cmpwi    r25, 7
addi     r28, r28, 4
blt      lbl_803ED61C
lis      r5, 0x6C637477@ha
lis      r4, 0x00577365@ha
lwz      r3, 0x58(r29)
addi     r6, r5, 0x6C637477@l
addi     r5, r4, 0x00577365@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x88(r29)
lis      r3, 0x44415441@ha
addi     r6, r3, 0x44415441@l
li       r5, 0
lwz      r3, 0xa8(r29)
lwz      r0, 0x18(r3)
lwz      r3, 0x1c(r3)
stw      r3, 0x3fc(r29)
stw      r0, 0x3f8(r29)
lwz      r3, 0xac(r29)
lwz      r0, 0x18(r3)
lwz      r3, 0x1c(r3)
stw      r3, 0x404(r29)
stw      r0, 0x400(r29)
lwz      r3, 0xb0(r29)
lwz      r0, 0x18(r3)
lwz      r3, 0x1c(r3)
stw      r3, 0x40c(r29)
stw      r0, 0x408(r29)
lwz      r3, 0xb4(r29)
lwz      r0, 0x18(r3)
lwz      r3, 0x1c(r3)
stw      r3, 0x414(r29)
stw      r0, 0x410(r29)
lwz      r3, 0xb8(r29)
lwz      r0, 0x18(r3)
lwz      r3, 0x1c(r3)
stw      r3, 0x41c(r29)
stw      r0, 0x418(r29)
lwz      r3, 0xbc(r29)
lwz      r0, 0x18(r3)
lwz      r3, 0x1c(r3)
stw      r3, 0x424(r29)
stw      r0, 0x420(r29)
lwz      r3, 0xc0(r29)
lwz      r0, 0x18(r3)
lwz      r3, 0x1c(r3)
stw      r3, 0x42c(r29)
stw      r0, 0x428(r29)
lwz      r3, 0x58(r29)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
li       r0, 0
addi     r4, r31, 0x38
stb      r0, 0xb0(r3)
li       r5, 0
lwz      r3, sys@sda21(r13)
bl       heapStatusStart__6SystemFPcP7JKRHeap
lwz      r3, 0x58(r29)
mr       r4, r3
bl       E2DPane_setTreeCallBackMessage__3ebiFPQ29P2DScreen3MgrP7J2DPane
lwz      r3, sys@sda21(r13)
addi     r4, r31, 0x38
bl       heapStatusEnd__6SystemFPc
lwz      r3, 0x58(r29)
addi     r5, r29, 0xe0
mr       r4, r3
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
lwz      r3, 0x58(r29)
addi     r5, r29, 0x11c
mr       r4, r3
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
lwz      r3, 0x58(r29)
addi     r5, r29, 0x158
mr       r4, r3
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
mr       r5, r30
addi     r3, r29, 0xe0
addi     r4, r31, 0x5c
li       r6, 0x15
li       r7, 0x28
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r29, 0x11c
addi     r4, r31, 0x5c
li       r6, 0
li       r7, 0x14
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
lis      r5, 0x6C637477@ha
lis      r4, 0x00577365@ha
lwz      r3, 0x58(r29)
addi     r6, r5, 0x6C637477@l
addi     r5, r4, 0x00577365@l
addi     r7, r29, 0x178
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
mr       r26, r29
mr       r25, r29
li       r24, 0
lis      r27, 0x6F6C6F72@ha
lis      r28, 0x00547363@ha
lis      r30, 0x5474

lbl_803ED810:
lwz      r3, 0x58(r29)
addi     r6, r27, 0x6F6C6F72@l
addi     r5, r28, 0x00547363@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
mr       r31, r3
lwz      r3, 0x58(r29)
addi     r6, r30, 0x3030
li       r5, 0
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
mr       r4, r3
mr       r5, r31
addi     r3, r26, 0x1e4
bl       set__Q23ebi26E2DCallBack_BlinkFontColorFP10J2DTextBoxP10J2DTextBox
lwz      r3, 0x58(r29)
addi     r5, r26, 0x1e4
lwz      r4, 0xa8(r25)
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
addi     r24, r24, 1
addi     r25, r25, 4
cmpwi    r24, 7
addi     r26, r26, 0x4c
blt      lbl_803ED810
lis      r5, 0x6F6C6F72@ha
lis      r4, 0x00547363@ha
lwz      r3, 0x58(r29)
addi     r6, r5, 0x6F6C6F72@l
addi     r5, r4, 0x00547363@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
mr       r27, r3
addi     r3, r1, 0x30
lwz      r0, 0x104(r27)
mr       r4, r27
stw      r0, 0x28(r1)
lbz      r5, 0x28(r1)
lbz      r0, 0x29(r1)
stb      r5, 0x430(r29)
lbz      r5, 0x2a(r1)
stb      r0, 0x431(r29)
lbz      r0, 0x2b(r1)
stb      r5, 0x432(r29)
stb      r0, 0x433(r29)
lwz      r0, 0x108(r27)
stw      r0, 0x2c(r1)
lbz      r5, 0x2c(r1)
lbz      r0, 0x2d(r1)
stb      r5, 0x434(r29)
lbz      r5, 0x2e(r1)
stb      r0, 0x435(r29)
lbz      r0, 0x2f(r1)
stb      r5, 0x436(r29)
stb      r0, 0x437(r29)
lwz      r12, 0(r27)
lwz      r12, 0xb4(r12)
mtctr    r12
bctrl
lbz      r0, 0x30(r1)
mr       r4, r27
addi     r3, r1, 0x34
stb      r0, 0x438(r29)
lbz      r0, 0x31(r1)
stb      r0, 0x439(r29)
lbz      r0, 0x32(r1)
stb      r0, 0x43a(r29)
lbz      r0, 0x33(r1)
stb      r0, 0x43b(r29)
lwz      r12, 0(r27)
lwz      r12, 0xb0(r12)
mtctr    r12
bctrl
lbz      r0, 0x34(r1)
lis      r3, 0x54743030@ha
addi     r6, r3, 0x54743030@l
li       r5, 0
stb      r0, 0x43c(r29)
lbz      r0, 0x35(r1)
stb      r0, 0x43d(r29)
lbz      r0, 0x36(r1)
stb      r0, 0x43e(r29)
lbz      r0, 0x37(r1)
stb      r0, 0x43f(r29)
lwz      r3, 0x58(r29)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
mr       r27, r3
addi     r3, r1, 0x20
lwz      r0, 0x104(r27)
mr       r4, r27
stw      r0, 0x18(r1)
lbz      r5, 0x18(r1)
lbz      r0, 0x19(r1)
stb      r5, 0x440(r29)
lbz      r5, 0x1a(r1)
stb      r0, 0x441(r29)
lbz      r0, 0x1b(r1)
stb      r5, 0x442(r29)
stb      r0, 0x443(r29)
lwz      r0, 0x108(r27)
stw      r0, 0x1c(r1)
lbz      r5, 0x1c(r1)
lbz      r0, 0x1d(r1)
stb      r5, 0x444(r29)
lbz      r5, 0x1e(r1)
stb      r0, 0x445(r29)
lbz      r0, 0x1f(r1)
stb      r5, 0x446(r29)
stb      r0, 0x447(r29)
lwz      r12, 0(r27)
lwz      r12, 0xb4(r12)
mtctr    r12
bctrl
lbz      r0, 0x20(r1)
mr       r4, r27
addi     r3, r1, 0x24
stb      r0, 0x448(r29)
lbz      r0, 0x21(r1)
stb      r0, 0x449(r29)
lbz      r0, 0x22(r1)
stb      r0, 0x44a(r29)
lbz      r0, 0x23(r1)
stb      r0, 0x44b(r29)
lwz      r12, 0(r27)
lwz      r12, 0xb0(r12)
mtctr    r12
bctrl
lbz      r0, 0x24(r1)
lis      r4, 0x6F6C6F72@ha
lis      r3, 0x54687363@ha
stb      r0, 0x44c(r29)
addi     r6, r4, 0x6F6C6F72@l
addi     r5, r3, 0x54687363@l
lbz      r0, 0x25(r1)
stb      r0, 0x44d(r29)
lbz      r0, 0x26(r1)
stb      r0, 0x44e(r29)
lbz      r0, 0x27(r1)
stb      r0, 0x44f(r29)
lwz      r3, 0x58(r29)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
mr       r27, r3
addi     r3, r1, 0x10
lwz      r0, 0x104(r27)
mr       r4, r27
stw      r0, 8(r1)
lbz      r5, 8(r1)
lbz      r0, 9(r1)
stb      r5, 0x450(r29)
lbz      r5, 0xa(r1)
stb      r0, 0x451(r29)
lbz      r0, 0xb(r1)
stb      r5, 0x452(r29)
stb      r0, 0x453(r29)
lwz      r0, 0x108(r27)
stw      r0, 0xc(r1)
lbz      r5, 0xc(r1)
lbz      r0, 0xd(r1)
stb      r5, 0x454(r29)
lbz      r5, 0xe(r1)
stb      r0, 0x455(r29)
lbz      r0, 0xf(r1)
stb      r5, 0x456(r29)
stb      r0, 0x457(r29)
lwz      r12, 0(r27)
lwz      r12, 0xb4(r12)
mtctr    r12
bctrl
lbz      r0, 0x10(r1)
mr       r4, r27
addi     r3, r1, 0x14
stb      r0, 0x458(r29)
lbz      r0, 0x11(r1)
stb      r0, 0x459(r29)
lbz      r0, 0x12(r1)
stb      r0, 0x45a(r29)
lbz      r0, 0x13(r1)
stb      r0, 0x45b(r29)
lwz      r12, 0(r27)
lwz      r12, 0xb0(r12)
mtctr    r12
bctrl
lbz      r0, 0x14(r1)
stb      r0, 0x45c(r29)
lbz      r0, 0x15(r1)
stb      r0, 0x45d(r29)
lbz      r0, 0x16(r1)
stb      r0, 0x45e(r29)
lbz      r0, 0x17(r1)
stb      r0, 0x45f(r29)
lmw      r24, 0x40(r1)
lwz      r0, 0x64(r1)
mtlr     r0
addi     r1, r1, 0x60
blr
	*/
}

/*
 * --INFO--
 * Address:	803EDB0C
 * Size:	0005F0
 */
void TOmake::doOpenScreen(ebi::Screen::ArgOpen*)
{
	/*
stwu     r1, -0xc0(r1)
mflr     r0
stw      r0, 0xc4(r1)
stmw     r23, 0x9c(r1)
or.      r24, r4, r4
mr       r23, r3
bne      lbl_803EDB44
lis      r3, lbl_80497A80@ha
lis      r5, lbl_80497A94@ha
addi     r3, r3, lbl_80497A80@l
li       r4, 0x6d
addi     r5, r5, lbl_80497A94@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803EDB44:
lbz      r27, 4(r24)
mr       r30, r23
lbz      r26, 5(r24)
mr       r29, r23
lbz      r25, 6(r24)
mr       r28, r23
li       r24, 0

lbl_803EDB60:
li       r0, 0
stb      r0, 0x200(r30)
lwz      r3, 0x1fc(r30)
cmplwi   r3, 0
beq      lbl_803EDC0C
lwz      r7, 0x204(r30)
mr       r31, r3
addi     r4, r1, 0x38
stw      r7, 0xc(r1)
lbz      r5, 0xc(r1)
lbz      r0, 0xd(r1)
stb      r5, 0x104(r3)
lbz      r5, 0xe(r1)
stb      r0, 0x105(r3)
lbz      r0, 0xf(r1)
stb      r5, 0x106(r3)
stb      r0, 0x107(r3)
lwz      r6, 0x208(r30)
stw      r7, 0x30(r1)
stw      r6, 8(r1)
lbz      r5, 8(r1)
lbz      r0, 9(r1)
stb      r5, 0x108(r3)
lbz      r5, 0xa(r1)
stb      r0, 0x109(r3)
lbz      r0, 0xb(r1)
stb      r5, 0x10a(r3)
stb      r0, 0x10b(r3)
lwz      r0, 0x20c(r30)
stw      r6, 0x34(r1)
stw      r0, 0x38(r1)
lwz      r12, 0(r3)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0x210(r30)
mr       r3, r31
addi     r4, r1, 0x3c
stw      r0, 0x3c(r1)
lwz      r12, 0(r31)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl

lbl_803EDC0C:
lwz      r0, 0x3f8(r29)
addi     r24, r24, 1
lwz      r4, 0x3fc(r29)
cmpwi    r24, 7
lwz      r3, 0xa8(r28)
addi     r30, r30, 0x4c
stw      r4, 0x1c(r3)
stw      r0, 0x18(r3)
lwz      r3, 0xc4(r28)
addi     r28, r28, 4
lwz      r0, 0x3f8(r29)
lwz      r4, 0x3fc(r29)
addi     r29, r29, 8
stw      r4, 0x1c(r3)
stw      r0, 0x18(r3)
blt      lbl_803EDB60
cmplwi   r27, 0
bne      lbl_803EDD30
lis      r4, 0x345F3030@ha
lis      r3, 0x00343834@ha
addi     r28, r23, 4
li       r24, 1
addi     r29, r4, 0x345F3030@l
addi     r27, r3, 0x00343834@l

lbl_803EDC6C:
lwz      r7, 0x450(r23)
addi     r4, r1, 0x78
lwz      r31, 0xa8(r28)
stw      r7, 0x2c(r1)
mr       r3, r31
lbz      r5, 0x2c(r1)
lbz      r0, 0x2d(r1)
stb      r5, 0x104(r31)
lbz      r5, 0x2e(r1)
stb      r0, 0x105(r31)
lbz      r0, 0x2f(r1)
stb      r5, 0x106(r31)
stb      r0, 0x107(r31)
lwz      r6, 0x454(r23)
stw      r7, 0x70(r1)
stw      r6, 0x28(r1)
lbz      r5, 0x28(r1)
lbz      r0, 0x29(r1)
stb      r5, 0x108(r31)
lbz      r5, 0x2a(r1)
stb      r0, 0x109(r31)
lbz      r0, 0x2b(r1)
stb      r5, 0x10a(r31)
stb      r0, 0x10b(r31)
lwz      r0, 0x458(r23)
stw      r6, 0x74(r1)
stw      r0, 0x78(r1)
lwz      r12, 0(r31)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0x45c(r23)
mr       r3, r31
addi     r4, r1, 0x7c
stw      r0, 0x7c(r1)
lwz      r12, 0(r31)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl
lwz      r3, 0xa8(r28)
addi     r24, r24, 1
cmpwi    r24, 3
stw      r29, 0x1c(r3)
stw      r27, 0x18(r3)
lwz      r3, 0xc4(r28)
addi     r28, r28, 4
stw      r29, 0x1c(r3)
stw      r27, 0x18(r3)
ble      lbl_803EDC6C

lbl_803EDD30:
cmplwi   r26, 0
bne      lbl_803EDDFC
lwz      r7, 0x450(r23)
addi     r4, r1, 0x68
lwz      r24, 0xb8(r23)
stw      r7, 0x24(r1)
mr       r3, r24
lbz      r5, 0x24(r1)
lbz      r0, 0x25(r1)
stb      r5, 0x104(r24)
lbz      r5, 0x26(r1)
stb      r0, 0x105(r24)
lbz      r0, 0x27(r1)
stb      r5, 0x106(r24)
stb      r0, 0x107(r24)
lwz      r6, 0x454(r23)
stw      r7, 0x60(r1)
stw      r6, 0x20(r1)
lbz      r5, 0x20(r1)
lbz      r0, 0x21(r1)
stb      r5, 0x108(r24)
lbz      r5, 0x22(r1)
stb      r0, 0x109(r24)
lbz      r0, 0x23(r1)
stb      r5, 0x10a(r24)
stb      r0, 0x10b(r24)
lwz      r0, 0x458(r23)
stw      r6, 0x64(r1)
stw      r0, 0x68(r1)
lwz      r12, 0(r24)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0x45c(r23)
mr       r3, r24
addi     r4, r1, 0x6c
stw      r0, 0x6c(r1)
lwz      r12, 0(r24)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl
lis      r4, 0x345F3030@ha
lwz      r3, 0xb8(r23)
addi     r5, r4, 0x345F3030@l
lis      r4, 0x00343834@ha
stw      r5, 0x1c(r3)
addi     r0, r4, 0x00343834@l
stw      r0, 0x18(r3)
lwz      r3, 0xd4(r23)
stw      r5, 0x1c(r3)
stw      r0, 0x18(r3)

lbl_803EDDFC:
cmplwi   r25, 0
bne      lbl_803EDEC8
lwz      r7, 0x450(r23)
addi     r4, r1, 0x58
lwz      r24, 0xbc(r23)
stw      r7, 0x1c(r1)
mr       r3, r24
lbz      r5, 0x1c(r1)
lbz      r0, 0x1d(r1)
stb      r5, 0x104(r24)
lbz      r5, 0x1e(r1)
stb      r0, 0x105(r24)
lbz      r0, 0x1f(r1)
stb      r5, 0x106(r24)
stb      r0, 0x107(r24)
lwz      r6, 0x454(r23)
stw      r7, 0x50(r1)
stw      r6, 0x18(r1)
lbz      r5, 0x18(r1)
lbz      r0, 0x19(r1)
stb      r5, 0x108(r24)
lbz      r5, 0x1a(r1)
stb      r0, 0x109(r24)
lbz      r0, 0x1b(r1)
stb      r5, 0x10a(r24)
stb      r0, 0x10b(r24)
lwz      r0, 0x458(r23)
stw      r6, 0x54(r1)
stw      r0, 0x58(r1)
lwz      r12, 0(r24)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0x45c(r23)
mr       r3, r24
addi     r4, r1, 0x5c
stw      r0, 0x5c(r1)
lwz      r12, 0(r24)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl
lis      r4, 0x345F3030@ha
lwz      r3, 0xbc(r23)
addi     r5, r4, 0x345F3030@l
lis      r4, 0x00343834@ha
stw      r5, 0x1c(r3)
addi     r0, r4, 0x00343834@l
stw      r0, 0x18(r3)
lwz      r3, 0xd8(r23)
stw      r5, 0x1c(r3)
stw      r0, 0x18(r3)

lbl_803EDEC8:
lwz      r3, sys@sda21(r13)
lwz      r0, 0xd4(r3)
cmpwi    r0, 5
beq      lbl_803EDFA8
lwz      r7, 0x450(r23)
addi     r4, r1, 0x48
lwz      r24, 0xc0(r23)
stw      r7, 0x14(r1)
mr       r3, r24
lbz      r5, 0x14(r1)
lbz      r0, 0x15(r1)
stb      r5, 0x104(r24)
lbz      r5, 0x16(r1)
stb      r0, 0x105(r24)
lbz      r0, 0x17(r1)
stb      r5, 0x106(r24)
stb      r0, 0x107(r24)
lwz      r6, 0x454(r23)
stw      r7, 0x40(r1)
stw      r6, 0x10(r1)
lbz      r5, 0x10(r1)
lbz      r0, 0x11(r1)
stb      r5, 0x108(r24)
lbz      r5, 0x12(r1)
stb      r0, 0x109(r24)
lbz      r0, 0x13(r1)
stb      r5, 0x10a(r24)
stb      r0, 0x10b(r24)
lwz      r0, 0x458(r23)
stw      r6, 0x44(r1)
stw      r0, 0x48(r1)
lwz      r12, 0(r24)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0x45c(r23)
mr       r3, r24
addi     r4, r1, 0x4c
stw      r0, 0x4c(r1)
lwz      r12, 0(r24)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl
lis      r4, 0x345F3030@ha
lwz      r3, 0xc0(r23)
addi     r5, r4, 0x345F3030@l
lis      r4, 0x00343834@ha
stw      r5, 0x1c(r3)
addi     r4, r4, 0x00343834@l
li       r0, 0
stw      r4, 0x18(r3)
lwz      r3, 0xdc(r23)
stw      r5, 0x1c(r3)
stw      r4, 0x18(r3)
lwz      r3, 0x84(r23)
stb      r0, 0xb0(r3)

lbl_803EDFA8:
lwz      r5, sys@sda21(r13)
addi     r3, r23, 0xe0
lfs      f1, lbl_8051FE6C@sda21(r2)
li       r4, 0
lfs      f0, 0x54(r5)
li       r5, 1
fmuls    f1, f1, f0
bl       play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
lwz      r3, sys@sda21(r13)
lfs      f1, kFadeTime__Q23ebi8E2DFader@sda21(r2)
lfs      f0, 0x54(r3)
fdivs    f1, f1, f0
bl       __cvt_fp2unsigned
stw      r3, 0x50(r23)
li       r0, 1
stw      r3, 0x54(r23)
mr       r3, r23
stw      r0, 0x4c(r23)
bl       showPanes___Q33ebi6Screen6TOmakeFv
lwz      r3, 0x60(r23)
li       r4, 0xff
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
lwz      r3, 0x64(r23)
li       r4, 0xff
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
lwz      r3, 0x68(r23)
li       r4, 0xff
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
li       r0, 0
stw      r0, 0x3c(r23)
lwz      r0, 0x3c(r23)
slwi     r0, r0, 2
add      r3, r23, r0
lwz      r3, 0x8c(r3)
bl       getBounds__7J2DPaneFv
lwz      r4, sys@sda21(r13)
lwz      r6, 0(r3)
lfs      f1, lbl_8051FE70@sda21(r2)
lfs      f0, 0x54(r4)
lwz      r5, 4(r3)
fdivs    f1, f1, f0
lwz      r4, 8(r3)
lwz      r0, 0xc(r3)
stw      r6, 0x88(r1)
stw      r5, 0x8c(r1)
stw      r4, 0x90(r1)
stw      r0, 0x94(r1)
bl       __cvt_fp2unsigned
stw      r3, 0x1b8(r23)
li       r0, 1
lwz      r5, 0x90(r1)
stw      r3, 0x1bc(r23)
lwz      r6, 0x88(r1)
lwz      r3, 0x8c(r1)
stw      r6, 0x198(r23)
lwz      r4, 0x94(r1)
stw      r3, 0x19c(r23)
stw      r5, 0x1a0(r23)
stw      r4, 0x1a4(r23)
stw      r6, 0x1a8(r23)
stw      r3, 0x1ac(r23)
stw      r5, 0x1b0(r23)
stw      r4, 0x1b4(r23)
stb      r0, 0x194(r23)
lwz      r0, 0x3c(r23)
stw      r5, 0x80(r1)
slwi     r0, r0, 2
add      r3, r23, r0
stw      r4, 0x84(r1)
lwz      r0, 0x6c(r3)
stw      r0, 0x1e0(r23)
lmw      r23, 0x9c(r1)
lwz      r0, 0xc4(r1)
mtlr     r0
addi     r1, r1, 0xc0
blr
	*/
}

/*
 * --INFO--
 * Address:	803EE0FC
 * Size:	00004C
 */
void TOmake::doCloseScreen(ebi::Screen::ArgClose*)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
lfs      f1, kFadeTime__Q23ebi8E2DFader@sda21(r2)
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
lwz      r4, sys@sda21(r13)
lfs      f0, 0x54(r4)
fdivs    f1, f1, f0
bl       __cvt_fp2unsigned
stw      r3, 0x50(r31)
li       r0, 2
stw      r3, 0x54(r31)
stw      r0, 0x4c(r31)
lwz      r31, 0xc(r1)
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803EE148
 * Size:	000048
 */
void TOmake::doInitWaitState(void)
{
	/*
lwz      r4, 0x3c(r3)
li       r5, 1
lfs      f2, lbl_8051FE74@sda21(r2)
li       r0, 0
mulli    r4, r4, 0x4c
lfs      f0, lbl_8051FE64@sda21(r2)
addi     r6, r4, 0x1e4
add      r6, r3, r6
stb      r5, 0x1c(r6)
lwz      r4, sys@sda21(r13)
lfs      f1, 0x54(r4)
fmuls    f1, f2, f1
stfs     f1, 0x44(r6)
stfs     f0, 0x40(r6)
stb      r5, 0x48(r6)
stb      r0, 0x49(r6)
stw      r0, 0xc(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	803EE190
 * Size:	000084
 */
bool TOmake::doUpdateStateOpen()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
lwz      r3, 0x58(r3)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
lwz      r0, 0x4c(r31)
cmpwi    r0, 0
beq      lbl_803EE1D8
lwz      r3, 0x50(r31)
cmplwi   r3, 0
beq      lbl_803EE1D8
addi     r0, r3, -1
stw      r0, 0x50(r31)

lbl_803EE1D8:
addi     r3, r31, 0xe0
bl       isFinish__Q23ebi19E2DCallBack_AnmBaseFv
clrlwi.  r0, r3, 0x18
beq      lbl_803EE1FC
lwz      r0, 0x50(r31)
cmplwi   r0, 0
bne      lbl_803EE1FC
li       r3, 1
b        lbl_803EE200

lbl_803EE1FC:
li       r3, 0

lbl_803EE200:
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803EE214
 * Size:	000484
 */
bool TOmake::doUpdateStateWait()
{
	/*
stwu     r1, -0x50(r1)
mflr     r0
stw      r0, 0x54(r1)
stfd     f31, 0x40(r1)
psq_st   f31, 72(r1), 0, qr0
stw      r31, 0x3c(r1)
stw      r30, 0x38(r1)
mr       r30, r3
lwz      r3, 0x58(r3)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
lwz      r0, 0x4c(r30)
cmpwi    r0, 0
beq      lbl_803EE268
lwz      r3, 0x50(r30)
cmplwi   r3, 0
beq      lbl_803EE268
addi     r0, r3, -1
stw      r0, 0x50(r30)

lbl_803EE268:
lwz      r0, 0xc(r30)
cmplwi   r0, 6
bgt      lbl_803EE674
lis      r3, lbl_804EA198@ha
slwi     r0, r0, 2
addi     r3, r3, lbl_804EA198@l
lwzx     r0, r3, r0
mtctr    r0
bctr
.global  lbl_803EE28C

lbl_803EE28C:
addi     r3, r30, 0x10
bl       update__Q23ebi24EUTPadInterface_countNumFv
lbz      r0, 0x1d(r30)
cmplwi   r0, 0
beq      lbl_803EE468
lwz      r31, 0x2c(r30)
lwz      r0, 0x3c(r30)
cmpw     r31, r0
bge      lbl_803EE330
b        lbl_803EE2D4

lbl_803EE2B4:
lwz      r3, 0x3c(r30)
addi     r0, r3, 1
stw      r0, 0x3c(r30)
lwz      r0, 0x3c(r30)
cmpwi    r0, 7
blt      lbl_803EE2E4
stw      r31, 0x3c(r30)
b        lbl_803EE368

lbl_803EE2D4:
lis      r4, 0x345F3030@ha
lis      r3, 0x00343834@ha
addi     r5, r4, 0x345F3030@l
addi     r4, r3, 0x00343834@l

lbl_803EE2E4:
lwz      r0, 0x3c(r30)
slwi     r3, r0, 2
addi     r0, r3, 0xa8
lwzx     r3, r30, r0
lwz      r0, 0x18(r3)
lwz      r3, 0x1c(r3)
xor      r0, r0, r4
xor      r3, r3, r5
or.      r0, r3, r0
beq      lbl_803EE2B4
b        lbl_803EE368

lbl_803EE310:
lwz      r3, 0x3c(r30)
addi     r0, r3, -1
stw      r0, 0x3c(r30)
lwz      r0, 0x3c(r30)
cmpwi    r0, 0
bge      lbl_803EE340
stw      r31, 0x3c(r30)
b        lbl_803EE368

lbl_803EE330:
lis      r4, 0x345F3030@ha
lis      r3, 0x00343834@ha
addi     r5, r4, 0x345F3030@l
addi     r4, r3, 0x00343834@l

lbl_803EE340:
lwz      r0, 0x3c(r30)
slwi     r3, r0, 2
addi     r0, r3, 0xa8
lwzx     r3, r30, r0
lwz      r0, 0x18(r3)
lwz      r3, 0x1c(r3)
xor      r0, r0, r4
xor      r3, r3, r5
or.      r0, r3, r0
beq      lbl_803EE310

lbl_803EE368:
lwz      r0, 0x3c(r30)
cmpw     r0, r31
beq      lbl_803EE468
slwi     r0, r0, 2
add      r3, r30, r0
lwz      r3, 0x8c(r3)
bl       getBounds__7J2DPaneFv
lwz      r8, 0(r3)
lwz      r7, 4(r3)
lwz      r6, 8(r3)
lwz      r5, 0xc(r3)
addi     r3, r30, 0x1c0
lwz      r4, 0x1a8(r30)
lwz      r0, 0x1ac(r30)
stw      r8, 8(r1)
lfs      f1, lbl_8051FE70@sda21(r2)
stw      r4, 0x198(r30)
lfs      f2, lbl_8051FE78@sda21(r2)
stw      r0, 0x19c(r30)
lfs      f3, lbl_8051FE7C@sda21(r2)
lwz      r4, 0x1b0(r30)
lwz      r0, 0x1b4(r30)
stw      r7, 0xc(r1)
lfs      f4, lbl_8051FE64@sda21(r2)
stw      r4, 0x1a0(r30)
stw      r0, 0x1a4(r30)
stw      r8, 0x1a8(r30)
stw      r7, 0x1ac(r30)
stw      r6, 0x1b0(r30)
stw      r5, 0x1b4(r30)
lwz      r0, 0x1bc(r30)
stw      r6, 0x10(r1)
stw      r5, 0x14(r1)
stw      r0, 0x1b8(r30)
bl       up__Q32og6Screen8ScaleMgrFffff
lwz      r0, 0x3c(r30)
mulli    r4, r31, 0x4c
li       r7, 0
lfs      f2, lbl_8051FE74@sda21(r2)
slwi     r0, r0, 2
lfs      f0, lbl_8051FE64@sda21(r2)
add      r3, r30, r0
lwz      r0, 0x6c(r3)
add      r3, r30, r4
li       r6, 1
li       r4, 0x1802
stw      r0, 0x1e0(r30)
li       r5, 0
stb      r7, 0x22c(r3)
stb      r6, 0x22d(r3)
lwz      r0, 0x3c(r30)
mulli    r3, r0, 0x4c
addi     r8, r3, 0x1e4
add      r8, r30, r8
stb      r6, 0x1c(r8)
lwz      r3, sys@sda21(r13)
lfs      f1, 0x54(r3)
fmuls    f1, f2, f1
stfs     f1, 0x44(r8)
stfs     f0, 0x40(r8)
stb      r6, 0x48(r8)
stb      r7, 0x49(r8)
lwz      r3, spSysIF__8PSSystem@sda21(r13)
bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_803EE468:
lwz      r0, 0x1b8(r30)
cmplwi   r0, 0
bne      lbl_803EE674
lwz      r3, 0x40(r30)
lwz      r3, 0x1c(r3)
rlwinm.  r0, r3, 0, 0x17, 0x17
beq      lbl_803EE500
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x1800
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
lwz      r0, 0x3c(r30)
cmpwi    r0, 6
beq      lbl_803EE4A4
b        lbl_803EE4D0

lbl_803EE4A4:
lwz      r5, sys@sda21(r13)
addi     r3, r30, 0x11c
lfs      f1, lbl_8051FE6C@sda21(r2)
li       r4, 0
lfs      f0, 0x54(r5)
li       r5, 1
fmuls    f1, f1, f0
bl       play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
li       r0, 2
stw      r0, 0xc(r30)
b        lbl_803EE674

lbl_803EE4D0:
lwz      r3, sys@sda21(r13)
lfs      f1, kFadeTime__Q23ebi8E2DFader@sda21(r2)
lfs      f0, 0x54(r3)
fdivs    f1, f1, f0
bl       __cvt_fp2unsigned
stw      r3, 0x50(r30)
li       r4, 2
li       r0, 5
stw      r3, 0x54(r30)
stw      r4, 0x4c(r30)
stw      r0, 0xc(r30)
b        lbl_803EE674

lbl_803EE500:
rlwinm.  r0, r3, 0, 0x16, 0x16
beq      lbl_803EE674
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x1801
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
li       r3, 1
b        lbl_803EE678
.global  lbl_803EE520

lbl_803EE520:
addi     r3, r30, 0x11c
bl       getPlayFinRate__Q23ebi19E2DCallBack_AnmBaseFv
lfs      f0, lbl_8051FE60@sda21(r2)
lwz      r3, 0x60(r30)
fsubs    f1, f0, f1
lfs      f0, lbl_8051FE80@sda21(r2)
lwz      r12, 0(r3)
fmuls    f31, f0, f1
lwz      r12, 0x24(r12)
fctiwz   f0, f31
stfd     f0, 0x18(r1)
lwz      r4, 0x1c(r1)
mtctr    r12
bctrl
lwz      r3, 0x64(r30)
fctiwz   f0, f31
lwz      r12, 0(r3)
stfd     f0, 0x20(r1)
lwz      r12, 0x24(r12)
lwz      r4, 0x24(r1)
mtctr    r12
bctrl
lwz      r3, 0x68(r30)
fctiwz   f0, f31
lwz      r12, 0(r3)
stfd     f0, 0x28(r1)
lwz      r12, 0x24(r12)
lwz      r4, 0x2c(r1)
mtctr    r12
bctrl
addi     r3, r30, 0x11c
bl       isFinish__Q23ebi19E2DCallBack_AnmBaseFv
clrlwi.  r0, r3, 0x18
beq      lbl_803EE674
mr       r3, r30
bl       hidePanes___Q33ebi6Screen6TOmakeFv
li       r0, 1
stw      r0, 0xc(r30)
b        lbl_803EE674
.global  lbl_803EE5BC

lbl_803EE5BC:
addi     r3, r30, 0xe0
bl       getPlayFinRate__Q23ebi19E2DCallBack_AnmBaseFv
lfs      f0, lbl_8051FE80@sda21(r2)
lwz      r3, 0x60(r30)
fmuls    f31, f0, f1
lwz      r12, 0(r3)
fctiwz   f0, f31
lwz      r12, 0x24(r12)
stfd     f0, 0x28(r1)
lwz      r4, 0x2c(r1)
mtctr    r12
bctrl
lwz      r3, 0x64(r30)
fctiwz   f0, f31
lwz      r12, 0(r3)
stfd     f0, 0x20(r1)
lwz      r12, 0x24(r12)
lwz      r4, 0x24(r1)
mtctr    r12
bctrl
lwz      r3, 0x68(r30)
fctiwz   f0, f31
lwz      r12, 0(r3)
stfd     f0, 0x18(r1)
lwz      r12, 0x24(r12)
lwz      r4, 0x1c(r1)
mtctr    r12
bctrl
addi     r3, r30, 0xe0
bl       isFinish__Q23ebi19E2DCallBack_AnmBaseFv
clrlwi.  r0, r3, 0x18
beq      lbl_803EE674
li       r0, 0
stw      r0, 0xc(r30)
b        lbl_803EE674
.global  lbl_803EE648

lbl_803EE648:
lwz      r0, 0x50(r30)
cmplwi   r0, 0
bne      lbl_803EE674
li       r0, 4
stw      r0, 0xc(r30)
b        lbl_803EE674
.global  lbl_803EE660

lbl_803EE660:
lwz      r0, 0x50(r30)
cmplwi   r0, 0
bne      lbl_803EE674
li       r0, 0
stw      r0, 0xc(r30)
.global  lbl_803EE674

lbl_803EE674:
li       r3, 0

lbl_803EE678:
psq_l    f31, 72(r1), 0, qr0
lwz      r0, 0x54(r1)
lfd      f31, 0x40(r1)
lwz      r31, 0x3c(r1)
lwz      r30, 0x38(r1)
mtlr     r0
addi     r1, r1, 0x50
blr
	*/
}

/*
 * --INFO--
 * Address:	803EE698
 * Size:	000074
 */
bool TOmake::doUpdateStateClose()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
lwz      r3, 0x58(r3)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
lwz      r0, 0x4c(r31)
cmpwi    r0, 0
beq      lbl_803EE6E0
lwz      r3, 0x50(r31)
cmplwi   r3, 0
beq      lbl_803EE6E0
addi     r0, r3, -1
stw      r0, 0x50(r31)

lbl_803EE6E0:
lwz      r0, 0x50(r31)
cmplwi   r0, 0
bne      lbl_803EE6F4
li       r3, 1
b        lbl_803EE6F8

lbl_803EE6F4:
li       r3, 0

lbl_803EE6F8:
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803EE70C
 * Size:	000244
 */
void TOmake::doDraw(void)
{
	/*
stwu     r1, -0x60(r1)
mflr     r0
stw      r0, 0x64(r1)
stw      r31, 0x5c(r1)
stw      r30, 0x58(r1)
stw      r29, 0x54(r1)
mr       r29, r3
lwz      r4, sys@sda21(r13)
lwz      r30, 0x24(r4)
addi     r31, r30, 0x190
lwz      r12, 0(r31)
mr       r3, r31
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lwz      r3, 0x58(r29)
mr       r4, r30
mr       r5, r31
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl
lwz      r0, 0x4c(r29)
cmpwi    r0, 0
beq      lbl_803EE934
lwz      r3, sys@sda21(r13)
lwz      r3, 0x24(r3)
addi     r31, r3, 0x190
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lwz      r0, 0x4c(r29)
lwz      r3, 0x44(r29)
cmpwi    r0, 2
stw      r3, 0x18(r1)
beq      lbl_803EE82C
bge      lbl_803EE8A8
cmpwi    r0, 1
bge      lbl_803EE7B4
b        lbl_803EE8A8

lbl_803EE7B4:
lwz      r4, 0x54(r29)
cmplwi   r4, 0
beq      lbl_803EE7F4
lwz      r3, 0x50(r29)
lis      r0, 0x4330
stw      r0, 0x30(r1)
lfd      f2, lbl_8051FE88@sda21(r2)
stw      r3, 0x34(r1)
lfd      f0, 0x30(r1)
stw      r4, 0x3c(r1)
fsubs    f1, f0, f2
stw      r0, 0x38(r1)
lfd      f0, 0x38(r1)
fsubs    f0, f0, f2
fdivs    f2, f1, f0
b        lbl_803EE7F8

lbl_803EE7F4:
lfs      f2, lbl_8051FE64@sda21(r2)

lbl_803EE7F8:
lbz      r3, 0x48(r29)
lis      r0, 0x4330
stw      r0, 0x40(r1)
lfd      f1, lbl_8051FE88@sda21(r2)
stw      r3, 0x44(r1)
lfd      f0, 0x40(r1)
fsubs    f0, f0, f1
fmuls    f0, f0, f2
fctiwz   f0, f0
stfd     f0, 0x48(r1)
lwz      r0, 0x4c(r1)
stb      r0, 0x1b(r1)
b        lbl_803EE8A8

lbl_803EE82C:
lwz      r4, 0x54(r29)
cmplwi   r4, 0
beq      lbl_803EE86C
lwz      r3, 0x50(r29)
lis      r0, 0x4330
stw      r0, 0x48(r1)
lfd      f2, lbl_8051FE88@sda21(r2)
stw      r3, 0x4c(r1)
lfd      f0, 0x48(r1)
stw      r4, 0x44(r1)
fsubs    f1, f0, f2
stw      r0, 0x40(r1)
lfd      f0, 0x40(r1)
fsubs    f0, f0, f2
fdivs    f1, f1, f0
b        lbl_803EE870

lbl_803EE86C:
lfs      f1, lbl_8051FE64@sda21(r2)

lbl_803EE870:
lbz      r3, 0x48(r29)
lis      r0, 0x4330
lfs      f0, lbl_8051FE60@sda21(r2)
stw      r3, 0x3c(r1)
lfd      f2, lbl_8051FE88@sda21(r2)
fsubs    f0, f0, f1
stw      r0, 0x38(r1)
lfd      f1, 0x38(r1)
fsubs    f1, f1, f2
fmuls    f0, f1, f0
fctiwz   f0, f0
stfd     f0, 0x30(r1)
lwz      r0, 0x34(r1)
stb      r0, 0x1b(r1)

lbl_803EE8A8:
lwz      r0, 0x18(r1)
mr       r3, r31
addi     r4, r1, 8
addi     r5, r1, 0xc
stw      r0, 0x14(r1)
addi     r6, r1, 0x10
addi     r7, r1, 0x14
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
lfs      f3, lbl_8051FE64@sda21(r2)
mr       r3, r31
stw      r4, 0x4c(r1)
addi     r4, r1, 0x1c
lfd      f2, lbl_8051FE88@sda21(r2)
stw      r0, 0x48(r1)
lfd      f0, 0x48(r1)
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

lbl_803EE934:
lwz      r0, 0x64(r1)
lwz      r31, 0x5c(r1)
lwz      r30, 0x58(r1)
lwz      r29, 0x54(r1)
mtlr     r0
addi     r1, r1, 0x60
blr
	*/
}

/*
 * --INFO--
 * Address:	803EE950
 * Size:	000044
 */
void TOmake::setController(Controller*)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
mr       r5, r3
lfs      f1, lbl_8051FE90@sda21(r2)
stw      r0, 0x14(r1)
addi     r7, r5, 0x3c
lfs      f2, lbl_8051FE94@sda21(r2)
li       r6, 6
stw      r4, 0x40(r3)
addi     r3, r5, 0x10
li       r5, 0
li       r8, 3
bl
init__Q23ebi24EUTPadInterface_countNumFP10ControllerllPlQ33ebi24EUTPadInterface_countNum8enumModeff
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803EE994
 * Size:	000064
 */
void TOmake::showPanes_() const
{
	/*
lwz      r4, 0x5c(r3)
li       r5, 1
li       r0, 0
stb      r5, 0xb0(r4)
lwz      r4, 0x60(r3)
stb      r5, 0xb0(r4)
lwz      r4, 0x64(r3)
stb      r5, 0xb0(r4)
lwz      r4, 0x68(r3)
stb      r5, 0xb0(r4)
lwz      r4, 0x8c(r3)
stb      r0, 0xb0(r4)
lwz      r4, 0x90(r3)
stb      r0, 0xb0(r4)
lwz      r4, 0x94(r3)
stb      r0, 0xb0(r4)
lwz      r4, 0x98(r3)
stb      r0, 0xb0(r4)
lwz      r4, 0x9c(r3)
stb      r0, 0xb0(r4)
lwz      r4, 0xa0(r3)
stb      r0, 0xb0(r4)
lwz      r3, 0xa4(r3)
stb      r0, 0xb0(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	803EE9F8
 * Size:	000028
 */
void TOmake::hidePanes_() const
{
	/*
lwz      r4, 0x5c(r3)
li       r0, 0
stb      r0, 0xb0(r4)
lwz      r4, 0x60(r3)
stb      r0, 0xb0(r4)
lwz      r4, 0x64(r3)
stb      r0, 0xb0(r4)
lwz      r3, 0x68(r3)
stb      r0, 0xb0(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	803EEA20
 * Size:	000054
 */
void TOmake::openFromMovie_() const
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
lfs      f1, kFadeTime__Q23ebi8E2DFader@sda21(r2)
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
lwz      r4, sys@sda21(r13)
lfs      f0, 0x54(r4)
fdivs    f1, f1, f0
bl       __cvt_fp2unsigned
stw      r3, 0x50(r31)
li       r4, 1
li       r0, 6
stw      r3, 0x54(r31)
stw      r4, 0x4c(r31)
stw      r0, 0xc(r31)
lwz      r31, 0xc(r1)
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803EEA74
 * Size:	0000B0
 */
void TOmake::openFromCardE_() const
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
li       r7, 1
lfs      f1, lbl_8051FE6C@sda21(r2)
stw      r0, 0x14(r1)
li       r0, 0
li       r5, 1
stw      r31, 0xc(r1)
mr       r31, r3
lwz      r4, 0x5c(r3)
addi     r3, r31, 0xe0
stb      r7, 0xb0(r4)
li       r4, 0
lwz      r6, 0x60(r31)
stb      r7, 0xb0(r6)
lwz      r6, 0x64(r31)
stb      r7, 0xb0(r6)
lwz      r6, 0x68(r31)
stb      r7, 0xb0(r6)
lwz      r6, 0x8c(r31)
stb      r0, 0xb0(r6)
lwz      r6, 0x90(r31)
stb      r0, 0xb0(r6)
lwz      r6, 0x94(r31)
stb      r0, 0xb0(r6)
lwz      r6, 0x98(r31)
stb      r0, 0xb0(r6)
lwz      r6, 0x9c(r31)
stb      r0, 0xb0(r6)
lwz      r6, 0xa0(r31)
stb      r0, 0xb0(r6)
lwz      r6, 0xa4(r31)
stb      r0, 0xb0(r6)
lwz      r6, sys@sda21(r13)
lfs      f0, 0x54(r6)
fmuls    f1, f1, f0
bl       play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
li       r0, 3
stw      r0, 0xc(r31)
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}
} // namespace Screen

/*
 * --INFO--
 * Address:	803EEB24
 * Size:	0000BC
 */
E2DCallBack_BlinkFontColor::E2DCallBack_BlinkFontColor()
    : E2DCallBack_Base()
    , _20()
    , _40(0.0f)
    , _44(0.03333f)
    , _48(1)
    , _49(0)
{
	_1C = 0;
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
stw      r30, 8(r1)
mr       r30, r3
mr       r31, r30
bl       __ct__5CNodeFv
lis      r3, __vt__Q29P2DScreen4Node@ha
lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r3, __vt__Q29P2DScreen4Node@l
lis      r6, __vt__Q23ebi16E2DCallBack_Base@ha
stw      r0, 0(r31)
li       r0, 0
lis      r3, __ct__Q23ebi16E2DFullFontColorFv@ha
li       r7, 1
stw      r0, 0x18(r31)
addi     r0, r4, __vt__Q29P2DScreen12CallBackNode@l
addi     r4, r3, __ct__Q23ebi16E2DFullFontColorFv@l
addi     r3, r6, __vt__Q23ebi16E2DCallBack_Base@l
stw      r0, 0(r31)
lis      r5, __vt__Q23ebi26E2DCallBack_BlinkFontColor@ha
addi     r0, r5, __vt__Q23ebi26E2DCallBack_BlinkFontColor@l
li       r6, 0x10
stw      r3, 0(r31)
addi     r3, r30, 0x20
li       r5, 0
stb      r7, 0x1c(r31)
li       r7, 2
stw      r0, 0(r30)
bl       __construct_array
lfs      f1, lbl_8051FE64@sda21(r2)
li       r4, 1
lfs      f0, lbl_8051FE68@sda21(r2)
li       r0, 0
stfs     f1, 0x40(r30)
mr       r3, r30
stfs     f0, 0x44(r30)
stb      r4, 0x48(r30)
stb      r0, 0x49(r30)
stb      r0, 0x1c(r30)
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

namespace Screen {
/*
 * --INFO--
 * Address:	803EEBE0
 * Size:	000008
 */
char* TOmake::getName()
{
	return "TOmake";
	/*
addi     r3, r2, lbl_8051FE98@sda21
blr
	*/
}
} // namespace Screen
} // namespace ebi
