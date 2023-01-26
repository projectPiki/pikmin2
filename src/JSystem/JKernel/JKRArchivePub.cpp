#include "Dolphin/dvd.h"
#include "JSystem/JKR/Aram.h"
#include "JSystem/JKR/JKRArchive.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JKR/JKRFileFinder.h"
#include "types.h"

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
JKRArchive* JKRArchive::check_mount_already(long entryNum)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
JKRArchive* JKRArchive::check_mount_already(long entryNum, JKRHeap* pHeap)
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
			if (archive->_40 == entryNum && archive->_38 == heap) {
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
JKRArchive* JKRArchive::mount(void* p1, JKRHeap* heap, EMountDirection mountDirection)
{
	JKRArchive* archive = check_mount_already((long)p1, heap);
	if (archive != nullptr) {
		return archive;
	}
	return new (heap, (mountDirection == EMD_Unk1) ? 4 : -4) JKRMemArchive(p1, 0xFFFF, MBF_0);
}

/*
 * --INFO--
 * Address:	8001B26C
 * Size:	0001D8
 */
JKRArchive* JKRArchive::mount(long entryNum, EMountMode mountMode, JKRHeap* heap, EMountDirection mountDirection)
{
	JKRArchive* archive = check_mount_already(entryNum, heap);
	if (archive) {
		return archive;
	} else {
		int i = (mountDirection == EMD_Unk1) ? 4 : -4;
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
		sCurrentDirID  = (entry - _48);
	}
	return result;
}

/*
 * --INFO--
 * Address:	8001B4CC
 * Size:	000078
 */
bool JKRArchive::getDirEntry(JKRArchive::SDirEntry* dirEntry, u32 p2) const
{
	SDIFileEntry* fileEntry = findIdxResource(p2);
	if (!fileEntry) {
		return false;
	}
	char* names   = (char*)_54;
	dirEntry->_00 = fileEntry->mFlag >> 0x18;
	dirEntry->_02 = fileEntry->_00;
	dirEntry->_04 = names + (fileEntry->mFlag & 0xFFFFFF);
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
	if (_44 != nullptr && mMountMode != EMM_Mem) {
		SDIFileEntry* entry = mFileEntries;
		for (int i = 0; i < _44->_08; i++) {
			if (entry->_10) {
				JKRHeap::free(entry->_10, _38);
				entry->_10 = nullptr;
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
	entry->_10 = nullptr;
	JKRHeap::free(resource, _38);
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
	entry->_10 = nullptr;
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
	return (dirEntry != nullptr) ? dirEntry->num_entries : 0;
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
	if (dirEntry != nullptr) {
		return new (JKRHeap::sSystemHeap, 0) JKRArcFinder(const_cast<JKRArchive*>(this), dirEntry->first_file_index, dirEntry->num_entries);
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	8001BB8C
 * Size:	00002C
 */
u32 JKRArchive::getExpandedResSize(const void* resource) const { return getResSize(resource); }
