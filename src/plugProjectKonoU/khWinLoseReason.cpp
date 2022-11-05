#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_khWinLoseReason_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_804994F0
    lbl_804994F0:
        .asciz "khWinLoseReason.cpp"
        .asciz "otakara_get.blo"
        .asciz "otakara_get.bck"
        .asciz "otakara_get.bpk"
        .asciz "disp member err"
        .asciz "OrimaDown"
        .skip 2
    .global lbl_80499550
    lbl_80499550:
        .asciz "P2Assert"
        .skip 3
        .asciz "PikminDown"
        .skip 1
        .asciz "LujiDown"
        .skip 3
        .asciz "PSGame.h"
        .skip 3
        .asciz "PSScene.h"
        .skip 2
        .asciz "get sound scene at\ninvalid timming\n"
    .global lbl_804995B0
    lbl_804995B0:
        .asciz "win_lose_reason.szs"
        .asciz "screenObj.h"

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32kh6Screen18SceneWinLoseReason
    __vt__Q32kh6Screen18SceneWinLoseReason:
        .4byte 0
        .4byte 0
        .4byte getSceneType__Q32kh6Screen18SceneWinLoseReasonFv
        .4byte getOwnerID__Q32kh6Screen18SceneWinLoseReasonFv
        .4byte getMemberID__Q32kh6Screen18SceneWinLoseReasonFv
        .4byte isUseBackupSceneInfo__Q26Screen9SceneBaseFv
        .4byte isDrawInDemo__Q26Screen9SceneBaseCFv
        .4byte getResName__Q32kh6Screen18SceneWinLoseReasonCFv
        .4byte doCreateObj__Q32kh6Screen18SceneWinLoseReasonFP10JKRArchive
        .4byte doUserCallBackFunc__Q26Screen9SceneBaseFPQ28Resource10MgrCommand
        .4byte setPort__Q26Screen9SceneBaseFR8Graphics
        .4byte doUpdateActive__Q32kh6Screen18SceneWinLoseReasonFv
        .4byte doConfirmSetScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
        .4byte
   doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg .4byte
   doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg .4byte
   doStart__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg .4byte
   doEnd__Q32kh6Screen18SceneWinLoseReasonFPQ26Screen11EndSceneArg .4byte
   setDefaultDispMember__Q26Screen9SceneBaseFv .4byte
   doSetBackupScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg .4byte
   doGetFinishState__Q26Screen9SceneBaseFv .global
   __vt__Q32kh6Screen16ObjWinLoseReason
    __vt__Q32kh6Screen16ObjWinLoseReason:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32kh6Screen16ObjWinLoseReasonFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q32kh6Screen16ObjWinLoseReasonFv"
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
        .4byte doCreate__Q32kh6Screen16ObjWinLoseReasonFP10JKRArchive
        .4byte doUpdateFadein__Q26Screen7ObjBaseFv
        .4byte doUpdateFadeinFinish__Q26Screen7ObjBaseFv
        .4byte doUpdate__Q32kh6Screen16ObjWinLoseReasonFv
        .4byte doUpdateFinish__Q26Screen7ObjBaseFv
        .4byte doUpdateFadeout__Q26Screen7ObjBaseFv
        .4byte doUpdateFadeoutFinish__Q26Screen7ObjBaseFv
        .4byte doDraw__Q32kh6Screen16ObjWinLoseReasonFR8Graphics
        .4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global msVal__Q32kh6Screen16ObjWinLoseReason
    msVal__Q32kh6Screen16ObjWinLoseReason:
        .skip 0x1C

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520240
    lbl_80520240:
        .4byte 0x00000000
    .global lbl_80520244
    lbl_80520244:
        .float 1.0
    .global lbl_80520248
    lbl_80520248:
        .4byte 0xC2F00000
    .global lbl_8052024C
    lbl_8052024C:
        .4byte 0x42F00000
*/

namespace kh {
namespace Screen {

/*
 * --INFO--
 * Address:	80410714
 * Size:	0000CC
 */
void ObjWinLoseReason::doCreate(JKRArchive*)
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
lis      r5, lbl_804994F0@ha
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
addi     r31, r5, lbl_804994F0@l
stw      r30, 0x18(r1)
mr       r30, r4
stw      r29, 0x14(r1)
mr       r29, r3
li       r3, 0x148
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_80410754
bl       __ct__Q29P2DScreen10Mgr_tuningFv
mr       r0, r3

lbl_80410754:
stw      r0, 0x38(r29)
mr       r6, r30
addi     r4, r31, 0x14
lis      r5, 0x104
lwz      r3, 0x38(r29)
bl       set__9J2DScreenFPCcUlP10JKRArchive
mr       r4, r30
addi     r3, r31, 0x24
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x3c(r29)
mr       r4, r30
addi     r3, r31, 0x34
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x40(r29)
lwz      r3, 0x38(r29)
lwz      r4, 0x3c(r29)
lwz      r12, 0(r3)
lwz      r12, 0x5c(r12)
mtctr    r12
bctrl
lwz      r3, 0x38(r29)
lwz      r4, 0x40(r29)
lwz      r12, 0(r3)
lwz      r12, 0x5c(r12)
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
 * Address:	804107E0
 * Size:	000008
 */
u32 ObjWinLoseReason::doUpdate() { return 0x0; }

/*
 * --INFO--
 * Address:	804107E8
 * Size:	000004
 */
void ObjWinLoseReason::doDraw(Graphics& gfx) { }

/*
 * --INFO--
 * Address:	804107EC
 * Size:	000060
 */
SceneWinLoseReason::SceneWinLoseReason()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
bl       __ct__Q26Screen9SceneBaseFv
lis      r3, __vt__Q32kh6Screen18SceneWinLoseReason@ha
li       r4, 0
addi     r3, r3, __vt__Q32kh6Screen18SceneWinLoseReason@l
li       r0, -1
stw      r3, 0(r31)
mr       r3, r31
stw      r4, 0x224(r31)
stw      r4, 0x220(r31)
stw      r0, 0x22c(r31)
stw      r0, 0x228(r31)
stb      r4, 0x231(r31)
stb      r4, 0x230(r31)
stw      r4, 0x234(r31)
lwz      r31, 0xc(r1)
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	8041084C
 * Size:	000588
 */
void SceneWinLoseReason::doCreateObj(JKRArchive*)
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
lis      r6, lbl_804994F0@ha
lis      r5, 0x5F52534E@ha
stw      r0, 0x24(r1)
stmw     r27, 0xc(r1)
mr       r28, r3
mr       r29, r4
addi     r31, r6, lbl_804994F0@l
addi     r6, r5, 0x5F52534E@l
li       r4, 0x4b48
li       r5, 0x574c
lwz      r3, 0x21c(r3)
bl       isID__Q32og6Screen14DispMemberBaseFUlUx
clrlwi.  r0, r3, 0x18
bne      lbl_804108A0
addi     r3, r31, 0
addi     r5, r31, 0x44
li       r4, 0x8c
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_804108A0:
lwz      r30, 0x21c(r28)
lwz      r0, 8(r30)
stw      r0, 0x228(r28)
lwz      r0, 8(r30)
cmpwi    r0, 2
beq      lbl_80410964
bge      lbl_804108C8
cmpwi    r0, 1
bge      lbl_804108D4
b        lbl_80410A5C

lbl_804108C8:
cmpwi    r0, 4
bge      lbl_80410A5C
b        lbl_804109F4

lbl_804108D4:
li       r3, 0x90
bl       __nw__FUl
or.      r27, r3, r3
beq      lbl_80410900
addi     r4, r31, 0x54
bl       __ct__Q28Morimura13TGameOverBaseFPc
lis      r3, __vt__Q28Morimura12TOrimaDown2D@ha
addi     r3, r3, __vt__Q28Morimura12TOrimaDown2D@l
stw      r3, 0(r27)
addi     r0, r3, 0x10
stw      r0, 0x18(r27)

lbl_80410900:
stw      r27, 0x220(r28)
mr       r3, r28
mr       r5, r29
lwz      r4, 0x220(r28)
bl       registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
lwz      r27, 0x220(r28)
cmplwi   r27, 0
bne      lbl_80410934
addi     r3, r31, 0
addi     r5, r31, 0x60
li       r4, 0x95
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_80410934:
lis      r4, msVal__Q32kh6Screen16ObjWinLoseReason@ha
lwz      r3, 0x7c(r27)
addi     r4, r4, msVal__Q32kh6Screen16ObjWinLoseReason@l
lfs      f1, 4(r4)
bl       setPosY__Q28Morimura15TGameOverScreenFf
li       r0, 1
lis      r3, msVal__Q32kh6Screen16ObjWinLoseReason@ha
stw      r0, 0x88(r27)
addi     r3, r3, msVal__Q32kh6Screen16ObjWinLoseReason@l
lbz      r0, 0x18(r3)
sth      r0, 0x8c(r27)
b        lbl_80410A64

lbl_80410964:
li       r3, 0x90
bl       __nw__FUl
or.      r27, r3, r3
beq      lbl_80410990
addi     r4, r31, 0x6c
bl       __ct__Q28Morimura13TGameOverBaseFPc
lis      r3, __vt__Q28Morimura13TPikminDown2D@ha
addi     r3, r3, __vt__Q28Morimura13TPikminDown2D@l
stw      r3, 0(r27)
addi     r0, r3, 0x10
stw      r0, 0x18(r27)

lbl_80410990:
stw      r27, 0x220(r28)
mr       r3, r28
mr       r5, r29
lwz      r4, 0x220(r28)
bl       registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
lwz      r27, 0x220(r28)
cmplwi   r27, 0
bne      lbl_804109C4
addi     r3, r31, 0
addi     r5, r31, 0x60
li       r4, 0x9f
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_804109C4:
lis      r4, msVal__Q32kh6Screen16ObjWinLoseReason@ha
lwz      r3, 0x7c(r27)
addi     r4, r4, msVal__Q32kh6Screen16ObjWinLoseReason@l
lfs      f1, 4(r4)
bl       setPosY__Q28Morimura15TGameOverScreenFf
li       r0, 1
lis      r3, msVal__Q32kh6Screen16ObjWinLoseReason@ha
stw      r0, 0x88(r27)
addi     r3, r3, msVal__Q32kh6Screen16ObjWinLoseReason@l
lbz      r0, 0x18(r3)
sth      r0, 0x8c(r27)
b        lbl_80410A64

lbl_804109F4:
li       r3, 0x50
bl       __nw__FUl
or.      r27, r3, r3
beq      lbl_80410A3C
bl       __ct__Q26Screen7ObjBaseFv
lis      r3, __vt__Q32kh6Screen16ObjWinLoseReason@ha
li       r0, 0
addi     r3, r3, __vt__Q32kh6Screen16ObjWinLoseReason@l
lfs      f0, lbl_80520240@sda21(r2)
stw      r3, 0(r27)
addi     r3, r3, 0x10
stw      r3, 0x18(r27)
stw      r0, 0x38(r27)
stw      r0, 0x3c(r27)
stw      r0, 0x40(r27)
stfs     f0, 0x48(r27)
stfs     f0, 0x44(r27)
stw      r0, 0x4c(r27)

lbl_80410A3C:
stw      r27, 0x220(r28)
mr       r3, r28
mr       r5, r29
lwz      r4, 0x220(r28)
bl       registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
li       r0, 1
stb      r0, 0x230(r28)
b        lbl_80410A64

lbl_80410A5C:
li       r0, 1
stb      r0, 0x230(r28)

lbl_80410A64:
lwz      r0, 0xc(r30)
stw      r0, 0x22c(r28)
lwz      r0, 0xc(r30)
cmpwi    r0, 2
beq      lbl_80410B24
bge      lbl_80410A88
cmpwi    r0, 1
bge      lbl_80410A94
b        lbl_80410C20

lbl_80410A88:
cmpwi    r0, 4
bge      lbl_80410C20
b        lbl_80410BB4

lbl_80410A94:
li       r3, 0x90
bl       __nw__FUl
or.      r30, r3, r3
beq      lbl_80410AC0
addi     r4, r31, 0x78
bl       __ct__Q28Morimura13TGameOverBaseFPc
lis      r3, __vt__Q28Morimura11TLujiDown2D@ha
addi     r3, r3, __vt__Q28Morimura11TLujiDown2D@l
stw      r3, 0(r30)
addi     r0, r3, 0x10
stw      r0, 0x18(r30)

lbl_80410AC0:
stw      r30, 0x224(r28)
mr       r3, r28
mr       r5, r29
lwz      r4, 0x224(r28)
bl       registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
lwz      r27, 0x224(r28)
cmplwi   r27, 0
bne      lbl_80410AF4
addi     r3, r31, 0
addi     r5, r31, 0x60
li       r4, 0xb4
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_80410AF4:
lis      r4, msVal__Q32kh6Screen16ObjWinLoseReason@ha
lwz      r3, 0x7c(r27)
addi     r4, r4, msVal__Q32kh6Screen16ObjWinLoseReason@l
lfs      f1, 8(r4)
bl       setPosY__Q28Morimura15TGameOverScreenFf
li       r0, 2
lis      r3, msVal__Q32kh6Screen16ObjWinLoseReason@ha
stw      r0, 0x88(r27)
addi     r3, r3, msVal__Q32kh6Screen16ObjWinLoseReason@l
lbz      r0, 0x18(r3)
sth      r0, 0x8c(r27)
b        lbl_80410C28

lbl_80410B24:
li       r3, 0x90
bl       __nw__FUl
or.      r30, r3, r3
beq      lbl_80410B50
addi     r4, r31, 0x6c
bl       __ct__Q28Morimura13TGameOverBaseFPc
lis      r3, __vt__Q28Morimura13TPikminDown2D@ha
addi     r3, r3, __vt__Q28Morimura13TPikminDown2D@l
stw      r3, 0(r30)
addi     r0, r3, 0x10
stw      r0, 0x18(r30)

lbl_80410B50:
stw      r30, 0x224(r28)
mr       r3, r28
mr       r5, r29
lwz      r4, 0x224(r28)
bl       registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
lwz      r27, 0x224(r28)
cmplwi   r27, 0
bne      lbl_80410B84
addi     r3, r31, 0
addi     r5, r31, 0x60
li       r4, 0xbe
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_80410B84:
lis      r4, msVal__Q32kh6Screen16ObjWinLoseReason@ha
lwz      r3, 0x7c(r27)
addi     r4, r4, msVal__Q32kh6Screen16ObjWinLoseReason@l
lfs      f1, 8(r4)
bl       setPosY__Q28Morimura15TGameOverScreenFf
li       r0, 2
lis      r3, msVal__Q32kh6Screen16ObjWinLoseReason@ha
stw      r0, 0x88(r27)
addi     r3, r3, msVal__Q32kh6Screen16ObjWinLoseReason@l
lbz      r0, 0x18(r3)
sth      r0, 0x8c(r27)
b        lbl_80410C28

lbl_80410BB4:
li       r3, 0x50
bl       __nw__FUl
or.      r30, r3, r3
beq      lbl_80410C00
bl       __ct__Q26Screen7ObjBaseFv
lis      r4, __vt__Q32kh6Screen16ObjWinLoseReason@ha
li       r3, 0
addi     r4, r4, __vt__Q32kh6Screen16ObjWinLoseReason@l
lfs      f0, lbl_80520240@sda21(r2)
stw      r4, 0(r30)
addi     r4, r4, 0x10
li       r0, 1
stw      r4, 0x18(r30)
stw      r3, 0x38(r30)
stw      r3, 0x3c(r30)
stw      r3, 0x40(r30)
stfs     f0, 0x48(r30)
stfs     f0, 0x44(r30)
stw      r0, 0x4c(r30)

lbl_80410C00:
stw      r30, 0x224(r28)
mr       r3, r28
mr       r5, r29
lwz      r4, 0x224(r28)
bl       registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
li       r0, 1
stb      r0, 0x231(r28)
b        lbl_80410C28

lbl_80410C20:
li       r0, 1
stb      r0, 0x231(r28)

lbl_80410C28:
mr       r3, r28
li       r4, 0
li       r5, 0
li       r6, 0
li       r7, 0xa0
bl       setColorBG__Q26Screen9SceneBaseFUcUcUcUc
lwz      r0, 0x228(r28)
li       r3, 0
cmpwi    r0, 2
beq      lbl_80410C6C
bge      lbl_80410C60
cmpwi    r0, 1
bge      lbl_80410C74
b        lbl_80410C80

lbl_80410C60:
cmpwi    r0, 4
bge      lbl_80410C80
b        lbl_80410C7C

lbl_80410C6C:
ori      r3, r3, 1
b        lbl_80410C80

lbl_80410C74:
ori      r3, r3, 2
b        lbl_80410C80

lbl_80410C7C:
ori      r3, r3, 4

lbl_80410C80:
lwz      r0, 0x22c(r28)
cmpwi    r0, 2
beq      lbl_80410CA8
bge      lbl_80410C9C
cmpwi    r0, 1
bge      lbl_80410CB0
b        lbl_80410CBC

lbl_80410C9C:
cmpwi    r0, 4
bge      lbl_80410CBC
b        lbl_80410CB8

lbl_80410CA8:
ori      r3, r3, 0x10
b        lbl_80410CBC

lbl_80410CB0:
ori      r3, r3, 0x20
b        lbl_80410CBC

lbl_80410CB8:
ori      r3, r3, 0x40

lbl_80410CBC:
andi.    r0, r3, 0x44
bne      lbl_80410DC0
clrlwi.  r0, r3, 0x1e
bne      lbl_80410CEC
rlwinm.  r0, r3, 0, 0x1a, 0x1a
beq      lbl_80410CE0
lis      r3, 0xC001103D@ha
addi     r3, r3, 0xC001103D@l
b        lbl_80410D1C

lbl_80410CE0:
lis      r3, 0xC0011040@ha
addi     r3, r3, 0xC0011040@l
b        lbl_80410D1C

lbl_80410CEC:
rlwinm.  r0, r3, 0, 0x1a, 0x1b
bne      lbl_80410D14
rlwinm.  r0, r3, 0, 0x1e, 0x1e
beq      lbl_80410D08
lis      r3, 0xC001103E@ha
addi     r3, r3, 0xC001103E@l
b        lbl_80410D1C

lbl_80410D08:
lis      r3, 0xC0011041@ha
addi     r3, r3, 0xC0011041@l
b        lbl_80410D1C

lbl_80410D14:
lis      r3, 0xC0011045@ha
addi     r3, r3, 0xC0011045@l

lbl_80410D1C:
bl       PSStart2DStream__FUl
bl       PSMuteSE_on2D__Fv
lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
cmplwi   r0, 0
bne      lbl_80410D44
addi     r3, r31, 0x84
addi     r5, r31, 0x60
li       r4, 0x1d3
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_80410D44:
lwz      r27, spSceneMgr__8PSSystem@sda21(r13)
cmplwi   r27, 0
bne      lbl_80410D64
addi     r3, r31, 0x84
addi     r5, r31, 0x60
li       r4, 0x1dc
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_80410D64:
lwz      r0, 4(r27)
cmplwi   r0, 0
bne      lbl_80410D84
addi     r3, r31, 0x90
addi     r5, r31, 0x60
li       r4, 0xcf
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_80410D84:
lwz      r3, 4(r27)
lwz      r27, 4(r3)
cmplwi   r27, 0
bne      lbl_80410DA8
addi     r3, r31, 0x90
addi     r5, r31, 0x9c
li       r4, 0xd1
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_80410DA8:
mr       r3, r27
li       r4, 2
lwz      r12, 0(r27)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl

lbl_80410DC0:
lmw      r27, 0xc(r1)
lwz      r0, 0x24(r1)
mtlr     r0
addi     r1, r1, 0x20
blr
	*/
}

/*
 * --INFO--
 * Address:	80410DD4
 * Size:	0000CC
 */
void SceneWinLoseReason::doUpdateActive()
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stmw     r27, 0xc(r1)
mr       r31, r3
lis      r3, msVal__Q32kh6Screen16ObjWinLoseReason@ha
li       r28, 0
mr       r29, r31
addi     r30, r3, msVal__Q32kh6Screen16ObjWinLoseReason@l
lwz      r4, 0x234(r31)
addi     r0, r4, 1
stw      r0, 0x234(r31)

lbl_80410E04:
lwz      r0, 0x228(r29)
cmpwi    r0, 3
bge      lbl_80410E7C
cmpwi    r0, 1
bge      lbl_80410E1C
b        lbl_80410E7C

lbl_80410E1C:
lwz      r3, 0x234(r31)
lwz      r0, 0xc(r30)
cmpw     r3, r0
bne      lbl_80410E64
lwz      r27, 0x220(r29)
cmplwi   r27, 0
bne      lbl_80410E54
lis      r3, lbl_804994F0@ha
lis      r5, lbl_80499550@ha
addi     r3, r3, lbl_804994F0@l
li       r4, 0x110
addi     r5, r5, lbl_80499550@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_80410E54:
lbz      r0, 0x18(r30)
neg      r0, r0
sth      r0, 0x8c(r27)
b        lbl_80410E7C

lbl_80410E64:
lwz      r0, 0x10(r30)
cmpw     r3, r0
ble      lbl_80410E7C
addi     r0, r28, 0x230
li       r3, 1
stbx     r3, r31, r0

lbl_80410E7C:
addi     r28, r28, 1
addi     r29, r29, 4
cmpwi    r28, 2
blt      lbl_80410E04
lmw      r27, 0xc(r1)
lwz      r0, 0x24(r1)
mtlr     r0
addi     r1, r1, 0x20
blr
	*/
}

/*
 * --INFO--
 * Address:	80410EA0
 * Size:	000020
 */
void SceneWinLoseReason::doEnd(Screen::EndSceneArg*)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
bl       doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	80410EC0
 * Size:	00000C
 */
void SceneWinLoseReason::getResName() const
{
	/*
lis      r3, lbl_804995B0@ha
addi     r3, r3, lbl_804995B0@l
blr
	*/
}

/*
 * --INFO--
 * Address:	80410ECC
 * Size:	000008
 */
u32 SceneWinLoseReason::getSceneType() { return 0x4E29; }

/*
 * --INFO--
 * Address:	80410ED4
 * Size:	000008
 */
u32 SceneWinLoseReason::getOwnerID() { return 0x4B48; }

/*
 * --INFO--
 * Address:	80410EDC
 * Size:	000010
 */
void SceneWinLoseReason::getMemberID()
{
	/*
lis      r4, 0x5F52534E@ha
li       r3, 0x574c
addi     r4, r4, 0x5F52534E@l
blr
	*/
}

/*
 * --INFO--
 * Address:	80410EEC
 * Size:	0000AC
 */
ObjWinLoseReason::~ObjWinLoseReason()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_80410F7C
lis      r4, __vt__Q32kh6Screen16ObjWinLoseReason@ha
addi     r4, r4, __vt__Q32kh6Screen16ObjWinLoseReason@l
stw      r4, 0(r30)
addi     r0, r4, 0x10
stw      r0, 0x18(r30)
beq      lbl_80410F6C
lis      r4, __vt__Q26Screen7ObjBase@ha
addi     r4, r4, __vt__Q26Screen7ObjBase@l
stw      r4, 0(r30)
addi     r0, r4, 0x10
stw      r0, 0x18(r30)
beq      lbl_80410F6C
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

lbl_80410F6C:
extsh.   r0, r31
ble      lbl_80410F7C
mr       r3, r30
bl       __dl__FPv

lbl_80410F7C:
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
 * Address:	80410F98
 * Size:	000040
 */
void __sinit_khWinLoseReason_cpp(void)
{
	/*
	lis      r3, msVal__Q32kh6Screen16ObjWinLoseReason@ha
	lfs      f2, lbl_80520244@sda21(r2)
	addi     r5, r3, msVal__Q32kh6Screen16ObjWinLoseReason@l
	li       r4, 0x64
	lfs      f1, lbl_80520248@sda21(r2)
	li       r3, 0x7d
	lfs      f0, lbl_8052024C@sda21(r2)
	li       r0, 2
	stfs     f2, 0(r5)
	stfs     f1, 4(r5)
	stfs     f0, 8(r5)
	stw      r4, 0xc(r5)
	stw      r3, 0x10(r5)
	stw      r4, 0x14(r5)
	stb      r0, 0x18(r5)
	blr
	*/
}

namespace kh {
namespace Screen {

/*
 * --INFO--
 * Address:	80410FD8
 * Size:	000008
 */
ObjWinLoseReason::@24 @~ObjWinLoseReason()
{
	/*
addi     r3, r3, -24
b        __dt__Q32kh6Screen16ObjWinLoseReasonFv
	*/
}
} // namespace Screen
} // namespace kh
