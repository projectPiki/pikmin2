#include "JSystem/JKR/JKRDvdRipper.h"
#include "Dolphin/dvd.h"
#include "Dolphin/os.h"
#include "Dolphin/stl.h"
#include "Dolphin/vi.h"
#include "JSystem/JKR/Aram.h"
#include "JSystem/JKR/JKRDecomp.h"
#include "JSystem/JKR/JKRFile.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_JKRDvdRipper_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80473688
    lbl_80473688:
        .4byte 0x4A4B5244
        .4byte 0x76645269
        .4byte 0x70706572
        .4byte 0x2E637070
        .4byte 0x00000000
        .4byte 0x536F7272
        .4byte 0x792C206E
        .4byte 0x6F742070
        .4byte 0x72657061
        .4byte 0x72656420
        .4byte 0x666F7220
        .4byte 0x535A5020
        .4byte 0x7265736F
        .4byte 0x75726365
        .4byte 0x0A000000
        .4byte 0x3A3A3A4E
        .4byte 0x6F742073
        .4byte 0x7570706F
        .4byte 0x72742053
        .4byte 0x5A502077
        .4byte 0x69746820
        .4byte 0x6F666673
        .4byte 0x65742072
        .4byte 0x65616400

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global sDvdAsyncList__12JKRDvdRipper
    sDvdAsyncList__12JKRDvdRipper:
        .skip 0xC

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global errorRetry__12JKRDvdRipper
    errorRetry__12JKRDvdRipper:
        .4byte 0x01000000
    .global sSZSBufferSize__12JKRDvdRipper
    sSZSBufferSize__12JKRDvdRipper:
        .4byte 0x00000400

    .section .sbss # 0x80514D80 - 0x80516360
    .global szpBuf_2
    szpBuf_2:
        .skip 0x4
    .global szpEnd_2
    szpEnd_2:
        .skip 0x4
    .global refBuf_2
    refBuf_2:
        .skip 0x4
    .global refEnd_2
    refEnd_2:
        .skip 0x4
    .global refCurrent_2
    refCurrent_2:
        .skip 0x4
    .global srcOffset_2
    srcOffset_2:
        .skip 0x4
    .global transLeft_2
    transLeft_2:
        .skip 0x4
    .global srcLimit_2
    srcLimit_2:
        .skip 0x4
    .global srcFile_2
    srcFile_2:
        .skip 0x4
    .global fileOffset_2
    fileOffset_2:
        .skip 0x4
    .global readCount_2
    readCount_2:
        .skip 0x4
    .global maxDest_2
    maxDest_2:
        .skip 0x4
    .global isInitMutex_2
    isInitMutex_2:
        .skip 0x4
    .global tsPtr_2
    tsPtr_2:
        .skip 0x4
    .global tsArea_2
    tsArea_2:
        .skip 0x8
*/

u8* firstSrcData();
int decompSZS_subroutine(unsigned char*, unsigned char*);

static u8* szpBuf;
static u8* szpEnd;
static u8* refBuf;
static u8* refEnd;
static u8* refCurrent;
static u32 srcOffset;
static long transLeft;
static u8* srcLimit;
static JKRDvdFile* srcFile;
static u32 fileOffset;
static u32 readCount;
static u32 maxDest;
static bool isInitMutex;
static u32* tsPtr;
static u32 tsArea;

JSUList<JKRDMCommand> JKRDvdRipper::sDvdAsyncList;

/*
 * --INFO--
 * Address:	8001F188
 * Size:	0000B4
 * loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
 */
void* JKRDvdRipper::loadToMainRAM(const char* path, unsigned char* p2, JKRExpandSwitch expSwitch, unsigned long p4, JKRHeap* heap,
                                  EAllocDirection allocDir, unsigned long p7, int* p8, unsigned long* p9)
{
	JKRDvdFile file;
	if (!file.open(path)) {
		return nullptr;
	} else {
		return loadToMainRAM(&file, p2, expSwitch, p4, heap, allocDir, p7, p8, p9);
	}
}

/*
 * --INFO--
 * Address:	8001F23C
 * Size:	0000B4
 * loadToMainRAM__12JKRDvdRipperFlPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
 */
void* JKRDvdRipper::loadToMainRAM(long inode, unsigned char* p2, JKRExpandSwitch expSwitch, unsigned long p4, JKRHeap* heap,
                                  EAllocDirection allocDir, unsigned long p7, int* p8, unsigned long* p9)
{
	JKRDvdFile file;
	if (!file.open(inode)) {
		return nullptr;
	} else {
		return loadToMainRAM(&file, p2, expSwitch, p4, heap, allocDir, p7, p8, p9);
	}
}

/*
 * --INFO--
 * Address:	8001F2F0
 * Size:	0004AC
 * loadToMainRAM__12JKRDvdRipperFP10JKRDvdFilePUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
 */
void* JKRDvdRipper::loadToMainRAM(JKRDvdFile* file, unsigned char* p2, JKRExpandSwitch expSwitch, unsigned long p4, JKRHeap* heap,
                                  EAllocDirection allocDir, unsigned long p7, int* p8, unsigned long* p9)
{
	// JKRDecomp::CompressionMode compressionMode;
	// u32 v2;
	// bool v3;
	// u8* memptr;
	// u32 byteCount = ALIGN_NEXT(file->getFileSize(), 0x20);
	// if (expSwitch == Switch_1) {
	// 	SZPHeader buffer;
	// 	while (true) {
	// 		int v1 = DVDReadPrio(&file->m_dvdPlayer, &buffer, sizeof(buffer), 0, 2);
	// 		if (v1 >= 0) {
	// 			break;
	// 		}
	// 		if (v1 == -3 || errorRetry == false) {
	// 			return nullptr;
	// 		}
	// 		VIWaitForRetrace();
	// 	}
	// 	DCInvalidateRange(&buffer, 0x20);
	// 	compressionMode = JKRDecomp::checkCompressed((u8*)&buffer);
	// 	v2 = buffer.getValue1();
	// }
	// if (p8 ) {
	// 	*p8 =  compressionMode;
	// }
	// if (expSwitch == Switch_1 && compressionMode != JKRDecomp::NOT_COMPRESSED) {
	// 	if (p4 != 0 && p4 < v2) {
	// 		v2 = p4;
	// 	}
	// 	if (p2 == nullptr) {
	// 		p2 = (u8*)JKRHeap::alloc(v2, (allocDir == ALLOC_DIR_TOP) ? 0x20 : -0x20, heap);
	// 		v3 = true;
	// 	}
	// 	if (p2 == nullptr) {
	// 		return nullptr;
	// 	}
	// 	if (compressionMode == JKRDecomp::YAY0) {
	// 		memptr = (u8*)JKRHeap::alloc(byteCount, 0x20, heap);
	// 		if (memptr == nullptr && v3) {
	// 			JKRHeap::free(p2, nullptr);
	// 			return nullptr;
	// 		}
	// 	}
	// } else {
	// 	if (p2 == nullptr)  {

	// 	}
	// }

	/*
	.loc_0x0:
	  stwu      r1, -0xD0(r1)
	  mflr      r0
	  lis       r11, 0x8047
	  stw       r0, 0xD4(r1)
	  stmw      r17, 0x94(r1)
	  mr        r31, r3
	  mr        r25, r4
	  mr        r21, r5
	  mr        r29, r6
	  mr        r19, r7
	  mr        r17, r8
	  mr        r28, r9
	  mr        r18, r10
	  addi      r20, r11, 0x3688
	  lwz       r22, 0xD8(r1)
	  li        r27, 0
	  li        r24, 0
	  li        r26, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r21, 0x1
	  addi      r0, r3, 0x1F
	  rlwinm    r30,r0,0,0,26
	  bne-      .loc_0xEC
	  addi      r0, r1, 0x67
	  rlwinm    r23,r0,0,0,26

	.loc_0x70:
	  mr        r4, r23
	  addi      r3, r31, 0x5C
	  li        r5, 0x20
	  li        r6, 0
	  li        r7, 0x2
	  bl        0xBD70C
	  cmpwi     r3, 0
	  bge-      .loc_0xB4
	  cmpwi     r3, -0x3
	  beq-      .loc_0xA4
	  lbz       r0, -0x7FF0(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xAC

	.loc_0xA4:
	  li        r3, 0
	  b         .loc_0x498

	.loc_0xAC:
	  bl        0xB1E98
	  b         .loc_0x70

	.loc_0xB4:
	  mr        r3, r23
	  li        r4, 0x20
	  bl        0xCD340
	  mr        r3, r23
	  bl        -0x24C4
	  lbz       r0, 0x5(r23)
	  mr        r24, r3
	  lbz       r4, 0x4(r23)
	  rlwinm    r0,r0,16,0,15
	  lbz       r5, 0x6(r23)
	  rlwimi    r0,r4,24,0,7
	  lbz       r6, 0x7(r23)
	  rlwimi    r0,r5,8,16,23
	  or        r23, r6, r0

	.loc_0xEC:
	  cmplwi    r18, 0
	  beq-      .loc_0xF8
	  stw       r24, 0x0(r18)

	.loc_0xF8:
	  cmpwi     r21, 0x1
	  bne-      .loc_0x198
	  cmpwi     r24, 0
	  beq-      .loc_0x198
	  cmplwi    r29, 0
	  beq-      .loc_0x11C
	  cmplw     r23, r29
	  ble-      .loc_0x11C
	  mr        r23, r29

	.loc_0x11C:
	  cmplwi    r25, 0
	  bne-      .loc_0x148
	  cmpwi     r17, 0x1
	  mr        r3, r23
	  li        r4, -0x20
	  bne-      .loc_0x138
	  li        r4, 0x20

	.loc_0x138:
	  mr        r5, r19
	  bl        0x41B4
	  li        r27, 0x1
	  mr        r25, r3

	.loc_0x148:
	  cmplwi    r25, 0
	  bne-      .loc_0x158
	  li        r3, 0
	  b         .loc_0x498

	.loc_0x158:
	  cmpwi     r24, 0x1
	  bne-      .loc_0x1E8
	  mr        r3, r30
	  mr        r5, r19
	  li        r4, 0x20
	  bl        0x4184
	  mr.       r26, r3
	  bne-      .loc_0x1E8
	  rlwinm    r0,r27,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x1E8
	  mr        r3, r25
	  li        r4, 0
	  bl        0x41F0
	  li        r3, 0
	  b         .loc_0x498

	.loc_0x198:
	  cmplwi    r25, 0
	  bne-      .loc_0x1D8
	  cmplwi    r29, 0
	  sub       r3, r30, r28
	  beq-      .loc_0x1B8
	  cmplw     r3, r29
	  ble-      .loc_0x1B8
	  mr        r3, r29

	.loc_0x1B8:
	  cmpwi     r17, 0x1
	  li        r4, -0x20
	  bne-      .loc_0x1C8
	  li        r4, 0x20

	.loc_0x1C8:
	  mr        r5, r19
	  bl        0x4124
	  li        r27, 0x1
	  mr        r25, r3

	.loc_0x1D8:
	  cmplwi    r25, 0
	  bne-      .loc_0x1E8
	  li        r3, 0
	  b         .loc_0x498

	.loc_0x1E8:
	  cmpwi     r24, 0
	  bne-      .loc_0x364
	  cmplwi    r28, 0
	  li        r3, 0
	  beq-      .loc_0x278
	  addi      r0, r1, 0x27
	  mr        r17, r28
	  rlwinm    r18,r0,0,0,26

	.loc_0x208:
	  mr        r4, r18
	  mr        r6, r17
	  addi      r3, r31, 0x5C
	  li        r5, 0x20
	  li        r7, 0x2
	  bl        0xBD574
	  cmpwi     r3, 0
	  bge-      .loc_0x264
	  cmpwi     r3, -0x3
	  beq-      .loc_0x23C
	  lbz       r0, -0x7FF0(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x25C

	.loc_0x23C:
	  rlwinm    r0,r27,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x254
	  mr        r3, r25
	  li        r4, 0
	  bl        0x412C

	.loc_0x254:
	  li        r3, 0
	  b         .loc_0x498

	.loc_0x25C:
	  bl        0xB1CE8
	  b         .loc_0x208

	.loc_0x264:
	  mr        r3, r18
	  li        r4, 0x20
	  bl        0xCD190
	  mr        r3, r18
	  bl        -0x2674

	.loc_0x278:
	  cmpwi     r3, 0
	  beq-      .loc_0x290
	  cmpwi     r21, 0x2
	  beq-      .loc_0x290
	  cmpwi     r21, 0
	  bne-      .loc_0x31C

	.loc_0x290:
	  cmplwi    r29, 0
	  sub       r18, r30, r28
	  beq-      .loc_0x2A8
	  cmplw     r29, r18
	  bge-      .loc_0x2A8
	  mr        r18, r29

	.loc_0x2A8:
	  mr        r17, r28

	.loc_0x2AC:
	  mr        r4, r25
	  mr        r5, r18
	  mr        r6, r17
	  addi      r3, r31, 0x5C
	  li        r7, 0x2
	  bl        0xBD4D0
	  cmpwi     r3, 0
	  bge-      .loc_0x308
	  cmpwi     r3, -0x3
	  beq-      .loc_0x2E0
	  lbz       r0, -0x7FF0(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x300

	.loc_0x2E0:
	  rlwinm    r0,r27,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x2F8
	  mr        r3, r25
	  li        r4, 0
	  bl        0x4088

	.loc_0x2F8:
	  li        r3, 0
	  b         .loc_0x498

	.loc_0x300:
	  bl        0xB1C44
	  b         .loc_0x2AC

	.loc_0x308:
	  cmplwi    r22, 0
	  beq-      .loc_0x314
	  stw       r18, 0x0(r22)

	.loc_0x314:
	  mr        r3, r25
	  b         .loc_0x498

	.loc_0x31C:
	  cmpwi     r3, 0x2
	  bne-      .loc_0x348
	  mr        r3, r31
	  mr        r4, r25
	  mr        r5, r30
	  mr        r6, r29
	  mr        r8, r28
	  mr        r9, r22
	  li        r7, 0
	  bl        .loc_0x4AC
	  b         .loc_0x35C

	.loc_0x348:
	  addi      r3, r20, 0
	  addi      r5, r20, 0x14
	  li        r4, 0x142
	  crclr     6, 0x6
	  bl        0xCE124

	.loc_0x35C:
	  mr        r3, r25
	  b         .loc_0x498

	.loc_0x364:
	  cmpwi     r24, 0x1
	  bne-      .loc_0x430
	  cmplwi    r28, 0
	  beq-      .loc_0x388
	  addi      r3, r20, 0
	  addi      r5, r20, 0x3C
	  li        r4, 0x14C
	  crclr     6, 0x6
	  bl        0xCE0F8

	.loc_0x388:
	  mr        r4, r26
	  mr        r5, r30
	  addi      r3, r31, 0x5C
	  li        r6, 0
	  li        r7, 0x2
	  bl        0xBD3F4
	  cmpwi     r3, 0
	  bge-      .loc_0x3F0
	  cmpwi     r3, -0x3
	  beq-      .loc_0x3BC
	  lbz       r0, -0x7FF0(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x3E8

	.loc_0x3BC:
	  rlwinm    r0,r27,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x3D4
	  mr        r3, r25
	  li        r4, 0
	  bl        0x3FAC

	.loc_0x3D4:
	  mr        r3, r26
	  li        r4, 0
	  bl        0x3FA0
	  li        r3, 0
	  b         .loc_0x498

	.loc_0x3E8:
	  bl        0xB1B5C
	  b         .loc_0x388

	.loc_0x3F0:
	  mr        r3, r26
	  mr        r4, r30
	  bl        0xCD004
	  mr        r3, r26
	  mr        r4, r25
	  mr        r5, r23
	  mr        r6, r28
	  bl        -0x2BC0
	  mr        r3, r26
	  li        r4, 0
	  bl        0x3F64
	  cmplwi    r22, 0
	  beq-      .loc_0x428
	  stw       r23, 0x0(r22)

	.loc_0x428:
	  mr        r3, r25
	  b         .loc_0x498

	.loc_0x430:
	  cmpwi     r24, 0x2
	  bne-      .loc_0x480
	  mr        r3, r31
	  mr        r4, r25
	  mr        r5, r30
	  mr        r6, r23
	  mr        r7, r28
	  mr        r9, r22
	  li        r8, 0
	  bl        .loc_0x4AC
	  cmplwi    r3, 0
	  beq-      .loc_0x478
	  rlwinm.   r0,r27,0,24,31
	  beq-      .loc_0x474
	  mr        r3, r25
	  li        r4, 0
	  bl        0x3F0C

	.loc_0x474:
	  li        r25, 0

	.loc_0x478:
	  mr        r3, r25
	  b         .loc_0x498

	.loc_0x480:
	  rlwinm.   r0,r27,0,24,31
	  beq-      .loc_0x494
	  mr        r3, r25
	  li        r4, 0
	  bl        0x3EEC

	.loc_0x494:
	  li        r3, 0

	.loc_0x498:
	  lmw       r17, 0x94(r1)
	  lwz       r0, 0xD4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xD0
	  blr

	.loc_0x4AC:
	*/
}

/*
 * --INFO--
 * Address:	8001F79C
 * Size:	000174
 */
int JKRDecompressFromDVD(JKRDvdFile* file, void* p2, unsigned long p3, unsigned long inMaxDest, unsigned long inFileOffset,
                         unsigned long inSrcOffset, unsigned long* inTsPtr)
{
	int interrupts = OSDisableInterrupts();
	if (isInitMutex == false) {
		OSInitMutex(&decompMutex);
		isInitMutex = true;
	}
	OSRestoreInterrupts(interrupts);
	OSLockMutex(&decompMutex);
	szpBuf = (u8*)JKRHeap::sSystemHeap->alloc(JKRDvdRipper::sSZSBufferSize, -0x20);
	szpEnd = szpBuf + JKRDvdRipper::sSZSBufferSize;
	if (inFileOffset != 0) {
		refBuf     = (u8*)JKRHeap::sSystemHeap->alloc(0x1120, -4);
		refEnd     = refBuf + 0x1120;
		refCurrent = refBuf;
	} else {
		refBuf = nullptr;
	}
	transLeft = p3 - inSrcOffset;
	readCount = 0;
	if (inTsPtr == 0) {
		inTsPtr = &tsArea;
	}
	srcOffset  = inSrcOffset;
	srcFile    = file;
	fileOffset = inFileOffset;
	maxDest    = inMaxDest;
	tsPtr      = inTsPtr;
	*inTsPtr   = 0;
	u8* data   = firstSrcData();
	int result = (data != nullptr) ? decompSZS_subroutine(data, (u8*)p2) : -1;
	JKRHeap::free(szpBuf, nullptr);
	if (refBuf) {
		JKRHeap::free(refBuf, nullptr);
	}
	DCStoreRangeNoSync(p2, *tsPtr);
	OSUnlockMutex(&decompMutex);
	return result;
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r24, 0x10(r1)
	  mr        r25, r3
	  mr        r26, r4
	  mr        r27, r5
	  mr        r28, r6
	  mr        r29, r7
	  mr        r30, r8
	  mr        r31, r9
	  bl        0xCF470
	  lbz       r0, -0x7808(r13)
	  mr        r24, r3
	  cmplwi    r0, 0
	  bne-      .loc_0x54
	  lis       r3, 0x804F
	  subi      r3, r3, 0x7C
	  bl        0xD034C
	  li        r0, 0x1
	  stb       r0, -0x7808(r13)

	.loc_0x54:
	  mr        r3, r24
	  bl        0xCF46C
	  lis       r3, 0x804F
	  subi      r3, r3, 0x7C
	  bl        0xD0368
	  lwz       r24, -0x7FEC(r13)
	  li        r5, -0x20
	  lwz       r3, -0x77D8(r13)
	  mr        r4, r24
	  bl        0x3E2C
	  add       r0, r3, r24
	  cmplwi    r29, 0
	  stw       r3, -0x7838(r13)
	  stw       r0, -0x7834(r13)
	  beq-      .loc_0xB4
	  lwz       r3, -0x77D8(r13)
	  li        r4, 0x1120
	  li        r5, -0x4
	  bl        0x3E08
	  addi      r0, r3, 0x1120
	  stw       r3, -0x7830(r13)
	  stw       r0, -0x782C(r13)
	  stw       r3, -0x7828(r13)
	  b         .loc_0xBC

	.loc_0xB4:
	  li        r0, 0
	  stw       r0, -0x7830(r13)

	.loc_0xBC:
	  sub       r3, r27, r30
	  li        r0, 0
	  cmplwi    r31, 0
	  stw       r25, -0x7818(r13)
	  stw       r30, -0x7824(r13)
	  stw       r3, -0x7820(r13)
	  stw       r29, -0x7814(r13)
	  stw       r0, -0x7810(r13)
	  stw       r28, -0x780C(r13)
	  beq-      .loc_0xEC
	  mr        r3, r31
	  b         .loc_0xF0

	.loc_0xEC:
	  subi      r3, r13, 0x7800

	.loc_0xF0:
	  stw       r3, -0x7804(r13)
	  li        r0, 0
	  stw       r0, 0x0(r3)
	  bl        0x330
	  cmplwi    r3, 0
	  beq-      .loc_0x118
	  mr        r4, r26
	  bl        .loc_0x174
	  mr        r0, r3
	  b         .loc_0x11C

	.loc_0x118:
	  li        r0, -0x1

	.loc_0x11C:
	  lwz       r3, -0x7838(r13)
	  mr        r24, r0
	  li        r4, 0
	  bl        0x3DA8
	  lwz       r3, -0x7830(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x140
	  li        r4, 0
	  bl        0x3D94

	.loc_0x140:
	  lwz       r4, -0x7804(r13)
	  mr        r3, r26
	  lwz       r4, 0x0(r4)
	  bl        0xCCEBC
	  lis       r3, 0x804F
	  subi      r3, r3, 0x7C
	  bl        0xD0350
	  mr        r3, r24
	  lmw       r24, 0x10(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0x174:
	*/
}

/*
 * --INFO--
 * Address:	8001F910
 * Size:	0002B8
 */
int decompSZS_subroutine(unsigned char*, unsigned char*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, 0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r4
	li       r4, 0
	lbz      r5, 0(r3)
	cmpwi    r5, 0x59
	bne      lbl_8001F968
	lbz      r5, 1(r3)
	cmpwi    r5, 0x61
	bne      lbl_8001F968
	lbz      r5, 2(r3)
	cmpwi    r5, 0x7a
	bne      lbl_8001F968
	lbz      r5, 3(r3)
	cmpwi    r5, 0x30
	beq      lbl_8001F970

lbl_8001F968:
	li       r3, -1
	b        lbl_8001FBAC

lbl_8001F970:
	lwz      r7, fileOffset_2@sda21(r13)
	lwz      r6, 4(r3)
	lwz      r5, maxDest_2@sda21(r13)
	subf     r6, r7, r6
	add      r31, r29, r6
	add      r5, r29, r5
	cmplw    r31, r5
	ble      lbl_8001F994
	mr       r31, r5

lbl_8001F994:
	addi     r3, r3, 0x10

lbl_8001F998:
	cmpwi    r4, 0
	bne      lbl_8001F9D8
	lwz      r0, srcLimit_2@sda21(r13)
	cmplw    r3, r0
	ble      lbl_8001F9CC
	lwz      r0, transLeft_2@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8001F9CC
	bl       nextSrcData__FPUc2
	cmplwi   r3, 0
	bne      lbl_8001F9CC
	li       r3, -1
	b        lbl_8001FBAC

lbl_8001F9CC:
	lbz      r0, 0(r3)
	li       r4, 8
	addi     r3, r3, 1

lbl_8001F9D8:
	rlwinm.  r5, r0, 0, 0x18, 0x18
	beq      lbl_8001FA70
	lwz      r6, fileOffset_2@sda21(r13)
	cmplwi   r6, 0
	beq      lbl_8001FA44
	lwz      r5, readCount_2@sda21(r13)
	cmplw    r5, r6
	blt      lbl_8001FA10
	lbz      r5, 0(r3)
	addi     r30, r30, 1
	stb      r5, 0(r29)
	addi     r29, r29, 1
	cmplw    r29, r31
	beq      lbl_8001FBA0

lbl_8001FA10:
	lwz      r6, refCurrent_2@sda21(r13)
	lbz      r7, 0(r3)
	addi     r5, r6, 1
	stw      r5, refCurrent_2@sda21(r13)
	stb      r7, 0(r6)
	lwz      r6, refCurrent_2@sda21(r13)
	lwz      r5, refEnd_2@sda21(r13)
	cmplw    r6, r5
	bne      lbl_8001FA3C
	lwz      r5, refBuf_2@sda21(r13)
	stw      r5, refCurrent_2@sda21(r13)

lbl_8001FA3C:
	addi     r3, r3, 1
	b        lbl_8001FA60

lbl_8001FA44:
	lbz      r5, 0(r3)
	addi     r3, r3, 1
	addi     r30, r30, 1
	stb      r5, 0(r29)
	addi     r29, r29, 1
	cmplw    r29, r31
	beq      lbl_8001FBA0

lbl_8001FA60:
	lwz      r5, readCount_2@sda21(r13)
	addi     r5, r5, 1
	stw      r5, readCount_2@sda21(r13)
	b        lbl_8001FB90

lbl_8001FA70:
	lwz      r8, fileOffset_2@sda21(r13)
	lbz      r6, 0(r3)
	cmplwi   r8, 0
	lbz      r9, 1(r3)
	srawi    r5, r6, 4
	rlwimi   r9, r6, 8, 0x14, 0x17
	addi     r3, r3, 2
	beq      lbl_8001FAB8
	lwz      r6, refCurrent_2@sda21(r13)
	lwz      r7, refBuf_2@sda21(r13)
	subf     r6, r9, r6
	addi     r9, r6, -1
	cmplw    r9, r7
	bge      lbl_8001FAC0
	lwz      r6, refEnd_2@sda21(r13)
	subf     r6, r7, r6
	add      r9, r9, r6
	b        lbl_8001FAC0

lbl_8001FAB8:
	subf     r6, r9, r29
	addi     r9, r6, -1

lbl_8001FAC0:
	cmpwi    r5, 0
	bne      lbl_8001FAD8
	lbz      r5, 0(r3)
	addi     r3, r3, 1
	addi     r5, r5, 0x12
	b        lbl_8001FADC

lbl_8001FAD8:
	addi     r5, r5, 2

lbl_8001FADC:
	cmplwi   r8, 0
	beq      lbl_8001FB60

lbl_8001FAE4:
	lwz      r7, readCount_2@sda21(r13)
	lwz      r6, fileOffset_2@sda21(r13)
	cmplw    r7, r6
	blt      lbl_8001FB0C
	lbz      r6, 0(r9)
	addi     r30, r30, 1
	stb      r6, 0(r29)
	addi     r29, r29, 1
	cmplw    r29, r31
	beq      lbl_8001FB90

lbl_8001FB0C:
	lwz      r7, refCurrent_2@sda21(r13)
	lbz      r8, 0(r9)
	addi     r6, r7, 1
	stw      r6, refCurrent_2@sda21(r13)
	stb      r8, 0(r7)
	lwz      r6, refCurrent_2@sda21(r13)
	lwz      r7, refEnd_2@sda21(r13)
	cmplw    r6, r7
	bne      lbl_8001FB38
	lwz      r6, refBuf_2@sda21(r13)
	stw      r6, refCurrent_2@sda21(r13)

lbl_8001FB38:
	addi     r9, r9, 1
	cmplw    r9, r7
	bne      lbl_8001FB48
	lwz      r9, refBuf_2@sda21(r13)

lbl_8001FB48:
	lwz      r6, readCount_2@sda21(r13)
	addic.   r5, r5, -1
	addi     r6, r6, 1
	stw      r6, readCount_2@sda21(r13)
	bne      lbl_8001FAE4
	b        lbl_8001FB90

lbl_8001FB60:
	lbz      r6, 0(r9)
	addi     r30, r30, 1
	stb      r6, 0(r29)
	addi     r29, r29, 1
	cmplw    r29, r31
	beq      lbl_8001FB90
	lwz      r6, readCount_2@sda21(r13)
	addic.   r5, r5, -1
	addi     r9, r9, 1
	addi     r6, r6, 1
	stw      r6, readCount_2@sda21(r13)
	bne      lbl_8001FB60

lbl_8001FB90:
	cmplw    r29, r31
	slwi     r0, r0, 1
	addi     r4, r4, -1
	blt      lbl_8001F998

lbl_8001FBA0:
	lwz      r4, tsPtr_2@sda21(r13)
	li       r3, 0
	stw      r30, 0(r4)

lbl_8001FBAC:
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
 * Address:	8001FBC8
 * Size:	0000D4
 */
u8* firstSrcData()
{
	srcLimit      = szpEnd - 0x19;
	u32 byteCount = MIN(transLeft, (u32)(szpEnd - szpBuf));
	// u32 byteCount;
	// if (transLeft < byteCount) {
	// 	byteCount = transLeft;
	// }
	while (true) {
		int result = DVDReadPrio(&srcFile->m_dvdPlayer, szpBuf, byteCount, srcOffset, 2);
		if (0 <= result) {
			break;
		}
		if (result == -3 || JKRDvdRipper::errorRetry == false) {
			return nullptr;
		}
		VIWaitForRetrace();
	}
	DCInvalidateRange(szpBuf, byteCount);
	srcOffset += byteCount;
	transLeft -= byteCount;
	return szpBuf;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	lwz      r4, szpEnd_2@sda21(r13)
	lwz      r3, szpBuf_2@sda21(r13)
	addi     r0, r4, -25
	lwz      r5, transLeft_2@sda21(r13)
	subf     r4, r3, r4
	stw      r0, srcLimit_2@sda21(r13)
	cmplw    r5, r4
	mr       r29, r3
	mr       r31, r4
	bge      lbl_8001FC0C
	mr       r31, r5

lbl_8001FC0C:
	mr       r30, r31

lbl_8001FC10:
	lwz      r3, srcFile_2@sda21(r13)
	mr       r4, r29
	lwz      r6, srcOffset_2@sda21(r13)
	mr       r5, r30
	addi     r3, r3, 0x5c
	li       r7, 2
	bl       DVDReadPrio
	cmpwi    r3, 0
	bge      lbl_8001FC58
	cmpwi    r3, -3
	beq      lbl_8001FC48
	lbz      r0, errorRetry__12JKRDvdRipper@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8001FC50

lbl_8001FC48:
	li       r3, 0
	b        lbl_8001FC80

lbl_8001FC50:
	bl       VIWaitForRetrace
	b        lbl_8001FC10

lbl_8001FC58:
	mr       r3, r29
	mr       r4, r31
	bl       DCInvalidateRange
	lwz      r4, srcOffset_2@sda21(r13)
	mr       r3, r29
	lwz      r0, transLeft_2@sda21(r13)
	add      r4, r4, r31
	subf     r0, r31, r0
	stw      r4, srcOffset_2@sda21(r13)
	stw      r0, transLeft_2@sda21(r13)

lbl_8001FC80:
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
 * Address:	8001FC9C
 * Size:	00010C
 */
u8* nextSrcData(unsigned char* p1)
{
	u32 limit = szpEnd - p1;
	u8* buf   = szpBuf;
	if ((limit & 0x1F) != 0) {
		buf = szpBuf + (0x20 - (limit & 0x1F));
	}
	memcpy(buf, p1, limit);
	u8* memptr    = buf + limit;
	u32 byteCount = MIN(transLeft, (u32)(szpEnd - memptr));
	// u32 byteCount = szpEnd - memptr;
	// if (transLeft < byteCount) {
	// 	byteCount = transLeft;
	// }
	while (true) {
		int result = DVDReadPrio(&srcFile->m_dvdPlayer, memptr, byteCount, srcOffset, 2);
		if (0 <= result) {
			break;
		}
		// if (result == -3 || JKRDvdRipper::errorRetry == false) {
		if (result == -3) {
			return nullptr;
		}
		VIWaitForRetrace();
	}
	DCInvalidateRange(szpBuf, byteCount);
	if (transLeft - byteCount == 0) {
		srcLimit = memptr + byteCount;
	}
	srcOffset += byteCount;
	transLeft -= byteCount;
	return szpBuf;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	lwz      r0, szpEnd_2@sda21(r13)
	subf     r29, r4, r0
	clrlwi.  r5, r29, 0x1b
	beq      lbl_8001FCDC
	lwz      r3, szpBuf_2@sda21(r13)
	addi     r0, r3, 0x20
	subf     r28, r5, r0
	b        lbl_8001FCE0

lbl_8001FCDC:
	lwz      r28, szpBuf_2@sda21(r13)

lbl_8001FCE0:
	mr       r3, r28
	mr       r5, r29
	bl       memcpy
	lwz      r0, szpEnd_2@sda21(r13)
	add      r29, r28, r29
	lwz      r3, transLeft_2@sda21(r13)
	subf     r30, r29, r0
	cmplw    r30, r3
	ble      lbl_8001FD08
	mr       r30, r3

lbl_8001FD08:
	lis      r3, isErrorRetry__12JKRDvdRipperFv@ha
	addi     r31, r3, isErrorRetry__12JKRDvdRipperFv@l

lbl_8001FD10:
	lwz      r3, srcFile_2@sda21(r13)
	mr       r4, r29
	lwz      r6, srcOffset_2@sda21(r13)
	mr       r5, r30
	addi     r3, r3, 0x5c
	li       r7, 2
	bl       DVDReadPrio
	cmpwi    r3, 0
	bge      lbl_8001FD54
	cmpwi    r3, -3
	beq      lbl_8001FD44
	cmplwi   r31, 0
	bne      lbl_8001FD4C

lbl_8001FD44:
	li       r3, 0
	b        lbl_8001FD88

lbl_8001FD4C:
	bl       VIWaitForRetrace
	b        lbl_8001FD10

lbl_8001FD54:
	mr       r3, r29
	mr       r4, r30
	bl       DCInvalidateRange
	lwz      r0, transLeft_2@sda21(r13)
	lwz      r3, srcOffset_2@sda21(r13)
	subf.    r0, r30, r0
	add      r3, r3, r30
	stw      r3, srcOffset_2@sda21(r13)
	stw      r0, transLeft_2@sda21(r13)
	bne      lbl_8001FD84
	add      r0, r29, r30
	stw      r0, srcLimit_2@sda21(r13)

lbl_8001FD84:
	mr       r3, r28

lbl_8001FD88:
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
 * Address:	8001FDA8
 * Size:	000008
 */
bool JKRDvdRipper::isErrorRetry() { return errorRetry; }

// /*
//  * --INFO--
//  * Address:	8001FDB0
//  * Size:	000044
//  */
// void __sinit_JKRDvdRipper_cpp(void)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	lis      r3, sDvdAsyncList__12JKRDvdRipper@ha
// 	stw      r0, 0x14(r1)
// 	addi     r3, r3, sDvdAsyncList__12JKRDvdRipper@l
// 	bl       initiate__10JSUPtrListFv
// 	lis      r3, sDvdAsyncList__12JKRDvdRipper@ha
// 	lis      r4, "__dt__23JSUList<12JKRDMCommand>Fv"@ha
// 	lis      r5, lbl_804EFF78@ha
// 	addi     r3, r3, sDvdAsyncList__12JKRDvdRipper@l
// 	addi     r4, r4, "__dt__23JSUList<12JKRDMCommand>Fv"@l
// 	addi     r5, r5, lbl_804EFF78@l
// 	bl       __register_global_object
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8001FDF4
//  * Size:	000054
//  */
// void JSUList<JKRDMCommand>::~JSUList()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	or.      r30, r3, r3
// 	beq      lbl_8001FE2C
// 	li       r4, 0
// 	bl       __dt__10JSUPtrListFv
// 	extsh.   r0, r31
// 	ble      lbl_8001FE2C
// 	mr       r3, r30
// 	bl       __dl__FPv

// lbl_8001FE2C:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r30
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }
