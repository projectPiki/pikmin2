#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80496D38
    lbl_80496D38:
        .4byte 0x65626953
        .4byte 0x63726565
        .4byte 0x6E546974
        .4byte 0x6C654D65
        .4byte 0x6E750000
        .4byte 0x54546974
        .4byte 0x6C654D65
        .4byte 0x6E753A3A
        .4byte 0x73657441
        .4byte 0x72636869
        .4byte 0x76650000
        .4byte 0x7469746C
        .4byte 0x655F6D65
        .4byte 0x6E755F36
        .4byte 0x2E626C6F
        .4byte 0x00000000
    .global lbl_80496D78
    lbl_80496D78:
        .4byte 0x65626953
        .4byte 0x63726565
        .4byte 0x6E546974
        .4byte 0x6C654D65
        .4byte 0x6E752E63
        .4byte 0x70700000
    .global lbl_80496D90
    lbl_80496D90:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x7469746C
        .4byte 0x655F6D65
        .4byte 0x6E755F35
        .4byte 0x2E62636B
        .4byte 0x00000000
        .4byte 0x7469746C
        .4byte 0x655F6D65
        .4byte 0x6E755F36
        .4byte 0x2E62636B
        .4byte 0x00000000
    .global lbl_80496DC4
    lbl_80496DC4:
        .4byte 0x54546974
        .4byte 0x6C654D65
        .4byte 0x6E750000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q33ebi6Screen10TTitleMenu
    __vt__Q33ebi6Screen10TTitleMenu:
        .4byte 0
        .4byte 0
        .4byte setArchive__Q33ebi6Screen11TScreenBaseFP10JKRArchive
        .4byte openScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen7ArgOpen
        .4byte closeScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen8ArgClose
        .4byte killScreen__Q33ebi6Screen11TScreenBaseFv
        .4byte update__Q33ebi6Screen11TScreenBaseFv
        .4byte draw__Q33ebi6Screen11TScreenBaseFv
        .4byte isFinishScreen__Q33ebi6Screen11TScreenBaseFv
        .4byte doSetArchive__Q33ebi6Screen10TTitleMenuFP10JKRArchive
        .4byte doOpenScreen__Q33ebi6Screen10TTitleMenuFPQ33ebi6Screen7ArgOpen
        .4byte doCloseScreen__Q33ebi6Screen10TTitleMenuFPQ33ebi6Screen8ArgClose
        .4byte doKillScreen__Q33ebi6Screen11TScreenBaseFv
        .4byte doInitWaitState__Q33ebi6Screen10TTitleMenuFv
        .4byte doUpdateStateOpen__Q33ebi6Screen10TTitleMenuFv
        .4byte doUpdateStateWait__Q33ebi6Screen10TTitleMenuFv
        .4byte doUpdateStateClose__Q33ebi6Screen10TTitleMenuFv
        .4byte doDraw__Q33ebi6Screen10TTitleMenuFv
        .4byte getName__Q33ebi6Screen10TTitleMenuFv
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051FB68
    lbl_8051FB68:
        .4byte 0x3F28F5C3
    .global lbl_8051FB6C
    lbl_8051FB6C:
        .float 0.15
    .global lbl_8051FB70
    lbl_8051FB70:
        .4byte 0x42700000
    .global lbl_8051FB74
    lbl_8051FB74:
        .4byte 0x41F00000
    .global lbl_8051FB78
    lbl_8051FB78:
        .4byte 0x3E4CCCCD
    .global lbl_8051FB7C
    lbl_8051FB7C:
        .float 1.0
    .global lbl_8051FB80
    lbl_8051FB80:
        .4byte 0x46FFFE00
        .4byte 0x00000000
    .global lbl_8051FB88
    lbl_8051FB88:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051FB90
    lbl_8051FB90:
        .4byte 0x00000000
    .global lbl_8051FB94
    lbl_8051FB94:
        .4byte 0x437F0000
    .global lbl_8051FB98
    lbl_8051FB98:
        .4byte 0x43300000
        .4byte 0x00000000
*/

namespace ebi {
namespace Screen {

/*
 * --INFO--
 * Address:	803D9CE0
 * Size:	000928
 */
void TTitleMenu::doSetArchive(JKRArchive*)
{
	/*
stwu     r1, -0x60(r1)
mflr     r0
lis      r5, lbl_80496D38@ha
stw      r0, 0x64(r1)
stmw     r24, 0x40(r1)
mr       r29, r3
addi     r31, r5, lbl_80496D38@l
mr       r30, r4
li       r5, 0
addi     r4, r31, 0x14
lwz      r3, sys@sda21(r13)
bl       heapStatusStart__6SystemFPcP7JKRHeap
li       r3, 0x148
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_803D9D28
bl       __ct__Q29P2DScreen10Mgr_tuningFv
mr       r0, r3

lbl_803D9D28:
stw      r0, 0xe0(r29)
mr       r6, r30
addi     r4, r31, 0x2c
lis      r5, 0x110
lwz      r3, 0xe0(r29)
bl       set__9J2DScreenFPCcUlP10JKRArchive
lis      r4, 0x67616D65@ha
lwz      r3, 0xe0(r29)
addi     r6, r4, 0x67616D65@l
li       r5, 0x4e
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0xe4(r29)
lis      r3, 0x004E7673@ha
addi     r6, r3, 0x004E7673@l
li       r5, 0
lwz      r3, 0xe0(r29)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0xe8(r29)
lis      r5, 0x6C6C656E@ha
lis      r4, 0x4E636861@ha
lwz      r3, 0xe0(r29)
addi     r6, r5, 0x6C6C656E@l
addi     r5, r4, 0x4E636861@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0xec(r29)
lis      r5, 0x74696F6E@ha
lis      r4, 0x004E6F70@ha
lwz      r3, 0xe0(r29)
addi     r6, r5, 0x74696F6E@l
addi     r5, r4, 0x004E6F70@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0xf0(r29)
lis      r5, 0x636F7265@ha
lis      r4, 0x4E686973@ha
lwz      r3, 0xe0(r29)
addi     r6, r5, 0x636F7265@l
addi     r5, r4, 0x4E686973@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0xf4(r29)
lis      r3, 0x6D616B65@ha
addi     r6, r3, 0x6D616B65@l
li       r5, 0x4e6f
lwz      r3, 0xe0(r29)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0xf8(r29)
lis      r8, 0x67613030@ha
lis      r3, 0x00507069@ha
addi     r4, r29, 0x114
addi     r5, r3, 0x00507069@l
lwz      r3, 0xe0(r29)
mr       r7, r5
addi     r6, r8, 0x67613030@l
addi     r8, r8, 0x3939
li       r9, 0x64
bl       gather__9J2DScreenFPP7J2DPaneUxUxi
stw      r3, 0xfc(r29)
lwz      r0, 0xfc(r29)
cmpwi    r0, 0x64
blt      lbl_803D9E28
addi     r3, r31, 0x40
addi     r5, r31, 0x58
li       r4, 0x2c
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803D9E28:
lis      r3, 0x00507069@ha
lis      r8, 0x76733030@ha
addi     r5, r3, 0x00507069@l
lwz      r3, 0xe0(r29)
mr       r7, r5
addi     r4, r29, 0x2a4
addi     r6, r8, 0x76733030@l
addi     r8, r8, 0x3939
li       r9, 0x64
bl       gather__9J2DScreenFPP7J2DPaneUxUxi
stw      r3, 0x100(r29)
lwz      r0, 0x100(r29)
cmpwi    r0, 0x64
blt      lbl_803D9E74
addi     r3, r31, 0x40
addi     r5, r31, 0x58
li       r4, 0x32
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803D9E74:
lis      r3, 0x00507069@ha
lis      r8, 0x63683030@ha
addi     r5, r3, 0x00507069@l
lwz      r3, 0xe0(r29)
mr       r7, r5
addi     r4, r29, 0x434
addi     r6, r8, 0x63683030@l
addi     r8, r8, 0x3939
li       r9, 0x64
bl       gather__9J2DScreenFPP7J2DPaneUxUxi
stw      r3, 0x104(r29)
lwz      r0, 0x104(r29)
cmpwi    r0, 0x64
blt      lbl_803D9EC0
addi     r3, r31, 0x40
addi     r5, r31, 0x58
li       r4, 0x38
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803D9EC0:
lis      r3, 0x00507069@ha
lis      r8, 0x6F703030@ha
addi     r5, r3, 0x00507069@l
lwz      r3, 0xe0(r29)
mr       r7, r5
addi     r4, r29, 0x5c4
addi     r6, r8, 0x6F703030@l
addi     r8, r8, 0x3939
li       r9, 0x64
bl       gather__9J2DScreenFPP7J2DPaneUxUxi
stw      r3, 0x108(r29)
lwz      r0, 0x108(r29)
cmpwi    r0, 0x64
blt      lbl_803D9F0C
addi     r3, r31, 0x40
addi     r5, r31, 0x58
li       r4, 0x3e
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803D9F0C:
lis      r3, 0x00507069@ha
lis      r8, 0x68733030@ha
addi     r5, r3, 0x00507069@l
lwz      r3, 0xe0(r29)
mr       r7, r5
addi     r4, r29, 0x754
addi     r6, r8, 0x68733030@l
addi     r8, r8, 0x3939
li       r9, 0x64
bl       gather__9J2DScreenFPP7J2DPaneUxUxi
stw      r3, 0x10c(r29)
lwz      r0, 0x10c(r29)
cmpwi    r0, 0x64
blt      lbl_803D9F58
addi     r3, r31, 0x40
addi     r5, r31, 0x58
li       r4, 0x44
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803D9F58:
lis      r3, 0x00507069@ha
lis      r8, 0x6F6D3030@ha
addi     r5, r3, 0x00507069@l
lwz      r3, 0xe0(r29)
mr       r7, r5
addi     r4, r29, 0x8e4
addi     r6, r8, 0x6F6D3030@l
addi     r8, r8, 0x3939
li       r9, 0x64
bl       gather__9J2DScreenFPP7J2DPaneUxUxi
stw      r3, 0x110(r29)
lwz      r0, 0x110(r29)
cmpwi    r0, 0x64
blt      lbl_803D9FA4
addi     r3, r31, 0x40
addi     r5, r31, 0x58
li       r4, 0x4a
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803D9FA4:
lis      r4, 0x6761696C@ha
lwz      r3, 0xe0(r29)
addi     r6, r4, 0x6761696C@l
li       r5, 0x50
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x20(r1)
lis      r4, 0x7673696C@ha
lwz      r3, 0xe0(r29)
addi     r6, r4, 0x7673696C@l
li       r5, 0x50
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x24(r1)
lis      r4, 0x6368696C@ha
lwz      r3, 0xe0(r29)
addi     r6, r4, 0x6368696C@l
li       r5, 0x50
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x28(r1)
lis      r4, 0x6F70696C@ha
lwz      r3, 0xe0(r29)
addi     r6, r4, 0x6F70696C@l
li       r5, 0x50
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x2c(r1)
lis      r4, 0x6869696C@ha
lwz      r3, 0xe0(r29)
addi     r6, r4, 0x6869696C@l
li       r5, 0x50
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x30(r1)
lis      r4, 0x6F6D696C@ha
lwz      r3, 0xe0(r29)
addi     r6, r4, 0x6F6D696C@l
li       r5, 0x50
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x34(r1)
lis      r4, 0x67616972@ha
lwz      r3, 0xe0(r29)
addi     r6, r4, 0x67616972@l
li       r5, 0x50
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 8(r1)
lis      r4, 0x76736972@ha
lwz      r3, 0xe0(r29)
addi     r6, r4, 0x76736972@l
li       r5, 0x50
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0xc(r1)
lis      r4, 0x63686972@ha
lwz      r3, 0xe0(r29)
addi     r6, r4, 0x63686972@l
li       r5, 0x50
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x10(r1)
lis      r4, 0x6F706972@ha
lwz      r3, 0xe0(r29)
addi     r6, r4, 0x6F706972@l
li       r5, 0x50
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x14(r1)
lis      r4, 0x68696972@ha
lwz      r3, 0xe0(r29)
addi     r6, r4, 0x68696972@l
li       r5, 0x50
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x18(r1)
lis      r4, 0x6F6D6972@ha
lwz      r3, 0xe0(r29)
addi     r6, r4, 0x6F6D6972@l
li       r5, 0x50
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
lwz      r4, 0xe0(r29)
stw      r3, 0x1c(r1)
mr       r3, r4
bl       E2DPane_setTreeCallBackMessage__3ebiFPQ29P2DScreen3MgrP7J2DPane
lwz      r3, 0xe0(r29)
addi     r5, r29, 0x12e4
mr       r4, r3
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
lwz      r3, 0xe0(r29)
addi     r5, r29, 0x1320
mr       r4, r3
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
li       r25, 0
mr       r26, r29

lbl_803DA0F8:
mr       r28, r26
mr       r27, r29
li       r24, 0

lbl_803DA104:
lwz      r3, 0xe0(r29)
addi     r5, r28, 0xa74
lwz      r4, 0xe4(r27)
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
addi     r24, r24, 1
addi     r27, r27, 4
cmpwi    r24, 6
addi     r28, r28, 0x3c
blt      lbl_803DA104
addi     r25, r25, 1
addi     r26, r26, 0x168
cmpwi    r25, 2
blt      lbl_803DA0F8
mr       r26, r29
addi     r27, r1, 0x20
addi     r28, r1, 8
li       r24, 0

lbl_803DA148:
lwz      r3, 0xe0(r29)
addi     r5, r26, 0xd44
lwz      r4, 0(r27)
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
lwz      r3, 0xe0(r29)
addi     r5, r26, 0xeac
lwz      r4, 0(r28)
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
lwz      r3, 0xe0(r29)
addi     r5, r26, 0x1014
lwz      r4, 0(r27)
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
lwz      r3, 0xe0(r29)
addi     r5, r26, 0x117c
lwz      r4, 0(r28)
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
addi     r24, r24, 1
addi     r27, r27, 4
cmpwi    r24, 6
addi     r28, r28, 4
addi     r26, r26, 0x3c
blt      lbl_803DA148
lwz      r3, 0xe0(r29)
addi     r5, r29, 0x135c
mr       r4, r3
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
mr       r5, r30
addi     r3, r29, 0xa74
addi     r4, r31, 0x64
li       r6, 0x64
li       r7, 0xdd
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r29, 0xab0
addi     r4, r31, 0x64
li       r6, 0x127
li       r7, 0x1a5
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r29, 0xaec
addi     r4, r31, 0x64
li       r6, 0x1ef
li       r7, 0x26d
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r29, 0xb28
addi     r4, r31, 0x64
li       r6, 0x2b7
li       r7, 0x335
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r29, 0xb64
addi     r4, r31, 0x64
li       r6, 0x37f
li       r7, 0x3fd
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r29, 0xba0
addi     r4, r31, 0x64
li       r6, 0x447
li       r7, 0x4c5
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r29, 0xbdc
addi     r4, r31, 0x78
li       r6, 0x64
li       r7, 0xdd
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r29, 0xc18
addi     r4, r31, 0x78
li       r6, 0x127
li       r7, 0x1a5
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r29, 0xc54
addi     r4, r31, 0x78
li       r6, 0x1ef
li       r7, 0x26d
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r29, 0xc90
addi     r4, r31, 0x78
li       r6, 0x2b7
li       r7, 0x335
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r29, 0xccc
addi     r4, r31, 0x78
li       r6, 0x37f
li       r7, 0x3fd
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r29, 0xd08
addi     r4, r31, 0x78
li       r6, 0x447
li       r7, 0x4c5
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
addi     r24, r31, 0x78
mr       r5, r30
mr       r4, r24
addi     r3, r29, 0xd44
li       r6, 0x5f
li       r7, 0x6d
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r4, r24
mr       r5, r30
addi     r3, r29, 0x1014
li       r6, 0x6e
li       r7, 0xe5
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r4, r24
mr       r5, r30
addi     r3, r29, 0xd80
li       r6, 0x127
li       r7, 0x135
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r4, r24
mr       r5, r30
addi     r3, r29, 0x1050
li       r6, 0x136
li       r7, 0x1ad
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r4, r24
mr       r5, r30
addi     r3, r29, 0xdbc
li       r6, 0x1ee
li       r7, 0x1fd
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r4, r24
mr       r5, r30
addi     r3, r29, 0x108c
li       r6, 0x1fe
li       r7, 0x275
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r4, r24
mr       r5, r30
addi     r3, r29, 0xdf8
li       r6, 0x2b6
li       r7, 0x2c5
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r4, r24
mr       r5, r30
addi     r3, r29, 0x10c8
li       r6, 0x2c6
li       r7, 0x33d
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r4, r24
mr       r5, r30
addi     r3, r29, 0xe34
li       r6, 0x37e
li       r7, 0x38d
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r4, r24
mr       r5, r30
addi     r3, r29, 0x1104
li       r6, 0x38e
li       r7, 0x405
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r4, r24
mr       r5, r30
addi     r3, r29, 0xe70
li       r6, 0x446
li       r7, 0x455
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r4, r24
mr       r5, r30
addi     r3, r29, 0x1140
li       r6, 0x456
li       r7, 0x4cd
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r4, r24
mr       r5, r30
addi     r3, r29, 0xeac
li       r6, 0x5f
li       r7, 0x6d
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r4, r24
mr       r5, r30
addi     r3, r29, 0x117c
li       r6, 0x6e
li       r7, 0xe5
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r4, r24
mr       r5, r30
addi     r3, r29, 0xee8
li       r6, 0x127
li       r7, 0x135
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r4, r24
mr       r5, r30
addi     r3, r29, 0x11b8
li       r6, 0x136
li       r7, 0x1ad
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r4, r24
mr       r5, r30
addi     r3, r29, 0xf24
li       r6, 0x1ee
li       r7, 0x1fd
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r4, r24
mr       r5, r30
addi     r3, r29, 0x11f4
li       r6, 0x1fe
li       r7, 0x275
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r4, r24
mr       r5, r30
addi     r3, r29, 0xf60
li       r6, 0x2b6
li       r7, 0x2c5
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r4, r24
mr       r5, r30
addi     r3, r29, 0x1230
li       r6, 0x2c6
li       r7, 0x33d
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r4, r24
mr       r5, r30
addi     r3, r29, 0xf9c
li       r6, 0x37e
li       r7, 0x38d
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r4, r24
mr       r5, r30
addi     r3, r29, 0x126c
li       r6, 0x38e
li       r7, 0x405
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r4, r24
mr       r5, r30
addi     r3, r29, 0xfd8
li       r6, 0x446
li       r7, 0x455
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r4, r24
mr       r5, r30
addi     r3, r29, 0x12a8
li       r6, 0x456
li       r7, 0x4cd
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r4, r24
mr       r5, r30
addi     r3, r29, 0x12e4
li       r6, 0
li       r7, 0x64
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
mr       r5, r30
addi     r3, r29, 0x1320
addi     r4, r31, 0x64
li       r6, 0
li       r7, 0x64
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
lwz      r3, 0xe0(r29)
li       r4, 1
bl       E2DPane_setTreeInfluencedAlpha__3ebiFP7J2DPaneb
li       r0, 2
mr       r7, r29
mr       r8, r29
li       r4, 0
mtctr    r0

lbl_803DA564:
addi     r6, r7, 0xd44
addi     r5, r7, 0x1014
stw      r6, 0x4c(r8)
addi     r3, r7, 0xeac
addi     r0, r7, 0x117c
addi     r6, r7, 0xd80
stw      r5, 0x50(r8)
addi     r5, r7, 0x1050
stw      r4, 0x54(r8)
stw      r3, 0x94(r8)
addi     r3, r7, 0xee8
stw      r0, 0x98(r8)
addi     r0, r7, 0x11b8
stw      r4, 0x9c(r8)
stw      r6, 0x58(r8)
addi     r6, r7, 0xdbc
stw      r5, 0x5c(r8)
addi     r5, r7, 0x108c
stw      r4, 0x60(r8)
stw      r3, 0xa0(r8)
addi     r3, r7, 0xf24
stw      r0, 0xa4(r8)
addi     r0, r7, 0x11f4
addi     r7, r7, 0xb4
stw      r4, 0xa8(r8)
stw      r6, 0x64(r8)
stw      r5, 0x68(r8)
stw      r4, 0x6c(r8)
stw      r3, 0xac(r8)
stw      r0, 0xb0(r8)
stw      r4, 0xb4(r8)
addi     r8, r8, 0x24
bdnz     lbl_803DA564
lwz      r3, sys@sda21(r13)
addi     r4, r31, 0x14
bl       heapStatusEnd__6SystemFPc
lmw      r24, 0x40(r1)
lwz      r0, 0x64(r1)
mtlr     r0
addi     r1, r1, 0x60
blr
	*/
}

/*
 * --INFO--
 * Address:	803DA608
 * Size:	00021C
 */
void TTitleMenu::doOpenScreen(ebi::Screen::ArgOpen*)
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
mr       r31, r3
stw      r30, 0x18(r1)
stw      r29, 0x14(r1)
stw      r28, 0x10(r1)
or.      r28, r4, r4
bne      lbl_803DA64C
lis      r3, lbl_80496D78@ha
lis      r5, lbl_80496D90@ha
addi     r3, r3, lbl_80496D78@l
li       r4, 0xc5
addi     r5, r5, lbl_80496D90@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803DA64C:
lwz      r0, 4(r28)
li       r3, 0
stw      r0, 0xdc(r31)
lwz      r0, 8(r28)
stw      r0, 0x3c(r31)
lwz      r0, 0xdc(r31)
cmpwi    r0, 0
blt      lbl_803DA678
cmpwi    r0, 2
bge      lbl_803DA678
li       r3, 1

lbl_803DA678:
clrlwi.  r0, r3, 0x18
bne      lbl_803DA69C
lis      r3, lbl_80496D78@ha
lis      r5, lbl_80496D90@ha
addi     r3, r3, lbl_80496D78@l
li       r4, 0xcb
addi     r5, r5, lbl_80496D90@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803DA69C:
lwz      r3, 0xe0(r31)
bl       E2DPane_setTreeShow__3ebiFP7J2DPane
lis      r3, gGameConfig__4Game@ha
addi     r30, r3, gGameConfig__4Game@l
lwz      r0, 0x1c8(r30)
cmpwi    r0, 0
beq      lbl_803DA6F8
li       r28, 0
mr       r29, r31

lbl_803DA6C0:
cmpwi    r28, 1
beq      lbl_803DA6E8
cmpwi    r28, 2
beq      lbl_803DA6E8
lwz      r3, 0xe4(r29)
li       r4, 0
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl

lbl_803DA6E8:
addi     r28, r28, 1
addi     r29, r29, 4
cmpwi    r28, 6
blt      lbl_803DA6C0

lbl_803DA6F8:
lwz      r0, 0x1c8(r30)
cmpwi    r0, 0
beq      lbl_803DA72C
lwz      r4, 0xc(r31)
addi     r3, r31, 0x10
lfs      f1, lbl_8051FB68@sda21(r2)
addi     r7, r31, 0x3c
lfs      f2, lbl_8051FB6C@sda21(r2)
li       r5, 1
li       r6, 2
li       r8, 3
bl
init__Q23ebi24EUTPadInterface_countNumFP10ControllerllPlQ33ebi24EUTPadInterface_countNum8enumModeff
b        lbl_803DA750

lbl_803DA72C:
lwz      r4, 0xc(r31)
addi     r3, r31, 0x10
lfs      f1, lbl_8051FB68@sda21(r2)
addi     r7, r31, 0x3c
lfs      f2, lbl_8051FB6C@sda21(r2)
li       r5, 0
li       r6, 5
li       r8, 3
bl
init__Q23ebi24EUTPadInterface_countNumFP10ControllerllPlQ33ebi24EUTPadInterface_countNum8enumModeff

lbl_803DA750:
lwz      r3, 0xe0(r31)
lwz      r12, 0(r3)
lwz      r12, 0x54(r12)
mtctr    r12
bctrl
lwz      r0, 0xdc(r31)
cmpwi    r0, 1
beq      lbl_803DA7B8
bge      lbl_803DA7E0
cmpwi    r0, 0
bge      lbl_803DA780
b        lbl_803DA7E0

lbl_803DA780:
lwz      r4, 0xec(r31)
li       r0, 0
addi     r3, r31, 0x12e4
stb      r0, 0xb0(r4)
bl       stop__Q23ebi19E2DCallBack_AnmBaseFv
lwz      r5, sys@sda21(r13)
addi     r3, r31, 0x1320
lfs      f1, lbl_8051FB70@sda21(r2)
li       r4, 0
lfs      f0, 0x54(r5)
li       r5, 1
fmuls    f1, f1, f0
bl       play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
b        lbl_803DA7E0

lbl_803DA7B8:
lwz      r5, sys@sda21(r13)
addi     r3, r31, 0x12e4
lfs      f1, lbl_8051FB70@sda21(r2)
li       r4, 0
lfs      f0, 0x54(r5)
li       r5, 1
fmuls    f1, f1, f0
bl       play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
addi     r3, r31, 0x1320
bl       stop__Q23ebi19E2DCallBack_AnmBaseFv

lbl_803DA7E0:
li       r0, 0
li       r4, 0xff
stb      r0, 0x40(r31)
stb      r0, 0x41(r31)
lwz      r3, 0xe0(r31)
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
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
 * Address:	803DA824
 * Size:	0001C4
 */
void TTitleMenu::doInitWaitState(void)
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
mr       r31, r3
stw      r30, 0x18(r1)
stw      r29, 0x14(r1)
stw      r28, 0x10(r1)
lwz      r0, 0xdc(r3)
cmpwi    r0, 1
beq      lbl_803DA88C
bge      lbl_803DA8B4
cmpwi    r0, 0
bge      lbl_803DA860
b        lbl_803DA8B4

lbl_803DA860:
addi     r3, r31, 0x1320
bl       setEndFrame__Q23ebi19E2DCallBack_AnmBaseFv
li       r29, 0
mr       r30, r31

lbl_803DA870:
addi     r3, r30, 0xbdc
bl       stop__Q23ebi19E2DCallBack_AnmBaseFv
addi     r29, r29, 1
addi     r30, r30, 0x3c
cmpwi    r29, 6
blt      lbl_803DA870
b        lbl_803DA8B4

lbl_803DA88C:
addi     r3, r31, 0x12e4
bl       setEndFrame__Q23ebi19E2DCallBack_AnmBaseFv
li       r29, 0
mr       r30, r31

lbl_803DA89C:
addi     r3, r30, 0xa74
bl       stop__Q23ebi19E2DCallBack_AnmBaseFv
addi     r29, r29, 1
addi     r30, r30, 0x3c
cmpwi    r29, 6
blt      lbl_803DA89C

lbl_803DA8B4:
lwz      r6, 0xdc(r31)
li       r4, 0
lwz      r0, 0x3c(r31)
li       r5, 1
lwz      r3, sys@sda21(r13)
mulli    r6, r6, 0x168
lfs      f1, lbl_8051FB70@sda21(r2)
lfs      f0, 0x54(r3)
mulli    r0, r0, 0x3c
fmuls    f1, f1, f0
add      r3, r6, r0
addi     r3, r3, 0xa74
add      r3, r31, r3
bl       play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
lwz      r4, 0x3c(r31)
mr       r3, r31
bl       showPika___Q33ebi6Screen10TTitleMenuFl
mr       r29, r31
li       r28, 0
li       r30, 0

lbl_803DA904:
stw      r30, 0x54(r29)
lwz      r3, 0x4c(r29)
bl       setStartFrame__Q23ebi19E2DCallBack_AnmBaseFv
stw      r30, 0x9c(r29)
lwz      r3, 0x94(r29)
bl       setStartFrame__Q23ebi19E2DCallBack_AnmBaseFv
addi     r28, r28, 1
addi     r29, r29, 0xc
cmpwi    r28, 6
blt      lbl_803DA904
lwz      r3, 0x3c(r31)
li       r0, 1
lfs      f1, lbl_8051FB70@sda21(r2)
li       r4, 0
mulli    r3, r3, 0xc
li       r5, 1
addi     r30, r3, 0x4c
add      r30, r31, r30
stw      r0, 8(r30)
lwz      r6, sys@sda21(r13)
lwz      r3, 0(r30)
lfs      f0, 0x54(r6)
fmuls    f1, f1, f0
bl       play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
lwz      r3, 4(r30)
bl       stop__Q23ebi19E2DCallBack_AnmBaseFv
lwz      r3, 0x3c(r31)
li       r0, 1
lfs      f1, lbl_8051FB70@sda21(r2)
li       r4, 0
mulli    r3, r3, 0xc
li       r5, 1
addi     r30, r3, 0x94
add      r30, r31, r30
stw      r0, 8(r30)
lwz      r6, sys@sda21(r13)
lwz      r3, 0(r30)
lfs      f0, 0x54(r6)
fmuls    f1, f1, f0
bl       play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
lwz      r3, 4(r30)
bl       stop__Q23ebi19E2DCallBack_AnmBaseFv
lwz      r3, sys@sda21(r13)
lfs      f1, lbl_8051FB74@sda21(r2)
lfs      f0, 0x54(r3)
fdivs    f1, f1, f0
bl       __cvt_fp2unsigned
stw      r3, 0x44(r31)
stw      r3, 0x48(r31)
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
 * Address:	803DA9E8
 * Size:	000070
 */
void TTitleMenu::doCloseScreen(ebi::Screen::ArgClose*)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
lbz      r0, 0x41(r3)
cmplwi   r0, 0
beq      lbl_803DAA28
lwz      r3, sys@sda21(r13)
lfs      f1, lbl_8051FB78@sda21(r2)
lfs      f0, 0x54(r3)
fdivs    f1, f1, f0
bl       __cvt_fp2unsigned
stw      r3, 0x44(r31)
stw      r3, 0x48(r31)
b        lbl_803DAA44

lbl_803DAA28:
lwz      r3, sys@sda21(r13)
lfs      f1, lbl_8051FB7C@sda21(r2)
lfs      f0, 0x54(r3)
fdivs    f1, f1, f0
bl       __cvt_fp2unsigned
stw      r3, 0x44(r31)
stw      r3, 0x48(r31)

lbl_803DAA44:
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803DAA58
 * Size:	000084
 */
void TTitleMenu::doUpdateStateOpen(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
stw      r30, 8(r1)
mr       r30, r3
lwz      r3, 0xe0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
lwz      r0, 0xdc(r30)
cmpwi    r0, 1
beq      lbl_803DAAA8
bge      lbl_803DAAAC
cmpwi    r0, 0
bge      lbl_803DAAA0
b        lbl_803DAAAC

lbl_803DAAA0:
addi     r31, r30, 0x1320
b        lbl_803DAAAC

lbl_803DAAA8:
addi     r31, r30, 0x12e4

lbl_803DAAAC:
mr       r3, r31
bl       isFinish__Q23ebi19E2DCallBack_AnmBaseFv
clrlwi   r3, r3, 0x18
lwz      r31, 0xc(r1)
neg      r0, r3
lwz      r30, 8(r1)
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
 * Address:	803DAADC
 * Size:	000470
 */
void TTitleMenu::doUpdateStateWait(void)
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
stw      r30, 0x18(r1)
mr       r30, r3
stw      r29, 0x14(r1)
lwz      r3, 0x44(r3)
cmplwi   r3, 0
beq      lbl_803DAB0C
addi     r0, r3, -1
stw      r0, 0x44(r30)

lbl_803DAB0C:
lwz      r3, 0xe0(r30)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
li       r31, 0
mr       r29, r30

lbl_803DAB28:
lwz      r0, 0x54(r29)
cmpwi    r0, 2
beq      lbl_803DABB0
bge      lbl_803DAB48
cmpwi    r0, 0
beq      lbl_803DABB0
bge      lbl_803DAB54
b        lbl_803DABB0

lbl_803DAB48:
cmpwi    r0, 4
bge      lbl_803DABB0
b        lbl_803DAB98

lbl_803DAB54:
lwz      r3, 0x4c(r29)
bl       isFinish__Q23ebi19E2DCallBack_AnmBaseFv
clrlwi.  r0, r3, 0x18
beq      lbl_803DABB0
li       r0, 2
stw      r0, 0x54(r29)
lwz      r3, 0x4c(r29)
bl       stop__Q23ebi19E2DCallBack_AnmBaseFv
lwz      r3, sys@sda21(r13)
li       r4, 2
lfs      f1, lbl_8051FB70@sda21(r2)
li       r5, 1
lfs      f0, 0x54(r3)
lwz      r3, 0x50(r29)
fmuls    f1, f1, f0
bl       play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
b        lbl_803DABB0

lbl_803DAB98:
lwz      r3, 0x4c(r29)
bl       isFinish__Q23ebi19E2DCallBack_AnmBaseFv
clrlwi.  r0, r3, 0x18
beq      lbl_803DABB0
li       r0, 0
stw      r0, 0x54(r29)

lbl_803DABB0:
lwz      r0, 0x9c(r29)
cmpwi    r0, 2
beq      lbl_803DAC38
bge      lbl_803DABD0
cmpwi    r0, 0
beq      lbl_803DAC38
bge      lbl_803DABDC
b        lbl_803DAC38

lbl_803DABD0:
cmpwi    r0, 4
bge      lbl_803DAC38
b        lbl_803DAC20

lbl_803DABDC:
lwz      r3, 0x94(r29)
bl       isFinish__Q23ebi19E2DCallBack_AnmBaseFv
clrlwi.  r0, r3, 0x18
beq      lbl_803DAC38
li       r0, 2
stw      r0, 0x9c(r29)
lwz      r3, 0x94(r29)
bl       stop__Q23ebi19E2DCallBack_AnmBaseFv
lwz      r3, sys@sda21(r13)
li       r4, 2
lfs      f1, lbl_8051FB70@sda21(r2)
li       r5, 1
lfs      f0, 0x54(r3)
lwz      r3, 0x98(r29)
fmuls    f1, f1, f0
bl       play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
b        lbl_803DAC38

lbl_803DAC20:
lwz      r3, 0x94(r29)
bl       isFinish__Q23ebi19E2DCallBack_AnmBaseFv
clrlwi.  r0, r3, 0x18
beq      lbl_803DAC38
li       r0, 0
stw      r0, 0x9c(r29)

lbl_803DAC38:
addi     r31, r31, 1
addi     r29, r29, 0xc
cmpwi    r31, 6
blt      lbl_803DAB28
addi     r3, r30, 0x10
bl       update__Q23ebi24EUTPadInterface_countNumFv
lbz      r0, 0x1d(r30)
cmplwi   r0, 0
beq      lbl_803DADF0
lwz      r0, 0xdc(r30)
lwz      r31, 0x2c(r30)
cmpwi    r0, 0
bne      lbl_803DAC94
lwz      r3, 0x3c(r30)
cmpwi    r3, 2
bne      lbl_803DAC94
cmpw     r31, r3
bge      lbl_803DAC8C
addi     r0, r3, 1
stw      r0, 0x3c(r30)
b        lbl_803DAC94

lbl_803DAC8C:
addi     r0, r3, -1
stw      r0, 0x3c(r30)

lbl_803DAC94:
lwz      r6, 0xdc(r30)
li       r4, 0
lwz      r0, 0x3c(r30)
li       r5, 1
lwz      r3, sys@sda21(r13)
mulli    r6, r6, 0x168
lfs      f1, lbl_8051FB70@sda21(r2)
lfs      f0, 0x54(r3)
mulli    r0, r0, 0x3c
fmuls    f1, f1, f0
add      r3, r6, r0
addi     r3, r3, 0xa74
add      r3, r30, r3
bl       play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
lwz      r4, 0x3c(r30)
mr       r3, r30
bl       showPika___Q33ebi6Screen10TTitleMenuFl
lwz      r3, 0x3c(r30)
li       r0, 1
lfs      f1, lbl_8051FB70@sda21(r2)
li       r4, 0
mulli    r3, r3, 0xc
li       r5, 1
addi     r29, r3, 0x4c
add      r29, r30, r29
stw      r0, 8(r29)
lwz      r6, sys@sda21(r13)
lwz      r3, 0(r29)
lfs      f0, 0x54(r6)
fmuls    f1, f1, f0
bl       play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
lwz      r3, 4(r29)
bl       stop__Q23ebi19E2DCallBack_AnmBaseFv
lwz      r3, 0x3c(r30)
li       r0, 1
lfs      f1, lbl_8051FB70@sda21(r2)
li       r4, 0
mulli    r3, r3, 0xc
li       r5, 1
addi     r29, r3, 0x94
add      r29, r30, r29
stw      r0, 8(r29)
lwz      r6, sys@sda21(r13)
lwz      r3, 0(r29)
lfs      f0, 0x54(r6)
fmuls    f1, f1, f0
bl       play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
lwz      r3, 4(r29)
bl       stop__Q23ebi19E2DCallBack_AnmBaseFv
mulli    r29, r31, 0xc
li       r0, 3
lfs      f1, lbl_8051FB70@sda21(r2)
li       r4, 1
add      r3, r30, r29
stw      r0, 0x54(r3)
lwz      r5, sys@sda21(r13)
lwz      r3, 0x4c(r3)
lfs      f0, 0x54(r5)
fmuls    f1, f1, f0
bl       playBack__Q23ebi19E2DCallBack_AnmBaseFfb
add      r3, r30, r29
lwz      r3, 0x50(r3)
bl       stop__Q23ebi19E2DCallBack_AnmBaseFv
add      r3, r30, r29
li       r0, 3
stw      r0, 0x9c(r3)
li       r4, 1
lfs      f1, lbl_8051FB70@sda21(r2)
lwz      r5, sys@sda21(r13)
lwz      r3, 0x94(r3)
lfs      f0, 0x54(r5)
fmuls    f1, f1, f0
bl       playBack__Q23ebi19E2DCallBack_AnmBaseFfb
add      r3, r30, r29
lwz      r3, 0x98(r3)
bl       stop__Q23ebi19E2DCallBack_AnmBaseFv
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x1802
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
lwz      r3, sys@sda21(r13)
lfs      f1, lbl_8051FB74@sda21(r2)
lfs      f0, 0x54(r3)
fdivs    f1, f1, f0
bl       __cvt_fp2unsigned
stw      r3, 0x44(r30)
stw      r3, 0x48(r30)

lbl_803DADF0:
lwz      r3, 0xdc(r30)
lwz      r0, 0x3c(r30)
mulli    r3, r3, 0x168
mulli    r0, r0, 0x3c
add      r3, r3, r0
addi     r3, r3, 0xa74
add      r3, r30, r3
bl       isFinish__Q23ebi19E2DCallBack_AnmBaseFv
clrlwi.  r0, r3, 0x18
beq      lbl_803DAEA0
bl       rand
xoris    r3, r3, 0x8000
lis      r0, 0x4330
stw      r3, 0xc(r1)
lfd      f3, lbl_8051FB88@sda21(r2)
stw      r0, 8(r1)
lfs      f1, lbl_8051FB80@sda21(r2)
lfd      f2, 8(r1)
lfs      f0, lbl_8051FB78@sda21(r2)
fsubs    f2, f2, f3
fdivs    f1, f2, f1
fcmpo    cr0, f1, f0
bge      lbl_803DAE5C
lwz      r4, 0x3c(r30)
mr       r3, r30
bl       showPika___Q33ebi6Screen10TTitleMenuFl
b        lbl_803DAE68

lbl_803DAE5C:
lwz      r4, 0x3c(r30)
mr       r3, r30
bl       hidePika___Q33ebi6Screen10TTitleMenuFl

lbl_803DAE68:
lwz      r6, 0xdc(r30)
li       r4, 0
lwz      r0, 0x3c(r30)
li       r5, 1
lwz      r3, sys@sda21(r13)
mulli    r6, r6, 0x168
lfs      f1, lbl_8051FB70@sda21(r2)
lfs      f0, 0x54(r3)
mulli    r0, r0, 0x3c
fmuls    f1, f1, f0
add      r3, r6, r0
addi     r3, r3, 0xa74
add      r3, r30, r3
bl       play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb

lbl_803DAEA0:
lwz      r3, 0xc(r30)
lwz      r3, 0x1c(r3)
rlwinm.  r0, r3, 0, 0x17, 0x17
bne      lbl_803DAEB8
rlwinm.  r0, r3, 0, 0x13, 0x13
beq      lbl_803DAED8

lbl_803DAEB8:
li       r0, 1
li       r4, 0x1800
stb      r0, 0x40(r30)
li       r5, 0
lwz      r3, spSysIF__8PSSystem@sda21(r13)
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
li       r3, 1
b        lbl_803DAF30

lbl_803DAED8:
rlwinm.  r0, r3, 0, 0x16, 0x16
beq      lbl_803DAF00
li       r0, 1
li       r4, 0x1801
stb      r0, 0x41(r30)
li       r5, 0
lwz      r3, spSysIF__8PSSystem@sda21(r13)
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
li       r3, 1
b        lbl_803DAF30

lbl_803DAF00:
lwz      r0, 0x44(r30)
cmplwi   r0, 0
bne      lbl_803DAF2C
li       r0, 1
li       r4, 0x1801
stb      r0, 0x41(r30)
li       r5, 0
lwz      r3, spSysIF__8PSSystem@sda21(r13)
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
li       r3, 1
b        lbl_803DAF30

lbl_803DAF2C:
li       r3, 0

lbl_803DAF30:
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
 * Address:	803DAF4C
 * Size:	0000D4
 */
void TTitleMenu::doUpdateStateClose(void)
{
	/*
stwu     r1, -0x30(r1)
mflr     r0
stw      r0, 0x34(r1)
stw      r31, 0x2c(r1)
mr       r31, r3
lwz      r3, 0xe0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
lwz      r3, 0x44(r31)
cmplwi   r3, 0
beq      lbl_803DAF88
addi     r0, r3, -1
stw      r0, 0x44(r31)

lbl_803DAF88:
lwz      r4, 0x48(r31)
cmplwi   r4, 0
beq      lbl_803DAFC8
lwz      r3, 0x44(r31)
lis      r0, 0x4330
stw      r0, 8(r1)
lfd      f2, lbl_8051FB98@sda21(r2)
stw      r3, 0xc(r1)
lfd      f0, 8(r1)
stw      r4, 0x14(r1)
fsubs    f1, f0, f2
stw      r0, 0x10(r1)
lfd      f0, 0x10(r1)
fsubs    f0, f0, f2
fdivs    f1, f1, f0
b        lbl_803DAFCC

lbl_803DAFC8:
lfs      f1, lbl_8051FB90@sda21(r2)

lbl_803DAFCC:
lfs      f0, lbl_8051FB94@sda21(r2)
lwz      r3, 0xe0(r31)
fmuls    f0, f0, f1
lwz      r12, 0(r3)
fctiwz   f0, f0
lwz      r12, 0x24(r12)
stfd     f0, 0x18(r1)
lwz      r4, 0x1c(r1)
mtctr    r12
bctrl
lwz      r0, 0x44(r31)
cmplwi   r0, 0
bne      lbl_803DB008
li       r3, 1
b        lbl_803DB00C

lbl_803DB008:
li       r3, 0

lbl_803DB00C:
lwz      r0, 0x34(r1)
lwz      r31, 0x2c(r1)
mtlr     r0
addi     r1, r1, 0x30
blr
	*/
}

/*
 * --INFO--
 * Address:	803DB020
 * Size:	000074
 */
void TTitleMenu::doDraw(void)
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
lwz      r30, 0x24(r4)
addi     r31, r30, 0x190
lwz      r12, 0(r31)
mr       r3, r31
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lwz      r3, 0xe0(r29)
mr       r4, r30
mr       r5, r31
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
 * Address:	803DB094
 * Size:	000008
 */
void TTitleMenu::setController(Controller* a1)
{
	// Generated from stw r4, 0xC(r3)
	_0C = a1;
}

/*
 * --INFO--
 * Address:	803DB09C
 * Size:	000060
 */
void TTitleMenu::openMenuSet(ebi::Screen::ArgOpen*)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
lwz      r12, 0(r3)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_803DB0E4
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0x34(r12)
mtctr    r12
bctrl
li       r3, 1
b        lbl_803DB0E8

lbl_803DB0E4:
li       r3, 0

lbl_803DB0E8:
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803DB0FC
 * Size:	000008
 */
void TTitleMenu::isDecide(void)
{
	/*
lbz      r3, 0x40(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	803DB104
 * Size:	000008
 */
void TTitleMenu::isCancel(void)
{
	/*
lbz      r3, 0x41(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	803DB10C
 * Size:	00003C
 */
void TTitleMenu::showPika_(long)
{
	/*
mulli    r0, r4, 0x190
slwi     r4, r4, 2
li       r8, 0
addi     r7, r4, 0xfc
add      r6, r3, r0
li       r5, 1
b        lbl_803DB138

lbl_803DB128:
lwz      r4, 0x114(r6)
addi     r6, r6, 4
addi     r8, r8, 1
stb      r5, 0xb0(r4)

lbl_803DB138:
lwzx     r0, r3, r7
cmpw     r8, r0
blt      lbl_803DB128
blr
	*/
}

/*
 * --INFO--
 * Address:	803DB148
 * Size:	00003C
 */
void TTitleMenu::hidePika_(long)
{
	/*
mulli    r0, r4, 0x190
slwi     r4, r4, 2
li       r8, 0
addi     r7, r4, 0xfc
add      r6, r3, r0
li       r5, 0
b        lbl_803DB174

lbl_803DB164:
lwz      r4, 0x114(r6)
addi     r6, r6, 4
addi     r8, r8, 1
stb      r5, 0xb0(r4)

lbl_803DB174:
lwzx     r0, r3, r7
cmpw     r8, r0
blt      lbl_803DB164
blr
	*/
}

/*
 * --INFO--
 * Address:	803DB184
 * Size:	00000C
 */
void TTitleMenu::getName(void)
{
	/*
lis      r3, lbl_80496DC4@ha
addi     r3, r3, lbl_80496DC4@l
blr
	*/
}
} // namespace Screen
} // namespace ebi
