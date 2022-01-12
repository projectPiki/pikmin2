#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global OSC_RELEASE_TABLE
    OSC_RELEASE_TABLE:
        .4byte 0x00000002
        .4byte 0x0000000F
        .4byte 0x00000000
    .global OSC_ENV
    OSC_ENV:
        .4byte 0x00000000
        .float 1.0
        .4byte 0x00000000
        .4byte OSC_RELEASE_TABLE
        .float 1.0
        .4byte 0x00000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804A44A0
    lbl_804A44A0:
        .4byte lbl_800A9AF8
        .4byte lbl_800A9AEC
        .4byte lbl_800A9B00
        .4byte lbl_800A9AF8
        .4byte lbl_800A9AF8
        .4byte lbl_800A9AF8
        .4byte lbl_800A9AF8
        .4byte lbl_800A9AF8
        .4byte lbl_800A9AF8
        .4byte lbl_800A9AF8
        .4byte lbl_800A9AF8
        .4byte lbl_800A9AF8
        .4byte lbl_800A9AF8
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000

    .section .sbss # 0x80514D80 - 0x80516360
    .global sLoadThread__13JASAramStream
    sLoadThread__13JASAramStream:
        .skip 0x4
    .global sReadBuffer__13JASAramStream
    sReadBuffer__13JASAramStream:
        .skip 0x4
    .global sBlockSize__13JASAramStream
    sBlockSize__13JASAramStream:
        .skip 0x4
    .global sChannelMax__13JASAramStream
    sChannelMax__13JASAramStream:
        .skip 0x4
    .global sSystemPauseFlag__13JASAramStream
    sSystemPauseFlag__13JASAramStream:
        .skip 0x1
    .global sFatalErrorFlag__13JASAramStream
    sFatalErrorFlag__13JASAramStream:
        .skip 0x7

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516EB0
    lbl_80516EB0:
        .4byte 0x00000000
    .global lbl_80516EB4
    lbl_80516EB4:
        .float 1.0
    .global lbl_80516EB8
    lbl_80516EB8:
        .float 0.5
    .global lbl_80516EBC
    lbl_80516EBC:
        .4byte 0x42FE0000
    .global lbl_80516EC0
    lbl_80516EC0:
        .4byte 0x43300000
        .4byte 0x00000000
    .global one$870
    one$870:
        .4byte 0x00000001
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	800A8FA4
 * Size:	000090
 */
void JASAramStream::initSystem(unsigned long, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, dvdErrorCheck__13JASAramStreamFPv@ha
	stw      r0, 0x14(r1)
	addi     r0, r5, dvdErrorCheck__13JASAramStreamFPv@l
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 0
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r0
	bl       registerSubFrameCallback__9JASDriverFPFPv_lPv
	clrlwi.  r0, r3, 0x18
	beq      lbl_800A901C
	lwz      r0, sLoadThread__13JASAramStream@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_800A8FF0
	bl       getThreadPointer__6JASDvdFv
	stw      r3, sLoadThread__13JASAramStream@sda21(r13)

lbl_800A8FF0:
	addi     r0, r30, 0x20
	lwz      r4, JASDram@sda21(r13)
	mullw    r3, r0, r31
	li       r5, 0x20
	bl       __nwa__FUlP7JKRHeapi
	li       r0, 0
	stw      r3, sReadBuffer__13JASAramStream@sda21(r13)
	stw      r30, sBlockSize__13JASAramStream@sda21(r13)
	stw      r31, sChannelMax__13JASAramStream@sda21(r13)
	stb      r0, sSystemPauseFlag__13JASAramStream@sda21(r13)
	stb      r0, sFatalErrorFlag__13JASAramStream@sda21(r13)

lbl_800A901C:
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
 * Address:	........
 * Size:	000008
 */
void JASAramStream::setLoadThread(JASTaskThread*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A9034
 * Size:	000158
 */
JASAramStream::JASAramStream()
{
	/*
	li       r0, 0
	lfs      f3, lbl_80516EB0@sda21(r2)
	stw      r0, 0x198(r3)
	lfs      f2, lbl_80516EB4@sda21(r2)
	stb      r0, 0x19c(r3)
	lfs      f1, lbl_80516EB8@sda21(r2)
	stb      r0, 0x19d(r3)
	lfs      f0, lbl_80516EB0@sda21(r2)
	stb      r0, 0x19e(r3)
	stw      r0, 0x1a0(r3)
	stw      r0, 0x1a4(r3)
	stw      r0, 0x1a8(r3)
	stw      r0, 0x1ac(r3)
	stb      r0, 0x1b0(r3)
	stw      r0, 0x1b4(r3)
	stfs     f3, 0x1b8(r3)
	stw      r0, 0x1f8(r3)
	stw      r0, 0x1fc(r3)
	stw      r0, 0x200(r3)
	stb      r0, 0x204(r3)
	stw      r0, 0x208(r3)
	stw      r0, 0x21c(r3)
	stw      r0, 0x238(r3)
	stw      r0, 0x23c(r3)
	stw      r0, 0x240(r3)
	stw      r0, 0x244(r3)
	sth      r0, 0x248(r3)
	sth      r0, 0x24a(r3)
	stw      r0, 0x24c(r3)
	stw      r0, 0x250(r3)
	stw      r0, 0x254(r3)
	stb      r0, 0x258(r3)
	stw      r0, 0x25c(r3)
	stw      r0, 0x260(r3)
	stfs     f2, 0x264(r3)
	stfs     f2, 0x268(r3)
	stb      r0, 0x2d8(r3)
	stw      r0, 0x180(r3)
	sth      r0, 0x220(r3)
	sth      r0, 0x22c(r3)
	stfs     f2, 0x26c(r3)
	stfs     f1, 0x284(r3)
	stfs     f0, 0x29c(r3)
	stfs     f0, 0x2b4(r3)
	stw      r0, 0x184(r3)
	sth      r0, 0x222(r3)
	sth      r0, 0x22e(r3)
	stfs     f2, 0x270(r3)
	stfs     f1, 0x288(r3)
	stfs     f0, 0x2a0(r3)
	stfs     f0, 0x2b8(r3)
	stw      r0, 0x188(r3)
	sth      r0, 0x224(r3)
	sth      r0, 0x230(r3)
	stfs     f2, 0x274(r3)
	stfs     f1, 0x28c(r3)
	stfs     f0, 0x2a4(r3)
	stfs     f0, 0x2bc(r3)
	stw      r0, 0x18c(r3)
	sth      r0, 0x226(r3)
	sth      r0, 0x232(r3)
	stfs     f2, 0x278(r3)
	stfs     f1, 0x290(r3)
	stfs     f0, 0x2a8(r3)
	stfs     f0, 0x2c0(r3)
	stw      r0, 0x190(r3)
	sth      r0, 0x228(r3)
	sth      r0, 0x234(r3)
	stfs     f2, 0x27c(r3)
	stfs     f1, 0x294(r3)
	stfs     f0, 0x2ac(r3)
	stfs     f0, 0x2c4(r3)
	stw      r0, 0x194(r3)
	sth      r0, 0x22a(r3)
	sth      r0, 0x236(r3)
	stfs     f2, 0x280(r3)
	stfs     f1, 0x298(r3)
	stfs     f0, 0x2b0(r3)
	stfs     f0, 0x2c8(r3)
	sth      r0, 0x2cc(r3)
	sth      r0, 0x2ce(r3)
	sth      r0, 0x2d0(r3)
	sth      r0, 0x2d2(r3)
	sth      r0, 0x2d4(r3)
	sth      r0, 0x2d6(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A918C
 * Size:	0000F8
 */
void JASAramStream::init(unsigned long, unsigned long, void (*)(unsigned long, JASAramStream*, void*), void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x74B0(r2)
	  li        r9, 0
	  stw       r0, 0x14(r1)
	  lis       r8, 0x1
	  lfs       f2, -0x74AC(r2)
	  subi      r0, r8, 0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lfs       f1, -0x74A8(r2)
	  stw       r4, 0x238(r3)
	  addi      r4, r31, 0x40
	  stw       r5, 0x23C(r3)
	  li        r5, 0x10
	  stfs      f0, 0x1B8(r3)
	  lfs       f0, -0x74B0(r2)
	  stb       r9, 0x19E(r3)
	  stb       r9, 0x19C(r3)
	  stb       r9, 0x19D(r3)
	  stb       r9, 0x204(r3)
	  sth       r9, 0x24A(r3)
	  stfs      f2, 0x26C(r3)
	  stfs      f1, 0x284(r3)
	  stfs      f0, 0x29C(r3)
	  stfs      f0, 0x2B4(r3)
	  stfs      f2, 0x270(r3)
	  stfs      f1, 0x288(r3)
	  stfs      f0, 0x2A0(r3)
	  stfs      f0, 0x2B8(r3)
	  stfs      f2, 0x274(r3)
	  stfs      f1, 0x28C(r3)
	  stfs      f0, 0x2A4(r3)
	  stfs      f0, 0x2BC(r3)
	  stfs      f2, 0x278(r3)
	  stfs      f1, 0x290(r3)
	  stfs      f0, 0x2A8(r3)
	  stfs      f0, 0x2C0(r3)
	  stfs      f2, 0x27C(r3)
	  stfs      f1, 0x294(r3)
	  stfs      f0, 0x2AC(r3)
	  stfs      f0, 0x2C4(r3)
	  stfs      f2, 0x280(r3)
	  stfs      f1, 0x298(r3)
	  stfs      f0, 0x2B0(r3)
	  stfs      f0, 0x2C8(r3)
	  stfs      f2, 0x264(r3)
	  stfs      f2, 0x268(r3)
	  stb       r9, 0x2D8(r3)
	  sth       r0, 0x2CC(r3)
	  stw       r6, 0x240(r3)
	  stw       r7, 0x244(r3)
	  bl        0x46260
	  addi      r3, r31, 0x20
	  addi      r4, r31, 0x80
	  li        r5, 0x4
	  bl        0x46250
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void JASAramStream::setBusSetting(unsigned long, unsigned short)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void JASAramStream::prepare(const char*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A9284
 * Size:	0000B8
 */
void JASAramStream::prepare(long, int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r3
	mr       r3, r4
	addi     r4, r30, 0x1bc
	bl       DVDFastOpen
	cmpwi    r3, 0
	bne      lbl_800A92BC
	li       r3, 0
	b        lbl_800A9324

lbl_800A92BC:
	lis      r3, channelProcCallback__13JASAramStreamFPv@ha
	mr       r4, r30
	addi     r3, r3, channelProcCallback__13JASAramStreamFPv@l
	bl       registerSubFrameCallback__9JASDriverFPFPv_lPv
	clrlwi.  r0, r3, 0x18
	bne      lbl_800A92DC
	li       r3, 0
	b        lbl_800A9324

lbl_800A92DC:
	lbz      r0, 0x204(r30)
	cmplwi   r0, 0
	beq      lbl_800A92F0
	li       r3, 0
	b        lbl_800A9324

lbl_800A92F0:
	stw      r30, 8(r1)
	lis      r3, headerLoadTask__13JASAramStreamFPv@ha
	addi     r4, r3, headerLoadTask__13JASAramStreamFPv@l
	lwz      r3, sLoadThread__13JASAramStream@sda21(r13)
	lwz      r0, 0x23c(r30)
	addi     r5, r1, 8
	li       r6, 0xc
	stw      r0, 0xc(r1)
	stw      r31, 0x10(r1)
	bl       sendCmdMsg__13JASTaskThreadFPFPv_vPCvUl
	neg      r0, r3
	or       r0, r0, r3
	srwi     r3, r0, 0x1f

lbl_800A9324:
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
 * Address:	800A933C
 * Size:	000034
 */
void JASAramStream::start()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	li       r5, 0
	stw      r0, 0x14(r1)
	bl       OSSendMessage
	neg      r0, r3
	or       r0, r0, r3
	srwi     r3, r0, 0x1f
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A9370
 * Size:	000038
 */
void JASAramStream::stop(unsigned short)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x14(r1)
	slwi     r0, r4, 0x10
	ori      r4, r0, 1
	bl       OSSendMessage
	neg      r0, r3
	or       r0, r0, r3
	srwi     r3, r0, 0x1f
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A93A8
 * Size:	000048
 */
void JASAramStream::pause(bool)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	clrlwi.  r0, r4, 0x18
	li       r4, 3
	beq      lbl_800A93C4
	li       r4, 2

lbl_800A93C4:
	li       r5, 0
	bl       OSSendMessage
	cmpwi    r3, 0
	bne      lbl_800A93DC
	li       r3, 0
	b        lbl_800A93E0

lbl_800A93DC:
	li       r3, 1

lbl_800A93E0:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A93F0
 * Size:	000044
 */
void JASAramStream::cancel()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, finishTask__13JASAramStreamFPv@ha
	mr       r5, r3
	stw      r0, 0x14(r1)
	li       r0, 1
	addi     r4, r4, finishTask__13JASAramStreamFPv@l
	stb      r0, 0x204(r3)
	lwz      r3, sLoadThread__13JASAramStream@sda21(r13)
	bl       sendCmdMsg__13JASTaskThreadFPFPv_vPv
	neg      r0, r3
	or       r0, r0, r3
	srwi     r3, r0, 0x1f
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
void JASAramStream::getBlockSamples() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A9434
 * Size:	000030
 */
void JASAramStream::headerLoadTask(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r3
	stw      r0, 0x14(r1)
	lwz      r4, 4(r5)
	lwz      r3, 0(r3)
	lwz      r5, 8(r5)
	bl       headerLoad__13JASAramStreamFUli
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A9464
 * Size:	0000DC
 */
void JASAramStream::firstLoadTask(void*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	lwz      r30, 0(r3)
	mr       r3, r30
	bl       load__13JASAramStreamFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_800A9528
	lwz      r3, 8(r31)
	cmpwi    r3, 0
	ble      lbl_800A94D4
	addi     r0, r3, -1
	stw      r0, 8(r31)
	lwz      r0, 8(r31)
	cmpwi    r0, 0
	bne      lbl_800A94D4
	lis      r4, prepareFinishTask__13JASAramStreamFPv@ha
	lwz      r3, sLoadThread__13JASAramStream@sda21(r13)
	addi     r4, r4, prepareFinishTask__13JASAramStreamFPv@l
	mr       r5, r30
	bl       sendCmdMsg__13JASTaskThreadFPFPv_vPv
	cmpwi    r3, 0
	bne      lbl_800A94D4
	li       r0, 1
	stb      r0, sFatalErrorFlag__13JASAramStream@sda21(r13)

lbl_800A94D4:
	lwz      r3, 4(r31)
	cmplwi   r3, 0
	beq      lbl_800A9528
	addi     r0, r3, -1
	lis      r3, firstLoadTask__13JASAramStreamFPv@ha
	stw      r0, 4(r31)
	addi     r4, r3, firstLoadTask__13JASAramStreamFPv@l
	mr       r5, r31
	li       r6, 0xc
	lwz      r3, sLoadThread__13JASAramStream@sda21(r13)
	bl       sendCmdMsg__13JASTaskThreadFPFPv_vPCvUl
	cmpwi    r3, 0
	bne      lbl_800A9510
	li       r0, 1
	stb      r0, sFatalErrorFlag__13JASAramStream@sda21(r13)

lbl_800A9510:
	bl       OSDisableInterrupts
	lwz      r4, 0x208(r30)
	stw      r3, 8(r1)
	addi     r0, r4, 1
	stw      r0, 0x208(r30)
	bl       OSRestoreInterrupts

lbl_800A9528:
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
 * Address:	800A9540
 * Size:	000020
 */
void JASAramStream::loadToAramTask(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       load__13JASAramStreamFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A9560
 * Size:	000060
 */
void JASAramStream::finishTask(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, channelProcCallback__13JASAramStreamFPv@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r4, channelProcCallback__13JASAramStreamFPv@l
	mr       r4, r31
	bl       rejectCallback__9JASDriverFPFPv_lPv
	lwz      r12, 0x240(r31)
	cmplwi   r12, 0
	beq      lbl_800A95AC
	mr       r4, r31
	lwz      r5, 0x244(r31)
	li       r3, 0
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0x240(r31)

lbl_800A95AC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A95C0
 * Size:	000058
 */
void JASAramStream::prepareFinishTask(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 4
	li       r5, 1
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 0x20
	bl       OSSendMessage
	lwz      r12, 0x240(r31)
	cmplwi   r12, 0
	beq      lbl_800A9604
	mr       r4, r31
	lwz      r5, 0x244(r31)
	li       r3, 1
	mtctr    r12
	bctrl

lbl_800A9604:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A9618
 * Size:	0001CC
 */
void JASAramStream::headerLoad(unsigned long, int)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r5
	stw      r30, 0x28(r1)
	mr       r30, r4
	stw      r29, 0x24(r1)
	mr       r29, r3
	lbz      r0, sFatalErrorFlag__13JASAramStream@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_800A9650
	li       r3, 0
	b        lbl_800A97C8

lbl_800A9650:
	lbz      r0, 0x204(r29)
	cmplwi   r0, 0
	beq      lbl_800A9664
	li       r3, 0
	b        lbl_800A97C8

lbl_800A9664:
	lwz      r4, sReadBuffer__13JASAramStream@sda21(r13)
	addi     r3, r29, 0x1bc
	li       r5, 0x40
	li       r6, 0
	li       r7, 1
	bl       DVDReadPrio
	cmpwi    r3, 0
	bge      lbl_800A9694
	li       r0, 1
	li       r3, 0
	stb      r0, sFatalErrorFlag__13JASAramStream@sda21(r13)
	b        lbl_800A97C8

lbl_800A9694:
	lwz      r5, sReadBuffer__13JASAramStream@sda21(r13)
	lis      r0, 0x4330
	stw      r0, 0x18(r1)
	li       r0, 0
	lbz      r3, 9(r5)
	cmpwi    r31, 0
	lfd      f2, lbl_80516EC0@sda21(r2)
	sth      r3, 0x248(r29)
	lfs      f0, lbl_80516EBC@sda21(r2)
	lhz      r3, 0xc(r5)
	sth      r3, 0x24a(r29)
	lwz      r3, 0x10(r5)
	stw      r3, 0x254(r29)
	lhz      r4, 0xe(r5)
	neg      r3, r4
	or       r3, r3, r4
	srwi     r3, r3, 0x1f
	stb      r3, 0x258(r29)
	lwz      r3, 0x18(r5)
	stw      r3, 0x25c(r29)
	lwz      r3, 0x1c(r5)
	stw      r3, 0x260(r29)
	lbz      r3, 0x28(r5)
	stw      r3, 0x1c(r1)
	lfd      f1, 0x18(r1)
	fsubs    f1, f1, f2
	fdivs    f0, f1, f0
	stfs     f0, 0x264(r29)
	stw      r0, 0x208(r29)
	stw      r0, 0x200(r29)
	stw      r0, 0x1fc(r29)
	lwz      r3, sBlockSize__13JASAramStream@sda21(r13)
	lhz      r0, 0xc(r5)
	divwu    r3, r30, r3
	divwu    r0, r3, r0
	stw      r0, 0x250(r29)
	lwz      r0, 0x250(r29)
	stw      r0, 0x24c(r29)
	lwz      r3, 0x24c(r29)
	addi     r0, r3, -1
	stw      r0, 0x24c(r29)
	lwz      r0, 0x24c(r29)
	stw      r0, 0x1f8(r29)
	blt      lbl_800A9750
	lwz      r0, 0x1f8(r29)
	cmplw    r31, r0
	ble      lbl_800A9754

lbl_800A9750:
	lwz      r31, 0x1f8(r29)

lbl_800A9754:
	lbz      r0, 0x204(r29)
	cmplwi   r0, 0
	beq      lbl_800A9768
	li       r3, 0
	b        lbl_800A97C8

lbl_800A9768:
	stw      r29, 0xc(r1)
	lis      r3, firstLoadTask__13JASAramStreamFPv@ha
	addi     r4, r3, firstLoadTask__13JASAramStreamFPv@l
	lwz      r3, sLoadThread__13JASAramStream@sda21(r13)
	lwz      r7, 0x1f8(r29)
	addi     r5, r1, 0xc
	li       r6, 0xc
	addi     r0, r7, -1
	stw      r31, 0x14(r1)
	stw      r0, 0x10(r1)
	bl       sendCmdMsg__13JASTaskThreadFPFPv_vPCvUl
	cmpwi    r3, 0
	bne      lbl_800A97AC
	li       r0, 1
	li       r3, 0
	stb      r0, sFatalErrorFlag__13JASAramStream@sda21(r13)
	b        lbl_800A97C8

lbl_800A97AC:
	bl       OSDisableInterrupts
	lwz      r4, 0x208(r29)
	stw      r3, 8(r1)
	addi     r0, r4, 1
	stw      r0, 0x208(r29)
	bl       OSRestoreInterrupts
	li       r3, 1

lbl_800A97C8:
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
 * Address:	800A97E4
 * Size:	0002B4
 */
void JASAramStream::load()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r26, 0x18(r1)
	mr       r27, r3
	bl       OSDisableInterrupts
	lwz      r4, 0x208(r27)
	stw      r3, 8(r1)
	addi     r0, r4, -1
	stw      r0, 0x208(r27)
	bl       OSRestoreInterrupts
	lbz      r0, sFatalErrorFlag__13JASAramStream@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_800A9824
	li       r3, 0
	b        lbl_800A9A84

lbl_800A9824:
	lbz      r0, 0x204(r27)
	cmplwi   r0, 0
	beq      lbl_800A9838
	li       r3, 0
	b        lbl_800A9A84

lbl_800A9838:
	lhz      r4, 0x248(r27)
	cmplwi   r4, 0
	bne      lbl_800A9860
	lwz      r0, sBlockSize__13JASAramStream@sda21(r13)
	lis      r3, 0x38E38E39@ha
	addi     r3, r3, 0x38E38E39@l
	slwi     r0, r0, 4
	mulhwu   r0, r3, r0
	srwi     r5, r0, 1
	b        lbl_800A9868

lbl_800A9860:
	lwz      r0, sBlockSize__13JASAramStream@sda21(r13)
	srwi     r5, r0, 1

lbl_800A9868:
	lwz      r3, 0x260(r27)
	cmplwi   r4, 0
	lwz      r4, 0x25c(r27)
	addi     r0, r3, -1
	divwu    r31, r0, r5
	bne      lbl_800A989C
	lwz      r0, sBlockSize__13JASAramStream@sda21(r13)
	lis      r3, 0x38E38E39@ha
	addi     r3, r3, 0x38E38E39@l
	slwi     r0, r0, 4
	mulhwu   r0, r3, r0
	srwi     r0, r0, 1
	b        lbl_800A98A4

lbl_800A989C:
	lwz      r0, sBlockSize__13JASAramStream@sda21(r13)
	srwi     r0, r0, 1

lbl_800A98A4:
	divwu    r30, r4, r0
	lwz      r4, 0x200(r27)
	cmplw    r4, r31
	ble      lbl_800A98BC
	li       r3, 0
	b        lbl_800A9A84

lbl_800A98BC:
	lwz      r3, sBlockSize__13JASAramStream@sda21(r13)
	lhz      r0, 0x24a(r27)
	mullw    r3, r3, r0
	addi     r0, r3, 0x20
	mullw    r3, r4, r0
	mr       r5, r0
	addi     r6, r3, 0x40
	bne      lbl_800A98E4
	lwz      r0, 0x1f0(r27)
	subf     r5, r6, r0

lbl_800A98E4:
	lwz      r4, sReadBuffer__13JASAramStream@sda21(r13)
	addi     r3, r27, 0x1bc
	li       r7, 1
	bl       DVDReadPrio
	cmpwi    r3, 0
	bge      lbl_800A990C
	li       r0, 1
	li       r3, 0
	stb      r0, sFatalErrorFlag__13JASAramStream@sda21(r13)
	b        lbl_800A9A84

lbl_800A990C:
	lwz      r3, 0x1fc(r27)
	li       r28, 0
	lwz      r0, sBlockSize__13JASAramStream@sda21(r13)
	lwz      r4, 0x238(r27)
	mullw    r0, r3, r0
	lwz      r29, sReadBuffer__13JASAramStream@sda21(r13)
	add      r26, r4, r0
	b        lbl_800A9988

lbl_800A992C:
	lwz      r3, sBlockSize__13JASAramStream@sda21(r13)
	li       r6, 0
	lwz      r0, 0x250(r27)
	li       r7, 0
	lwz      r5, 4(r29)
	li       r8, 0
	mullw    r0, r3, r0
	lwz      r4, sReadBuffer__13JASAramStream@sda21(r13)
	li       r9, -1
	li       r10, 0
	mullw    r3, r5, r28
	addi     r3, r3, 0x20
	mullw    r0, r28, r0
	add      r3, r4, r3
	add      r4, r26, r0
	bl       mainRamToAram__7JKRAramFPUcUlUl15JKRExpandSwitchUlP7JKRHeapiPUl
	cmplwi   r3, 0
	bne      lbl_800A9984
	li       r0, 1
	li       r3, 0
	stb      r0, sFatalErrorFlag__13JASAramStream@sda21(r13)
	b        lbl_800A9A84

lbl_800A9984:
	addi     r28, r28, 1

lbl_800A9988:
	lhz      r0, 0x24a(r27)
	cmpw     r28, r0
	blt      lbl_800A992C
	lwz      r3, 0x1fc(r27)
	addi     r0, r3, 1
	stw      r0, 0x1fc(r27)
	lwz      r0, 0x1fc(r27)
	lwz      r3, 0x1f8(r27)
	cmplw    r0, r3
	blt      lbl_800A9A58
	lbz      r0, 0x258(r27)
	lwz      r4, 0x200(r27)
	cmplwi   r0, 0
	add      r4, r3, r4
	addi     r4, r4, -1
	beq      lbl_800A99DC
	b        lbl_800A99D4

lbl_800A99CC:
	subf     r4, r31, r4
	add      r4, r4, r30

lbl_800A99D4:
	cmplw    r4, r31
	bgt      lbl_800A99CC

lbl_800A99DC:
	cmplw    r4, r31
	beq      lbl_800A99F0
	addi     r0, r4, 2
	cmplw    r0, r31
	bne      lbl_800A9A0C

lbl_800A99F0:
	lwz      r0, 0x250(r27)
	addi     r3, r27, 0x20
	li       r4, 5
	li       r5, 1
	stw      r0, 0x1f8(r27)
	bl       OSSendMessage
	b        lbl_800A9A18

lbl_800A9A0C:
	lwz      r3, 0x250(r27)
	addi     r0, r3, -1
	stw      r0, 0x1f8(r27)

lbl_800A9A18:
	mr       r3, r29
	mr       r4, r27
	li       r5, 0
	b        lbl_800A9A44

lbl_800A9A28:
	lha      r0, 8(r3)
	addi     r5, r5, 1
	sth      r0, 0x220(r4)
	lha      r0, 0xa(r3)
	addi     r3, r3, 4
	sth      r0, 0x22c(r4)
	addi     r4, r4, 2

lbl_800A9A44:
	lhz      r0, 0x24a(r27)
	cmpw     r5, r0
	blt      lbl_800A9A28
	li       r0, 0
	stw      r0, 0x1fc(r27)

lbl_800A9A58:
	lwz      r3, 0x200(r27)
	addi     r0, r3, 1
	stw      r0, 0x200(r27)
	lwz      r0, 0x200(r27)
	cmplw    r0, r31
	ble      lbl_800A9A80
	lbz      r0, 0x258(r27)
	cmplwi   r0, 0
	beq      lbl_800A9A80
	stw      r30, 0x200(r27)

lbl_800A9A80:
	li       r3, 1

lbl_800A9A84:
	lmw      r26, 0x18(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A9A98
 * Size:	000020
 */
void JASAramStream::channelProcCallback(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       channelProc__13JASAramStreamFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A9AB8
 * Size:	00005C
 */
void JASAramStream::dvdErrorCheck(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       DVDGetDriveStatus
	addi     r0, r3, 1
	cmplwi   r0, 0xc
	bgt      lbl_800A9AF8
	lis      r3, lbl_804A44A0@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804A44A0@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_800A9AEC

lbl_800A9AEC:
	li       r0, 0
	stb      r0, sSystemPauseFlag__13JASAramStream@sda21(r13)
	b        lbl_800A9B00
	.global  lbl_800A9AF8

lbl_800A9AF8:
	li       r0, 1
	stb      r0, sSystemPauseFlag__13JASAramStream@sda21(r13)
	.global  lbl_800A9B00

lbl_800A9B00:
	lwz      r0, 0x14(r1)
	li       r3, 0
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A9B14
 * Size:	00003C
 */
void JASAramStream::channelCallback(unsigned long, JASChannel*, JASDsp::TChannel*, void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r8, r3
	  mr        r7, r4
	  stw       r0, 0x14(r1)
	  mr        r0, r5
	  mr        r3, r6
	  mr        r4, r8
	  mr        r5, r7
	  mr        r6, r0
	  bl        .loc_0x3C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x3C:
	*/
}

/*
 * --INFO--
 * Address:	800A9B50
 * Size:	000758
 */
void JASAramStream::updateChannel(unsigned long, JASChannel*, JASDsp::TChannel*)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stmw     r24, 0x30(r1)
	mr       r27, r3
	mr       r28, r5
	mr       r29, r6
	lhz      r0, 0x248(r3)
	cmplwi   r0, 0
	bne      lbl_800A9B94
	lwz      r0, sBlockSize__13JASAramStream@sda21(r13)
	lis      r3, 0x38E38E39@ha
	addi     r3, r3, 0x38E38E39@l
	slwi     r0, r0, 4
	mulhwu   r0, r3, r0
	srwi     r31, r0, 1
	b        lbl_800A9B9C

lbl_800A9B94:
	lwz      r0, sBlockSize__13JASAramStream@sda21(r13)
	srwi     r31, r0, 1

lbl_800A9B9C:
	cmpwi    r4, 1
	beq      lbl_800A9BC0
	bge      lbl_800A9BB4
	cmpwi    r4, 0
	bge      lbl_800A9C08
	b        lbl_800AA27C

lbl_800A9BB4:
	cmpwi    r4, 3
	bge      lbl_800AA27C
	b        lbl_800AA17C

lbl_800A9BC0:
	lwz      r0, 0x198(r27)
	cmplwi   r0, 0
	bne      lbl_800AA27C
	stw      r28, 0x198(r27)
	li       r4, 0
	lwz      r0, 0x24c(r27)
	mullw    r0, r31, r0
	stw      r0, 0x1a4(r27)
	stw      r4, 0x1a8(r27)
	stw      r4, 0x1a0(r27)
	lwz      r3, 0x260(r27)
	addi     r0, r3, -1
	divwu    r0, r0, r31
	stw      r0, 0x1ac(r27)
	stb      r4, 0x1b0(r27)
	stw      r4, 0x1b4(r27)
	stw      r4, 0x21c(r27)
	b        lbl_800AA27C

lbl_800A9C08:
	lhz      r0, 8(r29)
	cmplwi   r0, 0
	bne      lbl_800AA27C
	lwz      r0, 0x198(r27)
	cmplw    r28, r0
	bne      lbl_800AA0AC
	li       r6, 0
	stw      r6, 0x21c(r27)
	lwz      r3, 0x74(r29)
	lhz      r0, 0x64(r29)
	lwz      r4, 0x1a4(r27)
	add      r7, r3, r0
	cmplw    r7, r4
	bgt      lbl_800A9C54
	lwz      r3, 0x1a8(r27)
	subf     r0, r7, r4
	add      r0, r3, r0
	stw      r0, 0x1a8(r27)
	b        lbl_800A9D08

lbl_800A9C54:
	lbz      r0, 0x1b0(r27)
	cmplwi   r0, 0
	bne      lbl_800A9C88
	lwz      r0, 0x1a8(r27)
	add      r0, r0, r4
	stw      r0, 0x1a8(r27)
	lwz      r0, 0x24c(r27)
	lwz      r3, 0x1a8(r27)
	mullw    r0, r31, r0
	subf     r0, r7, r0
	add      r0, r3, r0
	stw      r0, 0x1a8(r27)
	b        lbl_800A9D08

lbl_800A9C88:
	lwz      r3, 0x1a8(r27)
	li       r0, -1
	add      r3, r3, r4
	stw      r3, 0x1a8(r27)
	lwz      r3, 0x24c(r27)
	lwz      r4, 0x110(r29)
	mullw    r3, r31, r3
	lwz      r5, 0x1a8(r27)
	subf     r3, r7, r3
	subf     r3, r4, r3
	add      r3, r5, r3
	stw      r3, 0x1a8(r27)
	lwz      r4, 0x260(r27)
	lwz      r3, 0x1a8(r27)
	subf     r3, r4, r3
	stw      r3, 0x1a8(r27)
	lwz      r4, 0x1a8(r27)
	lwz      r3, 0x25c(r27)
	add      r3, r4, r3
	stw      r3, 0x1a8(r27)
	stw      r6, 0x110(r29)
	stw      r6, 0x210(r27)
	lwz      r3, 0x21c(r27)
	ori      r3, r3, 2
	stw      r3, 0x21c(r27)
	lwz      r3, 0x1b4(r27)
	cmplw    r3, r0
	bge      lbl_800A9D00
	addi     r0, r3, 1
	stw      r0, 0x1b4(r27)

lbl_800A9D00:
	li       r0, 0
	stb      r0, 0x1b0(r27)

lbl_800A9D08:
	lwz      r3, 0x1a8(r27)
	lwz      r0, 0x260(r27)
	cmplw    r3, r0
	ble      lbl_800A9D20
	li       r0, 1
	stb      r0, sFatalErrorFlag__13JASAramStream@sda21(r13)

lbl_800A9D20:
	lwz      r4, 0x25c(r27)
	lis      r5, 0x4330
	lwz      r3, 0x260(r27)
	li       r0, -1
	lwz      r6, 0x1b4(r27)
	subf     r3, r4, r3
	stw      r5, 0x10(r1)
	lfd      f1, lbl_80516EC0@sda21(r2)
	cmplw    r6, r0
	stw      r6, 0x14(r1)
	lfd      f0, 0x10(r1)
	stw      r3, 0x1c(r1)
	fsubs    f2, f0, f1
	stw      r5, 0x18(r1)
	lfd      f0, 0x18(r1)
	fsubs    f0, f0, f1
	fmuls    f2, f2, f0
	bge      lbl_800A9D80
	lwz      r0, 0x1a8(r27)
	stw      r5, 0x20(r1)
	stw      r0, 0x24(r1)
	lfd      f0, 0x20(r1)
	fsubs    f0, f0, f1
	fadds    f2, f2, f0

lbl_800A9D80:
	lwz      r3, 0x254(r27)
	lis      r0, 0x4330
	stw      r0, 0x28(r1)
	lfd      f1, lbl_80516EC0@sda21(r2)
	stw      r3, 0x2c(r1)
	lfd      f0, 0x28(r1)
	fsubs    f0, f0, f1
	fdivs    f2, f2, f0
	stfs     f2, 0x1b8(r27)
	lwz      r3, 0x1a8(r27)
	lwz      r0, 0x260(r27)
	addi     r3, r3, 0x190
	cmplw    r3, r0
	blt      lbl_800A9EAC
	lbz      r0, 0x1b0(r27)
	cmplwi   r0, 0
	bne      lbl_800A9EAC
	lbz      r0, 0x258(r27)
	cmplwi   r0, 0
	beq      lbl_800A9E1C
	lwz      r3, 0x1ac(r27)
	lwz      r0, 0x24c(r27)
	addi     r3, r3, 1
	cmplw    r3, r0
	blt      lbl_800A9DE8
	li       r3, 0

lbl_800A9DE8:
	lwz      r4, 0x25c(r27)
	mullw    r0, r3, r31
	divwu    r3, r4, r31
	mullw    r3, r3, r31
	subf     r3, r3, r4
	add      r0, r3, r0
	stw      r0, 0x110(r29)
	lwz      r0, 0x110(r29)
	stw      r0, 0x210(r27)
	lwz      r0, 0x21c(r27)
	ori      r0, r0, 2
	stw      r0, 0x21c(r27)
	b        lbl_800A9E34

lbl_800A9E1C:
	li       r0, 0
	sth      r0, 0x102(r29)
	sth      r0, 0x218(r27)
	lwz      r0, 0x21c(r27)
	ori      r0, r0, 8
	stw      r0, 0x21c(r27)

lbl_800A9E34:
	lwz      r7, 0x260(r27)
	li       r0, 1
	lwz      r5, 0x1ac(r27)
	divwu    r6, r7, r31
	lwz      r4, 0x24c(r27)
	lwz      r3, 0x74(r29)
	mullw    r6, r6, r31
	mullw    r5, r5, r31
	subf     r6, r6, r7
	mullw    r4, r31, r4
	add      r5, r6, r5
	subf     r4, r5, r4
	subf     r3, r4, r3
	stw      r3, 0x74(r29)
	lwz      r3, 0x74(r29)
	stw      r3, 0x20c(r27)
	lwz      r3, 0x21c(r27)
	ori      r3, r3, 1
	stw      r3, 0x21c(r27)
	lwz      r3, 0x260(r27)
	lwz      r4, 0x25c(r27)
	addi     r3, r3, -1
	lwz      r5, 0x1ac(r27)
	divwu    r4, r4, r31
	divwu    r3, r3, r31
	subf     r3, r4, r3
	add      r3, r3, r5
	addi     r3, r3, 1
	stw      r3, 0x1ac(r27)
	stb      r0, 0x1b0(r27)

lbl_800A9EAC:
	lwz      r3, 0xec(r28)
	lwz      r0, 0x70(r29)
	subf.    r3, r3, r0
	beq      lbl_800A9EC0
	addi     r3, r3, -1

lbl_800A9EC0:
	lwz      r0, sBlockSize__13JASAramStream@sda21(r13)
	lwz      r4, 0x1a0(r27)
	divwu    r30, r3, r0
	cmplw    r30, r4
	beq      lbl_800AA048
	xor      r0, r4, r30
	lis      r3, loadToAramTask__13JASAramStreamFPv@ha
	cntlzw   r0, r0
	li       r26, 0
	slw      r0, r4, r0
	addi     r25, r3, loadToAramTask__13JASAramStreamFPv@l
	srwi     r24, r0, 0x1f
	b        lbl_800A9F50

lbl_800A9EF4:
	lwz      r3, sLoadThread__13JASAramStream@sda21(r13)
	mr       r4, r25
	mr       r5, r27
	bl       sendCmdMsg__13JASTaskThreadFPFPv_vPv
	cmpwi    r3, 0
	bne      lbl_800A9F18
	li       r0, 1
	stb      r0, sFatalErrorFlag__13JASAramStream@sda21(r13)
	b        lbl_800A9F5C

lbl_800A9F18:
	bl       OSDisableInterrupts
	lwz      r4, 0x208(r27)
	stw      r3, 8(r1)
	addi     r0, r4, 1
	stw      r0, 0x208(r27)
	bl       OSRestoreInterrupts
	lwz      r3, 0x1a0(r27)
	addi     r0, r3, 1
	stw      r0, 0x1a0(r27)
	lwz      r3, 0x1a0(r27)
	lwz      r0, 0x24c(r27)
	cmplw    r3, r0
	blt      lbl_800A9F50
	stw      r26, 0x1a0(r27)

lbl_800A9F50:
	lwz      r0, 0x1a0(r27)
	cmplw    r30, r0
	bne      lbl_800A9EF4

lbl_800A9F5C:
	cmplwi   r24, 0
	beq      lbl_800AA078
	lwz      r3, 0x24c(r27)
	lwz      r0, 0x1ac(r27)
	subf     r0, r3, r0
	stw      r0, 0x1ac(r27)
	lbz      r0, 0x19d(r27)
	cmplwi   r0, 0
	beq      lbl_800A9FE0
	lbz      r0, 0x1b0(r27)
	cmplwi   r0, 0
	bne      lbl_800A9FAC
	lwz      r0, 0x74(r29)
	add      r0, r0, r31
	stw      r0, 0x74(r29)
	lwz      r0, 0x74(r29)
	stw      r0, 0x20c(r27)
	lwz      r0, 0x21c(r27)
	ori      r0, r0, 1
	stw      r0, 0x21c(r27)

lbl_800A9FAC:
	lwz      r3, 0x114(r29)
	li       r0, 0
	add      r3, r3, r31
	stw      r3, 0x114(r29)
	lwz      r3, 0x114(r29)
	stw      r3, 0x214(r27)
	lwz      r3, 0x21c(r27)
	ori      r3, r3, 4
	stw      r3, 0x21c(r27)
	lwz      r3, 0x250(r27)
	stw      r3, 0x24c(r27)
	stb      r0, 0x19d(r27)
	b        lbl_800AA078

lbl_800A9FE0:
	lwz      r3, 0x250(r27)
	lwz      r0, 0x24c(r27)
	addi     r3, r3, -1
	cmplw    r0, r3
	beq      lbl_800AA078
	stw      r3, 0x24c(r27)
	lwz      r0, 0x114(r29)
	subf     r0, r31, r0
	stw      r0, 0x114(r29)
	lwz      r0, 0x114(r29)
	stw      r0, 0x214(r27)
	lwz      r0, 0x21c(r27)
	ori      r0, r0, 4
	stw      r0, 0x21c(r27)
	lbz      r0, 0x1b0(r27)
	cmplwi   r0, 0
	bne      lbl_800AA078
	lwz      r0, 0x74(r29)
	subf     r0, r31, r0
	stw      r0, 0x74(r29)
	lwz      r0, 0x74(r29)
	stw      r0, 0x20c(r27)
	lwz      r0, 0x21c(r27)
	ori      r0, r0, 1
	stw      r0, 0x21c(r27)
	b        lbl_800AA078

lbl_800AA048:
	lwz      r0, 0x208(r27)
	cmplwi   r0, 0
	bne      lbl_800AA078
	lbz      r0, sSystemPauseFlag__13JASAramStream@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_800AA078
	lbz      r0, 0x19e(r27)
	rlwinm   r0, r0, 0, 0x1f, 0x1d
	stb      r0, 0x19e(r27)
	lbz      r0, 0x19e(r27)
	rlwinm   r0, r0, 0, 0x1e, 0x1c
	stb      r0, 0x19e(r27)

lbl_800AA078:
	lwz      r3, 0x74(r29)
	lhz      r0, 0x64(r29)
	add      r0, r3, r0
	stw      r0, 0x1a4(r27)
	lwz      r3, 0x250(r27)
	lwz      r4, 0x208(r27)
	addi     r0, r3, -2
	cmplw    r4, r0
	blt      lbl_800AA0FC
	lbz      r0, 0x19e(r27)
	ori      r0, r0, 4
	stb      r0, 0x19e(r27)
	b        lbl_800AA0FC

lbl_800AA0AC:
	lwz      r0, 0x21c(r27)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_800AA0C0
	lwz      r0, 0x20c(r27)
	stw      r0, 0x74(r29)

lbl_800AA0C0:
	lwz      r0, 0x21c(r27)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_800AA0D4
	lwz      r0, 0x210(r27)
	stw      r0, 0x110(r29)

lbl_800AA0D4:
	lwz      r0, 0x21c(r27)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	beq      lbl_800AA0E8
	lwz      r0, 0x214(r27)
	stw      r0, 0x114(r29)

lbl_800AA0E8:
	lwz      r0, 0x21c(r27)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	beq      lbl_800AA0FC
	lhz      r0, 0x218(r27)
	sth      r0, 0x102(r29)

lbl_800AA0FC:
	lwz      r0, 0x180(r27)
	li       r3, 0
	cmplw    r28, r0
	beq      lbl_800AA160
	lwz      r0, 0x184(r27)
	li       r3, 1
	cmplw    r28, r0
	beq      lbl_800AA160
	lwz      r0, 0x188(r27)
	li       r3, 2
	cmplw    r28, r0
	beq      lbl_800AA160
	lwz      r0, 0x18c(r27)
	li       r3, 3
	cmplw    r28, r0
	beq      lbl_800AA160
	lwz      r0, 0x190(r27)
	li       r3, 4
	cmplw    r28, r0
	beq      lbl_800AA160
	lwz      r0, 0x194(r27)
	li       r3, 5
	cmplw    r28, r0
	beq      lbl_800AA160
	li       r3, 6

lbl_800AA160:
	slwi     r0, r3, 1
	add      r3, r27, r0
	lha      r0, 0x220(r3)
	sth      r0, 0x104(r29)
	lha      r0, 0x22c(r3)
	sth      r0, 0x106(r29)
	b        lbl_800AA27C

lbl_800AA17C:
	lwz      r3, 0x180(r27)
	li       r4, 0
	li       r0, 0
	cmplw    r28, r3
	bne      lbl_800AA198
	stw      r0, 0x180(r27)
	b        lbl_800AA1A4

lbl_800AA198:
	cmplwi   r3, 0
	beq      lbl_800AA1A4
	li       r4, 1

lbl_800AA1A4:
	lwz      r3, 0x184(r27)
	cmplw    r28, r3
	bne      lbl_800AA1B8
	stw      r0, 0x184(r27)
	b        lbl_800AA1C4

lbl_800AA1B8:
	cmplwi   r3, 0
	beq      lbl_800AA1C4
	li       r4, 1

lbl_800AA1C4:
	lwz      r3, 0x188(r27)
	cmplw    r28, r3
	bne      lbl_800AA1D8
	stw      r0, 0x188(r27)
	b        lbl_800AA1E4

lbl_800AA1D8:
	cmplwi   r3, 0
	beq      lbl_800AA1E4
	li       r4, 1

lbl_800AA1E4:
	lwz      r3, 0x18c(r27)
	cmplw    r28, r3
	bne      lbl_800AA1F8
	stw      r0, 0x18c(r27)
	b        lbl_800AA204

lbl_800AA1F8:
	cmplwi   r3, 0
	beq      lbl_800AA204
	li       r4, 1

lbl_800AA204:
	lwz      r3, 0x190(r27)
	cmplw    r28, r3
	bne      lbl_800AA218
	stw      r0, 0x190(r27)
	b        lbl_800AA224

lbl_800AA218:
	cmplwi   r3, 0
	beq      lbl_800AA224
	li       r4, 1

lbl_800AA224:
	lwz      r3, 0x194(r27)
	cmplw    r28, r3
	bne      lbl_800AA238
	stw      r0, 0x194(r27)
	b        lbl_800AA244

lbl_800AA238:
	cmplwi   r3, 0
	beq      lbl_800AA244
	li       r4, 1

lbl_800AA244:
	clrlwi.  r0, r4, 0x18
	bne      lbl_800AA27C
	li       r0, 1
	lis      r3, finishTask__13JASAramStreamFPv@ha
	stb      r0, 0x204(r27)
	addi     r4, r3, finishTask__13JASAramStreamFPv@l
	mr       r5, r27
	lwz      r3, sLoadThread__13JASAramStream@sda21(r13)
	bl       sendCmdMsg__13JASTaskThreadFPFPv_vPv
	cmpwi    r3, 0
	bne      lbl_800AA27C
	li       r0, 1
	stb      r0, sFatalErrorFlag__13JASAramStream@sda21(r13)
	b        lbl_800AA294

lbl_800AA27C:
	lbz      r4, 0x19e(r27)
	mr       r3, r28
	neg      r0, r4
	or       r0, r0, r4
	srwi     r4, r0, 0x1f
	bl       setPauseFlag__10JASChannelFb

lbl_800AA294:
	lmw      r24, 0x30(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AA2A8
 * Size:	0001E4
 */
void JASAramStream::channelProc()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	li       r30, 1
	b        lbl_800AA2F0

lbl_800AA2C8:
	lwz      r0, 8(r1)
	cmpwi    r0, 5
	beq      lbl_800AA2EC
	bge      lbl_800AA2F0
	cmpwi    r0, 4
	bge      lbl_800AA2E4
	b        lbl_800AA2F0

lbl_800AA2E4:
	stb      r30, 0x19c(r31)
	b        lbl_800AA2F0

lbl_800AA2EC:
	stb      r30, 0x19d(r31)

lbl_800AA2F0:
	addi     r3, r31, 0x20
	addi     r4, r1, 8
	li       r5, 0
	bl       OSReceiveMessage
	cmpwi    r3, 0
	bne      lbl_800AA2C8
	lbz      r0, 0x19c(r31)
	cmplwi   r0, 0
	bne      lbl_800AA388
	li       r3, 0
	b        lbl_800AA474
	b        lbl_800AA388

lbl_800AA320:
	lwz      r3, 8(r1)
	clrlwi   r0, r3, 0x18
	cmpwi    r0, 2
	beq      lbl_800AA36C
	bge      lbl_800AA344
	cmpwi    r0, 0
	beq      lbl_800AA350
	bge      lbl_800AA35C
	b        lbl_800AA388

lbl_800AA344:
	cmpwi    r0, 4
	bge      lbl_800AA388
	b        lbl_800AA37C

lbl_800AA350:
	mr       r3, r31
	bl       channelStart__13JASAramStreamFv
	b        lbl_800AA388

lbl_800AA35C:
	srwi     r4, r3, 0x10
	mr       r3, r31
	bl       channelStop__13JASAramStreamFUs
	b        lbl_800AA388

lbl_800AA36C:
	lbz      r0, 0x19e(r31)
	ori      r0, r0, 1
	stb      r0, 0x19e(r31)
	b        lbl_800AA388

lbl_800AA37C:
	lbz      r0, 0x19e(r31)
	rlwinm   r0, r0, 0, 0x18, 0x1e
	stb      r0, 0x19e(r31)

lbl_800AA388:
	mr       r3, r31
	addi     r4, r1, 8
	li       r5, 0
	bl       OSReceiveMessage
	cmpwi    r3, 0
	bne      lbl_800AA320
	lwz      r0, 0x180(r31)
	cmplwi   r0, 0
	bne      lbl_800AA3B4
	li       r3, 0
	b        lbl_800AA474

lbl_800AA3B4:
	lbz      r0, sFatalErrorFlag__13JASAramStream@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_800AA3CC
	lbz      r0, 0x19e(r31)
	ori      r0, r0, 8
	stb      r0, 0x19e(r31)

lbl_800AA3CC:
	lbz      r0, sSystemPauseFlag__13JASAramStream@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_800AA3E4
	lbz      r0, 0x19e(r31)
	ori      r0, r0, 2
	stb      r0, 0x19e(r31)

lbl_800AA3E4:
	mr       r3, r31
	li       r5, 0
	b        lbl_800AA438

lbl_800AA3F0:
	lfs      f1, 0x264(r31)
	lfs      f0, 0x26c(r3)
	lwz      r4, 0x180(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x100(r4)
	lfs      f0, 0x268(r31)
	stfs     f0, 0x104(r4)
	lbz      r0, 0x2d8(r31)
	cmplwi   r0, 0
	beq      lbl_800AA420
	lfs      f0, 0x284(r3)
	stfs     f0, 0xd0(r4)

lbl_800AA420:
	lfs      f0, 0x29c(r3)
	addi     r5, r5, 1
	stfs     f0, 0xd8(r4)
	lfs      f0, 0x2b4(r3)
	addi     r3, r3, 4
	stfs     f0, 0xe0(r4)

lbl_800AA438:
	lhz      r4, 0x24a(r31)
	cmpw     r5, r4
	blt      lbl_800AA3F0
	lbz      r0, 0x2d8(r31)
	cmplwi   r0, 0
	bne      lbl_800AA470
	cmplwi   r4, 2
	bne      lbl_800AA470
	lfs      f1, lbl_80516EB0@sda21(r2)
	lwz      r3, 0x180(r31)
	lfs      f0, lbl_80516EB4@sda21(r2)
	stfs     f1, 0xd0(r3)
	lwz      r3, 0x184(r31)
	stfs     f0, 0xd0(r3)

lbl_800AA470:
	li       r3, 0

lbl_800AA474:
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
 * Address:	800AA48C
 * Size:	000240
 */
void JASAramStream::channelStart()
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stmw     r21, 0x24(r1)
	mr       r23, r3
	lhz      r0, 0x248(r3)
	cmpwi    r0, 1
	beq      lbl_800AA4CC
	bge      lbl_800AA4D0
	cmpwi    r0, 0
	bge      lbl_800AA4C4
	b        lbl_800AA4D0

lbl_800AA4C4:
	li       r26, 0
	b        lbl_800AA4D0

lbl_800AA4CC:
	li       r26, 3

lbl_800AA4D0:
	lis      r3, OSC_ENV@ha
	lfd      f31, lbl_80516EC0@sda21(r2)
	mr       r28, r23
	mr       r27, r23
	addi     r31, r3, OSC_ENV@l
	li       r25, 0
	lis      r30, 0x4330
	b        lbl_800AA69C

lbl_800AA4F0:
	addi     r24, r28, 0x90
	li       r3, -1
	stb      r26, 0x90(r28)
	li       r0, 0
	stw      r3, 0xa0(r28)
	stw      r0, 0xa4(r28)
	lhz      r0, 0x248(r23)
	lwz      r4, 0x24c(r23)
	cmplwi   r0, 0
	bne      lbl_800AA534
	lwz      r0, sBlockSize__13JASAramStream@sda21(r13)
	lis      r3, 0x38E38E39@ha
	addi     r3, r3, 0x38E38E39@l
	slwi     r0, r0, 4
	mulhwu   r0, r3, r0
	srwi     r0, r0, 1
	b        lbl_800AA53C

lbl_800AA534:
	lwz      r0, sBlockSize__13JASAramStream@sda21(r13)
	srwi     r0, r0, 1

lbl_800AA53C:
	mullw    r4, r4, r0
	li       r3, 0
	addi     r0, r2, one$870@sda21
	stw      r4, 0x18(r24)
	lwz      r4, 0x18(r24)
	stw      r4, 0x1c(r24)
	sth      r3, 0x20(r24)
	sth      r3, 0x22(r24)
	stw      r0, 0x24(r24)
	lwz      r0,
"sInstance__123JASSingletonHolder<62JASMemPool<10JASChannel,Q217JASThreadingModel14SingleThreaded>,Q217JASCreationPolicy15NewFromRootHeap>"@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_800AA5A8
	bl       OSDisableInterrupts
	lwz      r0,
"sInstance__123JASSingletonHolder<62JASMemPool<10JASChannel,Q217JASThreadingModel14SingleThreaded>,Q217JASCreationPolicy15NewFromRootHeap>"@sda21(r13)
	stw      r3, 8(r1)
	cmplwi   r0, 0
	bne      lbl_800AA5A0
	lwz      r4, JASDram@sda21(r13)
	li       r3, 0xc
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r29, r3, r3
	beq      lbl_800AA59C
	bl       __ct__17JASGenericMemPoolFv

lbl_800AA59C:
	stw      r29,
"sInstance__123JASSingletonHolder<62JASMemPool<10JASChannel,Q217JASThreadingModel14SingleThreaded>,Q217JASCreationPolicy15NewFromRootHeap>"@sda21(r13)

lbl_800AA5A0:
	lwz      r3, 8(r1)
	bl       OSRestoreInterrupts

lbl_800AA5A8:
	lwz      r3,
"sInstance__123JASSingletonHolder<62JASMemPool<10JASChannel,Q217JASThreadingModel14SingleThreaded>,Q217JASCreationPolicy15NewFromRootHeap>"@sda21(r13)
	li       r4, 0x118
	bl       alloc__17JASGenericMemPoolFUl
	or.      r29, r3, r3
	beq      lbl_800AA5D0
	lis      r4,
channelCallback__13JASAramStreamFUlP10JASChannelPQ26JASDsp8TChannelPv@ha mr r5,
r23 addi     r4, r4,
channelCallback__13JASAramStreamFUlP10JASChannelPQ26JASDsp8TChannelPv@l bl
__ct__10JASChannelFPFUlP10JASChannelPQ26JASDsp8TChannelPv_vPv mr       r29, r3

lbl_800AA5D0:
	lfs      f1, lbl_80516EB0@sda21(r2)
	li       r0, 0x7f
	sth      r0, 0xbc(r29)
	mr       r3, r29
	fmr      f2, f1
	lfs      f3, lbl_80516EB4@sda21(r2)
	bl       setPanPower__10JASChannelFfff
	li       r0, 1
	mr       r22, r23
	stb      r0, 0x108(r29)
	li       r21, 0
	stb      r0, 0x109(r29)
	stb      r0, 0x10a(r29)

lbl_800AA604:
	lhz      r5, 0x2cc(r22)
	mr       r3, r29
	mr       r4, r21
	bl       setMixConfig__10JASChannelFiUs
	addi     r21, r21, 1
	addi     r22, r22, 2
	cmpwi    r21, 6
	blt      lbl_800AA604
	bl       getDacRate__9JASDriverFv
	lwz      r0, 0x254(r23)
	mr       r3, r29
	stw      r30, 0x10(r1)
	mr       r5, r31
	li       r4, 0
	stw      r0, 0x14(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f31
	fdivs    f0, f0, f1
	stfs     f0, 0xf0(r29)
	lfs      f0, 0xf0(r29)
	stfs     f0, 0xf8(r29)
	bl       setOscInit__10JASChannelFiPCQ213JASOscillator4Data
	stw      r24, 0xe8(r29)
	li       r0, 0
	mr       r3, r29
	lwz      r5, sBlockSize__13JASAramStream@sda21(r13)
	lwz      r4, 0x250(r23)
	lwz      r6, 0x238(r23)
	mullw    r4, r5, r4
	mullw    r4, r25, r4
	add      r4, r6, r4
	stw      r4, 0xec(r29)
	stb      r0, 0xe4(r29)
	bl       playForce__10JASChannelFv
	stw      r29, 0x180(r27)
	addi     r28, r28, 0x28
	addi     r27, r27, 4
	addi     r25, r25, 1

lbl_800AA69C:
	lhz      r0, 0x24a(r23)
	cmpw     r25, r0
	blt      lbl_800AA4F0
	li       r0, 0
	stw      r0, 0x198(r23)
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	lmw      r21, 0x24(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AA6CC
 * Size:	000078
 */
void JASAramStream::channelStop(unsigned short)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	mr       r31, r28
	b        lbl_800AA718

lbl_800AA6FC:
	lwz      r3, 0x180(r31)
	cmplwi   r3, 0
	beq      lbl_800AA710
	mr       r4, r29
	bl       release__10JASChannelFUs

lbl_800AA710:
	addi     r31, r31, 4
	addi     r30, r30, 1

lbl_800AA718:
	lhz      r0, 0x24a(r28)
	cmpw     r30, r0
	blt      lbl_800AA6FC
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	.4byte   0x00000000 /* unknown instruction */
	.4byte 0x00000000     /* unknown instruction */
	    .4byte 0x00000000 /* unknown instruction */
	    .4byte 0x00000000 /* unknown instruction */
	    .4byte 0x00000000 /* unknown instruction */
	    .4byte 0x00000000 /* unknown instruction */
	    .4byte 0x00000000 /* unknown instruction */
	    * /
}
