#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_ogObjChallenge2P_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048EEF0
    lbl_8048EEF0:
        .4byte 0x6F674F62
        .4byte 0x6A436861
        .4byte 0x6C6C656E
        .4byte 0x67653250
        .4byte 0x2E637070
        .4byte 0x00000000
        .4byte 0x45525221
        .4byte 0x20696E20
        .4byte 0x4F626A43
        .4byte 0x68616C6C
        .4byte 0x656E6765
        .4byte 0x32502043
        .4byte 0x72656174
        .4byte 0x658EB894
        .4byte 0x7381490A
        .4byte 0x00000000
        .4byte 0x6368616C
        .4byte 0x6C656E67
        .4byte 0x655F3150
        .4byte 0x2E626C6F
        .4byte 0x00000000
        .4byte 0x6368616C
        .4byte 0x6C656E67
        .4byte 0x655F3250
        .4byte 0x2E626C6F
        .4byte 0x00000000
        .4byte 0x32505F63
        .4byte 0x68616C6C
        .4byte 0x656E6765
        .4byte 0x5F706F6B
        .4byte 0x6F2E626C
        .4byte 0x6F000000
        .4byte 0x73637265
        .4byte 0x656E4F62
        .4byte 0x6A2E6800
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og9newScreen14ObjChallenge2P
    __vt__Q32og9newScreen14ObjChallenge2P:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32og9newScreen14ObjChallenge2PFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q32og9newScreen14ObjChallenge2PFv"
        .4byte update__Q26Screen7ObjBaseFv
        .4byte draw__Q26Screen7ObjBaseFR8Graphics
        .4byte start__Q26Screen7ObjBaseFPCQ26Screen13StartSceneArg
        .4byte end__Q26Screen7ObjBaseFPCQ26Screen11EndSceneArg
        .4byte setOwner__Q26Screen7ObjBaseFPQ26Screen9SceneBase
        .4byte getOwner__Q26Screen7ObjBaseCFv
        .4byte create__Q26Screen7ObjBaseFP10JKRArchive
        .4byte confirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte confirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte confirmEndScene__Q26Screen7ObjBaseFPQ26Screen11EndSceneArg
        .4byte
   doStart__Q32og9newScreen14ObjChallenge2PFPCQ26Screen13StartSceneArg .4byte
   doEnd__Q32og9newScreen16ObjChallengeBaseFPCQ26Screen11EndSceneArg .4byte
   doCreate__Q32og9newScreen14ObjChallenge2PFP10JKRArchive .4byte
   doUpdateFadein__Q32og9newScreen14ObjChallenge2PFv .4byte
   doUpdateFadeinFinish__Q32og9newScreen14ObjChallenge2PFv .4byte
   doUpdate__Q32og9newScreen14ObjChallenge2PFv .4byte
   doUpdateFinish__Q32og9newScreen14ObjChallenge2PFv .4byte
   doUpdateFadeout__Q32og9newScreen14ObjChallenge2PFv .4byte
   doUpdateFadeoutFinish__Q32og9newScreen14ObjChallenge2PFv .4byte
   doDraw__Q32og9newScreen14ObjChallenge2PFR8Graphics .4byte
   doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg .4byte
   doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg .4byte
   doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg .4byte
   doCreateAfter__Q32og9newScreen16ObjChallengeBaseFP10JKRArchivePQ32og6Screen18CallBack_CounterRV
        .4byte 0

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global msVal__Q32og9newScreen14ObjChallenge2P
    msVal__Q32og9newScreen14ObjChallenge2P:
        .skip 0x90

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051DC48
    lbl_8051DC48:
        .4byte 0x00000000
    .global lbl_8051DC4C
    lbl_8051DC4C:
        .float 1.0
    .global lbl_8051DC50
    lbl_8051DC50:
        .4byte 0x3F666666
    .global lbl_8051DC54
    lbl_8051DC54:
        .4byte 0x451A5000
    .global lbl_8051DC58
    lbl_8051DC58:
        .4byte 0x40490FDB
    .global lbl_8051DC5C
    lbl_8051DC5C:
        .4byte 0x43A2F983
    .global lbl_8051DC60
    lbl_8051DC60:
        .float 0.5
    .global lbl_8051DC64
    lbl_8051DC64:
        .4byte 0xC3960000
    .global lbl_8051DC68
    lbl_8051DC68:
        .4byte 0x43960000
        .4byte 0x00000000
    .global lbl_8051DC70
    lbl_8051DC70:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_8051DC78
    lbl_8051DC78:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051DC80
    lbl_8051DC80:
        .4byte 0x3F19999A
    .global lbl_8051DC84
    lbl_8051DC84:
        .4byte 0x3E4CCCCD
*/

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	8031EBE8
 * Size:	000064
 */
ObjChallenge2P::ObjChallenge2P(char const*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       __ct__Q32og9newScreen16ObjChallengeBaseFv
	lis      r3, __vt__Q32og9newScreen14ObjChallenge2P@ha
	li       r0, 0
	addi     r4, r3, __vt__Q32og9newScreen14ObjChallenge2P@l
	mr       r3, r30
	stw      r4, 0(r30)
	addi     r4, r4, 0x10
	stw      r4, 0x18(r30)
	stw      r31, 0x14(r30)
	stw      r0, 0x60(r30)
	stw      r0, 0x64(r30)
	stw      r0, 0x70(r30)
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
 * Address:	8031EC4C
 * Size:	000068
 */
ObjChallenge2P::~ObjChallenge2P(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8031EC98
	lis      r5, __vt__Q32og9newScreen14ObjChallenge2P@ha
	li       r4, 0
	addi     r5, r5, __vt__Q32og9newScreen14ObjChallenge2P@l
	stw      r5, 0(r30)
	addi     r0, r5, 0x10
	stw      r0, 0x18(r30)
	bl       __dt__Q32og9newScreen16ObjChallengeBaseFv
	extsh.   r0, r31
	ble      lbl_8031EC98
	mr       r3, r30
	bl       __dl__FPv

lbl_8031EC98:
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
 * Address:	8031ECB4
 * Size:	0006C4
 */
void ObjChallenge2P::doCreate(JKRArchive*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, lbl_8048EEF0@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	li       r3, 0x1c
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	addi     r29, r5, lbl_8048EEF0@l
	stw      r28, 0x10(r1)
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_8031ED88
	li       r3, 0x148
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8031ED08
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	mr       r0, r3

lbl_8031ED08:
	stw      r0, 0(r28)
	li       r3, 0x9c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8031ED24
	bl       __ct__Q32og6Screen18CallBack_LifeGaugeFv
	mr       r0, r3

lbl_8031ED24:
	stw      r0, 4(r28)
	li       r3, 0x44
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8031ED40
	bl       __ct__Q32og6Screen11DopingCheckFv
	mr       r0, r3

lbl_8031ED40:
	stw      r0, 8(r28)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8031ED5C
	bl       __ct__Q32og6Screen8ScaleMgrFv
	mr       r0, r3

lbl_8031ED5C:
	stw      r0, 0xc(r28)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8031ED78
	bl       __ct__Q32og6Screen8ScaleMgrFv
	mr       r0, r3

lbl_8031ED78:
	stw      r0, 0x10(r28)
	li       r0, 0
	stw      r0, 0x14(r28)
	stw      r0, 0x18(r28)

lbl_8031ED88:
	stw      r28, 0x68(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_8031EE34
	li       r3, 0x148
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8031EDB4
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	mr       r0, r3

lbl_8031EDB4:
	stw      r0, 0(r28)
	li       r3, 0x9c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8031EDD0
	bl       __ct__Q32og6Screen18CallBack_LifeGaugeFv
	mr       r0, r3

lbl_8031EDD0:
	stw      r0, 4(r28)
	li       r3, 0x44
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8031EDEC
	bl       __ct__Q32og6Screen11DopingCheckFv
	mr       r0, r3

lbl_8031EDEC:
	stw      r0, 8(r28)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8031EE08
	bl       __ct__Q32og6Screen8ScaleMgrFv
	mr       r0, r3

lbl_8031EE08:
	stw      r0, 0xc(r28)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8031EE24
	bl       __ct__Q32og6Screen8ScaleMgrFv
	mr       r0, r3

lbl_8031EE24:
	stw      r0, 0x10(r28)
	li       r0, 0
	stw      r0, 0x14(r28)
	stw      r0, 0x18(r28)

lbl_8031EE34:
	stw      r28, 0x6c(r31)
	mr       r3, r31
	bl       getDispMember__Q26Screen7ObjBaseFv
	lis      r4, 0x004F4741@ha
	lis      r6, 0x414C3250@ha
	li       r5, 0x4348
	mr       r28, r3
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x414C3250@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_8031EE6C
	stw      r28, 0x60(r31)
	b        lbl_8031EF84

lbl_8031EE6C:
	lis      r4, 0x004F4741@ha
	lis      r6, 0x554D4D59@ha
	mr       r3, r28
	li       r5, 0x44
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x554D4D59@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_8031EF70
	li       r3, 0x78
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8031EF68
	lis      r4, __vt__Q32og6Screen14DispMemberBase@ha
	lis      r5, __vt__Q32og6Screen21DispMemberChallenge2P@ha
	addi     r12, r4, __vt__Q32og6Screen14DispMemberBase@l
	lis      r4, __vt__Q32og6Screen21DispMemberDayEndCount@ha
	stw      r12, 0(r3)
	li       r11, 0
	addi     r0, r5, __vt__Q32og6Screen21DispMemberChallenge2P@l
	lfs      f3, lbl_8051DC48@sda21(r2)
	stw      r11, 4(r3)
	li       r10, 0x4d2
	li       r9, 0x32
	lfs      f2, lbl_8051DC4C@sda21(r2)
	stw      r0, 0(r3)
	li       r8, 1
	li       r7, 2
	li       r6, 0xa
	stfs     f3, 8(r3)
	addi     r5, r4, __vt__Q32og6Screen21DispMemberDayEndCount@l
	lfs      f1, lbl_8051DC50@sda21(r2)
	li       r4, 0x9ec
	stw      r11, 0xc(r3)
	li       r0, 0x1092
	lfs      f0, lbl_8051DC54@sda21(r2)
	stw      r11, 0x14(r3)
	stw      r10, 0x10(r3)
	stw      r9, 0x18(r3)
	stb      r11, 0x1c(r3)
	stw      r11, 0x20(r3)
	stfs     f2, 0x24(r3)
	stw      r8, 0x28(r3)
	stw      r7, 0x2c(r3)
	stw      r6, 0x30(r3)
	stw      r6, 0x34(r3)
	stb      r8, 0x38(r3)
	stfs     f2, 0x3c(r3)
	stw      r8, 0x40(r3)
	stw      r7, 0x44(r3)
	stw      r6, 0x48(r3)
	stw      r6, 0x4c(r3)
	stb      r8, 0x50(r3)
	stw      r12, 0x68(r3)
	stw      r11, 0x6c(r3)
	stw      r5, 0x68(r3)
	stfs     f1, 0x74(r3)
	stfs     f1, 0x70(r3)
	stw      r4, 0x54(r3)
	stb      r11, 0x58(r3)
	stfs     f0, 0x5c(r3)
	stw      r0, 0x64(r3)
	stfs     f3, 0x60(r3)

lbl_8031EF68:
	stw      r3, 0x60(r31)
	b        lbl_8031EF84

lbl_8031EF70:
	addi     r3, r29, 0
	addi     r5, r29, 0x18
	li       r4, 0x97
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8031EF84:
	li       r3, 0x148
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8031EF9C
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	mr       r0, r3

lbl_8031EF9C:
	stw      r0, 0x70(r31)
	li       r3, 0xc
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8031EFBC
	li       r4, 3
	bl       __ct__Q32og6Screen8BloGroupFUs
	mr       r0, r3

lbl_8031EFBC:
	stw      r0, 0x64(r31)
	mr       r7, r30
	addi     r4, r29, 0x40
	lis      r6, 0x104
	lwz      r5, 0x68(r31)
	lwz      r3, 0x64(r31)
	lwz      r5, 0(r5)
	bl
addBlo__Q32og6Screen8BloGroupFPcPQ29P2DScreen10Mgr_tuningUlP10JKRArchive lwz
r5, 0x6c(r31) mr       r7, r30 lwz      r3, 0x64(r31) addi     r4, r29, 0x54
	lwz      r5, 0(r5)
	lis      r6, 0x104
	bl
addBlo__Q32og6Screen8BloGroupFPcPQ29P2DScreen10Mgr_tuningUlP10JKRArchive lwz
r3, 0x64(r31) mr       r7, r30 lwz      r5, 0x70(r31) addi     r4, r29, 0x68
	lis      r6, 0x104
	bl
addBlo__Q32og6Screen8BloGroupFPcPQ29P2DScreen10Mgr_tuningUlP10JKRArchive lwz
r6, 0x60(r31) mr       r5, r30 lwz      r3, 0x68(r31) addi     r4, r6, 0x24
	bl
init__Q42og9newScreen14ObjChallenge2P9ScreenSetFPQ32og6Screen8DataNaviP10JKRArchivePQ32og6Screen21DispMemberChallenge2P
	lwz      r6, 0x60(r31)
	mr       r5, r30
	lwz      r3, 0x6c(r31)
	addi     r4, r6, 0x3c
	bl
init__Q42og9newScreen14ObjChallenge2P9ScreenSetFPQ32og6Screen8DataNaviP10JKRArchivePQ32og6Screen21DispMemberChallenge2P
	stw      r30, 8(r1)
	lis      r3, 0x6F6B6F31@ha
	addi     r6, r3, 0x6F6B6F31@l
	li       r5, 0x5070
	lwz      r4, 0x60(r31)
	li       r8, 6
	lwz      r3, 0x70(r31)
	li       r9, 1
	addi     r7, r4, 0x54
	li       r10, 1
	bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
li r0, 0x1814 lis      r4, 0x61645031@ha stw      r0, 0x94(r3) lis      r3,
0x00506465@ha addi     r6, r4, 0x61645031@l li       r8, 6 stw      r30,
8(r1) addi     r5, r3, 0x00506465@l li       r9, 1 li       r10, 1 lwz r4,
0x60(r31) lwz      r3, 0x70(r31) addi     r7, r4, 0x64 bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
lwz r3, 0x60(r31) lfs      f1, 0x5c(r3) bl       __cvt_fp2unsigned stw r3,
0x40(r31) lis      r3, 0x696D6531@ha addi     r6, r3, 0x696D6531@l addi r7,
r31, 0x40 stw      r30, 8(r1) li       r5, 0x5074 li       r8, 6 li r9, 1
	lwz      r3, 0x70(r31)
	li       r10, 1
	bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
li r4, 1 mr       r29, r3 bl
setCenteringMode__Q32og6Screen18CallBack_CounterRVFQ42og6Screen18CallBack_CounterRV17EnumCenteringMode
	lwz      r3, 0x70(r31)
	lis      r5, 0x6E753031@ha
	lis      r4, 0x004E6D65@ha
	lwz      r12, 0(r3)
	addi     r6, r5, 0x6E753031@l
	addi     r5, r4, 0x004E6D65@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r4, msVal__Q32og9newScreen14ObjChallenge2P@ha
	lfs      f1, lbl_8051DC48@sda21(r2)
	addi     r28, r4, msVal__Q32og9newScreen14ObjChallenge2P@l
	lfs      f0, lbl_8051DC4C@sda21(r2)
	stw      r3, 0x48(r28)
	cmplwi   r3, 0
	lfs      f4, 0xd4(r3)
	stfs     f4, 0x4c(r28)
	lfs      f3, 0xd8(r3)
	stfs     f3, 0x50(r28)
	lfs      f2, 0xcc(r3)
	stfs     f2, 0x54(r28)
	lfs      f2, 0xd0(r3)
	stfs     f2, 0x58(r28)
	stfs     f1, 0x5c(r28)
	stfs     f1, 0x60(r28)
	stfs     f0, 0x64(r28)
	stfs     f0, 0x68(r28)
	beq      lbl_8031F1A4
	fadds    f0, f4, f1
	fadds    f1, f3, f1
	stfs     f0, 0xd4(r3)
	stfs     f1, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x54(r28)
	lfs      f0, 0x64(r28)
	lfs      f3, 0x58(r28)
	lfs      f2, 0x68(r28)
	fmuls    f0, f1, f0
	lwz      r3, 0x48(r28)
	fmuls    f1, f3, f2
	stfs     f0, 0xcc(r3)
	stfs     f1, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_8031F1A4:
	lwz      r3, 0x70(r31)
	lis      r5, 0x6E753030@ha
	lis      r4, 0x004E6D65@ha
	lwz      r12, 0(r3)
	addi     r6, r5, 0x6E753030@l
	addi     r5, r4, 0x004E6D65@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r4, msVal__Q32og9newScreen14ObjChallenge2P@ha
	lfs      f1, lbl_8051DC48@sda21(r2)
	addi     r28, r4, msVal__Q32og9newScreen14ObjChallenge2P@l
	lfs      f0, lbl_8051DC4C@sda21(r2)
	stw      r3, 0x24(r28)
	cmplwi   r3, 0
	lfs      f4, 0xd4(r3)
	stfs     f4, 0x28(r28)
	lfs      f3, 0xd8(r3)
	stfs     f3, 0x2c(r28)
	lfs      f2, 0xcc(r3)
	stfs     f2, 0x30(r28)
	lfs      f2, 0xd0(r3)
	stfs     f2, 0x34(r28)
	stfs     f1, 0x38(r28)
	stfs     f1, 0x3c(r28)
	stfs     f0, 0x40(r28)
	stfs     f0, 0x44(r28)
	beq      lbl_8031F268
	fadds    f0, f4, f1
	fadds    f1, f3, f1
	stfs     f0, 0xd4(r3)
	stfs     f1, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x30(r28)
	lfs      f0, 0x40(r28)
	lfs      f3, 0x34(r28)
	lfs      f2, 0x44(r28)
	fmuls    f0, f1, f0
	lwz      r3, 0x24(r28)
	fmuls    f1, f3, f2
	stfs     f0, 0xcc(r3)
	stfs     f1, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_8031F268:
	lwz      r3, 0x70(r31)
	lis      r5, 0x6E753032@ha
	lis      r4, 0x004E6D65@ha
	lwz      r12, 0(r3)
	addi     r6, r5, 0x6E753032@l
	addi     r5, r4, 0x004E6D65@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r4, msVal__Q32og9newScreen14ObjChallenge2P@ha
	lfs      f1, lbl_8051DC48@sda21(r2)
	addi     r28, r4, msVal__Q32og9newScreen14ObjChallenge2P@l
	lfs      f0, lbl_8051DC4C@sda21(r2)
	stw      r3, 0x6c(r28)
	cmplwi   r3, 0
	lfs      f4, 0xd4(r3)
	stfs     f4, 0x70(r28)
	lfs      f3, 0xd8(r3)
	stfs     f3, 0x74(r28)
	lfs      f2, 0xcc(r3)
	stfs     f2, 0x78(r28)
	lfs      f2, 0xd0(r3)
	stfs     f2, 0x7c(r28)
	stfs     f1, 0x80(r28)
	stfs     f1, 0x84(r28)
	stfs     f0, 0x88(r28)
	stfs     f0, 0x8c(r28)
	beq      lbl_8031F32C
	fadds    f0, f4, f1
	fadds    f1, f3, f1
	stfs     f0, 0xd4(r3)
	stfs     f1, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x78(r28)
	lfs      f0, 0x88(r28)
	lfs      f3, 0x7c(r28)
	lfs      f2, 0x8c(r28)
	fmuls    f0, f1, f0
	lwz      r3, 0x6c(r28)
	fmuls    f1, f3, f2
	stfs     f0, 0xcc(r3)
	stfs     f1, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_8031F32C:
	lwz      r4, 0x60(r31)
	mr       r3, r31
	lwz      r4, 0x14(r4)
	bl       setSubLevel__Q32og9newScreen16ObjChallengeBaseFUl
	mr       r3, r31
	mr       r4, r30
	lwz      r12, 0(r31)
	mr       r5, r29
	lwz      r12, 0x78(r12)
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
 * Address:	8031F378
 * Size:	0002BC
 */
void ObjChallenge2P::ScreenSet::init((og::Screen::DataNavi*, JKRArchive*, og::Screen::DispMemberChallenge2P*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stmw      r27, 0x2C(r1)
	  mr        r29, r3
	  mr        r30, r4
	  mr        r31, r5
	  mr        r27, r6
	  li        r3, 0x44
	  bl        -0x2FB4F8
	  mr.       r28, r3
	  beq-      .loc_0x38
	  bl        -0x17B88
	  mr        r28, r3

	.loc_0x38:
	  lis       r5, 0x7069
	  lwz       r4, 0x0(r29)
	  mr        r3, r28
	  mr        r8, r31
	  addi      r6, r5, 0x6B69
	  addi      r7, r30, 0x8
	  li        r5, 0
	  bl        -0x17AF0
	  lis       r4, 0x7069
	  lwz       r3, 0x0(r29)
	  mr        r7, r28
	  li        r5, 0
	  addi      r6, r4, 0x6B69
	  bl        0x115740
	  addi      r0, r30, 0x4
	  lis       r3, 0x635F
	  stw       r0, 0x8(r1)
	  li        r0, 0x3
	  addi      r8, r3, 0x6D6C
	  li        r4, 0x2
	  stw       r0, 0xC(r1)
	  li        r0, 0x1
	  mr        r10, r8
	  addi      r6, r3, 0x6D72
	  stw       r4, 0x10(r1)
	  li        r5, 0
	  li        r7, 0
	  li        r9, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0x18(r1)
	  lwz       r3, 0x0(r29)
	  bl        -0x12EFC
	  addi      r0, r27, 0x18
	  lis       r3, 0x635F
	  stw       r0, 0x8(r1)
	  li        r0, 0x3
	  addi      r8, r3, 0x6C6C
	  li        r4, 0x2
	  stw       r0, 0xC(r1)
	  li        r0, 0x1
	  mr        r10, r8
	  addi      r6, r3, 0x6C72
	  stw       r4, 0x10(r1)
	  li        r5, 0
	  li        r7, 0
	  li        r9, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0x18(r1)
	  lwz       r3, 0x0(r29)
	  bl        -0x12F44
	  li        r0, 0x1828
	  lis       r4, 0x6472
	  stw       r0, 0x94(r3)
	  li        r0, 0x182A
	  addi      r8, r4, 0x5F6C
	  addi      r5, r30, 0xC
	  stw       r0, 0x98(r3)
	  li        r7, 0x3
	  li        r3, 0x2
	  li        r0, 0x1
	  stw       r5, 0x8(r1)
	  mr        r10, r8
	  addi      r6, r4, 0x5F72
	  li        r5, 0
	  stw       r7, 0xC(r1)
	  li        r7, 0
	  li        r9, 0
	  stw       r3, 0x10(r1)
	  stw       r0, 0x14(r1)
	  stw       r31, 0x18(r1)
	  lwz       r3, 0x0(r29)
	  bl        -0x12F9C
	  li        r4, 0x1
	  bl        -0x13BF8
	  lwz       r3, 0x0(r29)
	  lis       r4, 0x6472
	  addi      r6, r4, 0x5F63
	  li        r5, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  lis       r4, 0x6479
	  stb       r0, 0xB0(r3)
	  addi      r0, r30, 0x10
	  addi      r8, r4, 0x5F6C
	  li        r5, 0x3
	  stw       r0, 0x8(r1)
	  li        r3, 0x2
	  li        r0, 0x1
	  mr        r10, r8
	  stw       r5, 0xC(r1)
	  addi      r6, r4, 0x5F72
	  li        r5, 0
	  li        r7, 0
	  stw       r3, 0x10(r1)
	  li        r9, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0x18(r1)
	  lwz       r3, 0x0(r29)
	  bl        -0x13014
	  li        r4, 0x1
	  bl        -0x13C70
	  lwz       r3, 0x0(r29)
	  lis       r4, 0x6479
	  addi      r6, r4, 0x5F63
	  li        r5, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  lis       r5, 0x6F5F
	  stb       r0, 0xB0(r3)
	  lis       r4, 0x74
	  addi      r6, r5, 0x3031
	  lwz       r3, 0x0(r29)
	  addi      r5, r4, 0x6F79
	  bl        -0x1C6E0
	  stw       r3, 0x14(r29)
	  lis       r5, 0x6F5F
	  lis       r4, 0x74
	  lwz       r3, 0x0(r29)
	  addi      r6, r5, 0x3030
	  addi      r5, r4, 0x6F79
	  bl        -0x1C6FC
	  stw       r3, 0x18(r29)
	  lwz       r3, 0x8(r29)
	  lwz       r4, 0x14(r29)
	  lwz       r5, 0x18(r29)
	  lwz       r6, 0xC(r29)
	  lwz       r7, 0x10(r29)
	  bl        -0x1B7C0
	  lwz       r3, 0x4(r29)
	  mr        r5, r30
	  lwz       r4, 0x0(r29)
	  li        r6, 0
	  bl        -0x193D8
	  lis       r4, 0x6261
	  lwz       r3, 0x0(r29)
	  lwz       r7, 0x4(r29)
	  addi      r6, r4, 0x636B
	  li        r5, 0
	  bl        0x115534
	  lis       r4, 0x8051
	  lwz       r3, 0x4(r29)
	  addi      r4, r4, 0x3F40
	  lfs       f1, 0x8(r4)
	  lfs       f2, 0xC(r4)
	  bl        -0x18D10
	  lis       r4, 0x6D65
	  lwz       r3, 0x0(r29)
	  addi      r6, r4, 0x7465
	  li        r5, 0
	  bl        0xE168
	  lmw       r27, 0x2C(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000EC
 */
void ObjChallenge2P::ScreenSet::update(og::Screen::DataNavi&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8031F634
 * Size:	000260
 */
void ObjChallenge2P::commonUpdate(void)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r31, r3
	lwz      r29, 0x68(r3)
	lwz      r30, 0x60(r3)
	lwz      r3, 0xc(r29)
	bl       calc__Q32og6Screen8ScaleMgrFv
	fmr      f31, f1
	lwz      r3, 0x10(r29)
	bl       calc__Q32og6Screen8ScaleMgrFv
	lwz      r3, 0x14(r29)
	fmr      f30, f1
	cmplwi   r3, 0
	beq      lbl_8031F6A4
	stfs     f31, 0xcc(r3)
	stfs     f31, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_8031F6A4:
	lwz      r3, 0x18(r29)
	cmplwi   r3, 0
	beq      lbl_8031F6C8
	stfs     f30, 0xcc(r3)
	stfs     f30, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_8031F6C8:
	lwz      r3, 8(r29)
	lfs      f0, 0x24(r30)
	stfs     f0, 8(r3)
	lwz      r0, 0x28(r30)
	stw      r0, 0xc(r3)
	lwz      r0, 0x2c(r30)
	stw      r0, 0x10(r3)
	lwz      r0, 0x30(r30)
	stw      r0, 0x14(r3)
	lwz      r0, 0x34(r30)
	stw      r0, 0x18(r3)
	lbz      r0, 0x38(r30)
	stb      r0, 0x1c(r3)
	bl       update__Q32og6Screen11DopingCheckFv
	lwz      r29, 0x6c(r31)
	lwz      r30, 0x60(r31)
	lwz      r3, 0xc(r29)
	bl       calc__Q32og6Screen8ScaleMgrFv
	fmr      f30, f1
	lwz      r3, 0x10(r29)
	bl       calc__Q32og6Screen8ScaleMgrFv
	lwz      r3, 0x14(r29)
	fmr      f31, f1
	cmplwi   r3, 0
	beq      lbl_8031F744
	stfs     f30, 0xcc(r3)
	stfs     f30, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_8031F744:
	lwz      r3, 0x18(r29)
	cmplwi   r3, 0
	beq      lbl_8031F768
	stfs     f31, 0xcc(r3)
	stfs     f31, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_8031F768:
	lwz      r3, 8(r29)
	lfs      f0, 0x3c(r30)
	stfs     f0, 8(r3)
	lwz      r0, 0x40(r30)
	stw      r0, 0xc(r3)
	lwz      r0, 0x44(r30)
	stw      r0, 0x10(r3)
	lwz      r0, 0x48(r30)
	stw      r0, 0x14(r3)
	lwz      r0, 0x4c(r30)
	stw      r0, 0x18(r3)
	lbz      r0, 0x50(r30)
	stb      r0, 0x1c(r3)
	bl       update__Q32og6Screen11DopingCheckFv
	lfs      f2, lbl_8051DC58@sda21(r2)
	lfs      f1, 0x3c(r31)
	lfs      f0, lbl_8051DC48@sda21(r2)
	fmuls    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8031F7BC
	fneg     f1, f1

lbl_8031F7BC:
	lfs      f0, lbl_8051DC5C@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lwz      r4, 0x68(r31)
	addi     r5, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f0
	lfs      f8, lbl_8051DC4C@sda21(r2)
	lwz      r6, 0(r4)
	mr       r3, r31
	lfs      f6, lbl_8051DC60@sda21(r2)
	fctiwz   f1, f1
	lfs      f0, lbl_8051DC48@sda21(r2)
	lfs      f5, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	stfd     f1, 8(r1)
	lfs      f3, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fadds    f4, f0, f5
	lwz      r0, 0xc(r1)
	lfs      f2, lbl_8051DC64@sda21(r2)
	fadds    f0, f0, f3
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfs      f1, lbl_8051DC68@sda21(r2)
	add      r4, r5, r0
	lfs      f7, 4(r4)
	fadds    f7, f8, f7
	stfs     f4, 0x140(r6)
	fmuls    f6, f7, f6
	fmadds   f2, f2, f6, f3
	fmuls    f1, f1, f6
	stfs     f2, 0x144(r6)
	fadds    f2, f1, f3
	lwz      r4, 0x6c(r31)
	fadds    f1, f1, f5
	lwz      r4, 0(r4)
	stfs     f4, 0x140(r4)
	stfs     f2, 0x144(r4)
	lwz      r4, 0x70(r31)
	stfs     f1, 0x140(r4)
	stfs     f0, 0x144(r4)
	lwz      r4, 0x60(r31)
	lfs      f1, 0x5c(r4)
	lfs      f2, 0x60(r4)
	bl       updateTimer__Q32og9newScreen16ObjChallengeBaseFff
	lwz      r3, 0x64(r31)
	bl       update__Q32og6Screen8BloGroupFv
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r0, 0x44(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031F894
 * Size:	000024
 */
void ObjChallenge2P::doUpdate(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       commonUpdate__Q32og9newScreen14ObjChallenge2PFv
	lwz      r0, 0x14(r1)
	li       r3, 0
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031F8B8
 * Size:	0001F8
 */
void ObjChallenge2P::doDraw(Graphics& gfx)
{
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stw      r31, 0x9c(r1)
	stw      r30, 0x98(r1)
	addi     r30, r4, 0x190
	stw      r29, 0x94(r1)
	mr       r29, r3
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lis      r3, msVal__Q32og9newScreen14ObjChallenge2P@ha
	lis      r0, 0x4330
	addi     r3, r3, msVal__Q32og9newScreen14ObjChallenge2P@l
	stw      r0, 0x40(r1)
	lwz      r0, 0x20(r3)
	mr       r3, r30
	lfd      f2, lbl_8051DC70@sda21(r2)
	addi     r4, r1, 0xc
	stw      r0, 0x1c(r1)
	addi     r5, r1, 0x10
	lfs      f0, 0x3c(r29)
	addi     r6, r1, 0x14
	lbz      r0, 0x1f(r1)
	addi     r7, r1, 0x18
	stw      r0, 0x44(r1)
	lfd      f1, 0x40(r1)
	fsubs    f1, f1, f2
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x48(r1)
	lwz      r0, 0x4c(r1)
	stb      r0, 0x1f(r1)
	lwz      r0, 0x1c(r1)
	stw      r0, 8(r1)
	stw      r0, 0x18(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0x10(r1)
	stw      r0, 0xc(r1)
	bl
	setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
	lis      r3, msVal__Q32og9newScreen14ObjChallenge2P@ha
	lis      r7, 0x4330
	addi     r31, r3, msVal__Q32og9newScreen14ObjChallenge2P@l
	stw      r7, 0x50(r1)
	lwz      r0, 0xc(r31)
	mr       r3, r30
	lwz      r6, 8(r31)
	addi     r4, r1, 0x30
	lwz      r5, 0x10(r31)
	xoris    r8, r0, 0x8000
	lwz      r0, 0x14(r31)
	xoris    r6, r6, 0x8000
	xoris    r5, r5, 0x8000
	stw      r8, 0x54(r1)
	xoris    r0, r0, 0x8000
	lfd      f2, lbl_8051DC78@sda21(r2)
	lfd      f0, 0x50(r1)
	stw      r6, 0x5c(r1)
	fsubs    f4, f0, f2
	stw      r7, 0x58(r1)
	lfd      f0, 0x58(r1)
	stw      r5, 0x64(r1)
	fsubs    f3, f0, f2
	stw      r7, 0x60(r1)
	lfd      f0, 0x60(r1)
	stw      r0, 0x6c(r1)
	fsubs    f1, f0, f2
	stw      r7, 0x68(r1)
	lfd      f0, 0x68(r1)
	fadds    f1, f3, f1
	stfs     f3, 0x30(r1)
	fsubs    f0, f0, f2
	stfs     f4, 0x34(r1)
	fadds    f0, f4, f0
	stfs     f1, 0x38(r1)
	stfs     f0, 0x3c(r1)
	bl       "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
	lis      r3, msVal__Q32og9newScreen14ObjChallenge2P@ha
	lis      r7, 0x4330
	addi     r4, r3, msVal__Q32og9newScreen14ObjChallenge2P@l
	lwz      r0, 0xc(r31)
	lwz      r5, 0x18(r4)
	mr       r3, r30
	lwz      r4, 0x1c(r4)
	xoris    r8, r0, 0x8000
	lwz      r0, 0x14(r31)
	xoris    r6, r5, 0x8000
	xoris    r5, r4, 0x8000
	stw      r8, 0x74(r1)
	xoris    r0, r0, 0x8000
	lfd      f2, lbl_8051DC78@sda21(r2)
	stw      r7, 0x70(r1)
	addi     r4, r1, 0x20
	lfd      f0, 0x70(r1)
	stw      r6, 0x7c(r1)
	fsubs    f4, f0, f2
	stw      r7, 0x78(r1)
	lfd      f0, 0x78(r1)
	stw      r5, 0x84(r1)
	fsubs    f3, f0, f2
	stw      r7, 0x80(r1)
	lfd      f0, 0x80(r1)
	stw      r0, 0x8c(r1)
	fsubs    f1, f0, f2
	stw      r7, 0x88(r1)
	lfd      f0, 0x88(r1)
	fadds    f1, f3, f1
	stfs     f3, 0x20(r1)
	fsubs    f0, f0, f2
	stfs     f4, 0x24(r1)
	fadds    f0, f4, f0
	stfs     f1, 0x28(r1)
	stfs     f0, 0x2c(r1)
	bl       "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
	lwz      r3, 0x64(r29)
	mr       r4, r30
	bl       draw__Q32og6Screen8BloGroupFP13J2DPerspGraph
	lwz      r0, 0xa4(r1)
	lwz      r31, 0x9c(r1)
	lwz      r30, 0x98(r1)
	lwz      r29, 0x94(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031FAB0
 * Size:	000004
 */
void ObjChallenge2P::doUpdateFadeinFinish(void) { }

/*
 * --INFO--
 * Address:	8031FAB4
 * Size:	00000C
 */
void ObjChallenge2P::doUpdateFinish(void)
{
	/*
	lfs      f0, lbl_8051DC48@sda21(r2)
	stfs     f0, 0x38(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031FAC0
 * Size:	000004
 */
void ObjChallenge2P::doUpdateFadeoutFinish(void) { }

/*
 * --INFO--
 * Address:	8031FAC4
 * Size:	000074
 */
void ObjChallenge2P::doUpdateFadein(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, msVal__Q32og9newScreen14ObjChallenge2P@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	lwz      r5, sys@sda21(r13)
	lfs      f1, 0x38(r3)
	lfs      f0, 0x54(r5)
	fadds    f0, f1, f0
	stfs     f0, 0x38(r3)
	lfs      f0, 0x38(r3)
	lfs      f1, msVal__Q32og9newScreen14ObjChallenge2P@l(r4)
	fcmpo    cr0, f0, f1
	ble      lbl_8031FB08
	stfs     f1, 0x38(r3)
	li       r31, 1

lbl_8031FB08:
	lis      r4, msVal__Q32og9newScreen14ObjChallenge2P@ha
	lfs      f1, 0x38(r3)
	lfs      f0, msVal__Q32og9newScreen14ObjChallenge2P@l(r4)
	fdivs    f0, f1, f0
	stfs     f0, 0x3c(r3)
	bl       commonUpdate__Q32og9newScreen14ObjChallenge2PFv
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
 * Address:	8031FB38
 * Size:	00007C
 */
void ObjChallenge2P::doUpdateFadeout(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, msVal__Q32og9newScreen14ObjChallenge2P@ha
	stw      r0, 0x14(r1)
	addi     r4, r4, msVal__Q32og9newScreen14ObjChallenge2P@l
	stw      r31, 0xc(r1)
	li       r31, 0
	lwz      r5, sys@sda21(r13)
	lfs      f1, 0x38(r3)
	lfs      f0, 0x54(r5)
	fadds    f0, f1, f0
	stfs     f0, 0x38(r3)
	lfs      f0, 0x38(r3)
	lfs      f1, 4(r4)
	fcmpo    cr0, f0, f1
	ble      lbl_8031FB80
	stfs     f1, 0x38(r3)
	li       r31, 1

lbl_8031FB80:
	lfs      f1, 0x38(r3)
	lfs      f0, 4(r4)
	lfs      f2, lbl_8051DC4C@sda21(r2)
	fdivs    f0, f1, f0
	fsubs    f0, f2, f0
	stfs     f0, 0x3c(r3)
	bl       commonUpdate__Q32og9newScreen14ObjChallenge2PFv
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
 * Address:	8031FBB4
 * Size:	000074
 */
void ObjChallenge2P::doStart(Screen::StartSceneArg const*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl doStart__Q32og9newScreen16ObjChallengeBaseFPCQ26Screen13StartSceneArg
	cmplwi   r31, 0
	beq      lbl_8031FC04
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x2724
	bne      lbl_8031FC04
	lfs      f0, 4(r31)
	stfs     f0, 0x50(r30)
	b        lbl_8031FC0C

lbl_8031FC04:
	lfs      f0, lbl_8051DC48@sda21(r2)
	stfs     f0, 0x50(r30)

lbl_8031FC0C:
	lwz      r0, 0x14(r1)
	li       r3, 1
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace newScreen
} // namespace og

/*
 * --INFO--
 * Address:	8031FC28
 * Size:	0000D4
 */
void __sinit_ogObjChallenge2P_cpp(void)
{
	/*
	lis      r3, msVal__Q32og9newScreen14ObjChallenge2P@ha
	li       r0, -1
	addi     r7, r3, msVal__Q32og9newScreen14ObjChallenge2P@l
	lfs      f3, lbl_8051DC48@sda21(r2)
	lfs      f2, lbl_8051DC4C@sda21(r2)
	li       r6, 0
	stw      r0, 0x20(r7)
	li       r4, 0x280
	lfs      f1, lbl_8051DC80@sda21(r2)
	li       r5, 0xdf
	lfs      f0, lbl_8051DC84@sda21(r2)
	li       r3, 3
	li       r0, 0xc8
	stw      r6, 0x24(r7)
	stfs     f3, 0x28(r7)
	stfs     f3, 0x2c(r7)
	stfs     f2, 0x30(r7)
	stfs     f2, 0x34(r7)
	stfs     f3, 0x38(r7)
	stfs     f3, 0x3c(r7)
	stfs     f2, 0x40(r7)
	stfs     f2, 0x44(r7)
	stw      r6, 0x48(r7)
	stfs     f3, 0x4c(r7)
	stfs     f3, 0x50(r7)
	stfs     f2, 0x54(r7)
	stfs     f2, 0x58(r7)
	stfs     f3, 0x5c(r7)
	stfs     f3, 0x60(r7)
	stfs     f2, 0x64(r7)
	stfs     f2, 0x68(r7)
	stw      r6, 0x6c(r7)
	stfs     f3, 0x70(r7)
	stfs     f3, 0x74(r7)
	stfs     f2, 0x78(r7)
	stfs     f2, 0x7c(r7)
	stfs     f3, 0x80(r7)
	stfs     f3, 0x84(r7)
	stfs     f2, 0x88(r7)
	stfs     f2, 0x8c(r7)
	stfs     f1, 0(r7)
	stfs     f0, 4(r7)
	stw      r6, 8(r7)
	stw      r5, 0xc(r7)
	stw      r4, 0x10(r7)
	stw      r3, 0x14(r7)
	stw      r4, 0x18(r7)
	stw      r6, 0x1c(r7)
	stb      r6, 0x20(r7)
	stb      r6, 0x21(r7)
	stb      r6, 0x22(r7)
	stb      r0, 0x23(r7)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031FCFC
 * Size:	000008
 */
@24 @og::newScreen::ObjChallenge2P::~ObjChallenge2P(void)
{
	/*
	addi     r3, r3, -24
	b        __dt__Q32og9newScreen14ObjChallenge2PFv
	*/
}
