#include "ebi/Omake.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80497B40
    lbl_80497B40:
        .asciz "ebiScreenOmakeCardE"
        .asciz "Screen_newScreen_of_TOmakeCardE"
        .asciz "omake_tunagu.blo"
        .skip 3
        .asciz "Screen_setCallBackMessage_of_TOmakeCardE"
        .skip 3
        .asciz "omake_tunagu.bck"
        .skip 3
        .asciz "omake_tunagu.bpk"
        .skip 3
    .global lbl_80497BDC
    lbl_80497BDC:
        .asciz "TOmakeCardE"

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q33ebi6Screen11TOmakeCardE
    __vt__Q33ebi6Screen11TOmakeCardE:
        .4byte 0
        .4byte 0
        .4byte setArchive__Q33ebi6Screen11TScreenBaseFP10JKRArchive
        .4byte openScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen7ArgOpen
        .4byte closeScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen8ArgClose
        .4byte killScreen__Q33ebi6Screen11TScreenBaseFv
        .4byte update__Q33ebi6Screen11TScreenBaseFv
        .4byte draw__Q33ebi6Screen11TScreenBaseFv
        .4byte isFinishScreen__Q33ebi6Screen11TScreenBaseFv
        .4byte doSetArchive__Q33ebi6Screen11TOmakeCardEFP10JKRArchive
        .4byte doOpenScreen__Q33ebi6Screen11TOmakeCardEFPQ33ebi6Screen7ArgOpen
        .4byte doCloseScreen__Q33ebi6Screen11TOmakeCardEFPQ33ebi6Screen8ArgClose
        .4byte doKillScreen__Q33ebi6Screen11TScreenBaseFv
        .4byte doInitWaitState__Q33ebi6Screen11TOmakeCardEFv
        .4byte doUpdateStateOpen__Q33ebi6Screen11TOmakeCardEFv
        .4byte doUpdateStateWait__Q33ebi6Screen11TOmakeCardEFv
        .4byte doUpdateStateClose__Q33ebi6Screen11TOmakeCardEFv
        .4byte doDraw__Q33ebi6Screen11TOmakeCardEFv
        .4byte getName__Q33ebi6Screen11TOmakeCardEFv
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051FEB0
    lbl_8051FEB0:
        .4byte 0x42280000
    .global lbl_8051FEB4
    lbl_8051FEB4:
        .4byte 0x41F00000
    .global lbl_8051FEB8
    lbl_8051FEB8:
        .4byte 0x42700000
    .global lbl_8051FEBC
    lbl_8051FEBC:
        .4byte 0x451F6000
    .global lbl_8051FEC0
    lbl_8051FEC0:
        .4byte 0x00000000
    .global lbl_8051FEC4
    lbl_8051FEC4:
        .float 1.0
*/

namespace ebi {
namespace Screen {

/*
 * --INFO--
 * Address:	803F02A4
 * Size:	0002B4
 */
TOmakeCardE::TOmakeCardE(void)
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
lis      r3, __vt__Q33ebi6Screen11TOmakeCardE@ha
addi     r31, r30, 0x20
stw      r0, 0(r30)
addi     r0, r3, __vt__Q33ebi6Screen11TOmakeCardE@l
mr       r3, r31
stw      r4, 4(r30)
stw      r4, 8(r30)
stw      r0, 0(r30)
stw      r4, 0x14(r30)
stw      r4, 0x18(r30)
stw      r4, 0x1c(r30)
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
addi     r31, r30, 0x5c
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
addi     r31, r30, 0x98
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
addi     r31, r30, 0xd4
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
addi     r31, r30, 0x110
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
addi     r31, r30, 0x14c
mr       r3, r31
bl       __ct__5CNodeFv
lis      r3, __vt__Q29P2DScreen4Node@ha
lis      r5, __vt__Q29P2DScreen12CallBackNode@ha
addi     r0, r3, __vt__Q29P2DScreen4Node@l
lis      r4, __vt__Q23ebi16E2DCallBack_Base@ha
stw      r0, 0(r31)
li       r7, 0
lis      r3, __vt__Q23ebi25E2DCallBack_CalcAnimation@ha
addi     r6, r5, __vt__Q29P2DScreen12CallBackNode@l
stw      r7, 0x18(r31)
addi     r5, r4, __vt__Q23ebi16E2DCallBack_Base@l
li       r4, 1
addi     r0, r3, __vt__Q23ebi25E2DCallBack_CalcAnimation@l
stw      r6, 0(r31)
mr       r3, r30
stw      r5, 0(r31)
stb      r4, 0x1c(r31)
stw      r0, 0(r31)
stw      r7, 0x16c(r30)
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
 * Address:	803F0558
 * Size:	000290
 */
void TOmakeCardE::doSetArchive(JKRArchive*)
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
lis      r5, lbl_80497B40@ha
stw      r0, 0x24(r1)
stmw     r26, 8(r1)
mr       r29, r3
addi     r31, r5, lbl_80497B40@l
mr       r30, r4
li       r5, 0
addi     r4, r31, 0x14
lwz      r3, sys@sda21(r13)
bl       heapStatusStart__6SystemFPcP7JKRHeap
li       r3, 0x148
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_803F05A0
bl       __ct__Q29P2DScreen10Mgr_tuningFv
mr       r0, r3

lbl_803F05A0:
stw      r0, 0x14(r29)
mr       r6, r30
addi     r4, r31, 0x34
lis      r5, 0x110
lwz      r3, 0x14(r29)
bl       set__9J2DScreenFPCcUlP10JKRArchive
lwz      r3, sys@sda21(r13)
addi     r4, r31, 0x14
bl       heapStatusEnd__6SystemFPc
lis      r4, 0x6A693031@ha
lwz      r3, 0x14(r29)
addi     r6, r4, 0x6A693031@l
li       r5, 0x7961
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x18(r29)
lis      r3, 0x6A693032@ha
addi     r6, r3, 0x6A693032@l
li       r5, 0x7961
lwz      r3, 0x14(r29)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x1c(r29)
li       r28, 0
lwz      r27, 0x14(r29)
lhz      r26, 0x102(r27)
b        lbl_803F0618

lbl_803F0604:
mr       r3, r27
mr       r4, r28
bl       getMaterial__9J2DScreenFUs
bl       makeAnmPointer__11J2DMaterialFv
addi     r28, r28, 1

lbl_803F0618:
clrlwi   r0, r28, 0x10
cmplw    r0, r26
blt      lbl_803F0604
lis      r4, 0x54736574@ha
lwz      r3, 0x14(r29)
addi     r6, r4, 0x54736574@l
li       r5, 0
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
mr       r28, r3
lis      r3, 0x65745F73@ha
lwz      r26, 0x18(r28)
li       r0, 0
lwz      r27, 0x1c(r28)
addi     r6, r3, 0x65745F73@l
li       r5, 0x5473
stw      r0, 0x1c(r28)
stw      r0, 0x18(r28)
lwz      r3, 0x14(r29)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
li       r0, 0
addi     r4, r31, 0x48
stw      r0, 0x1c(r3)
li       r5, 0
stw      r0, 0x18(r3)
lwz      r3, sys@sda21(r13)
bl       heapStatusStart__6SystemFPcP7JKRHeap
lwz      r3, 0x14(r29)
mr       r4, r3
bl       E2DPane_setTreeCallBackMessage__3ebiFPQ29P2DScreen3MgrP7J2DPane
lwz      r3, sys@sda21(r13)
addi     r4, r31, 0x48
bl       heapStatusEnd__6SystemFPc
stw      r27, 0x1c(r28)
li       r3, 0x58
stw      r26, 0x18(r28)
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_803F06B8
bl       __ct__Q28Morimura18TCallbackScrollMsgFv
mr       r0, r3

lbl_803F06B8:
stw      r0, 0x16c(r29)
lis      r3, 0x54736574@ha
lfs      f1, lbl_8051FEB0@sda21(r2)
addi     r6, r3, 0x54736574@l
lfs      f0, lbl_8051FEB4@sda21(r2)
li       r5, 0
stfs     f1, mLineSpace__Q28Morimura10TZukanBase@sda21(r13)
stfs     f0, mWarpRadius__Q28Morimura10TZukanBase@sda21(r13)
lwz      r3, 0x14(r29)
lwz      r7, 0x16c(r29)
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
lis      r6, 0x33647361@ha
lwz      r4, 0x14(r29)
mr       r3, r30
li       r5, 0x50
addi     r6, r6, 0x33647361@l
bl       setCallBack_3DStick__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx
lwz      r3, 0x14(r29)
addi     r5, r29, 0x20
mr       r4, r3
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
lwz      r3, 0x14(r29)
addi     r5, r29, 0x5c
mr       r4, r3
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
lwz      r3, 0x14(r29)
addi     r5, r29, 0x98
mr       r4, r3
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
lwz      r3, 0x14(r29)
addi     r5, r29, 0xd4
mr       r4, r3
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
lwz      r3, 0x14(r29)
addi     r5, r29, 0x110
mr       r4, r3
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
lwz      r3, 0x14(r29)
addi     r5, r29, 0x14c
mr       r4, r3
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
mr       r5, r30
addi     r3, r29, 0x20
addi     r4, r31, 0x74
li       r6, 0x191
li       r7, 0x1a4
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r29, 0x5c
addi     r4, r31, 0x74
li       r6, 0x97
li       r7, 0xf4
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r29, 0x98
addi     r4, r31, 0x74
li       r6, 0x17d
li       r7, 0x190
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r29, 0xd4
addi     r4, r31, 0x74
li       r6, 0x242
li       r7, 0x257
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r29, 0x110
addi     r4, r31, 0x88
li       r6, 0
li       r7, 0x64
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
lmw      r26, 8(r1)
lwz      r0, 0x24(r1)
mtlr     r0
addi     r1, r1, 0x20
blr
	*/
}

/*
 * --INFO--
 * Address:	803F07E8
 * Size:	0000BC
 */
void TOmakeCardE::doOpenScreen(ebi::Screen::ArgOpen*)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
lfs      f1, lbl_8051FEB8@sda21(r2)
li       r4, 0
stw      r0, 0x14(r1)
li       r0, 0
li       r5, 1
stw      r31, 0xc(r1)
mr       r31, r3
stw      r0, 0x170(r3)
addi     r3, r31, 0x20
lwz      r6, sys@sda21(r13)
lfs      f0, 0x54(r6)
fmuls    f1, f1, f0
bl       play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
lwz      r5, sys@sda21(r13)
addi     r3, r31, 0x110
lfs      f1, lbl_8051FEB8@sda21(r2)
li       r4, 2
lfs      f0, 0x54(r5)
li       r5, 1
fmuls    f1, f1, f0
bl       play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
lwz      r3, 0x16c(r31)
bl       reset__Q28Morimura18TCallbackScrollMsgFv
lwz      r3, 0x18(r31)
li       r4, 0
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
lwz      r3, 0x1c(r31)
li       r4, 0xff
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
lwz      r3, 0x14(r31)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803F08A4
 * Size:	000050
 */
void TOmakeCardE::doCloseScreen(ebi::Screen::ArgClose*)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
addi     r3, r31, 0x5c
bl       stop__Q23ebi19E2DCallBack_AnmBaseFv
lwz      r5, sys@sda21(r13)
addi     r3, r31, 0x98
lfs      f1, lbl_8051FEB8@sda21(r2)
li       r4, 0
lfs      f0, 0x54(r5)
li       r5, 1
fmuls    f1, f1, f0
bl       play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803F08F4
 * Size:	00003C
 */
void TOmakeCardE::doInitWaitState(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
lfs      f1, lbl_8051FEB8@sda21(r2)
addi     r3, r3, 0x5c
stw      r0, 0x14(r1)
li       r5, 1
lwz      r4, sys@sda21(r13)
lfs      f0, 0x54(r4)
li       r4, 2
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
 * Address:	803F0930
 * Size:	000054
 */
bool TOmakeCardE::doUpdateStateOpen(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
lwz      r3, 0x14(r3)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
addi     r3, r31, 0x20
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
 * Address:	803F0984
 * Size:	00029C
 */
bool TOmakeCardE::doUpdateStateWait(void)
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
mr       r31, r3
stw      r30, 0x18(r1)
lwz      r3, 0x14(r3)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
lwz      r0, 0x170(r31)
cmpwi    r0, 2
beq      lbl_803F0BB0
bge      lbl_803F09D0
cmpwi    r0, 0
beq      lbl_803F09DC
bge      lbl_803F0B60
b        lbl_803F0C04

lbl_803F09D0:
cmpwi    r0, 4
bge      lbl_803F0C04
b        lbl_803F0BEC

lbl_803F09DC:
lwz      r3, 0xc(r31)
lwz      r3, 0x1c(r3)
rlwinm.  r0, r3, 0, 0x17, 0x17
beq      lbl_803F0A0C
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x1800
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
li       r0, 0
li       r3, 1
stb      r0, 0x10(r31)
b        lbl_803F0C08

lbl_803F0A0C:
rlwinm.  r0, r3, 0, 0x16, 0x16
beq      lbl_803F0A34
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x1801
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
li       r0, 1
li       r3, 1
stb      r0, 0x10(r31)
b        lbl_803F0C08

lbl_803F0A34:
rlwinm.  r0, r3, 0, 0x1b, 0x1b
beq      lbl_803F0A7C
addi     r3, r31, 0x5c
bl       stop__Q23ebi19E2DCallBack_AnmBaseFv
lwz      r5, sys@sda21(r13)
addi     r3, r31, 0xd4
lfs      f1, lbl_8051FEB8@sda21(r2)
li       r4, 0
lfs      f0, 0x54(r5)
li       r5, 1
fmuls    f1, f1, f0
bl       play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x1811
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
li       r0, 3
stw      r0, 0x170(r31)

lbl_803F0A7C:
lwz      r4, 0xc(r31)
lwz      r3, 0x16c(r31)
lfs      f1, 0x4c(r4)
bl       scroll__Q28Morimura18TCallbackScrollMsgFf
lwz      r3, 0x16c(r31)
bl       getPosRate__Q28Morimura18TCallbackScrollMsgFv
lwz      r3, sys@sda21(r13)
lfs      f0, lbl_8051FEC0@sda21(r2)
lfs      f3, lbl_8051FEBC@sda21(r2)
lfs      f2, 0x54(r3)
fcmpo    cr0, f1, f0
lwz      r3, 0x18(r31)
fmuls    f0, f3, f2
lwz      r4, 0x1c(r31)
lbz      r0, 0xb2(r3)
lbz      r30, 0xb2(r4)
fctiwz   f0, f0
stfd     f0, 8(r1)
lwz      r4, 0xc(r1)
cror     2, 0, 2
bne      lbl_803F0ADC
subf     r0, r4, r0
add      r30, r30, r4
b        lbl_803F0B00

lbl_803F0ADC:
lfs      f0, lbl_8051FEC4@sda21(r2)
fcmpo    cr0, f1, f0
cror     2, 1, 2
bne      lbl_803F0AF8
add      r0, r0, r4
subf     r30, r4, r30
b        lbl_803F0B00

lbl_803F0AF8:
add      r0, r0, r4
add      r30, r30, r4

lbl_803F0B00:
cmpwi    r0, 0xff
ble      lbl_803F0B0C
li       r0, 0xff

lbl_803F0B0C:
cmpwi    r0, 0
bge      lbl_803F0B18
li       r0, 0

lbl_803F0B18:
cmpwi    r30, 0xff
ble      lbl_803F0B24
li       r30, 0xff

lbl_803F0B24:
cmpwi    r30, 0
bge      lbl_803F0B30
li       r30, 0

lbl_803F0B30:
lwz      r12, 0(r3)
clrlwi   r4, r0, 0x18
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
lwz      r3, 0x1c(r31)
clrlwi   r4, r30, 0x18
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
b        lbl_803F0C04

lbl_803F0B60:
lwz      r3, 0xc(r31)
lwz      r0, 0x1c(r3)
andi.    r0, r0, 0x210
beq      lbl_803F0C04
addi     r3, r31, 0x5c
bl       stop__Q23ebi19E2DCallBack_AnmBaseFv
lwz      r5, sys@sda21(r13)
addi     r3, r31, 0xd4
lfs      f1, lbl_8051FEB8@sda21(r2)
li       r4, 1
lfs      f0, 0x54(r5)
fmuls    f1, f1, f0
bl       playBack__Q23ebi19E2DCallBack_AnmBaseFfb
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x1811
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
li       r0, 2
stw      r0, 0x170(r31)
b        lbl_803F0C04

lbl_803F0BB0:
addi     r3, r31, 0xd4
bl       isFinish__Q23ebi19E2DCallBack_AnmBaseFv
clrlwi.  r0, r3, 0x18
beq      lbl_803F0C04
lwz      r5, sys@sda21(r13)
addi     r3, r31, 0x5c
lfs      f1, lbl_8051FEB8@sda21(r2)
li       r4, 2
lfs      f0, 0x54(r5)
li       r5, 1
fmuls    f1, f1, f0
bl       play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
li       r0, 0
stw      r0, 0x170(r31)
b        lbl_803F0C04

lbl_803F0BEC:
addi     r3, r31, 0xd4
bl       isFinish__Q23ebi19E2DCallBack_AnmBaseFv
clrlwi.  r0, r3, 0x18
beq      lbl_803F0C04
li       r0, 1
stw      r0, 0x170(r31)

lbl_803F0C04:
li       r3, 0

lbl_803F0C08:
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
 * Address:	803F0C20
 * Size:	000054
 */
bool TOmakeCardE::doUpdateStateClose(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
lwz      r3, 0x14(r3)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
addi     r3, r31, 0x98
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
 * Address:	803F0C74
 * Size:	000074
 */
void TOmakeCardE::doDraw(void)
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
lwz      r3, 0x14(r29)
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
 * Address:	803F0CE8
 * Size:	00000C
 */
char* TOmakeCardE::getName(void)
{
	/*
lis      r3, lbl_80497BDC@ha
addi     r3, r3, lbl_80497BDC@l
blr
	*/
}
} // namespace Screen
} // namespace ebi
