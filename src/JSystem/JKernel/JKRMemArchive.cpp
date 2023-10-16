#include "Dolphin/os.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JKernel/JKRDecomp.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JUtility/JUTException.h"
#include "stl/mem.h"
#include "types.h"

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
JKRMemArchive::JKRMemArchive() { }

/*
 * --INFO--
 * Address:	80024644
 * Size:	0000BC
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

/*
 * --INFO--
 * Address:	80024700
 * Size:	0000C8
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

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 * __ct__13JKRMemArchiveFPCcQ210JKRArchive15EMountDirection
 */
JKRMemArchive::JKRMemArchive(const char*, EMountDirection)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800247C8
 * Size:	0000A8
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

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 * fixedInit__13JKRMemArchiveFl
 */
void JKRMemArchive::fixedInit(long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000108
 * mountFixed__13JKRMemArchiveFlQ210JKRArchive15EMountDirection
 */
void JKRMemArchive::mountFixed(long, EMountDirection)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00010C
 * mountFixed__13JKRMemArchiveFPCcQ210JKRArchive15EMountDirection
 */
void JKRMemArchive::mountFixed(const char*, EMountDirection)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000108
 * mountFixed__13JKRMemArchiveFPv15JKRMemBreakFlag
 */
void JKRMemArchive::mountFixed(void*, JKRMemBreakFlag)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 * unmountFixed__13JKRMemArchiveFv
 */
void JKRMemArchive::unmountFixed()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80024870
 * Size:	000168
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

/*
 * --INFO--
 * Address:	800249D8
 * Size:	0000AC
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

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 * open__13JKRMemArchiveFPCcQ210JKRArchive15EMountDirection
 */
void JKRMemArchive::open(const char*, EMountDirection)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80024A84
 * Size:	000034
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

/*
 * --INFO--
 * Address:	80024AB8
 * Size:	0000C8
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
 * --INFO--
 * Address:	80024B80
 * Size:	000050
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

/*
 * --INFO--
 * Address:	80024BD0
 * Size:	00003C
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

/*
 * --INFO--
 * Address:	80024C0C
 * Size:	0000D4
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

/*
 * --INFO--
 * Address:	80024CE0
 * Size:	000090
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
