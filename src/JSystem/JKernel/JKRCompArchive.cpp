#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JKernel/JKRFile.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JKernel/JKRAram.h"
#include "JSystem/JKernel/JKRDvdAramRipper.h"
#include "JSystem/JKernel/JKRDecomp.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/arith.h"
#include "stl/mem.h"
#include "types.h"

/**
 * @note Address: 0x8001BBB8
 * @note Size: 0xB0
 * __ct
 */
JKRCompArchive::JKRCompArchive(s32 entryNum, JKRArchive::EMountDirection mountDirection)
    : JKRArchive(entryNum, EMM_Comp)
    , mMountDirection(mountDirection)
{
	if (!open(entryNum)) {
		return;
	}
	mMagicWord  = 'RARC';
	mVolumeName = mStrTable + mDirectories->mOffset;
	sVolumeList.prepend(&mFileLoaderLink);
	mIsMounted = true;
}

/**
 * @note Address: 0x8001BC68
 * @note Size: 0x150
 */
JKRCompArchive::~JKRCompArchive()
{
	if (mDataInfo) {
		SDIFileEntry* fileEntries = mFileEntries;
		for (int i = 0; i < mDataInfo->mNumFileEntries; i++) {
			if (fileEntries->getFlag10() == 0 && fileEntries->mData != nullptr) {
				JKRFreeToHeap(mHeap, fileEntries->mData);
			}
			fileEntries++;
		}
		JKRFreeToHeap(mHeap, mDataInfo);
		mDataInfo = nullptr;
	}
	if (mAramPart) {
		delete mAramPart;
	}
	if (mExpandSizes) {
		JKRFree(mExpandSizes);
		mExpandSizes = nullptr;
	}
	if (mDvdFile) {
		delete mDvdFile;
	}

	sVolumeList.remove(&mFileLoaderLink);
	mIsMounted = false;
}

/**
 * @note Address: 0x8001BDB8
 * @note Size: 0x57C
 */
bool JKRCompArchive::open(s32 entryNum)
{
	mDataInfo    = nullptr;
	_64          = 0;
	mAramPart    = nullptr;
	_6C          = 0;
	mMemSize     = 0;
	mAramSize    = 0;
	_7C          = 0;
	mDirectories = nullptr;
	mFileEntries = nullptr;
	mStrTable    = nullptr;

	mDvdFile = new (JKRGetSystemHeap(), 0) JKRDvdFile(entryNum);
	if (mDvdFile == nullptr) {
		mMountMode = EMM_Unk0;
		return false;
	}
	SArcHeader* arcHeader = (SArcHeader*)JKRAllocFromSysHeap(sizeof(SArcHeader), -32); // NOTE: unconfirmed if this struct is used

	if (arcHeader == nullptr) {
		mMountMode = EMM_Unk0;

	} else {
		int alignment;

		JKRDvdToMainRam(entryNum, (u8*)arcHeader, Switch_1, 32, nullptr, JKRDvdRipper::ALLOC_DIR_TOP, 0, (int*)&mCompression, nullptr);
		DCInvalidateRange(arcHeader, 32);

		mMemSize  = arcHeader->_14;
		mAramSize = arcHeader->_18;

		switch (mCompression) {
		case COMPRESSION_None:
		case COMPRESSION_YAZ0:
			alignment = mMountDirection == EMD_Head ? 32 : -32;
			mDataInfo = (SArcDataInfo*)JKRAllocFromHeap(mHeap, arcHeader->mFileDataOffset + mMemSize, alignment);
			if (mDataInfo == nullptr) {
				mMountMode = EMM_Unk0;
			} else {
				JKRDvdToMainRam(entryNum, (u8*)mDataInfo, Switch_1, (u32)arcHeader->mFileDataOffset + mMemSize, nullptr,
				                JKRDvdRipper::ALLOC_DIR_TOP, 0x20, nullptr, nullptr);
				DCInvalidateRange(mDataInfo, (u32)arcHeader->mFileDataOffset + mMemSize);
				_64 = (u32)mDataInfo + arcHeader->mFileDataOffset;

				if (mAramSize != 0) {
					mAramPart = JKRAllocFromAram(mAramSize, JKRAramHeap::AM_Head);
					if (mAramPart == nullptr) {
						mMountMode = EMM_Unk0;
						break;
					}

					JKRDvdToAram(entryNum, mAramPart->getAddress(), Switch_1,
					             arcHeader->mHeaderLength + arcHeader->mFileDataOffset + mMemSize, 0, nullptr);
				}

				mDirectories = (SDIDirEntry*)((u32)mDataInfo + mDataInfo->mDirEntryOffset);
				mFileEntries = (SDIFileEntry*)((u32)mDataInfo + mDataInfo->mFileEntryOffset);
				mStrTable    = (const char*)((u32)mDataInfo + mDataInfo->mStrTableOffset);
				_6C          = arcHeader->mHeaderLength + arcHeader->mFileDataOffset;
			}
			break;

		case COMPRESSION_YAY0:
			u32 alignedSize = ALIGN_NEXT(mDvdFile->getFileSize(), 32);
			alignment       = ((mMountDirection == EMD_Head) ? 32 : -32);
			u8* buf         = (u8*)JKRAllocFromSysHeap(alignedSize, -alignment);

			if (buf == nullptr) {
				mMountMode = EMM_Unk0;
			} else {
				JKRDvdToMainRam(entryNum, buf, Switch_2, alignedSize, nullptr, JKRDvdRipper::ALLOC_DIR_TOP, 0, nullptr, nullptr);
				DCInvalidateRange(buf, alignedSize);
				u32 expandSize = ALIGN_NEXT(JKRDecompExpandSize(buf), 32);
				u8* mem        = (u8*)JKRAllocFromHeap(mHeap, expandSize, -alignment);

				if (!mem) {
					mMountMode = EMM_Unk0;
				} else {
					arcHeader = (SArcHeader*)mem;
					JKRDecompress((u8*)buf, (u8*)mem, expandSize, 0);
					JKRFreeToSysHeap(buf);

					mDataInfo = (SArcDataInfo*)JKRAllocFromHeap(mHeap, arcHeader->mFileDataOffset + mMemSize, alignment);
					if (!mDataInfo) {
						mMountMode = 0;
					} else {
						// arcHeader + 1 should lead to 0x20, which is the data after the header
						JKRHeap::copyMemory((u8*)mDataInfo, arcHeader + 1, (arcHeader->mFileDataOffset + mMemSize));
						_64 = (u32)mDataInfo + arcHeader->mFileDataOffset;
						if (mAramSize) {
							mAramPart = JKRAllocFromAram(mAramSize, JKRAramHeap::AM_Head);
							if (!mAramPart) {
								mMountMode = EMM_Unk0;
							} else {
								JKRMainRamToAram((u8*)mem + arcHeader->mHeaderLength + arcHeader->mFileDataOffset + mMemSize,
								                 mAramPart->getAddress(), mAramSize, Switch_0, 0, nullptr, -1, nullptr);
							}
						}
					}
				}
			}
			mDirectories = (SDIDirEntry*)((u32)mDataInfo + mDataInfo->mDirEntryOffset);
			mFileEntries = (SDIFileEntry*)((u32)mDataInfo + mDataInfo->mFileEntryOffset);
			mStrTable    = (const char*)((u32)mDataInfo + mDataInfo->mStrTableOffset);
			_6C          = arcHeader->mHeaderLength + arcHeader->mFileDataOffset;
			break;
		}
		mExpandSizes            = nullptr;
		u8 compressedFiles      = 0;
		SDIFileEntry* fileEntry = mFileEntries;
		for (int i = 0; i < mDataInfo->mNumFileEntries; i++) {
			u8 flag = fileEntry->mFlag >> 0x18;
			if ((flag & 0x1) && (!(flag & 0x10))) {
				compressedFiles = compressedFiles | (flag & 4);
			}
			fileEntry++;
		}

		if (compressedFiles) {
			mExpandSizes = (u32*)JKRAllocFromHeap(mHeap, mDataInfo->mNumFileEntries * 4, abs(alignment));
			if (!mExpandSizes) {
				JKRFreeToSysHeap(mDataInfo);
				mMountMode = EMM_Unk0;
			} else {
				memset(mExpandSizes, 0, mDataInfo->mNumFileEntries * 4);
			}
		}
	}

	if (arcHeader) {
		JKRFreeToSysHeap(arcHeader);
	}
	if (mMountMode == EMM_Unk0) {
		if (mDvdFile) {
			delete mDvdFile;
		}
		return false;
	}
	return true;
}

/**
 * @note Address: 0x8001C334
 * @note Size: 0x190
 */
void* JKRCompArchive::fetchResource(SDIFileEntry* fileEntry, u32* pSize)
{
	u32 tempSize;
	u32 size        = fileEntry->mSize;
	int compression = JKRConvertAttrToCompressionType(fileEntry->mFlag >> 0x18);

	if (!pSize) {
		pSize = &tempSize;
	}

	if (!fileEntry->mData) {
		u32 flag = fileEntry->mFlag >> 0x18;
		if (flag & 0x10) {
			fileEntry->mData = (void*)(_64 + fileEntry->mDataOffset);
			*pSize           = size;
		} else if (flag & 0x20) {
			u8* data;
			*pSize = JKRAramArchive::fetchResource_subroutine(fileEntry->mDataOffset + mAramPart->getAddress() - mMemSize, size, mHeap,
			                                                  compression, &data);
			fileEntry->mData = data;
			if (compression == COMPRESSION_YAZ0) {
				setExpandSize(fileEntry, *pSize);
			}
		} else if (flag & 0x40) {
			u8* data;
			u32 resSize = JKRDvdArchive::fetchResource_subroutine(mEntryNum, _6C + fileEntry->mDataOffset, fileEntry->mSize, mHeap,
			                                                      compression, mCompression, &data);
			if (pSize) {
				*pSize = resSize;
			}

			fileEntry->mData = data;

			if (compression == COMPRESSION_YAZ0) {
				setExpandSize(fileEntry, *pSize);
			}
		}

	} else if (pSize) {
		*pSize = fileEntry->mSize;
	}

	return fileEntry->mData;
}

/**
 * @note Address: 0x8001C4C4
 * @note Size: 0x194
 */
void* JKRCompArchive::fetchResource(void* data, u32 compressedSize, JKRArchive::SDIFileEntry* fileEntry, u32* pSize)
{
	u32 size        = 0;
	u32 fileSize    = fileEntry->mSize;
	u32 alignedSize = ALIGN_NEXT(fileSize, 32);
	u32 fileFlag    = fileEntry->mFlag >> 0x18;
	int compression = JKRConvertAttrToCompressionType(fileFlag);

	if (fileEntry->mData) {
		if (compression == COMPRESSION_YAZ0) {
			u32 expandSize = getExpandSize(fileEntry);
			if (expandSize) {
				fileSize = expandSize;
			}
		}

		if (fileSize > compressedSize) {
			fileSize = compressedSize;
		}

		JKRHeap::copyMemory(data, fileEntry->mData, fileSize);
		size = fileSize;

	} else {
		if (fileFlag & 0x10) {
			size = JKRMemArchive::fetchResource_subroutine((u8*)(_64 + fileEntry->mDataOffset), alignedSize, (u8*)data,
			                                               compressedSize & ~31, compression);
		} else if (fileFlag & 0x20) {
			size = JKRAramArchive::fetchResource_subroutine(fileEntry->mDataOffset + mAramPart->getAddress() - mMemSize, alignedSize,
			                                                (u8*)data, compressedSize & ~31, compression);
		} else if (fileFlag & 0x40) {
			size = JKRDvdArchive::fetchResource_subroutine(mEntryNum, _6C + fileEntry->mDataOffset, alignedSize, (u8*)data,
			                                               compressedSize & ~31, compression, mCompression);
		} else {
			JUT_PANICLINE(776, "%s", "illegal archive."); // why sub a string for a string lol.
		}
	}

	if (pSize) {
		*pSize = size;
	}
	return data;
}

/**
 * @note Address: 0x8001C658
 * @note Size: 0xA4
 */
void JKRCompArchive::removeResourceAll()
{
	if (mDataInfo && mMountMode != EMM_Mem) {
		SDIFileEntry* fileEntry = mFileEntries;
		for (int i = 0; i < mDataInfo->mNumFileEntries; i++) {
			u32 flag = fileEntry->mFlag >> 0x18;
			if (fileEntry->mData) {
				if (!(flag & 0x10)) {
					JKRFreeToHeap(mHeap, fileEntry->mData);
				}

				fileEntry->mData = nullptr;
			}
		}
	}
}

/**
 * @note Address: 0x8001C6FC
 * @note Size: 0x74
 */
bool JKRCompArchive::removeResource(void* resPtr)
{
	SDIFileEntry* entry = findPtrResource(resPtr);
	if (!entry) {
		return false;
	}
	if (!entry->getFlag10()) {
		JKRFreeToHeap(mHeap, resPtr);
	}
	entry->mData = nullptr;
	return true;
}

/**
 * @note Address: 0x8001C770
 * @note Size: 0x1C4
 */
u32 JKRCompArchive::getExpandedResSize(const void* resource) const
{
	if (!mExpandSizes) {
		return getResSize(resource);
	}

	SDIFileEntry* fileEntry = findPtrResource(resource);
	if (!fileEntry) {
		return 0xffffffff;
	}

	u8 flags = (fileEntry->mFlag >> 0x18);
	if (!(flags & 4)) { // not compressed
		return getResSize(resource);
	}

	if (flags & 0x10) {
		return JKRDecompExpandSize((u8*)resource);
	}

	u8 buf[64];
	u8* bufPtr = (u8*)ALIGN_NEXT((u32)buf, 32);
	if (flags & 0x20) {
		JKRAramToMainRam(fileEntry->mDataOffset + mAramPart->mAddress, bufPtr, sizeof(buf) / 2, Switch_0, 0, nullptr, -1, nullptr);
		DCInvalidateRange(bufPtr, sizeof(buf) / 2);
	} else if (flags & 0x40) {
		JKRDvdToMainRam(mEntryNum, bufPtr, Switch_2, sizeof(buf) / 2, nullptr, JKRDvdRipper::ALLOC_DIR_TOP, _6C + fileEntry->mDataOffset,
		                nullptr, nullptr);
		DCInvalidateRange(bufPtr, sizeof(buf) / 2);
	} else {
		JUT_PANICLINE(943, "%s", "illegal resource.");
	}

	u32 expandSize = JKRDecompExpandSize(bufPtr);
	const_cast<JKRCompArchive*>(this)->setExpandSize(fileEntry, expandSize);
	return expandSize;
}
