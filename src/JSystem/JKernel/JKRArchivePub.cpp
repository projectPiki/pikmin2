#include "Dolphin/dvd.h"
#include "JSystem/JKernel/JKRAram.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JKernel/JKRFileFinder.h"
#include "types.h"

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
JKRArchive* JKRArchive::check_mount_already(s32 entryNum)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x6C
 */
JKRArchive* JKRArchive::check_mount_already(s32 entryNum, JKRHeap* pHeap)
{
	// UNUSED FUNCTION
	JKRHeap* heap = pHeap;
	if (heap == nullptr) {
		heap = JKRGetCurrentHeap();
	}

	JSUList<JKRFileLoader>& volumeList = JKRArchive::sVolumeList;
	JSUListIterator<JKRFileLoader> iterator;
	for (iterator = volumeList.getFirst(); iterator != volumeList.getEnd(); ++iterator) {
		if (iterator->getVolumeType() == 'RARC') {
			JKRArchive* archive = (JKRArchive*)iterator.getObject(); // in TP debug it calls operator-> ?
			if (archive->mEntryNum == entryNum && archive->mHeap == heap) {
				archive->mMountCount++;
				return archive;
			}
		}
	}
	return nullptr;
}

/**
 * @note Address: 0x8001B130
 * @note Size: 0x64
 */
JKRArchive* JKRArchive::mount(const char* path, EMountMode mode, JKRHeap* heap, EMountDirection direction)
{
	int entryNum = DVDConvertPathToEntrynum((char*)path);
	return (entryNum < 0) ? nullptr : mount(entryNum, mode, heap, direction);
}

/**
 * @note Address: 0x8001B194
 * @note Size: 0xD8
 */
JKRArchive* JKRArchive::mount(void* mem, JKRHeap* heap, EMountDirection mountDirection)
{
	JKRArchive* archive = check_mount_already((s32)mem, heap);
	if (archive != nullptr) {
		return archive;
	}
	return new (heap, (mountDirection == EMD_Head) ? 4 : -4) JKRMemArchive(mem, 0xFFFF, MBF_0);
}

/**
 * @note Address: 0x8001B26C
 * @note Size: 0x1D8
 */
JKRArchive* JKRArchive::mount(s32 entryNum, EMountMode mountMode, JKRHeap* heap, EMountDirection mountDirection)
{
	JKRArchive* archive = check_mount_already(entryNum, heap);
	if (archive) {
		return archive;
	} else {
		int i = (mountDirection == EMD_Head) ? 4 : -4;
		JKRArchive* archive;
		switch (mountMode) {
		case EMM_Mem:
			archive = new (heap, i) JKRMemArchive(entryNum, mountDirection);
			break;
		case EMM_Aram:
			archive = new (heap, i) JKRAramArchive(entryNum, mountDirection);
			break;
		case EMM_Dvd:
			archive = new (heap, i) JKRDvdArchive(entryNum, mountDirection);
			break;
		case EMM_Comp:
			archive = new (heap, i) JKRCompArchive(entryNum, mountDirection);
			break;
		}
		if (archive != nullptr && archive->getMountMode() == EMM_Unk0) {
			delete archive;
			archive = nullptr;
		}
		return archive;
	}
}

/**
 * @note Address: 0x8001B444
 * @note Size: 0x88
 */
bool JKRArchive::becomeCurrent(const char* path)
{
	SDIDirEntry* entry;
	if (*path == '/') {
		const char* directoryName = path + 1;
		if (*directoryName == '\0') {
			directoryName = nullptr;
		}
		entry = findDirectory(directoryName, 0);
	} else {
		entry = findDirectory(path, sCurrentDirID);
	}
	bool result = (entry != nullptr);
	if (result) {
		sCurrentVolume = this;
		sCurrentDirID  = (entry - mDirectories);
	}
	return result;
}

/**
 * @note Address: 0x8001B4CC
 * @note Size: 0x78
 */
bool JKRArchive::getDirEntry(JKRArchive::SDirEntry* dirEntry, u32 index) const
{
	SDIFileEntry* fileEntry = findIdxResource(index);
	if (!fileEntry) {
		return false;
	}
	char* names      = (char*)mStrTable;
	dirEntry->mFlags = fileEntry->mFlag >> 0x18;
	dirEntry->mID    = fileEntry->mFileID;
	dirEntry->mName  = names + (fileEntry->mFlag & 0xFFFFFF);
	return true;
}

/**
 * @note Address: 0x8001B544
 * @note Size: 0xB8
 */
void* JKRArchive::getGlbResource(u32 type, const char* name, JKRArchive* archive)
{
	void* resource = nullptr;
	if (archive) {
		return archive->getResource(type, name);
	}
	for (JSULink<JKRFileLoader>* link = sVolumeList.getFirst(); link != nullptr; link = link->getNext()) {
		if (link->getObject()->mMagicWord == 'RARC' && (resource = link->getObject()->getResource(type, name))) {
			break;
		}
	}
	return resource;
}

/**
 * @note Address: 0x8001B5FC
 * @note Size: 0x7C
 */
void* JKRArchive::getResource(const char* path)
{
	SDIFileEntry* fileEntry;
	if (*path == '/') {
		fileEntry = findFsResource(path + 1, 0);
	} else {
		fileEntry = findFsResource(path, sCurrentDirID);
	}
	return (fileEntry != nullptr) ? (void*)fetchResource(fileEntry, nullptr) : nullptr;
}

/**
 * @note Address: 0x8001B678
 * @note Size: 0x80
 */
void* JKRArchive::getResource(u32 type, const char* name)
{
	SDIFileEntry* fileEntry;
	if (type == 0 || type == '????') {
		fileEntry = findNameResource(name);
	} else {
		fileEntry = findTypeResource(type, name);
	}
	return (fileEntry != nullptr) ? (void*)fetchResource(fileEntry, nullptr) : nullptr;
}

/**
 * @note Address: 0x8001B6F8
 * @note Size: 0x54
 */
void* JKRArchive::getIdxResource(u32 index)
{
	SDIFileEntry* fileEntry = findIdxResource(index);
	return (fileEntry != nullptr) ? (void*)fetchResource(fileEntry, nullptr) : nullptr;
}

/**
 * @note Address: 0x8001B74C
 * @note Size: 0xAC
 */
u32 JKRArchive::readResource(void* resourceBuffer, u32 bufferSize, u32 type, const char* name)
{
	SDIFileEntry* fileEntry;
	if (type == 0 || type == '????') {
		fileEntry = findNameResource(name);
	} else {
		fileEntry = findTypeResource(type, name);
	}
	if (fileEntry) {
		u32 resourceSize;
		fetchResource(resourceBuffer, bufferSize, fileEntry, &resourceSize);
		return resourceSize;
	}
	return 0;
}

/**
 * @note Address: 0x8001B7F8
 * @note Size: 0xA4
 * Returns the size of the resource at the given path, or 0 if not found.
 */
u32 JKRArchive::readResource(void* resourceBuffer, u32 bufferSize, const char* path)
{
	SDIFileEntry* fileEntry;
	if (*path == '/') {
		fileEntry = findFsResource(path + 1, 0);
	} else {
		fileEntry = findFsResource(path, sCurrentDirID);
	}
	if (fileEntry) {
		u32 resourceSize;
		fetchResource(resourceBuffer, bufferSize, fileEntry, &resourceSize);
		return resourceSize;
	}
	return 0;
}

/**
 * @note Address: 0x8001B89C
 * @note Size: 0x7C
 * Returns the size of the resource with the given ID, or 0 if not found.
 */
u32 JKRArchive::readResource(void* resourceBuffer, u32 bufferSize, u16 id)
{
	SDIFileEntry* fileEntry = findIdResource(id);
	if (fileEntry) {
		u32 resSize;
		fetchResource(resourceBuffer, bufferSize, fileEntry, &resSize);
		return resSize;
	}
	return 0;
}

/**
 * @note Address: 0x8001B918
 * @note Size: 0x98
 */
void JKRArchive::removeResourceAll()
{
	if (mDataInfo && mMountMode != EMM_Mem) {
		SDIFileEntry* entry = mFileEntries;
		for (int i = 0; i < mDataInfo->mNumFileEntries; i++) {
			if (entry->mData) {
				JKRHeap::free(entry->mData, mHeap);
				entry->mData = nullptr;
			}
			entry++;
		}
	}
}

/**
 * @note Address: 0x8001B9B0
 * @note Size: 0x60
 */
bool JKRArchive::removeResource(void* resource)
{
	SDIFileEntry* entry = findPtrResource(resource);
	if (entry == nullptr) {
		return false;
	}
	entry->mData = nullptr;
	JKRHeap::free(resource, mHeap);
	return true;
}

/**
 * @note Address: 0x8001BA10
 * @note Size: 0x3C
 */
bool JKRArchive::detachResource(void* resource)
{
	SDIFileEntry* entry = findPtrResource(resource);
	if (entry == nullptr) {
		return false;
	}
	entry->mData = nullptr;
	return true;
}

/**
 * @note Address: 0x8001BA4C
 * @note Size: 0x34
 */
s32 JKRArchive::getResSize(const void* resource) const
{
	SDIFileEntry* entry = findPtrResource(resource);
	return (entry == nullptr) ? -1 : entry->getSize();
}

/**
 * @note Address: 0x8001BA80
 * @note Size: 0x60
 */
u32 JKRArchive::countFile(const char* path) const
{
	SDIDirEntry* dirEntry;
	if (*path == '/') {
		const char* pathPtr = path + 1;
		if (*pathPtr == '\0') {
			pathPtr = nullptr;
		}
		dirEntry = findDirectory(pathPtr, 0);
	} else {
		dirEntry = findDirectory(path, sCurrentDirID);
	}
	return (dirEntry) ? dirEntry->mNum : 0;
}

/**
 * @note Address: 0x8001BAE0
 * @note Size: 0xAC
 */
JKRFileFinder* JKRArchive::getFirstFile(const char* path) const
{
	SDIDirEntry* dirEntry;
	if (*path == '/') {
		const char* pathPtr = path + 1;
		if (*pathPtr == '\0') {
			pathPtr = nullptr;
		}
		dirEntry = findDirectory(pathPtr, 0);
	} else {
		dirEntry = findDirectory(path, sCurrentDirID);
	}
	if (dirEntry) {
		return new (JKRHeap::sSystemHeap, 0) JKRArcFinder(const_cast<JKRArchive*>(this), dirEntry->mFirstIdx, dirEntry->mNum);
	}
	return nullptr;
}

/**
 * @note Address: 0x8001BB8C
 * @note Size: 0x2C
 */
u32 JKRArchive::getExpandedResSize(const void* resource) const { return getResSize(resource); }
