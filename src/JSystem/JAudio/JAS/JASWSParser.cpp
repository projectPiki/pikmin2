#include "JSystem/JAudio/JAS/JASWave.h"
#include "JSystem/JSupport/JSU.h"

size_t JASWSParser::sUsedHeapSize;

/**
 * @note Address: 0x80098A68
 * @note Size: 0x28
 */
u32 JASWSParser::getGroupCount(void* stream)
{
	THeader* header = static_cast<THeader*>(stream);
	return header->mCtrlGroupOffset.ptr(header)->mCtrlGroupCount;
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

	const TCtrlGroup* ctrlGroupRaw = header->mCtrlGroupOffset.ptr(header);
	bank->setGroupCount(ctrlGroupRaw->mCtrlGroupCount);
	size_t maxSize = 0;
	for (int groupIndex = 0; groupIndex < ctrlGroupRaw->mCtrlGroupCount; groupIndex++) {
		TCtrlScene* ctrlSceneRaw                = ctrlGroupRaw->mCtrlSceneOffsets[groupIndex].ptr(header);
		TCtrl* ctrlRaw                          = ctrlSceneRaw->mCtrlOffset.ptr(header);
		JASBasicWaveBank::TWaveGroup* waveGroup = bank->getWaveGroup(groupIndex);
		TWaveArchiveBank* archiveBankRaw        = header->mArchiveBankOffset.ptr(header);
		archiveRaw                              = archiveBankRaw->mArchiveOffsets[groupIndex].ptr(header);
		waveGroup->setWaveCount(ctrlRaw->mWaveCount);
		for (int waveIndex = 0; waveIndex < ctrlRaw->mWaveCount; waveIndex++) {
			TWave* waveRaw = archiveRaw->mWaveOffsets[waveIndex].ptr(header);
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
			TCtrlWave* ctrlWaveRaw = ctrlRaw->mCtrlWaveOffsets[waveIndex].ptr(header);
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
	const TCtrlGroup* ctrlGroupRaw = header->mCtrlGroupOffset.ptr(header);
	if (ctrlGroupRaw->mCtrlGroupCount != 1) {
		return nullptr;
	}
	JASSimpleWaveBank* bank = new (heap, 0) JASSimpleWaveBank();
	if (bank == nullptr) {
		return nullptr;
	}
	size_t maxSize = 0;

	const TCtrlScene* ctrlSceneRaw         = ctrlGroupRaw->mCtrlSceneOffsets[0].ptr(header);
	const TCtrl* ctrlRaw                   = ctrlSceneRaw->mCtrlOffset.ptr(header);
	const TWaveArchiveBank* archiveBankRaw = header->mArchiveBankOffset.ptr(header);
	archiveRaw                             = archiveBankRaw->mArchiveOffsets[0].ptr(header);
	for (int waveIndex = 0; waveIndex < ctrlRaw->mWaveCount; waveIndex++) {
		TCtrlWave* ctrlWaveRaw = ctrlRaw->mCtrlWaveOffsets[waveIndex].ptr(header);
		size_t size            = ctrlWaveRaw->_00 & 0xFFFF;
		if (maxSize < size) {
			maxSize = size;
		}
	}
	bank->setWaveTableSize(maxSize + 1);
	for (int waveIndex = 0; waveIndex < ctrlRaw->mWaveCount; waveIndex++) {
		TWave* waveRaw = archiveRaw->mWaveOffsets[waveIndex].ptr(header);
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
		TCtrlWave* ctrlWaveRaw = ctrlRaw->mCtrlWaveOffsets[waveIndex].ptr(header);
		bank->setWaveInfo(ctrlWaveRaw->_00 & 0xFFFF, info);
	}
	bank->setFileName(archiveRaw->mFileName);
	sUsedHeapSize += priorFreeSize - heap->getFreeSize();
	return bank;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
size_t JASWSParser::getUsedHeapSize()
{
	// UNUSED FUNCTION
}
