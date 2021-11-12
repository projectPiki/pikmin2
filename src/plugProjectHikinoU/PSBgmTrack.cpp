#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80490158
    lbl_80490158:
        .4byte 0x50534267
        .4byte 0x6D546173
        .4byte 0x6B2E6800
    .global lbl_80490164
    lbl_80490164:
        .asciz "P2Assert"
        .skip 3
    .global lbl_80490170
    lbl_80490170:
        .4byte 0x50534267
        .4byte 0x6D547261
        .4byte 0x636B2E63
        .4byte 0x70700000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q28PSSystem13SeqTrackChild
    __vt__Q28PSSystem13SeqTrackChild:
        .4byte 0
        .4byte 0
        .4byte update__Q28PSSystem12SeqTrackBaseFv
        .4byte init__Q28PSSystem12SeqTrackBaseFP8JASTrack
        .4byte onStopSeq__Q28PSSystem13SeqTrackChildFv
    .global __vt__Q28PSSystem10IdMaskTask
    __vt__Q28PSSystem10IdMaskTask:
        .4byte 0
        .4byte 0
        .4byte task__Q28PSSystem10IdMaskTaskFR8JASTrack
    .global __vt__Q28PSSystem8MuteTask
    __vt__Q28PSSystem8MuteTask:
        .4byte 0
        .4byte 0
        .4byte task__Q28PSSystem8MuteTaskFR8JASTrack
    .global __vt__Q28PSSystem12SeqTrackRoot
    __vt__Q28PSSystem12SeqTrackRoot:
        .4byte 0
        .4byte 0
        .4byte update__Q28PSSystem12SeqTrackRootFv
        .4byte init__Q28PSSystem12SeqTrackRootFP8JASTrack
        .4byte onStopSeq__Q28PSSystem12SeqTrackRootFv
        .4byte beatUpdate__Q28PSSystem12SeqTrackRootFv
        .4byte onBeatTop__Q28PSSystem12SeqTrackRootFv
    .global __vt__Q28PSSystem12SeqTrackBase
    __vt__Q28PSSystem12SeqTrackBase:
        .4byte 0
        .4byte 0
        .4byte update__Q28PSSystem12SeqTrackBaseFv
        .4byte init__Q28PSSystem12SeqTrackBaseFP8JASTrack
        .4byte 0
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051E1D8
    lbl_8051E1D8:
        .4byte 0x40000000
    .global lbl_8051E1DC
    lbl_8051E1DC:
        .4byte 0x00000000
    .global lbl_8051E1E0
    lbl_8051E1E0:
        .float 1.0
    .global lbl_8051E1E4
    lbl_8051E1E4:
        .float 0.5
    .global lbl_8051E1E8
    lbl_8051E1E8:
        .4byte 0x43300000
        .4byte 0x00000000
*/

namespace PSSystem {

/*
 * --INFO--
 * Address:	803422A8
 * Size:	00002C
 */
void BeatMgr::proc()
{
	/*
	lbz      r4, 0(r3)
	rlwinm.  r0, r4, 0, 0x19, 0x19
	beq      lbl_803422C0
	clrlwi   r0, r4, 0x1f
	stb      r0, 0(r3)
	blr

lbl_803422C0:
	rlwinm.  r0, r4, 0, 0x18, 0x18
	beqlr
	ori      r0, r4, 0x40
	stb      r0, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803422D4
 * Size:	000028
 */
void SeqTrackBase::update()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r3, r3, 4
	stw      r0, 0x14(r1)
	bl       update__Q28PSSystem12TaskEntryMgrFv
	lwz      r0, 0x14(r1)
	li       r3, 0
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803422FC
 * Size:	000008
 */
void SeqTrackBase::init(JASTrack* a1)
{
	// Generated from stw r4, 0x28(r3)
	_28 = a1;
}

/*
 * --INFO--
 * Address:	80342304
 * Size:	000008
 */
void SeqTrackBase::getTaskEntryList()
{
	/*
	addi     r3, r3, 4
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034230C
 * Size:	0003A4
 */
SeqTrackRoot::SeqTrackRoot()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, __vt__Q28PSSystem12SeqTrackBase@ha
	stw      r0, 0x24(r1)
	addi     r0, r4, __vt__Q28PSSystem12SeqTrackBase@l
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	addi     r30, r31, 4
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	stw      r0, 0(r3)
	mr       r3, r30
	bl       initiate__10JSUPtrListFv
	addi     r3, r30, 0xc
	bl       OSInitMutex
	li       r4, 0
	lis      r3, __vt__Q28PSSystem12SeqTrackRoot@ha
	stw      r4, 0x24(r30)
	addi     r0, r3, __vt__Q28PSSystem12SeqTrackRoot@l
	addi     r29, r31, 0x40
	lfs      f0, lbl_8051E1D8@sda21(r2)
	stw      r0, 0(r31)
	li       r0, 0x3c
	mr       r30, r29
	mr       r3, r29
	stfs     f0, 0x34(r31)
	stw      r4, 0x38(r31)
	stb      r4, 0x3c(r31)
	sth      r0, 0x3e(r31)
	bl       initiate__10JSUPtrListFv
	addi     r3, r30, 0xc
	bl       OSInitMutex
	li       r0, 0
	mr       r4, r29
	stw      r0, 0x24(r29)
	addi     r3, r29, 0x28
	bl       __ct__10JSUPtrLinkFPv
	addi     r30, r29, 0x38
	mr       r3, r30
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r4, __vt__Q28PSSystem16ModParamWithFade@ha
	lis      r3, __vt__Q28PSSystem14OuterParamTask@ha
	addi     r0, r4, __vt__Q28PSSystem16ModParamWithFade@l
	addi     r28, r29, 0x6c
	stw      r0, 0(r30)
	li       r5, 0
	lfs      f0, lbl_8051E1DC@sda21(r2)
	addi     r4, r3, __vt__Q28PSSystem14OuterParamTask@l
	stw      r5, 0x1c(r30)
	li       r0, 0x40
	mr       r3, r28
	stfs     f0, 0x20(r30)
	stfs     f0, 0x24(r30)
	stw      r5, 0x28(r30)
	stfs     f0, 0x2c(r30)
	stw      r4, 0(r30)
	stw      r0, 0x30(r30)
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r3, __vt__Q28PSSystem12FlagWaitTask@ha
	addi     r29, r29, 0x8c
	addi     r3, r3, __vt__Q28PSSystem12FlagWaitTask@l
	li       r0, -16
	stw      r3, 0(r28)
	mr       r3, r29
	stw      r0, 0x1c(r28)
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r3, __vt__Q28PSSystem16ModParamWithFade@ha
	addi     r28, r31, 0x100
	addi     r0, r3, __vt__Q28PSSystem16ModParamWithFade@l
	li       r5, 0
	stw      r0, 0(r29)
	lis      r3, __vt__Q28PSSystem14OuterParamTask@ha
	addi     r4, r3, __vt__Q28PSSystem14OuterParamTask@l
	lfs      f0, lbl_8051E1DC@sda21(r2)
	stw      r5, 0x1c(r29)
	li       r0, 0x40
	mr       r30, r28
	mr       r3, r28
	stfs     f0, 0x20(r29)
	stfs     f0, 0x24(r29)
	stw      r5, 0x28(r29)
	stfs     f0, 0x2c(r29)
	stw      r4, 0(r29)
	stw      r0, 0x30(r29)
	bl       initiate__10JSUPtrListFv
	addi     r3, r28, 0xc
	bl       OSInitMutex
	li       r0, 0
	mr       r4, r30
	stw      r0, 0x24(r30)
	addi     r3, r30, 0x28
	bl       __ct__10JSUPtrLinkFPv
	addi     r28, r28, 0x38
	mr       r3, r28
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r3, __vt__Q28PSSystem16ModParamWithFade@ha
	addi     r29, r31, 0x16c
	addi     r0, r3, __vt__Q28PSSystem16ModParamWithFade@l
	li       r5, 0
	stw      r0, 0(r28)
	lis      r3, __vt__Q28PSSystem14OuterParamTask@ha
	addi     r4, r3, __vt__Q28PSSystem14OuterParamTask@l
	lfs      f0, lbl_8051E1DC@sda21(r2)
	stw      r5, 0x1c(r28)
	li       r0, 2
	mr       r30, r29
	mr       r3, r29
	stfs     f0, 0x20(r28)
	stfs     f0, 0x24(r28)
	stw      r5, 0x28(r28)
	stfs     f0, 0x2c(r28)
	stw      r4, 0(r28)
	stw      r0, 0x30(r28)
	bl       initiate__10JSUPtrListFv
	addi     r3, r29, 0xc
	bl       OSInitMutex
	li       r0, 0
	mr       r4, r30
	stw      r0, 0x24(r30)
	addi     r3, r30, 0x28
	bl       __ct__10JSUPtrLinkFPv
	addi     r28, r29, 0x38
	mr       r3, r28
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r3, __vt__Q28PSSystem21ModParamWithTableTask@ha
	lis      r4, __vt__Q28PSSystem20TriangleTableModTask@ha
	addi     r0, r3, __vt__Q28PSSystem21ModParamWithTableTask@l
	lis      r3, __vt__Q28PSSystem12PitchModTask@ha
	stw      r0, 0(r28)
	addi     r30, r29, 0x60
	lfs      f0, lbl_8051E1DC@sda21(r2)
	addi     r4, r4, __vt__Q28PSSystem20TriangleTableModTask@l
	addi     r0, r3, __vt__Q28PSSystem12PitchModTask@l
	mr       r3, r30
	stfs     f0, 0x1c(r28)
	stfs     f0, 0x20(r28)
	stfs     f0, 0x24(r28)
	stw      r4, 0(r28)
	stw      r0, 0(r28)
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r3, __vt__Q28PSSystem14SimpleWaitTask@ha
	addi     r28, r29, 0x84
	addi     r3, r3, __vt__Q28PSSystem14SimpleWaitTask@l
	li       r0, 0
	stw      r3, 0(r30)
	mr       r3, r28
	stw      r0, 0x1c(r30)
	stw      r0, 0x20(r30)
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r3, __vt__Q28PSSystem14PitchResetTask@ha
	addi     r29, r31, 0x20c
	addi     r0, r3, __vt__Q28PSSystem14PitchResetTask@l
	stw      r0, 0(r28)
	mr       r28, r29
	mr       r3, r29
	bl       initiate__10JSUPtrListFv
	addi     r3, r28, 0xc
	bl       OSInitMutex
	li       r0, 0
	mr       r4, r29
	stw      r0, 0x24(r29)
	addi     r3, r29, 0x28
	bl       __ct__10JSUPtrLinkFPv
	addi     r28, r29, 0x38
	mr       r3, r28
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r4, __vt__Q28PSSystem16ModParamWithFade@ha
	lis      r3, __vt__Q28PSSystem12BankRandTask@ha
	addi     r0, r4, __vt__Q28PSSystem16ModParamWithFade@l
	li       r4, 0
	stw      r0, 0(r28)
	addi     r0, r3, __vt__Q28PSSystem12BankRandTask@l
	lfs      f0, lbl_8051E1DC@sda21(r2)
	stw      r4, 0x1c(r28)
	stfs     f0, 0x20(r28)
	stfs     f0, 0x24(r28)
	stw      r4, 0x28(r28)
	stfs     f0, 0x2c(r28)
	stw      r0, 0(r28)
	lwz      r0, sInstance__Q28PSSystem11BankRandPrm@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80342604
	lis      r3, lbl_80490158@ha
	lis      r5, lbl_80490164@ha
	addi     r3, r3, lbl_80490158@l
	li       r4, 0x15f
	addi     r5, r5, lbl_80490164@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80342604:
	addi     r28, r29, 0x68
	mr       r3, r28
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r3, __vt__Q28PSSystem12FlagWaitTask@ha
	li       r0, -16
	addi     r3, r3, __vt__Q28PSSystem12FlagWaitTask@l
	addi     r29, r29, 0x88
	stw      r3, 0(r28)
	mr       r3, r29
	stw      r0, 0x1c(r28)
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r4, __vt__Q28PSSystem16ModParamWithFade@ha
	lis      r3, __vt__Q28PSSystem12BankRandTask@ha
	addi     r0, r4, __vt__Q28PSSystem16ModParamWithFade@l
	li       r4, 0
	stw      r0, 0(r29)
	addi     r0, r3, __vt__Q28PSSystem12BankRandTask@l
	lfs      f0, lbl_8051E1DC@sda21(r2)
	stw      r4, 0x1c(r29)
	stfs     f0, 0x20(r29)
	stfs     f0, 0x24(r29)
	stw      r4, 0x28(r29)
	stfs     f0, 0x2c(r29)
	stw      r0, 0(r29)
	lwz      r0, sInstance__Q28PSSystem11BankRandPrm@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8034268C
	lis      r3, lbl_80490158@ha
	lis      r5, lbl_80490164@ha
	addi     r3, r3, lbl_80490158@l
	li       r4, 0x15f
	addi     r5, r5, lbl_80490164@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8034268C:
	lwz      r0, 0x24(r1)
	mr       r3, r31
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
 * Address:	803426B0
 * Size:	000078
 */
void SeqTrackRoot::init(JASTrack*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bne      lbl_803426EC
	lis      r3, lbl_80490170@ha
	lis      r5, lbl_80490164@ha
	addi     r3, r3, lbl_80490170@l
	li       r4, 0xe5
	addi     r5, r5, lbl_80490164@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803426EC:
	stw      r31, 0x28(r30)
	li       r0, 0
	mr       r3, r30
	lhz      r4, 0x352(r31)
	sth      r4, 0x2c(r30)
	lhz      r4, 0x2c(r30)
	sth      r4, 0x2e(r30)
	stb      r0, 0x3c(r30)
	bl       initSwingRatio__Q28PSSystem12SeqTrackRootFv
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
 * Address:	80342728
 * Size:	00007C
 */
void SeqTrackRoot::initSwingRatio()
{
	/*
	stwu     r1, -0x30(r1)
	lis      r0, 0x4330
	lfd      f4, lbl_8051E1E8@sda21(r2)
	lhz      r4, 0x2c(r3)
	stw      r0, 8(r1)
	lfs      f2, lbl_8051E1E0@sda21(r2)
	stw      r4, 0xc(r1)
	lfs      f1, 0x34(r3)
	lfd      f0, 8(r1)
	fadds    f1, f2, f1
	stw      r0, 0x18(r1)
	fsubs    f3, f0, f4
	lfs      f0, lbl_8051E1E4@sda21(r2)
	fmuls    f1, f3, f1
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	sth      r0, 0x32(r3)
	lhz      r0, 0x32(r3)
	lfs      f0, 0x34(r3)
	stw      r0, 0x1c(r1)
	lfd      f1, 0x18(r1)
	fsubs    f1, f1, f4
	fdivs    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	sth      r0, 0x30(r3)
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	803427A4
 * Size:	000088
 */
void SeqTrackRoot::pitchModulation(float, float, unsigned long,
                                   PSSystem::DirectorBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x28(r1)
	  fmr       f31, f2
	  stfd      f30, 0x20(r1)
	  fmr       f30, f1
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  addi      r3, r29, 0x4
	  addi      r4, r29, 0x16C
	  bl        -0x434C
	  fmr       f1, f30
	  mr        r4, r30
	  fmr       f2, f31
	  addi      r3, r29, 0x16C
	  bl        -0x3C1C
	  mr        r5, r31
	  addi      r3, r29, 0x4
	  addi      r4, r29, 0x16C
	  bl        -0x4410
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x28(r1)
	  lfd       f30, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034282C
 * Size:	000078
 */
void SeqTrackRoot::tempoChange(float, unsigned long, PSSystem::DirectorBase*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	stw      r31, 0x14(r1)
	mr       r31, r5
	stw      r30, 0x10(r1)
	mr       r30, r4
	stw      r29, 0xc(r1)
	mr       r29, r3
	addi     r3, r29, 4
	addi     r4, r29, 0x40
	bl       removeEntry__Q28PSSystem12TaskEntryMgrFPQ28PSSystem9TaskEntry
	fmr      f1, f31
	mr       r4, r30
	addi     r3, r29, 0x40
	bl       makeEntry__Q28PSSystem15TaskEntry_TempoFfUl
	mr       r5, r31
	addi     r3, r29, 4
	addi     r4, r29, 0x40
	bl
	appendEntry__Q28PSSystem12TaskEntryMgrFPQ28PSSystem9TaskEntryPQ28PSSystem12DirectorBase
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	lwz      r31, 0x14(r1)
	lwz      r30, 0x10(r1)
	lwz      r29, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803428A4
 * Size:	000024
 */
void SeqTrackRoot::onStopSeq()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r3, r3, 4
	stw      r0, 0x14(r1)
	bl       removeAllEntry__Q28PSSystem12TaskEntryMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803428C8
 * Size:	00009C
 */
void SeqTrackRoot::beatUpdate()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lbz      r0, 0x3c(r3)
	clrlwi   r0, r0, 0x1f
	xori     r0, r0, 1
	clrlwi   r0, r0, 0x18
	ori      r0, r0, 0x80
	stb      r0, 0x3c(r3)
	lwz      r0, 0x38(r3)
	cmpwi    r0, 1
	bne      lbl_80342924
	lbz      r0, 0x3c(r31)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80342918
	lhz      r0, 0x30(r31)
	sth      r0, 0x2e(r31)
	b        lbl_8034292C

lbl_80342918:
	lhz      r0, 0x32(r31)
	sth      r0, 0x2e(r31)
	b        lbl_8034292C

lbl_80342924:
	lhz      r0, 0x2c(r31)
	sth      r0, 0x2e(r31)

lbl_8034292C:
	lwz      r3, 0x28(r31)
	lhz      r4, 0x2e(r31)
	bl       setTempo__8JASTrackFUs
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lhz      r3, 0x3e(r31)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80342964
 * Size:	0002EC
 */
SeqTrackChild::SeqTrackChild(const PSSystem::SeqTrackRoot&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, __vt__Q28PSSystem12SeqTrackBase@ha
	stw      r0, 0x24(r1)
	addi     r0, r4, __vt__Q28PSSystem12SeqTrackBase@l
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	addi     r29, r31, 4
	mr       r30, r29
	stw      r28, 0x10(r1)
	stw      r0, 0(r3)
	mr       r3, r29
	bl       initiate__10JSUPtrListFv
	addi     r3, r30, 0xc
	bl       OSInitMutex
	li       r0, 0
	lis      r3, __vt__Q28PSSystem13SeqTrackChild@ha
	stw      r0, 0x24(r29)
	addi     r0, r3, __vt__Q28PSSystem13SeqTrackChild@l
	addi     r30, r31, 0x2c
	stw      r0, 0(r31)
	mr       r29, r30
	mr       r3, r30
	bl       initiate__10JSUPtrListFv
	addi     r3, r29, 0xc
	bl       OSInitMutex
	li       r0, 0
	mr       r4, r30
	stw      r0, 0x24(r30)
	addi     r3, r30, 0x28
	bl       __ct__10JSUPtrLinkFPv
	addi     r29, r30, 0x38
	mr       r3, r29
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r3, __vt__Q28PSSystem8MuteTask@ha
	addi     r28, r30, 0x58
	addi     r3, r3, __vt__Q28PSSystem8MuteTask@l
	li       r0, 0
	stw      r3, 0(r29)
	mr       r3, r28
	stb      r0, 0x1c(r29)
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r4, __vt__Q28PSSystem16ModParamWithFade@ha
	lis      r3, __vt__Q28PSSystem14OuterParamTask@ha
	addi     r0, r4, __vt__Q28PSSystem16ModParamWithFade@l
	addi     r29, r30, 0x8c
	stw      r0, 0(r28)
	li       r5, 0
	lfs      f0, lbl_8051E1DC@sda21(r2)
	addi     r4, r3, __vt__Q28PSSystem14OuterParamTask@l
	stw      r5, 0x1c(r28)
	li       r0, 1
	mr       r3, r29
	stfs     f0, 0x20(r28)
	stfs     f0, 0x24(r28)
	stw      r5, 0x28(r28)
	stfs     f0, 0x2c(r28)
	stw      r4, 0(r28)
	stw      r0, 0x30(r28)
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r3, __vt__Q28PSSystem12FlagWaitTask@ha
	addi     r28, r30, 0xac
	addi     r3, r3, __vt__Q28PSSystem12FlagWaitTask@l
	li       r0, -16
	stw      r3, 0(r29)
	mr       r3, r28
	stw      r0, 0x1c(r29)
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r4, __vt__Q28PSSystem16ModParamWithFade@ha
	lis      r3, __vt__Q28PSSystem14OuterParamTask@ha
	addi     r0, r4, __vt__Q28PSSystem16ModParamWithFade@l
	addi     r29, r30, 0xe0
	stw      r0, 0(r28)
	li       r5, 0
	lfs      f0, lbl_8051E1DC@sda21(r2)
	addi     r4, r3, __vt__Q28PSSystem14OuterParamTask@l
	stw      r5, 0x1c(r28)
	li       r0, 1
	mr       r3, r29
	stfs     f0, 0x20(r28)
	stfs     f0, 0x24(r28)
	stw      r5, 0x28(r28)
	stfs     f0, 0x2c(r28)
	stw      r4, 0(r28)
	stw      r0, 0x30(r28)
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r3, __vt__Q28PSSystem8MuteTask@ha
	addi     r28, r31, 0x12c
	addi     r3, r3, __vt__Q28PSSystem8MuteTask@l
	li       r0, 0
	stw      r3, 0(r29)
	mr       r30, r28
	mr       r3, r28
	stb      r0, 0x1c(r29)
	bl       initiate__10JSUPtrListFv
	addi     r3, r28, 0xc
	bl       OSInitMutex
	li       r0, 0
	mr       r4, r30
	stw      r0, 0x24(r30)
	addi     r3, r30, 0x28
	bl       __ct__10JSUPtrLinkFPv
	addi     r29, r28, 0x38
	mr       r3, r29
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r4, __vt__Q28PSSystem16ModParamWithFade@ha
	lis      r3, __vt__Q28PSSystem14OuterParamTask@ha
	addi     r0, r4, __vt__Q28PSSystem16ModParamWithFade@l
	addi     r28, r28, 0x6c
	stw      r0, 0(r29)
	li       r5, 0
	lfs      f0, lbl_8051E1DC@sda21(r2)
	addi     r4, r3, __vt__Q28PSSystem14OuterParamTask@l
	stw      r5, 0x1c(r29)
	li       r0, 1
	mr       r3, r28
	stfs     f0, 0x20(r29)
	stfs     f0, 0x24(r29)
	stw      r5, 0x28(r29)
	stfs     f0, 0x2c(r29)
	stw      r4, 0(r29)
	stw      r0, 0x30(r29)
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r3, __vt__Q28PSSystem8MuteTask@ha
	addi     r29, r31, 0x1b8
	addi     r3, r3, __vt__Q28PSSystem8MuteTask@l
	li       r0, 0
	stw      r3, 0(r28)
	mr       r30, r29
	mr       r3, r29
	stb      r0, 0x1c(r28)
	bl       initiate__10JSUPtrListFv
	addi     r3, r29, 0xc
	bl       OSInitMutex
	li       r0, 0
	mr       r4, r30
	stw      r0, 0x24(r30)
	addi     r3, r30, 0x28
	bl       __ct__10JSUPtrLinkFPv
	addi     r28, r29, 0x38
	mr       r3, r28
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r3, __vt__Q28PSSystem16ModParamWithFade@ha
	addi     r29, r31, 0x224
	addi     r0, r3, __vt__Q28PSSystem16ModParamWithFade@l
	li       r5, 0
	stw      r0, 0(r28)
	lis      r3, __vt__Q28PSSystem14OuterParamTask@ha
	addi     r4, r3, __vt__Q28PSSystem14OuterParamTask@l
	lfs      f0, lbl_8051E1DC@sda21(r2)
	stw      r5, 0x1c(r28)
	li       r0, 1
	mr       r30, r29
	mr       r3, r29
	stfs     f0, 0x20(r28)
	stfs     f0, 0x24(r28)
	stw      r5, 0x28(r28)
	stfs     f0, 0x2c(r28)
	stw      r4, 0(r28)
	stw      r0, 0x30(r28)
	bl       initiate__10JSUPtrListFv
	addi     r3, r29, 0xc
	bl       OSInitMutex
	li       r0, 0
	mr       r4, r30
	stw      r0, 0x24(r30)
	addi     r3, r30, 0x28
	bl       __ct__10JSUPtrLinkFPv
	addi     r28, r29, 0x38
	mr       r3, r28
	bl       __ct__Q28PSSystem8TaskBaseFv
	lis      r3, __vt__Q28PSSystem10IdMaskTask@ha
	li       r0, 0
	addi     r4, r3, __vt__Q28PSSystem10IdMaskTask@l
	mr       r3, r31
	stw      r4, 0(r28)
	stb      r0, 0x1c(r28)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80342C50
 * Size:	000084
 */
void SeqTrackChild::muteOffAndFadeIn(float, unsigned long,
                                     PSSystem::DirectorBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x18(r1)
	  fmr       f31, f1
	  stw       r31, 0x14(r1)
	  mr        r31, r5
	  stw       r30, 0x10(r1)
	  mr        r30, r4
	  stw       r29, 0xC(r1)
	  mr        r29, r3
	  addi      r3, r29, 0x4
	  addi      r4, r29, 0x2C
	  bl        -0x47F0
	  addi      r3, r29, 0x4
	  addi      r4, r29, 0x12C
	  bl        -0x47FC
	  fmr       f1, f31
	  mr        r4, r30
	  addi      r3, r29, 0x2C
	  bl        -0x3FB8
	  mr        r5, r31
	  addi      r3, r29, 0x4
	  addi      r4, r29, 0x2C
	  bl        -0x48BC
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x18(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  lwz       r29, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80342CD4
 * Size:	000074
 */
void SeqTrackChild::fadeoutAndMute(unsigned long, PSSystem::DirectorBase*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	addi     r3, r29, 4
	addi     r4, r29, 0x2c
	bl       removeEntry__Q28PSSystem12TaskEntryMgrFPQ28PSSystem9TaskEntry
	addi     r3, r29, 4
	addi     r4, r29, 0x12c
	bl       removeEntry__Q28PSSystem12TaskEntryMgrFPQ28PSSystem9TaskEntry
	mr       r4, r30
	addi     r3, r29, 0x12c
	bl       makeEntry__Q28PSSystem22TaskEntry_MuteOnVolumeFUl
	mr       r5, r31
	addi     r3, r29, 4
	addi     r4, r29, 0x12c
	bl
	appendEntry__Q28PSSystem12TaskEntryMgrFPQ28PSSystem9TaskEntryPQ28PSSystem12DirectorBase
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
 * Address:	80342D48
 * Size:	000078
 */
void SeqTrackChild::fade(float, unsigned long, PSSystem::DirectorBase*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	stw      r31, 0x14(r1)
	mr       r31, r5
	stw      r30, 0x10(r1)
	mr       r30, r4
	stw      r29, 0xc(r1)
	mr       r29, r3
	addi     r3, r29, 4
	addi     r4, r29, 0x1b8
	bl       removeEntry__Q28PSSystem12TaskEntryMgrFPQ28PSSystem9TaskEntry
	fmr      f1, f31
	mr       r4, r30
	addi     r3, r29, 0x1b8
	bl       makeEntry__Q28PSSystem20TaskEntry_OuterParamFfUl
	mr       r5, r31
	addi     r3, r29, 4
	addi     r4, r29, 0x1b8
	bl
	appendEntry__Q28PSSystem12TaskEntryMgrFPQ28PSSystem9TaskEntryPQ28PSSystem12DirectorBase
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	lwz      r31, 0x14(r1)
	lwz      r30, 0x10(r1)
	lwz      r29, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80342DC0
 * Size:	000068
 */
void SeqTrackChild::setIdMask(unsigned char, PSSystem::DirectorBase*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	addi     r3, r29, 4
	addi     r4, r29, 0x224
	bl       removeEntry__Q28PSSystem12TaskEntryMgrFPQ28PSSystem9TaskEntry
	mr       r4, r30
	addi     r3, r29, 0x224
	bl       makeEntry__Q28PSSystem16TaskEntry_IdMaskFUc
	mr       r5, r31
	addi     r3, r29, 4
	addi     r4, r29, 0x224
	bl
	appendEntry__Q28PSSystem12TaskEntryMgrFPQ28PSSystem9TaskEntryPQ28PSSystem12DirectorBase
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
 * Address:	80342E28
 * Size:	000024
 */
void SeqTrackChild::onStopSeq()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r3, r3, 4
	stw      r0, 0x14(r1)
	bl       removeAllEntry__Q28PSSystem12TaskEntryMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80342E4C
 * Size:	000030
 */
void IdMaskTask::task(JASTrack&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	mr       r0, r4
	lbz      r4, 0x1c(r3)
	mr       r3, r0
	bl       setNoteMask__8JASTrackFUc
	lwz      r0, 0x14(r1)
	li       r3, -1
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80342E7C
 * Size:	000038
 */
void MuteTask::task(JASTrack&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lbz      r5, 0x1c(r3)
	mr       r3, r4
	neg      r0, r5
	or       r0, r0, r5
	srwi     r4, r0, 0x1f
	bl       muteTrack__8JASTrackFb
	lwz      r0, 0x14(r1)
	li       r3, -1
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
} // namespace PSSystem
