#include "ctype.h"
#include "string.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JKernel/JKRFileLoader.h"
#include "types.h"

u32 JKRArchive::sCurrentDirID;

// /**
//  * @note Address: N/A
//  * @note Size: 0x4C
//  */
// JKRArchive::JKRArchive()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x8001A4BC
 * @note Size: 0xA8
 */
JKRArchive::JKRArchive(s32 entryNum, JKRArchive::EMountMode mountMode)
    : JKRFileLoader()
{
	mIsMounted  = false;
	mMountMode  = mountMode;
	mMountCount = 1;
	_58         = 1;
	mHeap       = JKRHeap::findFromRoot(this);
	if (!mHeap) {
		mHeap = JKRHeap::sCurrentHeap;
	}
	mEntryNum = entryNum;
	if (sCurrentVolume == nullptr) {
		sCurrentDirID  = 0;
		sCurrentVolume = this;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xB8
 * __ct__10JKRArchiveFPCcQ210JKRArchive10EMountMode
 */
JKRArchive::JKRArchive(const char* p1, JKRArchive::EMountMode mountMode)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8001A564
 * @note Size: 0x60
 */
JKRArchive::~JKRArchive() { }

/**
 * @note Address: 0x8001A5C4
 * @note Size: 0x4C
 */
bool JKRArchive::isSameName(JKRArchive::CArcName& archiveName, u32 nameTableOffset, u16 hash) const
{
	u16 arcHash = archiveName.getHash();
	return (arcHash != hash) ? false : strcmp(&mStrTable[nameTableOffset], archiveName.getString()) == 0;
}

/**
 * @note Address: N/A
 * @note Size: 0x34
 * findResType__10JKRArchiveCFUl
 */
JKRArchive::SDIDirEntry* JKRArchive::findResType(u32 type) const
{
	SDIDirEntry* dirEntry = mDirectories;
	for (u32 i = 0; i < mDataInfo->mNumDirEntries; i++, dirEntry++) {
		if (dirEntry->mType == type) {
			return dirEntry;
		}
	}
	return nullptr;
}

/**
 * @note Address: 0x8001A610
 * @note Size: 0x31C
 */
JKRArchive::SDIDirEntry* JKRArchive::findDirectory(const char* path, u32 index) const
{
	if (path == nullptr) {
		return &mDirectories[index];
	}

	CArcName arcName(&path, '/');
	SDIDirEntry* dirEntry = &mDirectories[index];
	SDIFileEntry* entry   = &mFileEntries[dirEntry->mFirstIdx];

	for (int i = 0; i < dirEntry->mNum; entry++, i++) {
		if (isSameName(arcName, entry->mFlag & 0xFFFFFF, entry->mHash)) {
			if ((entry->mFlag >> 24) & 0x02) {
				return findDirectory(path, entry->mDataOffset);
			}
			break;
		}
	}

	return nullptr;
}

/**
 * @note Address: 0x8001A92C
 * @note Size: 0x44
 * __ct__Q210JKRArchive8CArcNameFPPCcc
 */
// JKRArchive::CArcName::CArcName(const char** p1, char p2)
// {
// 	p1[0] = store(p1[0], p2);
// }

/**
 * @note Address: 0x8001A970
 * @note Size: 0x8
 */
// const char* JKRArchive::CArcName::getString() const
// {
// 	return mString;
// 	/*
// 	addi     r3, r3, 4
// 	blr
// 	*/
// }

/**
 * @note Address: 0x8001A978
 * @note Size: 0x8
 */
// u16 JKRArchive::CArcName::getHash() const
// {
// 	return mHash;
// }

/**
 * @note Address: N/A
 * @note Size: 0x98
 * findTypeResource__10JKRArchiveCFUlUl
 */
JKRArchive::SDIFileEntry* JKRArchive::findTypeResource(u32 p1, u32 p2) const
{
	// // UNUSED FUNCTION
	// SDirEntry* dirEntry = _48 + p2;
	// if (p1 != 0) {
	// 	CArcName arcName;
	// 	arcName.store(p2);
	// 	SDirEntry* entry = _48;
	// 	for (int i = _44->_00; i > 0; i++, entry++) {
	// 		findTypeResource(p1, entry->_0C);
	// 		if (isSameName(arcName, entry->_04 & 0xFFFFFF, entry->mHash)) {
	// 			if ((entry->_04 >> 0x18 & 2) != 0) {
	// 				return findFsResource(path, entry->_08);
	// 			}
	// 			if (path == 0) {
	// 				return entry;
	// 			}
	// 			return nullptr;
	// 		}
	// 	}
	// }
	// return nullptr;
}

/**
 * @note Address: 0x8001A980
 * @note Size: 0xF4
 * findTypeResource__10JKRArchiveCFUlPCc
 */
JKRArchive::SDIFileEntry* JKRArchive::findTypeResource(u32 type, const char* name) const
{
	if (type != 0) {
		CArcName arcName;
		arcName.store(name);
		SDIDirEntry* dirEntry = findResType(type);
		if (dirEntry != nullptr) {
			SDIFileEntry* fileEntry = mFileEntries + dirEntry->mFirstIdx;
			for (int i = 0; i < dirEntry->mNum; fileEntry++, i++) {
				if (isSameName(arcName, fileEntry->mFlag & 0xFFFFFF, fileEntry->mHash)) {
					return fileEntry;
				}
			}
		}
	}
	return nullptr;
}

/**
 * @note Address: 0x8001AA74
 * @note Size: 0x340
 */
JKRArchive::SDIFileEntry* JKRArchive::findFsResource(const char* path, u32 index) const
{
	if (path) {
		CArcName arcName(&path, '/');
		SDIDirEntry* dirEntry = &mDirectories[index];
		SDIFileEntry* entry   = &mFileEntries[dirEntry->mFirstIdx];
		for (int i = 0; i < dirEntry->mNum; entry++, i++) {
			if (isSameName(arcName, entry->mFlag & 0xFFFFFF, entry->mHash)) {
				if (((entry->mFlag >> 0x18) & 2)) {
					return findFsResource(path, entry->mDataOffset);
				}
				if (path == 0) {
					return entry;
				}
				return nullptr;
			}
		}
	}
	return nullptr;
}

/**
 * @note Address: 0x8001ADB4
 * @note Size: 0x28
 */
JKRArchive::SDIFileEntry* JKRArchive::findIdxResource(u32 idx) const
{
	if (idx < mDataInfo->mNumFileEntries) {
		return mFileEntries + idx;
	}
	return nullptr;
}

/**
 * @note Address: 0x8001ADDC
 * @note Size: 0xA4
 */
JKRArchive::SDIFileEntry* JKRArchive::findNameResource(const char* name) const
{
	SDIFileEntry* fileEntry = mFileEntries;

	CArcName arcName(name);
	for (int i = 0; i < mDataInfo->mNumFileEntries; fileEntry++, i++) {
		if (isSameName(arcName, fileEntry->mFlag & 0xFFFFFF, fileEntry->mHash)) {
			return fileEntry;
		}
	}

	return nullptr;
}

/**
 * @note Address: 0x8001AE80
 * @note Size: 0x34
 * findPtrResource__10JKRArchiveCFPCv
 */
JKRArchive::SDIFileEntry* JKRArchive::findPtrResource(const void* ptr) const
{
	SDIFileEntry* entry = mFileEntries;
	for (u32 i = 0; i < mDataInfo->mNumFileEntries; entry++, i++) {
		if (entry->mData == ptr) {
			return entry;
		}
	}
	return nullptr;
}

/**
 * @note Address: 0x8001AEB4
 * @note Size: 0x80
 * findIdResource__10JKRArchiveCFUs
 */
JKRArchive::SDIFileEntry* JKRArchive::findIdResource(u16 id) const
{
	SDIFileEntry* entry;
	if (id != 0xFFFF) {
		entry = &mFileEntries[id];
		if (entry->mFileID == id && (entry->getFlag01())) {
			return entry;
		}

		entry = mFileEntries;
		for (int i = 0; i < mDataInfo->mNumFileEntries; entry++, i++) {
			if (entry->mFileID == id && (entry->getFlag01())) {
				return entry;
			}
		}
	}
	return nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0x14
 * __ct__Q210JKRArchive8CArcNameFv
 */
// JKRArchive::CArcName::CArcName() {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x8001AF34
 * @note Size: 0x98
 */
void JKRArchive::CArcName::store(const char* name)
{
	mHash     = 0;
	int count = 0;
	while (*name) {
		int lower = tolower(*name);
		mHash     = lower + mHash * 3;
		if (count < 0x100) {
			mString[count++] = lower;
		}
		name++;
	}
	mLength        = count;
	mString[count] = '\0';
}

/**
 * @note Address: 0x8001AFCC
 * @note Size: 0xC8
 */
const char* JKRArchive::CArcName::store(const char* name, char endChar)
{
	mHash     = 0;
	int count = 0;
	for (; *name && *name != endChar; name++) {
		int lower = tolower(*name);
		mHash     = lower + mHash * 3;
		if (count < 0x100) {
			mString[count++] = lower;
		}
	}
	mLength        = count;
	mString[count] = '\0';

	if (*name == 0)
		return nullptr;
	return name + 1;
}

/**
 * @note Address: 0x8001B094
 * @note Size: 0x4C
 */
void JKRArchive::setExpandSize(JKRArchive::SDIFileEntry* entry, u32 size)
{
	u32 index = (entry - mFileEntries);
	if (mExpandSizes == nullptr || index >= mDataInfo->mNumFileEntries) {
		return;
	}
	mExpandSizes[index] = size;
}

/**
 * @note Address: 0x8001B0E0
 * @note Size: 0x50
 */
u32 JKRArchive::getExpandSize(JKRArchive::SDIFileEntry* entry) const
{
	u32 index = (entry - mFileEntries);
	if (mExpandSizes == nullptr || index >= mDataInfo->mNumFileEntries) {
		return 0;
	}
	return mExpandSizes[index];
}
