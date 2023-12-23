#include "JSystem/JAudio/JAS/JASResArcLoader.h"
#include "PSSystem/PSSeq.h"
#include "PSSystem/PSCommon.h"
#include "PSSystem/PSStream.h"
#include "PSSystem/SeqTrack.h"
#include "PSSystem/PSSystemIF.h"
#include "PSSystem/PSDirector.h"
#include "stream.h"
#include "CNode.h"

namespace PSSystem {

/**
 * @note Address: 0x80330D20
 * @note Size: 0x60
 */
SeqDataList::SeqDataList()
    : SingletonBase<SeqDataList>(this)
{
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

/**
 * @note Address: 0x80330D80
 * @note Size: 0x88
 */
SeqDataList::~SeqDataList() { }

/**
 * @note Address: 0x80330E08
 * @note Size: 0x108
 */
int SeqDataList::getSeqVolume(char const* bmsname)
{
	char buf[32];
	P2ASSERTLINE(36, mFile);
	RamStream stream(mFile, -1);
	stream.resetPosition(true, 1);
	stream.readString(buf, 32);

	while (strcmp(buf, "endoffile")) {
		vu8 volume = stream.readByte();
		if (!strcmp(buf, bmsname)) {
			return volume;
		}
		stream.readString(buf, 32);
	}

	JUT_PANICLINE(53, "seq list\nnot find\n(%s)\n", bmsname);
	return 50;
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

/**
 * @note Address: 0x80330F10
 * @note Size: 0x60
 */
StreamDataList::StreamDataList()
    : SingletonBase(this)
{
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

/**
 * @note Address: 0x80330F70
 * @note Size: 0x88
 */
StreamDataList::~StreamDataList() { }

/**
 * @note Address: 0x80330FF8
 * @note Size: 0x110
 */
int StreamDataList::getStreamVolume(u32 id)
{
	u32 searchID = id & 0xfff;
	char buf[32];
	vu8 volume;
	volatile int streamID;
	P2ASSERTLINE(76, mFile);
	RamStream stream(mFile, -1);
	stream.resetPosition(true, 1);
	stream.readString(buf, 32);
	while (strcmp(buf, "endoffile")) {
		streamID = stream.readInt();
		volume   = stream.readByte();
		if (streamID == searchID) {
			return volume;
		}
		stream.readString(buf, 32);
	}
	JUT_PANICLINE(95, "stream list\nnot find\n(id=%d)\n", searchID);
	return 0;

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

/**
 * @note Address: 0x80331108
 * @note Size: 0x94
 */
void SeqSoundBase::stop(u32 type)
{
	P2ASSERTLINE(107, mSeq);
	OSMutex* mutex = &mSeq->mMutex;
	OSLockMutex(mutex);
	stopInner(type);
	OSUnlockMutex(mutex);
}

/**
 * @note Address: 0x8033119C
 * @note Size: 0x20
 */
void SeqSound::stopInner(u32 type) { JAInter::SequenceMgr::releaseSeqBuffer(this, type); }

/**
 * @note Address: 0x803311BC
 * @note Size: 0x20
 */
void StreamSound::stopInner(u32 type) { JAInter::StreamMgr::releaseStreamBuffer(this, type); }

/**
 * @note Address: N/A
 * @note Size: 0xEC
 */
SeqHeap::SeqHeap(u32 entry, SeqBase* seq)
{
	mOwner    = nullptr;
	mSize     = (entry + 0x1f) & 0xffffffe0;
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

/**
 * @note Address: 0x803311DC
 * @note Size: 0x60
 */
SeqHeap::~SeqHeap() { delete[] mFileData; }

/**
 * @note Address: 0x8033123C
 * @note Size: 0x200
 */
void SeqHeap::requestCallback(u32 request, u16 res, JAISequence* seq)
{
	static int oldID = 0;

	bool status = false;
	u8* file    = nullptr;

	switch (request) {
	case 0: {
		P2ASSERTLINE(190, seq);
		SeqSound* sound = static_cast<SeqSound*>(seq);
		P2ASSERTLINE(192, sound->mSeq);
		SeqHeap* heap = sound->mSeq->mSeqHeap;
		if (!heap->mOwner) {
			status      = true;
			size_t size = JASResArcLoader::getResSize(JAInter::SequenceMgr::getArchivePointer(), res);
			P2ASSERTLINE(201, heap->mSize <= size);
		} else {
			status = false;
		}
		file = heap->mFileData;
		P2ASSERTLINE(208, file);
	} break;
	case 1: {
		P2ASSERTLINE(220, seq);
		SeqSound* sound = static_cast<SeqSound*>(seq);
		P2ASSERTLINE(222, sound->mSeq);
		JKRArchive* arc = JAInter::SequenceMgr::getArchivePointer();
		P2ASSERTLINE(224, arc);
		size_t size = JASResArcLoader::getResSize(arc, res);
		sound->mSeq->mSeqHeap->loadedCallback(size, (u32)sound->mSeq->mSeqHeap);
	} break;
	case 2: {
		P2ASSERTLINE(220, seq);
		SeqSound* sound = static_cast<SeqSound*>(seq);
		sound->mSeq     = nullptr;
	} break;
	}

	// supposed to return some struct?

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

/**
 * @note Address: 0x8033143C
 * @note Size: 0xD4
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

/**
 * @note Address: 0x80331510
 * @note Size: 0x98
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

/**
 * @note Address: 0x803315A8
 * @note Size: 0x30
 */
void SeqPlayReservator::reservatorTask() { mSequence->startSeq(); }

/**
 * @note Address: 0x803315D8
 * @note Size: 0x30
 */
void SeqPauseOffReservator::reservatorTask() { mSequence->pauseOff(); }

/**
 * @note Address: 0x80331608
 * @note Size: 0x100
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

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
// void JSULink<PSSystem::SeqBase>::~JSULink()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x80331708
 * @note Size: 0x134
 */
void SeqBase::init()
{
	if (mBmsFileName) {
		if (SeqDataList::sInstance) {
			mSoundInfo.mVolume.c = SeqDataList::sInstance->getSeqVolume(mBmsFileName);
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

/**
 * @note Address: 0x8033183C
 * @note Size: 0x98
 */
SeqBase::~SeqBase()
{
	if (mSeqHeap) {
		delete mSeqHeap;
	}
	delete[] mBmsFileName;
}

/**
 * @note Address: 0x803318D4
 * @note Size: 0x3C
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

/**
 * @note Address: 0x80331910
 * @note Size: 0x90
 */
void* SeqBase::getFileEntry()
{
	P2ASSERTLINE(402, JAInter::SequenceMgr::getArchivePointer());
	void* file = JAInter::SequenceMgr::getArchivePointer()->findNameResource(mBmsFileName);
	JUT_ASSERTLINE(404, file, "not find(%s)", mBmsFileName);
	return file;
}

/**
 * @note Address: 0x803319A0
 * @note Size: 0x1D4
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
			sound->setPauseMode(2, 30);
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
			volume     = (volume > 1.0f) ? 1.0f : volume;
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
}

/**
 * @note Address: 0x80331B74
 * @note Size: 0x13C
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
}

/**
 * @note Address: 0x80331CB0
 * @note Size: 0xD4
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

	if (!(*getHandleP()) && mSeqSound) {
		u8 state = (u8)mSeqSound->mSeqParameter.mTrack.mSeqCtrl.mPlayingState;
		if (state == 0 || state == 2) {
			mSeqSound = nullptr;
		}
	}
}

/**
 * @note Address: 0x80331D84
 * @note Size: 0x4
 */
void SeqBase::onPlayingFrame() { }

/**
 * @note Address: 0x80331D88
 * @note Size: 0x154
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
	SeqSound* se = (SeqSound*)(this);
	se->mSeq     = this;
	setConfigVolume();
	mSeqSound = (SeqSound*)&handle->mSeqParameter.mTrack.mHead;
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

/**
 * @note Address: 0x80331EDC
 * @note Size: 0xD0
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

/**
 * @note Address: 0x80331FAC
 * @note Size: 0x38
 */
void SeqBase::scene1st(TaskChecker* task)
{
	if (mSeqHeap) {
		mSeqHeap->loadSeqAsync(task);
	}
}

/**
 * @note Address: 0x80331FE4
 * @note Size: 0x60
 */
void SeqBase::stopSeq(u32 type)
{
	JAISound** se = getHandleP();
	if (se && *se) {
		(*se)->stop(type);
	}
}

/**
 * @note Address: 0x80332044
 * @note Size: 0x114
 */
BgmSeq::BgmSeq(char const* bmsFileName, JAInter::SoundInfo const& info)
    : SeqBase(bmsFileName, info)
    , mHandleP(nullptr)
{
}

/**
 * @note Address: 0x80332158
 * @note Size: 0xC0
 */
BgmSeq::~BgmSeq() { stopSeq(0); }

/**
 * @note Address: 0x80332218
 * @note Size: 0x100
 */
StreamBgm::StreamBgm(u32 id, const JAInter::SoundInfo& info)
    : BgmSeq(static_cast<const char*>(nullptr), info)
    , mJaiSound(nullptr)
    , mId(id)
{
}

/**
 * @note Address: 0x80332318
 * @note Size: 0x4
 */
void StreamBgm::init() { }

/**
 * @note Address: 0x8033231C
 * @note Size: 0xEC
 */
StreamBgm::~StreamBgm() { stopSeq(0); }

/**
 * @note Address: 0x80332408
 * @note Size: 0x8
 */
void StreamBgm::setId(u32 a1) { mId = a1; }

/**
 * @note Address: 0x80332410
 * @note Size: 0x15C
 */
void StreamBgm::startSeq()
{
	if (StreamDataList::sInstance) {
		mSoundInfo.mVolume.c = StreamDataList::sInstance->getStreamVolume(mId);
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
}

/**
 * @note Address: 0x8033256C
 * @note Size: 0xD0
 */
void StreamBgm::setConfigVolume()
{
	f32 vol = PSGetSystemIFA()->mBgmVolume;
	(*getHandleP())->setVolume(vol, 0, 8);
	(*getHandleP())->setVolume(0.8f, 0, 3);
}

/**
 * @note Address: 0x8033263C
 * @note Size: 0x14
 */
bool StreamBgm::isPlaying() { return mJaiSound != 0; }

/**
 * @note Address: 0x80332650
 * @note Size: 0xC0
 */
SeSeq::~SeSeq() { stopSeq(0); }

/**
 * @note Address: 0x80332710
 * @note Size: 0x2C
 */
void SeSeq::seqLoadAfter() { startSeq(); }

/**
 * @note Address: 0x8033273C
 * @note Size: 0xD0
 */
void SeSeq::setConfigVolume()
{
	f32 vol = PSGetSystemIFA()->mSfxVolume;
	(*getHandleP())->setVolume(vol, 0, 8);
	(*getHandleP())->setVolume(0.8f, 0, 3);
}

/**
 * @note Address: 0x8033280C
 * @note Size: 0xA4
 */
void SeSeq::stopSeq(u32 type)
{
	for (u8 i = 0; i < (u8)JAIGlobalParameter::getParamSeCategoryMax(); i++) {
		JAIBasic::msBasic->stopAllSe(i);
	}
	SeqBase::stopSeq(type);
}

/**
 * @note Address: 0x803328B0
 * @note Size: 0x138
 */
DirectedBgm::DirectedBgm(char const* bmsFileName, JAInter::SoundInfo const& info, DirectorMgrBase* directorMgr)
    : BgmSeq(bmsFileName, info)
    , mDirectorMgr(directorMgr)
    , mRootTrack(nullptr)
    , _B4(0)
{
}

/**
 * @note Address: 0x803329E8
 * @note Size: 0xC0
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

/**
 * @note Address: 0x80332AA8
 * @note Size: 0xD4
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

/**
 * @note Address: N/A
 * @note Size: 0x98
 */
void DirectedBgm::getDirector(u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80332B7C
 * @note Size: 0x98
 */
DirectorBase* DirectedBgm::getDirectorP(u8 id)
{
	P2ASSERTLINE(832, mDirectorMgr);
	return mDirectorMgr->getDirector(id);
}

/**
 * @note Address: 0x80332C14
 * @note Size: 0x64
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

/**
 * @note Address: 0x80332C78
 * @note Size: 0x74
 */
SeqTrackChild* DirectedBgm::newSeqTrackChild(u8, SeqTrackRoot& track)
{
	SeqTrackChild* newtrack = new SeqTrackChild(*(const_cast<const SeqTrackRoot*>(mRootTrack)));
	P2ASSERTLINE(847, newtrack);
	return newtrack;
}

/**
 * @note Address: 0x80332CEC
 * @note Size: 0x1F0
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

/**
 * @note Address: 0x80332EDC
 * @note Size: 0x154
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

/**
 * @note Address: 0x80333030
 * @note Size: 0xF0
 */
void DirectedBgm::stopSeq(u32 type)
{
	if (*getHandleP()) {
		for (u8 i = 0; i < 16; i++) {
			mChildTracks[i]->onStopSeq();
		}
		mRootTrack->onStopSeq();
		if (mDirectorMgr) {
			mDirectorMgr->off(this);
		}
		SeqBase::stopSeq(type);
	}
}

/**
 * @note Address: 0x80333120
 * @note Size: 0x2C
 */
void DirectedBgm::onPlayingFrame()
{
	if (mDirectorMgr) {
		mDirectorMgr->exec();
	}
}

/**
 * @note Address: 0x8033314C
 * @note Size: 0x2C
 */
void SeqTrackRoot_JumpBgm::onBeatTop() { mJumpPort->onBeatTop(mBeatMgr); }

/**
 * @note Address: N/A
 * @note Size: 0x84
 */
JumpBgmPort::JumpBgmPort(JumpBgmSeq* owner)
{
	OSInitMutex(&mMutex1);
	_18 = -1;
	OSInitMutex(&mMutex2);
	_34 = -1;
	OSInitMutex(&mMutex3);
	_50 = 0;
	OSInitMutex(&mMutex4);
	_64 = -1;

	mOwner          = owner;
	mAvoidJumpTimer = 0;
	_70             = 0;
}

/**
 * @note Address: 0x80333178
 * @note Size: 0xB8
 */
void JumpBgmPort::onBeatTop(BeatMgr& mgr)
{
	if (!mgr._00) {
		return;
	}

	u16 mode = _34;
	if (mode != 0xffff) {
		OSLockMutex(&mMutex4);
		_64 = mode;
		OSUnlockMutex(&mMutex4);
		OSLockMutex(&mMutex2);
		_34 = 0xffff;
		OSUnlockMutex(&mMutex2);
	} else if (_18 != 0xffff) {
		OSLockMutex(&mMutex4);
		_64 = mode;
		OSUnlockMutex(&mMutex4);
		OSLockMutex(&mMutex1);
		_18 = 0xffff;
		OSUnlockMutex(&mMutex1);
	}
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

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
void JumpBgmPort::requestQuickly(u16 state)
{
	if (mAvoidJumpTimer == 0) {
		OSLockMutex(&mMutex4);
		_64 = state;
		OSUnlockMutex(&mMutex4);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
void JumpBgmPort::requestOnBeat(u16 state)
{
	if (mAvoidJumpTimer == 0) {
		OSLockMutex(&mMutex2);
		_34 = state;
		OSUnlockMutex(&mMutex2);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x44
 */
void JumpBgmPort::requestEveryBeat(u16 state)
{
	if (mAvoidJumpTimer == 0) {
		OSLockMutex(&mMutex1);
		_18 = state;
		OSUnlockMutex(&mMutex1);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xAC
 */
u16 JumpBgmPort::output()
{
	u16 check = _64;
	if (check != 0xffff) {
		OSLockMutex(&mMutex4);
		_64 = -1;
		OSUnlockMutex(&mMutex4);

		OSLockMutex(&mMutex3);
		_50 = check;
		OSUnlockMutex(&mMutex3);

		P2ASSERTLINE(1173, mOwner);
		if (mOwner->mDirectorMgr) {
			mOwner->mDirectorMgr->off(mOwner);
		}
	}

	if (check != 0xffff) {
		_70 = check;
	}
	return check;
}

/**
 * @note Address: 0x80333230
 * @note Size: 0x190
 */
JumpBgmSeq::JumpBgmSeq(char const* bmsFileName, JAInter::SoundInfo const& info, PSSystem::DirectorMgrBase* directorMgr)
    : DirectedBgm(bmsFileName, info, directorMgr)
    , mJumpPort(this)
{
}

/**
 * @note Address: 0x803333C0
 * @note Size: 0x80
 */
SeqTrackRoot* JumpBgmSeq::newSeqTrackRoot()
{
	SeqTrackRoot* track = new SeqTrackRoot_JumpBgm(&mJumpPort);
	P2ASSERTLINE(1211, track);
	return track;
}

/**
 * @note Address: N/A
 * @note Size: 0x420
 */
// SeqTrackRoot::~SeqTrackRoot()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x80333440
 * @note Size: 0x170
 */
void JumpBgmSeq::startSeq()
{
	DirectedBgm::startSeq();

	OSLockMutex(&mJumpPort.mMutex3);
	mJumpPort._50 = 0;
	OSUnlockMutex(&mJumpPort.mMutex3);
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

/**
 * @note Address: 0x803335B0
 * @note Size: 0x178
 */
void JumpBgmSeq::startSeq(u16 type)
{
	BgmSeq::startSeq();

	OSLockMutex(&mJumpPort.mMutex3);
	mJumpPort._50 = type;
	OSUnlockMutex(&mJumpPort.mMutex3);
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

/**
 * @note Address: 0x80333728
 * @note Size: 0x60
 */
void JumpBgmSeq::requestJumpBgmQuickly(u16 jump) { mJumpPort.requestQuickly(jump); }

/**
 * @note Address: 0x80333788
 * @note Size: 0x60
 */
void JumpBgmSeq::requestJumpBgmOnBeat(u16 jump) { mJumpPort.requestOnBeat(jump); }

/**
 * @note Address: 0x803337E8
 * @note Size: 0x54
 */
void JumpBgmSeq::requestJumpBgmEveryBeat(u16 jump) { mJumpPort.requestEveryBeat(jump); }

/**
 * @note Address: 0x8033383C
 * @note Size: 0x4C
 */
void JumpBgmSeq::onPlayingFrame()
{
	DirectedBgm::onPlayingFrame();
	if (mJumpPort.mAvoidJumpTimer) {
		mJumpPort.mAvoidJumpTimer--;
	}
}

/**
 * @note Address: 0x80333888
 * @note Size: 0xC8
 */
u16 JumpBgmSeq::outputJumpRequest() { return mJumpPort.output(); }

/**
 * @note Address: 0x80333950
 * @note Size: 0x40
 */
int JumpBgmSeq::getSeqStartPoint()
{
	int start = mJumpPort._50;
	onJump(start);
	return start;
}

/**
 * @note Address: 0x80333990
 * @note Size: 0x14
 */
void JumpBgmSeq::setAvoidJumpTimer_Checked(u32 time)
{
	if (!mJumpPort.mAvoidJumpTimer) {
		mJumpPort.mAvoidJumpTimer = time;
	}
}

/**
 * @note Address: 0x803339A4
 * @note Size: 0x60
 */
bool SeqMgr::isPlaying()
{
	FOREACH_NODE(JSULink<SeqBase>, getFirst(), link)
	{
		if (link->getObject()->isPlaying()) {
			return true;
		}
	}
	return false;
}

/**
 * @note Address: 0x80333A04
 * @note Size: 0xC8
 */
SeqMgr::~SeqMgr()
{
	OSDisableInterrupts();
	FOREACH_NODE(JSULink<SeqBase>, getFirst(), link)
	{
		remove(link);
		delete link->getObject();
	}
	OSEnableInterrupts();
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

/**
 * @note Address: 0x80333ACC
 * @note Size: 0x5C
 */
void SeqMgr::pauseOnAllSeq(SeqBase::PauseMode mode)
{
	FOREACH_NODE(JSULink<SeqBase>, getFirst(), link) { link->getObject()->pauseOn(mode); }
}

/**
 * @note Address: 0x80333B28
 * @note Size: 0x4C
 */
void SeqMgr::pauseOffAllSeq()
{
	FOREACH_NODE(JSULink<SeqBase>, getFirst(), link) { link->getObject()->pauseOff(); }
}

/**
 * @note Address: 0x80333B74
 * @note Size: 0x24
 */
void SeqMgr::reservePauseOffAllSeq()
{
	FOREACH_NODE(JSULink<SeqBase>, getFirst(), link) { link->getObject()->mPauseOffRes.mState = 1; }
}

/**
 * @note Address: 0x80333B98
 * @note Size: 0x24
 */
void SeqMgr::cancelPauseOffAllSeq()
{
	FOREACH_NODE(JSULink<SeqBase>, getFirst(), link) { link->getObject()->mPauseOffRes.mState = 0; }
}

/**
 * @note Address: 0x80333BBC
 * @note Size: 0x80
 */
void SeqMgr::exec()
{
	FOREACH_NODE(JSULink<SeqBase>, getFirst(), link)
	{
		link->getObject()->exec();
		if (*link->getObject()->getHandleP()) {
			link->getObject()->onPlayingFrame();
		}
	}
}

/**
 * @note Address: 0x80333C3C
 * @note Size: 0x5C
 */
void SeqMgr::stopAllSound(u32 state)
{
	FOREACH_NODE(JSULink<SeqBase>, getFirst(), link) { link->getObject()->stopSeq(state); }
}

/**
 * @note Address: 0x80333C98
 * @note Size: 0x5C
 */
void SeqMgr::scene1st(TaskChecker* task)
{
	FOREACH_NODE(JSULink<SeqBase>, getFirst(), link) { link->getObject()->scene1st(task); }
}

/**
 * @note Address: 0x80333CF4
 * @note Size: 0xE8
 */
SeqBase* SeqMgr::findSeq(JASTrack* track)
{
	FOREACH_NODE(JSULink<SeqBase>, getFirst(), link)
	{
		if (link->getObject()->getSeqType() != 1 && link->getObject()->getHandleP()) {
			if (*link->getObject()->getHandleP()) {
				SeqSound* se   = (SeqSound*)(link->getObject());
				JASTrack* temp = &se->mSeqParameter.mTrack;
				if (temp == track) {
					return link->getObject();
				}
				// needs to not unroll
				// for (int i = 0; i < 16; i++) {
				if (temp->_2FC[0] == track) {
					return link->getObject();
				}
				//}
			}
		}
	}

	return nullptr;
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

/**
 * @note Address: 0x80333DDC
 * @note Size: 0x80
 */
SeqBase* SeqMgr::getPlayingSeq(JASTrack* track)
{
	FOREACH_NODE(JSULink<SeqBase>, getFirst(), link)
	{
		if (link->getObject()->getSeqType() != 1) {

			JASTrack* temp = (JASTrack*)link->getObject()->mSeqSound;
			if (temp && temp == track) {
				return link->getObject();
			}
		}
	}

	return nullptr;
}

/**
 * @note Address: 0x80333E5C
 * @note Size: 0x1C
 */
SeqBase* SeqMgr::getFirstSeq()
{
	JSULink<SeqBase>* link = getFirst();
	if (link) {
		return link->getObject();
	}
	return nullptr;
}

/**
 * @note Address: 0x80333E78
 * @note Size: 0x24
 */
SeqBase* SeqMgr::getFirstSeqA() { return getSeq(0); }

/**
 * @note Address: 0x80333E9C
 * @note Size: 0x34
 */
SeqBase* SeqMgr::getSeq(u32 id)
{
	JSULink<SeqBase>* link = (JSULink<SeqBase>*)getNthLink(id);
	return (!link) ? nullptr : link->getObject();
}

} // namespace PSSystem
