#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__8JAIBasic
    __vt__8JAIBasic:
        .4byte 0
        .4byte 0
        .4byte makeSequence__8JAIBasicFv
        .4byte makeSe__8JAIBasicFv
        .4byte makeStream__8JAIBasicFv
        .4byte getMapInfoFxline__8JAIBasicFUl
        .4byte getMapInfoGround__8JAIBasicFUl
        .4byte getMapInfoFxParameter__8JAIBasicFUl
        .4byte setSeExtParameter__8JAIBasicFP8JAISound
        .4byte setRegisterTrackCallback__8JAIBasicFv

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global msStopStatus__8JAIBasic
    msStopStatus__8JAIBasic:
        .4byte 0x03000000

    .section .sbss # 0x80514D80 - 0x80516360
    .global msBasic__8JAIBasic
    msBasic__8JAIBasic:
        .skip 0x4
    .global msCurrentHeap__8JAIBasic
    msCurrentHeap__8JAIBasic:
        .skip 0x4
    .global msStopMode__8JAIBasic
    msStopMode__8JAIBasic:
        .skip 0x4
    .global msAudioStopTime__8JAIBasic
    msAudioStopTime__8JAIBasic:
        .skip 0x4
    .global msDspLevel__8JAIBasic
    msDspLevel__8JAIBasic:
        .skip 0x4
    .global msAutoLevel__8JAIBasic
    msAutoLevel__8JAIBasic:
        .skip 0x4
    .global msAutoDif__8JAIBasic
    msAutoDif__8JAIBasic:
        .skip 0x4
    .global msDspDif__8JAIBasic
    msDspDif__8JAIBasic:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516F08
    lbl_80516F08:
        .4byte 0x25732573
        .4byte 0x25630000
    .global lbl_80516F10
    lbl_80516F10:
        .4byte 0x00000000
    .global lbl_80516F14
    lbl_80516F14:
        .4byte 0xC2480000
    .global lbl_80516F18
    lbl_80516F18:
        .float 1.0
    .global lbl_80516F1C
    lbl_80516F1C:
        .4byte 0x42FE0000
    .global lbl_80516F20
    lbl_80516F20:
        .4byte 0x43300000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	800AC158
 * Size:	00007C
 */
JAIBasic::JAIBasic()
{
	/*
	lis      r4, __vt__8JAIBasic@ha
	li       r5, 0
	addi     r4, r4, __vt__8JAIBasic@l
	li       r0, 2
	stw      r4, 0(r3)
	stw      r3, msBasic__8JAIBasic@sda21(r13)
	lbz      r4, 0xe(r3)
	rlwimi   r4, r5, 7, 0x18, 0x18
	stb      r4, 0xe(r3)
	lbz      r4, 0xe(r3)
	rlwimi   r4, r5, 6, 0x19, 0x19
	stb      r4, 0xe(r3)
	lbz      r4, 0xe(r3)
	rlwimi   r4, r5, 5, 0x1a, 0x1a
	stb      r4, 0xe(r3)
	lbz      r4, 0xe(r3)
	rlwimi   r4, r5, 4, 0x1b, 0x1b
	stb      r4, 0xe(r3)
	lbz      r4, 0xe(r3)
	rlwimi   r4, r5, 3, 0x1c, 0x1c
	stb      r4, 0xe(r3)
	stw      r5, 0x14(r3)
	stw      r5, 4(r3)
	stw      r5, 0x10(r3)
	stb      r0, 0xc(r3)
	stw      r5, 0x1c(r3)
	stw      r5, 8(r3)
	stw      r5, 0x18(r3)
	lwz      r0, JASDram@sda21(r13)
	stw      r0, msCurrentHeap__8JAIBasic@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AC1D4
 * Size:	000020
 */
void JAIBasic::initDriver(JKRSolidHeap*, unsigned long, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       initAudioThread__8JAIBasicFP12JKRSolidHeapUlUc
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AC1F4
 * Size:	000020
 */
void JAIBasic::initInterface(unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       initInterfaceMain__8JAIBasicFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void JAIBasic::bootDSP()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AC214
 * Size:	0000C0
 */
void JAIBasic::initInterfaceMain()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       initHeap__8JAIBasicFv
	mr       r3, r31
	bl       initResourcePath__8JAIBasicFv
	mr       r3, r31
	bl       initArchive__8JAIBasicFv
	mr       r3, r31
	bl       initReadFile__8JAIBasicFv
	cmpwi    r3, 0
	beq      lbl_800AC2C0
	lbz      r0, 0xe(r31)
	rlwinm.  r0, r0, 0x19, 0x1f, 0x1f
	bne      lbl_800AC26C
	lwz      r12, firstLoadCallback__Q27JAInter8BankWave@sda21(r13)
	cmplwi   r12, 0
	beq      lbl_800AC26C
	mtctr    r12
	bctrl

lbl_800AC26C:
	bl       init__Q27JAInter14DummyObjectMgrFv
	bl       init__Q27JAInter2FxFv
	bl       init__Q27JAInter11SequenceMgrFv
	bl       init__Q27JAInter5SeMgrFv
	bl       init__Q27JAInter9StreamMgrFv
	lwz      r3, stayHeapMax__18JAIGlobalParameter@sda21(r13)
	lwz      r0, autoHeapMax__18JAIGlobalParameter@sda21(r13)
	lwz      r4, stayHeapSize__18JAIGlobalParameter@sda21(r13)
	clrlwi   r3, r3, 0x18
	lwz      r6, autoHeapRoomSize__18JAIGlobalParameter@sda21(r13)
	clrlwi   r5, r0, 0x18
	bl       init__Q27JAInter7HeapMgrFUcUlUcUl
	mr       r3, r31
	bl       initCamera__8JAIBasicFv
	lwz      r12, seStartCallback__Q27JAInter5SeMgr@sda21(r13)
	mtctr    r12
	bctrl
	lbz      r0, 0xe(r31)
	rlwinm.  r0, r0, 0x19, 0x1f, 0x1f
	bne      lbl_800AC2C0
	bl       checkEntriedSeq__Q27JAInter11SequenceMgrFv

lbl_800AC2C0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AC2D4
 * Size:	00005C
 */
void JAIBasic::initHeap()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, interfaceHeapSize__18JAIGlobalParameter@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_800AC314
	lwz      r4, JASDram@sda21(r13)
	mr       r3, r0
	li       r5, 0
	bl       create__12JKRSolidHeapFUlP7JKRHeapb
	stw      r3, 8(r31)
	lwz      r0, 8(r31)
	stw      r0, msCurrentHeap__8JAIBasic@sda21(r13)
	b        lbl_800AC31C

lbl_800AC314:
	lwz      r0, JASDram@sda21(r13)
	stw      r0, msCurrentHeap__8JAIBasic@sda21(r13)

lbl_800AC31C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AC330
 * Size:	00004C
 */
void JAIBasic::initArchive()
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	bl       getArchivePointer__Q27JAInter11SequenceMgrFv
	cmplwi   r3, 0
	bne      lbl_800AC36C
	addi     r3, r1, 8
	bl       getArchiveName__Q27JAInter11SequenceMgrFPc
	lwz      r5, msCurrentHeap__8JAIBasic@sda21(r13)
	addi     r3, r1, 8
	li       r4, 3
	li       r6, 1
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	bl       setArchivePointer__Q27JAInter11SequenceMgrFP10JKRArchive
	bl       getArchivePointer__Q27JAInter11SequenceMgrFv

lbl_800AC36C:
	lwz      r0, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AC37C
 * Size:	0000C8
 */
void JAIBasic::initResourcePath()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r0, audioResPath__18JAIGlobalParameter@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_800AC430
	lwz      r3, wavePath__18JAIGlobalParameter@sda21(r13)
	bl       strlen
	mr       r31, r3
	lwz      r3, audioResPath__18JAIGlobalParameter@sda21(r13)
	bl       strlen
	mr       r4, r3
	addi     r0, r31, 1
	lwz      r3, JASDram@sda21(r13)
	add      r4, r4, r0
	li       r5, 0
	bl       alloc__7JKRHeapFUli
	lwz      r5, audioResPath__18JAIGlobalParameter@sda21(r13)
	mr       r31, r3
	lwz      r6, wavePath__18JAIGlobalParameter@sda21(r13)
	addi     r4, r2, lbl_80516F08@sda21
	li       r7, 0
	crclr    6
	bl       sprintf
	stw      r31, wavePath__18JAIGlobalParameter@sda21(r13)
	lwz      r3, streamPath__18JAIGlobalParameter@sda21(r13)
	bl       strlen
	mr       r31, r3
	lwz      r3, audioResPath__18JAIGlobalParameter@sda21(r13)
	bl       strlen
	mr       r4, r3
	addi     r0, r31, 1
	lwz      r3, JASDram@sda21(r13)
	add      r4, r4, r0
	li       r5, 0
	bl       alloc__7JKRHeapFUli
	lwz      r5, audioResPath__18JAIGlobalParameter@sda21(r13)
	mr       r31, r3
	lwz      r6, streamPath__18JAIGlobalParameter@sda21(r13)
	addi     r4, r2, lbl_80516F08@sda21
	li       r7, 0
	crclr    6
	bl       sprintf
	stw      r31, streamPath__18JAIGlobalParameter@sda21(r13)

lbl_800AC430:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AC444
 * Size:	000034
 */
void JAIBasic::setCameraInfo(Vec*, Vec*, float (*)[4], unsigned long)
{
	/*
	lwz      r0, audioCameraMax__18JAIGlobalParameter@sda21(r13)
	cmplw    r0, r7
	blelr
	mulli    r8, r7, 0xc
	lwz      r7, 4(r3)
	stwx     r4, r7, r8
	lwz      r0, 4(r3)
	add      r4, r0, r8
	stw      r5, 4(r4)
	lwz      r0, 4(r3)
	add      r3, r0, r8
	stw      r6, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AC478
 * Size:	000028
 */
void JAIBasic::setRegisterTrackCallback()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, setParameterSeqSync__8JAIBasicFP8JASTrackUs@ha
	stw      r0, 0x14(r1)
	addi     r3, r3, setParameterSeqSync__8JAIBasicFP8JASTrackUs@l
	bl       registerSeqCallback__8JASTrackFPFP8JASTrackUs_Us
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AC4A0
 * Size:	000098
 */
void JAIBasic::initAudioThread(JKRSolidHeap*, unsigned long, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	mr       r0, r4
	li       r4, 0x2000
	stw      r31, 0xc(r1)
	mr       r31, r5
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r0
	bl       setupRootHeap__9JASKernelFP12JKRSolidHeapUl
	bl       ARGetBaseAddress
	mr       r4, r31
	bl       setupAramHeap__9JASKernelFUlUl
	lwz      r3, systemTrackMax__18JAIGlobalParameter@sda21(r13)
	bl       newMemPool__8JASTrackFi
	lbz      r3, audioDvdThreadPriority__18JAIGlobalParameter@sda21(r13)
	li       r4, 0x80
	li       r5, 0x1000
	bl       createThread__6JASDvdFliUl
	lbz      r3, audioSystemThreadPriority__18JAIGlobalParameter@sda21(r13)
	bl       create__14JASAudioThreadFl
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lfs      f1, inputGainDown__18JAIGlobalParameter@sda21(r13)
	lfs      f2, outputGainUp__18JAIGlobalParameter@sda21(r13)
	bl       setMixerLevel__9JASDriverFff
	li       r0, 0
	stb      r0, msStopStatus__8JAIBasic@sda21(r13)
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
 * Address:	800AC538
 * Size:	000158
 */
void JAIBasic::initCamera()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	li       r5, 0x20
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r30, r3
	lwz      r31, audioCameraMax__18JAIGlobalParameter@sda21(r13)
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	mulli    r3, r31, 0xc
	addi     r3, r3, 0x10
	bl       __nwa__FUlP7JKRHeapi
	lis      r4, __defctor__Q27JAInter6CameraFv@ha
	mr       r7, r31
	addi     r4, r4, __defctor__Q27JAInter6CameraFv@l
	li       r5, 0
	li       r6, 0xc
	bl       __construct_new_array
	stw      r3, 4(r30)
	lwz      r3, 4(r30)
	lwz      r0, 0(r3)
	cmplwi   r0, 0
	bne      lbl_800AC678
	lis      r3, nullCamera__Q27JAInter5Const@ha
	lfs      f4, lbl_80516F10@sda21(r2)
	addi     r31, r3, nullCamera__Q27JAInter5Const@l
	lfs      f0, lbl_80516F14@sda21(r2)
	lwz      r5, 0(r31)
	lis      r3, camMtx__Q27JAInter5Const@ha
	lis      r4, dummyZeroVec__Q27JAInter5Const@ha
	lfs      f3, lbl_80516F18@sda21(r2)
	stfs     f4, 0(r5)
	addi     r3, r3, camMtx__Q27JAInter5Const@l
	addi     r5, r1, 0x14
	addi     r6, r1, 8
	lwz      r7, 0(r31)
	stfs     f4, 4(r7)
	lwz      r7, 0(r31)
	stfs     f0, 8(r7)
	lwz      r7, 4(r31)
	stfs     f4, 0(r7)
	lwz      r7, 4(r31)
	stfs     f4, 4(r7)
	lwz      r7, 4(r31)
	stfs     f0, 8(r7)
	lfsu     f2, dummyZeroVec__Q27JAInter5Const@l(r4)
	stfs     f4, 0x14(r1)
	lfs      f1, 4(r4)
	lfs      f0, 8(r4)
	lwz      r4, 0(r31)
	stfs     f3, 0x18(r1)
	stfs     f4, 0x1c(r1)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	bl       C_MTXLookAt
	lis      r4, nullCamera__Q27JAInter5Const@ha
	lis      r3, camMtx__Q27JAInter5Const@ha
	addi     r6, r4, nullCamera__Q27JAInter5Const@l
	li       r10, 0
	addi     r4, r3, camMtx__Q27JAInter5Const@l
	li       r9, 0
	b        lbl_800AC66C

lbl_800AC634:
	cmplw    r0, r10
	lwz      r8, 4(r31)
	lwz      r7, 0(r6)
	ble      lbl_800AC664
	lwz      r5, 4(r30)
	addi     r3, r9, 4
	addi     r0, r9, 8
	stwx     r7, r5, r9
	lwz      r5, 4(r30)
	stwx     r8, r5, r3
	lwz      r3, 4(r30)
	stwx     r4, r3, r0

lbl_800AC664:
	addi     r9, r9, 0xc
	addi     r10, r10, 1

lbl_800AC66C:
	lwz      r0, audioCameraMax__18JAIGlobalParameter@sda21(r13)
	cmplw    r10, r0
	blt      lbl_800AC634

lbl_800AC678:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AC690
 * Size:	000014
 */
void JAInter::Camera::__defctor(void)
{
	/*
	li       r0, 0
	stw      r0, 0(r3)
	stw      r0, 4(r3)
	stw      r0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AC6A4
 * Size:	000008
 */
void JAIBasic::setInitFileLoadSwitch(unsigned char a1)
{
	// Generated from stb r4, 0xC(r3)
	_0C = a1;
}

/*
 * --INFO--
 * Address:	800AC6AC
 * Size:	00006C
 */
void JAIBasic::initReadFile()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lbz      r0, 0xc(r3)
	cmpwi    r0, 3
	beq      lbl_800AC704
	bge      lbl_800AC6D4
	cmpwi    r0, 2
	bge      lbl_800AC6E0
	b        lbl_800AC704

lbl_800AC6D4:
	cmpwi    r0, 5
	bge      lbl_800AC704
	b        lbl_800AC6F4

lbl_800AC6E0:
	bl       checkInitDataFile__Q27JAInter8InitDataFv
	cmpwi    r3, 0
	bne      lbl_800AC704
	li       r3, 0
	b        lbl_800AC708

lbl_800AC6F4:
	lwz      r0, aafPointer__Q27JAInter8InitData@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_800AC704
	bl       checkInitDataOnMemory__Q27JAInter8InitDataFv

lbl_800AC704:
	li       r3, 1

lbl_800AC708:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AC718
 * Size:	000064
 */
void JAIBasic::processFrameWork()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lbz      r0, msStopStatus__8JAIBasic@sda21(r13)
	cmplwi   r0, 2
	bge      lbl_800AC75C
	bl       check__Q27JAInter14DummyObjectMgrFv
	lwz      r12, secondLoadCallback__Q27JAInter8BankWave@sda21(r13)
	cmplwi   r12, 0
	beq      lbl_800AC750
	mtctr    r12
	bctrl

lbl_800AC750:
	bl       processGFrameSe__Q27JAInter5SeMgrFv
	bl       processGFrameSequence__Q27JAInter11SequenceMgrFv
	bl       processGFrameStream__Q27JAInter9StreamMgrFv

lbl_800AC75C:
	lwz      r3, 0x10(r31)
	addi     r0, r3, 1
	stw      r0, 0x10(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AC77C
 * Size:	000064
 */
void JAIBasic::startSoundBasic(unsigned long, JAISound**, JAInter::Actor*,
                               unsigned long, unsigned char,
                               JAInter::SoundInfo*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  rlwinm    r11,r4,0,0,1
	  stw       r0, 0x14(r1)
	  lis       r0, 0xC000
	  cmpw      r11, r0
	  beq-      .loc_0x50
	  bge-      .loc_0x34
	  lis       r10, 0x8000
	  addi      r0, r10, 0x1
	  cmpw      r11, r0
	  bge-      .loc_0x54
	  b         .loc_0x40

	.loc_0x34:
	  cmpwi     r11, 0
	  beq-      .loc_0x48
	  b         .loc_0x54

	.loc_0x40:
	  bl        .loc_0x64
	  b         .loc_0x54

	.loc_0x48:
	  bl        0xA0
	  b         .loc_0x54

	.loc_0x50:
	  bl        0xFC

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x64:
	*/
}

/*
 * --INFO--
 * Address:	800AC7E0
 * Size:	000084
 */
void JAIBasic::startSoundBasic(unsigned long, JAISequence**, JAInter::Actor*,
                               unsigned long, unsigned char,
                               JAInter::SoundInfo*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r10, r4
	  stw       r0, 0x14(r1)
	  lbz       r0, 0xE(r3)
	  rlwinm    r0,r0,26,31,31
	  cmplwi    r0, 0x1
	  beq-      .loc_0x74
	  lwz       r3, -0x7420(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x40
	  lwz       r3, 0x20(r3)
	  rlwinm    r0,r10,0,22,31
	  rlwinm    r3,r3,0,22,31
	  cmplw     r3, r0
	  beq-      .loc_0x74

	.loc_0x40:
	  cmplwi    r5, 0
	  bne-      .loc_0x58
	  lbz       r0, 0x5(r9)
	  lwz       r3, -0x73F4(r13)
	  rlwinm    r0,r0,2,0,29
	  add       r5, r3, r0

	.loc_0x58:
	  mr        r3, r5
	  mr        r4, r6
	  mr        r5, r10
	  mr        r6, r7
	  mr        r7, r8
	  mr        r8, r9
	  bl        0x6648

	.loc_0x74:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800AC864
 * Size:	000064
 */
void JAIBasic::startSoundBasic(unsigned long, JAISe**, JAInter::Actor*,
                               unsigned long, unsigned char,
                               JAInter::SoundInfo*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r10, r4
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r4,20,12,31
	  lwz       r3, -0x7410(r13)
	  lbzx      r0, r3, r0
	  cmplwi    r0, 0
	  bne-      .loc_0x44
	  mr        r3, r5
	  mr        r4, r6
	  mr        r5, r10
	  mr        r6, r7
	  mr        r7, r8
	  mr        r8, r9
	  bl        0x3184
	  b         .loc_0x54

	.loc_0x44:
	  cmplwi    r5, 0
	  beq-      .loc_0x54
	  li        r0, 0
	  stw       r0, 0x0(r5)

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800AC8C8
 * Size:	000058
 */
void JAIBasic::startSoundBasic(unsigned long, JAIStream**, JAInter::Actor*,
                               unsigned long, unsigned char,
                               JAInter::SoundInfo*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r10, r4
	  stw       r0, 0x14(r1)
	  lbz       r0, 0xE(r3)
	  rlwinm    r0,r0,27,31,31
	  cmplwi    r0, 0x1
	  beq-      .loc_0x48
	  lbz       r0, -0x73C0(r13)
	  rlwinm.   r0,r0,26,31,31
	  bne-      .loc_0x48
	  mr        r3, r5
	  mr        r4, r6
	  mr        r5, r10
	  mr        r6, r7
	  mr        r7, r8
	  mr        r8, r9
	  bl        0xB05C

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void JAIBasic::getPlayingSoundHandle(JAISound**, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AC920
 * Size:	000088
 */
void JAIBasic::stopSoundHandle(JAISound*, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r4, 0
	stw      r0, 0x14(r1)
	beq      lbl_800AC998
	lwz      r3, 0x20(r4)
	lis      r0, 0xc000
	rlwinm   r6, r3, 0, 0, 1
	cmpw     r6, r0
	beq      lbl_800AC98C
	bge      lbl_800AC960
	lis      r3, 0x80000001@ha
	addi     r0, r3, 0x80000001@l
	cmpw     r6, r0
	bge      lbl_800AC998
	b        lbl_800AC96C

lbl_800AC960:
	cmpwi    r6, 0
	beq      lbl_800AC97C
	b        lbl_800AC998

lbl_800AC96C:
	mr       r3, r4
	mr       r4, r5
	bl       releaseSeqBuffer__Q27JAInter11SequenceMgrFP11JAISequenceUl
	b        lbl_800AC998

lbl_800AC97C:
	mr       r3, r4
	mr       r4, r5
	bl       releaseSeBuffer__Q27JAInter5SeMgrFP5JAISeUl
	b        lbl_800AC998

lbl_800AC98C:
	mr       r3, r4
	mr       r4, r5
	bl       releaseStreamBuffer__Q27JAInter9StreamMgrFP9JAIStreamUl

lbl_800AC998:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void JAIBasic::stopPlayingObjectSe(void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void JAIBasic::stopPlayingIDObjectSe(unsigned long, void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void JAIBasic::stopPlayingCategorySe(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void JAIBasic::stopPlayingCategoryObjectSe(unsigned char, void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void JAIBasic::stopAllSe(void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AC9A8
 * Size:	0000AC
 */
void JAIBasic::stopAllSe(unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	rlwinm   r0, r4, 3, 0x15, 0x1c
	stw      r31, 0xc(r1)
	lwz      r3, seRegist__Q27JAInter5SeMgr@sda21(r13)
	add      r3, r3, r0
	lwz      r3, 4(r3)
	lwz      r31, 0(r3)
	b        lbl_800ACA38

lbl_800AC9D0:
	lwz      r3, 0(r31)
	lwz      r31, 0xc(r31)
	cmplwi   r3, 0
	beq      lbl_800ACA38
	lwz      r4, 0x20(r3)
	lis      r0, 0xc000
	rlwinm   r5, r4, 0, 0, 1
	cmpw     r5, r0
	beq      lbl_800ACA30
	bge      lbl_800ACA0C
	lis      r4, 0x80000001@ha
	addi     r0, r4, 0x80000001@l
	cmpw     r5, r0
	bge      lbl_800ACA38
	b        lbl_800ACA18

lbl_800ACA0C:
	cmpwi    r5, 0
	beq      lbl_800ACA24
	b        lbl_800ACA38

lbl_800ACA18:
	li       r4, 0
	bl       releaseSeqBuffer__Q27JAInter11SequenceMgrFP11JAISequenceUl
	b        lbl_800ACA38

lbl_800ACA24:
	li       r4, 0
	bl       releaseSeBuffer__Q27JAInter5SeMgrFP5JAISeUl
	b        lbl_800ACA38

lbl_800ACA30:
	li       r4, 0
	bl       releaseStreamBuffer__Q27JAInter9StreamMgrFP9JAIStreamUl

lbl_800ACA38:
	cmplwi   r31, 0
	bne      lbl_800AC9D0
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void JAIBasic::stopAllSe(unsigned char, void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void JAIBasic::stopAllSeq(void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void JAIBasic::stopActorSoundOneBuffer(void*, JSULink<JAISound>*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void JAIBasic::stopIDSoundOneBuffer(unsigned long, JSULink<JAISound>*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
void JAIBasic::stopIDActorSoundOneBuffer(unsigned long, void*,
                                         JSULink<JAISound>*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F4
 */
void JAIBasic::stopAllSound(void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void JAIBasic::getPlayingSoundLinkHeadPointer(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001D0
 */
void JAIBasic::stopAllSound(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000204
 */
void JAIBasic::stopAllSound(unsigned long, void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000174
 */
void JAIBasic::deleteObject(void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void JAIBasic::setPauseFlagAll(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001B0
 */
void JAIBasic::changeSoundScene(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800ACA54
 * Size:	000020
 */
void JAIStream::stop(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       releaseStreamBuffer__Q27JAInter9StreamMgrFP9JAIStreamUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ACA74
 * Size:	000020
 */
void JAISequence::stop(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       releaseSeqBuffer__Q27JAInter11SequenceMgrFP11JAISequenceUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ACA94
 * Size:	000010
 */
void JAIBasic::getMapInfoFxline(unsigned long)
{
	/*
	neg      r0, r4
	or       r0, r0, r4
	srwi     r3, r0, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ACAA4
 * Size:	000010
 */
void JAIBasic::getMapInfoGround(unsigned long)
{
	/*
	neg      r0, r4
	or       r0, r0, r4
	srwi     r3, r0, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ACAB4
 * Size:	000018
 */
void JAIBasic::getMapInfoFxParameter(unsigned long)
{
	/*
	cmplwi   r4, 0
	bne      lbl_800ACAC4
	lfs      f1, lbl_80516F10@sda21(r2)
	blr

lbl_800ACAC4:
	lfs      f1, lbl_80516F18@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ACACC
 * Size:	000050
 */
void JAIBasic::getSoundOffsetNumberFromID(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	bl       getInfoFormat__Q27JAInter10SoundTableFUl
	clrlwi.  r0, r3, 0x1f
	beq      lbl_800ACB00
	mr       r3, r31
	bl       getInfoPointer__Q27JAInter10SoundTableFUl
	lhz      r3, 6(r3)
	b        lbl_800ACB08

lbl_800ACB00:
	clrlwi   r0, r31, 0x16
	mr       r3, r0

lbl_800ACB08:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void JAIBasic::setSeCancelSwitch(unsigned char, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void JAIBasic::setSeCategoryVolume(unsigned char, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800ACB1C
 * Size:	0001DC
 */
void JAIBasic::setParameterSeqSync(JASTrack*, unsigned short)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	clrlwi   r0, r4, 0x10
	cmpwi    r0, 1
	stmw     r26, 8(r1)
	mr       r29, r3
	li       r30, 0
	beq      lbl_800ACC40
	bge      lbl_800ACB50
	cmpwi    r0, 0
	bge      lbl_800ACB5C
	b        lbl_800ACCE0

lbl_800ACB50:
	cmpwi    r0, 0x7f
	beq      lbl_800ACCD4
	b        lbl_800ACCE0

lbl_800ACB5C:
	clrlwi   r31, r0, 0x1f
	li       r26, 0
	b        lbl_800ACC30

lbl_800ACB68:
	mr       r3, r26
	bl       getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
	lwz      r0, 0x48(r3)
	cmplwi   r0, 0
	beq      lbl_800ACC2C
	mr       r3, r26
	bl       getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
	lwz      r4, 0x48(r3)
	mr       r3, r26
	addi     r28, r4, 0x30c
	bl       getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
	lwz      r3, 0x48(r3)
	lwz      r0, 0x20(r3)
	rlwinm.  r0, r0, 0, 0x14, 0x14
	beq      lbl_800ACBB0
	lwz      r3, 0x2f8(r29)
	lwz      r27, 0x2f8(r3)
	b        lbl_800ACBB4

lbl_800ACBB0:
	lwz      r27, 0x2f8(r29)

lbl_800ACBB4:
	cmplw    r28, r27
	bne      lbl_800ACC2C
	lwz      r3, 0x348(r29)
	bl       routeToTrack__7JAInterFUl
	mr       r0, r3
	mr       r3, r26
	mr       r28, r0
	bl       getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
	lwz      r3, 0x48(r3)
	lwz      r3, 0x20(r3)
	bl       getInfoPointer__Q27JAInter10SoundTableFUl
	lwz      r0, 0(r3)
	mr       r3, r26
	rlwinm   r0, r0, 0x18, 0x10, 0x1f
	mr       r30, r0
	bl       getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
	mr       r4, r27
	mr       r5, r28
	mr       r6, r30
	mr       r7, r31
	bl
outerInit__Q27JAInter15SystemInterfaceFPQ27JAInter13SeqUpdateDataP8JASTrackUlUsUc
	mr       r3, r26
	bl       getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
	li       r0, 1
	lwz      r4, 4(r3)
	slw      r0, r0, r28
	li       r30, 0
	or       r0, r4, r0
	stw      r0, 4(r3)
	lwz      r26, seqPlayTrackMax__18JAIGlobalParameter@sda21(r13)

lbl_800ACC2C:
	addi     r26, r26, 1

lbl_800ACC30:
	lwz      r0, seqPlayTrackMax__18JAIGlobalParameter@sda21(r13)
	cmplw    r26, r0
	blt      lbl_800ACB68
	b        lbl_800ACCE0

lbl_800ACC40:
	lwz      r0, 0x348(r29)
	li       r4, 1
	lwz      r28, 0x33c(r29)
	clrlwi   r0, r0, 0x18
	lwz      r29, seTrackUpdate__Q27JAInter5SeMgr@sda21(r13)
	mulli    r31, r0, 0x18
	mr       r3, r28
	add      r5, r29, r31
	lfs      f1, 4(r5)
	bl       setParam__13JASOuterParamFUcf
	add      r4, r29, r31
	mr       r3, r28
	lfs      f1, 0x10(r4)
	li       r4, 8
	bl       setParam__13JASOuterParamFUcf
	add      r4, r29, r31
	mr       r3, r28
	lfs      f1, 8(r4)
	li       r4, 2
	bl       setParam__13JASOuterParamFUcf
	add      r4, r29, r31
	mr       r3, r28
	lfs      f1, 0xc(r4)
	li       r4, 4
	bl       setParam__13JASOuterParamFUcf
	lwz      r5, msBasic__8JAIBasic@sda21(r13)
	mr       r3, r28
	li       r4, 0x10
	lbz      r0, 0xd(r5)
	cmplwi   r0, 2
	beq      lbl_800ACCC4
	lfs      f1, lbl_80516F10@sda21(r2)
	b        lbl_800ACCCC

lbl_800ACCC4:
	add      r5, r29, r31
	lfs      f1, 0x14(r5)

lbl_800ACCCC:
	bl       setParam__13JASOuterParamFUcf
	b        lbl_800ACCE0

lbl_800ACCD4:
	lbz      r5, seScene__Q27JAInter5SeMgr@sda21(r13)
	li       r4, 0
	bl       writePortApp__8JASTrackFUlUs

lbl_800ACCE0:
	mr       r3, r30
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ACCF8
 * Size:	000104
 */
void JAIBasic::setSeExtParameter(JAISound*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	or.      r30, r4, r4
	beq      lbl_800ACDE4
	lwz      r3, 0x20(r30)
	bl       getInfoFormat__Q27JAInter10SoundTableFUl
	rlwinm.  r0, r3, 0, 0x1d, 0x1d
	clrlwi   r31, r3, 0x18
	beq      lbl_800ACD6C
	lwz      r4, 0x44(r30)
	lis      r0, 0x4330
	mr       r3, r30
	stw      r0, 8(r1)
	lbz      r0, 0xc(r4)
	li       r4, 0
	lwz      r12, 0x10(r30)
	li       r5, 1
	stw      r0, 0xc(r1)
	lfd      f2, lbl_80516F20@sda21(r2)
	lfd      f1, 8(r1)
	lfs      f0, lbl_80516F1C@sda21(r2)
	fsubs    f1, f1, f2
	lwz      r12, 0x1c(r12)
	fdivs    f1, f1, f0
	mtctr    r12
	bctrl

lbl_800ACD6C:
	rlwinm.  r0, r31, 0, 0x1c, 0x1c
	beq      lbl_800ACDB8
	lwz      r4, 0x44(r30)
	lis      r0, 0x4330
	mr       r3, r30
	stw      r0, 8(r1)
	lbz      r0, 0xd(r4)
	li       r4, 0
	lwz      r12, 0x10(r30)
	li       r5, 1
	stw      r0, 0xc(r1)
	lfd      f2, lbl_80516F20@sda21(r2)
	lfd      f1, 8(r1)
	lfs      f0, lbl_80516F1C@sda21(r2)
	fsubs    f1, f1, f2
	lwz      r12, 0x34(r12)
	fdivs    f1, f1, f0
	mtctr    r12
	bctrl

lbl_800ACDB8:
	rlwinm.  r0, r31, 0, 0x1e, 0x1e
	beq      lbl_800ACDE4
	mr       r3, r30
	lwz      r5, 0x44(r30)
	lwz      r12, 0x10(r30)
	li       r4, 0
	lfs      f1, 8(r5)
	li       r5, 1
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_800ACDE4:
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
 * Address:	800ACDFC
 * Size:	000070
 */
void JAIBasic::makeSequence()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r4, 8(r3)
	cmplwi   r4, 0
	beq      lbl_800ACE38
	li       r3, 0x6a0
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_800ACE30
	bl       __ct__11JAISequenceFv
	mr       r0, r3

lbl_800ACE30:
	mr       r3, r0
	b        lbl_800ACE5C

lbl_800ACE38:
	lwz      r4, JASDram@sda21(r13)
	li       r3, 0x6a0
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_800ACE58
	bl       __ct__11JAISequenceFv
	mr       r0, r3

lbl_800ACE58:
	mr       r3, r0

lbl_800ACE5C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ACE6C
 * Size:	000070
 */
void JAIBasic::makeSe()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r4, 8(r3)
	cmplwi   r4, 0
	beq      lbl_800ACEA8
	li       r3, 0x484
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_800ACEA0
	bl       __ct__5JAISeFv
	mr       r0, r3

lbl_800ACEA0:
	mr       r3, r0
	b        lbl_800ACECC

lbl_800ACEA8:
	lwz      r4, JASDram@sda21(r13)
	li       r3, 0x484
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_800ACEC8
	bl       __ct__5JAISeFv
	mr       r0, r3

lbl_800ACEC8:
	mr       r3, r0

lbl_800ACECC:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ACEDC
 * Size:	000070
 */
void JAIBasic::makeStream()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r4, 8(r3)
	cmplwi   r4, 0
	beq      lbl_800ACF18
	li       r3, 0x1d8
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_800ACF10
	bl       __ct__9JAIStreamFv
	mr       r0, r3

lbl_800ACF10:
	mr       r3, r0
	b        lbl_800ACF3C

lbl_800ACF18:
	lwz      r4, JASDram@sda21(r13)
	li       r3, 0x1d8
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_800ACF38
	bl       __ct__9JAIStreamFv
	mr       r0, r3

lbl_800ACF38:
	mr       r3, r0

lbl_800ACF3C:
	lwz      r0, 0x14(r1)
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
void JAIBasic::allocStreamBuffer(void*, long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIBasic::deallocStreamBuffer()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800ACF4C
 * Size:	0000DC
 */
void JAIBasic::stopAudio(unsigned long, bool)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lbz      r0, msStopStatus__8JAIBasic@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_800AD014
	cmplwi   r31, 5
	bge      lbl_800ACF78
	li       r31, 5

lbl_800ACF78:
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	li       r0, 1
	lwz      r3, 0x10(r3)
	add      r3, r3, r31
	stb      r4, msStopMode__8JAIBasic@sda21(r13)
	stw      r3, msAudioStopTime__8JAIBasic@sda21(r13)
	stb      r0, msStopStatus__8JAIBasic@sda21(r13)
	bl       getDSPLevel_f32__9JASDriverFv
	stfs     f1, msDspLevel__8JAIBasic@sda21(r13)
	bl       getAutoLevel_f32__9JASDriverFv
	stfs     f1, msAutoLevel__8JAIBasic@sda21(r13)
	bl       getSubFrames__9JASDriverFv
	addi     r4, r31, -8
	lis      r0, 0x4330
	mullw    r3, r4, r3
	stw      r0, 8(r1)
	lfd      f2, lbl_80516F20@sda21(r2)
	lfs      f0, msDspLevel__8JAIBasic@sda21(r13)
	stw      r3, 0xc(r1)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fdivs    f0, f0, f1
	stfs     f0, msDspDif__8JAIBasic@sda21(r13)
	bl       getSubFrames__9JASDriverFv
	addi     r4, r31, -8
	lis      r0, 0x4330
	mullw    r5, r4, r3
	lis      r3, stopCallBack__8JAIBasicFPv@ha
	stw      r0, 0x10(r1)
	li       r4, 0
	lfd      f2, lbl_80516F20@sda21(r2)
	addi     r3, r3, stopCallBack__8JAIBasicFPv@l
	stw      r5, 0x14(r1)
	lfs      f0, msAutoLevel__8JAIBasic@sda21(r13)
	lfd      f1, 0x10(r1)
	fsubs    f1, f1, f2
	fdivs    f0, f0, f1
	stfs     f0, msAutoDif__8JAIBasic@sda21(r13)
	bl       registerDspSyncCallback__9JASDriverFPFPv_lPv

lbl_800AD014:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AD028
 * Size:	000034
 */
void JAIBasic::checkAudioStopStatus()
{
	/*
	lbz      r0, msStopStatus__8JAIBasic@sda21(r13)
	cmpwi    r0, 3
	beq      lbl_800AD04C
	bge      lbl_800AD054
	cmpwi    r0, 1
	bge      lbl_800AD044
	b        lbl_800AD054

lbl_800AD044:
	li       r3, 1
	blr

lbl_800AD04C:
	li       r3, 2
	blr

lbl_800AD054:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void JAIBasic::resumeAudio()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AD05C
 * Size:	000168
 */
void JAIBasic::stopCallBack(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	lwz      r4, msAudioStopTime__8JAIBasic@sda21(r13)
	lwz      r3, 0x10(r3)
	cmplw    r4, r3
	bne      lbl_800AD0A0
	lbz      r0, msStopMode__8JAIBasic@sda21(r13)
	li       r3, 3
	stb      r3, msStopStatus__8JAIBasic@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_800AD098
	bl       stop__14JASAudioThreadFv

lbl_800AD098:
	li       r3, -1
	b        lbl_800AD1B0

lbl_800AD0A0:
	addi     r0, r4, -4
	cmplw    r0, r3
	bne      lbl_800AD160
	lbz      r0, msStopStatus__8JAIBasic@sda21(r13)
	cmplwi   r0, 1
	bne      lbl_800AD1AC
	li       r31, 0

lbl_800AD0BC:
	mr       r3, r31
	bl       getHandle__13JASDSPChannelFUl
	lwz      r0, 0(r3)
	clrlwi.  r0, r0, 0x18
	bne      lbl_800AD0D4
	bl       drop__13JASDSPChannelFv

lbl_800AD0D4:
	addi     r31, r31, 1
	cmplwi   r31, 0x40
	blt      lbl_800AD0BC
	bl       clearAllBuffer__Q27JAInter2FxFv
	li       r31, 0
	b        lbl_800AD124

lbl_800AD0EC:
	mr       r3, r31
	bl       getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
	lwz      r0, 0x48(r3)
	cmplwi   r0, 0
	beq      lbl_800AD120
	mr       r3, r31
	bl       getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
	lwz      r3, 0x48(r3)
	li       r4, 0
	lwz      r12, 0x10(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_800AD120:
	addi     r31, r31, 1

lbl_800AD124:
	bl       getParamSeqPlayTrackMax__18JAIGlobalParameterFv
	cmplw    r31, r3
	blt      lbl_800AD0EC
	lwz      r3, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
	lwz      r3, 0x1c(r3)
	cmplwi   r3, 0
	beq      lbl_800AD154
	lwz      r12, 0x10(r3)
	li       r4, 0
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_800AD154:
	li       r0, 2
	stb      r0, msStopStatus__8JAIBasic@sda21(r13)
	b        lbl_800AD1AC

lbl_800AD160:
	lbz      r0, msStopStatus__8JAIBasic@sda21(r13)
	cmplwi   r0, 1
	bne      lbl_800AD1AC
	bl       getDSPLevel_f32__9JASDriverFv
	lfs      f2, msDspDif__8JAIBasic@sda21(r13)
	lfs      f0, lbl_80516F10@sda21(r2)
	fsubs    f1, f1, f2
	fcmpo    cr0, f1, f0
	bge      lbl_800AD188
	fmr      f1, f0

lbl_800AD188:
	bl       setDSPLevel__9JASDriverFf
	bl       getAutoLevel_f32__9JASDriverFv
	lfs      f2, msAutoDif__8JAIBasic@sda21(r13)
	lfs      f0, lbl_80516F10@sda21(r2)
	fsubs    f1, f1, f2
	fcmpo    cr0, f1, f0
	bge      lbl_800AD1A8
	fmr      f1, f0

lbl_800AD1A8:
	bl       setAutoLevel__9JASDriverFf

lbl_800AD1AC:
	li       r3, 0

lbl_800AD1B0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
