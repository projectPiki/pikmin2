#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049B880
    lbl_8049B880:
        .4byte 0x6D657373
        .4byte 0x6167654F
        .4byte 0x626A2E68
        .4byte 0x00000000
    .global lbl_8049B890
    lbl_8049B890:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x00000000

    .section .data, "wa"	# 0x8049E220 - 0x804EFC20
    .global __vt__Q35P2JME7Caption8TControl
    __vt__Q35P2JME7Caption8TControl:
        .4byte 0
        .4byte 0
        .4byte __dt__Q35P2JME7Caption8TControlFv
        .4byte reset__Q35P2JME7Caption8TControlFv
        .4byte update__Q25P2JME8TControlFv
        .4byte update__Q35P2JME6Window8TControlFP10ControllerP10Controller
        .4byte draw__Q35P2JME7Caption8TControlFR8Graphics
        .4byte draw__Q35P2JME6Window8TControlFPA4_fPA4_f
        .4byte setMessageID__Q25P2JME8TControlFUlUl
        .4byte setMessageID__Q25P2JME8TControlFPc
        .4byte setMessageID__Q25P2JME8TControlFUx
        .4byte setMessageCode__Q25P2JME8TControlFUsUs
        .4byte setMessageCode__Q25P2JME8TControlFUl
        .4byte onInit__Q35P2JME7Caption8TControlFv
        .4byte createReference__Q25P2JME8TControlFv
        .4byte createResourceContainer__Q25P2JME8TControlFv
        .4byte createSequenceProcessor__Q35P2JME7Caption8TControlFv
        .4byte createRenderingProcessor__Q35P2JME7Caption8TControlFv
    .global __vt__Q35P2JME7Caption18TSequenceProcessor
    __vt__Q35P2JME7Caption18TSequenceProcessor:
        .4byte 0
        .4byte 0
        .4byte __dt__Q35P2JME7Caption18TSequenceProcessorFv
        .4byte do_reset__Q28JMessage10TProcessorFv
        .4byte do_character__Q25P2JME18TSequenceProcessorFi
        .4byte do_tag__Q25P2JME18TSequenceProcessorFUlPCvUl
        .4byte do_systemTagCode__Q25P2JME18TSequenceProcessorFUsPCvUl
        .4byte do_select_begin__Q28JMessage10TProcessorFUl
        .4byte do_select_end__Q28JMessage10TProcessorFv
        .4byte do_select_separate__Q28JMessage10TProcessorFv
        .4byte do_reset___Q28JMessage18TSequenceProcessorFPCc
        .4byte do_setBegin_isReady___Q28JMessage18TSequenceProcessorCFv
        .4byte do_begin___Q28JMessage18TSequenceProcessorFPCvPCc
        .4byte do_end___Q28JMessage18TSequenceProcessorFv
        .4byte do_tag___Q28JMessage18TSequenceProcessorFUlPCvUl
        .4byte do_systemTagCode___Q28JMessage18TSequenceProcessorFUsPCvUl
        .4byte do_begin__Q25P2JME18TSequenceProcessorFPCvPCc
        .4byte do_end__Q25P2JME18TSequenceProcessorFv
        .4byte do_isReady__Q35P2JME7Caption18TSequenceProcessorFv
        .4byte do_jump_isReady__Q25P2JME18TSequenceProcessorFv
        .4byte do_jump__Q25P2JME18TSequenceProcessorFPCvPCc
        .4byte do_branch_query__Q25P2JME18TSequenceProcessorFUs
        .4byte do_branch_queryResult__Q25P2JME18TSequenceProcessorFv
        .4byte do_branch__Q25P2JME18TSequenceProcessorFPCvPCc
        .4byte doResetAbtnWaitSE__Q35P2JME7Caption18TSequenceProcessorFv
        .4byte doCharacterSEStart__Q35P2JME7Caption18TSequenceProcessorFv
        .4byte doCharacterSE__Q35P2JME7Caption18TSequenceProcessorFi
        .4byte doCharacterSEEnd__Q35P2JME7Caption18TSequenceProcessorFv
        .4byte doFastForwardSE__Q35P2JME6Window18TSequenceProcessorFv
        .4byte reset__Q25P2JME18TSequenceProcessorFv
    .global __vt__Q35P2JME7Caption19TRenderingProcessor
    __vt__Q35P2JME7Caption19TRenderingProcessor:
        .4byte 0
        .4byte 0
        .4byte __dt__Q35P2JME7Caption19TRenderingProcessorFv
        .4byte do_reset__Q28JMessage10TProcessorFv
        .4byte do_character__Q25P2JME19TRenderingProcessorFi
        .4byte do_tag__Q25P2JME19TRenderingProcessorFUlPCvUl
        .4byte do_systemTagCode__Q25P2JME19TRenderingProcessorFUsPCvUl
        .4byte do_select_begin__Q25P2JME19TRenderingProcessorFUl
        .4byte do_select_end__Q25P2JME19TRenderingProcessorFv
        .4byte do_select_separate__Q25P2JME19TRenderingProcessorFv
        .4byte do_reset___Q28JMessage19TRenderingProcessorFPCc
        .4byte do_setBegin_isReady___Q28JMessage10TProcessorCFv
        .4byte do_begin___Q28JMessage19TRenderingProcessorFPCvPCc
        .4byte do_end___Q28JMessage19TRenderingProcessorFv
        .4byte do_tag___Q28JMessage19TRenderingProcessorFUlPCvUl
        .4byte do_systemTagCode___Q28JMessage19TRenderingProcessorFUsPCvUl
        .4byte do_begin__Q25P2JME19TRenderingProcessorFPCvPCc
        .4byte do_end__Q28JMessage19TRenderingProcessorFv
        .4byte tagColor__Q25P2JME19TRenderingProcessorFPCvUl
        .4byte tagSize__Q25P2JME19TRenderingProcessorFPCvUl
        .4byte tagRuby__Q25P2JME19TRenderingProcessorFPCvUl
        .4byte tagFont__Q25P2JME19TRenderingProcessorFPCvUl
        .4byte tagImage__Q25P2JME19TRenderingProcessorFUsPCvUl
        .4byte tagColorEX__Q25P2JME19TRenderingProcessorFUsPCvUl
        .4byte tagControl__Q25P2JME19TRenderingProcessorFUsPCvUl
        .4byte tagPosition__Q25P2JME19TRenderingProcessorFUsPCvUl
        .4byte update__Q35P2JME6Window19TRenderingProcessorFv
        .4byte reset__Q35P2JME6Window19TRenderingProcessorFv
        .4byte newParagraph__Q25P2JME19TRenderingProcessorFv
        .4byte
   doDrawImage__Q35P2JME6Window19TRenderingProcessorFP10JUTTextureffff .4byte
   doDrawRuby__Q35P2JME6Window19TRenderingProcessorFffffib .4byte
   doDrawLetter__Q35P2JME6Window19TRenderingProcessorFffffib .4byte
   doTagControlAbtnWait__Q25P2JME19TRenderingProcessorFv .4byte
   doDrawCommon__Q35P2JME7Caption19TRenderingProcessorFffP7MatrixfP7Matrixf
        .4byte
   "makeMatrix__Q35P2JME6Window19TRenderingProcessorFP7MatrixfPQ35P2JME6Window8DrawInfof10Vector3<f>"
        .4byte
   doGetDrawInfo__Q35P2JME7Caption19TRenderingProcessorFPQ35P2JME6Window8DrawInfo

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520B30
    lbl_80520B30:
        .float 1.0
    .global lbl_80520B34
    lbl_80520B34:
        .4byte 0x3E888889
    .global lbl_80520B38
    lbl_80520B38:
        .4byte 0x437F0000
    .global lbl_80520B3C
    lbl_80520B3C:
        .4byte 0x00000000
    .global lbl_80520B40
    lbl_80520B40:
        .4byte 0x41200000
    .global lbl_80520B44
    lbl_80520B44:
        .4byte 0x40A00000
    .global lbl_80520B48
    lbl_80520B48:
        .float 0.5
    .global lbl_80520B4C
    lbl_80520B4C:
        .4byte 0x40400000
    .global lbl_80520B50
    lbl_80520B50:
        .4byte 0x43480000
        .4byte 0x00000000
    .global lbl_80520B58
    lbl_80520B58:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_80520B60
    lbl_80520B60:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80520B68
    lbl_80520B68:
        .4byte 0x43910000
        .4byte 0x00000000
*/

namespace P2JME {

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
Caption::TRenderingProcessor::TRenderingProcessor(JMessage::TReference*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80450FC0
 * Size:	00000C
 */
void Caption::TRenderingProcessor::doGetDrawInfo(P2JME::Window::DrawInfo*)
{
	/*
	lfs      f0, lbl_80520B34@sda21(r2)
	stfs     f0, 0x20(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80450FCC
 * Size:	0001EC
 */
void Caption::TRenderingProcessor::doDrawCommon(float, float, Matrixf*, Matrixf*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stfd      f31, 0x90(r1)
	  psq_st    f31,0x98(r1),0,0
	  stfd      f30, 0x80(r1)
	  psq_st    f30,0x88(r1),0,0
	  stfd      f29, 0x70(r1)
	  psq_st    f29,0x78(r1),0,0
	  stw       r31, 0x6C(r1)
	  stw       r30, 0x68(r1)
	  stw       r29, 0x64(r1)
	  stw       r28, 0x60(r1)
	  mr        r28, r3
	  mr        r29, r4
	  lfs       f3, 0x27D8(r2)
	  fmr       f29, f1
	  lfs       f0, 0x144(r3)
	  fmr       f30, f2
	  lwz       r4, 0x40(r3)
	  mr        r30, r5
	  fmuls     f31, f3, f0
	  addi      r3, r28, 0x110
	  bl        -0x11DF0
	  mr.       r31, r3
	  bne-      .loc_0x94
	  lwz       r4, 0x40(r28)
	  addi      r3, r28, 0x110
	  bl        -0x11DD4
	  mr        r0, r3
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  mr        r31, r0
	  mr        r4, r31
	  lwz       r12, 0x8C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x94:
	  cmplwi    r31, 0
	  beq-      .loc_0xCC
	  lfs       f0, 0x27DC(r2)
	  addi      r3, r1, 0x20
	  stfs      f29, 0x14(r1)
	  addi      r4, r1, 0x14
	  stfs      f30, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        -0x28840
	  lfs       f1, 0x1C(r31)
	  lfs       f0, 0x20(r31)
	  fdivs     f0, f1, f0
	  fmuls     f31, f31, f0
	  b         .loc_0xE8

	.loc_0xCC:
	  lfs       f0, 0x27DC(r2)
	  addi      r3, r1, 0x20
	  stfs      f29, 0x8(r1)
	  addi      r4, r1, 0x8
	  stfs      f30, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  bl        -0x28870

	.loc_0xE8:
	  cmplwi    r30, 0
	  beq-      .loc_0x13C
	  mr        r4, r30
	  addi      r3, r1, 0x20
	  bl        -0x366DF8
	  lfs       f2, 0xC(r30)
	  mr        r4, r30
	  lfs       f1, 0x27E0(r2)
	  mr        r5, r30
	  lfs       f3, 0x1C(r30)
	  lfs       f0, 0x27E4(r2)
	  fadds     f2, f2, f1
	  fadds     f3, f3, f0
	  stfs      f2, 0xC(r30)
	  stfs      f3, 0x1C(r30)
	  lwz       r3, 0x44(r28)
	  bl        -0x366DF4
	  lwz       r3, 0x48(r28)
	  mr        r4, r30
	  mr        r5, r30
	  bl        -0x366E04

	.loc_0x13C:
	  addi      r4, r1, 0x20
	  lwz       r3, 0x44(r28)
	  mr        r5, r4
	  bl        -0x366E14
	  addi      r4, r1, 0x20
	  lwz       r3, 0x48(r28)
	  mr        r5, r4
	  bl        -0x366E24
	  cmplwi    r29, 0
	  beq-      .loc_0x174
	  mr        r4, r29
	  addi      r3, r1, 0x20
	  bl        -0x366E6C
	  b         .loc_0x180

	.loc_0x174:
	  addi      r3, r1, 0x20
	  li        r4, 0
	  bl        -0x367BD0

	.loc_0x180:
	  lfs       f0, 0x27DC(r2)
	  fcmpo     cr0, f31, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x19C
	  lfs       f0, 0x27E8(r2)
	  fadds     f0, f0, f31
	  b         .loc_0x1A4

	.loc_0x19C:
	  lfs       f0, 0x27E8(r2)
	  fsubs     f0, f31, f0

	.loc_0x1A4:
	  fctiwz    f0, f0
	  stfd      f0, 0x50(r1)
	  lwz       r0, 0x54(r1)
	  rlwinm    r3,r0,0,24,31
	  psq_l     f31,0x98(r1),0,0
	  lfd       f31, 0x90(r1)
	  psq_l     f30,0x88(r1),0,0
	  lfd       f30, 0x80(r1)
	  psq_l     f29,0x78(r1),0,0
	  lfd       f29, 0x70(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  lwz       r29, 0x64(r1)
	  lwz       r0, 0xA4(r1)
	  lwz       r28, 0x60(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804511B8
 * Size:	000054
 */
Caption::TControl::TControl(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q35P2JME6Window8TControlFv
	lis      r3, __vt__Q35P2JME7Caption8TControl@ha
	li       r4, 0
	addi     r3, r3, __vt__Q35P2JME7Caption8TControl@l
	li       r0, 6
	stw      r3, 0(r31)
	mr       r3, r31
	stw      r4, 0x5c(r31)
	stw      r4, 0x60(r31)
	stw      r4, 0x64(r31)
	stw      r0, 0x68(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8045120C
 * Size:	0000E8
 */
void Caption::TControl::onInit(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r4, gP2JMEMgr@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_80451244
	lwz      r4, 0x18(r4)
	bl       setFont__Q25P2JME8TControlFP7JUTFont
	lwz      r4, gP2JMEMgr@sda21(r13)
	mr       r3, r31
	lwz      r4, 0x18(r4)
	bl       setRubyFont__Q25P2JME8TControlFP7JUTFont

lbl_80451244:
	mr       r3, r31
	li       r4, 0x100
	bl       initRenderingProcessor__Q35P2JME6Window8TControlFUl
	lfs      f0, lbl_80520B4C@sda21(r2)
	mr       r3, r31
	li       r4, 0
	li       r5, 0
	stfs     f0, 0x50(r31)
	bl       setLocate__Q25P2JME8TControlFii
	bl       getRenderModeObj__6SystemFv
	lhz      r4, 4(r3)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	li       r0, 0
	lfd      f2, lbl_80520B58@sda21(r2)
	li       r3, 1
	stw      r4, 0xc(r1)
	lwz      r4, 0x40(r31)
	lfd      f1, 8(r1)
	lfs      f0, lbl_80520B50@sda21(r2)
	fsubs    f1, f1, f2
	stfs     f1, 0x38(r4)
	lwz      r4, 0x40(r31)
	stfs     f0, 0x3c(r4)
	lwz      r5, 0x40(r31)
	lwz      r4, 0x8c(r5)
	rlwinm   r4, r4, 0, 0x1c, 0x18
	stw      r4, 0x8c(r5)
	lwz      r4, 0x8c(r5)
	ori      r4, r4, 0x20
	stw      r4, 0x8c(r5)
	lwz      r5, 0x40(r31)
	lwz      r4, 0x8c(r5)
	rlwinm   r4, r4, 0, 0x18, 0x14
	stw      r4, 0x8c(r5)
	lwz      r4, 0x8c(r5)
	ori      r4, r4, 0x200
	stw      r4, 0x8c(r5)
	stw      r0, 0x5c(r31)
	lwz      r31, 0x1c(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	804512F4
 * Size:	000034
 */
void Caption::TControl::reset(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       reset__Q35P2JME6Window8TControlFv
	li       r0, 0
	stw      r0, 0x5c(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80451328
 * Size:	000128
 */
void Caption::TControl::updateSetFrame(long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r0, 0x5c(r3)
	li       r3, 0
	cmpwi    r0, 0
	bne      lbl_8045137C
	lwz      r0, 0x60(r30)
	cmpw     r31, r0
	blt      lbl_8045137C
	lwz      r4, 0x64(r30)
	lwz      r0, 0x68(r30)
	add      r0, r4, r0
	cmpw     r31, r0
	bgt      lbl_8045137C
	li       r0, 1
	stw      r0, 0x5c(r30)

lbl_8045137C:
	lwz      r0, 0x5c(r30)
	cmpwi    r0, 0
	beq      lbl_80451438
	lwz      r0, 0x60(r30)
	cmpw     r31, r0
	blt      lbl_804513A8
	lwz      r4, 0x64(r30)
	lwz      r0, 0x68(r30)
	add      r0, r4, r0
	cmpw     r31, r0
	ble      lbl_804513B4

lbl_804513A8:
	li       r0, 0
	stw      r0, 0x5c(r30)
	b        lbl_80451438

lbl_804513B4:
	mr       r3, r30
	bl       update__Q25P2JME8TControlFv
	lwz      r0, 0x64(r30)
	cmpw     r31, r0
	ble      lbl_80451424
	li       r0, 2
	lis      r5, 0x4330
	stw      r0, 0x5c(r30)
	lfd      f2, lbl_80520B60@sda21(r2)
	lwz      r4, 0x64(r30)
	lwz      r0, 0x68(r30)
	subf     r4, r4, r31
	stw      r5, 8(r1)
	xoris    r4, r4, 0x8000
	xoris    r0, r0, 0x8000
	stw      r4, 0xc(r1)
	lfs      f3, lbl_80520B30@sda21(r2)
	lfd      f0, 8(r1)
	stw      r0, 0x14(r1)
	fsubs    f1, f0, f2
	lwz      r4, 0x40(r30)
	stw      r5, 0x10(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	fdivs    f0, f1, f0
	fsubs    f0, f3, f0
	stfs     f0, 0x144(r4)
	b        lbl_80451438

lbl_80451424:
	lfs      f0, lbl_80520B30@sda21(r2)
	li       r0, 1
	lwz      r4, 0x40(r30)
	stfs     f0, 0x144(r4)
	stw      r0, 0x5c(r30)

lbl_80451438:
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
 * Address:	80451450
 * Size:	000084
 */
void Caption::TControl::draw(Graphics&)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r4
	stw      r30, 0x48(r1)
	mr       r30, r3
	lwz      r0, 0x5c(r3)
	cmpwi    r0, 0
	beq      lbl_804514BC
	lfs      f1, lbl_80520B3C@sda21(r2)
	addi     r3, r1, 0x14
	lfs      f0, lbl_80520B68@sda21(r2)
	addi     r4, r1, 8
	stfs     f1, 8(r1)
	stfs     f0, 0xc(r1)
	stfs     f1, 0x10(r1)
	bl       "makeT__7MatrixfFR10Vector3<f>"
	addi     r3, r31, 0x190
	lwz      r12, 0x190(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	addi     r4, r1, 0x14
	addi     r5, r31, 0x210
	bl       draw__Q25P2JME8TControlFPA4_fPA4_f

lbl_804514BC:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	804514D4
 * Size:	000058
 */
void Caption::TControl::start(char*, long, long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r6
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	stw      r30, 0x60(r29)
	stw      r31, 0x64(r29)
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
 * Address:	8045152C
 * Size:	000088
 */
void Caption::TControl::createSequenceProcessor(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0x70
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80451598
	lwz      r0, 0x38(r30)
	cmplwi   r0, 0
	bne      lbl_8045157C
	lis      r3, lbl_8049B880@ha
	lis      r5, lbl_8049B890@ha
	addi     r3, r3, lbl_8049B880@l
	li       r4, 0x79
	addi     r5, r5, lbl_8049B890@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8045157C:
	lwz      r4, 0x38(r30)
	mr       r3, r31
	mr       r5, r30
	bl
__ct__Q35P2JME6Window18TSequenceProcessorFPQ28JMessage10TReferencePQ28JMessage8TControl
	lis      r3, __vt__Q35P2JME7Caption18TSequenceProcessor@ha
	addi     r0, r3, __vt__Q35P2JME7Caption18TSequenceProcessor@l
	stw      r0, 0(r31)

lbl_80451598:
	stw      r31, 0x3c(r30)
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
 * Address:	804515B4
 * Size:	00008C
 */
void Caption::TControl::createRenderingProcessor(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0x148
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80451624
	lwz      r0, 0x38(r30)
	cmplwi   r0, 0
	bne      lbl_80451604
	lis      r3, lbl_8049B880@ha
	lis      r5, lbl_8049B890@ha
	addi     r3, r3, lbl_8049B880@l
	li       r4, 0x79
	addi     r5, r5, lbl_8049B890@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80451604:
	lwz      r4, 0x38(r30)
	mr       r3, r31
	bl       __ct__Q35P2JME6Window19TRenderingProcessorFPQ28JMessage10TReference
	lis      r3, __vt__Q35P2JME7Caption19TRenderingProcessor@ha
	lfs      f0, lbl_80520B30@sda21(r2)
	addi     r0, r3, __vt__Q35P2JME7Caption19TRenderingProcessor@l
	stw      r0, 0(r31)
	stfs     f0, 0x144(r31)

lbl_80451624:
	stw      r31, 0x40(r30)
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
 * Address:	80451640
 * Size:	000080
 */
Caption::TSequenceProcessor::~TSequenceProcessor(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_804516A4
	lis      r4, __vt__Q35P2JME7Caption18TSequenceProcessor@ha
	addi     r0, r4, __vt__Q35P2JME7Caption18TSequenceProcessor@l
	stw      r0, 0(r30)
	beq      lbl_80451694
	lis      r4, __vt__Q35P2JME6Window18TSequenceProcessor@ha
	addi     r0, r4, __vt__Q35P2JME6Window18TSequenceProcessor@l
	stw      r0, 0(r30)
	beq      lbl_80451694
	lis      r5, __vt__Q25P2JME18TSequenceProcessor@ha
	li       r4, 0
	addi     r0, r5, __vt__Q25P2JME18TSequenceProcessor@l
	stw      r0, 0(r30)
	bl       __dt__Q28JMessage18TSequenceProcessorFv

lbl_80451694:
	extsh.   r0, r31
	ble      lbl_804516A4
	mr       r3, r30
	bl       __dl__FPv

lbl_804516A4:
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
 * Address:	804516C0
 * Size:	000008
 */
u32 Caption::TSequenceProcessor::do_isReady(void) { return 0x1; }

/*
 * --INFO--
 * Address:	804516C8
 * Size:	000004
 */
void Caption::TSequenceProcessor::doResetAbtnWaitSE(void) { }

/*
 * --INFO--
 * Address:	804516CC
 * Size:	000004
 */
void Caption::TSequenceProcessor::doCharacterSE(int) { }

/*
 * --INFO--
 * Address:	804516D0
 * Size:	000004
 */
void Caption::TSequenceProcessor::doCharacterSEStart(void) { }

/*
 * --INFO--
 * Address:	804516D4
 * Size:	000004
 */
void Caption::TSequenceProcessor::doCharacterSEEnd(void) { }

/*
 * --INFO--
 * Address:	804516D8
 * Size:	0000B8
 */
Caption::TRenderingProcessor::~TRenderingProcessor(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80451774
	lis      r3, __vt__Q35P2JME7Caption19TRenderingProcessor@ha
	addi     r0, r3, __vt__Q35P2JME7Caption19TRenderingProcessor@l
	stw      r0, 0(r30)
	beq      lbl_80451764
	lis      r3, __vt__Q35P2JME6Window19TRenderingProcessor@ha
	addic.   r0, r30, 0x110
	addi     r0, r3, __vt__Q35P2JME6Window19TRenderingProcessor@l
	stw      r0, 0(r30)
	beq      lbl_80451734
	addi     r3, r30, 0x128
	li       r4, -1
	bl       __dt__5CNodeFv
	addi     r3, r30, 0x110
	li       r4, -1
	bl       __dt__5CNodeFv

lbl_80451734:
	cmplwi   r30, 0
	beq      lbl_80451764
	lis      r3, __vt__Q25P2JME19TRenderingProcessor@ha
	addi     r0, r3, __vt__Q25P2JME19TRenderingProcessor@l
	stw      r0, 0(r30)
	beq      lbl_80451764
	lis      r4, __vt__Q25P2JME23TRenderingProcessorBase@ha
	mr       r3, r30
	addi     r0, r4, __vt__Q25P2JME23TRenderingProcessorBase@l
	li       r4, 0
	stw      r0, 0(r30)
	bl       __dt__Q28JMessage19TRenderingProcessorFv

lbl_80451764:
	extsh.   r0, r31
	ble      lbl_80451774
	mr       r3, r30
	bl       __dl__FPv

lbl_80451774:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
} // namespace P2JME
