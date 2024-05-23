#include "JSystem/JAudio/JAS/JASWave.h"
#include "JSystem/JSupport/JSU.h"

/**
 * @note Address: 0x80098A68
 * @note Size: 0x28
 */
u32 JASWSParser::getGroupCount(void* stream)
{
	THeader* header = static_cast<THeader*>(stream);
	return JSUConvertOffsetToPtr<TCtrlGroup>(header, header->mCtrlGroupOffset)->mCtrlGroupCount;
}

/**
 * @note Address: 0x80098A90
 * @note Size: 0x204
 */
JASBasicWaveBank* JASWSParser::createBasicWaveBank(void* stream)
{
	TWaveArchive* archiveRaw;
	JKRHeap* heap           = JASWaveBank::getCurrentHeap();
	const u32 priorFreeSize = heap->getFreeSize();
	const THeader* header   = static_cast<THeader*>(stream);
	JASBasicWaveBank* bank  = new (heap, 0) JASBasicWaveBank();
	if (bank == nullptr) {
		return nullptr;
	}

	const TCtrlGroup* ctrlGroupRaw = JSUConvertOffsetToPtr<TCtrlGroup>(header, header->mCtrlGroupOffset);
	bank->setGroupCount(ctrlGroupRaw->mCtrlGroupCount);
	size_t maxSize = 0;
	for (int groupIndex = 0; groupIndex < ctrlGroupRaw->mCtrlGroupCount; groupIndex++) {
		TCtrlScene* ctrlSceneRaw                = JSUConvertOffsetToPtr<TCtrlScene>(header, ctrlGroupRaw->mCtrlSceneOffsets[groupIndex]);
		TCtrl* ctrlRaw                          = JSUConvertOffsetToPtr<TCtrl>(header, ctrlSceneRaw->mCtrlOffset);
		JASBasicWaveBank::TWaveGroup* waveGroup = bank->getWaveGroup(groupIndex);
		TWaveArchiveBank* archiveBankRaw        = JSUConvertOffsetToPtr<TWaveArchiveBank>(header, header->mArchiveBankOffset);
		archiveRaw                              = JSUConvertOffsetToPtr<TWaveArchive>(header, archiveBankRaw->mArchiveOffsets[groupIndex]);
		waveGroup->setWaveCount(ctrlRaw->mWaveCount);
		for (int waveIndex = 0; waveIndex < ctrlRaw->mWaveCount; waveIndex++) {
			TWave* waveRaw = JSUConvertOffsetToPtr<TWave>(header, archiveRaw->mWaveOffsets[waveIndex]);
			JASWaveInfo info;
			info.mFormat           = waveRaw->mFormat;
			info.mKey              = waveRaw->mKey;
			info.mSampleRate       = waveRaw->mSampleRate;
			info.mAwOffset         = waveRaw->mAwOffset;
			info.mAwLength         = waveRaw->mAwLength;
			info.mLoopOffset       = waveRaw->mLoop;
			info.mLoopStartOffset  = waveRaw->mLoopStart;
			info.mLoopEndOffset    = waveRaw->mLoopEnd;
			info.mSampleCount      = waveRaw->mSampleCount;
			info.mLast             = waveRaw->mLast;
			info.mPenult           = waveRaw->mPenult;
			TCtrlWave* ctrlWaveRaw = JSUConvertOffsetToPtr<TCtrlWave>(header, ctrlRaw->mCtrlWaveOffsets[waveIndex]);
			size_t size            = (u16)ctrlWaveRaw->_00;
			waveGroup->setWaveInfo(waveIndex, size, info);
			if (maxSize < size) {
				maxSize = size;
			}
		}
		waveGroup->setFileName(archiveRaw->mFileName);
	}
	bank->setWaveTableSize(maxSize + 1);
	sUsedHeapSize += priorFreeSize - heap->getFreeSize();
	return bank;
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stmw     r16, 0x30(r1)
	mr       r16, r3
	bl       getCurrentHeap__11JASWaveBankFv
	mr       r29, r3
	bl       getFreeSize__7JKRHeapFv
	mr       r25, r3
	mr       r28, r16
	mr       r4, r29
	li       r3, 0x2c
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_80098AD8
	bl       __ct__16JASBasicWaveBankFv
	mr       r24, r3

lbl_80098AD8:
	cmplwi   r24, 0
	bne      lbl_80098AE8
	li       r3, 0
	b        lbl_80098C80

lbl_80098AE8:
	lwz      r4, 0x14(r28)
	mr       r3, r28
	bl       "JSUConvertOffsetToPtr<Q211JASWSParser10TCtrlGroup>__FPCvUl"
	mr       r23, r3
	mr       r3, r24
	lwz      r4, 8(r23)
	bl       setGroupCount__16JASBasicWaveBankFUl
	mr       r31, r23
	li       r27, 0
	li       r26, 0
	li       r30, 0
	b        lbl_80098C4C

lbl_80098B18:
	lwz      r4, 0xc(r31)
	mr       r3, r28
	bl       "JSUConvertOffsetToPtr<Q211JASWSParser10TCtrlScene>__FPCvUl"
	mr       r4, r3
	mr       r3, r28
	lwz      r4, 0xc(r4)
	bl       "JSUConvertOffsetToPtr<Q211JASWSParser5TCtrl>__FPCvUl"
	mr       r22, r3
	mr       r3, r24
	mr       r4, r26
	bl       getWaveGroup__16JASBasicWaveBankFi
	lwz      r4, 0x10(r28)
	mr       r18, r3
	mr       r3, r28
	bl       "JSUConvertOffsetToPtr<Q211JASWSParser16TWaveArchiveBank>__FPCvUl"
	addi     r0, r30, 8
	lwzx     r4, r3, r0
	mr       r3, r28
	bl       "JSUConvertOffsetToPtr<Q211JASWSParser12TWaveArchive>__FPCvUl"
	lwz      r4, 4(r22)
	mr       r21, r3
	mr       r3, r18
	bl       setWaveCount__Q216JASBasicWaveBank10TWaveGroupFUl
	mr       r20, r21
	mr       r19, r22
	li       r17, 0
	b        lbl_80098C28

lbl_80098B84:
	lwz      r4, 0x74(r20)
	mr       r3, r28
	bl       "JSUConvertOffsetToPtr<Q211JASWSParser5TWave>__FPCvUl"
	lbz      r0, 1(r3)
	stb      r0, 8(r1)
	lbz      r0, 2(r3)
	stb      r0, 9(r1)
	lfs      f0, 4(r3)
	stfs     f0, 0xc(r1)
	lwz      r0, 8(r3)
	stw      r0, 0x10(r1)
	lwz      r0, 0xc(r3)
	stw      r0, 0x14(r1)
	lwz      r0, 0x10(r3)
	stw      r0, 0x18(r1)
	lwz      r0, 0x14(r3)
	stw      r0, 0x1c(r1)
	lwz      r0, 0x18(r3)
	stw      r0, 0x20(r1)
	lwz      r0, 0x1c(r3)
	stw      r0, 0x24(r1)
	lha      r0, 0x20(r3)
	sth      r0, 0x28(r1)
	lha      r0, 0x22(r3)
	mr       r3, r28
	sth      r0, 0x2a(r1)
	lwz      r4, 8(r19)
	bl       "JSUConvertOffsetToPtr<Q211JASWSParser9TCtrlWave>__FPCvUl"
	lwz      r0, 0(r3)
	mr       r3, r18
	mr       r4, r17
	addi     r6, r1, 8
	clrlwi   r5, r0, 0x10
	mr       r16, r5
	bl       setWaveInfo__Q216JASBasicWaveBank10TWaveGroupFiUlRC11JASWaveInfo
	cmplw    r27, r16
	bge      lbl_80098C1C
	mr       r27, r16

lbl_80098C1C:
	addi     r20, r20, 4
	addi     r19, r19, 4
	addi     r17, r17, 1

lbl_80098C28:
	lwz      r0, 4(r22)
	cmplw    r17, r0
	blt      lbl_80098B84
	mr       r3, r18
	mr       r4, r21
	bl       setFileName__10JASWaveArcFPCc
	addi     r31, r31, 4
	addi     r30, r30, 4
	addi     r26, r26, 1

lbl_80098C4C:
	lwz      r0, 8(r23)
	cmplw    r26, r0
	blt      lbl_80098B18
	mr       r3, r24
	addi     r4, r27, 1
	bl       setWaveTableSize__16JASBasicWaveBankFUl
	mr       r3, r29
	bl       getFreeSize__7JKRHeapFv
	lwz      r0, sUsedHeapSize__11JASWSParser@sda21(r13)
	subf     r4, r3, r25
	mr       r3, r24
	add      r0, r0, r4
	stw      r0, sUsedHeapSize__11JASWSParser@sda21(r13)

lbl_80098C80:
	lmw      r16, 0x30(r1)
	lwz      r0, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/**
 * @note Address: 0x80098C94
 * @note Size: 0x1F8
 */
JASSimpleWaveBank* JASWSParser::createSimpleWaveBank(void* stream)
{
	const TWaveArchive* archiveRaw;
	JKRHeap* heap                  = JASWaveBank::getCurrentHeap();
	const u32 priorFreeSize        = heap->getFreeSize();
	const THeader* header          = static_cast<THeader*>(stream);
	const TCtrlGroup* ctrlGroupRaw = JSUConvertOffsetToPtr<TCtrlGroup>(header, header->mCtrlGroupOffset);
	if (ctrlGroupRaw->mCtrlGroupCount != 1) {
		return nullptr;
	}
	JASSimpleWaveBank* bank = new (heap, 0) JASSimpleWaveBank();
	if (bank == nullptr) {
		return nullptr;
	}
	size_t maxSize = 0;

	const TCtrlScene* ctrlSceneRaw         = JSUConvertOffsetToPtr<TCtrlScene>(header, ctrlGroupRaw->mCtrlSceneOffsets[0]);
	const TCtrl* ctrlRaw                   = JSUConvertOffsetToPtr<TCtrl>(header, ctrlSceneRaw->mCtrlOffset);
	const TWaveArchiveBank* archiveBankRaw = JSUConvertOffsetToPtr<TWaveArchiveBank>(header, header->mArchiveBankOffset);
	archiveRaw                             = JSUConvertOffsetToPtr<TWaveArchive>(header, archiveBankRaw->mArchiveOffsets[0]);
	for (int waveIndex = 0; waveIndex < ctrlRaw->mWaveCount; waveIndex++) {
		TCtrlWave* ctrlWaveRaw = JSUConvertOffsetToPtr<TCtrlWave>(header, ctrlRaw->mCtrlWaveOffsets[waveIndex]);
		size_t size            = ctrlWaveRaw->_00 & 0xFFFF;
		if (maxSize < size) {
			maxSize = size;
		}
	}
	bank->setWaveTableSize(maxSize + 1);
	for (int waveIndex = 0; waveIndex < ctrlRaw->mWaveCount; waveIndex++) {
		TWave* waveRaw = JSUConvertOffsetToPtr<TWave>(header, archiveRaw->mWaveOffsets[waveIndex]);
		JASWaveInfo info;
		info.mFormat           = waveRaw->mFormat;
		info.mKey              = waveRaw->mKey;
		info.mSampleRate       = waveRaw->mSampleRate;
		info.mAwOffset         = waveRaw->mAwOffset;
		info.mAwLength         = waveRaw->mAwLength;
		info.mLoopOffset       = waveRaw->mLoop;
		info.mLoopStartOffset  = waveRaw->mLoopStart;
		info.mLoopEndOffset    = waveRaw->mLoopEnd;
		info.mSampleCount      = waveRaw->mSampleCount;
		info.mLast             = waveRaw->mLast;
		info.mPenult           = waveRaw->mPenult;
		TCtrlWave* ctrlWaveRaw = JSUConvertOffsetToPtr<TCtrlWave>(header, ctrlRaw->mCtrlWaveOffsets[waveIndex]);
		bank->setWaveInfo(ctrlWaveRaw->_00 & 0xFFFF, info);
	}
	bank->setFileName(archiveRaw->mFileName);
	sUsedHeapSize += priorFreeSize - heap->getFreeSize();
	return bank;
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stmw     r23, 0x3c(r1)
	mr       r23, r3
	bl       getCurrentHeap__11JASWaveBankFv
	mr       r25, r3
	bl       getFreeSize__7JKRHeapFv
	lwz      r4, 0x14(r23)
	mr       r31, r3
	mr       r24, r23
	mr       r3, r23
	bl       "JSUConvertOffsetToPtr<Q211JASWSParser10TCtrlGroup>__FPCvUl"
	mr       r23, r3
	lwz      r0, 8(r3)
	cmplwi   r0, 1
	beq      lbl_80098CE0
	li       r3, 0
	b        lbl_80098E78

lbl_80098CE0:
	mr       r4, r25
	li       r3, 0x68
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r30, r3, r3
	beq      lbl_80098D00
	bl       __ct__17JASSimpleWaveBankFv
	mr       r30, r3

lbl_80098D00:
	cmplwi   r30, 0
	bne      lbl_80098D10
	li       r3, 0
	b        lbl_80098E78

lbl_80098D10:
	lwz      r4, 0xc(r23)
	mr       r3, r24
	li       r26, 0
	bl       "JSUConvertOffsetToPtr<Q211JASWSParser10TCtrlScene>__FPCvUl"
	mr       r4, r3
	mr       r3, r24
	lwz      r4, 0xc(r4)
	bl       "JSUConvertOffsetToPtr<Q211JASWSParser5TCtrl>__FPCvUl"
	lwz      r4, 0x10(r24)
	mr       r29, r3
	mr       r3, r24
	bl       "JSUConvertOffsetToPtr<Q211JASWSParser16TWaveArchiveBank>__FPCvUl"
	mr       r4, r3
	mr       r3, r24
	lwz      r4, 8(r4)
	bl       "JSUConvertOffsetToPtr<Q211JASWSParser12TWaveArchive>__FPCvUl"
	mr       r23, r29
	mr       r28, r3
	li       r27, 0
	b        lbl_80098D88

lbl_80098D60:
	lwz      r4, 8(r23)
	mr       r3, r24
	bl       "JSUConvertOffsetToPtr<Q211JASWSParser9TCtrlWave>__FPCvUl"
	lwz      r0, 0(r3)
	clrlwi   r0, r0, 0x10
	cmplw    r26, r0
	bge      lbl_80098D80
	mr       r26, r0

lbl_80098D80:
	addi     r23, r23, 4
	addi     r27, r27, 1

lbl_80098D88:
	lwz      r0, 4(r29)
	cmplw    r27, r0
	blt      lbl_80098D60
	mr       r3, r30
	addi     r4, r26, 1
	bl       setWaveTableSize__17JASSimpleWaveBankFUl
	mr       r27, r28
	mr       r26, r29
	li       r23, 0
	b        lbl_80098E44

lbl_80098DB0:
	lwz      r4, 0x74(r27)
	mr       r3, r24
	bl       "JSUConvertOffsetToPtr<Q211JASWSParser5TWave>__FPCvUl"
	lbz      r0, 1(r3)
	stb      r0, 8(r1)
	lbz      r0, 2(r3)
	stb      r0, 9(r1)
	lfs      f0, 4(r3)
	stfs     f0, 0xc(r1)
	lwz      r0, 8(r3)
	stw      r0, 0x10(r1)
	lwz      r0, 0xc(r3)
	stw      r0, 0x14(r1)
	lwz      r0, 0x10(r3)
	stw      r0, 0x18(r1)
	lwz      r0, 0x14(r3)
	stw      r0, 0x1c(r1)
	lwz      r0, 0x18(r3)
	stw      r0, 0x20(r1)
	lwz      r0, 0x1c(r3)
	stw      r0, 0x24(r1)
	lha      r0, 0x20(r3)
	sth      r0, 0x28(r1)
	lha      r0, 0x22(r3)
	mr       r3, r24
	sth      r0, 0x2a(r1)
	lwz      r4, 8(r26)
	bl       "JSUConvertOffsetToPtr<Q211JASWSParser9TCtrlWave>__FPCvUl"
	mr       r4, r3
	mr       r3, r30
	lwz      r0, 0(r4)
	addi     r5, r1, 8
	clrlwi   r4, r0, 0x10
	bl       setWaveInfo__17JASSimpleWaveBankFUlRC11JASWaveInfo
	addi     r27, r27, 4
	addi     r26, r26, 4
	addi     r23, r23, 1

lbl_80098E44:
	lwz      r0, 4(r29)
	cmplw    r23, r0
	blt      lbl_80098DB0
	mr       r4, r28
	addi     r3, r30, 4
	bl       setFileName__10JASWaveArcFPCc
	mr       r3, r25
	bl       getFreeSize__7JKRHeapFv
	lwz      r0, sUsedHeapSize__11JASWSParser@sda21(r13)
	subf     r4, r3, r31
	mr       r3, r30
	add      r0, r0, r4
	stw      r0, sUsedHeapSize__11JASWSParser@sda21(r13)

lbl_80098E78:
	lmw      r23, 0x3c(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
size_t JASWSParser::getUsedHeapSize()
{
	// UNUSED FUNCTION
}
