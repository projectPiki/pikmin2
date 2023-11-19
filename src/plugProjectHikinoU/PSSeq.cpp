#include "PSSystem/PSSeq.h"
#include "PSSystem/PSCommon.h"
#include "PSSystem/PSStream.h"
#include "PSSystem/SeqTrack.h"
#include "PSSystem/PSSystemIF.h"
#include "PSSystem/PSDirector.h"
#include "JSystem/JAudio/JAS/JASResArcLoader.h"
#include "stream.h"

namespace PSSystem {

/*
 * --INFO--
 * Address:	80330D20
 * Size:	000060
 */
SeqDataList::SeqDataList()
{
	sInstance = this;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q28PSSystem12TextDataBaseFv
	lis      r3, "__vt__Q28PSSystem39SingletonBase<Q28PSSystem11SeqDataList>"@ha
	addic.   r4, r31, 0x1c
	addi     r0, r3,
"__vt__Q28PSSystem39SingletonBase<Q28PSSystem11SeqDataList>"@l stw      r0,
0x1c(r31) beq      lbl_80330D50 addi     r4, r4, -28

lbl_80330D50:
	lis      r3, __vt__Q28PSSystem11SeqDataList@ha
	stw      r4,
"sInstance__Q28PSSystem39SingletonBase<Q28PSSystem11SeqDataList>"@sda21(r13)
	addi     r4, r3, __vt__Q28PSSystem11SeqDataList@l
	mr       r3, r31
	stw      r4, 0(r31)
	addi     r0, r4, 0x10
	stw      r0, 0x1c(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80330D80
 * Size:	000088
 */
SeqDataList::~SeqDataList() { }

/*
 * --INFO--
 * Address:	80330E08
 * Size:	000108
 */
int SeqDataList::getSeqVolume(char const* bmsname)
{
	char buf[32];
	volatile u8 volume;
	P2ASSERTLINE(36, mFile);
	RamStream stream(mFile, -1);
	stream.resetPosition(true, 1);
	stream.readString(buf, 32);
	while (true) {
		volume = stream.readByte();
		if (!strcmp(buf, bmsname)) {
			return volume;
		}
		stream.readString(buf, 32);
		if (!strcmp(buf, "endoffile")) {
			JUT_PANICLINE(53, "seq list\nnot find\n(%s)\n", bmsname);
			return 50;
		}
	}
	/*
	stwu     r1, -0x460(r1)
	mflr     r0
	stw      r0, 0x464(r1)
	stw      r31, 0x45c(r1)
	stw      r30, 0x458(r1)
	mr       r30, r4
	stw      r29, 0x454(r1)
	mr       r29, r3
	lis      r3, lbl_8048F848@ha
	lwz      r0, 0x18(r29)
	addi     r31, r3, lbl_8048F848@l
	cmplwi   r0, 0
	bne      lbl_80330E50
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x24
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80330E50:
	lwz      r4, 0x18(r29)
	addi     r3, r1, 0x2c
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x38(r1)
	bne      lbl_80330E78
	li       r0, 0
	stw      r0, 0x440(r1)

lbl_80330E78:
	addi     r3, r1, 0x2c
	addi     r4, r1, 8
	li       r5, 0x20
	bl       readString__6StreamFPci
	b        lbl_80330EC4

lbl_80330E8C:
	addi     r3, r1, 0x2c
	bl       readByte__6StreamFv
	stb      r3, 0x28(r1)
	mr       r4, r30
	addi     r3, r1, 8
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_80330EB4
	lbz      r3, 0x28(r1)
	b        lbl_80330EF4

lbl_80330EB4:
	addi     r3, r1, 0x2c
	addi     r4, r1, 8
	li       r5, 0x20
	bl       readString__6StreamFPci

lbl_80330EC4:
	addi     r3, r1, 8
	addi     r4, r31, 0x18
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_80330E8C
	mr       r6, r30
	addi     r3, r31, 0
	addi     r5, r31, 0x24
	li       r4, 0x35
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r3, 0x32

lbl_80330EF4:
	lwz      r0, 0x464(r1)
	lwz      r31, 0x45c(r1)
	lwz      r30, 0x458(r1)
	lwz      r29, 0x454(r1)
	mtlr     r0
	addi     r1, r1, 0x460
	blr
	*/
}

/*
 * --INFO--
 * Address:	80330F10
 * Size:	000060
 */
StreamDataList::StreamDataList()
{
	sInstance = this;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q28PSSystem12TextDataBaseFv
	lis      r3,
"__vt__Q28PSSystem42SingletonBase<Q28PSSystem14StreamDataList>"@ha addic.   r4,
r31, 0x1c addi     r0, r3,
"__vt__Q28PSSystem42SingletonBase<Q28PSSystem14StreamDataList>"@l stw      r0,
0x1c(r31) beq      lbl_80330F40 addi     r4, r4, -28

lbl_80330F40:
	lis      r3, __vt__Q28PSSystem14StreamDataList@ha
	stw      r4,
"sInstance__Q28PSSystem42SingletonBase<Q28PSSystem14StreamDataList>"@sda21(r13)
	addi     r4, r3, __vt__Q28PSSystem14StreamDataList@l
	mr       r3, r31
	stw      r4, 0(r31)
	addi     r0, r4, 0x10
	stw      r0, 0x1c(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80330F70
 * Size:	000088
 */
StreamDataList::~StreamDataList()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80330FDC
	lis      r3, __vt__Q28PSSystem14StreamDataList@ha
	addic.   r0, r30, 0x1c
	addi     r3, r3, __vt__Q28PSSystem14StreamDataList@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x10
	stw      r0, 0x1c(r30)
	beq      lbl_80330FC0
	lis      r3,
"__vt__Q28PSSystem42SingletonBase<Q28PSSystem14StreamDataList>"@ha li       r0,
0 addi     r3, r3,
"__vt__Q28PSSystem42SingletonBase<Q28PSSystem14StreamDataList>"@l stw      r3,
0x1c(r30) stw      r0,
"sInstance__Q28PSSystem42SingletonBase<Q28PSSystem14StreamDataList>"@sda21(r13)

lbl_80330FC0:
	mr       r3, r30
	li       r4, 0
	bl       __dt__Q28PSSystem12TextDataBaseFv
	extsh.   r0, r31
	ble      lbl_80330FDC
	mr       r3, r30
	bl       __dl__FPv

lbl_80330FDC:
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
 * Address:	80330FF8
 * Size:	000110
 */
int StreamDataList::getStreamVolume(u32 id)
{
	char buf[32];
	volatile u8 volume;
	volatile int streamID;
	P2ASSERTLINE(76, mFile);
	RamStream stream(mFile, -1);
	stream.resetPosition(true, 1);
	stream.readString(buf, 32);
	while (true) {
		streamID = stream.readInt();
		volume   = stream.readByte();
		if (streamID == id) {
			return volume;
		}
		stream.readString(buf, 32);
		if (!strcmp(buf, "endoffile")) {
			JUT_PANICLINE(95, "stream list\nnot find\n(id=%d)\n", id);
			return 0;
		}
	}
	/*
	stwu     r1, -0x460(r1)
	mflr     r0
	stw      r0, 0x464(r1)
	stw      r31, 0x45c(r1)
	stw      r30, 0x458(r1)
	clrlwi   r30, r4, 0x14
	stw      r29, 0x454(r1)
	mr       r29, r3
	lis      r3, lbl_8048F848@ha
	lwz      r0, 0x18(r29)
	addi     r31, r3, lbl_8048F848@l
	cmplwi   r0, 0
	bne      lbl_80331040
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x4c
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80331040:
	lwz      r4, 0x18(r29)
	addi     r3, r1, 0x30
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x3c(r1)
	bne      lbl_80331068
	li       r0, 0
	stw      r0, 0x444(r1)

lbl_80331068:
	addi     r3, r1, 0x30
	addi     r4, r1, 8
	li       r5, 0x20
	bl       readString__6StreamFPci
	b        lbl_803310BC

lbl_8033107C:
	addi     r3, r1, 0x30
	bl       readInt__6StreamFv
	stw      r3, 0x28(r1)
	addi     r3, r1, 0x30
	bl       readByte__6StreamFv
	lwz      r0, 0x28(r1)
	clrlwi   r4, r3, 0x18
	stb      r3, 0x2c(r1)
	cmplw    r0, r30
	bne      lbl_803310AC
	mr       r3, r4
	b        lbl_803310EC

lbl_803310AC:
	addi     r3, r1, 0x30
	addi     r4, r1, 8
	li       r5, 0x20
	bl       readString__6StreamFPci

lbl_803310BC:
	addi     r3, r1, 8
	addi     r4, r31, 0x18
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_8033107C
	mr       r6, r30
	addi     r3, r31, 0
	addi     r5, r31, 0x3c
	li       r4, 0x5f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r3, 0

lbl_803310EC:
	lwz      r0, 0x464(r1)
	lwz      r31, 0x45c(r1)
	lwz      r30, 0x458(r1)
	lwz      r29, 0x454(r1)
	mtlr     r0
	addi     r1, r1, 0x460
	blr
	*/
}

/*
 * --INFO--
 * Address:	80331108
 * Size:	000094
 */
void SeqSoundBase::stop(u32 type)
{
	P2ASSERTLINE(107, mSeq);
	OSMutex* mutex = &mSeq->mMutex;
	OSLockMutex(mutex);
	stopInner(type);
	OSUnlockMutex(mutex);
}

/*
 * --INFO--
 * Address:	8033119C
 * Size:	000020
 */
void SeqSound::stopInner(u32 type) { JAInter::SequenceMgr::releaseSeqBuffer(this, type); }

/*
 * --INFO--
 * Address:	803311BC
 * Size:	000020
 */
void StreamSound::stopInner(u32 type) { JAInter::StreamMgr::releaseStreamBuffer(this, type); }

/*
 * --INFO--
 * Address:	........
 * Size:	0000EC
 */
SeqHeap::SeqHeap(u32 entry, SeqBase* seq)
{
	mOwner    = nullptr;
	mSize     = entry;
	mFileData = nullptr;
	mOwnerSeq = seq;
	mTask     = nullptr;
	P2ASSERTLINE(134, seq);
	if (entry) {
		mFileData = new (JKRGetCurrentHeap(), 0x20) u8[mSize];
		P2ASSERTLINE(138, mFileData);
		P2ASSERTLINE(139, mSize != 0);
	}
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803311DC
 * Size:	000060
 */
SeqHeap::~SeqHeap() { delete[] mFileData; }

/*
 * --INFO--
 * Address:	8033123C
 * Size:	000200
 */
void SeqHeap::requestCallback(u32, u16, JAISequence*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	li       r30, 0
	mr       r31, r3
	mr       r27, r6
	mr       r29, r30
	lbz      r0, init$2941@sda21(r13)
	extsb.   r0, r0
	bne      lbl_80331274
	li       r0, 1
	stw      r30, oldID$2940@sda21(r13)
	stb      r0, init$2941@sda21(r13)

lbl_80331274:
	cmpwi    r4, 2
	clrlwi   r28, r5, 0x10
	beq      lbl_803313F4
	bge      lbl_80331294
	cmpwi    r4, 0
	beq      lbl_803312A0
	bge      lbl_80331368
	b        lbl_80331420

lbl_80331294:
	cmpwi    r4, 4
	bge      lbl_80331420
	b        lbl_80331368

lbl_803312A0:
	cmplwi   r27, 0
	bne      lbl_803312C4
	lis      r3, lbl_8048F848@ha
	lis      r5, lbl_8048F854@ha
	addi     r3, r3, lbl_8048F848@l
	li       r4, 0xbe
	addi     r5, r5, lbl_8048F854@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803312C4:
	lwz      r27, 0x6a4(r27)
	cmplwi   r27, 0
	bne      lbl_803312EC
	lis      r3, lbl_8048F848@ha
	lis      r5, lbl_8048F854@ha
	addi     r3, r3, lbl_8048F848@l
	li       r4, 0xc0
	addi     r5, r5, lbl_8048F854@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803312EC:
	lwz      r27, 0x28(r27)
	lwz      r0, 4(r27)
	cmplwi   r0, 0
	bne      lbl_80331338
	li       r29, 1
	bl       getArchivePointer__Q27JAInter11SequenceMgrFv
	mr       r4, r28
	bl       getResSize__15JASResArcLoaderFP10JKRArchiveUs
	lwz      r0, 8(r27)
	cmplw    r3, r0
	ble      lbl_8033133C
	lis      r3, lbl_8048F848@ha
	lis      r5, lbl_8048F854@ha
	addi     r3, r3, lbl_8048F848@l
	li       r4, 0xc9
	addi     r5, r5, lbl_8048F854@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_8033133C

lbl_80331338:
	li       r29, 0

lbl_8033133C:
	lwz      r30, 0xc(r27)
	cmplwi   r30, 0
	bne      lbl_80331420
	lis      r3, lbl_8048F848@ha
	lis      r5, lbl_8048F854@ha
	addi     r3, r3, lbl_8048F848@l
	li       r4, 0xd0
	addi     r5, r5, lbl_8048F854@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_80331420

lbl_80331368:
	cmplwi   r27, 0
	bne      lbl_8033138C
	lis      r3, lbl_8048F848@ha
	lis      r5, lbl_8048F854@ha
	addi     r3, r3, lbl_8048F848@l
	li       r4, 0xdc
	addi     r5, r5, lbl_8048F854@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033138C:
	lwz      r27, 0x6a4(r27)
	cmplwi   r27, 0
	bne      lbl_803313B4
	lis      r3, lbl_8048F848@ha
	lis      r5, lbl_8048F854@ha
	addi     r3, r3, lbl_8048F848@l
	li       r4, 0xde
	addi     r5, r5, lbl_8048F854@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803313B4:
	bl       getArchivePointer__Q27JAInter11SequenceMgrFv
	or.      r26, r3, r3
	bne      lbl_803313DC
	lis      r3, lbl_8048F848@ha
	lis      r5, lbl_8048F854@ha
	addi     r3, r3, lbl_8048F848@l
	li       r4, 0xe0
	addi     r5, r5, lbl_8048F854@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803313DC:
	mr       r3, r26
	mr       r4, r28
	bl       getResSize__15JASResArcLoaderFP10JKRArchiveUs
	lwz      r4, 0x28(r27)
	bl       loadedCallback__Q28PSSystem7SeqHeapFUlUl
	b        lbl_80331420

lbl_803313F4:
	cmplwi   r27, 0
	bne      lbl_80331418
	lis      r3, lbl_8048F848@ha
	lis      r5, lbl_8048F854@ha
	addi     r3, r3, lbl_8048F848@l
	li       r4, 0xe9
	addi     r5, r5, lbl_8048F854@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80331418:
	li       r0, 0
	stw      r0, 0x6a4(r27)

lbl_80331420:
	stw      r30, 0(r31)
	stb      r29, 4(r31)
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033143C
 * Size:	0000D4
 */
void SeqHeap::loadSeqAsync(TaskChecker* task)
{
	mTask = task;
	P2ASSERTLINE(247, !mOwner);
	OSMutex* mutex = &mTask->mMutex;
	if (mutex) {
		OSLockMutex(mutex);
		mutex->count++;
		OSUnlockMutex(mutex);
	}

	int* file = (int*)mOwnerSeq->getFileEntry();
	int size  = file[3];
	file      = (int*)mOwnerSeq->getFileEntry();
	int offs  = file[0];
	int res   = JASResArcLoader::loadResourceAsync(JAInter::SequenceMgr::getArchivePointer(), offs, mFileData, size, nullptr,
                                                 0); // loadedcallback
	JUT_ASSERTLINE(266, res == 1, "SeqBase::loadSeqAsync() fault loading sequence");

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	lis      r3, lbl_8048F848@ha
	addi     r31, r3, lbl_8048F848@l
	stw      r4, 0x14(r27)
	lwz      r0, 4(r27)
	cmplwi   r0, 0
	beq      lbl_8033147C
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0xf7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033147C:
	lwz      r28, 0x14(r27)
	cmplwi   r28, 0
	beq      lbl_803314A4
	mr       r3, r28
	bl       OSLockMutex
	lbz      r4, 0x18(r28)
	mr       r3, r28
	addi     r0, r4, 1
	stb      r0, 0x18(r28)
	bl       OSUnlockMutex

lbl_803314A4:
	lwz      r3, 0x10(r27)
	bl       getFileEntry__Q28PSSystem7SeqBaseFv
	lwz      r30, 0xc(r3)
	lwz      r29, 0xc(r27)
	lwz      r3, 0x10(r27)
	bl       getFileEntry__Q28PSSystem7SeqBaseFv
	lhz      r28, 0(r3)
	bl       getArchivePointer__Q27JAInter11SequenceMgrFv
	lis      r5, loadedCallback__Q28PSSystem7SeqHeapFUlUl@ha
	mr       r4, r28
	addi     r7, r5, loadedCallback__Q28PSSystem7SeqHeapFUlUl@l
	mr       r6, r30
	mr       r5, r29
	mr       r8, r27
	bl       loadResourceAsync__15JASResArcLoaderFP10JKRArchiveUsPUcUlPFUlUl_vUl
	cmpwi    r3, 1
	beq      lbl_803314FC
	addi     r3, r31, 0
	addi     r5, r31, 0x5c
	li       r4, 0x10a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803314FC:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80331510
 * Size:	000098
 */
void SeqHeap::loadedCallback(u32 arg1, u32)
{
	SeqHeap* heap = (SeqHeap*)arg1;
	heap->mOwner  = this;
	heap->mOwnerSeq->seqLoadAfter();
	P2ASSERTLINE(294, this);

	OSMutex* mutex = &heap->mTask->mMutex;
	if (mutex) {
		OSLockMutex(mutex);
		mutex->count--;
		OSUnlockMutex(mutex);
	}

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	stw      r30, 4(r4)
	lwz      r3, 0x10(r4)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	cmplwi   r30, 0
	bne      lbl_80331568
	lis      r3, lbl_8048F848@ha
	lis      r5, lbl_8048F854@ha
	addi     r3, r3, lbl_8048F848@l
	li       r4, 0x126
	addi     r5, r5, lbl_8048F854@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80331568:
	lwz      r31, 0x14(r31)
	cmplwi   r31, 0
	beq      lbl_80331590
	mr       r3, r31
	bl       OSLockMutex
	lbz      r4, 0x18(r31)
	mr       r3, r31
	addi     r0, r4, -1
	stb      r0, 0x18(r31)
	bl       OSUnlockMutex

lbl_80331590:
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
 * Address:	803315A8
 * Size:	000030
 */
void SeqPlayReservator::reservatorTask() { mSequence->startSeq(); }

/*
 * --INFO--
 * Address:	803315D8
 * Size:	000030
 */
void SeqPauseOffReservator::reservatorTask() { mSequence->pauseOff(); }

/*
 * --INFO--
 * Address:	80331608
 * Size:	000100
 */
SeqBase::SeqBase(char const* bmsFileName, JAInter::SoundInfo const& info)
    : JSULink<SeqBase>(this)
    , mBmsFileName(nullptr)
    , mSoundInfo(info)
    , mSeqHeap(nullptr)
    , mPlayRes(this)
    , mPauseOffRes(this)
    , mPauseMode(MODE4)
    , _48(38)
    , mSeqSound(nullptr)
{
	OSInitMutex(&mMutex);
	if (bmsFileName != nullptr) {
		mBmsFileName = new char[strlen(bmsFileName) + 1];
		strcpy(mBmsFileName, bmsFileName);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
// void JSULink<PSSystem::SeqBase>::~JSULink()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80331708
 * Size:	000134
 */
void SeqBase::init()
{
	if (mBmsFileName) {
		if (SeqDataList::sInstance) {
			mSoundInfo.mVolume.w = SeqDataList::sInstance->getSeqVolume(mBmsFileName);
		}
		mSeqHeap = new SeqHeap(((int*)getFileEntry())[3], this);
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	lwz      r4, 0x14(r3)
	cmplwi   r4, 0
	beq      lbl_80331820
	lwz      r3,
"sInstance__Q28PSSystem39SingletonBase<Q28PSSystem11SeqDataList>"@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80331744
	bl       getSeqVolume__Q28PSSystem11SeqDataListFPCc
	stb      r3, 0x24(r30)

lbl_80331744:
	li       r3, 0x18
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8033181C
	mr       r3, r30
	bl       getFileEntry__Q28PSSystem7SeqBaseFv
	lwz      r4, 0xc(r3)
	lis      r3, __vt__Q28PSSystem7SeqHeap@ha
	addi     r0, r3, __vt__Q28PSSystem7SeqHeap@l
	li       r3, 0
	stw      r0, 0(r31)
	addi     r0, r4, 0x1f
	rlwinm   r29, r0, 0, 0, 0x1a
	cmplwi   r30, 0
	stw      r3, 4(r31)
	stw      r29, 8(r31)
	stw      r3, 0xc(r31)
	stw      r30, 0x10(r31)
	stw      r3, 0x14(r31)
	bne      lbl_803317B0
	lis      r3, lbl_8048F848@ha
	lis      r5, lbl_8048F854@ha
	addi     r3, r3, lbl_8048F848@l
	li       r4, 0x86
	addi     r5, r5, lbl_8048F854@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803317B0:
	cmplwi   r29, 0
	beq      lbl_8033181C
	lwz      r3, 8(r31)
	li       r5, 0x20
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, 0xc(r31)
	lwz      r0, 0xc(r31)
	cmplwi   r0, 0
	bne      lbl_803317F4
	lis      r3, lbl_8048F848@ha
	lis      r5, lbl_8048F854@ha
	addi     r3, r3, lbl_8048F848@l
	li       r4, 0x8a
	addi     r5, r5, lbl_8048F854@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803317F4:
	lwz      r0, 8(r31)
	cmplwi   r0, 0
	bne      lbl_8033181C
	lis      r3, lbl_8048F848@ha
	lis      r5, lbl_8048F854@ha
	addi     r3, r3, lbl_8048F848@l
	li       r4, 0x8b
	addi     r5, r5, lbl_8048F854@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033181C:
	stw      r31, 0x28(r30)

lbl_80331820:
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
 * Address:	8033183C
 * Size:	000098
 */
SeqBase::~SeqBase()
{
	if (mSeqHeap) {
		delete mSeqHeap;
	}
	delete[] mBmsFileName;
}

/*
 * --INFO--
 * Address:	803318D4
 * Size:	00003C
 */
bool SeqBase::isPlaying()
{
	if (mSeqSound) {
		u8 state = (u8)mSeqSound->mSeqParameter.mTrack.mSeqCtrl.mPlayingState;
		if (state == 0 || state == 2) {
			return false;
		}
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	80331910
 * Size:	000090
 */
void* SeqBase::getFileEntry()
{
	P2ASSERTLINE(402, JAInter::SequenceMgr::getArchivePointer());
	void* file = JAInter::SequenceMgr::getArchivePointer()->findNameResource(mBmsFileName);
	JUT_ASSERTLINE(404, file, "not find(%s)", mBmsFileName);
	return file;
}

/*
 * --INFO--
 * Address:	803319A0
 * Size:	0001D4
 */
void SeqBase::pauseOn(PauseMode pause)
{
	if (mPauseMode != SeqBase::MODE4) {
		return;
	}

	mPauseMode = pause;
	P2ASSERTLINE(418, getHandleP());

	JAISound* sound = *getHandleP();
	bool noSound    = false;
	switch (pause) {
	case SeqBase::MODE0:
		if (sound) {
			sound->setPauseMode(true, 30);
		} else {
			noSound = true;
		}
		break;
	case SeqBase::MODE1:
		if (sound) {
			sound->setVolume(0.0f, 15, 11);
		} else {
			noSound = true;
		}
		break;
	case SeqBase::MODE2:
		if (sound) {
			f32 volume = _48 / 127.0f;
			if (volume > 1.0f) {
				volume = 1.0f;
			}
			sound->setVolume(volume, 15, 11);
		} else {
			noSound = true;
		}
		break;
	case SeqBase::MODE3:
		if (sound) {
			stopSeq(0);
		} else {
			noSound = true;
		}
		break;
	default:
		JUT_PANICLINE(461, "P2Assert");
	}

	if (noSound == true)
		mPauseMode = SeqBase::MODE4;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	bne      lbl_80331B58
	stw      r30, 0x44(r29)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	bne      lbl_80331A04
	lis      r3, lbl_8048F848@ha
	lis      r5, lbl_8048F854@ha
	addi     r3, r3, lbl_8048F848@l
	li       r4, 0x1a2
	addi     r5, r5, lbl_8048F854@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80331A04:
	mr       r3, r29
	lwz      r12, 0x10(r29)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	cmpwi    r30, 2
	lwz      r3, 0(r3)
	li       r31, 0
	beq      lbl_80331A98
	bge      lbl_80331A3C
	cmpwi    r30, 0
	beq      lbl_80331A48
	bge      lbl_80331A68
	b        lbl_80331B28

lbl_80331A3C:
	cmpwi    r30, 4
	bge      lbl_80331B28
	b        lbl_80331AFC

lbl_80331A48:
	cmplwi   r3, 0
	beq      lbl_80331A60
	li       r4, 2
	li       r5, 0x1e
	bl       setPauseMode__8JAISoundFUcUc
	b        lbl_80331B44

lbl_80331A60:
	li       r31, 1
	b        lbl_80331B44

lbl_80331A68:
	cmplwi   r3, 0
	beq      lbl_80331A90
	lwz      r12, 0x10(r3)
	li       r4, 0xf
	lfs      f1, lbl_8051E0A0@sda21(r2)
	li       r5, 0xb
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80331B44

lbl_80331A90:
	li       r31, 1
	b        lbl_80331B44

lbl_80331A98:
	cmplwi   r3, 0
	beq      lbl_80331AF4
	lbz      r4, 0x48(r29)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	lfd      f3, lbl_8051E0B0@sda21(r2)
	stw      r4, 0xc(r1)
	lfs      f0, lbl_8051E0A4@sda21(r2)
	lfd      f2, 8(r1)
	lfs      f1, lbl_8051E0A8@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f0, f2, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80331AD4
	b        lbl_80331AD8

lbl_80331AD4:
	fmr      f1, f0

lbl_80331AD8:
	lwz      r12, 0x10(r3)
	li       r4, 0xf
	li       r5, 0xb
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80331B44

lbl_80331AF4:
	li       r31, 1
	b        lbl_80331B44

lbl_80331AFC:
	cmplwi   r3, 0
	beq      lbl_80331B20
	mr       r3, r29
	li       r4, 0
	lwz      r12, 0x10(r29)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	b        lbl_80331B44

lbl_80331B20:
	li       r31, 1
	b        lbl_80331B44

lbl_80331B28:
	lis      r3, lbl_8048F848@ha
	lis      r5, lbl_8048F854@ha
	addi     r3, r3, lbl_8048F848@l
	li       r4, 0x1cd
	addi     r5, r5, lbl_8048F854@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80331B44:
	clrlwi   r0, r31, 0x18
	cmplwi   r0, 1
	bne      lbl_80331B58
	li       r0, 4
	stw      r0, 0x44(r29)

lbl_80331B58:
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
 * Address:	80331B74
 * Size:	00013C
 */
void SeqBase::pauseOff()
{
	P2ASSERTLINE(474, getHandleP());
	if (mPauseMode == SeqBase::MODE3) {
		startSeq();
	} else if (mPauseMode == SeqBase::MODE2 || mPauseMode == SeqBase::MODE1) {
		JAISound* sound = *getHandleP();
		if (sound) {
			(*getHandleP())->setVolume(1.0f, 15, 11);
		}
	} else if (mPauseMode != SeqBase::MODE4) {
		JAISound* sound = *getHandleP();
		if (sound) {
			(*getHandleP())->setPauseMode(false, 30);
		}
	}
	mPauseMode = SeqBase::MODE4;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0x10(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	bne      lbl_80331BBC
	lis      r3, lbl_8048F848@ha
	lis      r5, lbl_8048F854@ha
	addi     r3, r3, lbl_8048F848@l
	li       r4, 0x1da
	addi     r5, r5, lbl_8048F854@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80331BBC:
	lwz      r0, 0x44(r31)
	cmpwi    r0, 3
	bne      lbl_80331BE0
	mr       r3, r31
	lwz      r12, 0x10(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	b        lbl_80331C94

lbl_80331BE0:
	cmpwi    r0, 2
	beq      lbl_80331BF0
	cmpwi    r0, 1
	bne      lbl_80331C48

lbl_80331BF0:
	mr       r3, r31
	lwz      r12, 0x10(r31)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0(r3)
	cmplwi   r0, 0
	beq      lbl_80331C94
	mr       r3, r31
	lwz      r12, 0x10(r31)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0(r3)
	li       r4, 0xf
	lfs      f1, lbl_8051E0A8@sda21(r2)
	li       r5, 0xb
	lwz      r12, 0x10(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80331C94

lbl_80331C48:
	cmpwi    r0, 4
	beq      lbl_80331C94
	mr       r3, r31
	lwz      r12, 0x10(r31)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0(r3)
	cmplwi   r0, 0
	beq      lbl_80331C94
	mr       r3, r31
	lwz      r12, 0x10(r31)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0(r3)
	li       r4, 0
	li       r5, 0x1e
	bl       setPauseMode__8JAISoundFUcUc

lbl_80331C94:
	li       r0, 4
	stw      r0, 0x44(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80331CB0
 * Size:	0000D4
 */
void SeqBase::exec()
{
	if (mPlayRes.mState) {
		if (mPlayRes.mState-- == 1) {
			mPlayRes.reservatorTask();
		}
	}

	if (mPauseOffRes.mState) {
		if (mPauseOffRes.mState-- == 1) {
			mPauseOffRes.reservatorTask();
		}
	}

	if (getHandleP() && isPlaying()) {
		mSeqSound = nullptr;
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lhz      r3, 0x30(r3)
	cmplwi   r3, 0
	beq      lbl_80331CF4
	addi     r0, r3, -1
	cmplwi   r3, 1
	sth      r0, 0x30(r31)
	bne      lbl_80331CF4
	addi     r3, r31, 0x2c
	lwz      r12, 0x2c(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80331CF4:
	lhz      r3, 0x3c(r31)
	cmplwi   r3, 0
	beq      lbl_80331D24
	addi     r0, r3, -1
	cmplwi   r3, 1
	sth      r0, 0x3c(r31)
	bne      lbl_80331D24
	addi     r3, r31, 0x38
	lwz      r12, 0x38(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80331D24:
	mr       r3, r31
	lwz      r12, 0x10(r31)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0(r3)
	cmplwi   r0, 0
	bne      lbl_80331D70
	lwz      r3, 0x4c(r31)
	cmplwi   r3, 0
	beq      lbl_80331D70
	lbz      r0, 0x35b(r3)
	cmplwi   r0, 0
	beq      lbl_80331D68
	clrlwi   r0, r0, 0x18
	cmplwi   r0, 2
	bne      lbl_80331D70

lbl_80331D68:
	li       r0, 0
	stw      r0, 0x4c(r31)

lbl_80331D70:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80331D84
 * Size:	000004
 */
void SeqBase::onPlayingFrame() { }

/*
 * --INFO--
 * Address:	80331D88
 * Size:	000154
 */
void SeqBase::startSeq()
{
	OSLockMutex(&mMutex);
	int flag            = ((int*)getFileEntry())[0];
	u8 type             = getSeqType();
	JAISequence* handle = (JAISequence*)getHandleP();

	JAInter::SequenceMgr::storeSeqBuffer(&handle, nullptr, flag | type, 0, 0, &mSoundInfo);

	handle = (JAISequence*)getHandleP();
	P2ASSERTLINE(534, handle);
	JUT_ASSERTLINE(538, handle, "seq not played");
	// handle->mSeqParameter.mOuterParam.mOuterUpdate = (u16)this;
	setConfigVolume();
	// mSeqSound = handle->mSeqParameter._250;
	OSUnlockMutex(&mMutex);

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lis      r3, lbl_8048F848@ha
	addi     r30, r3, lbl_8048F848@l
	addi     r3, r29, 0x50
	bl       OSLockMutex
	bl       getArchivePointer__Q27JAInter11SequenceMgrFv
	cmplwi   r3, 0
	bne      lbl_80331DD4
	addi     r3, r30, 0
	addi     r5, r30, 0xc
	li       r4, 0x192
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80331DD4:
	bl       getArchivePointer__Q27JAInter11SequenceMgrFv
	lwz      r4, 0x14(r29)
	bl       findNameResource__10JKRArchiveCFPCc
	or.      r31, r3, r3
	bne      lbl_80331E00
	lwz      r6, 0x14(r29)
	addi     r3, r30, 0
	addi     r5, r30, 0x8c
	li       r4, 0x194
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80331E00:
	mr       r3, r29
	lhz      r31, 0(r31)
	lwz      r12, 0x10(r29)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	or       r31, r31, r3
	mr       r3, r29
	lwz      r12, 0x10(r29)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r5, r31
	addi     r8, r29, 0x18
	li       r4, 0
	li       r6, 0
	li       r7, 0
	bl
storeSeqBuffer__Q27JAInter11SequenceMgrFPP11JAISequencePQ27JAInter5ActorUlUlUcPQ27JAInter9SoundInfo
	mr       r3, r29
	lwz      r12, 0x10(r29)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	bne      lbl_80331E78
	addi     r3, r30, 0
	addi     r5, r30, 0xc
	li       r4, 0x216
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80331E78:
	lwz      r31, 0(r31)
	cmplwi   r31, 0
	bne      lbl_80331E98
	addi     r3, r30, 0
	addi     r5, r30, 0x9c
	li       r4, 0x21a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80331E98:
	stw      r29, 0x6a4(r31)
	mr       r3, r29
	lwz      r12, 0x10(r29)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	addi     r0, r31, 0x30c
	addi     r3, r29, 0x50
	stw      r0, 0x4c(r29)
	bl       OSUnlockMutex
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
 * Address:	80331EDC
 * Size:	0000D0
 */
void SeqBase::setConfigVolume()
{
	f32 vol = PSGetSystemIFA()->mBgmVolume;
	(*getHandleP())->setVolume(vol, 0, 8);
	(*getHandleP())->setVolume(0.8f, 0, 3);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	lwz      r0, spSysIF__8PSSystem@sda21(r13)
	mr       r31, r3
	cmplwi   r0, 0
	bne      lbl_80331F20
	lis      r3, lbl_8048F8F4@ha
	lis      r5, lbl_8048F854@ha
	addi     r3, r3, lbl_8048F8F4@l
	li       r4, 0x18b
	addi     r5, r5, lbl_8048F854@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80331F20:
	mr       r3, r31
	lwz      r4, spSysIF__8PSSystem@sda21(r13)
	lwz      r12, 0x10(r31)
	lfs      f31, 0x24(r4)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0(r3)
	fmr      f1, f31
	li       r4, 0
	li       r5, 8
	lwz      r12, 0x10(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0x10(r31)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0(r3)
	li       r4, 0
	lfs      f1, lbl_8051E0B8@sda21(r2)
	li       r5, 3
	lwz      r12, 0x10(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80331FAC
 * Size:	000038
 */
void SeqBase::scene1st(TaskChecker* task)
{
	if (mSeqHeap) {
		mSeqHeap->loadSeqAsync(task);
	}
}

/*
 * --INFO--
 * Address:	80331FE4
 * Size:	000060
 */
void SeqBase::stopSeq(u32 type)
{
	if (getHandleP()) {
		(*getHandleP())->stop(type);
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	lwz      r12, 0x10(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_80332030
	lwz      r3, 0(r3)
	cmplwi   r3, 0
	beq      lbl_80332030
	lwz      r12, 0x10(r3)
	mr       r4, r31
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_80332030:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80332044
 * Size:	000114
 */
BgmSeq::BgmSeq(char const* bmsFileName, JAInter::SoundInfo const& info)
    : SeqBase(bmsFileName, info)
    , mHandleP(nullptr)
{
}

/*
 * --INFO--
 * Address:	80332158
 * Size:	0000C0
 */
BgmSeq::~BgmSeq() { stopSeq(0); }

/*
 * --INFO--
 * Address:	80332218
 * Size:	000100
 */
StreamBgm::StreamBgm(u32 id, const JAInter::SoundInfo& info)
    : BgmSeq(static_cast<const char*>(nullptr), info)
    , mJaiSound(nullptr)
    , mId(id)
{
}

/*
 * --INFO--
 * Address:	80332318
 * Size:	000004
 */
void StreamBgm::init() { }

/*
 * --INFO--
 * Address:	8033231C
 * Size:	0000EC
 */
StreamBgm::~StreamBgm() { stopSeq(0); }

/*
 * --INFO--
 * Address:	80332408
 * Size:	000008
 */
void StreamBgm::setId(u32 a1) { mId = a1; }

/*
 * --INFO--
 * Address:	80332410
 * Size:	00015C
 */
void StreamBgm::startSeq()
{
	if (StreamDataList::sInstance) {
		// mSoundInfo.mVolume.w = StreamDataList::sInstance->getStream(mId);
	}
	OSLockMutex(&mMutex);
	JAIBasic::msBasic->startSoundBasic(mId, &mJaiSound, nullptr, 0, 0, &mSoundInfo);
	OSUnlockMutex(&mMutex);
	P2ASSERTLINE(704, mJaiSound);
	P2ASSERTLINE(705, mId == mJaiSound->mSoundID);
	if (mId == 0xc001101f) {
		(*getHandleP())->setVolume(1.0f, 0, 8);
		(*getHandleP())->setVolume(0.8f, 0, 3);
	} else {
		setConfigVolume();
	}

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0,
"sInstance__Q28PSSystem42SingletonBase<Q28PSSystem14StreamDataList>"@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80332440
	lwz      r4, 0x70(r31)
	mr       r3, r0
	bl       getStreamVolume__Q28PSSystem14StreamDataListFUl
	stb      r3, 0x24(r31)

lbl_80332440:
	addi     r3, r31, 0x50
	bl       OSLockMutex
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	addi     r5, r31, 0x6c
	lwz      r4, 0x70(r31)
	addi     r9, r31, 0x18
	li       r6, 0
	li       r7, 0
	li       r8, 0
	bl
startSoundBasic__8JAIBasicFUlPP8JAISoundPQ27JAInter5ActorUlUcPQ27JAInter9SoundInfo
	addi     r3, r31, 0x50
	bl       OSUnlockMutex
	lwz      r0, 0x6c(r31)
	cmplwi   r0, 0
	bne      lbl_80332498
	lis      r3, lbl_8048F848@ha
	lis      r5, lbl_8048F854@ha
	addi     r3, r3, lbl_8048F848@l
	li       r4, 0x2c0
	addi     r5, r5, lbl_8048F854@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80332498:
	lwz      r3, 0x6c(r31)
	lwz      r4, 0x70(r31)
	lwz      r0, 0x20(r3)
	cmplw    r4, r0
	beq      lbl_803324C8
	lis      r3, lbl_8048F848@ha
	lis      r5, lbl_8048F854@ha
	addi     r3, r3, lbl_8048F848@l
	li       r4, 0x2c1
	addi     r5, r5, lbl_8048F854@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803324C8:
	lwz      r3, 0x70(r31)
	addis    r0, r3, 0x3fff
	cmplwi   r0, 0x101f
	bne      lbl_80332544
	mr       r3, r31
	lwz      r12, 0x10(r31)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0(r3)
	li       r4, 0
	lfs      f1, lbl_8051E0A8@sda21(r2)
	li       r5, 8
	lwz      r12, 0x10(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0x10(r31)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0(r3)
	li       r4, 0
	lfs      f1, lbl_8051E0B8@sda21(r2)
	li       r5, 3
	lwz      r12, 0x10(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80332558

lbl_80332544:
	mr       r3, r31
	lwz      r12, 0x10(r31)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl

lbl_80332558:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033256C
 * Size:	0000D0
 */
void StreamBgm::setConfigVolume()
{
	f32 vol = PSGetSystemIFA()->mBgmVolume;
	(*getHandleP())->setVolume(vol, 0, 8);
	(*getHandleP())->setVolume(0.8f, 0, 3);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	lwz      r0, spSysIF__8PSSystem@sda21(r13)
	mr       r31, r3
	cmplwi   r0, 0
	bne      lbl_803325B0
	lis      r3, lbl_8048F8F4@ha
	lis      r5, lbl_8048F854@ha
	addi     r3, r3, lbl_8048F8F4@l
	li       r4, 0x18b
	addi     r5, r5, lbl_8048F854@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803325B0:
	mr       r3, r31
	lwz      r4, spSysIF__8PSSystem@sda21(r13)
	lwz      r12, 0x10(r31)
	lfs      f31, 0x24(r4)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0(r3)
	fmr      f1, f31
	li       r4, 0
	li       r5, 8
	lwz      r12, 0x10(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0x10(r31)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0(r3)
	li       r4, 0
	lfs      f1, lbl_8051E0BC@sda21(r2)
	li       r5, 3
	lwz      r12, 0x10(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033263C
 * Size:	000014
 */
bool StreamBgm::isPlaying() { return mJaiSound != 0; }

/*
 * --INFO--
 * Address:	80332650
 * Size:	0000C0
 */
SeSeq::~SeSeq() { stopSeq(0); }

/*
 * --INFO--
 * Address:	80332710
 * Size:	00002C
 */
void SeSeq::seqLoadAfter() { startSeq(); }

/*
 * --INFO--
 * Address:	8033273C
 * Size:	0000D0
 */
void SeSeq::setConfigVolume()
{
	f32 vol = PSGetSystemIFA()->mSfxVolume;
	(*getHandleP())->setVolume(vol, 0, 8);
	(*getHandleP())->setVolume(0.8f, 0, 3);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	lwz      r0, spSysIF__8PSSystem@sda21(r13)
	mr       r31, r3
	cmplwi   r0, 0
	bne      lbl_80332780
	lis      r3, lbl_8048F8F4@ha
	lis      r5, lbl_8048F854@ha
	addi     r3, r3, lbl_8048F8F4@l
	li       r4, 0x18b
	addi     r5, r5, lbl_8048F854@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80332780:
	mr       r3, r31
	lwz      r4, spSysIF__8PSSystem@sda21(r13)
	lwz      r12, 0x10(r31)
	lfs      f31, 0x20(r4)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0(r3)
	fmr      f1, f31
	li       r4, 0
	li       r5, 8
	lwz      r12, 0x10(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0x10(r31)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0(r3)
	li       r4, 0
	lfs      f1, lbl_8051E0A8@sda21(r2)
	li       r5, 3
	lwz      r12, 0x10(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033280C
 * Size:	0000A4
 */
void SeSeq::stopSeq(u32 type)
{
	for (u8 i = 0; i < JAIGlobalParameter::getParamSeCategoryMax(); i++) {
		JAIBasic::msBasic->stopAllSe(i);
	}
	if (getHandleP()) {
		(*getHandleP())->stop(type);
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_80332844

lbl_80332834:
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	mr       r4, r31
	bl       stopAllSe__8JAIBasicFUc
	addi     r31, r31, 1

lbl_80332844:
	bl       getParamSeCategoryMax__18JAIGlobalParameterFv
	clrlwi   r3, r3, 0x18
	clrlwi   r0, r31, 0x18
	cmplw    r0, r3
	blt      lbl_80332834
	mr       r3, r29
	lwz      r12, 0x10(r29)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_80332894
	lwz      r3, 0(r3)
	cmplwi   r3, 0
	beq      lbl_80332894
	lwz      r12, 0x10(r3)
	mr       r4, r30
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_80332894:
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
 * Address:	803328B0
 * Size:	000138
 */
DirectedBgm::DirectedBgm(char const* bmsFileName, JAInter::SoundInfo const& info, DirectorMgrBase* directorMgr)
    : BgmSeq(bmsFileName, info)
    , mDirectorMgr(directorMgr)
    , mRootTrack(nullptr)
    , _B4(0)
{
}

/*
 * --INFO--
 * Address:	803329E8
 * Size:	0000C0
 */
void DirectedBgm::initRootTrack_onPlaying(JASTrack* track)
{
	P2ASSERTLINE(804, _B4 == 1);
	P2ASSERTLINE(805, mRootTrack);
	PSSystem::setObject(track, mRootTrack, 18);
	mRootTrack->init(track);
	if (mDirectorMgr) {
		mDirectorMgr->playInit(track);
	}
}

/*
 * --INFO--
 * Address:	80332AA8
 * Size:	0000D4
 */
void DirectedBgm::initChildTrack_onPlaying(JASTrack* track, u8 id)
{
	P2ASSERTLINE(816, _B4 == 1);
	P2ASSERTLINE(817, id < 16);
	PSSystem::setObject(track, mChildTracks[id], 18);
	mChildTracks[id]->init(track);
	if (mDirectorMgr) {
		mDirectorMgr->playInit(track);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
void DirectedBgm::getDirector(u8)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80332B7C
 * Size:	000098
 */
DirectorBase* DirectedBgm::getDirectorP(u8 id)
{
	P2ASSERTLINE(832, mDirectorMgr);
	return mDirectorMgr->getDirector(id);
}

/*
 * --INFO--
 * Address:	80332C14
 * Size:	000064
 */
SeqTrackRoot* DirectedBgm::newSeqTrackRoot()
{
	SeqTrackRoot* track = new SeqTrackRoot;
	P2ASSERTLINE(839, track);
	return track;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r3, 0x2c4
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80332C3C
	bl       __ct__Q28PSSystem12SeqTrackRootFv
	mr       r31, r3

lbl_80332C3C:
	cmplwi   r31, 0
	bne      lbl_80332C60
	lis      r3, lbl_8048F848@ha
	lis      r5, lbl_8048F854@ha
	addi     r3, r3, lbl_8048F848@l
	li       r4, 0x347
	addi     r5, r5, lbl_8048F854@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80332C60:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80332C78
 * Size:	000074
 */
SeqTrackChild* DirectedBgm::newSeqTrackChild(u8, SeqTrackRoot& track)
{
	SeqTrackChild* newtrack = new SeqTrackChild(*(const_cast<const SeqTrackRoot*>(mRootTrack)));
	P2ASSERTLINE(847, newtrack);
	return newtrack;
}

/*
 * --INFO--
 * Address:	80332CEC
 * Size:	0001F0
 */
void DirectedBgm::init()
{
	SeqBase::init();
	mRootTrack = newSeqTrackRoot();
	P2ASSERTLINE(855, mRootTrack);
	for (u8 i = 0; i < 16; i++) {
		mChildTracks[i] = newSeqTrackChild(i, *mRootTrack);
	}
	_B4 = true;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lis      r3, lbl_8048F848@ha
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	addi     r28, r3, lbl_8048F848@l
	lwz      r4, 0x14(r31)
	cmplwi   r4, 0
	beq      lbl_80332E3C
	lwz      r3,
"sInstance__Q28PSSystem39SingletonBase<Q28PSSystem11SeqDataList>"@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80332D34
	bl       getSeqVolume__Q28PSSystem11SeqDataListFPCc
	stb      r3, 0x24(r31)

lbl_80332D34:
	li       r3, 0x18
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_80332E38
	bl       getArchivePointer__Q27JAInter11SequenceMgrFv
	cmplwi   r3, 0
	bne      lbl_80332D64
	addi     r3, r28, 0
	addi     r5, r28, 0xc
	li       r4, 0x192
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80332D64:
	bl       getArchivePointer__Q27JAInter11SequenceMgrFv
	lwz      r4, 0x14(r31)
	bl       findNameResource__10JKRArchiveCFPCc
	or.      r30, r3, r3
	bne      lbl_80332D90
	lwz      r6, 0x14(r31)
	addi     r3, r28, 0
	addi     r5, r28, 0x8c
	li       r4, 0x194
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80332D90:
	lwz      r4, 0xc(r30)
	lis      r3, __vt__Q28PSSystem7SeqHeap@ha
	addi     r0, r3, __vt__Q28PSSystem7SeqHeap@l
	li       r3, 0
	stw      r0, 0(r29)
	addi     r0, r4, 0x1f
	rlwinm   r30, r0, 0, 0, 0x1a
	cmplwi   r31, 0
	stw      r3, 4(r29)
	stw      r30, 8(r29)
	stw      r3, 0xc(r29)
	stw      r31, 0x10(r29)
	stw      r3, 0x14(r29)
	bne      lbl_80332DDC
	addi     r3, r28, 0
	addi     r5, r28, 0xc
	li       r4, 0x86
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80332DDC:
	cmplwi   r30, 0
	beq      lbl_80332E38
	lwz      r3, 8(r29)
	li       r5, 0x20
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, 0xc(r29)
	lwz      r0, 0xc(r29)
	cmplwi   r0, 0
	bne      lbl_80332E18
	addi     r3, r28, 0
	addi     r5, r28, 0xc
	li       r4, 0x8a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80332E18:
	lwz      r0, 8(r29)
	cmplwi   r0, 0
	bne      lbl_80332E38
	addi     r3, r28, 0
	addi     r5, r28, 0xc
	li       r4, 0x8b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80332E38:
	stw      r29, 0x28(r31)

lbl_80332E3C:
	mr       r3, r31
	lwz      r12, 0x10(r31)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x70(r31)
	lwz      r0, 0x70(r31)
	cmplwi   r0, 0
	bne      lbl_80332E74
	addi     r3, r28, 0
	addi     r5, r28, 0xc
	li       r4, 0x357
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80332E74:
	li       r28, 0
	b        lbl_80332EA8

lbl_80332E7C:
	mr       r3, r31
	mr       r4, r28
	lwz      r12, 0x10(r31)
	lwz      r5, 0x70(r31)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	rlwinm   r4, r28, 2, 0x16, 0x1d
	addi     r28, r28, 1
	addi     r0, r4, 0x74
	stwx     r3, r31, r0

lbl_80332EA8:
	clrlwi   r0, r28, 0x18
	cmplwi   r0, 0x10
	blt      lbl_80332E7C
	li       r0, 1
	stb      r0, 0xb4(r31)
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
 * Address:	80332EDC
 * Size:	000154
 */
void DirectedBgm::startSeq()
{
	SeqBase::startSeq();
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lis      r3, lbl_8048F848@ha
	addi     r30, r3, lbl_8048F848@l
	addi     r3, r29, 0x50
	bl       OSLockMutex
	bl       getArchivePointer__Q27JAInter11SequenceMgrFv
	cmplwi   r3, 0
	bne      lbl_80332F28
	addi     r3, r30, 0
	addi     r5, r30, 0xc
	li       r4, 0x192
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80332F28:
	bl       getArchivePointer__Q27JAInter11SequenceMgrFv
	lwz      r4, 0x14(r29)
	bl       findNameResource__10JKRArchiveCFPCc
	or.      r31, r3, r3
	bne      lbl_80332F54
	lwz      r6, 0x14(r29)
	addi     r3, r30, 0
	addi     r5, r30, 0x8c
	li       r4, 0x194
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80332F54:
	mr       r3, r29
	lhz      r31, 0(r31)
	lwz      r12, 0x10(r29)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	or       r31, r31, r3
	mr       r3, r29
	lwz      r12, 0x10(r29)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r5, r31
	addi     r8, r29, 0x18
	li       r4, 0
	li       r6, 0
	li       r7, 0
	bl
storeSeqBuffer__Q27JAInter11SequenceMgrFPP11JAISequencePQ27JAInter5ActorUlUlUcPQ27JAInter9SoundInfo
	mr       r3, r29
	lwz      r12, 0x10(r29)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	bne      lbl_80332FCC
	addi     r3, r30, 0
	addi     r5, r30, 0xc
	li       r4, 0x216
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80332FCC:
	lwz      r31, 0(r31)
	cmplwi   r31, 0
	bne      lbl_80332FEC
	addi     r3, r30, 0
	addi     r5, r30, 0x9c
	li       r4, 0x21a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80332FEC:
	stw      r29, 0x6a4(r31)
	mr       r3, r29
	lwz      r12, 0x10(r29)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	addi     r0, r31, 0x30c
	addi     r3, r29, 0x50
	stw      r0, 0x4c(r29)
	bl       OSUnlockMutex
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
 * Address:	80333030
 * Size:	0000F0
 */
void DirectedBgm::stopSeq(u32 type)
{
	if (getHandleP()) {
		for (u8 i = 0; i < 16; i++) {
			mChildTracks[i]->onStopSeq();
		}
		mRootTrack->onStopSeq();
		if (mDirectorMgr) {
			mDirectorMgr->off(this);
		}
		if (getHandleP()) {
			(*getHandleP())->stop(type);
		}
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r12, 0x10(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0(r3)
	cmplwi   r0, 0
	beq      lbl_80333104
	li       r31, 0
	b        lbl_80333094

lbl_80333074:
	rlwinm   r3, r31, 2, 0x16, 0x1d
	addi     r0, r3, 0x74
	lwzx     r3, r29, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r31, r31, 1

lbl_80333094:
	clrlwi   r0, r31, 0x18
	cmplwi   r0, 0x10
	blt      lbl_80333074
	lwz      r3, 0x70(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x6c(r29)
	cmplwi   r3, 0
	beq      lbl_803330C8
	mr       r4, r29
	bl       off__Q28PSSystem15DirectorMgrBaseFPQ28PSSystem11DirectedBgm

lbl_803330C8:
	mr       r3, r29
	lwz      r12, 0x10(r29)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_80333104
	lwz      r3, 0(r3)
	cmplwi   r3, 0
	beq      lbl_80333104
	lwz      r12, 0x10(r3)
	mr       r4, r30
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_80333104:
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
 * Address:	80333120
 * Size:	00002C
 */
void DirectedBgm::onPlayingFrame()
{
	if (mDirectorMgr) {
		mDirectorMgr->exec();
	}
}

/*
 * --INFO--
 * Address:	8033314C
 * Size:	00002C
 */
void SeqTrackRoot_JumpBgm::onBeatTop()
{
	// JumpBgmPort::onBeatTop(mBeatMgr);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	addi     r4, r4, 0x3c
	lwz      r3, 0x2c4(r3)
	bl       onBeatTop__Q28PSSystem11JumpBgmPortFRQ28PSSystem7BeatMgr
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
JumpBgmPort::JumpBgmPort(JumpBgmSeq*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80333178
 * Size:	0000B8
 */
void JumpBgmPort::onBeatTop(BeatMgr& mgr)
{
	if (mgr._00) { }
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lbz      r0, 0(r4)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_803331DC
	lhz      r31, 0x34(r30)
	cmplwi   r31, 0xffff
	beq      lbl_803331DC
	addi     r3, r30, 0x54
	bl       OSLockMutex
	sth      r31, 0x6c(r30)
	addi     r3, r30, 0x54
	bl       OSUnlockMutex
	addi     r3, r30, 0x1c
	bl       OSLockMutex
	lis      r4, 0x0000FFFF@ha
	addi     r3, r30, 0x1c
	addi     r0, r4, 0x0000FFFF@l
	sth      r0, 0x34(r30)
	bl       OSUnlockMutex
	b        lbl_80333218

lbl_803331DC:
	lhz      r31, 0x18(r30)
	cmplwi   r31, 0xffff
	beq      lbl_80333218
	addi     r3, r30, 0x54
	bl       OSLockMutex
	sth      r31, 0x6c(r30)
	addi     r3, r30, 0x54
	bl       OSUnlockMutex
	mr       r3, r30
	bl       OSLockMutex
	lis      r4, 0x0000FFFF@ha
	mr       r3, r30
	addi     r0, r4, 0x0000FFFF@l
	sth      r0, 0x18(r30)
	bl       OSUnlockMutex

lbl_80333218:
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
 * Size:	000048
 */
void JumpBgmPort::requestQuickly(u16)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void JumpBgmPort::requestOnBeat(u16)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void JumpBgmPort::requestEveryBeat(u16)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000AC
 */
void JumpBgmPort::output()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80333230
 * Size:	000190
 */
JumpBgmSeq::JumpBgmSeq(char const* bmsFileName, JAInter::SoundInfo const& info, PSSystem::DirectorMgrBase* directorMgr)
    : DirectedBgm(bmsFileName, info, directorMgr)
{
	OSInitMutex(&_B8);
	_D0 = -1;
	OSInitMutex(&_D4);
	_EC = -1;
	OSInitMutex(&_F0);
	_108 = 0;
	OSInitMutex(&_10C);
	_124 = -1;
	_128 = this; // TODO: This feels indicative of a substruct
	_12C = 0;
	_130 = 0;

	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r26, r3
	  mr        r29, r4
	  mr        r30, r5
	  mr        r4, r26
	  mr        r31, r6
	  mr        r27, r4
	  mr        r28, r4
	  bl        -0x30CAA4
	  lis       r3, 0x804E
	  lis       r5, 0x804E
	  subi      r0, r3, 0x598C
	  lis       r4, 0x804E
	  stw       r0, 0x10(r28)
	  li        r10, 0
	  lis       r3, 0x804E
	  lwz       r8, 0x0(r30)
	  stw       r10, 0x14(r28)
	  subi      r7, r5, 0x5948
	  lwz       r0, 0x4(r30)
	  subi      r6, r4, 0x5930
	  stw       r8, 0x18(r28)
	  subi      r5, r3, 0x593C
	  lwz       r9, 0x8(r30)
	  li        r4, 0x4
	  stw       r0, 0x1C(r28)
	  li        r0, 0x26
	  lwz       r8, 0xC(r30)
	  addi      r3, r28, 0x50
	  stw       r9, 0x20(r28)
	  stw       r8, 0x24(r28)
	  stw       r10, 0x28(r28)
	  stw       r7, 0x2C(r28)
	  sth       r10, 0x30(r28)
	  stw       r6, 0x2C(r28)
	  stw       r28, 0x34(r28)
	  stw       r7, 0x38(r28)
	  sth       r10, 0x3C(r28)
	  stw       r5, 0x38(r28)
	  stw       r28, 0x40(r28)
	  stw       r4, 0x44(r28)
	  stb       r0, 0x48(r28)
	  stw       r10, 0x4C(r28)
	  bl        -0x2437B8
	  cmplwi    r29, 0
	  beq-      .loc_0xE4
	  mr        r3, r29
	  bl        -0x2689E8
	  addi      r3, r3, 0x1
	  bl        -0x30F354
	  stw       r3, 0x14(r28)
	  mr        r4, r29
	  lwz       r3, 0x14(r28)
	  bl        -0x268AB8

	.loc_0xE4:
	  lis       r3, 0x804E
	  lis       r4, 0x804E
	  subi      r0, r3, 0x59D0
	  lis       r3, 0x804E
	  stw       r0, 0x10(r27)
	  li        r5, 0
	  subi      r4, r4, 0x5AA4
	  subi      r0, r3, 0x5B74
	  stw       r5, 0x68(r27)
	  addi      r3, r26, 0xB8
	  stw       r4, 0x10(r27)
	  stw       r31, 0x6C(r27)
	  stw       r5, 0x70(r27)
	  stb       r5, 0xB4(r27)
	  stw       r0, 0x10(r26)
	  bl        -0x243820
	  lis       r4, 0x1
	  addi      r3, r26, 0xD4
	  subi      r0, r4, 0x1
	  sth       r0, 0xD0(r26)
	  bl        -0x243834
	  lis       r4, 0x1
	  addi      r3, r26, 0xF0
	  subi      r0, r4, 0x1
	  sth       r0, 0xEC(r26)
	  bl        -0x243848
	  li        r0, 0
	  addi      r3, r26, 0x10C
	  sth       r0, 0x108(r26)
	  bl        -0x243858
	  lis       r3, 0x1
	  li        r0, 0
	  subi      r4, r3, 0x1
	  mr        r3, r26
	  sth       r4, 0x124(r26)
	  stw       r26, 0x128(r26)
	  stw       r0, 0x12C(r26)
	  sth       r0, 0x130(r26)
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803333C0
 * Size:	000080
 */
SeqTrackRoot* JumpBgmSeq::newSeqTrackRoot()
{
	SeqTrackRoot* track = new SeqTrackRoot_JumpBgm;
	P2ASSERTLINE(1211, track);
	return track;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0x2c8
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80333400
	bl       __ct__Q28PSSystem12SeqTrackRootFv
	lis      r3, __vt__Q28PSSystem20SeqTrackRoot_JumpBgm@ha
	addi     r0, r30, 0xb8
	addi     r3, r3, __vt__Q28PSSystem20SeqTrackRoot_JumpBgm@l
	stw      r3, 0(r31)
	stw      r0, 0x2c4(r31)

lbl_80333400:
	cmplwi   r31, 0
	bne      lbl_80333424
	lis      r3, lbl_8048F848@ha
	lis      r5, lbl_8048F854@ha
	addi     r3, r3, lbl_8048F848@l
	li       r4, 0x4bb
	addi     r5, r5, lbl_8048F854@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80333424:
	lwz      r0, 0x14(r1)
	mr       r3, r31
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
 * Size:	000420
 */
// SeqTrackRoot::~SeqTrackRoot()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80333440
 * Size:	000170
 */
void JumpBgmSeq::startSeq()
{
	BgmSeq::startSeq();
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lis      r3, lbl_8048F848@ha
	addi     r30, r3, lbl_8048F848@l
	addi     r3, r29, 0x50
	bl       OSLockMutex
	bl       getArchivePointer__Q27JAInter11SequenceMgrFv
	cmplwi   r3, 0
	bne      lbl_8033348C
	addi     r3, r30, 0
	addi     r5, r30, 0xc
	li       r4, 0x192
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033348C:
	bl       getArchivePointer__Q27JAInter11SequenceMgrFv
	lwz      r4, 0x14(r29)
	bl       findNameResource__10JKRArchiveCFPCc
	or.      r31, r3, r3
	bne      lbl_803334B8
	lwz      r6, 0x14(r29)
	addi     r3, r30, 0
	addi     r5, r30, 0x8c
	li       r4, 0x194
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803334B8:
	mr       r3, r29
	lhz      r31, 0(r31)
	lwz      r12, 0x10(r29)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	or       r31, r31, r3
	mr       r3, r29
	lwz      r12, 0x10(r29)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r5, r31
	addi     r8, r29, 0x18
	li       r4, 0
	li       r6, 0
	li       r7, 0
	bl
storeSeqBuffer__Q27JAInter11SequenceMgrFPP11JAISequencePQ27JAInter5ActorUlUlUcPQ27JAInter9SoundInfo
	mr       r3, r29
	lwz      r12, 0x10(r29)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	bne      lbl_80333530
	addi     r3, r30, 0
	addi     r5, r30, 0xc
	li       r4, 0x216
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80333530:
	lwz      r31, 0(r31)
	cmplwi   r31, 0
	bne      lbl_80333550
	addi     r3, r30, 0
	addi     r5, r30, 0x9c
	li       r4, 0x21a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80333550:
	stw      r29, 0x6a4(r31)
	mr       r3, r29
	lwz      r12, 0x10(r29)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	addi     r0, r31, 0x30c
	addi     r3, r29, 0x50
	stw      r0, 0x4c(r29)
	bl       OSUnlockMutex
	addi     r30, r29, 0xf0
	mr       r3, r30
	bl       OSLockMutex
	li       r0, 0
	mr       r3, r30
	sth      r0, 0x108(r29)
	bl       OSUnlockMutex
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
 * Address:	803335B0
 * Size:	000178
 */
void JumpBgmSeq::startSeq(u16)
{
	BgmSeq::startSeq();
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	lis      r3, lbl_8048F848@ha
	addi     r30, r3, lbl_8048F848@l
	addi     r3, r28, 0x50
	bl       OSLockMutex
	bl       getArchivePointer__Q27JAInter11SequenceMgrFv
	cmplwi   r3, 0
	bne      lbl_80333604
	addi     r3, r30, 0
	addi     r5, r30, 0xc
	li       r4, 0x192
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80333604:
	bl       getArchivePointer__Q27JAInter11SequenceMgrFv
	lwz      r4, 0x14(r28)
	bl       findNameResource__10JKRArchiveCFPCc
	or.      r31, r3, r3
	bne      lbl_80333630
	lwz      r6, 0x14(r28)
	addi     r3, r30, 0
	addi     r5, r30, 0x8c
	li       r4, 0x194
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80333630:
	mr       r3, r28
	lhz      r31, 0(r31)
	lwz      r12, 0x10(r28)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	or       r31, r31, r3
	mr       r3, r28
	lwz      r12, 0x10(r28)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r5, r31
	addi     r8, r28, 0x18
	li       r4, 0
	li       r6, 0
	li       r7, 0
	bl
storeSeqBuffer__Q27JAInter11SequenceMgrFPP11JAISequencePQ27JAInter5ActorUlUlUcPQ27JAInter9SoundInfo
	mr       r3, r28
	lwz      r12, 0x10(r28)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	bne      lbl_803336A8
	addi     r3, r30, 0
	addi     r5, r30, 0xc
	li       r4, 0x216
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803336A8:
	lwz      r31, 0(r31)
	cmplwi   r31, 0
	bne      lbl_803336C8
	addi     r3, r30, 0
	addi     r5, r30, 0x9c
	li       r4, 0x21a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803336C8:
	stw      r28, 0x6a4(r31)
	mr       r3, r28
	lwz      r12, 0x10(r28)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	addi     r0, r31, 0x30c
	addi     r3, r28, 0x50
	stw      r0, 0x4c(r28)
	bl       OSUnlockMutex
	addi     r30, r28, 0xf0
	mr       r3, r30
	bl       OSLockMutex
	sth      r29, 0x108(r28)
	mr       r3, r30
	bl       OSUnlockMutex
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
 * Address:	80333728
 * Size:	000060
 */
void JumpBgmSeq::requestJumpBgmQuickly(u16 jump)
{
	if (!_12C) {
		OSLockMutex(&mMutex);
		_12C = jump;
		OSUnlockMutex(&mMutex);
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r0, 0x12c(r3)
	cmplwi   r0, 0
	bne      lbl_8033376C
	addi     r31, r29, 0x10c
	mr       r3, r31
	bl       OSLockMutex
	sth      r30, 0x124(r29)
	mr       r3, r31
	bl       OSUnlockMutex

lbl_8033376C:
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
 * Address:	80333788
 * Size:	000060
 */
void JumpBgmSeq::requestJumpBgmOnBeat(u16 jump)
{
	if (!_12C) {
		OSLockMutex(&mMutex);
		_EC = jump;
		OSUnlockMutex(&mMutex);
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r0, 0x12c(r3)
	cmplwi   r0, 0
	bne      lbl_803337CC
	addi     r31, r29, 0xd4
	mr       r3, r31
	bl       OSLockMutex
	sth      r30, 0xec(r29)
	mr       r3, r31
	bl       OSUnlockMutex

lbl_803337CC:
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
 * Address:	803337E8
 * Size:	000054
 */
void JumpBgmSeq::requestJumpBgmEveryBeat(u16 jump)
{
	if (!_12C) {
		OSLockMutex(&mMutex);
		_12C = jump;
		OSUnlockMutex(&mMutex);
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0x12c(r3)
	cmplwi   r0, 0
	bne      lbl_80333824
	addi     r3, r30, 0xb8
	bl       OSLockMutex
	sth      r31, 0xd0(r30)
	addi     r3, r30, 0xb8
	bl       OSUnlockMutex

lbl_80333824:
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
 * Address:	8033383C
 * Size:	00004C
 */
void JumpBgmSeq::onPlayingFrame()
{
	DirectedBgm::onPlayingFrame();
	if (_12C) {
		_12C--;
	}
}

/*
 * --INFO--
 * Address:	80333888
 * Size:	0000C8
 */
void JumpBgmSeq::outputJumpRequest()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lhz      r31, 0x124(r3)
	cmplwi   r31, 0xffff
	beq      lbl_80333924
	addi     r30, r29, 0x10c
	mr       r3, r30
	bl       OSLockMutex
	lis      r4, 0x0000FFFF@ha
	mr       r3, r30
	addi     r0, r4, 0x0000FFFF@l
	sth      r0, 0x124(r29)
	bl       OSUnlockMutex
	addi     r30, r29, 0xf0
	mr       r3, r30
	bl       OSLockMutex
	sth      r31, 0x108(r29)
	mr       r3, r30
	bl       OSUnlockMutex
	lwz      r0, 0x128(r29)
	cmplwi   r0, 0
	bne      lbl_80333910
	lis      r3, lbl_8048F848@ha
	lis      r5, lbl_8048F854@ha
	addi     r3, r3, lbl_8048F848@l
	li       r4, 0x495
	addi     r5, r5, lbl_8048F854@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80333910:
	lwz      r4, 0x128(r29)
	lwz      r3, 0x6c(r4)
	cmplwi   r3, 0
	beq      lbl_80333924
	bl       off__Q28PSSystem15DirectorMgrBaseFPQ28PSSystem11DirectedBgm

lbl_80333924:
	cmplwi   r31, 0xffff
	beq      lbl_80333930
	sth      r31, 0x130(r29)

lbl_80333930:
	lwz      r0, 0x24(r1)
	mr       r3, r31
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
 * Address:	80333950
 * Size:	000040
 */
int JumpBgmSeq::getSeqStartPoint()
{
	int start = _108;
	onJump(start);
	return start;
}

/*
 * --INFO--
 * Address:	80333990
 * Size:	000014
 */
void JumpBgmSeq::setAvoidJumpTimer_Checked(u32 time)
{
	if (!_12C) {
		_12C = time;
	}
}

/*
 * --INFO--
 * Address:	803339A4
 * Size:	000060
 */
bool SeqMgr::isPlaying()
{
	return true;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r31, 0(r3)
	b        lbl_803339E4

lbl_803339BC:
	lwz      r3, 0(r31)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803339E0
	li       r3, 1
	b        lbl_803339F0

lbl_803339E0:
	lwz      r31, 0xc(r31)

lbl_803339E4:
	cmplwi   r31, 0
	bne      lbl_803339BC
	li       r3, 0

lbl_803339F0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80333A04
 * Size:	0000C8
 */
SeqMgr::~SeqMgr()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	or.      r28, r3, r3
	beq      lbl_80333AA8
	lis      r3, __vt__Q28PSSystem6SeqMgr@ha
	addi     r0, r3, __vt__Q28PSSystem6SeqMgr@l
	stw      r0, 0xc(r28)
	bl       OSDisableInterrupts
	lwz      r30, 0(r28)
	b        lbl_80333A78

lbl_80333A44:
	lwz      r31, 0xc(r30)
	mr       r3, r28
	mr       r4, r30
	bl       remove__10JSUPtrListFP10JSUPtrLink
	lwz      r3, 0(r30)
	cmplwi   r3, 0
	beq      lbl_80333A74
	lwz      r12, 0x10(r3)
	li       r4, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80333A74:
	mr       r30, r31

lbl_80333A78:
	cmplwi   r30, 0
	bne      lbl_80333A44
	bl       OSEnableInterrupts
	cmplwi   r28, 0
	beq      lbl_80333A98
	mr       r3, r28
	li       r4, 0
	bl       __dt__10JSUPtrListFv

lbl_80333A98:
	extsh.   r0, r29
	ble      lbl_80333AA8
	mr       r3, r28
	bl       __dl__FPv

lbl_80333AA8:
	lwz      r0, 0x24(r1)
	mr       r3, r28
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
 * Address:	80333ACC
 * Size:	00005C
 */
void SeqMgr::pauseOnAllSeq(SeqBase::PauseMode)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r4
	lwz      r31, 0(r3)
	b        lbl_80333B08

lbl_80333AEC:
	lwz      r3, 0(r31)
	mr       r4, r30
	lwz      r12, 0x10(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r31, 0xc(r31)

lbl_80333B08:
	cmplwi   r31, 0
	bne      lbl_80333AEC
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
 * Address:	80333B28
 * Size:	00004C
 */
void SeqMgr::pauseOffAllSeq()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r31, 0(r3)
	b        lbl_80333B58

lbl_80333B40:
	lwz      r3, 0(r31)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r31, 0xc(r31)

lbl_80333B58:
	cmplwi   r31, 0
	bne      lbl_80333B40
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80333B74
 * Size:	000024
 */
void SeqMgr::reservePauseOffAllSeq()
{
	/*
	lwz      r4, 0(r3)
	li       r0, 1
	b        lbl_80333B8C

lbl_80333B80:
	lwz      r3, 0(r4)
	sth      r0, 0x3c(r3)
	lwz      r4, 0xc(r4)

lbl_80333B8C:
	cmplwi   r4, 0
	bne      lbl_80333B80
	blr
	*/
}

/*
 * --INFO--
 * Address:	80333B98
 * Size:	000024
 */
void SeqMgr::cancelPauseOffAllSeq()
{
	/*
	lwz      r4, 0(r3)
	li       r0, 0
	b        lbl_80333BB0

lbl_80333BA4:
	lwz      r3, 0(r4)
	sth      r0, 0x3c(r3)
	lwz      r4, 0xc(r4)

lbl_80333BB0:
	cmplwi   r4, 0
	bne      lbl_80333BA4
	blr
	*/
}

/*
 * --INFO--
 * Address:	80333BBC
 * Size:	000080
 */
void SeqMgr::exec()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r31, 0(r3)
	b        lbl_80333C20

lbl_80333BD4:
	lwz      r3, 0(r31)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0(r31)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0(r3)
	cmplwi   r0, 0
	beq      lbl_80333C1C
	lwz      r3, 0(r31)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl

lbl_80333C1C:
	lwz      r31, 0xc(r31)

lbl_80333C20:
	cmplwi   r31, 0
	bne      lbl_80333BD4
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80333C3C
 * Size:	00005C
 */
void SeqMgr::stopAllSound(u32)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r4
	lwz      r31, 0(r3)
	b        lbl_80333C78

lbl_80333C5C:
	lwz      r3, 0(r31)
	mr       r4, r30
	lwz      r12, 0x10(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r31, 0xc(r31)

lbl_80333C78:
	cmplwi   r31, 0
	bne      lbl_80333C5C
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
 * Address:	80333C98
 * Size:	00005C
 */
void SeqMgr::scene1st(TaskChecker*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r4
	lwz      r31, 0(r3)
	b        lbl_80333CD4

lbl_80333CB8:
	lwz      r3, 0(r31)
	mr       r4, r30
	lwz      r12, 0x10(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r31, 0xc(r31)

lbl_80333CD4:
	cmplwi   r31, 0
	bne      lbl_80333CB8
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
 * Address:	80333CF4
 * Size:	0000E8
 */
SeqBase* SeqMgr::findSeq(JASTrack*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r4
	lwz      r31, 0(r3)
	b        lbl_80333DB8

lbl_80333D14:
	lwz      r3, 0(r31)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 1
	beq      lbl_80333DB4
	lwz      r3, 0(r31)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_80333DB4
	lwz      r3, 0(r31)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0(r3)
	cmplwi   r3, 0
	beq      lbl_80333DB4
	addi     r4, r3, 0x30c
	cmplw    r4, r30
	bne      lbl_80333D80
	lwz      r3, 0(r31)
	b        lbl_80333DC4

lbl_80333D80:
	li       r5, 0
	b        lbl_80333DA8

lbl_80333D88:
	rlwinm   r3, r5, 2, 0x16, 0x1d
	addi     r0, r3, 0x2fc
	lwzx     r0, r4, r0
	cmplw    r0, r30
	bne      lbl_80333DA4
	lwz      r3, 0(r31)
	b        lbl_80333DC4

lbl_80333DA4:
	addi     r5, r5, 1

lbl_80333DA8:
	clrlwi   r0, r5, 0x18
	cmplwi   r0, 0x10
	blt      lbl_80333D88

lbl_80333DB4:
	lwz      r31, 0xc(r31)

lbl_80333DB8:
	cmplwi   r31, 0
	bne      lbl_80333D14
	li       r3, 0

lbl_80333DC4:
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
 * Address:	80333DDC
 * Size:	000080
 */
SeqBase* SeqMgr::getPlayingSeq(JASTrack*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r4
	lwz      r31, 0(r3)
	b        lbl_80333E38

lbl_80333DFC:
	lwz      r3, 0(r31)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 1
	beq      lbl_80333E34
	lwz      r3, 0(r31)
	lwz      r0, 0x4c(r3)
	cmplwi   r0, 0
	beq      lbl_80333E34
	cmplw    r0, r30
	bne      lbl_80333E34
	b        lbl_80333E44

lbl_80333E34:
	lwz      r31, 0xc(r31)

lbl_80333E38:
	cmplwi   r31, 0
	bne      lbl_80333DFC
	li       r3, 0

lbl_80333E44:
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
 * Address:	80333E5C
 * Size:	00001C
 */
SeqBase* SeqMgr::getFirstSeq()
{
	/*
	lwz      r3, 0(r3)
	cmplwi   r3, 0
	beq      lbl_80333E70
	lwz      r3, 0(r3)
	blr

lbl_80333E70:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80333E78
 * Size:	000024
 */
SeqBase* SeqMgr::getFirstSeqA() { return getSeq(0); }

/*
 * --INFO--
 * Address:	80333E9C
 * Size:	000034
 */
SeqBase* SeqMgr::getSeq(u32)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       getNthLink__10JSUPtrListCFUl
	cmplwi   r3, 0
	bne      lbl_80333EBC
	li       r3, 0
	b        lbl_80333EC0

lbl_80333EBC:
	lwz      r3, 0(r3)

lbl_80333EC0:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80333ED0
 * Size:	0000E0
 */
JumpBgmSeq::~JumpBgmSeq() { }

} // namespace PSSystem
