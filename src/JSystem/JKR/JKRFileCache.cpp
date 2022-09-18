#include "Dolphin/dvd.h"
#include "Dolphin/os.h"
#include "JSystem/JKR/JKRFileCache.h"
#include "JSystem/JKR/JKRFile.h"
#include "JSystem/JKR/JKRFileFinder.h"
#include "JSystem/JKR/JKRHeap.h"

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
JKRFileCache* JKRFileCache::mount(const char*, JKRHeap*, const char*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	or.      r27, r3, r3
	mr       r28, r4
	mr       r29, r5
	beq      lbl_800219F0
	lbz      r0, 0(r27)
	cmpwi    r0, 0x2f
	beq      lbl_800219F8

lbl_800219F0:
	li       r3, 0
	b        lbl_80021AA8

lbl_800219F8:
	bl       strlen
	cmplwi   r3, 1
	beq      lbl_80021A1C
	add      r3, r27, r3
	lbz      r0, -1(r3)
	cmpwi    r0, 0x2f
	bne      lbl_80021A1C
	li       r3, 0
	b        lbl_80021AA8

lbl_80021A1C:
	lis      r3, sVolumeList__13JKRFileLoader@ha
	lwz      r31, sVolumeList__13JKRFileLoader@l(r3)
	b        lbl_80021A74

lbl_80021A28:
	lwz      r4, 0(r31)
	lwz      r3, 0x2c(r4)
	addis    r0, r3, 0xbcbf
	cmplwi   r0, 0x5348
	bne      lbl_80021A70
	lwz      r3, 0x48(r4)
	mr       r30, r4
	cmplwi   r3, 0
	beq      lbl_80021A70
	mr       r4, r27
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_80021A70
	lwz      r4, 0x34(r30)
	mr       r3, r30
	addi     r0, r4, 1
	stw      r0, 0x34(r30)
	b        lbl_80021AA8

lbl_80021A70:
	lwz      r31, 0xc(r31)

lbl_80021A74:
	cmplwi   r31, 0
	bne      lbl_80021A28
	mr       r4, r28
	li       r3, 0x54
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_80021AA4
	mr       r4, r27
	mr       r5, r29
	bl       __ct__12JKRFileCacheFPCcPCc
	mr       r0, r3

lbl_80021AA4:
	mr       r3, r0

lbl_80021AA8:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80021ABC
 * Size:	0001C0
 */
JKRFileCache::JKRFileCache(const char*, const char*)
{
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
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80021D34
	lis      r4, __vt__12JKRFileCache@ha
	addi     r0, r4, __vt__12JKRFileCache@l
	stw      r0, 0(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x48(r30)
	cmplwi   r3, 0
	beq      lbl_80021CCC
	lwz      r4, 0x38(r30)
	bl       free__7JKRHeapFPvP7JKRHeap

lbl_80021CCC:
	lwz      r4, 0x4c(r30)
	cmplwi   r4, 0
	beq      lbl_80021CE0
	lwz      r3, sSystemHeap__7JKRHeap@sda21(r13)
	bl       free__7JKRHeapFPv

lbl_80021CE0:
	lwz      r4, 0x50(r30)
	cmplwi   r4, 0
	beq      lbl_80021CF4
	lwz      r3, sSystemHeap__7JKRHeap@sda21(r13)
	bl       free__7JKRHeapFPv

lbl_80021CF4:
	lis      r3, sVolumeList__13JKRFileLoader@ha
	addi     r4, r30, 0x18
	addi     r3, r3, sVolumeList__13JKRFileLoader@l
	bl       remove__10JSUPtrListFP10JSUPtrLink
	addic.   r0, r30, 0x3c
	beq      lbl_80021D18
	addi     r3, r30, 0x3c
	li       r4, 0
	bl       __dt__10JSUPtrListFv

lbl_80021D18:
	mr       r3, r30
	li       r4, 0
	bl       __dt__13JKRFileLoaderFv
	extsh.   r0, r31
	ble      lbl_80021D34
	mr       r3, r30
	bl       __dl__FPv

lbl_80021D34:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80021D50
 * Size:	000098
 */
bool JKRFileCache::becomeCurrent(const char*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	bl       getDvdPathName__12JKRFileCacheCFPCc
	mr       r31, r3
	bl       DVDChangeDir
	neg      r0, r3
	or       r0, r0, r3
	rlwinm.  r0, r0, 1, 0x1f, 0x1f
	mr       r30, r0
	beq      lbl_80021DBC
	stw      r29, sCurrentVolume__13JKRFileLoader@sda21(r13)
	lwz      r3, sSystemHeap__7JKRHeap@sda21(r13)
	lwz      r4, 0x4c(r29)
	bl       free__7JKRHeapFPv
	stw      r31, 0x4c(r29)
	lwz      r3, 0x4c(r29)
	lbz      r0, 1(r3)
	extsb.   r0, r0
	beq      lbl_80021DC8
	addi     r4, r2, lbl_80516520@sda21
	bl       strcat
	b        lbl_80021DC8

lbl_80021DBC:
	lwz      r3, sSystemHeap__7JKRHeap@sda21(r13)
	mr       r4, r31
	bl       free__7JKRHeapFPv

lbl_80021DC8:
	lwz      r0, 0x24(r1)
	mr       r3, r30
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
 * Address:	80021DE8
 * Size:	000118
 */
void* JKRFileCache::getResource(const char*)
{
	/*
	stwu     r1, -0x110(r1)
	mflr     r0
	stw      r0, 0x114(r1)
	stw      r31, 0x10c(r1)
	li       r31, 0
	stw      r30, 0x108(r1)
	stw      r29, 0x104(r1)
	stw      r28, 0x100(r1)
	mr       r28, r3
	bl       getDvdPathName__12JKRFileCacheCFPCc
	mr       r0, r3
	addi     r3, r1, 8
	mr       r30, r0
	mr       r4, r30
	bl       __ct__10JKRDvdFileFPCc
	lbz      r0, 0x20(r1)
	cmplwi   r0, 0
	beq      lbl_80021EC4
	lwz      r4, 0x94(r1)
	mr       r3, r28
	bl       findCacheBlock__12JKRFileCacheCFUl
	cmplwi   r3, 0
	bne      lbl_80021EB4
	lwz      r3, 0x98(r1)
	li       r4, 0x20
	lwz      r5, 0x38(r28)
	addi     r0, r3, 0x1f
	rlwinm   r29, r0, 0, 0, 0x1a
	mr       r3, r29
	bl       alloc__7JKRHeapFUliP7JKRHeap
	or.      r31, r3, r3
	beq      lbl_80021EC4
	mr       r4, r31
	mr       r5, r29
	addi     r3, r1, 8
	li       r6, 0
	bl       read__7JKRFileFPvll
	lwz      r4, sSystemHeap__7JKRHeap@sda21(r13)
	li       r3, 0x20
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r4, r3, r3
	beq      lbl_80021EA8
	lwz      r4, 0x94(r1)
	mr       r6, r31
	lwz      r5, 0x98(r1)
	bl       __ct__Q212JKRFileCache11CCacheBlockFUlUlPCv
	mr       r4, r3

lbl_80021EA8:
	addi     r3, r28, 0x3c
	bl       append__10JSUPtrListFP10JSUPtrLink
	b        lbl_80021EC4

lbl_80021EB4:
	lwz      r4, 0x10(r3)
	addi     r0, r4, 1
	stw      r0, 0x10(r3)
	lwz      r31, 0x1c(r3)

lbl_80021EC4:
	lwz      r3, sSystemHeap__7JKRHeap@sda21(r13)
	mr       r4, r30
	bl       free__7JKRHeapFPv
	addi     r3, r1, 8
	li       r4, -1
	bl       __dt__10JKRDvdFileFv
	lwz      r0, 0x114(r1)
	mr       r3, r31
	lwz      r31, 0x10c(r1)
	lwz      r30, 0x108(r1)
	lwz      r29, 0x104(r1)
	lwz      r28, 0x100(r1)
	mtlr     r0
	addi     r1, r1, 0x110
	blr
	*/
}

/*
 * --INFO--
 * Address:	80021F00
 * Size:	000090
 */
void* JKRFileCache::getResource(unsigned long, const char*)
{
	/*
	stwu     r1, -0x120(r1)
	mflr     r0
	stw      r0, 0x124(r1)
	stw      r31, 0x11c(r1)
	stw      r30, 0x118(r1)
	mr       r30, r5
	stw      r29, 0x114(r1)
	mr       r29, r3
	lwz      r3, 0x48(r3)
	bl       strlen
	addi     r31, r1, 8
	lwz      r4, 0x48(r29)
	add      r31, r31, r3
	addi     r3, r1, 8
	bl       strcpy
	mr       r3, r29
	mr       r5, r30
	addi     r4, r1, 8
	bl       findFile__12JKRFileCacheCFPcPCc
	clrlwi.  r0, r3, 0x18
	beq      lbl_80021F70
	mr       r3, r29
	mr       r4, r31
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	b        lbl_80021F74

lbl_80021F70:
	li       r3, 0

lbl_80021F74:
	lwz      r0, 0x124(r1)
	lwz      r31, 0x11c(r1)
	lwz      r30, 0x118(r1)
	lwz      r29, 0x114(r1)
	mtlr     r0
	addi     r1, r1, 0x120
	blr
	*/
}

/*
 * --INFO--
 * Address:	80021F90
 * Size:	0000D4
 */
u32 JKRFileCache::readResource(void*, unsigned long, const char*)
{
	/*
	stwu     r1, -0x120(r1)
	mflr     r0
	stw      r0, 0x124(r1)
	stmw     r27, 0x10c(r1)
	mr       r28, r4
	mr       r27, r3
	mr       r29, r5
	mr       r4, r6
	bl       getDvdPathName__12JKRFileCacheCFPCc
	mr       r0, r3
	addi     r3, r1, 8
	mr       r31, r0
	mr       r4, r31
	bl       __ct__10JKRDvdFileFPCc
	li       r30, 0

lbl_80021FCC:
	lbz      r0, 0x20(r1)
	cmplwi   r0, 0
	beq      lbl_80022034
	lwz      r3, 0x98(r1)
	rlwinm   r29, r29, 0, 0, 0x1a
	addi     r0, r3, 0x1f
	rlwinm   r30, r0, 0, 0, 0x1a
	cmplw    r30, r29
	ble      lbl_80021FF4
	mr       r30, r29

lbl_80021FF4:
	lwz      r4, 0x94(r1)
	mr       r3, r27
	bl       findCacheBlock__12JKRFileCacheCFUl
	cmplwi   r3, 0
	bne      lbl_80022020
	mr       r4, r28
	mr       r5, r30
	addi     r3, r1, 8
	li       r6, 0
	bl       read__7JKRFileFPvll
	b        lbl_80021FCC

lbl_80022020:
	lwz      r4, 0x1c(r3)
	mr       r3, r28
	mr       r5, r30
	bl       memcpy
	b        lbl_80021FCC

lbl_80022034:
	lwz      r3, sSystemHeap__7JKRHeap@sda21(r13)
	mr       r4, r31
	bl       free__7JKRHeapFPv
	addi     r3, r1, 8
	li       r4, -1
	bl       __dt__10JKRDvdFileFv
	mr       r3, r30
	lmw      r27, 0x10c(r1)
	lwz      r0, 0x124(r1)
	mtlr     r0
	addi     r1, r1, 0x120
	blr
	*/
}

/*
 * --INFO--
 * Address:	80022064
 * Size:	000090
 */
u32 JKRFileCache::readResource(void*, unsigned long, unsigned long, const char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x120(r1)
	  mflr      r0
	  stw       r0, 0x124(r1)
	  stmw      r27, 0x10C(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r5
	  mr        r30, r7
	  lwz       r3, 0x48(r3)
	  bl        0xA8888
	  addi      r31, r1, 0x8
	  lwz       r4, 0x48(r27)
	  add       r31, r31, r3
	  addi      r3, r1, 0x8
	  bl        0xA87BC
	  mr        r3, r27
	  mr        r5, r30
	  addi      r4, r1, 0x8
	  bl        0x3D4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x78
	  mr        r3, r27
	  mr        r4, r28
	  lwz       r12, 0x0(r27)
	  mr        r5, r29
	  mr        r6, r31
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x7C

	.loc_0x78:
	  li        r3, 0

	.loc_0x7C:
	  lmw       r27, 0x10C(r1)
	  lwz       r0, 0x124(r1)
	  mtlr      r0
	  addi      r1, r1, 0x120
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800220F4
 * Size:	000090
 */
void JKRFileCache::removeResourceAll()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r30, 0x3c(r3)
	b        lbl_80022160

lbl_80022118:
	lwz      r3, 0(r30)
	lwz      r4, 0x38(r29)
	lwz      r3, 0x1c(r3)
	bl       free__7JKRHeapFPvP7JKRHeap
	lwz      r4, 0(r30)
	addi     r3, r29, 0x3c
	bl       remove__10JSUPtrListFP10JSUPtrLink
	mr       r3, r30
	lwz      r30, 0xc(r30)
	lwz      r31, 0(r3)
	cmplwi   r31, 0
	beq      lbl_80022160
	beq      lbl_80022158
	mr       r3, r31
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_80022158:
	mr       r3, r31
	bl       __dl__FPv

lbl_80022160:
	cmplwi   r30, 0
	bne      lbl_80022118
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
 * Address:	80022184
 * Size:	00009C
 */
bool JKRFileCache::removeResource(void* resource)
{
	CCacheBlock* link = findCacheBlock(resource);
	if (link == nullptr) {
		return false;
	}
	link->_10--;
	if (link->_10 == 0) {
		JKRHeap::free(resource, _38);
		m_cacheBlockList.remove(link);
		delete link;
	}
	return true;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	bl       findCacheBlock__12JKRFileCacheCFPCv
	or.      r31, r3, r3
	bne      lbl_800221B8
	li       r3, 0
	b        lbl_80022204

lbl_800221B8:
	lwz      r3, 0x10(r31)
	addic.   r0, r3, -1
	stw      r0, 0x10(r31)
	bne      lbl_80022200
	lwz      r4, 0x38(r29)
	mr       r3, r30
	bl       free__7JKRHeapFPvP7JKRHeap
	mr       r4, r31
	addi     r3, r29, 0x3c
	bl       remove__10JSUPtrListFP10JSUPtrLink
	cmplwi   r31, 0
	beq      lbl_80022200
	beq      lbl_800221F8
	mr       r3, r31
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_800221F8:
	mr       r3, r31
	bl       __dl__FPv

lbl_80022200:
	li       r3, 1

lbl_80022204:
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
 * Address:	80022220
 * Size:	000074
 */
bool JKRFileCache::detachResource(void* resource)
{
	CCacheBlock* link = findCacheBlock(resource);
	if (link == nullptr) {
		return false;
	}
	link->_10--;
	if (link->_10 == 0) {
		m_cacheBlockList.remove(link);
		delete link;
	}
	return true;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	bl       findCacheBlock__12JKRFileCacheCFPCv
	or.      r31, r3, r3
	bne      lbl_8002224C
	li       r3, 0
	b        lbl_8002227C

lbl_8002224C:
	mr       r4, r31
	addi     r3, r30, 0x3c
	bl       remove__10JSUPtrListFP10JSUPtrLink
	cmplwi   r31, 0
	beq      lbl_80022278
	beq      lbl_80022270
	mr       r3, r31
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_80022270:
	mr       r3, r31
	bl       __dl__FPv

lbl_80022278:
	li       r3, 1

lbl_8002227C:
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
u16 JKRFileCache::countFile(const char* p1) const
{
	OSFstEntry dir;
	OSFstEntry file;
	char* path = getDvdPathName(p1);
	int count;
	if (DVDOpenDir(path, &dir)) {
		while (DVDReadDir(&dir, &file)) {
			count++;
		}
		DVDCloseDir(&dir);
	}
	JKRHeap::sSystemHeap->free(path);
	return count;
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	li       r31, 0
	stw      r30, 0x28(r1)
	bl       getDvdPathName__12JKRFileCacheCFPCc
	addi     r4, r1, 0x14
	mr       r30, r3
	bl       DVDOpenDir
	cmpwi    r3, 0
	beq      lbl_8002231C
	b        lbl_80022300

lbl_800222FC:
	addi     r31, r31, 1

lbl_80022300:
	addi     r3, r1, 0x14
	addi     r4, r1, 8
	bl       DVDReadDir
	cmpwi    r3, 0
	bne      lbl_800222FC
	addi     r3, r1, 0x14
	bl       DVDCloseDir

lbl_8002231C:
	lwz      r3, sSystemHeap__7JKRHeap@sda21(r13)
	mr       r4, r30
	bl       free__7JKRHeapFPv
	lwz      r0, 0x34(r1)
	mr       r3, r31
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
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
		finder = nullptr;
	}
	return finder;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	bl       getDvdPathName__12JKRFileCacheCFPCc
	lwz      r4, sSystemHeap__7JKRHeap@sda21(r13)
	mr       r30, r3
	li       r3, 0x24
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r31, r3, r3
	beq      lbl_80022384
	mr       r4, r30
	bl       __ct__12JKRDvdFinderFPCc
	mr       r31, r3

lbl_80022384:
	lwz      r3, sSystemHeap__7JKRHeap@sda21(r13)
	mr       r4, r30
	bl       free__7JKRHeapFPv
	lbz      r0, 0x10(r31)
	cmplwi   r0, 1
	beq      lbl_800223C4
	cmplwi   r31, 0
	beq      lbl_800223BC
	mr       r3, r31
	li       r4, 1
	lwz      r12, 0xc(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_800223BC:
	li       r3, 0
	b        lbl_800223C8

lbl_800223C4:
	mr       r3, r31

lbl_800223C8:
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
 * Address:	800223E0
 * Size:	000048
 */
// JKRFileFinder::~JKRFileFinder()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	or.      r31, r3, r3
// 	beq      lbl_80022410
// 	lis      r5, __vt__13JKRFileFinder@ha
// 	extsh.   r0, r4
// 	addi     r0, r5, __vt__13JKRFileFinder@l
// 	stw      r0, 0xc(r31)
// 	ble      lbl_80022410
// 	bl       __dl__FPv

// lbl_80022410:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r31
// 	lwz      r31, 0xc(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	80022428
 * Size:	00002C
 */
JKRFileCache::CCacheBlock* JKRFileCache::findCacheBlock(const void*) const
{
	/*
	lwz      r5, 0x3c(r3)
	b        lbl_80022444

lbl_80022430:
	lwz      r3, 0(r5)
	lwz      r0, 0x1c(r3)
	cmplw    r0, r4
	beqlr
	lwz      r5, 0xc(r5)

lbl_80022444:
	cmplwi   r5, 0
	bne      lbl_80022430
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80022454
 * Size:	00002C
 */
JKRFileCache::CCacheBlock* JKRFileCache::findCacheBlock(unsigned long) const
{
	/*
	lwz      r5, 0x3c(r3)
	b        lbl_80022470

lbl_8002245C:
	lwz      r3, 0(r5)
	lwz      r0, 0x14(r3)
	cmplw    r4, r0
	beqlr
	lwz      r5, 0xc(r5)

lbl_80022470:
	cmplwi   r5, 0
	bne      lbl_8002245C
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80022480
 * Size:	0003E8
 */
bool JKRFileCache::findFile(char*, const char*) const
{
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
char* JKRFileCache::getDvdPathName(const char*) const
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	lbz      r0, 0(r4)
	stw      r31, 0x1c(r1)
	cmpwi    r0, 0x2f
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	bne      lbl_80022908
	mr       r3, r30
	bl       strlen
	mr       r31, r3
	lwz      r3, 0x48(r29)
	bl       strlen
	addi     r4, r31, 2
	li       r5, 1
	add      r4, r3, r4
	lwz      r3, sSystemHeap__7JKRHeap@sda21(r13)
	bl       alloc__7JKRHeapFUli
	mr       r0, r3
	lwz      r4, 0x48(r29)
	mr       r31, r0
	bl       strcpy
	lbz      r0, 1(r30)
	extsb.   r0, r0
	beq      lbl_8002294C
	lwz      r3, 0x48(r29)
	lbz      r0, 1(r3)
	extsb.   r0, r0
	bne      lbl_800228F8
	mr       r3, r31
	addi     r4, r30, 1
	bl       strcat
	b        lbl_8002294C

lbl_800228F8:
	mr       r3, r31
	mr       r4, r30
	bl       strcat
	b        lbl_8002294C

lbl_80022908:
	mr       r3, r30
	bl       strlen
	mr       r31, r3
	lwz      r3, 0x4c(r29)
	bl       strlen
	addi     r4, r31, 2
	li       r5, 1
	add      r4, r3, r4
	lwz      r3, sSystemHeap__7JKRHeap@sda21(r13)
	bl       alloc__7JKRHeapFUli
	mr       r0, r3
	lwz      r4, 0x4c(r29)
	mr       r31, r0
	bl       strcpy
	mr       r3, r31
	mr       r4, r30
	bl       strcat

lbl_8002294C:
	mr       r3, r29
	mr       r4, r31
	bl       convStrLower__12JKRFileCacheCFPc
	lwz      r0, 0x24(r1)
	mr       r3, r31
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
 * Address:	80022978
 * Size:	000048
 */
void JKRFileCache::convStrLower(char*) const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	b        lbl_800229A0

lbl_80022990:
	extsb    r3, r3
	bl       tolower
	stb      r3, 0(r31)
	addi     r31, r31, 1

lbl_800229A0:
	lbz      r3, 0(r31)
	extsb.   r0, r3
	bne      lbl_80022990
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800229C0
 * Size:	00006C
 */
JKRFileCache::CCacheBlock::CCacheBlock(unsigned long p1, unsigned long dataLength, const void* data)
    : JSULink(this)
    , _10(1)
    , _14(p1)
    , _18(dataLength)
    , _1C(data)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  mr        r4, r28
	  bl        0x3DC8
	  li        r0, 0x1
	  mr        r3, r28
	  stw       r0, 0x10(r28)
	  stw       r29, 0x14(r28)
	  stw       r30, 0x18(r28)
	  stw       r31, 0x1C(r28)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
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
void* JKRFileCache::getNameResource(unsigned long p1, const char* p2) { return getResource(p1, p2); }

/*
 * --INFO--
 * Address:	80022A84
 * Size:	00002C
 */
long JKRFileCache::readFsResource(void* dataBuffer, unsigned long bufferLength, const char* fileName)
{
	return readResource(dataBuffer, bufferLength, fileName);
}

/*
 * --INFO--
 * Address:	80022AB0
 * Size:	00002C
 */
long JKRFileCache::readNameResource(void* dataBuffer, unsigned long bufferLength, unsigned long p3, const char* p4)
{
	return readResource(dataBuffer, bufferLength, p3, p4);
}
