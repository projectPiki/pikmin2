#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049A8B0
    lbl_8049A8B0:
        .4byte 0x6D657373
        .4byte 0x61676553
        .4byte 0x65717565
        .4byte 0x6E63652E
        .4byte 0x63707000
    .global lbl_8049A8C4
    lbl_8049A8C4:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q25P2JME18TSequenceProcessor
    __vt__Q25P2JME18TSequenceProcessor:
        .4byte 0
        .4byte 0
        .4byte __dt__Q25P2JME18TSequenceProcessorFv
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
        .4byte do_isReady__Q25P2JME18TSequenceProcessorFv
        .4byte do_jump_isReady__Q25P2JME18TSequenceProcessorFv
        .4byte do_jump__Q25P2JME18TSequenceProcessorFPCvPCc
        .4byte do_branch_query__Q25P2JME18TSequenceProcessorFUs
        .4byte do_branch_queryResult__Q25P2JME18TSequenceProcessorFv
        .4byte do_branch__Q25P2JME18TSequenceProcessorFPCvPCc
        .4byte doResetAbtnWaitSE__Q25P2JME18TSequenceProcessorFv
        .4byte doCharacterSEStart__Q25P2JME18TSequenceProcessorFv
        .4byte doCharacterSE__Q25P2JME18TSequenceProcessorFi
        .4byte doCharacterSEEnd__Q25P2JME18TSequenceProcessorFv
        .4byte doFastForwardSE__Q25P2JME18TSequenceProcessorFv
        .4byte reset__Q25P2JME18TSequenceProcessorFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520868
    lbl_80520868:
        .4byte 0x00000000
    .global lbl_8052086C
    lbl_8052086C:
        .4byte 0x3DE147AE
    .global lbl_80520870
    lbl_80520870:
        .float 1.0
    .global lbl_80520874
    lbl_80520874:
        .4byte 0x41200000
    .global lbl_80520878
    lbl_80520878:
        .4byte 0x40200000
    .global lbl_8052087C
    lbl_8052087C:
        .4byte 0x42C80000
    .global lbl_80520880
    lbl_80520880:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_80520888
    lbl_80520888:
        .float 0.5
        .4byte 0x00000000
*/

namespace P2JME {

/*
 * --INFO--
 * Address:	80437844
 * Size:	000084
 */
TSequenceProcessor::TSequenceProcessor(JMessage::TReference const*,
                                       JMessage::TControl*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x430074
	  lis       r3, 0x804F
	  lfs       f1, 0x2508(r2)
	  subi      r3, r3, 0x3708
	  li        r0, 0
	  stw       r3, 0x0(r31)
	  mr        r3, r31
	  lfs       f0, 0x250C(r2)
	  stfs      f1, 0x50(r31)
	  stw       r0, 0x54(r31)
	  stw       r0, 0x58(r31)
	  stw       r0, 0x5C(r31)
	  stw       r0, 0x60(r31)
	  stw       r0, 0x64(r31)
	  stb       r0, 0x68(r31)
	  stb       r0, 0x69(r31)
	  stb       r0, 0x6A(r31)
	  stb       r0, 0x6B(r31)
	  stb       r0, 0x68(r31)
	  stb       r0, 0x69(r31)
	  stb       r0, 0x6A(r31)
	  stb       r0, 0x6B(r31)
	  stfs      f0, 0x4C(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804378C8
 * Size:	000034
 */
void TSequenceProcessor::do_begin(void const*, char const*)
{
	/*
	lwz      r4, 0x68(r3)
	li       r0, 0
	lfs      f0, lbl_8052086C@sda21(r2)
	rlwinm   r4, r4, 0, 0x1d, 0x1b
	stw      r4, 0x68(r3)
	stfs     f0, 0x4c(r3)
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x50(r3)
	stw      r0, 0x5c(r3)
	stw      r0, 0x60(r3)
	stw      r0, 0x64(r3)
	stb      r0, 0x6c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	804378FC
 * Size:	000004
 */
void TSequenceProcessor::do_end(void) { }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void TSequenceProcessor::tagColor(void const*, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void TSequenceProcessor::tagSize(void const*, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void TSequenceProcessor::tagRuby(void const*, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void TSequenceProcessor::tagFont(void const*, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80437900
 * Size:	0000A4
 */
void TSequenceProcessor::do_tag(unsigned long, void const*, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r7, 0
	stw      r0, 0x14(r1)
	rlwinm   r0, r4, 0x10, 0x18, 0x1f
	cmplwi   r0, 0xc0
	bge      lbl_80437940
	cmpwi    r0, 2
	clrlwi   r4, r4, 0x10
	beq      lbl_8043792C
	b        lbl_80437938

lbl_8043792C:
	bl       tagControl__Q25P2JME18TSequenceProcessorFUsPCvUl
	mr       r7, r3
	b        lbl_80437990

lbl_80437938:
	li       r7, 1
	b        lbl_80437990

lbl_80437940:
	cmplwi   r0, 0xff
	bne      lbl_80437990
	clrlwi   r0, r4, 0x10
	cmpwi    r0, 2
	beq      lbl_80437984
	bge      lbl_80437968
	cmpwi    r0, 0
	beq      lbl_80437974
	bge      lbl_8043797C
	b        lbl_80437990

lbl_80437968:
	cmpwi    r0, 4
	bge      lbl_80437990
	b        lbl_8043798C

lbl_80437974:
	li       r7, 1
	b        lbl_80437990

lbl_8043797C:
	li       r7, 1
	b        lbl_80437990

lbl_80437984:
	li       r7, 1
	b        lbl_80437990

lbl_8043798C:
	li       r7, 1

lbl_80437990:
	lwz      r0, 0x14(r1)
	mr       r3, r7
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	804379A4
 * Size:	000008
 */
void TSequenceProcessor::do_systemTagCode(unsigned short, void const*,
                                          unsigned long)
{
	return 0x0;
}

/*
 * --INFO--
 * Address:	804379AC
 * Size:	0001D8
 */
void TSequenceProcessor::do_isReady(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x68(r3)
	li       r31, 0
	clrlwi.  r0, r3, 0x1f
	beq      lbl_804379E4
	li       r3, 0
	b        lbl_80437B64

lbl_804379E4:
	rlwinm.  r0, r3, 0, 0x1e, 0x1e
	beq      lbl_80437AA0
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x50(r30)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_80520868@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x50(r30)
	lfs      f1, 0x50(r30)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80437B60
	lwz      r0, 0x54(r30)
	li       r3, 0
	cmplwi   r0, 0
	bne      lbl_80437A30
	lwz      r0, 0x58(r30)
	cmplwi   r0, 0
	beq      lbl_80437A34

lbl_80437A30:
	li       r3, 1

lbl_80437A34:
	clrlwi.  r0, r3, 0x18
	bne      lbl_80437A58
	lis      r3, lbl_8049A8B0@ha
	lis      r5, lbl_8049A8C4@ha
	addi     r3, r3, lbl_8049A8B0@l
	li       r4, 0x17d
	addi     r5, r5, lbl_8049A8C4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80437A58:
	lwz      r3, 0x54(r30)
	cmplwi   r3, 0
	beq      lbl_80437A70
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	bne      lbl_80437A88

lbl_80437A70:
	lwz      r3, 0x58(r30)
	cmplwi   r3, 0
	beq      lbl_80437B60
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	beq      lbl_80437B60

lbl_80437A88:
	mr       r3, r30
	bl       resetAbtnWait__Q25P2JME18TSequenceProcessorFv
	lwz      r0, 0x68(r30)
	rlwinm   r0, r0, 0, 0x1d, 0x1b
	stw      r0, 0x68(r30)
	b        lbl_80437B60

lbl_80437AA0:
	rlwinm.  r0, r3, 0, 0x1c, 0x1c
	lfs      f31, lbl_80520870@sda21(r2)
	beq      lbl_80437AB4
	lfs      f31, lbl_80520874@sda21(r2)
	b        lbl_80437B34

lbl_80437AB4:
	lwz      r3, 0x54(r30)
	cmplwi   r3, 0
	beq      lbl_80437ACC
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_80437AE4

lbl_80437ACC:
	lwz      r4, 0x58(r30)
	cmplwi   r4, 0
	beq      lbl_80437B08
	lwz      r0, 0x1c(r4)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_80437B08

lbl_80437AE4:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x68(r30)
	ori      r0, r0, 8
	stw      r0, 0x68(r30)
	b        lbl_80437B34

lbl_80437B08:
	cmplwi   r3, 0
	beq      lbl_80437B1C
	lwz      r0, 0x18(r3)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	bne      lbl_80437B30

lbl_80437B1C:
	cmplwi   r4, 0
	beq      lbl_80437B34
	lwz      r0, 0x18(r4)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	beq      lbl_80437B34

lbl_80437B30:
	lfs      f31, lbl_80520878@sda21(r2)

lbl_80437B34:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x50(r30)
	lfs      f2, 0x54(r3)
	lfs      f0, lbl_80520868@sda21(r2)
	fnmsubs  f1, f31, f2, f1
	stfs     f1, 0x50(r30)
	lfs      f1, 0x50(r30)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80437B60
	li       r31, 1

lbl_80437B60:
	mr       r3, r31

lbl_80437B64:
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80437B84
 * Size:	000004
 */
void TSequenceProcessor::doFastForwardSE(void) { }

/*
 * --INFO--
 * Address:	80437B88
 * Size:	000008
 */
u32 TSequenceProcessor::do_jump_isReady(void) { return 0x0; }

/*
 * --INFO--
 * Address:	80437B90
 * Size:	00000C
 */
void TSequenceProcessor::do_jump(void const*, char const*)
{
	/*
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x50(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80437B9C
 * Size:	000004
 */
void TSequenceProcessor::do_branch_query(unsigned short) { }

/*
 * --INFO--
 * Address:	80437BA0
 * Size:	000008
 */
s32 TSequenceProcessor::do_branch_queryResult(void) { return -0x1; }

/*
 * --INFO--
 * Address:	80437BA8
 * Size:	00000C
 */
void TSequenceProcessor::do_branch(void const*, char const*)
{
	/*
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x50(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80437BB4
 * Size:	0000A8
 */
void TSequenceProcessor::do_character(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	rlwinm.  r0, r4, 0, 0, 0xf
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 1
	bne      lbl_80437BEC
	rlwinm.  r0, r4, 0, 0x10, 0x17
	bne      lbl_80437BEC
	cmpwi    r4, 0xa
	beq      lbl_80437BE8
	b        lbl_80437BEC

lbl_80437BE8:
	li       r3, 0

lbl_80437BEC:
	lfs      f1, 0x50(r31)
	clrlwi.  r0, r3, 0x18
	lfs      f0, 0x4c(r31)
	fadds    f0, f1, f0
	stfs     f0, 0x50(r31)
	beq      lbl_80437C48
	lwz      r0, 0x5c(r31)
	cmpwi    r0, 0
	bne      lbl_80437C28
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	b        lbl_80437C3C

lbl_80437C28:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl

lbl_80437C3C:
	lwz      r3, 0x5c(r31)
	addi     r0, r3, 1
	stw      r0, 0x5c(r31)

lbl_80437C48:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80437C5C
 * Size:	000004
 */
void TSequenceProcessor::doCharacterSE(int) { }

/*
 * --INFO--
 * Address:	80437C60
 * Size:	000004
 */
void TSequenceProcessor::doCharacterSEStart(void) { }

/*
 * --INFO--
 * Address:	80437C64
 * Size:	0000F4
 */
void TSequenceProcessor::tagControl(unsigned short, void const*, unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	clrlwi   r0, r4, 0x10
	cmpwi    r0, 1
	stw      r31, 0x1c(r1)
	mr       r31, r3
	beq      lbl_80437CD0
	bge      lbl_80437C94
	cmpwi    r0, 0
	bge      lbl_80437CA0
	b        lbl_80437D24

lbl_80437C94:
	cmpwi    r0, 3
	bge      lbl_80437D24
	b        lbl_80437D18

lbl_80437CA0:
	cmplwi   r6, 0
	beq      lbl_80437CC4
	lis      r3, lbl_8049A8B0@ha
	lis      r5, lbl_8049A8C4@ha
	addi     r3, r3, lbl_8049A8B0@l
	li       r4, 0x260
	addi     r5, r5, lbl_8049A8C4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80437CC4:
	mr       r3, r31
	bl       setAbtnWait__Q25P2JME18TSequenceProcessorFv
	b        lbl_80437D40

lbl_80437CD0:
	lbz      r3, 0(r5)
	cmplwi   r3, 0xff
	bne      lbl_80437CE8
	lfs      f0, lbl_8052086C@sda21(r2)
	stfs     f0, 0x4c(r31)
	b        lbl_80437D0C

lbl_80437CE8:
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f2, lbl_80520880@sda21(r2)
	stw      r0, 8(r1)
	lfs      f0, lbl_8052087C@sda21(r2)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fdivs    f0, f1, f0
	stfs     f0, 0x4c(r31)

lbl_80437D0C:
	lfs      f0, 0x4c(r31)
	stfs     f0, 0x50(r31)
	b        lbl_80437D40

lbl_80437D18:
	lbz      r0, 0(r5)
	stb      r0, 0x6c(r31)
	b        lbl_80437D40

lbl_80437D24:
	lis      r3, lbl_8049A8B0@ha
	lis      r5, lbl_8049A8C4@ha
	addi     r3, r3, lbl_8049A8B0@l
	li       r4, 0x279
	addi     r5, r5, lbl_8049A8C4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80437D40:
	lwz      r0, 0x24(r1)
	li       r3, 1
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80437D58
 * Size:	00004C
 */
void TSequenceProcessor::setAbtnWait(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_80520888@sda21(r2)
	stw      r0, 0x14(r1)
	lwz      r0, 0x68(r3)
	ori      r0, r0, 2
	stw      r0, 0x68(r3)
	stfs     f0, 0x50(r3)
	lwz      r0, 0x68(r3)
	rlwinm   r0, r0, 0, 0x1e, 0x1c
	stw      r0, 0x68(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80437DA4
 * Size:	000004
 */
void TSequenceProcessor::doCharacterSEEnd(void) { }

/*
 * --INFO--
 * Address:	80437DA8
 * Size:	000060
 */
void TSequenceProcessor::resetAbtnWait(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x68(r31)
	li       r0, 0
	rlwinm   r3, r3, 0, 0x1f, 0x1d
	stw      r3, 0x68(r31)
	lfs      f0, 0x4c(r31)
	stfs     f0, 0x50(r31)
	lwz      r3, 0x68(r31)
	ori      r3, r3, 4
	stw      r3, 0x68(r31)
	stw      r0, 0x5c(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80437E08
 * Size:	00002C
 */
void TSequenceProcessor::doResetAbtnWaitSE(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0x1800
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80437E34
 * Size:	000018
 */
void TSequenceProcessor::reset(void)
{
	/*
	li       r0, 0
	stb      r0, 0x68(r3)
	stb      r0, 0x69(r3)
	stb      r0, 0x6a(r3)
	stb      r0, 0x6b(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80437E4C
 * Size:	000060
 */
TSequenceProcessor::~TSequenceProcessor(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80437E90
	lis      r5, __vt__Q25P2JME18TSequenceProcessor@ha
	li       r4, 0
	addi     r0, r5, __vt__Q25P2JME18TSequenceProcessor@l
	stw      r0, 0(r30)
	bl       __dt__Q28JMessage18TSequenceProcessorFv
	extsh.   r0, r31
	ble      lbl_80437E90
	mr       r3, r30
	bl       __dl__FPv

lbl_80437E90:
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
