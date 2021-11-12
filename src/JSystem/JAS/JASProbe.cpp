#include "types.h"

/*
    Generated from dpostproc

    .section .sbss # 0x80514D80 - 0x80516360
    .global sProbes
    sProbes:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516E68
    lbl_80516E68:
        .4byte 0x426FC28F
    .global lbl_80516E6C
    lbl_80516E6C:
        .4byte 0x3F75C28F
    .global lbl_80516E70
    lbl_80516E70:
        .float 0.04
        .4byte 0x00000000
    .global lbl_80516E78
    lbl_80516E78:
        .4byte 0x43300000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	........
 * Size:	000130
 */
JASProbe::JASProbe()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000150
 */
void JASProbe::reset()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void JASProbe::start(char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00012C
 */
void JASProbe::stop()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void JASKernel::initProbe(long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000190
 */
void JASKernel::resetProbe()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A74D4
 * Size:	000060
 */
void JASKernel::probeStart(long, char*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	lwz      r5, sProbes@sda21(r13)
	cmplwi   r5, 0
	beq      lbl_800A751C
	mulli    r0, r3, 0x1ac
	add      r30, r5, r0
	bl       OSDisableInterrupts
	stw      r31, 0(r30)
	mr       r31, r3
	bl       OSGetTime
	stw      r4, 4(r30)
	mr       r3, r31
	bl       OSRestoreInterrupts

lbl_800A751C:
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
 * Address:	800A7534
 * Size:	00013C
 */
void JASKernel::probeFinish(long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	lwz      r4, sProbes@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_800A7658
	mulli    r0, r3, 0x1ac
	add      r31, r4, r0
	bl       OSDisableInterrupts
	mr       r30, r3
	bl       OSGetTime
	lwz      r5, 4(r31)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	lis      r3, 0x800000F8@ha
	subf     r4, r5, r4
	lfd      f3, lbl_80516E78@sda21(r2)
	stw      r4, 0xc(r1)
	lfs      f0, lbl_80516E68@sda21(r2)
	lfd      f1, 8(r1)
	stw      r0, 0x10(r1)
	fsubs    f1, f1, f3
	stfs     f1, 8(r31)
	lwz      r0, 0x800000F8@l(r3)
	lfs      f2, 8(r31)
	srwi     r0, r0, 2
	stw      r0, 0x14(r1)
	lfd      f1, 0x10(r1)
	fsubs    f1, f1, f3
	fdivs    f0, f1, f0
	fdivs    f0, f2, f0
	stfs     f0, 8(r31)
	lfs      f0, 0x10(r31)
	lfs      f1, 8(r31)
	fcmpo    cr0, f0, f1
	bge      lbl_800A75DC
	lwz      r0, 0x1a8(r31)
	cmplwi   r0, 0x64
	ble      lbl_800A75DC
	stfs     f1, 0x10(r31)

lbl_800A75DC:
	lfs      f1, lbl_80516E70@sda21(r2)
	lis      r3, 0x51EB851F@ha
	lfs      f0, 8(r31)
	addi     r0, r3, 0x51EB851F@l
	lfs      f2, lbl_80516E6C@sda21(r2)
	mr       r3, r30
	fmuls    f0, f1, f0
	lfs      f1, 0xc(r31)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0xc(r31)
	lwz      r4, 0x1a8(r31)
	lfs      f1, 0x14(r31)
	mulhwu   r0, r0, r4
	srwi     r0, r0, 5
	mulli    r0, r0, 0x64
	subf     r0, r0, r4
	slwi     r0, r0, 2
	add      r4, r31, r0
	lfs      f0, 0x18(r4)
	fsubs    f0, f1, f0
	stfs     f0, 0x14(r31)
	lfs      f0, 8(r31)
	stfs     f0, 0x18(r4)
	lfs      f1, 0x14(r31)
	lfs      f0, 8(r31)
	fadds    f0, f1, f0
	stfs     f0, 0x14(r31)
	lwz      r4, 0x1a8(r31)
	addi     r0, r4, 1
	stw      r0, 0x1a8(r31)
	bl       OSRestoreInterrupts

lbl_800A7658:
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
 * Address:	........
 * Size:	000010
 */
void JASKernel::getProbeName(long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void JASKernel::getProbeLast(long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void JASKernel::getProbeAvg(long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void JASKernel::getProbeTotalAvg(long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void JASKernel::getProbeMax(long)
{
	// UNUSED FUNCTION
}
