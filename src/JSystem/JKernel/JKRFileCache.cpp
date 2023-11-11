#include "ctype.h"
#include "Dolphin/dvd.h"
#include "Dolphin/os.h"
#include "string.h"
#include "JSystem/JKernel/JKRFileCache.h"
#include "JSystem/JKernel/JKRFile.h"
#include "JSystem/JKernel/JKRFileFinder.h"
#include "JSystem/JKernel/JKRFileLoader.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JSupport/JSUList.h"
#include "types.h"

/*
 * --INFO--
 * Address:	800219C4
 * Size:	0000F8
 */
JKRFileCache* JKRFileCache::mount(const char* path, JKRHeap* heap, const char* volume)
{
	if (path == nullptr || *path != '/') {
		return nullptr;
	}
	size_t len = strlen(path);
	if (len != 1 && path[len - 1] == '/') {
		return nullptr;
	}
	for (JSULinkIterator<JKRFileLoader> iterator(sVolumeList.getFirst()); iterator != nullptr; iterator++) {
		JKRFileLoader& loader = *iterator;
		if (loader.mMagicWord == 'CASH') {
			JKRFileCache& cache = static_cast<JKRFileCache&>(loader);
			if (cache.mRootPath != nullptr && strcmp(cache.mRootPath, path) == 0) {
				cache.mMountCount++;
				return &cache;
			}
		}
	}
	return new (heap, 0) JKRFileCache(path, volume);
}

/*
 * --INFO--
 * Address:	80021ABC
 * Size:	0001C0
 */
JKRFileCache::JKRFileCache(const char* path, const char* volume)
    : JKRFileLoader()
    , mCacheBlockList()
{
	mParentHeap = JKRHeap::findFromRoot(this);
	mMountCount = 1;
	mMagicWord  = 'CASH';

	u32 pathLength = strlen(path);
	mRootPath      = (char*)JKRAllocFromHeap(mParentHeap, pathLength + 1, 1);
	mDirectoryPath = (char*)JKRAllocFromSysHeap(pathLength + 2, 1);
	strcpy(mRootPath, path);
	strcpy(mDirectoryPath, path);

	if (path[1] != '\0') {
		convStrLower(mRootPath);
		convStrLower(mDirectoryPath);
		strcat(mDirectoryPath, "/");

		const char* volumePath = volume;
		if (!volume) {
			volumePath = strrchr(mRootPath, '/');
			volumePath++;
		}

		u32 volumeLength = strlen(volumePath) + 1;
		mVolumePath      = (char*)JKRAllocFromSysHeap(volumeLength, 0);
		strcpy(mVolumePath, volumePath);
		convStrLower(mVolumePath);
		mVolumeName = mVolumePath;
	} else {
		const char* volumePath = volume;
		if (!volume) {
			volumePath = "dvd";
		}

		u32 volumeLength = strlen(volumePath) + 1;
		mVolumePath      = (char*)JKRAllocFromSysHeap(volumeLength, 0);
		strcpy(mVolumePath, volumePath);
		convStrLower(mVolumePath);
		mVolumeName = mVolumePath;
	}

	getVolumeList().prepend(&mFileLoaderLink);
	mIsMounted = true;
}

/*
 * --INFO--
 * Address:	80021C7C
 * Size:	0000D4
 */
JKRFileCache::~JKRFileCache()
{
	removeResourceAll();
	if (mRootPath != nullptr) {
		JKRHeap::free(mRootPath, mParentHeap);
	}
	if (mDirectoryPath != nullptr) {
		JKRHeap::sSystemHeap->free(mDirectoryPath);
	}
	if (mVolumePath != nullptr) {
		JKRHeap::sSystemHeap->free(mVolumePath);
	}
	sVolumeList.remove(&mFileLoaderLink);
}

/*
 * --INFO--
 * Address:	80021D50
 * Size:	000098
 */
bool JKRFileCache::becomeCurrent(const char* path)
{
	char* dvdPathName = getDvdPathName(path);
	bool result       = DVDChangeDir(dvdPathName);
	if (result) {
		sCurrentVolume = this;
		JKRHeap::sSystemHeap->free(mDirectoryPath);
		mDirectoryPath = dvdPathName;
		if (mDirectoryPath[1] != '\0') {
			strcat(mDirectoryPath, "/");
		}
	} else {
		JKRHeap::sSystemHeap->free(dvdPathName);
	}
	return result;
}

/*
 * --INFO--
 * Address:	80021DE8
 * Size:	000118
 */
void* JKRFileCache::getResource(const char* path)
{
	void* resource    = nullptr;
	char* dvdPathName = getDvdPathName(path);
	JKRDvdFile file(dvdPathName);
	if (file.mFileOpen) {
		CCacheBlock* block = findCacheBlock(file.mDvdPlayer.startAddr);
		if (block == nullptr) {
			size_t byteCount = ALIGN_NEXT(file.getFileSize(), 0x20);
			resource         = JKRHeap::alloc(byteCount, 0x20, mParentHeap);
			if (resource != nullptr) {
				file.read(resource, byteCount, 0);
				block = new (JKRHeap::sSystemHeap, 0) CCacheBlock(file.mDvdPlayer.startAddr, file.getFileSize(), resource);
				mCacheBlockList.append(block);
			}
		} else {
			block->mRefCount++;
			resource = const_cast<void*>(block->mFilePtr);
		}
	}
	JKRHeap::sSystemHeap->free(dvdPathName);
	return resource;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 * getRelResource__12JKRFileCacheFPCc
 */
void* JKRFileCache::getRelResource(const char* path)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80021F00
 * Size:	000090
 * getResource__12JKRFileCacheFUlPCc
 */
void* JKRFileCache::getResource(u32 type, const char* fileName)
{
	char directoryPath[256];
	size_t len = strlen(mRootPath);
	char* v1   = directoryPath + len;
	strcpy(directoryPath, mRootPath);
	if (findFile(directoryPath, fileName)) {
		return getResource(v1);
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	80021F90
 * Size:	0000D4
 */
size_t JKRFileCache::readResource(void* resourceBuffer, u32 bufferSize, const char* path)
{
	char* dvdPathName = getDvdPathName(path);
	JKRDvdFile file(dvdPathName);
	size_t consumedSize = 0;
	while (true) {
		if (file.mFileOpen == false) {
			break;
		}
		bufferSize   = ALIGN_PREV(bufferSize, 0x20);
		consumedSize = ALIGN_NEXT(file.getFileSize(), 0x20);
		if (consumedSize > bufferSize) {
			consumedSize = bufferSize;
		}
		CCacheBlock* block = findCacheBlock(file.mDvdPlayer.startAddr);
		if (block == nullptr) {
			file.read(resourceBuffer, consumedSize, 0);
		} else {
			memcpy(resourceBuffer, block->mFilePtr, consumedSize);
		}
	}
	JKRHeap::sSystemHeap->free(dvdPathName);
	return consumedSize;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
size_t JKRFileCache::readRelResource(void* p1, u32 p2, const char* p3)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80022064
 * Size:	000090
 */
size_t JKRFileCache::readResource(void* resourceBuffer, u32 bufferSize, u32 type, const char* fileName)
{
	char directoryPath[256];
	size_t len = strlen(mRootPath);
	char* v1   = directoryPath + len;
	strcpy(directoryPath, mRootPath);
	if (findFile(directoryPath, fileName)) {
		return readResource(resourceBuffer, bufferSize, v1);
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	800220F4
 * Size:	000090
 */
void JKRFileCache::removeResourceAll()
{
	for (JSULinkIterator<CCacheBlock> iterator(mCacheBlockList.getFirst()); iterator != nullptr;) {
		JKRHeap::free(const_cast<void*>(iterator->mFilePtr), mParentHeap);
		mCacheBlockList.remove(iterator.getObject());
		delete (iterator++).getObject();
	}
}

/*
 * --INFO--
 * Address:	80022184
 * Size:	00009C
 * removeResource__12JKRFileCacheFPv
 */
bool JKRFileCache::removeResource(void* resource)
{
	CCacheBlock* link = findCacheBlock(resource);
	if (link == nullptr) {
		return false;
	}
	if (--link->mRefCount == 0) {
		JKRHeap::free(resource, mParentHeap);
		mCacheBlockList.remove(link);
		delete link;
	}
	return true;
}

/*
 * --INFO--
 * Address:	80022220
 * Size:	000074
 */
bool JKRFileCache::detachResource(void* resource)
{
	CCacheBlock* link = findCacheBlock(resource);
	if (link == nullptr) {
		return false;
	}
	mCacheBlockList.remove(link);
	delete link;
	return true;
}

/*
 * --INFO--
 * Address:	80022294
 * Size:	000034
 */
long JKRFileCache::getResSize(const void* resource) const
{
	CCacheBlock* block = findCacheBlock(resource);
	return (block == nullptr) ? -1 : block->mFileSize;
}

/*
 * --INFO--
 * Address:	800222C8
 * Size:	00007C
 */
u32 JKRFileCache::countFile(const char* path) const
{
	DVDDir dir;
	DVDDirEntry file;
	int count     = 0;
	char* dvdPath = getDvdPathName(path);
	if (DVDOpenDir(dvdPath, &dir)) {
		while (DVDReadDir(&dir, &file)) {
			count++;
		}
		DVDCloseDir(&dir);
	}
	JKRHeap::sSystemHeap->free(dvdPath);
	return count;
}

/*
 * --INFO--
 * Address:	80022344
 * Size:	00009C
 */
JKRFileFinder* JKRFileCache::getFirstFile(const char* path) const
{
	char* dvdPath         = getDvdPathName(path);
	JKRFileFinder* finder = new (JKRHeap::sSystemHeap, 0) JKRDvdFinder(dvdPath);
	JKRHeap::sSystemHeap->free(dvdPath);
	if (finder->mIsAvailable != true) {
		delete finder;
		return nullptr;
	}
	return finder;
}

/*
 * --INFO--
 * Address:	80022428
 * Size:	00002C
 */
JKRFileCache::CCacheBlock* JKRFileCache::findCacheBlock(const void* resource) const
{
	for (JSULink<CCacheBlock>* link = mCacheBlockList.getFirst(); link != nullptr; link = link->getNext()) {
		if (link->getObject()->mFilePtr == resource) {
			return link->getObject();
		}
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	80022454
 * Size:	00002C
 * findCacheBlock__12JKRFileCacheCFUl
 */
JKRFileCache::CCacheBlock* JKRFileCache::findCacheBlock(u32 id) const
{
	for (JSULink<CCacheBlock>* link = mCacheBlockList.getFirst(); link != nullptr; link = link->getNext()) {
		if (link->getObject()->mFileID == id) {
			return link->getObject();
		}
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	80022480
 * Size:	0003E8
 */
bool JKRFileCache::findFile(char* directoryPath, const char* fileName) const
{
	DVDDir dir;
	DVDDirEntry dirEntry;

	bool result    = false;
	u32 pathLength = strlen(directoryPath);
	if (DVDOpenDir(directoryPath, &dir)) {
		while (DVDReadDir(&dir, &dirEntry)) {
			if (dirEntry.isDir) {
				char* endOfPath = directoryPath + pathLength;
				*endOfPath      = '/';
				strcpy(directoryPath + pathLength + 1, dirEntry.name);
				result = findFile(directoryPath, fileName);
				if (result)
					break;
				*endOfPath = '\0';
			} else {
				result = (strcmp(fileName, dirEntry.name) == 0);
				if (result) {
					strcat(directoryPath, "/");
					strcat(directoryPath, fileName);
					break;
				}
			}
		}

		DVDCloseDir(&dir);
	}

	return result;
}

/*
 * --INFO--
 * Address:	80022868
 * Size:	000110
 */
char* JKRFileCache::getDvdPathName(const char* path) const
{
	char* dvdPathName;
	if (*path == '/') {
		// if absolute path...
		size_t length = strlen(mRootPath) + strlen(path) + 2;
		void* memory  = JKRHeap::sSystemHeap->alloc(length, 1);
		dvdPathName   = (char*)memory;
		strcpy(dvdPathName, mRootPath);
		if (path[1] != '\0') {
			if (mRootPath[1] == '\0') {
				strcat(dvdPathName, path + 1);
			} else {
				strcat(dvdPathName, path);
			}
		}
	} else {
		// if relative path...
		size_t length = strlen(mDirectoryPath) + strlen(path) + 2;
		void* memory  = JKRHeap::sSystemHeap->alloc(length, 1);
		dvdPathName   = (char*)memory;
		strcpy(dvdPathName, mDirectoryPath);
		strcat(dvdPathName, path);
	}
	convStrLower(dvdPathName);
	return dvdPathName;
}

/*
 * --INFO--
 * Address:	80022978
 * Size:	000048
 */
void JKRFileCache::convStrLower(char* str) const
{
	while (*str != '\0') {
		*str = tolower(*str);
		str++;
	}
}

/*
 * --INFO--
 * Address:	800229C0
 * Size:	00006C
 * __ct__Q212JKRFileCache11CCacheBlockFUlUlPCv
 */
JKRFileCache::CCacheBlock::CCacheBlock(u32 fileID, u32 size, const void* resource)
    : JSULink(this)
    , mRefCount(1)
    , mFileID(fileID)
    , mFileSize(size)
    , mFilePtr(resource)
{
}
