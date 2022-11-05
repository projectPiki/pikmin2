#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_ogObjCourseName_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048E700
    lbl_8048E700:
        .4byte 0x6F674F62
        .4byte 0x6A436F75
        .4byte 0x7273654E
        .4byte 0x616D652E
        .4byte 0x63707000
        .4byte 0x00000000
        .4byte 0x6E756B69
        .4byte 0x5F746578
        .4byte 0x65666563
        .4byte 0x745F3030
        .4byte 0x65666563
        .4byte 0x745F3031
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x45525221
        .4byte 0x20696E20
        .4byte 0x4F626A43
        .4byte 0x6F757273
        .4byte 0x654E616D
        .4byte 0x65204372
        .4byte 0x65617465
        .4byte 0x8EB89473
        .4byte 0x81490A00
        .4byte 0x73637265
        .4byte 0x656E4F62
        .4byte 0x6A2E6800
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og9newScreen13ObjCourseName
    __vt__Q32og9newScreen13ObjCourseName:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32og9newScreen13ObjCourseNameFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q32og9newScreen13ObjCourseNameFv"
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
   doStart__Q32og9newScreen13ObjCourseNameFPCQ26Screen13StartSceneArg .4byte
   doEnd__Q32og9newScreen13ObjCourseNameFPCQ26Screen11EndSceneArg .4byte
   doCreate__Q32og9newScreen13ObjCourseNameFP10JKRArchive .4byte
   doUpdateFadein__Q32og9newScreen13ObjCourseNameFv .4byte
   doUpdateFadeinFinish__Q32og9newScreen13ObjCourseNameFv .4byte
   doUpdate__Q32og9newScreen13ObjCourseNameFv .4byte
   doUpdateFinish__Q32og9newScreen13ObjCourseNameFv .4byte
   doUpdateFadeout__Q32og9newScreen13ObjCourseNameFv .4byte
   doUpdateFadeoutFinish__Q32og9newScreen13ObjCourseNameFv .4byte
   doDraw__Q32og9newScreen13ObjCourseNameFR8Graphics .4byte
   doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg .4byte
   doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg .4byte
   doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global msVal__Q32og9newScreen13ObjCourseName
    msVal__Q32og9newScreen13ObjCourseName:
        .skip 0x10

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051D8D0
    lbl_8051D8D0:
        .4byte 0x00000000
    .global lbl_8051D8D4
    lbl_8051D8D4:
        .float 1.0
    .global lbl_8051D8D8
    lbl_8051D8D8:
        .4byte 0x437F0000
        .4byte 0x00000000
    .global lbl_8051D8E0
    lbl_8051D8E0:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_8051D8E8
    lbl_8051D8E8:
        .float 0.3
    .global lbl_8051D8EC
    lbl_8051D8EC:
        .4byte 0x3E4CCCCD
    .global lbl_8051D8F0
    lbl_8051D8F0:
        .4byte 0x40400000
        .4byte 0x00000000
*/

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	8031741C
 * Size:	0000A8
 */
ObjCourseName::ObjCourseName(char const*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       __ct__Q26Screen7ObjBaseFv
	lis      r4, __vt__Q32og9newScreen13ObjCourseName@ha
	lis      r3, msVal__Q32og9newScreen13ObjCourseName@ha
	addi     r4, r4, __vt__Q32og9newScreen13ObjCourseName@l
	lfs      f1, lbl_8051D8D0@sda21(r2)
	stw      r4, 0(r30)
	addi     r0, r4, 0x10
	li       r6, -1
	li       r5, 0
	stw      r0, 0x18(r30)
	addi     r4, r3, msVal__Q32og9newScreen13ObjCourseName@l
	li       r0, 0xff
	mr       r3, r30
	stfs     f1, 0x44(r30)
	stfs     f1, 0x48(r30)
	stw      r6, 0x54(r30)
	stw      r31, 0x14(r30)
	stw      r5, 0x38(r30)
	stw      r5, 0x3c(r30)
	stw      r5, 0x40(r30)
	lfs      f0, 0xc(r4)
	stfs     f0, 0x4c(r30)
	stb      r5, 0x50(r30)
	stb      r5, 0x54(r30)
	stb      r5, 0x55(r30)
	stb      r5, 0x56(r30)
	stb      r0, 0x57(r30)
	stb      r5, 0x58(r30)
	stfs     f1, 0x5c(r30)
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
 * Address:	803174C4
 * Size:	0000AC
 */
ObjCourseName::~ObjCourseName(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80317554
	lis      r4, __vt__Q32og9newScreen13ObjCourseName@ha
	addi     r4, r4, __vt__Q32og9newScreen13ObjCourseName@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x10
	stw      r0, 0x18(r30)
	beq      lbl_80317544
	lis      r4, __vt__Q26Screen7ObjBase@ha
	addi     r4, r4, __vt__Q26Screen7ObjBase@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x10
	stw      r0, 0x18(r30)
	beq      lbl_80317544
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

lbl_80317544:
	extsh.   r0, r31
	ble      lbl_80317554
	mr       r3, r30
	bl       __dl__FPv

lbl_80317554:
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
 * Address:	80317570
 * Size:	000334
 */
void ObjCourseName::doCreate(JKRArchive*)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	lis      r5, lbl_8048E700@ha
	stw      r0, 0x54(r1)
	stmw     r27, 0x3c(r1)
	mr       r29, r3
	mr       r30, r4
	addi     r31, r5, lbl_8048E700@l
	bl       getDispMember__Q26Screen7ObjBaseFv
	lis      r4, 0x004F4741@ha
	lis      r6, 0x55525345@ha
	li       r5, 0x434f
	mr       r27, r3
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x55525345@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_803175C0
	stw      r27, 0x38(r29)
	b        lbl_8031763C

lbl_803175C0:
	lis      r4, 0x004F4741@ha
	lis      r6, 0x554D4D59@ha
	mr       r3, r27
	li       r5, 0x44
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x554D4D59@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_80317628
	li       r3, 0x10
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80317620
	lis      r5, __vt__Q32og6Screen14DispMemberBase@ha
	lis      r4, __vt__Q32og6Screen20DispMemberCourseName@ha
	addi     r0, r5, __vt__Q32og6Screen14DispMemberBase@l
	li       r5, 0
	stw      r0, 0(r3)
	addi     r0, r4, __vt__Q32og6Screen20DispMemberCourseName@l
	stw      r5, 4(r3)
	stw      r0, 0(r3)
	stw      r5, 8(r3)
	stb      r5, 0xc(r3)
	stb      r5, 0xd(r3)

lbl_80317620:
	stw      r3, 0x38(r29)
	b        lbl_8031763C

lbl_80317628:
	addi     r3, r31, 0
	addi     r5, r31, 0x38
	li       r4, 0x65
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8031763C:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	mr       r28, r3
	lis      r3, bloFileNameCourse__Q22og9newScreen@ha
	lwz      r0, 0x220(r28)
	addi     r4, r3, bloFileNameCourse__Q22og9newScreen@l
	li       r3, 0x148
	slwi     r0, r0, 2
	lwzx     r27, r4, r0
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80317680
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	mr       r0, r3

lbl_80317680:
	stw      r0, 0x3c(r29)
	mr       r4, r27
	mr       r6, r30
	lis      r5, 0x104
	lwz      r3, 0x3c(r29)
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_803176B4
	li       r4, 5
	bl       __ct__Q32og6Screen9AnimGroupFi
	mr       r0, r3

lbl_803176B4:
	stw      r0, 0x40(r29)
	lis      r3, animFileTableCourse__Q22og9newScreen@ha
	addi     r3, r3, animFileTableCourse__Q22og9newScreen@l
	lwz      r0, 0x220(r28)
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	lwz      r6, 0(r3)
	mr       r27, r3
	b        lbl_803176F0

lbl_803176D8:
	lwz      r3, 0x40(r29)
	mr       r4, r30
	lwz      r5, 0x3c(r29)
	lfs      f1, lbl_8051D8D4@sda21(r2)
	bl
registAnimGroupScreen__Q22og6ScreenFPQ32og6Screen9AnimGroupP10JKRArchiveP9J2DScreenPcf
	lwzu     r6, 4(r27)

lbl_803176F0:
	cmplwi   r6, 0
	bne      lbl_803176D8
	lwz      r3, 0x3c(r29)
	bl       setAlphaScreen__Q22og6ScreenFP7J2DPane
	li       r5, 1
	li       r4, 7
	li       r3, 6
	li       r0, 0
	stb      r5, 0x14(r1)
	addi     r30, r1, 0x18
	lfd      f3, 0x18(r31)
	stb      r4, 0x15(r1)
	lfd      f2, 0x20(r31)
	stb      r3, 0x16(r1)
	lfd      f1, 0x28(r31)
	stb      r0, 0x17(r1)
	lfd      f0, 0x30(r31)
	lwz      r0, 0x14(r1)
	stfd     f3, 0x18(r1)
	lwz      r31, 0x3c(r29)
	stw      r0, 0x10(r1)
	lbz      r5, 0x10(r1)
	lbz      r4, 0x11(r1)
	lbz      r3, 0x12(r1)
	lbz      r0, 0x13(r1)
	stfd     f2, 0x20(r1)
	stfd     f1, 0x28(r1)
	stfd     f0, 0x30(r1)
	stb      r5, 8(r1)
	stb      r4, 9(r1)
	stb      r3, 0xa(r1)
	stb      r0, 0xb(r1)

lbl_80317770:
	lwz      r5, 0(r30)
	li       r3, 0
	lwz      r6, 4(r30)
	xor      r0, r5, r3
	xor      r3, r6, r3
	or.      r0, r3, r0
	beq      lbl_803177E8
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x3c(r12)
	mtctr    r12
	addi     r30, r30, 8
	bctrl
	cmplwi   r3, 0
	beq      lbl_80317770
	lwz      r12, 0(r3)
	lwz      r0, 8(r1)
	lwz      r12, 0x13c(r12)
	stw      r0, 0xc(r1)
	mtctr    r12
	bctrl
	lbz      r4, 0xc(r1)
	lbz      r0, 0xd(r1)
	stb      r4, 0x7c(r3)
	lbz      r4, 0xe(r1)
	stb      r0, 0x7d(r3)
	lbz      r0, 0xf(r1)
	stb      r4, 0x7e(r3)
	stb      r0, 0x7f(r3)
	b        lbl_80317770

lbl_803177E8:
	lwz      r3, 0x3c(r29)
	lis      r5, 0x5F746578@ha
	lis      r4, 0x6E756B69@ha
	lwz      r12, 0(r3)
	addi     r6, r5, 0x5F746578@l
	addi     r5, r4, 0x6E756B69@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	or.      r27, r3, r3
	beq      lbl_80317890
	lwz      r3, 0x3c(r29)
	lis      r5, 0x745F3030@ha
	lis      r4, 0x65666563@ha
	lwz      r12, 0(r3)
	addi     r6, r5, 0x745F3030@l
	addi     r5, r4, 0x65666563@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	lwz      r3, 0x3c(r29)
	lis      r5, 0x745F3031@ha
	lis      r4, 0x65666563@ha
	lwz      r12, 0(r3)
	addi     r6, r5, 0x745F3031@l
	addi     r5, r4, 0x65666563@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r30, r3
	lwz      r3, 0x3c(r29)
	mr       r4, r27
	bl       prependChild__7J2DPaneFP7J2DPane
	cmplwi   r31, 0
	beq      lbl_80317880
	li       r0, 0
	stb      r0, 0xb0(r31)

lbl_80317880:
	cmplwi   r30, 0
	beq      lbl_80317890
	li       r0, 0
	stb      r0, 0xb0(r30)

lbl_80317890:
	lmw      r27, 0x3c(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
void ObjCourseName::commonUpdate(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803178A4
 * Size:	0000F0
 */
void ObjCourseName::doUpdate(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, 0x40(r3)
	bl       update__Q32og6Screen9AnimGroupFv
	lwz      r3, 0x3c(r29)
	bl       animation__9J2DScreenFv
	lwz      r3, 0x3c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x50(r29)
	cmplwi   r0, 0
	beq      lbl_80317920
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x4c(r29)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_8051D8D0@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x4c(r29)
	lfs      f1, 0x4c(r29)
	fcmpo    cr0, f1, f0
	bge      lbl_80317974
	li       r30, 1
	b        lbl_80317974

lbl_80317920:
	mr       r3, r29
	bl       getDispMember__Q26Screen7ObjBaseFv
	lis      r4, 0x004F4741@ha
	lis      r6, 0x55525345@ha
	mr       r31, r3
	li       r5, 0x434f
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x55525345@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_80317974
	lbz      r0, 0xc(r31)
	cmplwi   r0, 0
	beq      lbl_80317960
	li       r0, 1
	stb      r0, 0x50(r29)

lbl_80317960:
	lbz      r0, 0xd(r31)
	cmplwi   r0, 0
	beq      lbl_80317974
	li       r0, 1
	stb      r0, 0x58(r29)

lbl_80317974:
	lwz      r0, 0x24(r1)
	mr       r3, r30
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
 * Address:	80317994
 * Size:	000170
 */
void ObjCourseName::doDraw(Graphics& gfx)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stmw     r27, 0x4c(r1)
	mr       r27, r3
	mr       r28, r4
	bl       drawBG__Q32og9newScreen13ObjCourseNameFR8Graphics
	addi     r31, r28, 0x190
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	bl       getRenderModeObj__6SystemFv
	lhz      r30, 4(r3)
	bl       getRenderModeObj__6SystemFv
	li       r0, 0xff
	lhz      r29, 6(r3)
	stb      r0, 0x18(r1)
	mr       r3, r31
	addi     r4, r1, 8
	addi     r5, r1, 0xc
	stb      r0, 0x19(r1)
	addi     r6, r1, 0x10
	addi     r7, r1, 0x14
	stb      r0, 0x1a(r1)
	stb      r0, 0x1b(r1)
	lwz      r0, 0x18(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0x10(r1)
	stw      r0, 0xc(r1)
	stw      r0, 8(r1)
	bl
	setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
	li       r3, 0
	bl       GXSetColorUpdate
	li       r3, 1
	bl       GXSetAlphaUpdate
	lis      r0, 0x4330
	lfs      f3, lbl_8051D8D0@sda21(r2)
	stw      r30, 0x34(r1)
	mr       r3, r31
	lfd      f2, lbl_8051D8E0@sda21(r2)
	addi     r4, r1, 0x1c
	stw      r0, 0x30(r1)
	lfd      f0, 0x30(r1)
	stw      r29, 0x3c(r1)
	fsubs    f1, f0, f2
	stw      r0, 0x38(r1)
	lfd      f0, 0x38(r1)
	fadds    f1, f3, f1
	stfs     f3, 0x1c(r1)
	fsubs    f0, f0, f2
	stfs     f3, 0x20(r1)
	fadds    f0, f3, f0
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	bl       "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
	li       r3, 1
	bl       GXSetColorUpdate
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f1, lbl_8051D8D8@sda21(r2)
	lfs      f0, 0x48(r27)
	lwz      r3, 0x3c(r27)
	fmuls    f0, f1, f0
	lwz      r12, 0(r3)
	fctiwz   f0, f0
	lwz      r12, 0x24(r12)
	stfd     f0, 0x40(r1)
	lwz      r4, 0x44(r1)
	mtctr    r12
	bctrl
	lwz      r3, 0x3c(r27)
	mr       r4, r28
	mr       r5, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lmw      r27, 0x4c(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80317B04
 * Size:	000014
 */
void ObjCourseName::doStart(Screen::StartSceneArg const*)
{
	/*
	lfs      f0, lbl_8051D8D0@sda21(r2)
	stfs     f0, 0x44(r3)
	stfs     f0, 0x48(r3)
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	80317B18
 * Size:	000010
 */
void ObjCourseName::doEnd(Screen::EndSceneArg const*)
{
	/*
	lfs      f0, lbl_8051D8D0@sda21(r2)
	stfs     f0, 0x44(r3)
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	80317B28
 * Size:	000004
 */
void ObjCourseName::doUpdateFadeinFinish(void) { }

/*
 * --INFO--
 * Address:	80317B2C
 * Size:	00000C
 */
void ObjCourseName::doUpdateFinish(void)
{
	/*
	lfs      f0, lbl_8051D8D0@sda21(r2)
	stfs     f0, 0x44(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80317B38
 * Size:	000004
 */
void ObjCourseName::doUpdateFadeoutFinish(void) { }

/*
 * --INFO--
 * Address:	80317B3C
 * Size:	000120
 */
void ObjCourseName::doUpdateFadein(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	lis      r3, msVal__Q32og9newScreen13ObjCourseName@ha
	lwz      r4, sys@sda21(r13)
	addi     r3, r3, msVal__Q32og9newScreen13ObjCourseName@l
	lfs      f1, 0x44(r29)
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0x44(r29)
	lfs      f0, 0x44(r29)
	lfs      f1, 4(r3)
	fcmpo    cr0, f0, f1
	ble      lbl_80317B90
	stfs     f1, 0x44(r29)
	li       r30, 1

lbl_80317B90:
	lfs      f1, 0x44(r29)
	lfs      f0, 4(r3)
	fdivs    f0, f1, f0
	stfs     f0, 0x48(r29)
	lwz      r3, 0x40(r29)
	bl       update__Q32og6Screen9AnimGroupFv
	lwz      r3, 0x3c(r29)
	bl       animation__9J2DScreenFv
	lwz      r3, 0x3c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x50(r29)
	cmplwi   r0, 0
	beq      lbl_80317BE8
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x4c(r29)
	lfs      f1, 0x54(r3)
	fsubs    f1, f2, f1
	stfs     f1, 0x4c(r29)
	b        lbl_80317C3C

lbl_80317BE8:
	mr       r3, r29
	bl       getDispMember__Q26Screen7ObjBaseFv
	lis      r4, 0x004F4741@ha
	lis      r6, 0x55525345@ha
	mr       r31, r3
	li       r5, 0x434f
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x55525345@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_80317C3C
	lbz      r0, 0xc(r31)
	cmplwi   r0, 0
	beq      lbl_80317C28
	li       r0, 1
	stb      r0, 0x50(r29)

lbl_80317C28:
	lbz      r0, 0xd(r31)
	cmplwi   r0, 0
	beq      lbl_80317C3C
	li       r0, 1
	stb      r0, 0x58(r29)

lbl_80317C3C:
	lwz      r0, 0x24(r1)
	mr       r3, r30
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
 * Address:	80317C5C
 * Size:	000134
 */
void ObjCourseName::doUpdateFadeout(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	lis      r3, msVal__Q32og9newScreen13ObjCourseName@ha
	lwz      r4, sys@sda21(r13)
	addi     r3, r3, msVal__Q32og9newScreen13ObjCourseName@l
	lfs      f1, 0x44(r29)
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0x44(r29)
	lfs      f0, 0x44(r29)
	lfs      f1, 8(r3)
	fcmpo    cr0, f0, f1
	ble      lbl_80317CBC
	stfs     f1, 0x44(r29)
	lbz      r0, 0x58(r29)
	cmplwi   r0, 0
	bne      lbl_80317CBC
	li       r30, 1

lbl_80317CBC:
	lfs      f1, 0x44(r29)
	lfs      f0, 8(r3)
	lfs      f2, lbl_8051D8D4@sda21(r2)
	fdivs    f0, f1, f0
	fsubs    f0, f2, f0
	stfs     f0, 0x48(r29)
	lwz      r3, 0x40(r29)
	bl       update__Q32og6Screen9AnimGroupFv
	lwz      r3, 0x3c(r29)
	bl       animation__9J2DScreenFv
	lwz      r3, 0x3c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x50(r29)
	cmplwi   r0, 0
	beq      lbl_80317D1C
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x4c(r29)
	lfs      f1, 0x54(r3)
	fsubs    f1, f2, f1
	stfs     f1, 0x4c(r29)
	b        lbl_80317D70

lbl_80317D1C:
	mr       r3, r29
	bl       getDispMember__Q26Screen7ObjBaseFv
	lis      r4, 0x004F4741@ha
	lis      r6, 0x55525345@ha
	mr       r31, r3
	li       r5, 0x434f
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x55525345@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_80317D70
	lbz      r0, 0xc(r31)
	cmplwi   r0, 0
	beq      lbl_80317D5C
	li       r0, 1
	stb      r0, 0x50(r29)

lbl_80317D5C:
	lbz      r0, 0xd(r31)
	cmplwi   r0, 0
	beq      lbl_80317D70
	li       r0, 1
	stb      r0, 0x58(r29)

lbl_80317D70:
	lwz      r0, 0x24(r1)
	mr       r3, r30
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
 * Address:	80317D90
 * Size:	000168
 */
void ObjCourseName::drawBG(Graphics&)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	addi     r31, r4, 0x190
	stw      r30, 0x48(r1)
	stw      r29, 0x44(r1)
	stw      r28, 0x40(r1)
	mr       r28, r3
	lbz      r0, 0x58(r3)
	cmplwi   r0, 0
	beq      lbl_80317E20
	lwz      r4, sys@sda21(r13)
	lis      r3, msVal__Q32og9newScreen13ObjCourseName@ha
	lfs      f1, 0x5c(r28)
	lfs      f0, 0x54(r4)
	lfs      f3, lbl_8051D8D4@sda21(r2)
	fadds    f1, f1, f0
	lfs      f0, lbl_8051D8D0@sda21(r2)
	stfs     f1, 0x5c(r28)
	lfs      f2, 0x5c(r28)
	lfs      f1, msVal__Q32og9newScreen13ObjCourseName@l(r3)
	fdivs    f1, f2, f1
	fsubs    f1, f3, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80317E14
	lfs      f0, lbl_8051D8D8@sda21(r2)
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	stb      r0, 0x57(r28)
	b        lbl_80317E20

lbl_80317E14:
	li       r0, 0
	stb      r0, 0x57(r28)
	stb      r0, 0x58(r28)

lbl_80317E20:
	lbz      r0, 0x57(r28)
	cmplwi   r0, 0
	beq      lbl_80317ED8
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	bl       getRenderModeObj__6SystemFv
	lhz      r30, 4(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r29, 6(r3)
	mr       r3, r31
	lwz      r0, 0x54(r28)
	addi     r4, r1, 8
	addi     r5, r1, 0xc
	addi     r6, r1, 0x10
	stw      r0, 0x18(r1)
	addi     r7, r1, 0x14
	stw      r0, 0x14(r1)
	stw      r0, 0x10(r1)
	stw      r0, 0xc(r1)
	stw      r0, 8(r1)
	bl
setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
	li       r3, 0
	bl       GXSetAlphaUpdate
	lis      r0, 0x4330
	lfs      f3, lbl_8051D8D0@sda21(r2)
	stw      r30, 0x34(r1)
	mr       r3, r31
	lfd      f2, lbl_8051D8E0@sda21(r2)
	addi     r4, r1, 0x1c
	stw      r0, 0x30(r1)
	lfd      f0, 0x30(r1)
	stw      r29, 0x3c(r1)
	fsubs    f1, f0, f2
	stw      r0, 0x38(r1)
	lfd      f0, 0x38(r1)
	fadds    f1, f3, f1
	stfs     f3, 0x1c(r1)
	fsubs    f0, f0, f2
	stfs     f3, 0x20(r1)
	fadds    f0, f3, f0
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	bl       "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"

lbl_80317ED8:
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

} // namespace newScreen
} // namespace og

/*
 * --INFO--
 * Address:	80317EF8
 * Size:	000028
 */
void __sinit_ogObjCourseName_cpp(void)
{
	/*
	lfs      f3, lbl_8051D8E8@sda21(r2)
	lis      r3, msVal__Q32og9newScreen13ObjCourseName@ha
	lfs      f2, lbl_8051D8D4@sda21(r2)
	stfsu    f3, msVal__Q32og9newScreen13ObjCourseName@l(r3)
	lfs      f1, lbl_8051D8EC@sda21(r2)
	lfs      f0, lbl_8051D8F0@sda21(r2)
	stfs     f2, 4(r3)
	stfs     f1, 8(r3)
	stfs     f0, 0xc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80317F20
 * Size:	000008
 */
@24 @og::newScreen::ObjCourseName::~ObjCourseName(void)
{
	/*
	addi     r3, r3, -24
	b        __dt__Q32og9newScreen13ObjCourseNameFv
	*/
}
