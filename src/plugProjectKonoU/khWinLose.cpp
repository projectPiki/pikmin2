#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_khWinLose_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80499358
    lbl_80499358:
        .asciz "khWinLose.cpp"
        .skip 2
    .global lbl_80499368
    lbl_80499368:
        .asciz "lose.blo"
        .skip 3
    .global lbl_80499374
    lbl_80499374:
        .asciz "lose.bck"
        .skip 3
    .global lbl_80499380
    lbl_80499380:
        .asciz "lose.bpk"
        .skip 3
    .global lbl_8049938C
    lbl_8049938C:
        .asciz "time_up.blo"
    .global lbl_80499398
    lbl_80499398:
        .asciz "time_up.bck"
    .global lbl_804993A4
    lbl_804993A4:
        .asciz "time_up.bpk"
        .4byte lbl_8052020C
        .4byte lbl_80520214
        .4byte lbl_8052021C
        .4byte lbl_80499368
        .4byte lbl_80499374
        .4byte lbl_80499380
        .4byte lbl_8049938C
        .4byte lbl_80499398
        .4byte lbl_804993A4
    .global lbl_804993D4
    lbl_804993D4:
        .asciz "win_wait.blo"
        .skip 3
    .global lbl_804993E4
    lbl_804993E4:
        .asciz "win_wait.bck"
        .skip 3
    .global lbl_804993F4
    lbl_804993F4:
        .asciz "win_wait.bpk"
        .skip 3
    .global lbl_80499404
    lbl_80499404:
        .asciz "lose_wait.blo"
        .skip 2
    .global lbl_80499414
    lbl_80499414:
        .asciz "lose_wait.bck"
        .skip 2
    .global lbl_80499424
    lbl_80499424:
        .asciz "lose_wait.bpk"
        .skip 2
    .global lbl_80499434
    lbl_80499434:
        .asciz "time_up_wait.blo"
        .skip 3
    .global lbl_80499448
    lbl_80499448:
        .asciz "time_up_wait.bck"
        .skip 3
    .global lbl_8049945C
    lbl_8049945C:
        .asciz "time_up_wait.bpk"
        .skip 3
    .global lbl_80499470
    lbl_80499470:
        .asciz "draw.blo"
        .skip 3
    .global lbl_8049947C
    lbl_8049947C:
        .asciz "draw.bck"
        .skip 3
    .global lbl_80499488
    lbl_80499488:
        .asciz "draw.bpk"
        .skip 3
        .4byte lbl_804993D4
        .4byte lbl_804993E4
        .4byte lbl_804993F4
        .4byte lbl_80499404
        .4byte lbl_80499414
        .4byte lbl_80499424
        .4byte lbl_80499434
        .4byte lbl_80499448
        .4byte lbl_8049945C
        .4byte lbl_80499470
        .4byte lbl_8049947C
        .4byte lbl_80499488
    .global lbl_804994C4
    lbl_804994C4:
        .asciz "disp member err"
        .asciz "screenObj.h"
        .asciz "P2Assert"
        .skip 7

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32kh6Screen10ObjWinLose
    __vt__Q32kh6Screen10ObjWinLose:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32kh6Screen10ObjWinLoseFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q32kh6Screen10ObjWinLoseFv"
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
        .4byte doStart__Q26Screen7ObjBaseFPCQ26Screen13StartSceneArg
        .4byte doEnd__Q26Screen7ObjBaseFPCQ26Screen11EndSceneArg
        .4byte doCreate__Q32kh6Screen10ObjWinLoseFP10JKRArchive
        .4byte doUpdateFadein__Q26Screen7ObjBaseFv
        .4byte doUpdateFadeinFinish__Q26Screen7ObjBaseFv
        .4byte doUpdate__Q32kh6Screen10ObjWinLoseFv
        .4byte doUpdateFinish__Q26Screen7ObjBaseFv
        .4byte doUpdateFadeout__Q26Screen7ObjBaseFv
        .4byte doUpdateFadeoutFinish__Q26Screen7ObjBaseFv
        .4byte doDraw__Q32kh6Screen10ObjWinLoseFR8Graphics
        .4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global msVal__Q32kh6Screen10ObjWinLose
    msVal__Q32kh6Screen10ObjWinLose:
        .skip 0x1C

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520208
    lbl_80520208:
        .float 0.0
    .global lbl_8052020C
    lbl_8052020C:
        .asciz "win.blo"
    .global lbl_80520214
    lbl_80520214:
        .asciz "win.bck"
    .global lbl_8052021C
    lbl_8052021C:
        .asciz "win.bpk"
    .global lbl_80520224
    lbl_80520224:
        .float 1.0
    .global lbl_80520228
    lbl_80520228:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80520230
    lbl_80520230:
        .4byte 0xC2F00000
    .global lbl_80520234
    lbl_80520234:
        .4byte 0x42F00000
    .global lbl_80520238
    lbl_80520238:
        .4byte 0x42700000
        .4byte 0x00000000

    .section .sbss2, "", @nobits # 0x80520e40 - 0x80520ED8
    .global lbl_80520ED0
    lbl_80520ED0:
        .skip 0x4
    .global lbl_80520ED4
    lbl_80520ED4:
        .skip 0x4
*/

namespace kh {
namespace Screen {

/*
 * --INFO--
 * Address:	8040FCE8
 * Size:	0000B8
 */
ObjWinLose::ObjWinLose()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
bl       __ct__Q26Screen7ObjBaseFv
lis      r3, __vt__Q32kh6Screen10ObjWinLose@ha
li       r4, 0
addi     r3, r3, __vt__Q32kh6Screen10ObjWinLose@l
lfs      f0, lbl_80520208@sda21(r2)
stw      r3, 0(r31)
addi     r5, r3, 0x10
li       r0, 2
mr       r3, r31
stw      r5, 0x18(r31)
stw      r4, 0x38(r31)
stw      r4, 0x40(r31)
stw      r4, 0x48(r31)
stw      r4, 0x50(r31)
stw      r4, 0x58(r31)
stw      r4, 0x60(r31)
stfs     f0, 0x80(r31)
stfs     f0, 0x78(r31)
stfs     f0, 0x70(r31)
stfs     f0, 0x68(r31)
stfs     f0, 0x88(r31)
stw      r4, 0x3c(r31)
stw      r4, 0x44(r31)
stw      r4, 0x4c(r31)
stw      r4, 0x54(r31)
stw      r4, 0x5c(r31)
stw      r4, 0x64(r31)
stfs     f0, 0x84(r31)
stfs     f0, 0x7c(r31)
stfs     f0, 0x74(r31)
stfs     f0, 0x6c(r31)
stfs     f0, 0x8c(r31)
stb      r4, 0x90(r31)
stw      r4, 0x94(r31)
stw      r0, 0x98(r31)
stb      r4, 0x9c(r31)
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	8040FDA0
 * Size:	000418
 */
void ObjWinLose::doCreate(JKRArchive*)
{
	/*
stwu     r1, -0xb0(r1)
mflr     r0
lis      r6, lbl_80499358@ha
stw      r0, 0xb4(r1)
stmw     r16, 0x70(r1)
addi     r30, r6, lbl_80499358@l
mr       r26, r4
mr       r25, r3
lwz      r5, lbl_80520ED0@sda21(r2)
lwz      r0, lbl_80520ED4@sda21(r2)
lwz      r16, 0x58(r30)
lwz      r17, 0x5c(r30)
lwz      r18, 0x60(r30)
lwz      r19, 0x64(r30)
lwz      r20, 0x68(r30)
lwz      r21, 0x6c(r30)
lwz      r22, 0x70(r30)
lwz      r23, 0x74(r30)
lwz      r31, 0x78(r30)
lwz      r29, 0x13c(r30)
lwz      r28, 0x140(r30)
lwz      r27, 0x144(r30)
lwz      r24, 0x148(r30)
lwz      r12, 0x14c(r30)
lwz      r11, 0x150(r30)
lwz      r10, 0x154(r30)
lwz      r9, 0x158(r30)
lwz      r8, 0x15c(r30)
lwz      r7, 0x160(r30)
lwz      r6, 0x164(r30)
lwz      r4, 0x168(r30)
stw      r16, 0x40(r1)
stw      r17, 0x44(r1)
stw      r18, 0x48(r1)
stw      r19, 0x4c(r1)
stw      r20, 0x50(r1)
stw      r21, 0x54(r1)
stw      r22, 0x58(r1)
stw      r23, 0x5c(r1)
stw      r31, 0x60(r1)
stw      r29, 0x10(r1)
stw      r28, 0x14(r1)
stw      r27, 0x18(r1)
stw      r24, 0x1c(r1)
stw      r12, 0x20(r1)
stw      r11, 0x24(r1)
stw      r10, 0x28(r1)
stw      r9, 0x2c(r1)
stw      r8, 0x30(r1)
stw      r7, 0x34(r1)
stw      r6, 0x38(r1)
stw      r4, 0x3c(r1)
stw      r5, 8(r1)
stw      r0, 0xc(r1)
bl       getDispMember__Q26Screen7ObjBaseFv
lis      r4, 0x4C4F5345@ha
lis      r5, 0x57494E5F@ha
addi     r6, r4, 0x4C4F5345@l
li       r4, 0x4b48
addi     r5, r5, 0x57494E5F@l
bl       isID__Q32og6Screen14DispMemberBaseFUlUx
clrlwi.  r0, r3, 0x18
bne      lbl_8040FEB0
addi     r3, r30, 0
addi     r5, r30, 0x16c
li       r4, 0x4f
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8040FEB0:
mr       r3, r25
bl       getDispMember__Q26Screen7ObjBaseFv
mr       r30, r3
lwz      r0, 8(r3)
cmpwi    r0, 3
beq      lbl_8040FF14
bge      lbl_8040FEDC
cmpwi    r0, 1
beq      lbl_8040FEEC
bge      lbl_8040FF00
b        lbl_8040FF4C

lbl_8040FEDC:
cmpwi    r0, 5
beq      lbl_8040FF40
bge      lbl_8040FF4C
b        lbl_8040FF24

lbl_8040FEEC:
li       r3, 0
li       r0, 1
stw      r3, 8(r1)
stw      r0, 0xc(r1)
b        lbl_8040FF4C

lbl_8040FF00:
li       r3, 1
li       r0, 0
stw      r3, 8(r1)
stw      r0, 0xc(r1)
b        lbl_8040FF4C

lbl_8040FF14:
li       r0, 3
stw      r0, 8(r1)
stw      r0, 0xc(r1)
b        lbl_8040FF4C

lbl_8040FF24:
li       r4, 2
li       r3, -1
li       r0, 1
stw      r4, 8(r1)
stw      r3, 0xc(r1)
stw      r0, 0x98(r25)
b        lbl_8040FF4C

lbl_8040FF40:
li       r0, 2
stw      r0, 8(r1)
stw      r0, 0xc(r1)

lbl_8040FF4C:
mr       r29, r25
addi     r28, r1, 8
addi     r31, r1, 0x10
li       r27, 0
lis      r24, 0x524f
b        lbl_80410134

lbl_8040FF64:
lwz      r0, 8(r30)
cmpwi    r0, 3
beq      lbl_80410028
li       r3, 0x148
bl       __nw__FUl
or.      r5, r3, r3
beq      lbl_8040FF88
bl       __ct__Q29P2DScreen10Mgr_tuningFv
mr       r5, r3

lbl_8040FF88:
lwz      r0, 0(r28)
addi     r4, r1, 0x40
stw      r5, 0x38(r29)
mr       r6, r26
mulli    r0, r0, 0xc
lis      r5, 4
lwz      r3, 0x38(r29)
lwzx     r4, r4, r0
bl       set__9J2DScreenFPCcUlP10JKRArchive
lwz      r0, 0(r28)
addi     r3, r1, 0x40
mr       r4, r26
mulli    r5, r0, 0xc
addi     r0, r5, 4
lwzx     r3, r3, r0
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
lwz      r0, 0(r28)
addi     r5, r1, 0x40
stw      r3, 0x48(r29)
mr       r4, r26
mulli    r3, r0, 0xc
addi     r0, r3, 8
lwzx     r3, r5, r0
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x58(r29)
lwz      r3, 0x38(r29)
lwz      r4, 0x48(r29)
lwz      r12, 0(r3)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 0x38(r29)
lwz      r4, 0x58(r29)
lwz      r12, 0(r3)
lwz      r12, 0x64(r12)
mtctr    r12
bctrl
b        lbl_80410030

lbl_80410028:
li       r0, 1
stb      r0, 0x90(r25)

lbl_80410030:
li       r3, 0x148
bl       __nw__FUl
or.      r4, r3, r3
beq      lbl_80410048
bl       __ct__Q29P2DScreen10Mgr_tuningFv
mr       r4, r3

lbl_80410048:
lwz      r0, 0(r28)
mr       r6, r26
stw      r4, 0x40(r29)
lis      r5, 4
mulli    r0, r0, 0xc
lwz      r3, 0x40(r29)
lwzx     r4, r31, r0
bl       set__9J2DScreenFPCcUlP10JKRArchive
lwz      r0, 0(r28)
mr       r4, r26
mulli    r3, r0, 0xc
addi     r0, r3, 4
lwzx     r3, r31, r0
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
lwz      r0, 0(r28)
mr       r4, r26
stw      r3, 0x50(r29)
mulli    r3, r0, 0xc
addi     r0, r3, 8
lwzx     r3, r31, r0
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x60(r29)
lwz      r3, 0x40(r29)
lwz      r4, 0x50(r29)
lwz      r12, 0(r3)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 0x40(r29)
lwz      r4, 0x60(r29)
lwz      r12, 0(r3)
lwz      r12, 0x64(r12)
mtctr    r12
bctrl
lwz      r3, 0x40(r29)
addi     r6, r24, 0x4f54
li       r5, 0
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
bl       setInfAlpha__Q22kh6ScreenFP7J2DPane
lwz      r3, 0x40(r29)
addi     r6, r24, 0x4f54
li       r5, 0
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
lbz      r4, 0x9c(r25)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
addi     r29, r29, 4
addi     r28, r28, 4
addi     r27, r27, 1

lbl_80410134:
lwz      r0, 0x98(r25)
cmpw     r27, r0
blt      lbl_8040FF64
cmpwi    r0, 2
bne      lbl_80410160
lis      r3, msVal__Q32kh6Screen10ObjWinLose@ha
addi     r3, r3, msVal__Q32kh6Screen10ObjWinLose@l
lfs      f0, 4(r3)
stfs     f0, 0x88(r25)
lfs      f0, 8(r3)
stfs     f0, 0x8c(r25)

lbl_80410160:
mr       r3, r25
lwz      r12, 0(r25)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
li       r4, 0
li       r5, 0
li       r6, 0
li       r7, 0xa0
bl       setColorBG__Q26Screen9SceneBaseFUcUcUcUc
lwz      r0, 8(r30)
cmpwi    r0, 6
bge      lbl_804101A4
cmpwi    r0, 4
bge      lbl_804101A0
b        lbl_804101A4

lbl_804101A0:
bl       PSStartChallengeTimeUpStream__Fv

lbl_804101A4:
lmw      r16, 0x70(r1)
lwz      r0, 0xb4(r1)
mtlr     r0
addi     r1, r1, 0xb0
blr
	*/
}

/*
 * --INFO--
 * Address:	804101B8
 * Size:	000020
 */
void ObjWinLose::doUpdate()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
bl       updateAnimation__Q32kh6Screen10ObjWinLoseFv
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	804101D8
 * Size:	0000B8
 */
void ObjWinLose::doDraw(Graphics& gfx)
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
addi     r3, r29, 0xbc
lwz      r12, 0xbc(r4)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
mr       r31, r28
li       r30, 0
b        lbl_80410264

lbl_8041021C:
lwz      r3, 0x38(r31)
cmplwi   r3, 0
beq      lbl_80410240
lwz      r12, 0(r3)
mr       r4, r29
addi     r5, r29, 0xbc
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl

lbl_80410240:
lwz      r3, 0x40(r31)
mr       r4, r29
addi     r5, r29, 0xbc
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl
addi     r31, r31, 4
addi     r30, r30, 1

lbl_80410264:
lwz      r0, 0x98(r28)
cmpw     r30, r0
blt      lbl_8041021C
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
 * Address:	80410290
 * Size:	00038C
 */
void ObjWinLose::updateAnimation()
{
	/*
stwu     r1, -0x30(r1)
mflr     r0
stw      r0, 0x34(r1)
stfd     f31, 0x20(r1)
psq_st   f31, 40(r1), 0, qr0
stw      r31, 0x1c(r1)
stw      r30, 0x18(r1)
stw      r29, 0x14(r1)
stw      r28, 0x10(r1)
mr       r28, r3
lis      r3, msVal__Q32kh6Screen10ObjWinLose@ha
mr       r30, r28
li       r29, 0
addi     r31, r3, msVal__Q32kh6Screen10ObjWinLose@l
b        lbl_8041054C

lbl_804102CC:
lwz      r0, 0x38(r30)
cmplwi   r0, 0
beq      lbl_804103E8
lfs      f0, 0x68(r30)
lwz      r3, 0x48(r30)
stfs     f0, 8(r3)
lfs      f0, 0x78(r30)
lwz      r3, 0x58(r30)
stfs     f0, 8(r3)
lwz      r3, 0x38(r30)
bl       animation__9J2DScreenFv
lis      r3, msVal__Q32kh6Screen10ObjWinLose@ha
lfs      f1, 0x68(r30)
lfsu     f0, msVal__Q32kh6Screen10ObjWinLose@l(r3)
fadds    f0, f1, f0
stfs     f0, 0x68(r30)
lfs      f1, 0x78(r30)
lfs      f0, 0(r3)
fadds    f0, f1, f0
stfs     f0, 0x78(r30)
lfs      f1, 0x68(r30)
lfs      f0, 0xc(r31)
fcmpo    cr0, f1, f0
cror     2, 1, 2
bne      lbl_80410338
li       r0, 1
stb      r0, 0x90(r28)

lbl_80410338:
lwz      r3, 0x48(r30)
lis      r0, 0x4330
stw      r0, 8(r1)
lha      r3, 6(r3)
lfd      f2, lbl_80520228@sda21(r2)
xoris    r3, r3, 0x8000
lfs      f1, 0x68(r30)
stw      r3, 0xc(r1)
lfd      f0, 8(r1)
fsubs    f0, f0, f2
fcmpo    cr0, f1, f0
cror     2, 1, 2
beq      lbl_80410398
lwz      r3, 0x58(r30)
stw      r0, 8(r1)
lha      r0, 6(r3)
lfs      f1, 0x78(r30)
xoris    r0, r0, 0x8000
stw      r0, 0xc(r1)
lfd      f0, 8(r1)
fsubs    f0, f0, f2
fcmpo    cr0, f1, f0
cror     2, 1, 2
bne      lbl_804103B0

lbl_80410398:
lfs      f0, lbl_80520208@sda21(r2)
li       r0, 0
stfs     f0, 0x78(r30)
stfs     f0, 0x68(r30)
lwz      r3, 0x38(r30)
stb      r0, 0xb0(r3)

lbl_804103B0:
lwz      r3, 0x38(r30)
lis      r4, 0x524F4F54@ha
addi     r6, r4, 0x524F4F54@l
li       r5, 0
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
lfs      f1, lbl_80520208@sda21(r2)
lwz      r12, 0x14(r12)
lfs      f2, 0x88(r30)
mtctr    r12
bctrl

lbl_804103E8:
lbz      r0, 0x90(r28)
cmplwi   r0, 0
beq      lbl_80410544
lfs      f0, 0x70(r30)
lwz      r3, 0x50(r30)
stfs     f0, 8(r3)
lfs      f0, 0x80(r30)
lwz      r3, 0x60(r30)
stfs     f0, 8(r3)
lwz      r3, 0x40(r30)
bl       animation__9J2DScreenFv
lfs      f0, 0x70(r30)
lis      r0, 0x4330
lfs      f2, lbl_80520224@sda21(r2)
stw      r0, 8(r1)
fadds    f0, f0, f2
lfd      f1, lbl_80520228@sda21(r2)
stfs     f0, 0x70(r30)
lfs      f0, 0x80(r30)
fadds    f0, f0, f2
stfs     f0, 0x80(r30)
lwz      r3, 0x50(r30)
lfs      f2, 0x70(r30)
lha      r0, 6(r3)
xoris    r0, r0, 0x8000
stw      r0, 0xc(r1)
lfd      f0, 8(r1)
fsubs    f0, f0, f1
fcmpo    cr0, f2, f0
cror     2, 1, 2
bne      lbl_8041046C
lfs      f0, lbl_80520208@sda21(r2)
stfs     f0, 0x70(r30)

lbl_8041046C:
lwz      r3, 0x60(r30)
lis      r0, 0x4330
stw      r0, 8(r1)
lha      r0, 6(r3)
lfd      f1, lbl_80520228@sda21(r2)
xoris    r0, r0, 0x8000
lfs      f2, 0x80(r30)
stw      r0, 0xc(r1)
lfd      f0, 8(r1)
fsubs    f0, f0, f1
fcmpo    cr0, f2, f0
cror     2, 1, 2
bne      lbl_804104A8
lfs      f0, lbl_80520208@sda21(r2)
stfs     f0, 0x80(r30)

lbl_804104A8:
lwz      r3, 0x40(r30)
lis      r4, 0x524F4F54@ha
addi     r6, r4, 0x524F4F54@l
lfs      f31, 0x88(r30)
lwz      r12, 0(r3)
li       r5, 0
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lfs      f0, lbl_80520208@sda21(r2)
stfs     f0, 0xd4(r3)
stfs     f31, 0xd8(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r3, 0x40(r30)
lis      r4, 0x524F4F54@ha
addi     r6, r4, 0x524F4F54@l
li       r5, 0
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
lbz      r4, 0x9c(r28)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
lbz      r4, 0x18(r31)
lbz      r3, 0x9c(r28)
subfic   r0, r4, 0xff
cmpw     r3, r0
bge      lbl_8041053C
add      r0, r3, r4
stb      r0, 0x9c(r28)
b        lbl_80410544

lbl_8041053C:
li       r0, 0xff
stb      r0, 0x9c(r28)

lbl_80410544:
addi     r30, r30, 4
addi     r29, r29, 1

lbl_8041054C:
lwz      r0, 0x98(r28)
cmpw     r29, r0
blt      lbl_804102CC
mr       r3, r28
bl       getDispMember__Q26Screen7ObjBaseFv
lis      r4, 0x4C4F5345@ha
lis      r5, 0x57494E5F@ha
addi     r6, r4, 0x4C4F5345@l
li       r4, 0x4b48
addi     r5, r5, 0x57494E5F@l
bl       isID__Q32og6Screen14DispMemberBaseFUlUx
clrlwi.  r0, r3, 0x18
bne      lbl_8041059C
lis      r3, lbl_80499358@ha
lis      r5, lbl_804994C4@ha
addi     r3, r3, lbl_80499358@l
li       r4, 0x114
addi     r5, r5, lbl_804994C4@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8041059C:
mr       r3, r28
bl       getDispMember__Q26Screen7ObjBaseFv
lwz      r6, 0x94(r28)
lis      r4, msVal__Q32kh6Screen10ObjWinLose@ha
addi     r5, r4, msVal__Q32kh6Screen10ObjWinLose@l
addi     r4, r6, 1
stw      r4, 0x94(r28)
lwz      r0, 0x14(r5)
cmpw     r4, r0
ble      lbl_804105D8
li       r0, 3
stw      r0, 0xc(r3)
bl       PSStop2DStream__Fv
bl       PSMuteOffSE_on2D__Fv
b        lbl_804105F0

lbl_804105D8:
lwz      r4, 0x94(r28)
lwz      r0, 0x10(r5)
cmpw     r4, r0
ble      lbl_804105F0
li       r0, 2
stw      r0, 0xc(r3)

lbl_804105F0:
li       r3, 0
psq_l    f31, 40(r1), 0, qr0
lwz      r0, 0x34(r1)
lfd      f31, 0x20(r1)
lwz      r31, 0x1c(r1)
lwz      r30, 0x18(r1)
lwz      r29, 0x14(r1)
lwz      r28, 0x10(r1)
mtlr     r0
addi     r1, r1, 0x30
blr
	*/
}

/*
 * --INFO--
 * Address:	8041061C
 * Size:	0000AC
 */
ObjWinLose::~ObjWinLose()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_804106AC
lis      r4, __vt__Q32kh6Screen10ObjWinLose@ha
addi     r4, r4, __vt__Q32kh6Screen10ObjWinLose@l
stw      r4, 0(r30)
addi     r0, r4, 0x10
stw      r0, 0x18(r30)
beq      lbl_8041069C
lis      r4, __vt__Q26Screen7ObjBase@ha
addi     r4, r4, __vt__Q26Screen7ObjBase@l
stw      r4, 0(r30)
addi     r0, r4, 0x10
stw      r0, 0x18(r30)
beq      lbl_8041069C
lis      r4, __vt__Q26Screen8IObjBase@ha
addi     r4, r4, __vt__Q26Screen8IObjBase@l
stw      r4, 0(r30)
addi     r0, r4, 0x10
stw      r0, 0x18(r30)
bl       del__5CNodeFv
addi     r3, r30, 0x18
li       r4, 0
bl       __dt__11JKRDisposerFv
mr       r3, r30
li       r4, 0
bl       __dt__5CNodeFv

lbl_8041069C:
extsh.   r0, r31
ble      lbl_804106AC
mr       r3, r30
bl       __dl__FPv

lbl_804106AC:
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
} // namespace kh

/*
 * --INFO--
 * Address:	804106C8
 * Size:	000044
 */
void __sinit_khWinLose_cpp(void)
{
	/*
	lis      r3, msVal__Q32kh6Screen10ObjWinLose@ha
	lfs      f3, lbl_80520224@sda21(r2)
	addi     r5, r3, msVal__Q32kh6Screen10ObjWinLose@l
	lfs      f2, lbl_80520230@sda21(r2)
	lfs      f1, lbl_80520234@sda21(r2)
	li       r4, 0x3c
	lfs      f0, lbl_80520238@sda21(r2)
	li       r3, 0xb4
	li       r0, 0x10
	stfs     f3, 0(r5)
	stfs     f2, 4(r5)
	stfs     f1, 8(r5)
	stfs     f0, 0xc(r5)
	stw      r4, 0x10(r5)
	stw      r3, 0x14(r5)
	stb      r0, 0x18(r5)
	blr
	*/
}

namespace kh {
namespace Screen {

/*
 * --INFO--
 * Address:	8041070C
 * Size:	000008
 */
ObjWinLose::@24 @~ObjWinLose()
{
	/*
addi     r3, r3, -24
b        __dt__Q32kh6Screen10ObjWinLoseFv
	*/
}
} // namespace Screen
} // namespace kh
