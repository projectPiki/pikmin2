#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_khPayDept_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80499160
    lbl_80499160:
        .asciz "khPayDept.cpp"
        .skip 2
    .global lbl_80499170
    lbl_80499170:
        .asciz "0_48.bti"
        .skip 3
    .global lbl_8049917C
    lbl_8049917C:
        .asciz "1_48.bti"
        .skip 3
    .global lbl_80499188
    lbl_80499188:
        .asciz "2_48.bti"
        .skip 3
    .global lbl_80499194
    lbl_80499194:
        .asciz "3_48.bti"
        .skip 3
    .global lbl_804991A0
    lbl_804991A0:
        .asciz "4_48.bti"
        .skip 3
    .global lbl_804991AC
    lbl_804991AC:
        .asciz "5_48.bti"
        .skip 3
    .global lbl_804991B8
    lbl_804991B8:
        .asciz "6_48.bti"
        .skip 3
    .global lbl_804991C4
    lbl_804991C4:
        .asciz "7_48.bti"
        .skip 3
    .global lbl_804991D0
    lbl_804991D0:
        .asciz "8_48.bti"
        .skip 3
    .global lbl_804991DC
    lbl_804991DC:
        .asciz "9_48.bti"
        .skip 3
    .global lbl_804991E8
    lbl_804991E8:
        .asciz "hensai_demo_parsent.blo"
    .global lbl_80499200
    lbl_80499200:
        .asciz "hensai_demo_parsent.bck"
    .global lbl_80499218
    lbl_80499218:
        .asciz "hensai_demo_parsent.bpk"
        .4byte lbl_804991E8
        .4byte lbl_80499200
        .4byte lbl_80499218
    .global lbl_8049923C
    lbl_8049923C:
        .asciz "hensai_demo_kanryo.blo"
        .skip 1
    .global lbl_80499254
    lbl_80499254:
        .asciz "hensai_demo_kanryo.bck"
        .skip 1
    .global lbl_8049926C
    lbl_8049926C:
        .asciz "hensai_demo_kanryo.bpk"
        .skip 1
        .4byte lbl_8049923C
        .4byte lbl_80499254
        .4byte lbl_8049926C
    .global lbl_80499290
    lbl_80499290:
        .asciz "hensai_demo_otakara.blo"
    .global lbl_804992A8
    lbl_804992A8:
        .asciz "hensai_demo_otakara.bck"
    .global lbl_804992C0
    lbl_804992C0:
        .asciz "hensai_demo_otakara.bpk"
        .4byte lbl_80499290
        .4byte lbl_804992A8
        .4byte lbl_804992C0
    .global lbl_804992E4
    lbl_804992E4:
        .asciz "disp member err"
        .asciz "hensai_demo_parsent.szs"
        .asciz "hensai_demo_kanryo.szs"
        .skip 1
        .asciz "hensai_demo_otakara.szs"
        .asciz "screenObj.h"
        .asciz "P2Assert"
        .skip 7

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global cpNumTexLargeName__Q22kh6Screen
    cpNumTexLargeName__Q22kh6Screen:
        .4byte lbl_80499170
        .4byte lbl_8049917C
        .4byte lbl_80499188
        .4byte lbl_80499194
        .4byte lbl_804991A0
        .4byte lbl_804991AC
        .4byte lbl_804991B8
        .4byte lbl_804991C4
        .4byte lbl_804991D0
        .4byte lbl_804991DC
    .global __vt__Q32kh6Screen12ScenePayDept
    __vt__Q32kh6Screen12ScenePayDept:
        .4byte 0
        .4byte 0
        .4byte getSceneType__Q32kh6Screen12ScenePayDeptFv
        .4byte getOwnerID__Q32kh6Screen12ScenePayDeptFv
        .4byte getMemberID__Q32kh6Screen12ScenePayDeptFv
        .4byte isUseBackupSceneInfo__Q32kh6Screen12ScenePayDeptFv
        .4byte isDrawInDemo__Q26Screen9SceneBaseCFv
        .4byte getResName__Q32kh6Screen12ScenePayDeptCFv
        .4byte doCreateObj__Q32kh6Screen12ScenePayDeptFP10JKRArchive
        .4byte
   doUserCallBackFunc__Q32kh6Screen12ScenePayDeptFPQ28Resource10MgrCommand
        .4byte setPort__Q26Screen9SceneBaseFR8Graphics
        .4byte doUpdateActive__Q26Screen9SceneBaseFv
        .4byte doConfirmSetScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
        .4byte
   doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg .4byte
   doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg .4byte
   doStart__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg .4byte
   doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg .4byte
   setDefaultDispMember__Q26Screen9SceneBaseFv .4byte
   doSetBackupScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg .4byte
   doGetFinishState__Q26Screen9SceneBaseFv .global
   __vt__Q32kh6Screen10ObjPayDept
    __vt__Q32kh6Screen10ObjPayDept:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32kh6Screen10ObjPayDeptFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q32kh6Screen10ObjPayDeptFv"
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
        .4byte doCreate__Q32kh6Screen10ObjPayDeptFP10JKRArchive
        .4byte doUpdateFadein__Q32kh6Screen10ObjPayDeptFv
        .4byte doUpdateFadeinFinish__Q26Screen7ObjBaseFv
        .4byte doUpdate__Q32kh6Screen10ObjPayDeptFv
        .4byte doUpdateFinish__Q26Screen7ObjBaseFv
        .4byte doUpdateFadeout__Q26Screen7ObjBaseFv
        .4byte doUpdateFadeoutFinish__Q32kh6Screen10ObjPayDeptFv
        .4byte doDraw__Q32kh6Screen10ObjPayDeptFR8Graphics
        .4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
    .global __vt__Q32kh6Screen11DispPayDept
    __vt__Q32kh6Screen11DispPayDept:
        .4byte 0
        .4byte 0
        .4byte getSize__Q32kh6Screen11DispPayDeptFv
        .4byte getOwnerID__Q32kh6Screen11DispPayDeptFv
        .4byte getMemberID__Q32kh6Screen11DispPayDeptFv
        .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv

    .section .sbss # 0x80514D80 - 0x80516360
    .global msVal__Q32kh6Screen10ObjPayDept
    msVal__Q32kh6Screen10ObjPayDept:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805201E8
    lbl_805201E8:
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_805201F0
    lbl_805201F0:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_805201F8
    lbl_805201F8:
        .asciz "failed"
        .skip 1
    .global lbl_80520200
    lbl_80520200:
        .4byte 0x00000000
    .global lbl_80520204
    lbl_80520204:
        .float 1.0
*/

namespace kh {
namespace Screen {

/*
 * --INFO--
 * Address:	8040F1E0
 * Size:	00002C
 */
DispPayDept::DispPayDept(kh::Screen::DispPayDept::PayDeptType, int)
{
	/*
lis      r7, __vt__Q32og6Screen14DispMemberBase@ha
lis      r6, __vt__Q32kh6Screen11DispPayDept@ha
addi     r0, r7, __vt__Q32og6Screen14DispMemberBase@l
li       r7, 0
stw      r0, 0(r3)
addi     r0, r6, __vt__Q32kh6Screen11DispPayDept@l
stw      r7, 4(r3)
stw      r0, 0(r3)
stw      r4, 8(r3)
stw      r5, 0xc(r3)
blr
	*/
}

/*
 * --INFO--
 * Address:	8040F20C
 * Size:	00025C
 */
void ObjPayDept::doCreate(JKRArchive*)
{
	/*
stwu     r1, -0x40(r1)
mflr     r0
lis      r5, lbl_80499160@ha
stw      r0, 0x44(r1)
stw      r31, 0x3c(r1)
addi     r31, r5, lbl_80499160@l
stw      r30, 0x38(r1)
mr       r30, r4
stw      r29, 0x34(r1)
mr       r29, r3
stw      r28, 0x30(r1)
lwz      r11, 0xd0(r31)
lwz      r10, 0xd4(r31)
lwz      r9, 0xd8(r31)
lwz      r8, 0x124(r31)
lwz      r7, 0x128(r31)
lwz      r6, 0x12c(r31)
lwz      r5, 0x178(r31)
lwz      r4, 0x17c(r31)
lwz      r0, 0x180(r31)
stw      r11, 0x20(r1)
stw      r10, 0x24(r1)
stw      r9, 0x28(r1)
stw      r8, 0x14(r1)
stw      r7, 0x18(r1)
stw      r6, 0x1c(r1)
stw      r5, 8(r1)
stw      r4, 0xc(r1)
stw      r0, 0x10(r1)
bl       getDispMember__Q26Screen7ObjBaseFv
lis      r4, 0x44455054@ha
lis      r5, 0x5041595F@ha
addi     r6, r4, 0x44455054@l
li       r4, 0x4b48
addi     r5, r5, 0x5041595F@l
bl       isID__Q32og6Screen14DispMemberBaseFUlUx
clrlwi.  r0, r3, 0x18
bne      lbl_8040F2B8
addi     r3, r31, 0
addi     r5, r31, 0x184
li       r4, 0x5b
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8040F2B8:
mr       r3, r29
bl       getDispMember__Q26Screen7ObjBaseFv
mr       r31, r3
li       r28, 0
lwz      r0, 8(r3)
cmpwi    r0, 1
beq      lbl_8040F2F8
bge      lbl_8040F2E4
cmpwi    r0, 0
bge      lbl_8040F2F0
b        lbl_8040F304

lbl_8040F2E4:
cmpwi    r0, 3
bge      lbl_8040F304
b        lbl_8040F300

lbl_8040F2F0:
addi     r28, r1, 0x20
b        lbl_8040F304

lbl_8040F2F8:
addi     r28, r1, 0x14
b        lbl_8040F304

lbl_8040F300:
addi     r28, r1, 8

lbl_8040F304:
li       r3, 0x148
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_8040F31C
bl       __ct__Q29P2DScreen10Mgr_tuningFv
mr       r0, r3

lbl_8040F31C:
stw      r0, 0x38(r29)
mr       r6, r30
lis      r5, 4
lwz      r3, 0x38(r29)
lwz      r4, 0(r28)
bl       set__9J2DScreenFPCcUlP10JKRArchive
lwz      r3, 4(r28)
mr       r4, r30
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x3c(r29)
mr       r4, r30
lwz      r3, 8(r28)
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x40(r29)
lwz      r3, 0x38(r29)
lwz      r4, 0x3c(r29)
lwz      r12, 0(r3)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 0x38(r29)
lwz      r4, 0x40(r29)
lwz      r12, 0(r3)
lwz      r12, 0x64(r12)
mtctr    r12
bctrl
lwz      r0, 8(r31)
cmpwi    r0, 0
bne      lbl_8040F3F4
lwz      r3, 0x38(r29)
lis      r4, 0x524F4F54@ha
addi     r6, r4, 0x524F4F54@l
lwz      r30, 0xc(r31)
lwz      r12, 0(r3)
li       r5, 0
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lis      r5, 0x66666667@ha
mr       r4, r3
addi     r0, r5, 0x66666667@l
mr       r3, r29
mulhw    r0, r0, r30
srawi    r6, r0, 2
srawi    r0, r0, 2
srwi     r5, r0, 0x1f
srwi     r7, r6, 0x1f
add      r0, r0, r5
mulli    r0, r0, 0xa
add      r5, r6, r7
subf     r6, r0, r30
bl       searchNumPane__Q32kh6Screen10ObjPayDeptFP7J2DPaneii

lbl_8040F3F4:
lwz      r0, 8(r31)
cmpwi    r0, 1
beq      lbl_8040F42C
bge      lbl_8040F410
cmpwi    r0, 0
bge      lbl_8040F41C
b        lbl_8040F448

lbl_8040F410:
cmpwi    r0, 3
bge      lbl_8040F448
b        lbl_8040F43C

lbl_8040F41C:
lis      r3, 0xC0011021@ha
addi     r3, r3, 0xC0011021@l
bl       PSStart2DStream__FUl
b        lbl_8040F448

lbl_8040F42C:
lis      r3, 0xC0011020@ha
addi     r3, r3, 0xC0011020@l
bl       PSStart2DStream__FUl
b        lbl_8040F448

lbl_8040F43C:
lis      r3, 0xC0011020@ha
addi     r3, r3, 0xC0011020@l
bl       PSStart2DStream__FUl

lbl_8040F448:
lwz      r0, 0x44(r1)
lwz      r31, 0x3c(r1)
lwz      r30, 0x38(r1)
lwz      r29, 0x34(r1)
lwz      r28, 0x30(r1)
mtlr     r0
addi     r1, r1, 0x40
blr
	*/
}

/*
 * --INFO--
 * Address:	8040F468
 * Size:	0000CC
 */
void ObjPayDept::doUpdateFadein()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
bl       getDispMember__Q26Screen7ObjBaseFv
lis      r4, 0x44455054@ha
lis      r5, 0x5041595F@ha
addi     r6, r4, 0x44455054@l
li       r4, 0x4b48
addi     r5, r5, 0x5041595F@l
bl       isID__Q32og6Screen14DispMemberBaseFUlUx
clrlwi.  r0, r3, 0x18
bne      lbl_8040F4BC
lis      r3, lbl_80499160@ha
lis      r5, lbl_804992E4@ha
addi     r3, r3, lbl_80499160@l
li       r4, 0x96
addi     r5, r5, lbl_804992E4@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8040F4BC:
mr       r3, r31
bl       getDispMember__Q26Screen7ObjBaseFv
lwz      r0, 8(r3)
li       r4, -1
cmpwi    r0, 1
beq      lbl_8040F4F8
bge      lbl_8040F4E4
cmpwi    r0, 0
bge      lbl_8040F4F0
b        lbl_8040F504

lbl_8040F4E4:
cmpwi    r0, 3
bge      lbl_8040F504
b        lbl_8040F500

lbl_8040F4F0:
li       r4, 0x1825
b        lbl_8040F504

lbl_8040F4F8:
li       r4, 0x1844
b        lbl_8040F504

lbl_8040F500:
li       r4, 0x1845

lbl_8040F504:
addis    r0, r4, 1
cmplwi   r0, 0xffff
beq      lbl_8040F51C
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_8040F51C:
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
 * Address:	8040F534
 * Size:	000020
 */
void ObjPayDept::doUpdate()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
bl       updateAnimation__Q32kh6Screen10ObjPayDeptFv
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	8040F554
 * Size:	0000C0
 */
void ObjPayDept::doUpdateFadeoutFinish()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
bl       PSStop2DStream__Fv
mr       r3, r31
bl       getDispMember__Q26Screen7ObjBaseFv
lis      r4, 0x44455054@ha
lis      r5, 0x5041595F@ha
addi     r6, r4, 0x44455054@l
li       r4, 0x4b48
addi     r5, r5, 0x5041595F@l
bl       isID__Q32og6Screen14DispMemberBaseFUlUx
clrlwi.  r0, r3, 0x18
bne      lbl_8040F5B0
lis      r3, lbl_80499160@ha
lis      r5, lbl_804992E4@ha
addi     r3, r3, lbl_80499160@l
li       r4, 0xb7
addi     r5, r5, lbl_804992E4@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8040F5B0:
mr       r3, r31
bl       getDispMember__Q26Screen7ObjBaseFv
lwz      r0, 8(r3)
cmpwi    r0, 0
bne      lbl_8040F600
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
bl       setBackupScene__Q26Screen9SceneBaseFv
clrlwi.  r0, r3, 0x18
beq      lbl_8040F600
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
li       r4, 0
bl       startScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg

lbl_8040F600:
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	8040F614
 * Size:	000064
 */
void ObjPayDept::doDraw(Graphics& gfx)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
mr       r30, r3
addi     r3, r31, 0xbc
lwz      r12, 0xbc(r4)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lwz      r3, 0x38(r30)
mr       r4, r31
addi     r5, r31, 0xbc
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl
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
 * Address:	8040F678
 * Size:	0000DC
 */
void ObjPayDept::updateAnimation()
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
li       r31, 0
stw      r30, 0x18(r1)
mr       r30, r3
lfs      f0, 0x44(r3)
lwz      r3, 0x3c(r3)
stfs     f0, 8(r3)
lfs      f0, 0x48(r30)
lwz      r3, 0x40(r30)
stfs     f0, 8(r3)
lwz      r3, 0x38(r30)
bl       animation__9J2DScreenFv
lfs      f1, 0x44(r30)
lis      r0, 0x4330
lfs      f0, msVal__Q32kh6Screen10ObjPayDept@sda21(r13)
stw      r0, 8(r1)
fadds    f0, f1, f0
lfd      f2, lbl_805201F0@sda21(r2)
stfs     f0, 0x44(r30)
lfs      f1, 0x48(r30)
lfs      f0, msVal__Q32kh6Screen10ObjPayDept@sda21(r13)
fadds    f0, f1, f0
stfs     f0, 0x48(r30)
lwz      r3, 0x3c(r30)
lfs      f1, 0x44(r30)
lha      r3, 6(r3)
xoris    r3, r3, 0x8000
stw      r3, 0xc(r1)
lfd      f0, 8(r1)
fsubs    f0, f0, f2
fcmpo    cr0, f1, f0
cror     2, 1, 2
beq      lbl_8040F734
lwz      r3, 0x40(r30)
stw      r0, 8(r1)
lha      r0, 6(r3)
lfs      f1, 0x48(r30)
xoris    r0, r0, 0x8000
stw      r0, 0xc(r1)
lfd      f0, 8(r1)
fsubs    f0, f0, f2
fcmpo    cr0, f1, f0
cror     2, 1, 2
bne      lbl_8040F738

lbl_8040F734:
li       r31, 1

lbl_8040F738:
lwz      r0, 0x24(r1)
mr       r3, r31
lwz      r31, 0x1c(r1)
lwz      r30, 0x18(r1)
mtlr     r0
addi     r1, r1, 0x20
blr
	*/
}

/*
 * --INFO--
 * Address:	8040F754
 * Size:	00031C
 */
void ObjPayDept::searchNumPane(J2DPane*, int, int)
{
	/*
stwu     r1, -0x40(r1)
mflr     r0
stw      r0, 0x44(r1)
li       r0, 0x32
stmw     r22, 0x18(r1)
mr       r22, r4
lis      r4, 0x6B657461@ha
mr       r30, r3
addi     r4, r4, 0x6B657461@l
mr       r31, r5
mr       r29, r6
lwz      r7, 0x18(r22)
lwz      r8, 0x1c(r22)
xor      r0, r7, r0
xor      r3, r8, r4
or.      r0, r3, r0
bne      lbl_8040F7BC
lis      r3, cpNumTexLargeName__Q22kh6Screen@ha
slwi     r0, r31, 2
addi     r4, r3, cpNumTexLargeName__Q22kh6Screen@l
lwz      r3, 0x38(r30)
lwz      r5, 0x10(r22)
lwz      r6, 0x14(r22)
lwzx     r7, r4, r0
bl       setTex__Q22kh6ScreenFP9J2DScreenUxPCc
b        lbl_8040F7EC

lbl_8040F7BC:
li       r0, 0x31
xor      r0, r7, r0
or.      r0, r3, r0
bne      lbl_8040F7EC
lis      r3, cpNumTexLargeName__Q22kh6Screen@ha
slwi     r0, r29, 2
addi     r4, r3, cpNumTexLargeName__Q22kh6Screen@l
lwz      r3, 0x38(r30)
lwz      r5, 0x10(r22)
lwz      r6, 0x14(r22)
lwzx     r7, r4, r0
bl       setTex__Q22kh6ScreenFP9J2DScreenUxPCc

lbl_8040F7EC:
lwz      r23, 0xdc(r22)
cmplwi   r23, 0
beq      lbl_8040F7FC
addi     r23, r23, -12

lbl_8040F7FC:
lis      r4, cpNumTexLargeName__Q22kh6Screen@ha
lis      r3, 0x6B657461@ha
slwi     r5, r31, 2
slwi     r0, r29, 2
addi     r4, r4, cpNumTexLargeName__Q22kh6Screen@l
addi     r26, r3, 0x6B657461@l
add      r27, r4, r5
add      r28, r4, r0
b        lbl_8040FA54

lbl_8040F820:
lwz      r22, 0xc(r23)
li       r0, 0x32
lwz      r4, 0x18(r22)
lwz      r5, 0x1c(r22)
xor      r0, r4, r0
xor      r3, r5, r26
or.      r0, r3, r0
bne      lbl_8040F858
lwz      r3, 0x38(r30)
lwz      r5, 0x10(r22)
lwz      r6, 0x14(r22)
lwz      r7, 0(r27)
bl       setTex__Q22kh6ScreenFP9J2DScreenUxPCc
b        lbl_8040F888

lbl_8040F858:
lis      r3, 0x6B657461@ha
li       r0, 0x31
addi     r3, r3, 0x6B657461@l
xor      r3, r5, r3
xor      r0, r4, r0
or.      r0, r3, r0
bne      lbl_8040F888
lwz      r3, 0x38(r30)
lwz      r5, 0x10(r22)
lwz      r6, 0x14(r22)
lwz      r7, 0(r28)
bl       setTex__Q22kh6ScreenFP9J2DScreenUxPCc

lbl_8040F888:
addi     r3, r22, 0xdc
bl       getFirstLink__10JSUPtrListCFv
cmplwi   r3, 0
beq      lbl_8040F89C
addi     r3, r3, -12

lbl_8040F89C:
mr       r24, r3
b        lbl_8040FA3C

lbl_8040F8A4:
mr       r3, r24
bl       "getObject__17JSUTree<7J2DPane>CFv"
lwz      r4, 0x18(r3)
li       r0, 0x32
lwz      r5, 0x1c(r3)
mr       r22, r3
xor      r0, r4, r0
xor      r3, r5, r26
or.      r0, r3, r0
bne      lbl_8040F8E4
lwz      r3, 0x38(r30)
lwz      r5, 0x10(r22)
lwz      r6, 0x14(r22)
lwz      r7, 0(r27)
bl       setTex__Q22kh6ScreenFP9J2DScreenUxPCc
b        lbl_8040F914

lbl_8040F8E4:
lis      r3, 0x6B657461@ha
li       r0, 0x31
addi     r3, r3, 0x6B657461@l
xor      r3, r5, r3
xor      r0, r4, r0
or.      r0, r3, r0
bne      lbl_8040F914
lwz      r3, 0x38(r30)
lwz      r5, 0x10(r22)
lwz      r6, 0x14(r22)
lwz      r7, 0(r28)
bl       setTex__Q22kh6ScreenFP9J2DScreenUxPCc

lbl_8040F914:
addi     r25, r22, 0xdc
mr       r3, r25
bl       "getFirstChild__17JSUTree<7J2DPane>CFv"
stw      r3, 0xc(r1)
b        lbl_8040FA18

lbl_8040F928:
addi     r3, r1, 0xc
bl       "getObject__25JSUTreeIterator<7J2DPane>CFv"
mr       r22, r3
bl       getUserInfo__7J2DPaneCFv
li       r0, 0x32
xor      r4, r4, r26
xor      r0, r3, r0
or.      r0, r4, r0
bne      lbl_8040F96C
mr       r3, r22
bl       getTagName__7J2DPaneCFv
mr       r5, r3
lwz      r3, 0x38(r30)
lwz      r7, 0(r27)
mr       r6, r4
bl       setTex__Q22kh6ScreenFP9J2DScreenUxPCc
b        lbl_8040F9AC

lbl_8040F96C:
mr       r3, r22
bl       getUserInfo__7J2DPaneCFv
lis      r5, 0x6B657461@ha
li       r0, 0x31
addi     r5, r5, 0x6B657461@l
xor      r4, r4, r5
xor      r0, r3, r0
or.      r0, r4, r0
bne      lbl_8040F9AC
mr       r3, r22
bl       getTagName__7J2DPaneCFv
mr       r5, r3
lwz      r3, 0x38(r30)
lwz      r7, 0(r28)
mr       r6, r4
bl       setTex__Q22kh6ScreenFP9J2DScreenUxPCc

lbl_8040F9AC:
mr       r3, r22
bl       getPaneTree__7J2DPaneFv
mr       r22, r3
bl       "getFirstChild__17JSUTree<7J2DPane>CFv"
mr       r4, r3
addi     r3, r1, 8
bl       "__ct__25JSUTreeIterator<7J2DPane>FP17JSUTree<7J2DPane>"
b        lbl_8040F9F0

lbl_8040F9CC:
addi     r3, r1, 8
bl       "getObject__25JSUTreeIterator<7J2DPane>CFv"
mr       r4, r3
mr       r3, r30
mr       r5, r31
mr       r6, r29
bl       searchNumPane__Q32kh6Screen10ObjPayDeptFP7J2DPaneii
addi     r3, r1, 8
bl       "__pp__25JSUTreeIterator<7J2DPane>Fv"

lbl_8040F9F0:
mr       r3, r22
bl       "getEndChild__17JSUTree<7J2DPane>CFv"
mr       r4, r3
addi     r3, r1, 8
bl       "__ne__25JSUTreeIterator<7J2DPane>CFPC17JSUTree<7J2DPane>"
clrlwi.  r0, r3, 0x18
bne      lbl_8040F9CC
lwz      r3, 0xc(r1)
bl       "getNextChild__17JSUTree<7J2DPane>CFv"
stw      r3, 0xc(r1)

lbl_8040FA18:
mr       r3, r25
bl       "getEndChild__17JSUTree<7J2DPane>CFv"
lwz      r0, 0xc(r1)
cmplw    r0, r3
bne      lbl_8040F928
lwz      r24, 0x18(r24)
cmplwi   r24, 0
beq      lbl_8040FA3C
addi     r24, r24, -12

lbl_8040FA3C:
cmplwi   r24, 0
bne      lbl_8040F8A4
lwz      r23, 0x18(r23)
cmplwi   r23, 0
beq      lbl_8040FA54
addi     r23, r23, -12

lbl_8040FA54:
cmplwi   r23, 0
bne      lbl_8040F820
lmw      r22, 0x18(r1)
lwz      r0, 0x44(r1)
mtlr     r0
addi     r1, r1, 0x40
blr
	*/
}

/*
 * --INFO--
 * Address:	8040FA70
 * Size:	00015C
 */
void ScenePayDept::doUserCallBackFunc(Resource::MgrCommand*)
{
	/*
stwu     r1, -0x50(r1)
mflr     r0
lis      r6, lbl_80499160@ha
lis      r5, 0x44455054@ha
stw      r0, 0x54(r1)
lis      r4, 0x5041595F@ha
stw      r31, 0x4c(r1)
stw      r30, 0x48(r1)
addi     r30, r6, lbl_80499160@l
addi     r6, r5, 0x44455054@l
addi     r5, r4, 0x5041595F@l
stw      r29, 0x44(r1)
mr       r29, r3
li       r4, 0x4b48
lwz      r3, 0x21c(r3)
bl       isID__Q32og6Screen14DispMemberBaseFUlUx
clrlwi.  r0, r3, 0x18
bne      lbl_8040FACC
addi     r3, r30, 0
addi     r5, r30, 0x184
li       r4, 0x103
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8040FACC:
lwz      r3, 0x21c(r29)
lwz      r0, 8(r3)
cmpwi    r0, 1
beq      lbl_8040FB08
bge      lbl_8040FAEC
cmpwi    r0, 0
bge      lbl_8040FAF8
b        lbl_8040FB24

lbl_8040FAEC:
cmpwi    r0, 3
bge      lbl_8040FB24
b        lbl_8040FB18

lbl_8040FAF8:
addi     r3, r29, 4
addi     r4, r30, 0x194
bl       makeLanguageResName__Q22og9newScreenFPcPCc
b        lbl_8040FB24

lbl_8040FB08:
addi     r3, r29, 4
addi     r4, r30, 0x1ac
bl       makeLanguageResName__Q22og9newScreenFPcPCc
b        lbl_8040FB24

lbl_8040FB18:
addi     r3, r29, 4
addi     r4, r30, 0x1c4
bl       makeLanguageResName__Q22og9newScreenFPcPCc

lbl_8040FB24:
addi     r3, r1, 8
addi     r4, r29, 4
bl       __ct__Q212LoadResource3ArgFPCc
lwz      r3, gLoadResourceMgr@sda21(r13)
addi     r4, r1, 8
bl       mountArchive__Q212LoadResource3MgrFRQ212LoadResource3Arg
or.      r31, r3, r3
beq      lbl_8040FB9C
li       r3, 0x4c
bl       __nw__FUl
or.      r30, r3, r3
beq      lbl_8040FB88
bl       __ct__Q26Screen7ObjBaseFv
lis      r3, __vt__Q32kh6Screen10ObjPayDept@ha
li       r0, 0
addi     r3, r3, __vt__Q32kh6Screen10ObjPayDept@l
lfs      f0, lbl_805201E8@sda21(r2)
stw      r3, 0(r30)
addi     r3, r3, 0x10
stw      r3, 0x18(r30)
stw      r0, 0x38(r30)
stw      r0, 0x3c(r30)
stw      r0, 0x40(r30)
stfs     f0, 0x48(r30)
stfs     f0, 0x44(r30)

lbl_8040FB88:
lwz      r5, 0x34(r31)
mr       r3, r29
mr       r4, r30
bl       registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
b        lbl_8040FBB0

lbl_8040FB9C:
addi     r3, r30, 0
li       r4, 0x115
addi     r5, r2, lbl_805201F8@sda21
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8040FBB0:
lwz      r0, 0x54(r1)
lwz      r31, 0x4c(r1)
lwz      r30, 0x48(r1)
lwz      r29, 0x44(r1)
mtlr     r0
addi     r1, r1, 0x50
blr
	*/
}

/*
 * --INFO--
 * Address:	8040FBCC
 * Size:	000008
 */
void ScenePayDept::getResName() const
{
	/*
addi     r3, r2, lbl_80520200@sda21
blr
	*/
}

/*
 * --INFO--
 * Address:	8040FBD4
 * Size:	000008
 */
u32 ScenePayDept::isUseBackupSceneInfo() { return 0x1; }

/*
 * --INFO--
 * Address:	8040FBDC
 * Size:	000008
 */
u32 ScenePayDept::getSceneType() { return 0x4E27; }

/*
 * --INFO--
 * Address:	8040FBE4
 * Size:	000008
 */
u32 ScenePayDept::getOwnerID() { return 0x4B48; }

/*
 * --INFO--
 * Address:	8040FBEC
 * Size:	000014
 */
void ScenePayDept::getMemberID()
{
	/*
lis      r4, 0x44455054@ha
lis      r3, 0x5041595F@ha
addi     r4, r4, 0x44455054@l
addi     r3, r3, 0x5041595F@l
blr
	*/
}

/*
 * --INFO--
 * Address:	8040FC00
 * Size:	000004
 */
void ScenePayDept::doCreateObj(JKRArchive*) { }

/*
 * --INFO--
 * Address:	8040FC04
 * Size:	0000AC
 */
ObjPayDept::~ObjPayDept()
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_8040FC94
lis      r4, __vt__Q32kh6Screen10ObjPayDept@ha
addi     r4, r4, __vt__Q32kh6Screen10ObjPayDept@l
stw      r4, 0(r30)
addi     r0, r4, 0x10
stw      r0, 0x18(r30)
beq      lbl_8040FC84
lis      r4, __vt__Q26Screen7ObjBase@ha
addi     r4, r4, __vt__Q26Screen7ObjBase@l
stw      r4, 0(r30)
addi     r0, r4, 0x10
stw      r0, 0x18(r30)
beq      lbl_8040FC84
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

lbl_8040FC84:
extsh.   r0, r31
ble      lbl_8040FC94
mr       r3, r30
bl       __dl__FPv

lbl_8040FC94:
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
 * Address:	8040FCB0
 * Size:	000008
 */
u32 DispPayDept::getSize() { return 0x10; }

/*
 * --INFO--
 * Address:	8040FCB8
 * Size:	000008
 */
u32 DispPayDept::getOwnerID() { return 0x4B48; }

/*
 * --INFO--
 * Address:	8040FCC0
 * Size:	000014
 */
void DispPayDept::getMemberID()
{
	/*
lis      r4, 0x44455054@ha
lis      r3, 0x5041595F@ha
addi     r4, r4, 0x44455054@l
addi     r3, r3, 0x5041595F@l
blr
	*/
}

} // namespace Screen
} // namespace kh

/*
 * --INFO--
 * Address:	8040FCD4
 * Size:	00000C
 */
void __sinit_khPayDept_cpp(void)
{
	/*
	lfs      f0, lbl_80520204@sda21(r2)
	stfs     f0, msVal__Q32kh6Screen10ObjPayDept@sda21(r13)
	blr
	*/
}

namespace kh {
namespace Screen {

/*
 * --INFO--
 * Address:	8040FCE0
 * Size:	000008
 */
ObjPayDept::@24 @~ObjPayDept()
{
	/*
addi     r3, r3, -24
b        __dt__Q32kh6Screen10ObjPayDeptFv
	*/
}
} // namespace Screen
} // namespace kh
