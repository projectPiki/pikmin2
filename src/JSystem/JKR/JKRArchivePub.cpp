#include "JSystem/JKR/JKRArchive.h"
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

/*
 * --INFO--
 * Address:	8001B130
 * Size:	000064
 */
JKRArchive* JKRArchive::mount(const char*, EMountMode, JKRHeap*, EMountDirection)
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
	  bl        0xC1010
	  cmpwi     r3, 0
	  bge-      .loc_0x38
	  li        r3, 0
	  b         .loc_0x48

	.loc_0x38:
	  mr        r4, r29
	  mr        r5, r30
	  mr        r6, r31
	  bl        0xF8

	.loc_0x48:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001B194
 * Size:	0000D8
 */
JKRArchive* JKRArchive::mount(void*, JKRHeap*, EMountDirection)
{
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
 */
JKRArchive* JKRArchive::mount(long, EMountMode, JKRHeap*, EMountDirection)
{
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
void JKRArchive::becomeCurrent(const char*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lbz      r0, 0(r4)
	stw      r31, 0xc(r1)
	mr       r31, r3
	cmpwi    r0, 0x2f
	bne      lbl_8001B484
	lbzu     r0, 1(r4)
	extsb.   r0, r0
	bne      lbl_8001B474
	li       r4, 0

lbl_8001B474:
	mr       r3, r31
	li       r5, 0
	bl       findDirectory__10JKRArchiveCFPCcUl
	b        lbl_8001B48C

lbl_8001B484:
	lwz      r5, sCurrentDirID__10JKRArchive@sda21(r13)
	bl       findDirectory__10JKRArchiveCFPCcUl

lbl_8001B48C:
	neg      r0, r3
	or       r0, r0, r3
	rlwinm.  r4, r0, 1, 0x1f, 0x1f
	beq      lbl_8001B4B4
	stw      r31, sCurrentVolume__13JKRFileLoader@sda21(r13)
	lwz      r0, 0x48(r31)
	subf     r0, r0, r3
	srawi    r0, r0, 4
	addze    r0, r0
	stw      r0, sCurrentDirID__10JKRArchive@sda21(r13)

lbl_8001B4B4:
	lwz      r0, 0x14(r1)
	mr       r3, r4
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8001B4CC
 * Size:	000078
 */
void JKRArchive::getDirEntry(JKRArchive::SDirEntry*, unsigned long) const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r4, r5
	stw      r30, 8(r1)
	mr       r30, r3
	bl       findIdxResource__10JKRArchiveCFUl
	cmplwi   r3, 0
	bne      lbl_8001B500
	li       r3, 0
	b        lbl_8001B52C

lbl_8001B500:
	lwz      r0, 4(r3)
	lwz      r4, 0x54(r30)
	srwi     r0, r0, 0x18
	stb      r0, 0(r31)
	lhz      r0, 0(r3)
	sth      r0, 2(r31)
	lwz      r0, 4(r3)
	li       r3, 1
	clrlwi   r0, r0, 8
	add      r0, r4, r0
	stw      r0, 4(r31)

lbl_8001B52C:
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
 * Address:	8001B544
 * Size:	0000B8
 */
void* JKRArchive::getGlbResource(unsigned long, const char*, JKRArchive*)
{
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
 */
void* JKRArchive::getResource(const char*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lbz      r0, 0(r4)
	stw      r31, 0xc(r1)
	mr       r31, r3
	cmpwi    r0, 0x2f
	bne      lbl_8001B630
	addi     r4, r4, 1
	li       r5, 0
	bl       findFsResource__10JKRArchiveCFPCcUl
	mr       r4, r3
	b        lbl_8001B63C

lbl_8001B630:
	lwz      r5, sCurrentDirID__10JKRArchive@sda21(r13)
	bl       findFsResource__10JKRArchiveCFPCcUl
	mr       r4, r3

lbl_8001B63C:
	cmplwi   r4, 0
	beq      lbl_8001B660
	lwz      r12, 0(r31)
	mr       r3, r31
	li       r5, 0
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	b        lbl_8001B664

lbl_8001B660:
	li       r3, 0

lbl_8001B664:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8001B678
 * Size:	000080
 */
void* JKRArchive::getResource(unsigned long, const char*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	beq      lbl_8001B6A0
	addis    r0, r4, 0xc0c1
	cmplwi   r0, 0x3f3f
	bne      lbl_8001B6B4

lbl_8001B6A0:
	mr       r3, r31
	mr       r4, r5
	bl       findNameResource__10JKRArchiveCFPCc
	mr       r4, r3
	b        lbl_8001B6BC

lbl_8001B6B4:
	bl       findTypeResource__10JKRArchiveCFUlPCc
	mr       r4, r3

lbl_8001B6BC:
	cmplwi   r4, 0
	beq      lbl_8001B6E0
	lwz      r12, 0(r31)
	mr       r3, r31
	li       r5, 0
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	b        lbl_8001B6E4

lbl_8001B6E0:
	li       r3, 0

lbl_8001B6E4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8001B6F8
 * Size:	000054
 */
void* JKRArchive::getIdxResource(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       findIdxResource__10JKRArchiveCFUl
	or.      r4, r3, r3
	beq      lbl_8001B734
	lwz      r12, 0(r31)
	mr       r3, r31
	li       r5, 0
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	b        lbl_8001B738

lbl_8001B734:
	li       r3, 0

lbl_8001B738:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8001B74C
 * Size:	0000AC
 */
void JKRArchive::readResource(void*, unsigned long, unsigned long, const char*)
{
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
void JKRArchive::readResource(void*, unsigned long, const char*)
{
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
 */
void JKRArchive::readResource(void*, unsigned long, unsigned short)
{
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
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r0, 0x44(r3)
	cmplwi   r0, 0
	beq      lbl_8001B990
	lbz      r0, 0x3c(r28)
	cmplwi   r0, 1
	beq      lbl_8001B990
	lwz      r30, 0x4c(r28)
	li       r29, 0
	li       r31, 0
	b        lbl_8001B980

lbl_8001B960:
	lwz      r3, 0x10(r30)
	cmplwi   r3, 0
	beq      lbl_8001B978
	lwz      r4, 0x38(r28)
	bl       free__7JKRHeapFPvP7JKRHeap
	stw      r31, 0x10(r30)

lbl_8001B978:
	addi     r30, r30, 0x14
	addi     r29, r29, 1

lbl_8001B980:
	lwz      r3, 0x44(r28)
	lwz      r0, 8(r3)
	cmplw    r29, r0
	blt      lbl_8001B960

lbl_8001B990:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8001B9B0
 * Size:	000060
 */
void JKRArchive::removeResource(void*)
{
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
 */
void JKRArchive::detachResource(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       findPtrResource__10JKRArchiveCFPCv
	cmplwi   r3, 0
	bne      lbl_8001BA30
	li       r3, 0
	b        lbl_8001BA3C

lbl_8001BA30:
	li       r0, 0
	stw      r0, 0x10(r3)
	li       r3, 1

lbl_8001BA3C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8001BA4C
 * Size:	000034
 */
void JKRArchive::getResSize(const void*) const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       findPtrResource__10JKRArchiveCFPCv
	cmplwi   r3, 0
	bne      lbl_8001BA6C
	li       r3, -1
	b        lbl_8001BA70

lbl_8001BA6C:
	lwz      r3, 0xc(r3)

lbl_8001BA70:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8001BA80
 * Size:	000060
 */
void JKRArchive::countFile(const char*) const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lbz      r0, 0(r4)
	cmpwi    r0, 0x2f
	bne      lbl_8001BAB4
	lbzu     r0, 1(r4)
	extsb.   r0, r0
	bne      lbl_8001BAA8
	li       r4, 0

lbl_8001BAA8:
	li       r5, 0
	bl       findDirectory__10JKRArchiveCFPCcUl
	b        lbl_8001BABC

lbl_8001BAB4:
	lwz      r5, sCurrentDirID__10JKRArchive@sda21(r13)
	bl       findDirectory__10JKRArchiveCFPCcUl

lbl_8001BABC:
	cmplwi   r3, 0
	beq      lbl_8001BACC
	lhz      r3, 0xa(r3)
	b        lbl_8001BAD0

lbl_8001BACC:
	li       r3, 0

lbl_8001BAD0:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8001BAE0
 * Size:	0000AC
 */
void JKRArchive::getFirstFile(const char*) const
{
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
void JKRArchive::getExpandedResSize(const void*) const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
