#include "JSystem/JAS/JASCalc.h"
#include "JSystem/JAS/JASDriver.h"
#include "JSystem/JAS/JASKernel.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global sMixFuncs__9JASDriver
    sMixFuncs__9JASDriver:
        .4byte mixMonoTrack__9JASDriverFPsUlPFl_Ps
        .4byte mixMonoTrackWide__9JASDriverFPsUlPFl_Ps
        .4byte mixExtraTrack__9JASDriverFPsUlPFl_Ps
        .4byte mixInterleaveTrack__9JASDriverFPsUlPFl_Ps
    .global lbl_804795F8
    lbl_804795F8:
        .4byte 0x5346522D
        .4byte 0x55504441
        .4byte 0x54450000
    .global lbl_80479604
    lbl_80479604:
        .4byte 0x6B696C6C
        .4byte 0x20445350
        .4byte 0x20636861
        .4byte 0x6E6E656C
        .4byte 0x00000000
        .4byte 0x4453502D
        .4byte 0x4D41494E
        .4byte 0x00000000
    .global lbl_80479624
    lbl_80479624:
        .4byte 0x4D4F4E4F
        .4byte 0x2D4D4958
        .4byte 0x00000000
    .global lbl_80479630
    lbl_80479630:
        .4byte 0x4D4F4E4F
        .4byte 0x2857292D
        .4byte 0x4D495800
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global history$449
    history$449:
        .4byte 0x000F4240
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global sDspDacBufferCount__9JASDriver
    sDspDacBufferCount__9JASDriver:
        .4byte 0x03000000
    .global sSubFrames__9JASDriver
    sSubFrames__9JASDriver:
        .4byte 0x00000007
    .global sMixMode__9JASDriver
    sMixMode__9JASDriver:
        .4byte 0x00000002
    .global sDacRate__9JASDriver
    sDacRate__9JASDriver:
        .float 32028.5

    .section .sbss # 0x80514D80 - 0x80516360
    .global sDspDacBuffer__9JASDriver
    sDspDacBuffer__9JASDriver:
        .skip 0x4
    .global sDspDacWriteBuffer__9JASDriver
    sDspDacWriteBuffer__9JASDriver:
        .skip 0x4
    .global sDspDacReadBuffer__9JASDriver
    sDspDacReadBuffer__9JASDriver:
        .skip 0x4
    .global sDspStatus__9JASDriver
    sDspStatus__9JASDriver:
        .skip 0x4
    .global sDspDacCallback__9JASDriver
    sDspDacCallback__9JASDriver:
        .skip 0x4
    .global lastRspMadep__9JASDriver
    lastRspMadep__9JASDriver:
        .skip 0x4
    .global dacCallbackFunc__9JASDriver
    dacCallbackFunc__9JASDriver:
        .skip 0x4
    .global extMixCallback__9JASDriver
    extMixCallback__9JASDriver:
        .skip 0x4
    .global sOutputRate__9JASDriver
    sOutputRate__9JASDriver:
        .skip 0x4
    .global dacp$428
    dacp$428:
        .skip 0x4
    .global init$429
    init$429:
        .skip 0x4
    .global old_time$446
    old_time$446:
        .skip 0x4
    .global init$447
    init$447:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516E80
    lbl_80516E80:
        .4byte 0x3F8CCCCD
        .4byte 0x00000000
    .global lbl_80516E88
    lbl_80516E88:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_80516E90
    lbl_80516E90:
        .4byte 0x4453504D
        .4byte 0x49580000
    .global lbl_80516E98
    lbl_80516E98:
        .4byte 0x4D495849
        .4byte 0x4E470000
*/

/*
 * --INFO--
 * Address:	800A7968
 * Size:	00013C
 */
void JASDriver::initAI(void (*)())
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r31, r3
	bl       getDacSize__9JASDriverFv
	lis      r4, sDmaDacBuffer__9JASDriver@ha
	slwi     r28, r3, 1
	addi     r30, r4, sDmaDacBuffer__9JASDriver@l
	li       r27, 0
	mr       r29, r28

lbl_800A7994:
	lwz      r4, JASDram@sda21(r13)
	mr       r3, r29
	li       r5, 0x20
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, 0(r30)
	mr       r4, r28
	lwz      r3, 0(r30)
	bl       bzero__7JASCalcFPvUl
	lwz      r3, 0(r30)
	mr       r4, r28
	bl       DCStoreRange
	addi     r27, r27, 1
	addi     r30, r30, 4
	cmpwi    r27, 3
	blt      lbl_800A7994
	lbz      r0, sDspDacBufferCount__9JASDriver@sda21(r13)
	li       r5, 0
	lwz      r4, JASDram@sda21(r13)
	slwi     r3, r0, 2
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, sDspDacBuffer__9JASDriver@sda21(r13)
	li       r27, 0
	li       r29, 0
	b        lbl_800A7A38

lbl_800A79F4:
	bl       getDacSize__9JASDriverFv
	lwz      r4, JASDram@sda21(r13)
	slwi     r3, r3, 1
	li       r5, 0x20
	bl       __nwa__FUlP7JKRHeapi
	lwz      r5, sDspDacBuffer__9JASDriver@sda21(r13)
	mr       r4, r28
	stwx     r3, r5, r29
	lwz      r3, sDspDacBuffer__9JASDriver@sda21(r13)
	lwzx     r3, r3, r29
	bl       bzero__7JASCalcFPvUl
	lwz      r3, sDspDacBuffer__9JASDriver@sda21(r13)
	mr       r4, r28
	lwzx     r3, r3, r29
	bl       DCStoreRange
	addi     r29, r29, 4
	addi     r27, r27, 1

lbl_800A7A38:
	lbz      r3, sDspDacBufferCount__9JASDriver@sda21(r13)
	cmpw     r27, r3
	blt      lbl_800A79F4
	li       r0, 0
	addi     r3, r3, -1
	stw      r3, sDspDacWriteBuffer__9JASDriver@sda21(r13)
	li       r3, 0
	stw      r0, sDspDacReadBuffer__9JASDriver@sda21(r13)
	stw      r0, sDspStatus__9JASDriver@sda21(r13)
	bl       AIInit
	lis      r3, sDmaDacBuffer__9JASDriver@ha
	mr       r4, r28
	addi     r3, r3, sDmaDacBuffer__9JASDriver@l
	lwz      r3, 8(r3)
	bl       AIInitDMA
	lwz      r3, sOutputRate__9JASDriver@sda21(r13)
	neg      r0, r3
	or       r0, r0, r3
	srwi     r3, r0, 0x1f
	bl       AISetDSPSampleRate
	mr       r3, r31
	bl       AIRegisterDMACallback
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A7AA4
 * Size:	000020
 */
void JASDriver::startDMA()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       AIStartDMA
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A7AC4
 * Size:	000020
 */
void JASDriver::stopDMA()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       AIStopDMA
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void JASDriver::setOutputRate(JASOutputRate)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A7AE4
 * Size:	00015C
 */
void JASDriver::updateDac()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lbz      r0, init$429@sda21(r13)
	extsb.   r0, r0
	bne      lbl_800A7B10
	li       r3, 0
	li       r0, 1
	stw      r3, dacp$428@sda21(r13)
	stb      r0, init$429@sda21(r13)

lbl_800A7B10:
	lwz      r31, lastRspMadep__9JASDriver@sda21(r13)
	li       r0, 0
	cmplwi   r31, 0
	stw      r0, lastRspMadep__9JASDriver@sda21(r13)
	beq      lbl_800A7B34
	bl       getDacSize__9JASDriverFv
	slwi     r4, r3, 1
	mr       r3, r31
	bl       AIInitDMA

lbl_800A7B34:
	bl       getFrameSamples__9JASDriverFv
	lwz      r0, dacp$428@sda21(r13)
	lis      r4, sDmaDacBuffer__9JASDriver@ha
	addi     r4, r4, sDmaDacBuffer__9JASDriver@l
	mr       r31, r3
	slwi     r0, r0, 2
	lwzx     r3, r4, r0
	mr       r4, r31
	bl       readDspBuffer__9JASDriverFPsUl
	lwz      r0, sDspStatus__9JASDriver@sda21(r13)
	cmpwi    r0, 0
	bne      lbl_800A7B68
	bl       finishDSPFrame__9JASDriverFv

lbl_800A7B68:
	lwz      r5, extMixCallback__9JASDriver@sda21(r13)
	cmplwi   r5, 0
	beq      lbl_800A7BA8
	lwz      r0, sMixMode__9JASDriver@sda21(r13)
	lis      r3, sMixFuncs__9JASDriver@ha
	lwz      r6, dacp$428@sda21(r13)
	addi     r3, r3, sMixFuncs__9JASDriver@l
	slwi     r0, r0, 2
	lis      r4, sDmaDacBuffer__9JASDriver@ha
	lwzx     r12, r3, r0
	addi     r3, r4, sDmaDacBuffer__9JASDriver@l
	slwi     r0, r6, 2
	mr       r4, r31
	lwzx     r3, r3, r0
	mtctr    r12
	bctrl

lbl_800A7BA8:
	bl       OSDisableInterrupts
	mr       r31, r3
	bl       getDacSize__9JASDriverFv
	lwz      r0, dacp$428@sda21(r13)
	lis      r5, sDmaDacBuffer__9JASDriver@ha
	slwi     r4, r3, 1
	slwi     r0, r0, 2
	addi     r3, r5, sDmaDacBuffer__9JASDriver@l
	lwzx     r3, r3, r0
	bl       DCStoreRange
	mr       r3, r31
	bl       OSRestoreInterrupts
	lwz      r5, dacp$428@sda21(r13)
	lis      r3, sDmaDacBuffer__9JASDriver@ha
	addi     r3, r3, sDmaDacBuffer__9JASDriver@l
	slwi     r4, r5, 2
	addi     r0, r5, 1
	lwzx     r3, r3, r4
	cmplwi   r0, 3
	stw      r0, dacp$428@sda21(r13)
	stw      r3, lastRspMadep__9JASDriver@sda21(r13)
	blt      lbl_800A7C08
	li       r0, 0
	stw      r0, dacp$428@sda21(r13)

lbl_800A7C08:
	lwz      r0, dacCallbackFunc__9JASDriver@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_800A7C2C
	bl       getFrameSamples__9JASDriverFv
	lwz      r12, dacCallbackFunc__9JASDriver@sda21(r13)
	mr       r4, r3
	lwz      r3, lastRspMadep__9JASDriver@sda21(r13)
	mtctr    r12
	bctrl

lbl_800A7C2C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A7C40
 * Size:	0000F0
 */
void JASDriver::updateDSP()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_804795F8@ha
	li       r3, 3
	stw      r0, 0x24(r1)
	addi     r4, r4, lbl_804795F8@l
	stw      r31, 0x1c(r1)
	bl       probeStart__9JASKernelFlPc
	bl       invalChannelAll__6JASDspFv
	bl       execAllCommand__10JASPortCmdFv
	bl       DSPSyncCallback__9JASDriverFv
	lbz      r0, init$447@sda21(r13)
	extsb.   r0, r0
	bne      lbl_800A7C88
	li       r3, 0
	li       r0, 1
	stw      r3, old_time$446@sda21(r13)
	stb      r0, init$447@sda21(r13)

lbl_800A7C88:
	bl       OSGetTick
	lwz      r0, old_time$446@sda21(r13)
	stw      r3, old_time$446@sda21(r13)
	subf     r31, r0, r3
	bl       getSubFrames__9JASDriverFv
	lwz      r5, snIntCount__14JASAudioThread@sda21(r13)
	lis      r4, history$449@ha
	addi     r4, r4, history$449@l
	subf     r0, r5, r3
	cmplw    r3, r5
	slwi     r0, r0, 2
	stwx     r31, r4, r0
	beq      lbl_800A7D0C
	lwz      r3, 0(r4)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	lfd      f3, lbl_80516E88@sda21(r2)
	stw      r3, 0xc(r1)
	lfs      f0, lbl_80516E80@sda21(r2)
	lfd      f1, 8(r1)
	stw      r31, 0x14(r1)
	fsubs    f2, f1, f3
	stw      r0, 0x10(r1)
	lfd      f1, 0x10(r1)
	fsubs    f1, f1, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_800A7D0C
	lis      r3, lbl_80479604@ha
	addi     r3, r3, lbl_80479604@l
	crclr    6
	bl       JASReport__FPCce
	bl       killActiveChannel__13JASDSPChannelFv

lbl_800A7D0C:
	bl       updateAll__13JASDSPChannelFv
	bl       subframeCallback__9JASDriverFv
	li       r3, 3
	bl       probeFinish__9JASKernelFl
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A7D30
 * Size:	000310
 */
void JASDriver::readDspBuffer(short*, unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r30, r3
	mr       r31, r4
	lwz      r5, sDspDacReadBuffer__9JASDriver@sda21(r13)
	lbz      r3, sDspDacBufferCount__9JASDriver@sda21(r13)
	addi     r4, r5, 1
	cmpw     r4, r3
	bne      lbl_800A7D60
	li       r4, 0

lbl_800A7D60:
	lwz      r0, sDspDacWriteBuffer__9JASDriver@sda21(r13)
	cmpw     r4, r0
	bne      lbl_800A7FF0
	cmplwi   r3, 3
	blt      lbl_800A7FF0
	lwz      r4, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r3, r5, 2
	cmplwi   r31, 0
	rlwinm   r0, r31, 0, 0, 0x1e
	lwzx     r3, r4, r3
	slwi     r4, r31, 1
	li       r6, 0
	addi     r3, r3, -2
	lhax     r0, r3, r0
	lhax     r5, r3, r4
	ble      lbl_800A7EBC
	cmplwi   r31, 8
	addi     r8, r31, -8
	ble      lbl_800A7E8C
	addi     r7, r8, 7
	li       r3, 0
	srwi     r7, r7, 3
	mtctr    r7
	cmplwi   r8, 0
	ble      lbl_800A7E8C

lbl_800A7DC4:
	lwz      r7, sDspDacReadBuffer__9JASDriver@sda21(r13)
	addi     r28, r3, 2
	lwz      r8, sDspDacBuffer__9JASDriver@sda21(r13)
	addi     r12, r3, 4
	slwi     r7, r7, 2
	addi     r11, r3, 6
	lwzx     r7, r8, r7
	addi     r10, r3, 8
	addi     r9, r3, 0xa
	addi     r8, r3, 0xc
	sthx     r0, r7, r3
	addi     r7, r3, 0xe
	addi     r3, r3, 0x10
	addi     r6, r6, 8
	lwz      r29, sDspDacReadBuffer__9JASDriver@sda21(r13)
	lwz      r27, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r29, r29, 2
	lwzx     r29, r27, r29
	sthx     r0, r29, r28
	lwz      r28, sDspDacReadBuffer__9JASDriver@sda21(r13)
	lwz      r29, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r28, r28, 2
	lwzx     r28, r29, r28
	sthx     r0, r28, r12
	lwz      r12, sDspDacReadBuffer__9JASDriver@sda21(r13)
	lwz      r28, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r12, r12, 2
	lwzx     r12, r28, r12
	sthx     r0, r12, r11
	lwz      r11, sDspDacReadBuffer__9JASDriver@sda21(r13)
	lwz      r12, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r11, r11, 2
	lwzx     r11, r12, r11
	sthx     r0, r11, r10
	lwz      r10, sDspDacReadBuffer__9JASDriver@sda21(r13)
	lwz      r11, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r10, r10, 2
	lwzx     r10, r11, r10
	sthx     r0, r10, r9
	lwz      r9, sDspDacReadBuffer__9JASDriver@sda21(r13)
	lwz      r10, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r9, r9, 2
	lwzx     r9, r10, r9
	sthx     r0, r9, r8
	lwz      r8, sDspDacReadBuffer__9JASDriver@sda21(r13)
	lwz      r9, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r8, r8, 2
	lwzx     r8, r9, r8
	sthx     r0, r8, r7
	bdnz     lbl_800A7DC4

lbl_800A7E8C:
	subf     r3, r6, r31
	slwi     r7, r6, 1
	mtctr    r3
	cmplw    r6, r31
	bge      lbl_800A7EBC

lbl_800A7EA0:
	lwz      r3, sDspDacReadBuffer__9JASDriver@sda21(r13)
	lwz      r6, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r3, r3, 2
	lwzx     r3, r6, r3
	sthx     r0, r3, r7
	addi     r7, r7, 2
	bdnz     lbl_800A7EA0

lbl_800A7EBC:
	cmplw    r31, r4
	mr       r6, r31
	bge      lbl_800A8008
	subf     r0, r31, r4
	addi     r7, r4, -8
	cmplwi   r0, 8
	ble      lbl_800A7FBC
	addi     r0, r7, 7
	mr       r3, r4
	subf     r0, r31, r0
	srwi     r0, r0, 3
	mtctr    r0
	cmplw    r31, r7
	bge      lbl_800A7FBC

lbl_800A7EF4:
	lwz      r0, sDspDacReadBuffer__9JASDriver@sda21(r13)
	addi     r12, r3, 2
	lwz      r7, sDspDacBuffer__9JASDriver@sda21(r13)
	addi     r11, r3, 4
	slwi     r0, r0, 2
	addi     r10, r3, 6
	lwzx     r28, r7, r0
	addi     r9, r3, 8
	addi     r8, r3, 0xa
	addi     r7, r3, 0xc
	sthx     r5, r28, r3
	addi     r0, r3, 0xe
	addi     r3, r3, 0x10
	addi     r6, r6, 8
	lwz      r29, sDspDacReadBuffer__9JASDriver@sda21(r13)
	lwz      r28, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r29, r29, 2
	lwzx     r29, r28, r29
	sthx     r5, r29, r12
	lwz      r12, sDspDacReadBuffer__9JASDriver@sda21(r13)
	lwz      r29, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r12, r12, 2
	lwzx     r12, r29, r12
	sthx     r5, r12, r11
	lwz      r11, sDspDacReadBuffer__9JASDriver@sda21(r13)
	lwz      r12, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r11, r11, 2
	lwzx     r11, r12, r11
	sthx     r5, r11, r10
	lwz      r10, sDspDacReadBuffer__9JASDriver@sda21(r13)
	lwz      r11, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r10, r10, 2
	lwzx     r10, r11, r10
	sthx     r5, r10, r9
	lwz      r9, sDspDacReadBuffer__9JASDriver@sda21(r13)
	lwz      r10, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r9, r9, 2
	lwzx     r9, r10, r9
	sthx     r5, r9, r8
	lwz      r8, sDspDacReadBuffer__9JASDriver@sda21(r13)
	lwz      r9, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r8, r8, 2
	lwzx     r8, r9, r8
	sthx     r5, r8, r7
	lwz      r7, sDspDacReadBuffer__9JASDriver@sda21(r13)
	lwz      r8, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r7, r7, 2
	lwzx     r7, r8, r7
	sthx     r5, r7, r0
	bdnz     lbl_800A7EF4

lbl_800A7FBC:
	subf     r0, r6, r4
	slwi     r7, r6, 1
	mtctr    r0
	cmplw    r6, r4
	bge      lbl_800A8008

lbl_800A7FD0:
	lwz      r0, sDspDacReadBuffer__9JASDriver@sda21(r13)
	lwz      r3, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	sthx     r5, r3, r7
	addi     r7, r7, 2
	bdnz     lbl_800A7FD0
	b        lbl_800A8008

lbl_800A7FF0:
	stw      r4, sDspDacReadBuffer__9JASDriver@sda21(r13)
	slwi     r0, r4, 2
	lwz      r3, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r4, r31, 2
	lwzx     r3, r3, r0
	bl       DCInvalidateRange

lbl_800A8008:
	lwz      r3, sDspDacReadBuffer__9JASDriver@sda21(r13)
	slwi     r0, r31, 1
	lwz      r4, sDspDacBuffer__9JASDriver@sda21(r13)
	mr       r5, r30
	slwi     r3, r3, 2
	mr       r6, r31
	lwzx     r4, r4, r3
	add      r3, r4, r0
	bl       imixcopy__7JASCalcFPCsPCsPsUl
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A8040
 * Size:	0001A4
 */
void JASDriver::finishDSPFrame()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, sMixFuncs__9JASDriver@ha
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	addi     r31, r4, sMixFuncs__9JASDriver@l
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	lwz      r3, sDspDacWriteBuffer__9JASDriver@sda21(r13)
	lbz      r0, sDspDacBufferCount__9JASDriver@sda21(r13)
	addi     r3, r3, 1
	cmpw     r3, r0
	bne      lbl_800A8078
	li       r3, 0

lbl_800A8078:
	lwz      r0, sDspDacReadBuffer__9JASDriver@sda21(r13)
	cmpw     r3, r0
	bne      lbl_800A8090
	li       r0, 0
	stw      r0, sDspStatus__9JASDriver@sda21(r13)
	b        lbl_800A81C8

lbl_800A8090:
	stw      r3, sDspDacWriteBuffer__9JASDriver@sda21(r13)
	bl       getSubFrames__9JASDriverFv
	stw      r3, snIntCount__14JASAudioThread@sda21(r13)
	addi     r4, r31, 0x30
	li       r3, 7
	bl       probeStart__9JASKernelFlPc
	bl       getFrameSamples__9JASDriverFv
	lwz      r0, sDspDacWriteBuffer__9JASDriver@sda21(r13)
	mr       r30, r3
	lwz      r4, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r0, r0, 2
	lwzx     r29, r4, r0
	bl       getSubFrames__9JASDriverFv
	slwi     r0, r30, 1
	mr       r4, r29
	add      r5, r29, r0
	bl       syncFrame__6JASDspFUlUlUl
	li       r0, 1
	addi     r4, r31, 0x10
	stw      r0, sDspStatus__9JASDriver@sda21(r13)
	li       r3, 3
	bl       probeStart__9JASKernelFlPc
	bl       invalChannelAll__6JASDspFv
	bl       execAllCommand__10JASPortCmdFv
	bl       DSPSyncCallback__9JASDriverFv
	lbz      r0, init$447@sda21(r13)
	extsb.   r0, r0
	bne      lbl_800A8110
	li       r3, 0
	li       r0, 1
	stw      r3, old_time$446@sda21(r13)
	stb      r0, init$447@sda21(r13)

lbl_800A8110:
	bl       OSGetTick
	lwz      r0, old_time$446@sda21(r13)
	stw      r3, old_time$446@sda21(r13)
	subf     r29, r0, r3
	bl       getSubFrames__9JASDriverFv
	lwz      r5, snIntCount__14JASAudioThread@sda21(r13)
	lis      r4, history$449@ha
	addi     r4, r4, history$449@l
	subf     r0, r5, r3
	cmplw    r3, r5
	slwi     r0, r0, 2
	stwx     r29, r4, r0
	beq      lbl_800A8190
	lwz      r3, 0(r4)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	lfd      f3, lbl_80516E88@sda21(r2)
	stw      r3, 0xc(r1)
	lfs      f0, lbl_80516E80@sda21(r2)
	lfd      f1, 8(r1)
	stw      r29, 0x14(r1)
	fsubs    f2, f1, f3
	stw      r0, 0x10(r1)
	lfd      f1, 0x10(r1)
	fsubs    f1, f1, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_800A8190
	addi     r3, r31, 0x1c
	crclr    6
	bl       JASReport__FPCce
	bl       killActiveChannel__13JASDSPChannelFv

lbl_800A8190:
	bl       updateAll__13JASDSPChannelFv
	bl       subframeCallback__9JASDriverFv
	li       r3, 3
	bl       probeFinish__9JASKernelFl
	lwz      r12, sDspDacCallback__9JASDriver@sda21(r13)
	cmplwi   r12, 0
	beq      lbl_800A81C8
	lwz      r0, sDspDacWriteBuffer__9JASDriver@sda21(r13)
	mr       r4, r30
	lwz      r3, sDspDacBuffer__9JASDriver@sda21(r13)
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	mtctr    r12
	bctrl

lbl_800A81C8:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JASDriver::setSubFrames(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JASDriver::setNumDSPBuffer(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A81E4
 * Size:	00000C
 */
void JASDriver::registerMixCallback(short* (*)(long), JASMixMode)
{
	/*
	stw      r3, extMixCallback__9JASDriver@sda21(r13)
	stw      r4, sMixMode__9JASDriver@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JASDriver::registerDacCallback(void (*)(short*, unsigned long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JASDriver::registDSPBufCallback(void (*)(short*, unsigned long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A81F0
 * Size:	000008
 */
float JASDriver::getDacRate()
{
	return sDacRate;
	/*
	lfs      f1, sDacRate__9JASDriver@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A81F8
 * Size:	000008
 */
int JASDriver::getSubFrames()
{
	/*
	lwz      r3, sSubFrames__9JASDriver@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A8200
 * Size:	00000C
 */
int JASDriver::getDacSize()
{
	/*
	lwz      r0, sSubFrames__9JASDriver@sda21(r13)
	mulli    r3, r0, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A820C
 * Size:	00000C
 */
int JASDriver::getFrameSamples()
{
	/*
	lwz      r0, sSubFrames__9JASDriver@sda21(r13)
	mulli    r3, r0, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A8218
 * Size:	0000C0
 */
void JASDriver::mixMonoTrack(short* p1, unsigned long p2, short* (*callback)(long))
{
	JASKernel::probeStart(5, "MONO-MIX");
	s16* cbResult = callback(p2);
	if (cbResult != nullptr) {
		JASKernel::probeFinish(5);
		for (; p2 != 0; p2--) {
			p1[0] = JASCalc::clamp<short, long>(p1[0] + *cbResult);
			p1[1] = JASCalc::clamp<short, long>(p1[1] + *cbResult);
			p1 += 2;
			cbResult++;
		}
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r6, lbl_80479624@ha
	stw      r0, 0x24(r1)
	addi     r0, r6, lbl_80479624@l
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	li       r3, 5
	stw      r29, 0x14(r1)
	mr       r29, r5
	stw      r28, 0x10(r1)
	mr       r28, r4
	mr       r4, r0
	bl       probeStart__9JASKernelFlPc
	mr       r12, r29
	mr       r3, r28
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	beq      lbl_800A82B8
	li       r3, 5
	bl       probeFinish__9JASKernelFl
	mr       r29, r28
	b        lbl_800A82B0

lbl_800A827C:
	lha      r3, 0(r30)
	lha      r0, 0(r31)
	add      r3, r3, r0
	bl       "clamp<s,l>__7JASCalcFl"
	sth      r3, 0(r30)
	lha      r3, 2(r30)
	lha      r0, 0(r31)
	add      r3, r3, r0
	bl       "clamp<s,l>__7JASCalcFl"
	sth      r3, 2(r30)
	addi     r30, r30, 4
	addi     r31, r31, 2
	addi     r29, r29, -1

lbl_800A82B0:
	cmplwi   r29, 0
	bne      lbl_800A827C

lbl_800A82B8:
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
 * Address:	800A82D8
 * Size:	0000C0
 */
void JASDriver::mixMonoTrackWide(short*, unsigned long, short* (*)(long))
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r6, lbl_80479630@ha
	stw      r0, 0x24(r1)
	addi     r0, r6, lbl_80479630@l
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	li       r3, 5
	stw      r29, 0x14(r1)
	mr       r29, r5
	stw      r28, 0x10(r1)
	mr       r28, r4
	mr       r4, r0
	bl       probeStart__9JASKernelFlPc
	mr       r12, r29
	mr       r3, r28
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	beq      lbl_800A8378
	li       r3, 5
	bl       probeFinish__9JASKernelFl
	mr       r29, r28
	b        lbl_800A8370

lbl_800A833C:
	lha      r3, 0(r30)
	lha      r0, 0(r31)
	add      r3, r3, r0
	bl       "clamp<s,l>__7JASCalcFl"
	sth      r3, 0(r30)
	lha      r3, 2(r30)
	lha      r0, 0(r31)
	subf     r3, r0, r3
	bl       "clamp<s,l>__7JASCalcFl"
	sth      r3, 2(r30)
	addi     r30, r30, 4
	addi     r31, r31, 2
	addi     r29, r29, -1

lbl_800A8370:
	cmplwi   r29, 0
	bne      lbl_800A833C

lbl_800A8378:
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
 * Address:	800A8398
 * Size:	0000E0
 */
void JASDriver::mixExtraTrack(short*, unsigned long, short* (*)(long))
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	li       r3, 5
	stw      r29, 0x14(r1)
	mr       r29, r4
	addi     r4, r2, lbl_80516E90@sda21
	stw      r28, 0x10(r1)
	mr       r28, r5
	bl       probeStart__9JASKernelFlPc
	mr       r12, r28
	mr       r3, r29
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	beq      lbl_800A8458
	li       r3, 5
	bl       probeFinish__9JASKernelFl
	li       r3, 6
	addi     r4, r2, lbl_80516E98@sda21
	bl       probeStart__9JASKernelFlPc
	lwz      r0, sSubFrames__9JASDriver@sda21(r13)
	mr       r28, r29
	mulli    r0, r0, 0x50
	slwi     r0, r0, 1
	add      r29, r31, r0
	b        lbl_800A8448

lbl_800A8410:
	lha      r3, 0(r30)
	lha      r0, 0(r29)
	add      r3, r3, r0
	bl       "clamp<s,l>__7JASCalcFl"
	sth      r3, 0(r30)
	lha      r3, 2(r30)
	lha      r0, 0(r31)
	add      r3, r3, r0
	bl       "clamp<s,l>__7JASCalcFl"
	sth      r3, 2(r30)
	addi     r30, r30, 4
	addi     r29, r29, 2
	addi     r31, r31, 2
	addi     r28, r28, -1

lbl_800A8448:
	cmplwi   r28, 0
	bne      lbl_800A8410
	li       r3, 6
	bl       probeFinish__9JASKernelFl

lbl_800A8458:
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
 * Address:	800A8478
 * Size:	00008C
 */
void JASDriver::mixInterleaveTrack(short*, unsigned long, short* (*)(long))
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	mr       r12, r5
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	mr       r29, r4
	mr       r3, r29
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_800A84E8
	mr       r31, r30
	mr       r30, r3
	slwi     r29, r29, 1
	b        lbl_800A84E0

lbl_800A84C0:
	lha      r3, 0(r31)
	lha      r0, 0(r30)
	add      r3, r3, r0
	bl       "clamp<s,l>__7JASCalcFl"
	sth      r3, 0(r31)
	addi     r31, r31, 2
	addi     r30, r30, 2
	addi     r29, r29, -1

lbl_800A84E0:
	cmplwi   r29, 0
	bne      lbl_800A84C0

lbl_800A84E8:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}
