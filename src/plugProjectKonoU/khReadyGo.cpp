#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_khReadyGo_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80498670
    lbl_80498670:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_8049867C
    lbl_8049867C:
        .asciz "khReadyGo.cpp"
        .skip 2
    .global lbl_8049868C
    lbl_8049868C:
        .asciz "disp member err"
    .global lbl_8049869C
    lbl_8049869C:
        .asciz "ready_go.blo"
        .skip 3
    .global lbl_804986AC
    lbl_804986AC:
        .asciz "ready_go.bck"
        .skip 3
    .global lbl_804986BC
    lbl_804986BC:
        .asciz "ready_go.bpk"
        .skip 3
    .global lbl_804986CC
    lbl_804986CC:
        .asciz "ready_go_reverse.blo"
        .skip 3
    .global lbl_804986E4
    lbl_804986E4:
        .asciz "ready_go_reverse.bck"
        .skip 3
    .global lbl_804986FC
    lbl_804986FC:
        .asciz "ready_go_reverse.bpk"
        .skip 3
        .4byte lbl_8049869C
        .4byte lbl_804986AC
        .4byte lbl_804986BC
        .4byte lbl_804986CC
        .4byte lbl_804986E4
        .4byte lbl_804986FC
    .global lbl_8049872C
    lbl_8049872C:
        .asciz "ready_go.szs"
        .skip 3
        .asciz "screenObj.h"
        .asciz "P2Assert"
        .skip 7

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804EAB98
    lbl_804EAB98:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q32kh6Screen12SceneReadyGo
    __vt__Q32kh6Screen12SceneReadyGo:
        .4byte 0
        .4byte 0
        .4byte getSceneType__Q32kh6Screen12SceneReadyGoFv
        .4byte getOwnerID__Q32kh6Screen12SceneReadyGoFv
        .4byte getMemberID__Q32kh6Screen12SceneReadyGoFv
        .4byte isUseBackupSceneInfo__Q32kh6Screen12SceneReadyGoFv
        .4byte isDrawInDemo__Q26Screen9SceneBaseCFv
        .4byte getResName__Q32kh6Screen12SceneReadyGoCFv
        .4byte doCreateObj__Q32kh6Screen12SceneReadyGoFP10JKRArchive
        .4byte doUserCallBackFunc__Q26Screen9SceneBaseFPQ28Resource10MgrCommand
        .4byte setPort__Q26Screen9SceneBaseFR8Graphics
        .4byte doUpdateActive__Q26Screen9SceneBaseFv
        .4byte
   doConfirmSetScene__Q32kh6Screen12SceneReadyGoFRQ26Screen11SetSceneArg .4byte
   doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg .4byte
   doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg .4byte
   doStart__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg .4byte
   doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg .4byte
   setDefaultDispMember__Q26Screen9SceneBaseFv .4byte
   doSetBackupScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg .4byte
   doGetFinishState__Q26Screen9SceneBaseFv .global __vt__Q25efx2d9T2DGoChal
    __vt__Q25efx2d9T2DGoChal:
        .4byte 0
        .4byte 0
        .4byte create__Q25efx2d8TSimple2FPQ25efx2d3Arg
        .4byte kill__Q25efx2d8TSimple2Fv
        .4byte fade__Q25efx2d8TSimple2Fv
        .4byte setGroup__Q25efx2d5TBaseFUc
    .global __vt__Q25efx2d9T2DGoBatl
    __vt__Q25efx2d9T2DGoBatl:
        .4byte 0
        .4byte 0
        .4byte create__Q25efx2d8TSimple3FPQ25efx2d3Arg
        .4byte kill__Q25efx2d8TSimple3Fv
        .4byte fade__Q25efx2d8TSimple3Fv
        .4byte setGroup__Q25efx2d5TBaseFUc
    .global __vt__Q32kh6Screen10ObjReadyGo
    __vt__Q32kh6Screen10ObjReadyGo:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32kh6Screen10ObjReadyGoFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q32kh6Screen10ObjReadyGoFv"
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
        .4byte doCreate__Q32kh6Screen10ObjReadyGoFP10JKRArchive
        .4byte doUpdateFadein__Q32kh6Screen10ObjReadyGoFv
        .4byte doUpdateFadeinFinish__Q26Screen7ObjBaseFv
        .4byte doUpdate__Q32kh6Screen10ObjReadyGoFv
        .4byte doUpdateFinish__Q26Screen7ObjBaseFv
        .4byte doUpdateFadeout__Q32kh6Screen10ObjReadyGoFv
        .4byte doUpdateFadeoutFinish__Q26Screen7ObjBaseFv
        .4byte doDraw__Q32kh6Screen10ObjReadyGoFR8Graphics
        .4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
        .4byte 0

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global msVal__Q32kh6Screen10ObjReadyGo
    msVal__Q32kh6Screen10ObjReadyGo:
        .skip 0x18

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80516128
    lbl_80516128:
        .skip 0x4
    .global lbl_8051612C
    lbl_8051612C:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520058
    lbl_80520058:
        .4byte 0x00000000
    .global lbl_8052005C
    lbl_8052005C:
        .4byte 0x42700000
    .global lbl_80520060
    lbl_80520060:
        .4byte 0x429C0000
        .4byte 0x00000000
    .global lbl_80520068
    lbl_80520068:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80520070
    lbl_80520070:
        .4byte 0xC2F00000
    .global lbl_80520074
    lbl_80520074:
        .4byte 0x42F00000
    .global lbl_80520078
    lbl_80520078:
        .float 0.7
    .global lbl_8052007C
    lbl_8052007C:
        .4byte 0xC1400000
    .global lbl_80520080
    lbl_80520080:
        .4byte 0xC1B00000
        .4byte 0x00000000
*/

namespace kh {
namespace Screen {

/*
 * --INFO--
 * Address:	80401268
 * Size:	0000A4
 */
void ObjReadyGo::doUpdateFadein()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
bl       getDispMember__Q26Screen7ObjBaseFv
lis      r4, 0x595F474F@ha
lis      r5, 0x52454144@ha
addi     r6, r4, 0x595F474F@l
li       r4, 0x4b48
addi     r5, r5, 0x52454144@l
bl       isID__Q32og6Screen14DispMemberBaseFUlUx
clrlwi.  r0, r3, 0x18
bne      lbl_804012BC
lis      r3, lbl_8049867C@ha
lis      r5, lbl_8049868C@ha
addi     r3, r3, lbl_8049867C@l
li       r4, 0x3d
addi     r5, r5, lbl_8049868C@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_804012BC:
mr       r3, r31
bl       getDispMember__Q26Screen7ObjBaseFv
lwz      r0, 0x10(r3)
cmpwi    r0, 0
bne      lbl_804012E4
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x1826
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
b        lbl_804012F4

lbl_804012E4:
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x1827
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_804012F4:
lwz      r0, 0x14(r1)
li       r3, 1
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	8040130C
 * Size:	0001D4
 */
void ObjReadyGo::doCreate(JKRArchive*)
{
	/*
stwu     r1, -0x40(r1)
mflr     r0
lis      r5, lbl_80498670@ha
stw      r0, 0x44(r1)
stmw     r26, 0x28(r1)
addi     r29, r5, lbl_80498670@l
mr       r31, r4
mr       r30, r3
lwz      r8, 0xa4(r29)
lwz      r7, 0xa8(r29)
lwz      r6, 0xac(r29)
lwz      r5, 0xb0(r29)
lwz      r4, 0xb4(r29)
lwz      r0, 0xb8(r29)
stw      r8, 8(r1)
stw      r7, 0xc(r1)
stw      r6, 0x10(r1)
stw      r5, 0x14(r1)
stw      r4, 0x18(r1)
stw      r0, 0x1c(r1)
bl       getDispMember__Q26Screen7ObjBaseFv
lis      r4, 0x595F474F@ha
lis      r5, 0x52454144@ha
addi     r6, r4, 0x595F474F@l
li       r4, 0x4b48
addi     r5, r5, 0x52454144@l
bl       isID__Q32og6Screen14DispMemberBaseFUlUx
clrlwi.  r0, r3, 0x18
bne      lbl_80401394
addi     r3, r29, 0xc
addi     r5, r29, 0x1c
li       r4, 0x59
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_80401394:
mr       r3, r30
bl       getDispMember__Q26Screen7ObjBaseFv
mr       r29, r3
lbz      r0, 0xc(r3)
cmplwi   r0, 0
beq      lbl_804013CC
li       r0, 2
lis      r3, msVal__Q32kh6Screen10ObjReadyGo@ha
stw      r0, 0x6c(r30)
addi     r3, r3, msVal__Q32kh6Screen10ObjReadyGo@l
lfs      f0, 4(r3)
stfs     f0, 0x60(r30)
lfs      f0, 8(r3)
stfs     f0, 0x64(r30)

lbl_804013CC:
mr       r28, r30
addi     r27, r1, 8
li       r26, 0
b        lbl_80401470

lbl_804013DC:
li       r3, 0x148
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_804013F4
bl       __ct__Q29P2DScreen10Mgr_tuningFv
mr       r0, r3

lbl_804013F4:
stw      r0, 0x38(r28)
mr       r6, r31
lwz      r4, 0(r27)
lis      r5, 4
lwz      r3, 0x38(r28)
bl       set__9J2DScreenFPCcUlP10JKRArchive
lwz      r3, 4(r27)
mr       r4, r31
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x40(r28)
mr       r4, r31
lwz      r3, 8(r27)
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x48(r28)
lwz      r3, 0x38(r28)
lwz      r4, 0x40(r28)
lwz      r12, 0(r3)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 0x38(r28)
lwz      r4, 0x48(r28)
lwz      r12, 0(r3)
lwz      r12, 0x64(r12)
mtctr    r12
bctrl
addi     r28, r28, 4
addi     r27, r27, 0xc
addi     r26, r26, 1

lbl_80401470:
lwz      r0, 0x6c(r30)
cmpw     r26, r0
blt      lbl_804013DC
mr       r3, r30
lwz      r12, 0(r30)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
li       r4, 0
li       r5, 0
li       r6, 0
li       r7, 0xa0
bl       setColorBG__Q26Screen9SceneBaseFUcUcUcUc
lwz      r0, 0x10(r29)
cmpwi    r0, 0
bne      lbl_804014C0
lis      r3, 0xC0011022@ha
addi     r3, r3, 0xC0011022@l
bl       PSStart2DStream__FUl
b        lbl_804014CC

lbl_804014C0:
lis      r3, 0xC0011023@ha
addi     r3, r3, 0xC0011023@l
bl       PSStart2DStream__FUl

lbl_804014CC:
lmw      r26, 0x28(r1)
lwz      r0, 0x44(r1)
mtlr     r0
addi     r1, r1, 0x40
blr
	*/
}

/*
 * --INFO--
 * Address:	804014E0
 * Size:	000020
 */
void ObjReadyGo::doUpdate()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
bl       updateAnimation__Q32kh6Screen10ObjReadyGoFv
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	80401500
 * Size:	0000DC
 */
void ObjReadyGo::doDraw(Graphics& gfx)
{
	/*
stwu     r1, -0x40(r1)
mflr     r0
stw      r0, 0x44(r1)
stfd     f31, 0x30(r1)
psq_st   f31, 56(r1), 0, qr0
stfd     f30, 0x20(r1)
psq_st   f30, 40(r1), 0, qr0
stmw     r27, 0xc(r1)
mr       r28, r4
mr       r27, r3
addi     r3, r28, 0xbc
lwz      r12, 0xbc(r4)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lfs      f31, lbl_80520058@sda21(r2)
mr       r30, r27
li       r29, 0
lis      r31, 0x524f
b        lbl_804015AC

lbl_80401550:
lwz      r3, 0x38(r30)
addi     r6, r31, 0x4f54
lfs      f30, 0x60(r30)
li       r5, 0
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
stfs     f31, 0xd4(r3)
stfs     f30, 0xd8(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r3, 0x38(r30)
mr       r4, r28
addi     r5, r28, 0xbc
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl
addi     r30, r30, 4
addi     r29, r29, 1

lbl_804015AC:
lwz      r0, 0x6c(r27)
cmpw     r29, r0
blt      lbl_80401550
psq_l    f31, 56(r1), 0, qr0
lfd      f31, 0x30(r1)
psq_l    f30, 40(r1), 0, qr0
lfd      f30, 0x20(r1)
lmw      r27, 0xc(r1)
lwz      r0, 0x44(r1)
mtlr     r0
addi     r1, r1, 0x40
blr
	*/
}

/*
 * --INFO--
 * Address:	804015DC
 * Size:	00018C
 */
void ObjReadyGo::doUpdateFadeout()
{
	/*
stwu     r1, -0x30(r1)
mflr     r0
stw      r0, 0x34(r1)
stw      r31, 0x2c(r1)
mr       r31, r3
bl       getDispMember__Q26Screen7ObjBaseFv
lis      r4, 0x595F474F@ha
lis      r5, 0x52454144@ha
addi     r6, r4, 0x595F474F@l
li       r4, 0x4b48
addi     r5, r5, 0x52454144@l
bl       isID__Q32og6Screen14DispMemberBaseFUlUx
clrlwi.  r0, r3, 0x18
bne      lbl_80401630
lis      r3, lbl_8049867C@ha
lis      r5, lbl_8049868C@ha
addi     r3, r3, lbl_8049867C@l
li       r4, 0x9f
addi     r5, r5, lbl_8049868C@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_80401630:
mr       r3, r31
bl       getDispMember__Q26Screen7ObjBaseFv
lbz      r0, 0xd(r3)
cmplwi   r0, 0
beq      lbl_804016EC
lis      r4, __vt__Q32og6Screen14DispMemberBase@ha
li       r9, 0
addi     r0, r4, __vt__Q32og6Screen14DispMemberBase@l
lis      r4, __vt__Q32kh6Screen14DispFinalFloor@ha
stw      r0, 0x18(r1)
addi     r0, r4, __vt__Q32kh6Screen14DispFinalFloor@l
lis      r4, __vt__Q26Screen12SceneArgBase@ha
lis      r5, __vt__Q26Screen11SetSceneArg@ha
stw      r9, 0x1c(r1)
addi     r7, r4, __vt__Q26Screen12SceneArgBase@l
li       r4, 1
addi     r6, r5, __vt__Q26Screen11SetSceneArg@l
stw      r0, 0x18(r1)
addi     r0, r1, 0x18
li       r5, 0x4e22
stb      r9, 0x20(r1)
lbz      r8, 0xc(r3)
mr       r3, r31
stw      r7, 8(r1)
stb      r4, 0x11(r1)
stb      r8, 0x20(r1)
stw      r6, 8(r1)
stw      r5, 0xc(r1)
stb      r9, 0x10(r1)
stw      r0, 0x14(r1)
stb      r9, 0x11(r1)
lwz      r12, 0(r31)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
addi     r4, r1, 8
bl       setScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
clrlwi.  r0, r3, 0x18
beq      lbl_80401728
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
li       r4, 0
bl       startScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
b        lbl_80401728

lbl_804016EC:
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
bl       setBackupScene__Q26Screen9SceneBaseFv
clrlwi.  r0, r3, 0x18
beq      lbl_80401728
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
li       r4, 0
bl       startScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg

lbl_80401728:
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
li       r4, 0
li       r5, 0
li       r6, 0
li       r7, 0
bl       setColorBG__Q26Screen9SceneBaseFUcUcUcUc
lwz      r0, 0x34(r1)
li       r3, 1
lwz      r31, 0x2c(r1)
mtlr     r0
addi     r1, r1, 0x30
blr
	*/
}

/*
 * --INFO--
 * Address:	80401768
 * Size:	000384
 */
void ObjReadyGo::updateAnimation()
{
	/*
stwu     r1, -0xc0(r1)
mflr     r0
stw      r0, 0xc4(r1)
stfd     f31, 0xb0(r1)
psq_st   f31, 184(r1), 0, qr0
stfd     f30, 0xa0(r1)
psq_st   f30, 168(r1), 0, qr0
stfd     f29, 0x90(r1)
psq_st   f29, 152(r1), 0, qr0
stfd     f28, 0x80(r1)
psq_st   f28, 136(r1), 0, qr0
stmw     r25, 0x64(r1)
mr       r25, r3
li       r27, 0
bl       getDispMember__Q26Screen7ObjBaseFv
lis      r4, 0x595F474F@ha
lis      r5, 0x52454144@ha
addi     r6, r4, 0x595F474F@l
li       r4, 0x4b48
addi     r5, r5, 0x52454144@l
bl       isID__Q32og6Screen14DispMemberBaseFUlUx
clrlwi.  r0, r3, 0x18
bne      lbl_804017E0
lis      r3, lbl_8049867C@ha
lis      r5, lbl_8049868C@ha
addi     r3, r3, lbl_8049867C@l
li       r4, 0xc3
addi     r5, r5, lbl_8049868C@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_804017E0:
mr       r3, r25
bl       getDispMember__Q26Screen7ObjBaseFv
lis      r4, msVal__Q32kh6Screen10ObjReadyGo@ha
lfd      f29, lbl_80520068@sda21(r2)
lfs      f30, lbl_8052005C@sda21(r2)
mr       r29, r3
lfs      f31, lbl_80520060@sda21(r2)
mr       r28, r25
addi     r30, r4, msVal__Q32kh6Screen10ObjReadyGo@l
li       r26, 0
lis      r31, 0x4330
b        lbl_80401A64

lbl_80401810:
lfs      f0, 0x50(r28)
lwz      r3, 0x40(r28)
stfs     f0, 8(r3)
lfs      f0, 0x58(r28)
lwz      r3, 0x48(r28)
stfs     f0, 8(r3)
lwz      r3, 0x38(r28)
bl       animation__9J2DScreenFv
lfs      f1, 0x50(r28)
lfs      f0, 0(r30)
stw      r31, 0x58(r1)
fadds    f0, f1, f0
stfs     f0, 0x50(r28)
lfs      f1, 0x58(r28)
lfs      f0, 0(r30)
fadds    f0, f1, f0
stfs     f0, 0x58(r28)
lwz      r3, 0x40(r28)
lfs      f2, 0x50(r28)
lha      r3, 6(r3)
addi     r0, r3, -2
xoris    r0, r0, 0x8000
stw      r0, 0x5c(r1)
lfd      f0, 0x58(r1)
fsubs    f0, f0, f29
fcmpo    cr0, f2, f0
cror     2, 1, 2
beq      lbl_804018B4
lwz      r3, 0x48(r28)
lis      r0, 0x4330
stw      r0, 0x58(r1)
lha      r3, 6(r3)
lfs      f1, 0x58(r28)
addi     r0, r3, -2
xoris    r0, r0, 0x8000
stw      r0, 0x5c(r1)
lfd      f0, 0x58(r1)
fsubs    f0, f0, f29
fcmpo    cr0, f1, f0
cror     2, 1, 2
bne      lbl_804018B8

lbl_804018B4:
li       r27, 1

lbl_804018B8:
fcmpo    cr0, f2, f30
ble      lbl_80401A40
addi     r4, r26, 0x68
lbzx     r0, r25, r4
cmplwi   r0, 0
bne      lbl_80401A40
li       r0, 1
lis      r3, 0x4E414C4C@ha
stbx     r0, r25, r4
addi     r6, r3, 0x4E414C4C@l
li       r5, 0
lwz      r3, 0x38(r28)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
bl       getPaneCenterY__Q22kh6ScreenFP7J2DPane
lwz      r3, 0x38(r28)
lis      r4, 0x4E414C4C@ha
lfs      f0, 0x10(r30)
addi     r6, r4, 0x4E414C4C@l
lwz      r12, 0(r3)
li       r5, 0
fadds    f28, f0, f1
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
bl       getPaneCenterX__Q22kh6ScreenFP7J2DPane
lfs      f0, 0xc(r30)
lis      r3, __vt__Q25efx2d3Arg@ha
stfs     f28, 0x14(r1)
addi     r0, r3, __vt__Q25efx2d3Arg@l
fadds    f0, f0, f1
lwz      r3, 0x14(r1)
stw      r0, 0x20(r1)
stfs     f0, 0x10(r1)
lwz      r0, 0x10(r1)
stw      r3, 0xc(r1)
stw      r0, 8(r1)
lfs      f0, 0xc(r1)
lfs      f1, 8(r1)
stfs     f0, 0x1c(r1)
stfs     f1, 0x18(r1)
lwz      r0, 0x10(r29)
cmpwi    r0, 0
bne      lbl_804019E0
lis      r3, __vt__Q25efx2d7TBaseIF@ha
li       r8, 0
addi     r0, r3, __vt__Q25efx2d7TBaseIF@l
lis      r3, __vt__Q25efx2d5TBase@ha
stw      r0, 0x38(r1)
addi     r0, r3, __vt__Q25efx2d5TBase@l
lis      r4, __vt__Q25efx2d8TSimple3@ha
lis      r3, __vt__Q25efx2d9T2DGoBatl@ha
stw      r0, 0x38(r1)
addi     r0, r4, __vt__Q25efx2d8TSimple3@l
li       r7, 0xd
li       r6, 0xe
stw      r0, 0x38(r1)
addi     r0, r3, __vt__Q25efx2d9T2DGoBatl@l
li       r5, 0xf
addi     r3, r1, 0x38
stb      r8, 0x3c(r1)
addi     r4, r1, 0x18
stb      r8, 0x3d(r1)
sth      r7, 0x40(r1)
sth      r6, 0x42(r1)
sth      r5, 0x44(r1)
stw      r8, 0x48(r1)
stw      r8, 0x4c(r1)
stw      r8, 0x50(r1)
stw      r0, 0x38(r1)
bl       create__Q25efx2d8TSimple3FPQ25efx2d3Arg
b        lbl_80401A40

lbl_804019E0:
lis      r3, __vt__Q25efx2d7TBaseIF@ha
li       r7, 0
addi     r0, r3, __vt__Q25efx2d7TBaseIF@l
lis      r3, __vt__Q25efx2d5TBase@ha
stw      r0, 0x24(r1)
addi     r0, r3, __vt__Q25efx2d5TBase@l
lis      r4, __vt__Q25efx2d8TSimple2@ha
lis      r3, __vt__Q25efx2d9T2DGoChal@ha
stw      r0, 0x24(r1)
addi     r0, r4, __vt__Q25efx2d8TSimple2@l
li       r6, 0x10
li       r5, 0x11
stw      r0, 0x24(r1)
addi     r0, r3, __vt__Q25efx2d9T2DGoChal@l
addi     r3, r1, 0x24
addi     r4, r1, 0x18
stb      r7, 0x28(r1)
stb      r7, 0x29(r1)
sth      r6, 0x2c(r1)
sth      r5, 0x2e(r1)
stw      r7, 0x30(r1)
stw      r7, 0x34(r1)
stw      r0, 0x24(r1)
bl       create__Q25efx2d8TSimple2FPQ25efx2d3Arg

lbl_80401A40:
lfs      f0, 0x50(r28)
fcmpo    cr0, f0, f31
cror     2, 1, 2
bne      lbl_80401A5C
li       r0, 1
stb      r0, 0x6a(r25)
stw      r0, 8(r29)

lbl_80401A5C:
addi     r28, r28, 4
addi     r26, r26, 1

lbl_80401A64:
lwz      r0, 0x6c(r25)
cmpw     r26, r0
blt      lbl_80401810
lbz      r0, 0x6a(r25)
cmplwi   r0, 0
beq      lbl_80401AB4
lbz      r0, 0x6b(r25)
cmplwi   r0, 0
bne      lbl_80401AB4
lbz      r0, 0xd(r29)
cmplwi   r0, 0
bne      lbl_80401AB4
lwz      r3, gameSystem__4Game@sda21(r13)
lwz      r3, 0x58(r3)
lwz      r12, 0(r3)
lwz      r12, 0x64(r12)
mtctr    r12
bctrl
li       r0, 1
stb      r0, 0x6b(r25)

lbl_80401AB4:
mr       r3, r27
psq_l    f31, 184(r1), 0, qr0
lfd      f31, 0xb0(r1)
psq_l    f30, 168(r1), 0, qr0
lfd      f30, 0xa0(r1)
psq_l    f29, 152(r1), 0, qr0
lfd      f29, 0x90(r1)
psq_l    f28, 136(r1), 0, qr0
lfd      f28, 0x80(r1)
lmw      r25, 0x64(r1)
lwz      r0, 0xc4(r1)
mtlr     r0
addi     r1, r1, 0xc0
blr
	*/
}

/*
 * --INFO--
 * Address:	80401AEC
 * Size:	000040
 */
void SceneReadyGo::doConfirmSetScene(Screen::SetSceneArg&)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
mr       r3, r4
stw      r0, 0x14(r1)
lwz      r12, 0(r4)
lwz      r12, 8(r12)
mtctr    r12
bctrl
subfic   r4, r3, 0x271a
addi     r0, r3, -10010
or       r0, r4, r0
srwi     r3, r0, 0x1f
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	80401B2C
 * Size:	00000C
 */
void SceneReadyGo::getResName() const
{
	/*
lis      r3, lbl_8049872C@ha
addi     r3, r3, lbl_8049872C@l
blr
	*/
}

/*
 * --INFO--
 * Address:	80401B38
 * Size:	000008
 */
u32 SceneReadyGo::isUseBackupSceneInfo() { return 0x1; }

/*
 * --INFO--
 * Address:	80401B40
 * Size:	000008
 */
u32 SceneReadyGo::getSceneType() { return 0x4E21; }

/*
 * --INFO--
 * Address:	80401B48
 * Size:	000008
 */
u32 SceneReadyGo::getOwnerID() { return 0x4B48; }

/*
 * --INFO--
 * Address:	80401B50
 * Size:	000014
 */
void SceneReadyGo::getMemberID()
{
	/*
lis      r4, 0x595F474F@ha
lis      r3, 0x52454144@ha
addi     r4, r4, 0x595F474F@l
addi     r3, r3, 0x52454144@l
blr
	*/
}

/*
 * --INFO--
 * Address:	80401B64
 * Size:	0000C4
 */
void SceneReadyGo::doCreateObj(JKRArchive*)
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
stw      r30, 0x18(r1)
mr       r30, r4
stw      r29, 0x14(r1)
mr       r29, r3
li       r3, 0x70
bl       __nw__FUl
or.      r31, r3, r3
beq      lbl_80401BFC
bl       __ct__Q26Screen7ObjBaseFv
lis      r4, __vt__Q32kh6Screen10ObjReadyGo@ha
li       r3, 0
addi     r4, r4, __vt__Q32kh6Screen10ObjReadyGo@l
lfs      f0, lbl_80520058@sda21(r2)
stw      r4, 0(r31)
addi     r4, r4, 0x10
li       r0, 1
stw      r4, 0x18(r31)
stw      r3, 0x38(r31)
stw      r3, 0x40(r31)
stw      r3, 0x48(r31)
stfs     f0, 0x58(r31)
stfs     f0, 0x50(r31)
stfs     f0, 0x60(r31)
stb      r3, 0x68(r31)
stw      r3, 0x3c(r31)
stw      r3, 0x44(r31)
stw      r3, 0x4c(r31)
stfs     f0, 0x5c(r31)
stfs     f0, 0x54(r31)
stfs     f0, 0x64(r31)
stb      r3, 0x69(r31)
stw      r0, 0x6c(r31)
stb      r3, 0x6a(r31)
stb      r3, 0x6b(r31)

lbl_80401BFC:
mr       r3, r29
mr       r4, r31
mr       r5, r30
bl       registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
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
 * Address:	80401C28
 * Size:	0000AC
 */
ObjReadyGo::~ObjReadyGo()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_80401CB8
lis      r4, __vt__Q32kh6Screen10ObjReadyGo@ha
addi     r4, r4, __vt__Q32kh6Screen10ObjReadyGo@l
stw      r4, 0(r30)
addi     r0, r4, 0x10
stw      r0, 0x18(r30)
beq      lbl_80401CA8
lis      r4, __vt__Q26Screen7ObjBase@ha
addi     r4, r4, __vt__Q26Screen7ObjBase@l
stw      r4, 0(r30)
addi     r0, r4, 0x10
stw      r0, 0x18(r30)
beq      lbl_80401CA8
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

lbl_80401CA8:
extsh.   r0, r31
ble      lbl_80401CB8
mr       r3, r30
bl       __dl__FPv

lbl_80401CB8:
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
 * Address:	80401CD4
 * Size:	00005C
 */
void __sinit_khReadyGo_cpp(void)
{
	/*
	lis      r3, __float_nan@ha
	li       r0, -1
	addi     r5, r3, __float_nan@l
	lis      r4, lbl_804EAB98@ha
	lfs      f5, 0(r5)
	lis      r3, msVal__Q32kh6Screen10ObjReadyGo@ha
	lfs      f4, lbl_80520070@sda21(r2)
	addi     r3, r3, msVal__Q32kh6Screen10ObjReadyGo@l
	stfsu    f5, lbl_804EAB98@l(r4)
	lfs      f3, lbl_80520074@sda21(r2)
	lfs      f2, lbl_80520078@sda21(r2)
	lfs      f1, lbl_8052007C@sda21(r2)
	lfs      f0, lbl_80520080@sda21(r2)
	stw      r0, lbl_80516128@sda21(r13)
	stfs     f5, lbl_8051612C@sda21(r13)
	stfs     f5, 4(r4)
	stfs     f5, 8(r4)
	stfs     f4, 4(r3)
	stfs     f3, 8(r3)
	stfs     f2, 0(r3)
	stfs     f1, 0xc(r3)
	stfs     f0, 0x10(r3)
	blr
	*/
}

namespace kh {
namespace Screen {

/*
 * --INFO--
 * Address:	80401D30
 * Size:	000008
 */
ObjReadyGo::@24 @~ObjReadyGo()
{
	/*
addi     r3, r3, -24
b        __dt__Q32kh6Screen10ObjReadyGoFv
	*/
}
} // namespace Screen
} // namespace kh
