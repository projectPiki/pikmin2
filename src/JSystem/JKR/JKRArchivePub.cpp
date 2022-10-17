#include "Dolphin/dvd.h"
#include "JSystem/JKR/Aram.h"
#include "JSystem/JKR/JKRArchive.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JKR/JKRFileFinder.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__10JKRArchive
    __vt__10JKRArchive:
        .4byte 0
        .4byte 0
        .4byte __dt__10JKRArchiveFv
        .4byte unmount__13JKRFileLoaderFv
        .4byte becomeCurrent__10JKRArchiveFPCc
        .4byte getResource__10JKRArchiveFPCc
        .4byte getResource__10JKRArchiveFUlPCc
        .4byte readResource__10JKRArchiveFPvUlPCc
        .4byte readResource__10JKRArchiveFPvUlUlPCc
        .4byte removeResourceAll__10JKRArchiveFv
        .4byte removeResource__10JKRArchiveFPv
        .4byte detachResource__10JKRArchiveFPv
        .4byte getResSize__10JKRArchiveCFPCv
        .4byte countFile__10JKRArchiveCFPCc
        .4byte getFirstFile__10JKRArchiveCFPCc
        .4byte getExpandedResSize__10JKRArchiveCFPCv
        .4byte 0
        .4byte 0
        .4byte setExpandSize__10JKRArchiveFPQ210JKRArchive12SDIFileEntryUl
        .4byte getExpandSize__10JKRArchiveCFPQ210JKRArchive12SDIFileEntry
*/

JKRArchive* JKRArchive::check_mount_already(long entryNum, JKRHeap* heap)
{
	JKRFileLoader* loader = nullptr;
	if (heap == nullptr) {
		heap = JKRHeap::sCurrentHeap;
	}
	for (JSULink<JKRFileLoader>* link = JKRArchive::sVolumeList.getFirst(); link != nullptr; link = link->getNext()) {
		JKRFileLoader* loader = link->getObject();
		if (loader->m_magicWord == 'RARC') {
			JKRArchive* archive = static_cast<JKRArchive*>(loader);
			if (archive->_40 == entryNum && archive->_38 == heap) {
				archive->m_mountCount++;
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
 * mount__10JKRArchiveFPvP7JKRHeapQ210JKRArchive15EMountDirection
 */
JKRArchive* JKRArchive::mount(void* p1, JKRHeap* heap, EMountDirection mountDirection)
{
	// JKRHeap* aHeap = heap;
	// if (aHeap == nullptr) {
	// 	aHeap = JKRHeap::sCurrentHeap;
	// }
	JKRArchive* archive = check_mount_already((long)p1, heap);
	if (archive) {
		return archive;
	} else {
		int i   = (mountDirection == EMD_Unk1) ? 4 : -4;
		archive = new (heap, i) JKRMemArchive(p1, 0xFFFF, MBF_0);
	}
	return archive;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r4, 0
	mr       r7, r4
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bne      lbl_8001B1B8
	lwz      r7, sCurrentHeap__7JKRHeap@sda21(r13)

lbl_8001B1B8:
	lis      r3, sVolumeList__13JKRFileLoader@ha
	lwz      r8, sVolumeList__13JKRFileLoader@l(r3)
	b        lbl_8001B204

lbl_8001B1C4:
	lwz      r3, 0(r8)
	lwz      r6, 0x2c(r3)
	addis    r0, r6, 0xadbf
	cmplwi   r0, 0x5243
	bne      lbl_8001B200
	lwz      r0, 0x40(r3)
	cmpw     r0, r31
	bne      lbl_8001B200
	lwz      r0, 0x38(r3)
	cmplw    r0, r7
	bne      lbl_8001B200
	lwz      r6, 0x34(r3)
	addi     r0, r6, 1
	stw      r0, 0x34(r3)
	b        lbl_8001B210

lbl_8001B200:
	lwz      r8, 0xc(r8)

lbl_8001B204:
	cmplwi   r8, 0
	bne      lbl_8001B1C4
	li       r3, 0

lbl_8001B210:
	cmplwi   r3, 0
	beq      lbl_8001B21C
	b        lbl_8001B258

lbl_8001B21C:
	cmpwi    r5, 1
	li       r3, 0x70
	li       r5, -4
	bne      lbl_8001B230
	li       r5, 4

lbl_8001B230:
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_8001B254
	lis      r5, 0x0000FFFF@ha
	mr       r4, r31
	addi     r5, r5, 0x0000FFFF@l
	li       r6, 0
	bl       __ct__13JKRMemArchiveFPvUl15JKRMemBreakFlag
	mr       r0, r3

lbl_8001B254:
	mr       r3, r0

lbl_8001B258:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8001B26C
 * Size:	0001D8
 * mount__10JKRArchiveFlQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
 */
JKRArchive* JKRArchive::mount(long entryNum, EMountMode mountMode, JKRHeap* heap, EMountDirection mountDirection)
{
	// JKRHeap* aHeap = heap;
	// if (heap == nullptr) {
	// 	aHeap = JKRHeap::sCurrentHeap;
	// }
	JKRArchive* archive = check_mount_already(entryNum, heap);
	if (archive) {
		return archive;
	} else {
		int i = (mountDirection == EMD_Unk1) ? 4 : -4;
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
		if (archive != nullptr && archive->m_mountMode == EMM_Unk0) {
			delete archive;
			archive = nullptr;
		}
		// archive = new(heap, (mountDirection == EMD_Unk1) ? 4 : -4) JKRMemArchive(entryNum, 0xFFFF, 0);
	}
	return archive;
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r5, 0
	  mr        r7, r5
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r6
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bne-      .loc_0x2C
	  lwz       r7, -0x77D4(r13)

	.loc_0x2C:
	  lis       r3, 0x8050
	  lwz       r8, 0x6E24(r3)
	  b         .loc_0x78

	.loc_0x38:
	  lwz       r3, 0x0(r8)
	  lwz       r6, 0x2C(r3)
	  subis     r0, r6, 0x5241
	  cmplwi    r0, 0x5243
	  bne-      .loc_0x74
	  lwz       r0, 0x40(r3)
	  cmpw      r0, r30
	  bne-      .loc_0x74
	  lwz       r0, 0x38(r3)
	  cmplw     r0, r7
	  bne-      .loc_0x74
	  lwz       r6, 0x34(r3)
	  addi      r0, r6, 0x1
	  stw       r0, 0x34(r3)
	  b         .loc_0x84

	.loc_0x74:
	  lwz       r8, 0xC(r8)

	.loc_0x78:
	  cmplwi    r8, 0
	  bne+      .loc_0x38
	  li        r3, 0

	.loc_0x84:
	  cmplwi    r3, 0
	  beq-      .loc_0x90
	  b         .loc_0x1C0

	.loc_0x90:
	  cmpwi     r31, 0x1
	  li        r0, -0x4
	  bne-      .loc_0xA0
	  li        r0, 0x4

	.loc_0xA0:
	  cmpwi     r4, 0x3
	  beq-      .loc_0x128
	  bge-      .loc_0xBC
	  cmpwi     r4, 0x1
	  beq-      .loc_0xC8
	  bge-      .loc_0xF8
	  b         .loc_0x184

	.loc_0xBC:
	  cmpwi     r4, 0x5
	  bge-      .loc_0x184
	  b         .loc_0x158

	.loc_0xC8:
	  mr        r4, r5
	  mr        r5, r0
	  li        r3, 0x70
	  bl        0x8C00
	  mr.       r0, r3
	  beq-      .loc_0xF0
	  mr        r4, r30
	  mr        r5, r31
	  bl        0x92F0
	  mr        r0, r3

	.loc_0xF0:
	  mr        r4, r0
	  b         .loc_0x184

	.loc_0xF8:
	  mr        r4, r5
	  mr        r5, r0
	  li        r3, 0x6C
	  bl        0x8BD0
	  mr.       r0, r3
	  beq-      .loc_0x120
	  mr        r4, r30
	  mr        r5, r31
	  bl        -0x2A2C
	  mr        r0, r3

	.loc_0x120:
	  mr        r4, r0
	  b         .loc_0x184

	.loc_0x128:
	  mr        r4, r5
	  mr        r5, r0
	  li        r3, 0x6C
	  bl        0x8BA0
	  mr.       r0, r3
	  beq-      .loc_0x150
	  mr        r4, r30
	  mr        r5, r31
	  bl        0x31C8
	  mr        r0, r3

	.loc_0x150:
	  mr        r4, r0
	  b         .loc_0x184

	.loc_0x158:
	  mr        r4, r5
	  mr        r5, r0
	  li        r3, 0x80
	  bl        0x8B70
	  mr.       r0, r3
	  beq-      .loc_0x180
	  mr        r4, r30
	  mr        r5, r31
	  bl        0x7D4
	  mr        r0, r3

	.loc_0x180:
	  mr        r4, r0

	.loc_0x184:
	  cmplwi    r4, 0
	  beq-      .loc_0x1BC
	  lbz       r0, 0x3C(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x1BC
	  cmplwi    r4, 0
	  beq-      .loc_0x1B8
	  mr        r3, r4
	  li        r4, 0x1
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1B8:
	  li        r4, 0

	.loc_0x1BC:
	  mr        r3, r4

	.loc_0x1C0:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001B444
 * Size:	000088
 */
bool JKRArchive::becomeCurrent(const char* path)
{
	SDirEntry* entry;
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
bool JKRArchive::getDirEntry(JKRArchive::SDirEntry* dirEntry, unsigned long p2) const
{
	SDIFileEntry* fileEntry = findIdxResource(p2);
	if (!fileEntry) {
		return false;
	}
	char* names   = (char*)_54;
	dirEntry->_00 = fileEntry->_04 >> 0x18;
	dirEntry->_02 = fileEntry->_00;
	dirEntry->_04 = names + (fileEntry->_04 & 0xFFFFFF);
	return true;
}

/*
 * --INFO--
 * Address:	8001B544
 * Size:	0000B8
 */
void* JKRArchive::getGlbResource(unsigned long type, const char* name, JKRArchive* archive)
{
	void* resource;
	if (archive) {
		resource = archive->getResource(type, name);
	} else {
		for (JSULink<JKRFileLoader>* link = sVolumeList.getFirst(); link != nullptr; link = link->getNext()) {
			if (link->getObject()->m_magicWord == 'RARC' && (resource = link->getObject()->getResource(type, name))) {
				break;
			}
		}
	}
	return resource;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	cmplwi   r5, 0
	li       r6, 0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	beq      lbl_8001B590
	mr       r3, r5
	mr       r4, r29
	lwz      r12, 0(r5)
	mr       r5, r30
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	b        lbl_8001B5E0

lbl_8001B590:
	lis      r3, sVolumeList__13JKRFileLoader@ha
	lwz      r31, sVolumeList__13JKRFileLoader@l(r3)
	b        lbl_8001B5D4

lbl_8001B59C:
	lwz      r3, 0(r31)
	lwz      r4, 0x2c(r3)
	addis    r0, r4, 0xadbf
	cmplwi   r0, 0x5243
	bne      lbl_8001B5D0
	lwz      r12, 0(r3)
	mr       r4, r29
	mr       r5, r30
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	or.      r6, r3, r3
	bne      lbl_8001B5DC

lbl_8001B5D0:
	lwz      r31, 0xc(r31)

lbl_8001B5D4:
	cmplwi   r31, 0
	bne      lbl_8001B59C

lbl_8001B5DC:
	mr       r3, r6

lbl_8001B5E0:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8001B5FC
 * Size:	00007C
 * getResource__10JKRArchiveFPCc
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
 * getResource__10JKRArchiveFUlPCc
 */
void* JKRArchive::getResource(unsigned long type, const char* name)
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
void* JKRArchive::getIdxResource(unsigned long index)
{
	SDIFileEntry* fileEntry = findIdxResource(index);
	return (fileEntry != nullptr) ? (void*)fetchResource(fileEntry, nullptr) : nullptr;
}

/*
 * --INFO--
 * Address:	8001B74C
 * Size:	0000AC
 * readResource__10JKRArchiveFPvUlUlPCc
 */
u32 JKRArchive::readResource(void* p1, unsigned long p2, unsigned long type, const char* name)
{
	SDIFileEntry* fileEntry;
	if (type == 0 || type == '????') {
		fileEntry = findNameResource(name);
	} else {
		fileEntry = findTypeResource(type, name);
	}
	u32 result;
	if (fileEntry) {
		fetchResource(p1, p2, fileEntry, &result);
	} else {
		result = 0;
	}
	return result;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	cmplwi   r6, 0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	beq      lbl_8001B784
	addis    r0, r6, 0xc0c1
	cmplwi   r0, 0x3f3f
	bne      lbl_8001B798

lbl_8001B784:
	mr       r3, r29
	mr       r4, r7
	bl       findNameResource__10JKRArchiveCFPCc
	mr       r6, r3
	b        lbl_8001B7A8

lbl_8001B798:
	mr       r4, r6
	mr       r5, r7
	bl       findTypeResource__10JKRArchiveCFUlPCc
	mr       r6, r3

lbl_8001B7A8:
	cmplwi   r6, 0
	beq      lbl_8001B7D8
	lwz      r12, 0(r29)
	mr       r3, r29
	mr       r4, r30
	mr       r5, r31
	lwz      r12, 0x44(r12)
	addi     r7, r1, 8
	mtctr    r12
	bctrl
	lwz      r3, 8(r1)
	b        lbl_8001B7DC

lbl_8001B7D8:
	li       r3, 0

lbl_8001B7DC:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8001B7F8
 * Size:	0000A4
 */
u32 JKRArchive::readResource(void* p1, unsigned long p2, const char* path)
{
	SDIFileEntry* fileEntry;
	if (*path == '/') {
		fileEntry = findFsResource(path + 1, 0);
	} else {
		fileEntry = findFsResource(path, sCurrentDirID);
	}
	u32 result;
	if (fileEntry) {
		fetchResource(p1, p2, fileEntry, &result);
	} else {
		result = 0;
	}
	return result;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	lbz      r0, 0(r6)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	cmpwi    r0, 0x2f
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	bne      lbl_8001B83C
	addi     r4, r6, 1
	li       r5, 0
	bl       findFsResource__10JKRArchiveCFPCcUl
	mr       r6, r3
	b        lbl_8001B84C

lbl_8001B83C:
	lwz      r5, sCurrentDirID__10JKRArchive@sda21(r13)
	mr       r4, r6
	bl       findFsResource__10JKRArchiveCFPCcUl
	mr       r6, r3

lbl_8001B84C:
	cmplwi   r6, 0
	beq      lbl_8001B87C
	lwz      r12, 0(r29)
	mr       r3, r29
	mr       r4, r30
	mr       r5, r31
	lwz      r12, 0x44(r12)
	addi     r7, r1, 8
	mtctr    r12
	bctrl
	lwz      r3, 8(r1)
	b        lbl_8001B880

lbl_8001B87C:
	li       r3, 0

lbl_8001B880:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8001B89C
 * Size:	00007C
 * readResource__10JKRArchiveFPvUlUs
 */
u32 JKRArchive::readResource(void* p1, unsigned long p2, unsigned short index)
{
	SDIFileEntry* fileEntry = findIdxResource(index);
	u32 result;
	if (fileEntry) {
		fetchResource(p1, p2, fileEntry, &result);
	} else {
		result = 0;
	}
	return result;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	mr       r4, r6
	stw      r29, 0x14(r1)
	mr       r29, r3
	bl       findIdResource__10JKRArchiveCFUs
	or.      r6, r3, r3
	beq      lbl_8001B8F8
	lwz      r12, 0(r29)
	mr       r3, r29
	mr       r4, r30
	mr       r5, r31
	lwz      r12, 0x44(r12)
	addi     r7, r1, 8
	mtctr    r12
	bctrl
	lwz      r3, 8(r1)
	b        lbl_8001B8FC

lbl_8001B8F8:
	li       r3, 0

lbl_8001B8FC:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8001B918
 * Size:	000098
 */
void JKRArchive::removeResourceAll()
{
	if (_44 != nullptr && m_mountMode != EMM_Mem) {
		SDIFileEntry* entry = m_fileEntries;
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
 * removeResource__10JKRArchiveFPv
 */
bool JKRArchive::removeResource(void* resource)
{
	SDIFileEntry* entry = findPtrResource(resource);
	if (entry) {
		entry->_10 = nullptr;
		JKRHeap::free(resource, _38);
	}
	return (entry != nullptr);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       findPtrResource__10JKRArchiveCFPCv
	cmplwi   r3, 0
	bne      lbl_8001B9E0
	li       r3, 0
	b        lbl_8001B9F8

lbl_8001B9E0:
	li       r0, 0
	stw      r0, 0x10(r3)
	mr       r3, r31
	lwz      r4, 0x38(r30)
	bl       free__7JKRHeapFPvP7JKRHeap
	li       r3, 1

lbl_8001B9F8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8001BA10
 * Size:	00003C
 * detachResource__10JKRArchiveFPv
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
u16 JKRArchive::countFile(const char* path) const
{
	SDirEntry* dirEntry;
	if (*path == '/') {
		const char* pathPtr = path + 1;
		if (*pathPtr == '\0') {
			pathPtr = nullptr;
		}
		dirEntry = findDirectory(pathPtr, 0);
	} else {
		dirEntry = findDirectory(path, sCurrentDirID);
	}
	return (dirEntry != nullptr) ? dirEntry->_0A : 0;
}

/*
 * --INFO--
 * Address:	8001BAE0
 * Size:	0000AC
 */
JKRFileFinder* JKRArchive::getFirstFile(const char* path) const
{
	SDirEntry* dirEntry;
	if (*path == '/') {
		const char* pathPtr = path + 1;
		if (*pathPtr == '\0') {
			pathPtr = nullptr;
		}
		dirEntry = findDirectory(pathPtr, 0);
	} else {
		dirEntry = findDirectory(path, sCurrentDirID);
	}
	JKRArcFinder* finder = (dirEntry != nullptr) ? new (JKRHeap::sSystemHeap, 0)
	                               JKRArcFinder(const_cast<JKRArchive*>(this), dirEntry->_0C, dirEntry->_0A)
	                                             : nullptr;
	return finder;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lbz      r0, 0(r4)
	stw      r31, 0xc(r1)
	cmpwi    r0, 0x2f
	stw      r30, 8(r1)
	mr       r30, r3
	bne      lbl_8001BB28
	lbzu     r0, 1(r4)
	extsb.   r0, r0
	bne      lbl_8001BB14
	li       r4, 0

lbl_8001BB14:
	mr       r3, r30
	li       r5, 0
	bl       findDirectory__10JKRArchiveCFPCcUl
	mr       r31, r3
	b        lbl_8001BB34

lbl_8001BB28:
	lwz      r5, sCurrentDirID__10JKRArchive@sda21(r13)
	bl       findDirectory__10JKRArchiveCFPCcUl
	mr       r31, r3

lbl_8001BB34:
	cmplwi   r31, 0
	beq      lbl_8001BB70
	lwz      r4, sSystemHeap__7JKRHeap@sda21(r13)
	li       r3, 0x24
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_8001BB68
	lwz      r5, 0xc(r31)
	mr       r4, r30
	lhz      r6, 0xa(r31)
	bl       __ct__12JKRArcFinderFP10JKRArchivell
	mr       r0, r3

lbl_8001BB68:
	mr       r3, r0
	b        lbl_8001BB74

lbl_8001BB70:
	li       r3, 0

lbl_8001BB74:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8001BB8C
 * Size:	00002C
 */
u32 JKRArchive::getExpandedResSize(const void* resource) const { return getResSize(resource); }
