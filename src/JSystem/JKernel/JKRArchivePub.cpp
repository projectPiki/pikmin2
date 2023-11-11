#include "Dolphin/dvd.h"
#include "JSystem/JKernel/JKRAram.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JKernel/JKRFileFinder.h"
#include "types.h"

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
JKRArchive* JKRArchive::check_mount_already(s32 entryNum)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
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

/*
 * --INFO--
 * Address:	8001B130
 * Size:	000064
 */
JKRArchive* JKRArchive::mount(const char* path, EMountMode mode, JKRHeap* heap, EMountDirection direction)
{
	int entryNum = DVDConvertPathToEntrynum((char*)path);
	return (entryNum < 0) ? nullptr : mount(entryNum, mode, heap, direction);
}

/*
 * --INFO--
 * Address:	8001B194
 * Size:	0000D8
 */
JKRArchive* JKRArchive::mount(void* mem, JKRHeap* heap, EMountDirection mountDirection)
{
	JKRArchive* archive = check_mount_already((s32)mem, heap);
	if (archive != nullptr) {
		return archive;
	}
	return new (heap, (mountDirection == EMD_Head) ? 4 : -4) JKRMemArchive(mem, 0xFFFF, MBF_0);
}

/*
 * --INFO--
 * Address:	8001B26C
 * Size:	0001D8
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

/*
 * --INFO--
 * Address:	8001B444
 * Size:	000088
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

/*
 * --INFO--
 * Address:	8001B4CC
 * Size:	000078
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

/*
 * --INFO--
 * Address:	8001B544
 * Size:	0000B8
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

/*
 * --INFO--
 * Address:	8001B5FC
 * Size:	00007C
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

/*
 * --INFO--
 * Address:	8001B678
 * Size:	000080
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

/*
 * --INFO--
 * Address:	8001B6F8
 * Size:	000054
 */
void* JKRArchive::getIdxResource(u32 index)
{
	SDIFileEntry* fileEntry = findIdxResource(index);
	return (fileEntry != nullptr) ? (void*)fetchResource(fileEntry, nullptr) : nullptr;
}

/*
 * --INFO--
 * Address:	8001B74C
 * Size:	0000AC
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

/*
 * --INFO--
 * Address:	8001B7F8
 * Size:	0000A4
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

/*
 * --INFO--
 * Address:	8001B89C
 * Size:	00007C
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

/*
 * --INFO--
 * Address:	8001B918
 * Size:	000098
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

/*
 * --INFO--
 * Address:	8001B9B0
 * Size:	000060
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

/*
 * --INFO--
 * Address:	8001BA10
 * Size:	00003C
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

/*
 * --INFO--
 * Address:	8001BA4C
 * Size:	000034
 */
long JKRArchive::getResSize(const void* resource) const
{
	SDIFileEntry* entry = findPtrResource(resource);
	return (entry == nullptr) ? -1 : entry->getSize();
}

/*
 * --INFO--
 * Address:	8001BA80
 * Size:	000060
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

/*
 * --INFO--
 * Address:	8001BAE0
 * Size:	0000AC
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

/*
 * --INFO--
 * Address:	8001BB8C
 * Size:	00002C
 */
u32 JKRArchive::getExpandedResSize(const void* resource) const { return getResSize(resource); }
