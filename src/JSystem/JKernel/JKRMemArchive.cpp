#include "Dolphin/os.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JKernel/JKRDecomp.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JUtility/JUTException.h"
#include "stl/mem.h"
#include "types.h"

/**
 * @note Address: N/A
 * @note Size: 0x3C
 */
JKRMemArchive::JKRMemArchive() { }

/**
 * @note Address: 0x80024644
 * @note Size: 0xBC
 * __ct__13JKRMemArchiveFlQ210JKRArchive15EMountDirection
 */
JKRMemArchive::JKRMemArchive(s32 entryNum, JKRArchive::EMountDirection mountDirection)
    : JKRArchive(entryNum, EMM_Mem)
{
	mIsMounted      = false;
	mMountDirection = mountDirection;
	if (!open(entryNum, mMountDirection)) {
		return;
	} else {
		mMagicWord  = 'RARC';
		mVolumeName = &mStrTable[mDirectories->mOffset];
		sVolumeList.prepend(&mFileLoaderLink);
		mIsMounted = true;
	}
}

/**
 * @note Address: 0x80024700
 * @note Size: 0xC8
 * __ct__13JKRMemArchiveFPvUl15JKRMemBreakFlag
 */
JKRMemArchive::JKRMemArchive(void* mem, u32 size, JKRMemBreakFlag flag)
    : JKRArchive((s32)mem, EMM_Mem)
{
	mIsMounted = false;
	if (!open(mem, size, flag)) {
		return;
	} else {
		mMagicWord  = 'RARC';
		mVolumeName = &mStrTable[mDirectories->mOffset];
		sVolumeList.prepend(&mFileLoaderLink);
		mIsMounted = true;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xBC
 * __ct__13JKRMemArchiveFPCcQ210JKRArchive15EMountDirection
 */
JKRMemArchive::JKRMemArchive(const char*, EMountDirection)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800247C8
 * @note Size: 0xA8
 * __dt__13JKRMemArchiveFv
 */
JKRMemArchive::~JKRMemArchive()
{
	if (mIsMounted == true) {
		if (mIsOpen && mHeader)
			JKRFreeToHeap(mHeap, mHeader);

		sVolumeList.remove(&mFileLoaderLink);
		mIsMounted = false;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x40
 * fixedInit__13JKRMemArchiveFl
 */
void JKRMemArchive::fixedInit(s32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x108
 * mountFixed__13JKRMemArchiveFlQ210JKRArchive15EMountDirection
 */
void JKRMemArchive::mountFixed(s32, EMountDirection)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x10C
 * mountFixed__13JKRMemArchiveFPCcQ210JKRArchive15EMountDirection
 */
void JKRMemArchive::mountFixed(const char*, EMountDirection)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x108
 * mountFixed__13JKRMemArchiveFPv15JKRMemBreakFlag
 */
void JKRMemArchive::mountFixed(void*, JKRMemBreakFlag)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x74
 * unmountFixed__13JKRMemArchiveFv
 */
void JKRMemArchive::unmountFixed()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80024870
 * @note Size: 0x168
 */
bool JKRMemArchive::open(s32 entryNum, EMountDirection mountDirection)
{
	mHeader         = nullptr;
	mDataInfo       = nullptr;
	mArchiveData    = nullptr;
	mDirectories    = nullptr;
	mFileEntries    = nullptr;
	mStrTable       = nullptr;
	mIsOpen         = false;
	mMountDirection = mountDirection;

	if (mMountDirection == JKRArchive::EMD_Head) {
		u32 loadedSize;
		mHeader = (SArcHeader*)JKRDvdRipper::loadToMainRAM(entryNum, nullptr, Switch_1, 0, mHeap, JKRDvdRipper::ALLOC_DIR_TOP, 0,
		                                                   (int*)&mCompression, &loadedSize);
		if (mHeader) {
			DCInvalidateRange(mHeader, loadedSize);
		}
	} else {
		u32 loadedSize;
		mHeader = (SArcHeader*)JKRDvdRipper::loadToMainRAM(entryNum, nullptr, Switch_1, 0, mHeap, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0,
		                                                   (int*)&mCompression, &loadedSize);
		if (mHeader) {
			DCInvalidateRange(mHeader, loadedSize);
		}
	}

	if (!mHeader) {
		mMountMode = EMM_Unk0;
	} else {
		mDataInfo    = (SArcDataInfo*)((u8*)mHeader + mHeader->mHeaderLength);
		mDirectories = (SDIDirEntry*)((u8*)&mDataInfo->mNumDirEntries + mDataInfo->mDirEntryOffset);
		mFileEntries = (SDIFileEntry*)((u8*)&mDataInfo->mNumDirEntries + mDataInfo->mFileEntryOffset);
		mStrTable    = (char*)((u8*)&mDataInfo->mNumDirEntries + mDataInfo->mStrTableOffset);

		mArchiveData = (u8*)((u32)mHeader + mHeader->mHeaderLength + mHeader->mFileDataOffset);
		mIsOpen      = true;
	}
	return (mMountMode == EMM_Unk0) ? false : true;
}

/**
 * @note Address: 0x800249D8
 * @note Size: 0xAC
 * open__13JKRMemArchiveFPvUl15JKRMemBreakFlag
 */
bool JKRMemArchive::open(void* buffer, u32 bufferSize, JKRMemBreakFlag flag)
{
	mHeader = (SArcHeader*)buffer;
	// JUT_ASSERT(mArcHeader->signature == 'RARC');
	mDataInfo    = (SArcDataInfo*)((u8*)mHeader + mHeader->mHeaderLength);
	mDirectories = (SDIDirEntry*)((u8*)&mDataInfo->mNumDirEntries + mDataInfo->mDirEntryOffset);
	mFileEntries = (SDIFileEntry*)((u8*)&mDataInfo->mNumDirEntries + mDataInfo->mFileEntryOffset);
	mStrTable    = (char*)((u8*)&mDataInfo->mNumDirEntries + mDataInfo->mStrTableOffset);
	mArchiveData = (u8*)(((u32)mHeader + mHeader->mHeaderLength) + mHeader->mFileDataOffset);
	mIsOpen      = (flag == MBF_1) ? true : false; // mIsOpen might be u8
	mHeap        = JKRHeap::findFromRoot(buffer);
	mCompression = COMPRESSION_None;
	return true;
}

/**
 * @note Address: N/A
 * @note Size: 0x50
 * open__13JKRMemArchiveFPCcQ210JKRArchive15EMountDirection
 */
void JKRMemArchive::open(const char*, EMountDirection)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80024A84
 * @note Size: 0x34
 * fetchResource__13JKRMemArchiveFPQ210JKRArchive12SDIFileEntryPUl
 */
void* JKRMemArchive::fetchResource(JKRArchive::SDIFileEntry* entry, u32* resourceSize)
{
	if (!entry->mData)
		entry->mData = mArchiveData + entry->mDataOffset;

	if (resourceSize)
		*resourceSize = entry->mSize;

	return entry->mData;
}

/**
 * @note Address: 0x80024AB8
 * @note Size: 0xC8
 * fetchResource__13JKRMemArchiveFPvUlPQ210JKRArchive12SDIFileEntryPUl
 */
void* JKRMemArchive::fetchResource(void* buffer, u32 bufferSize, JKRArchive::SDIFileEntry* entry, u32* resourceSize)
{
	u32 srcLength = entry->mSize;
	if (srcLength > bufferSize) {
		srcLength = bufferSize;
	}

	if (entry->mData) {
		memcpy(buffer, entry->mData, srcLength);
	} else {
		int compression = JKRConvertAttrToCompressionType(entry->getAttr());
		void* data      = mArchiveData + entry->mDataOffset;
		srcLength       = fetchResource_subroutine((u8*)data, srcLength, (u8*)buffer, bufferSize, compression);
	}

	if (resourceSize) {
		*resourceSize = srcLength;
	}

	return buffer;
}

/**
 * @note Address: 0x80024B80
 * @note Size: 0x50
 * @warning This method does not actually iterate through mFileEntries. This feels like a bug.
 */
void JKRMemArchive::removeResourceAll()
{
	if (mDataInfo == nullptr)
		return;
	if (mMountMode == EMM_Mem)
		return;

	SDIFileEntry* fileEntry = mFileEntries;
	for (int i = 0; i < mDataInfo->mNumFileEntries; i++) {
		if (fileEntry->mData) {
			fileEntry->mData = nullptr;
		}
	}
}

/**
 * @note Address: 0x80024BD0
 * @note Size: 0x3C
 * removeResource__13JKRMemArchiveFPv
 */
bool JKRMemArchive::removeResource(void* resource)
{
	SDIFileEntry* fileEntry = findPtrResource(resource);
	if (!fileEntry)
		return false;

	fileEntry->mData = nullptr;
	return true;
}

/**
 * @note Address: 0x80024C0C
 * @note Size: 0xD4
 */
u32 JKRMemArchive::fetchResource_subroutine(u8* src, u32 srcLength, u8* dst, u32 dstLength, int compression)
{
	switch (compression) {
	case COMPRESSION_None:
		if (srcLength > dstLength)
			srcLength = dstLength;

		memcpy(dst, src, srcLength);
		return srcLength;

	case COMPRESSION_YAY0:
	case COMPRESSION_YAZ0:
		u32 expendedSize = JKRDecompExpandSize(src);
		srcLength        = expendedSize;
		if (expendedSize > dstLength)
			srcLength = dstLength;

		JKRDecompress(src, dst, srcLength, 0);
		return srcLength;

	default: {
		OSErrorLine(723, ":::??? bad sequence\n");
		return 0;
	}
	}

	return srcLength;
}

/**
 * @note Address: 0x80024CE0
 * @note Size: 0x90
 */
u32 JKRMemArchive::getExpandedResSize(const void* resource) const
{
	SDIFileEntry* fileEntry = findPtrResource(resource);
	if (fileEntry == nullptr)
		return -1;

	if (((u8)(fileEntry->mFlag >> 24) & 4) == 0)
		return getResSize(resource);
	else
		return JKRDecompExpandSize((u8*)resource);
}
