#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global sTable__Q28PSSystem20TriangleTableModTask
    sTable__Q28PSSystem20TriangleTableModTask:
        .4byte 0x00000000
        .float 0.1
        .4byte 0x3E4CCCCD
        .float 0.3
        .4byte 0x3ECCCCCD
        .float 0.5
        .4byte 0x3F19999A
        .float 0.7
        .4byte 0x3F4CCCCD
        .4byte 0x3F666666
        .float 1.0
        .4byte 0x3F666666
        .4byte 0x3F4CCCCD
        .float 0.7
        .4byte 0x3F19999A
        .float 0.5
        .4byte 0x3ECCCCCD
        .float 0.3
        .4byte 0x3E4CCCCD
        .float 0.1
        .4byte 0x00000000
        .4byte 0xBDCCCCCD
        .4byte 0xBE4CCCCD
        .4byte 0xBE99999A
        .4byte 0xBECCCCCD
        .4byte 0xBF000000
        .4byte 0xBF19999A
        .4byte 0xBF333333
        .4byte 0xBF4CCCCD
        .4byte 0xBF666666
        .4byte 0xBF800000
        .4byte 0xBF666666
        .4byte 0xBF4CCCCD
        .4byte 0xBF333333
        .4byte 0xBF19999A
        .4byte 0xBF000000
        .4byte 0xBECCCCCD
        .4byte 0xBE99999A
        .4byte 0xBE4CCCCD
        .4byte 0xBDCCCCCD
    .global lbl_8048FFF0
    lbl_8048FFF0:
        .4byte 0x50534267
        .4byte 0x6D546173
        .4byte 0x6B2E6370
        .4byte 0x70000000
    .global lbl_80490000
    lbl_80490000:
        .4byte 0x50324173
        .4byte 0x73657274
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q28PSSystem14SimpleWaitTask
    __vt__Q28PSSystem14SimpleWaitTask:
        .4byte 0
        .4byte 0
        .4byte task__Q28PSSystem14SimpleWaitTaskFR8JASTrack
    .global __vt__Q28PSSystem14OuterParamTask
    __vt__Q28PSSystem14OuterParamTask:
        .4byte 0
        .4byte 0
        .4byte task__Q28PSSystem16ModParamWithFadeFR8JASTrack
        .4byte getPreParam__Q28PSSystem14OuterParamTaskFR8JASTrack
        .4byte timeTask__Q28PSSystem14OuterParamTaskFR8JASTrackf
    .global __vt__Q28PSSystem12PitchModTask
    __vt__Q28PSSystem12PitchModTask:
        .4byte 0
        .4byte 0
        .4byte task__Q28PSSystem21ModParamWithTableTaskFR8JASTrack
        .4byte getTgtWithTable__Q28PSSystem20TriangleTableModTaskFUc
        .4byte getTableIdxNum__Q28PSSystem20TriangleTableModTaskFv
        .4byte tableTask__Q28PSSystem12PitchModTaskFR8JASTrackf
    .global __vt__Q28PSSystem21ModParamWithTableTask
    __vt__Q28PSSystem21ModParamWithTableTask:
        .4byte 0
        .4byte 0
        .4byte task__Q28PSSystem21ModParamWithTableTaskFR8JASTrack
        .4byte 0
        .4byte 0
        .4byte 0
    .global __vt__Q28PSSystem16ModParamWithFade
    __vt__Q28PSSystem16ModParamWithFade:
        .4byte 0
        .4byte 0
        .4byte task__Q28PSSystem16ModParamWithFadeFR8JASTrack
        .4byte 0
        .4byte 0
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global sInstance__Q28PSSystem11BankRandPrm
    sInstance__Q28PSSystem11BankRandPrm:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051E178
    lbl_8051E178:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_8051E180
    lbl_8051E180:
        .4byte 0x00000000
    .global lbl_8051E184
    lbl_8051E184:
        .float 1.0
*/

namespace PSSystem {

/*
 * --INFO--
 * Address:	8033E6B4
 * Size:	000124
 */
void ModParamWithFade::task(JASTrack&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r0, 0x28(r3)
	cmplwi   r0, 0
	bne      lbl_8033E750
	lwz      r0, 0x1c(r30)
	cmplwi   r0, 0
	beq      lbl_8033E734
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x1c(r30)
	lis      r0, 0x4330
	lfs      f0, 0x20(r30)
	stw      r3, 0xc(r1)
	lfd      f2, lbl_8051E178@sda21(r2)
	fsubs    f3, f0, f1
	stw      r0, 8(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f2
	fdivs    f0, f3, f0
	stfs     f0, 0x24(r30)
	lfs      f0, 0x24(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x2c(r30)
	b        lbl_8033E750

lbl_8033E734:
	lwz      r12, 0(r3)
	lfs      f1, 0x20(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	li       r3, -1
	b        lbl_8033E7C0

lbl_8033E750:
	lwz      r3, 0x28(r30)
	lwz      r0, 0x1c(r30)
	cmplw    r3, r0
	bge      lbl_8033E7A0
	lfs      f1, 0x2c(r30)
	mr       r3, r30
	lfs      f0, 0x24(r30)
	mr       r4, r31
	fadds    f0, f1, f0
	stfs     f0, 0x2c(r30)
	lwz      r12, 0(r30)
	lfs      f1, 0x2c(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x28(r30)
	li       r3, 0
	addi     r0, r4, 1
	stw      r0, 0x28(r30)
	b        lbl_8033E7C0

lbl_8033E7A0:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lfs      f1, 0x20(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	li       r3, -1

lbl_8033E7C0:
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
 * Address:	8033E7D8
 * Size:	0000F4
 */
void ModParamWithTableTask::task(JASTrack&)
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
	lfs      f1, 0x24(r3)
	lfs      f0, 0x20(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x24(r3)
	lfs      f0, 0x24(r3)
	lwz      r12, 0(r3)
	fctiwz   f0, f0
	lwz      r12, 0x10(r12)
	stfd     f0, 8(r1)
	lwz      r31, 0xc(r1)
	mtctr    r12
	bctrl
	clrlwi   r3, r3, 0x18
	clrlwi   r0, r31, 0x18
	cmplw    r0, r3
	blt      lbl_8033E874
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi   r3, r3, 0x18
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f2, lbl_8051E178@sda21(r2)
	stw      r0, 8(r1)
	lfs      f0, 0x24(r29)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fsubs    f0, f0, f1
	stfs     f0, 0x24(r29)

lbl_8033E874:
	lfs      f0, 0x24(r29)
	mr       r3, r29
	lwz      r12, 0(r29)
	fctiwz   f0, f0
	lwz      r12, 0xc(r12)
	stfd     f0, 8(r1)
	lwz      r4, 0xc(r1)
	mtctr    r12
	bctrl
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
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
 * Address:	8033E8CC
 * Size:	000030
 */
void PitchModTask::tableTask(JASTrack&, float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	li       r4, 1
	stw      r0, 0x14(r1)
	li       r5, -1
	bl       setParam__8JASTrackFifi
	lwz      r0, 0x14(r1)
	li       r3, -16
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033E8FC
 * Size:	0000D4
 */
void OuterParamTask::getPreParam(JASTrack&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x30(r3)
	cmpwi    r0, 8
	beq      lbl_8033E988
	bge      lbl_8033E940
	cmpwi    r0, 3
	beq      lbl_8033E9A0
	bge      lbl_8033E934
	cmpwi    r0, 1
	beq      lbl_8033E958
	bge      lbl_8033E964
	b        lbl_8033E9A0

lbl_8033E934:
	cmpwi    r0, 5
	bge      lbl_8033E9A0
	b        lbl_8033E970

lbl_8033E940:
	cmpwi    r0, 0x40
	beq      lbl_8033E994
	bge      lbl_8033E9A0
	cmpwi    r0, 0x10
	beq      lbl_8033E97C
	b        lbl_8033E9A0

lbl_8033E958:
	lwz      r3, 0x33c(r4)
	lfs      f1, 4(r3)
	b        lbl_8033E9C0

lbl_8033E964:
	lwz      r3, 0x33c(r4)
	lfs      f1, 8(r3)
	b        lbl_8033E9C0

lbl_8033E970:
	lwz      r3, 0x33c(r4)
	lfs      f1, 0xc(r3)
	b        lbl_8033E9C0

lbl_8033E97C:
	lwz      r3, 0x33c(r4)
	lfs      f1, 0x10(r3)
	b        lbl_8033E9C0

lbl_8033E988:
	lwz      r3, 0x33c(r4)
	lfs      f1, 0x14(r3)
	b        lbl_8033E9C0

lbl_8033E994:
	lwz      r3, 0x33c(r4)
	lfs      f1, 0x18(r3)
	b        lbl_8033E9C0

lbl_8033E9A0:
	lis      r3, lbl_8048FFF0@ha
	lis      r5, lbl_80490000@ha
	addi     r3, r3, lbl_8048FFF0@l
	li       r4, 0x87
	addi     r5, r5, lbl_80490000@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	lfs      f1, lbl_8051E180@sda21(r2)

lbl_8033E9C0:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033E9D0
 * Size:	000098
 */
void OuterParamTask::timeTask(JASTrack&, float)
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
	fmr      f31, f1
	lwz      r0, 0x30(r3)
	mr       r31, r4
	cmpwi    r0, 2
	beq      lbl_8033EA28
	lfs      f0, lbl_8051E180@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8033EA18
	fmr      f31, f0
	b        lbl_8033EA28

lbl_8033EA18:
	lfs      f0, lbl_8051E184@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_8033EA28
	fmr      f31, f0

lbl_8033EA28:
	lwz      r3, 0x33c(r31)
	clrlwi   r4, r0, 0x10
	bl       onSwitch__13JASOuterParamFUs
	lwz      r0, 0x30(r30)
	fmr      f1, f31
	lwz      r3, 0x33c(r31)
	clrlwi   r4, r0, 0x18
	bl       setParam__13JASOuterParamFUcf
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
 * Address:	8033EA68
 * Size:	000028
 */
void SimpleWaitTask::task(JASTrack&)
{
	/*
	lwz      r4, 0x1c(r3)
	lwz      r0, 0x20(r3)
	cmplw    r4, r0
	blt      lbl_8033EA80
	li       r3, -1
	blr

lbl_8033EA80:
	addi     r0, r4, 1
	stw      r0, 0x1c(r3)
	li       r3, -16
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033EA90
 * Size:	000074
 */
BankRandPrm::BankRandPrm()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r6, __vt__13JASInstEffect@ha
	li       r5, 0
	stw      r0, 0x14(r1)
	lis      r4, __vt__11JASInstRand@ha
	addi     r0, r4, __vt__11JASInstRand@l
	addi     r6, r6, __vt__13JASInstEffect@l
	stw      r31, 0xc(r1)
	mr       r31, r3
	lfs      f1, lbl_8051E184@sda21(r2)
	li       r4, 1
	stw      r6, 0(r3)
	lfs      f0, lbl_8051E180@sda21(r2)
	stb      r5, 4(r3)
	stw      r0, 0(r3)
	stfs     f1, 8(r3)
	stfs     f0, 0xc(r3)
	bl       setTarget__13JASInstEffectFi
	lfs      f1, lbl_8051E184@sda21(r2)
	mr       r3, r31
	lfs      f0, lbl_8051E180@sda21(r2)
	stfs     f1, 8(r31)
	stfs     f0, 0xc(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033EB04
 * Size:	000080
 */
void TaskEntry_OuterParam::makeEntry(float, unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	fmr      f31, f1
	mr       r30, r3
	mr       r31, r4
	bl       OSDisableInterrupts
	stfs     f31, 0x58(r30)
	li       r3, 1
	li       r0, 0
	lfs      f0, lbl_8051E180@sda21(r2)
	stw      r31, 0x54(r30)
	stb      r3, 0x4c(r30)
	stw      r0, 0x60(r30)
	stfs     f0, 0x64(r30)
	stfs     f0, 0x5c(r30)
	bl       OSEnableInterrupts
	mr       r3, r30
	addi     r4, r30, 0x38
	bl       append__Q28PSSystem9TaskEntryFPQ28PSSystem8TaskBase
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
 * Address:	8033EB84
 * Size:	000054
 */
void TaskEntry_IdMask::makeEntry(unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       OSDisableInterrupts
	stb      r31, 0x54(r30)
	li       r0, 1
	stb      r0, 0x4c(r30)
	bl       OSEnableInterrupts
	mr       r3, r30
	addi     r4, r30, 0x38
	bl       append__Q28PSSystem9TaskEntryFPQ28PSSystem8TaskBase
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
 * Address:	8033EBD8
 * Size:	000110
 */
void TaskEntry_PitMod::makeEntry(float, float, unsigned long)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stfd     f30, 0x10(r1)
	psq_st   f30, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	or.      r31, r4, r4
	fmr      f30, f1
	fmr      f31, f2
	mr       r30, r3
	beq      lbl_8033EC78
	bl       OSDisableInterrupts
	li       r3, 0
	li       r0, 1
	stw      r3, 0x7c(r30)
	stw      r31, 0x80(r30)
	stb      r0, 0x74(r30)
	bl       OSEnableInterrupts
	li       r0, 1
	mr       r3, r30
	stb      r0, 0x75(r30)
	addi     r4, r30, 0x60
	bl       append__Q28PSSystem9TaskEntryFPQ28PSSystem8TaskBase
	bl       OSDisableInterrupts
	stfs     f30, 0x54(r30)
	li       r0, 1
	lfs      f0, lbl_8051E180@sda21(r2)
	stfs     f31, 0x58(r30)
	stb      r0, 0x4c(r30)
	stfs     f0, 0x5c(r30)
	bl       OSEnableInterrupts
	addi     r0, r30, 0x64
	mr       r3, r30
	stw      r0, 0x50(r30)
	addi     r4, r30, 0x38
	bl       append__Q28PSSystem9TaskEntryFPQ28PSSystem8TaskBase
	b        lbl_8033ECA4

lbl_8033EC78:
	bl       OSDisableInterrupts
	stfs     f30, 0x54(r30)
	li       r0, 1
	lfs      f0, lbl_8051E180@sda21(r2)
	stfs     f31, 0x58(r30)
	stb      r0, 0x4c(r30)
	stfs     f0, 0x5c(r30)
	bl       OSEnableInterrupts
	mr       r3, r30
	addi     r4, r30, 0x38
	bl       append__Q28PSSystem9TaskEntryFPQ28PSSystem8TaskBase

lbl_8033ECA4:
	bl       OSDisableInterrupts
	li       r0, 1
	stb      r0, 0x98(r30)
	bl       OSEnableInterrupts
	mr       r3, r30
	addi     r4, r30, 0x84
	bl       append__Q28PSSystem9TaskEntryFPQ28PSSystem8TaskBase
	psq_l    f31, 40(r1), 0, qr0
	lfd      f31, 0x20(r1)
	psq_l    f30, 24(r1), 0, qr0
	lfd      f30, 0x10(r1)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x34(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033ECE8
 * Size:	0000A4
 */
void TaskEntry_MuteVolume::makeEntry(float, unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	fmr      f31, f1
	mr       r30, r3
	mr       r31, r4
	bl       OSDisableInterrupts
	li       r3, 0
	li       r0, 1
	stb      r3, 0x54(r30)
	stb      r0, 0x4c(r30)
	bl       OSEnableInterrupts
	mr       r3, r30
	addi     r4, r30, 0x38
	bl       append__Q28PSSystem9TaskEntryFPQ28PSSystem8TaskBase
	bl       OSDisableInterrupts
	stfs     f31, 0x78(r30)
	li       r3, 1
	li       r0, 0
	lfs      f0, lbl_8051E180@sda21(r2)
	stw      r31, 0x74(r30)
	stb      r3, 0x6c(r30)
	stw      r0, 0x80(r30)
	stfs     f0, 0x84(r30)
	stfs     f0, 0x7c(r30)
	bl       OSEnableInterrupts
	mr       r3, r30
	addi     r4, r30, 0x58
	bl       append__Q28PSSystem9TaskEntryFPQ28PSSystem8TaskBase
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
 * Address:	8033ED8C
 * Size:	00008C
 */
void TaskEntry_MuteOnVolume::makeEntry(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       OSDisableInterrupts
	lfs      f0, lbl_8051E180@sda21(r2)
	li       r3, 1
	li       r0, 0
	stfs     f0, 0x58(r30)
	stw      r31, 0x54(r30)
	stb      r3, 0x4c(r30)
	stw      r0, 0x60(r30)
	stfs     f0, 0x64(r30)
	stfs     f0, 0x5c(r30)
	bl       OSEnableInterrupts
	mr       r3, r30
	addi     r4, r30, 0x38
	bl       append__Q28PSSystem9TaskEntryFPQ28PSSystem8TaskBase
	bl       OSDisableInterrupts
	li       r0, 1
	stb      r0, 0x88(r30)
	stb      r0, 0x80(r30)
	bl       OSEnableInterrupts
	mr       r3, r30
	addi     r4, r30, 0x6c
	bl       append__Q28PSSystem9TaskEntryFPQ28PSSystem8TaskBase
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
 * Address:	8033EE18
 * Size:	000080
 */
void TaskEntry_Tempo::makeEntry(float, unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	fmr      f31, f1
	mr       r30, r3
	mr       r31, r4
	bl       OSDisableInterrupts
	stfs     f31, 0x58(r30)
	li       r3, 1
	li       r0, 0
	lfs      f0, lbl_8051E180@sda21(r2)
	stw      r31, 0x54(r30)
	stb      r3, 0x4c(r30)
	stw      r0, 0x60(r30)
	stfs     f0, 0x64(r30)
	stfs     f0, 0x5c(r30)
	bl       OSEnableInterrupts
	mr       r3, r30
	addi     r4, r30, 0x38
	bl       append__Q28PSSystem9TaskEntryFPQ28PSSystem8TaskBase
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
} // namespace PSSystem
