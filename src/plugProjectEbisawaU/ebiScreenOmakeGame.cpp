#include "ebi/Omake.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80497BE8
    lbl_80497BE8:
        .asciz "ebiScreenOmakeGame"
        .skip 1
        .asciz "Screen_newScreen_of_TOmakeGame"
        .skip 1
        .asciz "omake_game.blo"
        .skip 1
        .asciz "Screen_setCallBackMessage_of_TOmakeGame"
        .asciz "omake_game.bck"
        .skip 1
    .global lbl_80497C64
    lbl_80497C64:
        .asciz "TOmakeGame"
        .skip 1

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q33ebi6Screen10TOmakeGame
    __vt__Q33ebi6Screen10TOmakeGame:
        .4byte 0
        .4byte 0
        .4byte setArchive__Q33ebi6Screen11TScreenBaseFP10JKRArchive
        .4byte openScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen7ArgOpen
        .4byte closeScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen8ArgClose
        .4byte killScreen__Q33ebi6Screen11TScreenBaseFv
        .4byte update__Q33ebi6Screen11TScreenBaseFv
        .4byte draw__Q33ebi6Screen11TScreenBaseFv
        .4byte isFinishScreen__Q33ebi6Screen11TScreenBaseFv
        .4byte doSetArchive__Q33ebi6Screen10TOmakeGameFP10JKRArchive
        .4byte doOpenScreen__Q33ebi6Screen10TOmakeGameFPQ33ebi6Screen7ArgOpen
        .4byte doCloseScreen__Q33ebi6Screen10TOmakeGameFPQ33ebi6Screen8ArgClose
        .4byte doKillScreen__Q33ebi6Screen11TScreenBaseFv
        .4byte doInitWaitState__Q33ebi6Screen11TScreenBaseFv
        .4byte doUpdateStateOpen__Q33ebi6Screen10TOmakeGameFv
        .4byte doUpdateStateWait__Q33ebi6Screen10TOmakeGameFv
        .4byte doUpdateStateClose__Q33ebi6Screen10TOmakeGameFv
        .4byte doDraw__Q33ebi6Screen10TOmakeGameFv
        .4byte getName__Q33ebi6Screen10TOmakeGameFv
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051FEC8
    lbl_8051FEC8:
        .float 1.0
    .global lbl_8051FECC
    lbl_8051FECC:
        .4byte 0x00000000
    .global lbl_8051FED0
    lbl_8051FED0:
        .4byte 0x42700000
    .global lbl_8051FED4
    lbl_8051FED4:
        .float 0.1
    .global lbl_8051FED8
    lbl_8051FED8:
        .4byte 0x40555555
    .global lbl_8051FEDC
    lbl_8051FEDC:
        .4byte 0x41F00000
    .global lbl_8051FEE0
    lbl_8051FEE0:
        .4byte 0x3F19999A
    .global lbl_8051FEE4
    lbl_8051FEE4:
        .4byte 0x3F28F5C3
    .global lbl_8051FEE8
    lbl_8051FEE8:
        .float 0.15
*/

namespace ebi {
namespace Screen {

/*
 * --INFO--
 * Address:	803F0CF4
 * Size:	000278
 */
TOmakeGame::TOmakeGame(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
lis      r4, __vt__Q33ebi6Screen20TScreenBaseInterface@ha
stw      r0, 0x14(r1)
addi     r0, r4, __vt__Q33ebi6Screen20TScreenBaseInterface@l
li       r4, 0
stw      r31, 0xc(r1)
stw      r30, 8(r1)
mr       r30, r3
lis      r3, __vt__Q33ebi6Screen11TScreenBase@ha
stw      r0, 0(r30)
addi     r0, r3, __vt__Q33ebi6Screen11TScreenBase@l
lis      r3, __vt__Q33ebi6Screen10TOmakeGame@ha
addi     r31, r30, 0x8c
stw      r0, 0(r30)
addi     r0, r3, __vt__Q33ebi6Screen10TOmakeGame@l
mr       r3, r31
stw      r4, 4(r30)
stw      r4, 8(r30)
stw      r0, 0(r30)
stw      r4, 0xc(r30)
stw      r4, 0x18(r30)
stw      r4, 0x1c(r30)
stw      r4, 0x44(r30)
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
addi     r31, r30, 0xc8
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
addi     r31, r30, 0x104
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
addi     r31, r30, 0x140
mr       r3, r31
bl       __ct__5CNodeFv
lis      r4, __vt__Q29P2DScreen4Node@ha
lis      r3, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r4, __vt__Q29P2DScreen4Node@l
lis      r5, __vt__Q23ebi16E2DCallBack_Base@ha
stw      r0, 0(r31)
li       r0, 0
lis      r4, __ct__Q23ebi26E2DCallBack_BlinkFontColorFv@ha
lis      r6, __vt__Q23ebi25E2DCallBack_CalcAnimation@ha
stw      r0, 0x18(r31)
addi     r0, r3, __vt__Q29P2DScreen12CallBackNode@l
lis      r3, __dt__Q23ebi26E2DCallBack_BlinkFontColorFv@ha
addi     r4, r4, __ct__Q23ebi26E2DCallBack_BlinkFontColorFv@l
stw      r0, 0(r31)
addi     r0, r5, __vt__Q23ebi16E2DCallBack_Base@l
addi     r5, r3, __dt__Q23ebi26E2DCallBack_BlinkFontColorFv@l
li       r3, 1
stw      r0, 0(r31)
addi     r0, r6, __vt__Q23ebi25E2DCallBack_CalcAnimation@l
li       r6, 0x4c
li       r7, 3
stb      r3, 0x1c(r31)
addi     r3, r30, 0x160
stw      r0, 0(r31)
bl       __construct_array
addi     r31, r30, 0x244
mr       r3, r31
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
lfs      f0, lbl_8051FEC8@sda21(r2)
li       r0, 0
mr       r3, r30
stfs     f0, 0x64(r31)
stw      r0, 0x68(r31)
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803F0F6C
 * Size:	0002F4
 */
void TOmakeGame::doSetArchive(JKRArchive*)
{
	/*
stwu     r1, -0x40(r1)
mflr     r0
lis      r5, lbl_80497BE8@ha
stw      r0, 0x44(r1)
stmw     r18, 8(r1)
mr       r31, r3
addi     r19, r5, lbl_80497BE8@l
mr       r18, r4
li       r5, 0
addi     r4, r19, 0x14
lwz      r3, sys@sda21(r13)
bl       heapStatusStart__6SystemFPcP7JKRHeap
li       r3, 0x148
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_803F0FB4
bl       __ct__Q29P2DScreen10Mgr_tuningFv
mr       r0, r3

lbl_803F0FB4:
stw      r0, 0x44(r31)
mr       r6, r18
addi     r4, r19, 0x34
lis      r5, 0x110
lwz      r3, 0x44(r31)
bl       set__9J2DScreenFPCcUlP10JKRArchive
lwz      r3, sys@sda21(r13)
addi     r4, r19, 0x14
bl       heapStatusEnd__6SystemFPc
lis      r4, 0x44415441@ha
lwz      r3, 0x44(r31)
addi     r6, r4, 0x44415441@l
li       r5, 0
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
li       r0, 0
lis      r11, 0x67616D31@ha
lis      r10, 0x4E677270@ha
lis      r9, 0x74676131@ha
lis      r8, 0x00577365@ha
lis      r7, 0x616D6531@ha
lis      r6, 0x655F7331@ha
lis      r5, 0x5467616D@ha
lis      r4, 0x67623031@ha
stb      r0, 0xb0(r3)
mr       r24, r31
addi     r25, r11, 0x67616D31@l
addi     r26, r10, 0x4E677270@l
addi     r27, r9, 0x74676131@l
addi     r28, r8, 0x00577365@l
addi     r29, r7, 0x616D6531@l
addi     r22, r6, 0x655F7331@l
addi     r21, r5, 0x5467616D@l
addi     r20, r4, 0x67623031@l
li       r30, 0

lbl_803F103C:
srawi    r23, r30, 0x1f
lwz      r3, 0x44(r31)
addc     r6, r30, r25
adde     r5, r23, r26
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x48(r24)
addc     r6, r30, r27
adde     r5, r23, r28
lwz      r3, 0x44(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x54(r24)
addc     r6, r30, r29
li       r0, 0x5467
lwz      r3, 0x44(r31)
adde     r5, r23, r0
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x68(r24)
addc     r6, r30, r22
adde     r5, r23, r21
lwz      r3, 0x44(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x74(r24)
addc     r6, r30, r20
li       r0, 0x5061
lwz      r3, 0x44(r31)
adde     r5, r23, r0
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
addi     r30, r30, 1
stw      r3, 0x80(r24)
cmpwi    r30, 3
addi     r24, r24, 4
blt      lbl_803F103C
lwz      r4, 0x54(r31)
li       r0, 0
lis      r3, 0x54736574@ha
li       r5, 0
stb      r0, 0xb0(r4)
addi     r6, r3, 0x54736574@l
lwz      r3, 0x58(r31)
stb      r0, 0xb0(r3)
lwz      r3, 0x5c(r31)
stb      r0, 0xb0(r3)
lwz      r3, 0x44(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x60(r31)
lis      r3, 0x65745F73@ha
addi     r6, r3, 0x65745F73@l
li       r5, 0x5473
lwz      r3, 0x44(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x64(r31)
addi     r4, r19, 0x44
li       r5, 0
lwz      r3, sys@sda21(r13)
bl       heapStatusStart__6SystemFPcP7JKRHeap
lwz      r3, 0x44(r31)
mr       r4, r3
bl       E2DPane_setTreeCallBackMessage__3ebiFPQ29P2DScreen3MgrP7J2DPane
lwz      r3, sys@sda21(r13)
addi     r4, r19, 0x44
bl       heapStatusEnd__6SystemFPc
lwz      r3, 0x44(r31)
addi     r5, r31, 0x8c
mr       r4, r3
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
lwz      r3, 0x44(r31)
addi     r5, r31, 0xc8
mr       r4, r3
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
lis      r4, 0x6377696E@ha
lwz      r3, 0x44(r31)
addi     r6, r4, 0x6377696E@l
addi     r7, r31, 0x104
li       r5, 0x7069
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
lwz      r3, 0x44(r31)
addi     r5, r31, 0x140
mr       r4, r3
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
mr       r5, r18
addi     r3, r31, 0x8c
addi     r4, r19, 0x6c
li       r6, 0x15
li       r7, 0x28
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r18
addi     r3, r31, 0xc8
addi     r4, r19, 0x6c
li       r6, 0
li       r7, 0x14
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r18
addi     r3, r31, 0x104
addi     r4, r19, 0x6c
li       r6, 0x50
li       r7, 0x64
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r22, r31
mr       r23, r31
li       r24, 0
lis      r21, 0x6F6C6F72@ha
lis      r20, 0x00547363@ha
lis      r18, 0x616d

lbl_803F11D8:
lwz      r3, 0x44(r31)
addi     r6, r21, 0x6F6C6F72@l
addi     r5, r20, 0x00547363@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
mr       r19, r3
lwz      r3, 0x44(r31)
addi     r6, r18, 0x6531
li       r5, 0x5467
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
mr       r4, r3
mr       r5, r19
addi     r3, r22, 0x160
bl       set__Q23ebi26E2DCallBack_BlinkFontColorFP10J2DTextBoxP10J2DTextBox
lwz      r3, 0x44(r31)
addi     r5, r22, 0x160
lwz      r4, 0x68(r23)
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
addi     r24, r24, 1
addi     r23, r23, 4
cmpwi    r24, 3
addi     r22, r22, 0x4c
blt      lbl_803F11D8
lis      r5, 0x6C637477@ha
lis      r4, 0x00577365@ha
lwz      r3, 0x44(r31)
addi     r6, r5, 0x6C637477@l
addi     r5, r4, 0x00577365@l
addi     r7, r31, 0x244
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
lmw      r18, 8(r1)
lwz      r0, 0x44(r1)
mtlr     r0
addi     r1, r1, 0x40
blr
	*/
}

/*
 * --INFO--
 * Address:	803F1260
 * Size:	000294
 */
void TOmakeGame::doOpenScreen(ebi::Screen::ArgOpen*)
{
	/*
stwu     r1, -0x50(r1)
mflr     r0
lfs      f1, lbl_8051FED0@sda21(r2)
li       r4, 0
stw      r0, 0x54(r1)
li       r0, 1
li       r5, 1
stw      r31, 0x4c(r1)
stw      r30, 0x48(r1)
stw      r29, 0x44(r1)
mr       r29, r3
stw      r28, 0x40(r1)
stb      r0, 0x10(r3)
addi     r3, r29, 0x8c
lwz      r6, sys@sda21(r13)
lfs      f0, 0x54(r6)
fmuls    f1, f1, f0
bl       play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
lwz      r5, sys@sda21(r13)
addi     r3, r29, 0x104
lfs      f1, lbl_8051FED0@sda21(r2)
li       r4, 0
lfs      f0, 0x54(r5)
li       r5, 1
fmuls    f1, f1, f0
bl       play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
li       r3, 1
li       r0, 0
stb      r3, 0x2b0(r29)
stw      r0, 0x40(r29)
lwz      r0, 0x40(r29)
slwi     r0, r0, 2
add      r3, r29, r0
lwz      r3, 0x54(r3)
bl       getBounds__7J2DPaneFv
lwz      r4, sys@sda21(r13)
lwz      r6, 0(r3)
lfs      f1, lbl_8051FED4@sda21(r2)
lfs      f0, 0x54(r4)
lwz      r5, 4(r3)
fdivs    f1, f1, f0
lwz      r4, 8(r3)
lwz      r0, 0xc(r3)
stw      r6, 0x28(r1)
stw      r5, 0x2c(r1)
stw      r4, 0x30(r1)
stw      r0, 0x34(r1)
bl       __cvt_fp2unsigned
stw      r3, 0x284(r29)
li       r0, 1
lwz      r5, 0x30(r1)
mr       r31, r29
stw      r3, 0x288(r29)
li       r30, 0
lwz      r6, 0x28(r1)
lwz      r3, 0x2c(r1)
stw      r6, 0x264(r29)
lwz      r4, 0x34(r1)
stw      r3, 0x268(r29)
stw      r5, 0x26c(r29)
stw      r4, 0x270(r29)
stw      r6, 0x274(r29)
stw      r3, 0x278(r29)
stw      r5, 0x27c(r29)
stw      r4, 0x280(r29)
stb      r0, 0x260(r29)
lwz      r0, 0x40(r29)
stw      r5, 0x20(r1)
slwi     r0, r0, 2
add      r3, r29, r0
stw      r4, 0x24(r1)
lwz      r0, 0x48(r3)
stw      r0, 0x2ac(r29)

lbl_803F1384:
li       r0, 0
stb      r0, 0x17c(r31)
lwz      r3, 0x178(r31)
cmplwi   r3, 0
beq      lbl_803F1430
lwz      r7, 0x180(r31)
mr       r28, r3
addi     r4, r1, 0x18
stw      r7, 0xc(r1)
lbz      r5, 0xc(r1)
lbz      r0, 0xd(r1)
stb      r5, 0x104(r3)
lbz      r5, 0xe(r1)
stb      r0, 0x105(r3)
lbz      r0, 0xf(r1)
stb      r5, 0x106(r3)
stb      r0, 0x107(r3)
lwz      r6, 0x184(r31)
stw      r7, 0x10(r1)
stw      r6, 8(r1)
lbz      r5, 8(r1)
lbz      r0, 9(r1)
stb      r5, 0x108(r3)
lbz      r5, 0xa(r1)
stb      r0, 0x109(r3)
lbz      r0, 0xb(r1)
stb      r5, 0x10a(r3)
stb      r0, 0x10b(r3)
lwz      r0, 0x188(r31)
stw      r6, 0x14(r1)
stw      r0, 0x18(r1)
lwz      r12, 0(r3)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0x18c(r31)
mr       r3, r28
addi     r4, r1, 0x1c
stw      r0, 0x1c(r1)
lwz      r12, 0(r28)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl

lbl_803F1430:
addi     r30, r30, 1
addi     r31, r31, 0x4c
cmpwi    r30, 3
blt      lbl_803F1384
lwz      r3, 0x40(r29)
li       r6, 1
lfs      f2, lbl_8051FED8@sda21(r2)
li       r0, 0
mulli    r5, r3, 0x4c
lfs      f0, lbl_8051FECC@sda21(r2)
mr       r3, r29
li       r4, 0
addi     r7, r5, 0x160
add      r7, r29, r7
stb      r6, 0x1c(r7)
lwz      r5, sys@sda21(r13)
lfs      f1, 0x54(r5)
fmuls    f1, f2, f1
stfs     f1, 0x44(r7)
stfs     f0, 0x40(r7)
stb      r6, 0x48(r7)
stb      r0, 0x49(r7)
bl       openMsg__Q33ebi6Screen10TOmakeGameFl
lwz      r3, 0x80(r29)
li       r0, 0
li       r4, 1
stb      r0, 0xb0(r3)
lwz      r3, 0x84(r29)
stb      r0, 0xb0(r3)
lwz      r3, 0x88(r29)
stb      r0, 0xb0(r3)
lwz      r0, 0x40(r29)
slwi     r0, r0, 2
add      r3, r29, r0
lwz      r3, 0x80(r3)
stb      r4, 0xb0(r3)
lwz      r3, 0x44(r29)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
lwz      r0, 0x54(r1)
lwz      r31, 0x4c(r1)
lwz      r30, 0x48(r1)
lwz      r29, 0x44(r1)
lwz      r28, 0x40(r1)
mtlr     r0
addi     r1, r1, 0x50
blr
	*/
}

/*
 * --INFO--
 * Address:	803F14F4
 * Size:	00003C
 */
void TOmakeGame::doCloseScreen(ebi::Screen::ArgClose*)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
lfs      f1, lbl_8051FED0@sda21(r2)
addi     r3, r3, 0xc8
stw      r0, 0x14(r1)
li       r5, 1
lwz      r4, sys@sda21(r13)
lfs      f0, 0x54(r4)
li       r4, 0
fmuls    f1, f1, f0
bl       play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803F1530
 * Size:	000054
 */
bool TOmakeGame::doUpdateStateOpen(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
lwz      r3, 0x44(r3)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
addi     r3, r31, 0x8c
bl       isFinish__Q23ebi19E2DCallBack_AnmBaseFv
clrlwi   r3, r3, 0x18
lwz      r31, 0xc(r1)
neg      r0, r3
or       r0, r0, r3
srwi     r3, r0, 0x1f
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803F1584
 * Size:	000258
 */
bool TOmakeGame::doUpdateStateWait(void)
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
mr       r31, r3
stw      r30, 0x18(r1)
lwz      r3, 0x44(r3)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
lbz      r0, 0x10(r31)
cmplwi   r0, 0
beq      lbl_803F1748
addi     r3, r31, 0x14
bl       update__Q23ebi24EUTPadInterface_countNumFv
lbz      r0, 0x21(r31)
cmplwi   r0, 0
beq      lbl_803F16FC
lwz      r0, 0x40(r31)
lwz      r30, 0x30(r31)
slwi     r0, r0, 2
add      r3, r31, r0
lwz      r3, 0x54(r3)
bl       getBounds__7J2DPaneFv
lwz      r8, 0(r3)
lwz      r7, 4(r3)
lwz      r6, 8(r3)
lwz      r5, 0xc(r3)
addi     r3, r31, 0x28c
lwz      r4, 0x274(r31)
lwz      r0, 0x278(r31)
stw      r8, 8(r1)
lfs      f1, lbl_8051FED4@sda21(r2)
stw      r4, 0x264(r31)
lfs      f2, lbl_8051FEDC@sda21(r2)
stw      r0, 0x268(r31)
lfs      f3, lbl_8051FEE0@sda21(r2)
lwz      r4, 0x27c(r31)
lwz      r0, 0x280(r31)
stw      r7, 0xc(r1)
lfs      f4, lbl_8051FECC@sda21(r2)
stw      r4, 0x26c(r31)
stw      r0, 0x270(r31)
stw      r8, 0x274(r31)
stw      r7, 0x278(r31)
stw      r6, 0x27c(r31)
stw      r5, 0x280(r31)
lwz      r0, 0x288(r31)
stw      r6, 0x10(r1)
stw      r5, 0x14(r1)
stw      r0, 0x284(r31)
bl       up__Q32og6Screen8ScaleMgrFffff
lwz      r0, 0x40(r31)
mulli    r4, r30, 0x4c
li       r7, 0
lfs      f2, lbl_8051FED8@sda21(r2)
slwi     r0, r0, 2
lfs      f0, lbl_8051FECC@sda21(r2)
add      r3, r31, r0
lwz      r0, 0x48(r3)
add      r5, r31, r4
li       r6, 1
mr       r3, r31
stw      r0, 0x2ac(r31)
li       r4, 0
stb      r7, 0x1a8(r5)
stb      r6, 0x1a9(r5)
lwz      r0, 0x40(r31)
mulli    r5, r0, 0x4c
addi     r8, r5, 0x160
add      r8, r31, r8
stb      r6, 0x1c(r8)
lwz      r5, sys@sda21(r13)
lfs      f1, 0x54(r5)
fmuls    f1, f2, f1
stfs     f1, 0x44(r8)
stfs     f0, 0x40(r8)
stb      r6, 0x48(r8)
stb      r7, 0x49(r8)
bl       openMsg__Q33ebi6Screen10TOmakeGameFl
lwz      r5, sys@sda21(r13)
addi     r3, r31, 0x104
lfs      f1, lbl_8051FED0@sda21(r2)
li       r4, 0
lfs      f0, 0x54(r5)
fmuls    f1, f1, f0
bl       playBack__Q23ebi19E2DCallBack_AnmBaseFfb
li       r0, 0
li       r4, 0x1802
stb      r0, 0x2b0(r31)
li       r5, 0
lwz      r3, spSysIF__8PSSystem@sda21(r13)
bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_803F16FC:
lwz      r0, 0x284(r31)
cmplwi   r0, 0
bne      lbl_803F1748
lwz      r3, 0xc(r31)
lwz      r0, 0x1c(r3)
rlwinm.  r0, r0, 0, 0x17, 0x17
beq      lbl_803F1720
li       r0, 0
stb      r0, 0x10(r31)

lbl_803F1720:
lwz      r3, 0xc(r31)
lwz      r0, 0x1c(r3)
rlwinm.  r0, r0, 0, 0x16, 0x16
beq      lbl_803F1748
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x1801
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
li       r3, 1
b        lbl_803F17C4

lbl_803F1748:
addi     r3, r31, 0x104
bl       isFinish__Q23ebi19E2DCallBack_AnmBaseFv
clrlwi.  r0, r3, 0x18
beq      lbl_803F17C0
lbz      r0, 0x2b0(r31)
cmplwi   r0, 0
bne      lbl_803F17C0
lwz      r3, 0x80(r31)
li       r0, 0
li       r7, 1
lfs      f1, lbl_8051FED0@sda21(r2)
stb      r0, 0xb0(r3)
addi     r3, r31, 0x104
li       r4, 0
li       r5, 1
lwz      r6, 0x84(r31)
stb      r0, 0xb0(r6)
lwz      r6, 0x88(r31)
stb      r0, 0xb0(r6)
lwz      r0, 0x40(r31)
slwi     r0, r0, 2
add      r6, r31, r0
lwz      r6, 0x80(r6)
stb      r7, 0xb0(r6)
lwz      r6, sys@sda21(r13)
lfs      f0, 0x54(r6)
fmuls    f1, f1, f0
bl       play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
li       r0, 1
stb      r0, 0x2b0(r31)

lbl_803F17C0:
li       r3, 0

lbl_803F17C4:
lwz      r0, 0x24(r1)
lwz      r31, 0x1c(r1)
lwz      r30, 0x18(r1)
mtlr     r0
addi     r1, r1, 0x20
blr
	*/
}

/*
 * --INFO--
 * Address:	803F17DC
 * Size:	000054
 */
bool TOmakeGame::doUpdateStateClose(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
lwz      r3, 0x44(r3)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
addi     r3, r31, 0xc8
bl       isFinish__Q23ebi19E2DCallBack_AnmBaseFv
clrlwi   r3, r3, 0x18
lwz      r31, 0xc(r1)
neg      r0, r3
or       r0, r0, r3
srwi     r3, r0, 0x1f
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803F1830
 * Size:	000074
 */
void TOmakeGame::doDraw(void)
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
stw      r30, 0x18(r1)
stw      r29, 0x14(r1)
mr       r29, r3
lwz      r4, sys@sda21(r13)
lwz      r31, 0x24(r4)
addi     r30, r31, 0x190
lwz      r12, 0(r30)
mr       r3, r30
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lwz      r3, 0x44(r29)
mr       r4, r31
mr       r5, r30
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl
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
 * Address:	803F18A4
 * Size:	000044
 */
void TOmakeGame::setController(Controller*)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
mr       r5, r3
lfs      f1, lbl_8051FEE4@sda21(r2)
stw      r0, 0x14(r1)
addi     r7, r5, 0x40
lfs      f2, lbl_8051FEE8@sda21(r2)
li       r6, 2
stw      r4, 0xc(r3)
addi     r3, r5, 0x14
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
 * Address:	803F18E8
 * Size:	000048
 */
bool TOmakeGame::isDelegateControl(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
li       r31, 0
lbz      r0, 0x10(r3)
cmplwi   r0, 0
bne      lbl_803F1918
bl       isCloseScreen__Q33ebi6Screen11TScreenBaseFv
clrlwi.  r0, r3, 0x18
bne      lbl_803F1918
li       r31, 1

lbl_803F1918:
lwz      r0, 0x14(r1)
mr       r3, r31
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803F1930
 * Size:	00003C
 */
void TOmakeGame::setSelfControl(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
lfs      f1, lbl_8051FED4@sda21(r2)
stw      r0, 0x14(r1)
li       r0, 1
lfs      f2, lbl_8051FEDC@sda21(r2)
stb      r0, 0x10(r3)
addi     r3, r3, 0x28c
lfs      f3, lbl_8051FEE0@sda21(r2)
lfs      f4, lbl_8051FECC@sda21(r2)
bl       up__Q32og6Screen8ScaleMgrFffff
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803F196C
 * Size:	000108
 */
bool TOmakeGame::openMsg(long)
{
	/*
cmpwi    r4, 2
beq      lbl_803F1A10
bge      lbl_803F1988
cmpwi    r4, 0
beq      lbl_803F1998
bge      lbl_803F19FC
b        lbl_803F1A4C

lbl_803F1988:
cmpwi    r4, 4
beq      lbl_803F1A38
bge      lbl_803F1A4C
b        lbl_803F1A24

lbl_803F1998:
lwz      r0, 0x40(r3)
cmpwi    r0, 1
beq      lbl_803F19D4
bge      lbl_803F19B4
cmpwi    r0, 0
bge      lbl_803F19C0
b        lbl_803F1A54

lbl_803F19B4:
cmpwi    r0, 3
bge      lbl_803F1A54
b        lbl_803F19E8

lbl_803F19C0:
lis      r5, 0x305F3030@ha
lis      r4, 0x00343830@ha
addi     r6, r5, 0x305F3030@l
addi     r5, r4, 0x00343830@l
b        lbl_803F1A54

lbl_803F19D4:
lis      r5, 0x315F3030@ha
lis      r4, 0x00343830@ha
addi     r6, r5, 0x315F3030@l
addi     r5, r4, 0x00343830@l
b        lbl_803F1A54

lbl_803F19E8:
lis      r5, 0x325F3030@ha
lis      r4, 0x00343830@ha
addi     r6, r5, 0x325F3030@l
addi     r5, r4, 0x00343830@l
b        lbl_803F1A54

lbl_803F19FC:
lis      r5, 0x335F3030@ha
lis      r4, 0x00343832@ha
addi     r6, r5, 0x335F3030@l
addi     r5, r4, 0x00343832@l
b        lbl_803F1A54

lbl_803F1A10:
lis      r5, 0x345F3030@ha
lis      r4, 0x00343832@ha
addi     r6, r5, 0x345F3030@l
addi     r5, r4, 0x00343832@l
b        lbl_803F1A54

lbl_803F1A24:
lis      r5, 0x365F3030@ha
lis      r4, 0x00343832@ha
addi     r6, r5, 0x365F3030@l
addi     r5, r4, 0x00343832@l
b        lbl_803F1A54

lbl_803F1A38:
lis      r5, 0x355F3030@ha
lis      r4, 0x00343832@ha
addi     r6, r5, 0x355F3030@l
addi     r5, r4, 0x00343832@l
b        lbl_803F1A54

lbl_803F1A4C:
li       r3, 0
blr

lbl_803F1A54:
lwz      r4, 0x60(r3)
stw      r6, 0x1c(r4)
stw      r5, 0x18(r4)
lwz      r4, 0x64(r3)
li       r3, 1
stw      r6, 0x1c(r4)
stw      r5, 0x18(r4)
blr
	*/
}

/*
 * --INFO--
 * Address:	803F1A74
 * Size:	00000C
 */
char* TOmakeGame::getName(void)
{
	/*
lis      r3, lbl_80497C64@ha
addi     r3, r3, lbl_80497C64@l
blr
	*/
}
} // namespace Screen
} // namespace ebi
