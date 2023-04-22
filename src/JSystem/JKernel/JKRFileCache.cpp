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
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__13JKRFileFinder
    __vt__13JKRFileFinder:
        .4byte 0
        .4byte 0
        .4byte __dt__13JKRFileFinderFv
        .4byte 0
    .global __vt__12JKRFileCache
    __vt__12JKRFileCache:
        .4byte 0
        .4byte 0
        .4byte __dt__12JKRFileCacheFv
        .4byte unmount__13JKRFileLoaderFv
        .4byte becomeCurrent__12JKRFileCacheFPCc
        .4byte getResource__12JKRFileCacheFPCc
        .4byte getResource__12JKRFileCacheFUlPCc
        .4byte readResource__12JKRFileCacheFPvUlPCc
        .4byte readResource__12JKRFileCacheFPvUlUlPCc
        .4byte removeResourceAll__12JKRFileCacheFv
        .4byte removeResource__12JKRFileCacheFPv
        .4byte detachResource__12JKRFileCacheFPv
        .4byte getResSize__12JKRFileCacheCFPCv
        .4byte countFile__12JKRFileCacheCFPCc
        .4byte getFirstFile__12JKRFileCacheCFPCc
        .4byte getFsResource__12JKRFileCacheFPCc
        .4byte getNameResource__12JKRFileCacheFUlPCc
        .4byte readFsResource__12JKRFileCacheFPvUlPCc
        .4byte readNameResource__12JKRFileCacheFPvUlUlPCc
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516520
    lbl_80516520:
        .4byte 0x2F000000
    .global lbl_80516524
    lbl_80516524:
        .4byte 0x64766400
*/

/*
 * --INFO--
 * Address:	800219C4
 * Size:	0000F8
 */
JKRFileCache* JKRFileCache::mount(const char* p1, JKRHeap* p2, const char* p3)
{
	if (p1 == nullptr || *p1 != '/') {
		return nullptr;
	}
	size_t len = strlen(p1);
	if (len != 1 && p1[len - 1] == '/') {
		return nullptr;
	}
	for (JSULinkIterator<JKRFileLoader> iterator(sVolumeList.getFirst()); iterator != nullptr; iterator++) {
		JKRFileLoader& loader = *iterator;
		if (loader.mMagicWord == 'CASH') {
			JKRFileCache& cache = static_cast<JKRFileCache&>(loader);
			if (cache._48 != nullptr && strcmp(cache._48, p1) == 0) {
				cache.mMountCount++;
				return &cache;
			}
		}
	}
	return new (p2, 0) JKRFileCache(p1, p3);
}

/*
 * --INFO--
 * Address:	80021ABC
 * Size:	0001C0
 */
JKRFileCache::JKRFileCache(const char* p1, const char* p2)
    : JKRFileLoader()
    , mCacheBlockList()
{
	_38            = JKRHeap::findFromRoot(this);
	mMountCount    = 1;
	mMagicWord     = 'CASH';
	size_t length  = strlen(p1);
	void* memory   = JKRHeap::alloc(length + 1, 1, _38);
	_48            = (char*)memory;
	memory         = JKRHeap::sSystemHeap->alloc(length + 2, 1);
	mDirectoryPath = (char*)memory;
	strcpy(_48, p1);
	strcpy(mDirectoryPath, p1);
	if (p1[1] != '\0') {
		convStrLower(_48);
		convStrLower(mDirectoryPath);
		strcat(mDirectoryPath, "/");
		if (p2 == nullptr) {
			p2 = strrchr(_48, '/') + 1;
		}
		length = strlen(p2) + 1;
		memory = JKRHeap::sSystemHeap->alloc(length, 0);
		_50    = (char*)memory;
		strcpy(_50, p2);
		convStrLower(_50);
		_28 = _50;
	} else {
		if (p2 == nullptr) {
			p2 = "dvd";
		}
		length = strlen(p2) + 1;
		memory = JKRHeap::sSystemHeap->alloc(length, 0);
		_50    = (char*)memory;
		strcpy(_50, p2);
		convStrLower(_50);
		_28 = _50;
	}
	sVolumeList.prepend(&_18);
	_30 = 1;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r5
	stw      r28, 0x10(r1)
	mr       r28, r4
	bl       __ct__13JKRFileLoaderFv
	lis      r4, __vt__12JKRFileCache@ha
	addi     r3, r31, 0x3c
	addi     r0, r4, __vt__12JKRFileCache@l
	stw      r0, 0(r31)
	bl       initiate__10JSUPtrListFv
	mr       r3, r31
	bl       findFromRoot__7JKRHeapFPv
	stw      r3, 0x38(r31)
	li       r0, 1
	lis      r4, 0x43415348@ha
	mr       r3, r28
	stw      r0, 0x34(r31)
	addi     r0, r4, 0x43415348@l
	stw      r0, 0x2c(r31)
	bl       strlen
	mr       r30, r3
	lwz      r5, 0x38(r31)
	addi     r3, r30, 1
	li       r4, 1
	bl       alloc__7JKRHeapFUliP7JKRHeap
	stw      r3, 0x48(r31)
	addi     r4, r30, 2
	li       r5, 1
	lwz      r3, sSystemHeap__7JKRHeap@sda21(r13)
	bl       alloc__7JKRHeapFUli
	stw      r3, 0x4c(r31)
	mr       r4, r28
	lwz      r3, 0x48(r31)
	bl       strcpy
	lwz      r3, 0x4c(r31)
	mr       r4, r28
	bl       strcpy
	lbz      r0, 1(r28)
	extsb.   r0, r0
	beq      lbl_80021BF4
	lwz      r4, 0x48(r31)
	mr       r3, r31
	bl       convStrLower__12JKRFileCacheCFPc
	lwz      r4, 0x4c(r31)
	mr       r3, r31
	bl       convStrLower__12JKRFileCacheCFPc
	lwz      r3, 0x4c(r31)
	addi     r4, r2, lbl_80516520@sda21
	bl       strcat
	cmplwi   r29, 0
	mr       r30, r29
	bne      lbl_80021BB4
	lwz      r3, 0x48(r31)
	li       r4, 0x2f
	bl       strrchr
	addi     r30, r3, 1

lbl_80021BB4:
	mr       r3, r30
	bl       strlen
	addi     r4, r3, 1
	lwz      r3, sSystemHeap__7JKRHeap@sda21(r13)
	li       r5, 0
	bl       alloc__7JKRHeapFUli
	stw      r3, 0x50(r31)
	mr       r4, r30
	lwz      r3, 0x50(r31)
	bl       strcpy
	lwz      r4, 0x50(r31)
	mr       r3, r31
	bl       convStrLower__12JKRFileCacheCFPc
	lwz      r0, 0x50(r31)
	stw      r0, 0x28(r31)
	b        lbl_80021C40

lbl_80021BF4:
	cmplwi   r29, 0
	mr       r30, r29
	bne      lbl_80021C04
	addi     r30, r2, lbl_80516524@sda21

lbl_80021C04:
	mr       r3, r30
	bl       strlen
	addi     r4, r3, 1
	lwz      r3, sSystemHeap__7JKRHeap@sda21(r13)
	li       r5, 0
	bl       alloc__7JKRHeapFUli
	stw      r3, 0x50(r31)
	mr       r4, r30
	lwz      r3, 0x50(r31)
	bl       strcpy
	lwz      r4, 0x50(r31)
	mr       r3, r31
	bl       convStrLower__12JKRFileCacheCFPc
	lwz      r0, 0x50(r31)
	stw      r0, 0x28(r31)

lbl_80021C40:
	lis      r3, sVolumeList__13JKRFileLoader@ha
	addi     r4, r31, 0x18
	addi     r3, r3, sVolumeList__13JKRFileLoader@l
	bl       prepend__10JSUPtrListFP10JSUPtrLink
	li       r0, 1
	mr       r3, r31
	stb      r0, 0x30(r31)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80021C7C
 * Size:	0000D4
 */
JKRFileCache::~JKRFileCache()
{
	removeResourceAll();
	if (_48 != nullptr) {
		JKRHeap::free(_48, _38);
	}
	if (mDirectoryPath != nullptr) {
		JKRHeap::sSystemHeap->free(mDirectoryPath);
	}
	if (_50 != nullptr) {
		JKRHeap::sSystemHeap->free(_50);
	}
	sVolumeList.remove(&_18);
}

/*
 * --INFO--
 * Address:	80021D50
 * Size:	000098
 */
bool JKRFileCache::becomeCurrent(const char* newDirectoryPath)
{
	char* dvdPathName = getDvdPathName(newDirectoryPath);
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
void* JKRFileCache::getResource(const char* p1)
{
	void* resource    = nullptr;
	char* dvdPathName = getDvdPathName(p1);
	JKRDvdFile file(dvdPathName);
	if (file._18) {
		CCacheBlock* block = findCacheBlock(file.mDvdPlayer._30);
		if (block == nullptr) {
			size_t byteCount = ALIGN_NEXT(file.getFileSize(), 0x20);
			resource         = JKRHeap::alloc(byteCount, 0x20, _38);
			if (resource != nullptr) {
				file.read(resource, byteCount, 0);
				block = new (JKRHeap::sSystemHeap, 0) CCacheBlock(file.mDvdPlayer._30, file.getFileSize(), resource);
				mCacheBlockList.append(block);
			}
		} else {
			block->_10++;
			resource = const_cast<void*>(block->_1C);
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
void* JKRFileCache::getResource(unsigned long p1, const char* fileName)
{
	char directoryPath[256];
	size_t len = strlen(_48);
	char* v1   = directoryPath + len;
	strcpy(directoryPath, _48);
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
size_t JKRFileCache::readResource(void* resourceBuffer, unsigned long bufferSize, const char* path)
{
	char* dvdPathName = getDvdPathName(path);
	JKRDvdFile file(dvdPathName);
	size_t consumedSize = 0;
	while (true) {
		if (file._18 == false) {
			break;
		}
		bufferSize   = ALIGN_PREV(bufferSize, 0x20);
		consumedSize = ALIGN_NEXT(file.getFileSize(), 0x20);
		if (consumedSize > bufferSize) {
			consumedSize = bufferSize;
		}
		CCacheBlock* block = findCacheBlock(file.mDvdPlayer._30);
		if (block == nullptr) {
			file.read(resourceBuffer, consumedSize, 0);
		} else {
			memcpy(resourceBuffer, block->_1C, consumedSize);
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
size_t JKRFileCache::readResource(void* resourceBuffer, unsigned long bufferSize, unsigned long type, const char* fileName)
{
	char directoryPath[256];
	size_t len = strlen(_48);
	char* v1   = directoryPath + len;
	strcpy(directoryPath, _48);
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
		JKRHeap::free(const_cast<void*>(iterator->_1C), _38);
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
	if (--link->_10 == 0) {
		JKRHeap::free(resource, _38);
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
	return (block == nullptr) ? -1 : block->_18;
}

/*
 * --INFO--
 * Address:	800222C8
 * Size:	00007C
 */
u32 JKRFileCache::countFile(const char* p1) const
{
	DVDDir dir;
	DVDDirEntry file;
	int count  = 0;
	char* path = getDvdPathName(p1);
	if (DVDOpenDir(path, &dir)) {
		while (DVDReadDir(&dir, &file)) {
			count++;
		}
		DVDCloseDir(&dir);
	}
	JKRHeap::sSystemHeap->free(path);
	return count;
}

/*
 * --INFO--
 * Address:	80022344
 * Size:	00009C
 */
JKRFileFinder* JKRFileCache::getFirstFile(const char* p1) const
{
	char* path           = getDvdPathName(p1);
	JKRDvdFinder* finder = new (JKRHeap::sSystemHeap, 0) JKRDvdFinder(path);
	JKRHeap::sSystemHeap->free(path);
	if (finder->_10 != 1) {
		delete finder;
		return nullptr;
	}
	return finder;
}

/*
 * --INFO--
 * Address:	800223E0
 * Size:	000048
 * __dt__13JKRFileFinderFv
 */
// JKRFileFinder::~JKRFileFinder() { }

/*
 * --INFO--
 * Address:	80022428
 * Size:	00002C
 */
JKRFileCache::CCacheBlock* JKRFileCache::findCacheBlock(const void* data) const
{
	for (JSULink<CCacheBlock>* link = mCacheBlockList.getFirst(); link != nullptr; link = link->getNext()) {
		if (link->getObject()->_1C == data) {
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
JKRFileCache::CCacheBlock* JKRFileCache::findCacheBlock(unsigned long id) const
{
	for (JSULink<CCacheBlock>* link = mCacheBlockList.getFirst(); link != nullptr; link = link->getNext()) {
		if (link->getObject()->_14 == id) {
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
	// bool result = false;
	// size_t len  = strlen(directoryPath);
	// OSFstEntry entry;
	// if (DVDOpenDir(directoryPath, &entry)) {
	// 	char* endOfPath = directoryPath + len;
	// 	do {
	// 		while (true) {
	// 			OSFstEntry next;
	// 			if (DVDReadDir(&entry, &next) == FALSE) {
	// 				goto close;
	// 			}
	// 			if (next.mNextEntryNum == 0) {
	// 				break;
	// 			}
	// 			*endOfPath = '/';
	// 			strcpy(endOfPath + 1, next.mFileNameMaybe);
	// 			result = findFile(directoryPath, fileName);
	// 			if (result) {
	// 				goto close;
	// 			}
	// 			*endOfPath = '\0';
	// 		}
	// 		result = strcmp(fileName, entry.mFileNameMaybe) == 0;
	// 	} while (result == false);
	// 	strcat(directoryPath, "/");
	// 	strcat(directoryPath, fileName);
	// close:
	// 	DVDCloseDir(&entry);
	// }
	// return result;
	bool result = false;
	int cmpResult;
	size_t len = strlen(directoryPath);
	DVDDir entry;
	if (DVDOpenDir(directoryPath, &entry)) {
		char* endOfPath = directoryPath + len;
		DVDDirEntry next;
		while (DVDReadDir(&entry, &next) != FALSE) {
			// do {
			if (next.entryNum == 0) {
				break;
			}
			*endOfPath = '/';
			strcpy(endOfPath + 1, next.name);
			result = findFile(directoryPath, fileName);
			if (result) {
				goto close;
			}
			*endOfPath = '\0';
			cmpResult  = strcmp(fileName, entry.mFileNameMaybe);
			result     = !cmpResult;
			// } while (cmpResult != 0);
			if (!result) {
				continue;
			}
			// if (result) {
			strcat(directoryPath, "/");
			strcat(directoryPath, fileName);
			break;
			// }
		}
	close:
		DVDCloseDir(&entry);
	}
	return result;
	/*
	stwu     r1, -0xc0(r1)
	mflr     r0
	stw      r0, 0xc4(r1)
	stmw     r16, 0x80(r1)
	mr       r30, r4
	mr       r29, r3
	mr       r31, r5
	li       r17, 0
	mr       r3, r30
	bl       strlen
	mr       r16, r3
	mr       r3, r30
	addi     r4, r1, 0x74
	bl       DVDOpenDir
	cmpwi    r3, 0
	beq      lbl_80022850
	add      r22, r30, r16
	addi     r24, r1, 0x18
	addi     r16, r22, 1
	addi     r23, r1, 0x1c
	b        lbl_80022834

lbl_800224D4:
	lwz      r0, 0x6c(r1)
	cmpwi    r0, 0
	beq      lbl_800227FC
	li       r0, 0x2f
	mr       r3, r16
	stb      r0, 0(r22)
	lwz      r4, 0x70(r1)
	bl       strcpy
	mr       r3, r30
	li       r17, 0
	bl       strlen
	mr       r18, r3
	mr       r3, r30
	addi     r4, r1, 0x50
	bl       DVDOpenDir
	cmpwi    r3, 0
	beq      lbl_800227E8
	add      r21, r30, r18
	addi     r25, r21, 1
	b        lbl_800227CC

lbl_80022524:
	lwz      r0, 0x60(r1)
	cmpwi    r0, 0
	beq      lbl_80022794
	li       r0, 0x2f
	mr       r3, r25
	stb      r0, 0(r21)
	lwz      r4, 0x64(r1)
	bl       strcpy
	mr       r3, r30
	li       r17, 0
	bl       strlen
	mr       r18, r3
	mr       r3, r30
	addi     r4, r1, 0x38
	bl       DVDOpenDir
	cmpwi    r3, 0
	beq      lbl_80022780
	add      r20, r30, r18
	addi     r26, r20, 1
	b        lbl_80022764

lbl_80022574:
	lwz      r0, 0x48(r1)
	cmpwi    r0, 0
	beq      lbl_8002272C
	li       r0, 0x2f
	mr       r3, r26
	stb      r0, 0(r20)
	lwz      r4, 0x4c(r1)
	bl       strcpy
	mr       r3, r30
	li       r17, 0
	bl       strlen
	mr       r18, r3
	mr       r3, r30
	addi     r4, r1, 0x20
	bl       DVDOpenDir
	cmpwi    r3, 0
	beq      lbl_80022718
	add      r19, r30, r18
	addi     r27, r19, 1
	b        lbl_800226FC

lbl_800225C4:
	lwz      r0, 0x30(r1)
	cmpwi    r0, 0
	beq      lbl_800226C4
	li       r0, 0x2f
	mr       r3, r27
	stb      r0, 0(r19)
	lwz      r4, 0x34(r1)
	bl       strcpy
	mr       r3, r30
	li       r17, 0
	bl       strlen
	mr       r18, r3
	mr       r3, r30
	addi     r4, r1, 8
	bl       DVDOpenDir
	cmpwi    r3, 0
	beq      lbl_800226B0
	add      r18, r30, r18
	addi     r28, r18, 1
	b        lbl_80022694

lbl_80022614:
	lwz      r0, 0(r24)
	cmpwi    r0, 0
	beq      lbl_8002265C
	li       r0, 0x2f
	mr       r3, r28
	stb      r0, 0(r18)
	lwz      r4, 0(r23)
	bl       strcpy
	mr       r3, r29
	mr       r4, r30
	mr       r5, r31
	bl       findFile__12JKRFileCacheCFPcPCc
	clrlwi.  r0, r3, 0x18
	mr       r17, r3
	bne      lbl_800226A8
	li       r0, 0
	stb      r0, 0(r18)
	b        lbl_80022694

lbl_8002265C:
	lwz      r4, 0(r23)
	mr       r3, r31
	bl       strcmp
	cntlzw   r3, r3
	rlwinm.  r0, r3, 0x1b, 0x18, 0x1f
	srwi     r17, r3, 5
	beq      lbl_80022694
	mr       r3, r30
	addi     r4, r2, lbl_80516520@sda21
	bl       strcat
	mr       r3, r30
	mr       r4, r31
	bl       strcat
	b        lbl_800226A8

lbl_80022694:
	addi     r3, r1, 8
	addi     r4, r1, 0x14
	bl       DVDReadDir
	cmpwi    r3, 0
	bne      lbl_80022614

lbl_800226A8:
	addi     r3, r1, 8
	bl       DVDCloseDir

lbl_800226B0:
	clrlwi.  r0, r17, 0x18
	bne      lbl_80022710
	li       r0, 0
	stb      r0, 0(r19)
	b        lbl_800226FC

lbl_800226C4:
	lwz      r4, 0x34(r1)
	mr       r3, r31
	bl       strcmp
	cntlzw   r3, r3
	rlwinm.  r0, r3, 0x1b, 0x18, 0x1f
	srwi     r17, r3, 5
	beq      lbl_800226FC
	mr       r3, r30
	addi     r4, r2, lbl_80516520@sda21
	bl       strcat
	mr       r3, r30
	mr       r4, r31
	bl       strcat
	b        lbl_80022710

lbl_800226FC:
	addi     r3, r1, 0x20
	addi     r4, r1, 0x2c
	bl       DVDReadDir
	cmpwi    r3, 0
	bne      lbl_800225C4

lbl_80022710:
	addi     r3, r1, 0x20
	bl       DVDCloseDir

lbl_80022718:
	clrlwi.  r0, r17, 0x18
	bne      lbl_80022778
	li       r0, 0
	stb      r0, 0(r20)
	b        lbl_80022764

lbl_8002272C:
	lwz      r4, 0x4c(r1)
	mr       r3, r31
	bl       strcmp
	cntlzw   r3, r3
	rlwinm.  r0, r3, 0x1b, 0x18, 0x1f
	srwi     r17, r3, 5
	beq      lbl_80022764
	mr       r3, r30
	addi     r4, r2, lbl_80516520@sda21
	bl       strcat
	mr       r3, r30
	mr       r4, r31
	bl       strcat
	b        lbl_80022778

lbl_80022764:
	addi     r3, r1, 0x38
	addi     r4, r1, 0x44
	bl       DVDReadDir
	cmpwi    r3, 0
	bne      lbl_80022574

lbl_80022778:
	addi     r3, r1, 0x38
	bl       DVDCloseDir

lbl_80022780:
	clrlwi.  r0, r17, 0x18
	bne      lbl_800227E0
	li       r0, 0
	stb      r0, 0(r21)
	b        lbl_800227CC

lbl_80022794:
	lwz      r4, 0x64(r1)
	mr       r3, r31
	bl       strcmp
	cntlzw   r3, r3
	rlwinm.  r0, r3, 0x1b, 0x18, 0x1f
	srwi     r17, r3, 5
	beq      lbl_800227CC
	mr       r3, r30
	addi     r4, r2, lbl_80516520@sda21
	bl       strcat
	mr       r3, r30
	mr       r4, r31
	bl       strcat
	b        lbl_800227E0

lbl_800227CC:
	addi     r3, r1, 0x50
	addi     r4, r1, 0x5c
	bl       DVDReadDir
	cmpwi    r3, 0
	bne      lbl_80022524

lbl_800227E0:
	addi     r3, r1, 0x50
	bl       DVDCloseDir

lbl_800227E8:
	clrlwi.  r0, r17, 0x18
	bne      lbl_80022848
	li       r0, 0
	stb      r0, 0(r22)
	b        lbl_80022834

lbl_800227FC:
	lwz      r4, 0x70(r1)
	mr       r3, r31
	bl       strcmp
	cntlzw   r3, r3
	rlwinm.  r0, r3, 0x1b, 0x18, 0x1f
	srwi     r17, r3, 5
	beq      lbl_80022834
	mr       r3, r30
	addi     r4, r2, lbl_80516520@sda21
	bl       strcat
	mr       r3, r30
	mr       r4, r31
	bl       strcat
	b        lbl_80022848

lbl_80022834:
	addi     r3, r1, 0x74
	addi     r4, r1, 0x68
	bl       DVDReadDir
	cmpwi    r3, 0
	bne      lbl_800224D4

lbl_80022848:
	addi     r3, r1, 0x74
	bl       DVDCloseDir

lbl_80022850:
	mr       r3, r17
	lmw      r16, 0x80(r1)
	lwz      r0, 0xc4(r1)
	mtlr     r0
	addi     r1, r1, 0xc0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80022868
 * Size:	000110
 */
char* JKRFileCache::getDvdPathName(const char* fileName) const
{
	char* dvdPathName;
	if (*fileName == '/') {
		// if absolute path...
		size_t length = strlen(_48) + strlen(fileName) + 2;
		void* memory  = JKRHeap::sSystemHeap->alloc(length, 1);
		dvdPathName   = (char*)memory;
		strcpy(dvdPathName, _48);
		if (fileName[1] != '\0') {
			if (_48[1] == '\0') {
				strcat(dvdPathName, fileName + 1);
			} else {
				strcat(dvdPathName, fileName);
			}
		}
	} else {
		// if relative path...
		size_t length = strlen(mDirectoryPath) + strlen(fileName) + 2;
		void* memory  = JKRHeap::sSystemHeap->alloc(length, 1);
		dvdPathName   = (char*)memory;
		strcpy(dvdPathName, mDirectoryPath);
		strcat(dvdPathName, fileName);
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
JKRFileCache::CCacheBlock::CCacheBlock(unsigned long p1, unsigned long dataLength, const void* data)
    : JSULink(this)
    , _10(1)
    , _14(p1)
    , _18(dataLength)
    , _1C(data)
{
}

/*
 * --INFO--
 * Address:	80022A2C
 * Size:	00002C
 */
void* JKRFileCache::getFsResource(const char* path) { return getResource(path); }

/*
 * --INFO--
 * Address:	80022A58
 * Size:	00002C
 */
void* JKRFileCache::getNameResource(unsigned long p1, const char* fileName) { return getResource(p1, fileName); }

/*
 * --INFO--
 * Address:	80022A84
 * Size:	00002C
 */
long JKRFileCache::readFsResource(void* resourceBuffer, u32 bufferSize, const char* path)
{
	return readResource(resourceBuffer, bufferSize, path);
}

/*
 * --INFO--
 * Address:	80022AB0
 * Size:	00002C
 */
long JKRFileCache::readNameResource(void* resourceBuffer, u32 bufferSize, u32 type, const char* name)
{
	return readResource(resourceBuffer, bufferSize, type, name);
}
