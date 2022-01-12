#include "JSystem/JKR/JKRArchive.h"
#include "JSystem/JKR/JKRFileLoader.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .sbss # 0x80514D80 - 0x80516360
    .global sCurrentDirID__10JKRArchive
    sCurrentDirID__10JKRArchive:
        .skip 0x8
*/

/*
 * --INFO--
 * Address:	8001A4BC
 * Size:	0000A8
 */
JKRArchive::JKRArchive(long, JKRArchive::EMountMode)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	bl       __ct__13JKRFileLoaderFv
	lis      r3, __vt__10JKRArchive@ha
	li       r4, 0
	addi     r3, r3, __vt__10JKRArchive@l
	li       r0, 1
	stw      r3, 0(r29)
	mr       r3, r29
	stb      r4, 0x30(r29)
	stb      r31, 0x3c(r29)
	stw      r0, 0x34(r29)
	stw      r0, 0x58(r29)
	bl       findFromRoot__7JKRHeapFPv
	stw      r3, 0x38(r29)
	lwz      r0, 0x38(r29)
	cmplwi   r0, 0
	bne      lbl_8001A528
	lwz      r0, sCurrentHeap__7JKRHeap@sda21(r13)
	stw      r0, 0x38(r29)

lbl_8001A528:
	stw      r30, 0x40(r29)
	lwz      r0, sCurrentVolume__13JKRFileLoader@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8001A544
	li       r0, 0
	stw      r29, sCurrentVolume__13JKRFileLoader@sda21(r13)
	stw      r0, sCurrentDirID__10JKRArchive@sda21(r13)

lbl_8001A544:
	lwz      r0, 0x24(r1)
	mr       r3, r29
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
 * Address:	8001A564
 * Size:	000060
 */
JKRArchive::~JKRArchive()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8001A5A8
	lis      r5, __vt__10JKRArchive@ha
	li       r4, 0
	addi     r0, r5, __vt__10JKRArchive@l
	stw      r0, 0(r30)
	bl       __dt__13JKRFileLoaderFv
	extsh.   r0, r31
	ble      lbl_8001A5A8
	mr       r3, r30
	bl       __dl__FPv

lbl_8001A5A8:
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
 * Address:	8001A5C4
 * Size:	00004C
 */
bool JKRArchive::isSameName(JKRArchive::CArcName& archiveName, u32 nameTableOffset, u16 hash) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r6,0,16,31
	  lhz       r6, 0x0(r4)
	  cmplw     r6, r0
	  beq-      .loc_0x24
	  li        r3, 0
	  b         .loc_0x3C

	.loc_0x24:
	  lwz       r0, 0x54(r3)
	  addi      r4, r4, 0x4
	  add       r3, r0, r5
	  bl        0xB00CC
	  cntlzw    r0, r3
	  rlwinm    r3,r0,27,5,31

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001A610
 * Size:	00031C
 */
u32 JKRArchive::findDirectory(const char* directoryName, u32) const
{
	/*
	stwu     r1, -0x450(r1)
	mflr     r0
	cmplwi   r4, 0
	stw      r0, 0x454(r1)
	stmw     r25, 0x434(r1)
	mr       r28, r3
	mr       r25, r5
	bne      lbl_8001A640
	lwz      r3, 0x48(r28)
	slwi     r0, r25, 4
	add      r3, r3, r0
	b        lbl_8001A918

lbl_8001A640:
	addi     r3, r1, 0x324
	li       r5, 0x2f
	bl       store__Q210JKRArchive8CArcNameFPCcc
	lwz      r5, 0x48(r28)
	slwi     r0, r25, 4
	lwz      r4, 0x4c(r28)
	mr       r31, r3
	add      r29, r5, r0
	lwz      r27, 0x54(r28)
	lwz      r0, 0xc(r29)
	addi     r25, r1, 0x328
	li       r30, 0
	mulli    r0, r0, 0x14
	add      r26, r4, r0
	b        lbl_8001A908

lbl_8001A67C:
	lhz      r3, 0x324(r1)
	lhz      r0, 2(r26)
	lwz      r4, 4(r26)
	cmplw    r3, r0
	clrlwi   r0, r4, 8
	beq      lbl_8001A69C
	li       r0, 0
	b        lbl_8001A6B0

lbl_8001A69C:
	mr       r4, r25
	add      r3, r27, r0
	bl       strcmp
	cntlzw   r0, r3
	srwi     r0, r0, 5

lbl_8001A6B0:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8001A900
	lwz      r0, 4(r26)
	rlwinm.  r0, r0, 8, 0x1e, 0x1e
	beq      lbl_8001A914
	cmplwi   r31, 0
	lwz      r25, 8(r26)
	bne      lbl_8001A6E0
	lwz      r3, 0x48(r28)
	slwi     r0, r25, 4
	add      r3, r3, r0
	b        lbl_8001A918

lbl_8001A6E0:
	mr       r4, r31
	addi     r3, r1, 0x21c
	li       r5, 0x2f
	bl       store__Q210JKRArchive8CArcNameFPCcc
	lwz      r5, 0x48(r28)
	slwi     r0, r25, 4
	lwz      r4, 0x4c(r28)
	mr       r30, r3
	add      r31, r5, r0
	lwz      r27, 0x54(r28)
	lwz      r0, 0xc(r31)
	addi     r29, r1, 0x220
	li       r26, 0
	mulli    r0, r0, 0x14
	add      r25, r4, r0
	b        lbl_8001A8EC

lbl_8001A720:
	lhz      r3, 0x21c(r1)
	lhz      r0, 2(r25)
	lwz      r4, 4(r25)
	cmplw    r3, r0
	clrlwi   r0, r4, 8
	beq      lbl_8001A740
	li       r0, 0
	b        lbl_8001A754

lbl_8001A740:
	mr       r4, r29
	add      r3, r27, r0
	bl       strcmp
	cntlzw   r0, r3
	srwi     r0, r0, 5

lbl_8001A754:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8001A8E4
	lwz      r0, 4(r25)
	rlwinm.  r0, r0, 8, 0x1e, 0x1e
	beq      lbl_8001A8F8
	cmplwi   r30, 0
	lwz      r25, 8(r25)
	bne      lbl_8001A784
	lwz      r3, 0x48(r28)
	slwi     r0, r25, 4
	add      r3, r3, r0
	b        lbl_8001A918

lbl_8001A784:
	mr       r4, r30
	addi     r3, r1, 0x114
	li       r5, 0x2f
	bl       store__Q210JKRArchive8CArcNameFPCcc
	lwz      r5, 0x48(r28)
	slwi     r0, r25, 4
	lwz      r4, 0x4c(r28)
	mr       r29, r3
	add      r27, r5, r0
	li       r25, 0
	lwz      r0, 0xc(r27)
	mulli    r0, r0, 0x14
	add      r26, r4, r0
	b        lbl_8001A8D0

lbl_8001A7BC:
	lwz      r0, 4(r26)
	addi     r3, r1, 0x114
	lhz      r31, 2(r26)
	clrlwi   r30, r0, 8
	bl       getHash__Q210JKRArchive8CArcNameCFv
	clrlwi   r0, r3, 0x10
	cmplw    r0, r31
	beq      lbl_8001A7E4
	li       r0, 0
	b        lbl_8001A804

lbl_8001A7E4:
	addi     r3, r1, 0x114
	bl       getString__Q210JKRArchive8CArcNameCFv
	lwz      r0, 0x54(r28)
	mr       r4, r3
	add      r3, r0, r30
	bl       strcmp
	cntlzw   r0, r3
	srwi     r0, r0, 5

lbl_8001A804:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8001A8C8
	lwz      r0, 4(r26)
	rlwinm.  r0, r0, 8, 0x1e, 0x1e
	beq      lbl_8001A8DC
	lwz      r25, 8(r26)
	cmplwi   r29, 0
	stw      r29, 8(r1)
	bne      lbl_8001A838
	lwz      r3, 0x48(r28)
	slwi     r0, r25, 4
	add      r3, r3, r0
	b        lbl_8001A918

lbl_8001A838:
	addi     r3, r1, 0xc
	addi     r4, r1, 8
	li       r5, 0x2f
	bl       __ct__Q210JKRArchive8CArcNameFPPCcc
	lwz      r4, 0x48(r28)
	slwi     r0, r25, 4
	lwz      r3, 0x4c(r28)
	li       r25, 0
	add      r27, r4, r0
	lwz      r0, 0xc(r27)
	mulli    r0, r0, 0x14
	add      r26, r3, r0
	b        lbl_8001A8B4

lbl_8001A86C:
	lwz      r0, 4(r26)
	mr       r3, r28
	lhz      r6, 2(r26)
	addi     r4, r1, 0xc
	clrlwi   r5, r0, 8
	bl       isSameName__10JKRArchiveCFRQ210JKRArchive8CArcNameUlUs
	clrlwi.  r0, r3, 0x18
	beq      lbl_8001A8AC
	lwz      r0, 4(r26)
	rlwinm.  r0, r0, 8, 0x1e, 0x1e
	beq      lbl_8001A8C0
	lwz      r4, 8(r1)
	mr       r3, r28
	lwz      r5, 8(r26)
	bl       findDirectory__10JKRArchiveCFPCcUl
	b        lbl_8001A918

lbl_8001A8AC:
	addi     r26, r26, 0x14
	addi     r25, r25, 1

lbl_8001A8B4:
	lhz      r0, 0xa(r27)
	cmpw     r25, r0
	blt      lbl_8001A86C

lbl_8001A8C0:
	li       r3, 0
	b        lbl_8001A918

lbl_8001A8C8:
	addi     r26, r26, 0x14
	addi     r25, r25, 1

lbl_8001A8D0:
	lhz      r0, 0xa(r27)
	cmpw     r25, r0
	blt      lbl_8001A7BC

lbl_8001A8DC:
	li       r3, 0
	b        lbl_8001A918

lbl_8001A8E4:
	addi     r25, r25, 0x14
	addi     r26, r26, 1

lbl_8001A8EC:
	lhz      r0, 0xa(r31)
	cmpw     r26, r0
	blt      lbl_8001A720

lbl_8001A8F8:
	li       r3, 0
	b        lbl_8001A918

lbl_8001A900:
	addi     r26, r26, 0x14
	addi     r30, r30, 1

lbl_8001A908:
	lhz      r0, 0xa(r29)
	cmpw     r30, r0
	blt      lbl_8001A67C

lbl_8001A914:
	li       r3, 0

lbl_8001A918:
	lmw      r25, 0x434(r1)
	lwz      r0, 0x454(r1)
	mtlr     r0
	addi     r1, r1, 0x450
	blr
	*/
}

/*
 * --INFO--
 * Address:	8001A92C
 * Size:	000044
 */
JKRArchive::CArcName::CArcName(const char**, char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r4, 0(r4)
	bl       store__Q210JKRArchive8CArcNameFPCcc
	stw      r3, 0(r31)
	mr       r3, r30
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
 * Address:	8001A970
 * Size:	000008
 */
const char* JKRArchive::CArcName::getString() const
{
	return m_string;
	/*
	addi     r3, r3, 4
	blr
	*/
}

/*
 * --INFO--
 * Address:	8001A978
 * Size:	000008
 */
u16 JKRArchive::CArcName::getHash() const
{
	return m_hash;
	/*
	lhz      r3, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8001A980
 * Size:	0000F4
 */
JKRArchive::SDIFileEntry* JKRArchive::findTypeResource(u32, const char*) const
{
	/*
	stwu     r1, -0x130(r1)
	mflr     r0
	stw      r0, 0x134(r1)
	stmw     r27, 0x11c(r1)
	or.      r27, r4, r4
	mr       r28, r3
	beq      lbl_8001AA5C
	mr       r4, r5
	addi     r3, r1, 8
	bl       store__Q210JKRArchive8CArcNameFPCc
	lwz      r3, 0x44(r28)
	lwz      r30, 0x48(r28)
	lwz      r0, 0(r3)
	mtctr    r0
	cmplwi   r0, 0
	ble      lbl_8001A9D8

lbl_8001A9C0:
	lwz      r0, 0(r30)
	cmplw    r0, r27
	bne      lbl_8001A9D0
	b        lbl_8001A9DC

lbl_8001A9D0:
	addi     r30, r30, 0x10
	bdnz     lbl_8001A9C0

lbl_8001A9D8:
	li       r30, 0

lbl_8001A9DC:
	cmplwi   r30, 0
	beq      lbl_8001AA5C
	lwz      r0, 0xc(r30)
	addi     r29, r1, 0xc
	lwz      r3, 0x4c(r28)
	li       r27, 0
	mulli    r0, r0, 0x14
	lwz      r31, 0x54(r28)
	add      r28, r3, r0
	b        lbl_8001AA50

lbl_8001AA04:
	lhz      r3, 8(r1)
	lhz      r0, 2(r28)
	lwz      r4, 4(r28)
	cmplw    r3, r0
	clrlwi   r0, r4, 8
	beq      lbl_8001AA24
	li       r0, 0
	b        lbl_8001AA38

lbl_8001AA24:
	mr       r4, r29
	add      r3, r31, r0
	bl       strcmp
	cntlzw   r0, r3
	srwi     r0, r0, 5

lbl_8001AA38:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8001AA48
	mr       r3, r28
	b        lbl_8001AA60

lbl_8001AA48:
	addi     r28, r28, 0x14
	addi     r27, r27, 1

lbl_8001AA50:
	lhz      r0, 0xa(r30)
	cmpw     r27, r0
	blt      lbl_8001AA04

lbl_8001AA5C:
	li       r3, 0

lbl_8001AA60:
	lmw      r27, 0x11c(r1)
	lwz      r0, 0x134(r1)
	mtlr     r0
	addi     r1, r1, 0x130
	blr
	*/
}

/*
 * --INFO--
 * Address:	8001AA74
 * Size:	000340
 */
JKRArchive::SDIFileEntry* JKRArchive::findFsResource(const char*, u32) const
{
	/*
	stwu     r1, -0x450(r1)
	mflr     r0
	cmplwi   r4, 0
	stw      r0, 0x454(r1)
	stmw     r25, 0x434(r1)
	mr       r28, r3
	mr       r25, r5
	beq      lbl_8001AD9C
	addi     r3, r1, 0x324
	li       r5, 0x2f
	bl       store__Q210JKRArchive8CArcNameFPCcc
	lwz      r5, 0x48(r28)
	slwi     r0, r25, 4
	lwz      r4, 0x4c(r28)
	mr       r31, r3
	add      r29, r5, r0
	lwz      r27, 0x54(r28)
	lwz      r0, 0xc(r29)
	addi     r25, r1, 0x328
	li       r30, 0
	mulli    r0, r0, 0x14
	add      r26, r4, r0
	b        lbl_8001AD90

lbl_8001AAD0:
	lhz      r3, 0x324(r1)
	lhz      r0, 2(r26)
	lwz      r4, 4(r26)
	cmplw    r3, r0
	clrlwi   r0, r4, 8
	beq      lbl_8001AAF0
	li       r0, 0
	b        lbl_8001AB04

lbl_8001AAF0:
	mr       r4, r25
	add      r3, r27, r0
	bl       strcmp
	cntlzw   r0, r3
	srwi     r0, r0, 5

lbl_8001AB04:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8001AD88
	lwz      r0, 4(r26)
	rlwinm.  r0, r0, 8, 0x1e, 0x1e
	beq      lbl_8001AD70
	cmplwi   r31, 0
	lwz      r25, 8(r26)
	beq      lbl_8001AD68
	mr       r4, r31
	addi     r3, r1, 0x21c
	li       r5, 0x2f
	bl       store__Q210JKRArchive8CArcNameFPCcc
	lwz      r5, 0x48(r28)
	slwi     r0, r25, 4
	lwz      r4, 0x4c(r28)
	mr       r30, r3
	add      r31, r5, r0
	lwz      r27, 0x54(r28)
	lwz      r0, 0xc(r31)
	addi     r29, r1, 0x220
	li       r26, 0
	mulli    r0, r0, 0x14
	add      r25, r4, r0
	b        lbl_8001AD5C

lbl_8001AB64:
	lhz      r3, 0x21c(r1)
	lhz      r0, 2(r25)
	lwz      r4, 4(r25)
	cmplw    r3, r0
	clrlwi   r0, r4, 8
	beq      lbl_8001AB84
	li       r0, 0
	b        lbl_8001AB98

lbl_8001AB84:
	mr       r4, r29
	add      r3, r27, r0
	bl       strcmp
	cntlzw   r0, r3
	srwi     r0, r0, 5

lbl_8001AB98:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8001AD54
	lwz      r0, 4(r25)
	rlwinm.  r0, r0, 8, 0x1e, 0x1e
	beq      lbl_8001AD3C
	cmplwi   r30, 0
	lwz      r25, 8(r25)
	beq      lbl_8001AD34
	mr       r4, r30
	addi     r3, r1, 0x114
	li       r5, 0x2f
	bl       store__Q210JKRArchive8CArcNameFPCcc
	lwz      r5, 0x48(r28)
	slwi     r0, r25, 4
	lwz      r4, 0x4c(r28)
	mr       r29, r3
	add      r27, r5, r0
	li       r25, 0
	lwz      r0, 0xc(r27)
	mulli    r0, r0, 0x14
	add      r26, r4, r0
	b        lbl_8001AD28

lbl_8001ABF0:
	lwz      r0, 4(r26)
	addi     r3, r1, 0x114
	lhz      r31, 2(r26)
	clrlwi   r30, r0, 8
	bl       getHash__Q210JKRArchive8CArcNameCFv
	clrlwi   r0, r3, 0x10
	cmplw    r0, r31
	beq      lbl_8001AC18
	li       r0, 0
	b        lbl_8001AC38

lbl_8001AC18:
	addi     r3, r1, 0x114
	bl       getString__Q210JKRArchive8CArcNameCFv
	lwz      r0, 0x54(r28)
	mr       r4, r3
	add      r3, r0, r30
	bl       strcmp
	cntlzw   r0, r3
	srwi     r0, r0, 5

lbl_8001AC38:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8001AD20
	lwz      r0, 4(r26)
	rlwinm.  r0, r0, 8, 0x1e, 0x1e
	beq      lbl_8001AD08
	lwz      r25, 8(r26)
	cmplwi   r29, 0
	stw      r29, 8(r1)
	beq      lbl_8001AD00
	addi     r3, r1, 0xc
	addi     r4, r1, 8
	li       r5, 0x2f
	bl       __ct__Q210JKRArchive8CArcNameFPPCcc
	lwz      r4, 0x48(r28)
	slwi     r0, r25, 4
	lwz      r3, 0x4c(r28)
	li       r25, 0
	add      r27, r4, r0
	lwz      r0, 0xc(r27)
	mulli    r0, r0, 0x14
	add      r26, r3, r0
	b        lbl_8001ACF4

lbl_8001AC90:
	lwz      r0, 4(r26)
	mr       r3, r28
	lhz      r6, 2(r26)
	addi     r4, r1, 0xc
	clrlwi   r5, r0, 8
	bl       isSameName__10JKRArchiveCFRQ210JKRArchive8CArcNameUlUs
	clrlwi.  r0, r3, 0x18
	beq      lbl_8001ACEC
	lwz      r0, 4(r26)
	rlwinm.  r0, r0, 8, 0x1e, 0x1e
	beq      lbl_8001ACD0
	lwz      r4, 8(r1)
	mr       r3, r28
	lwz      r5, 8(r26)
	bl       findFsResource__10JKRArchiveCFPCcUl
	b        lbl_8001ADA0

lbl_8001ACD0:
	lwz      r0, 8(r1)
	cmplwi   r0, 0
	bne      lbl_8001ACE4
	mr       r3, r26
	b        lbl_8001ADA0

lbl_8001ACE4:
	li       r3, 0
	b        lbl_8001ADA0

lbl_8001ACEC:
	addi     r26, r26, 0x14
	addi     r25, r25, 1

lbl_8001ACF4:
	lhz      r0, 0xa(r27)
	cmpw     r25, r0
	blt      lbl_8001AC90

lbl_8001AD00:
	li       r3, 0
	b        lbl_8001ADA0

lbl_8001AD08:
	cmplwi   r29, 0
	bne      lbl_8001AD18
	mr       r3, r26
	b        lbl_8001ADA0

lbl_8001AD18:
	li       r3, 0
	b        lbl_8001ADA0

lbl_8001AD20:
	addi     r26, r26, 0x14
	addi     r25, r25, 1

lbl_8001AD28:
	lhz      r0, 0xa(r27)
	cmpw     r25, r0
	blt      lbl_8001ABF0

lbl_8001AD34:
	li       r3, 0
	b        lbl_8001ADA0

lbl_8001AD3C:
	cmplwi   r30, 0
	bne      lbl_8001AD4C
	mr       r3, r25
	b        lbl_8001ADA0

lbl_8001AD4C:
	li       r3, 0
	b        lbl_8001ADA0

lbl_8001AD54:
	addi     r25, r25, 0x14
	addi     r26, r26, 1

lbl_8001AD5C:
	lhz      r0, 0xa(r31)
	cmpw     r26, r0
	blt      lbl_8001AB64

lbl_8001AD68:
	li       r3, 0
	b        lbl_8001ADA0

lbl_8001AD70:
	cmplwi   r31, 0
	bne      lbl_8001AD80
	mr       r3, r26
	b        lbl_8001ADA0

lbl_8001AD80:
	li       r3, 0
	b        lbl_8001ADA0

lbl_8001AD88:
	addi     r26, r26, 0x14
	addi     r30, r30, 1

lbl_8001AD90:
	lhz      r0, 0xa(r29)
	cmpw     r30, r0
	blt      lbl_8001AAD0

lbl_8001AD9C:
	li       r3, 0

lbl_8001ADA0:
	lmw      r25, 0x434(r1)
	lwz      r0, 0x454(r1)
	mtlr     r0
	addi     r1, r1, 0x450
	blr
	*/
}

/*
 * --INFO--
 * Address:	8001ADB4
 * Size:	000028
 */
JKRArchive::SDIFileEntry* JKRArchive::findIdxResource(u32) const
{
	/*
	lwz      r5, 0x44(r3)
	lwz      r0, 8(r5)
	cmplw    r4, r0
	bge      lbl_8001ADD4
	mulli    r0, r4, 0x14
	lwz      r3, 0x4c(r3)
	add      r3, r3, r0
	blr

lbl_8001ADD4:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8001ADDC
 * Size:	0000A4
 */
JKRArchive::SDIFileEntry* JKRArchive::findNameResource(const char*) const
{
	/*
	stwu     r1, -0x130(r1)
	mflr     r0
	stw      r0, 0x134(r1)
	stmw     r27, 0x11c(r1)
	mr       r27, r3
	lwz      r28, 0x4c(r27)
	addi     r3, r1, 8
	bl       store__Q210JKRArchive8CArcNameFPCc
	lwz      r30, 0x54(r27)
	addi     r29, r1, 0xc
	lwz      r31, 0x44(r27)
	li       r27, 0
	b        lbl_8001AE5C

lbl_8001AE10:
	lhz      r3, 8(r1)
	lhz      r0, 2(r28)
	lwz      r4, 4(r28)
	cmplw    r3, r0
	clrlwi   r0, r4, 8
	beq      lbl_8001AE30
	li       r0, 0
	b        lbl_8001AE44

lbl_8001AE30:
	mr       r4, r29
	add      r3, r30, r0
	bl       strcmp
	cntlzw   r0, r3
	srwi     r0, r0, 5

lbl_8001AE44:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8001AE54
	mr       r3, r28
	b        lbl_8001AE6C

lbl_8001AE54:
	addi     r28, r28, 0x14
	addi     r27, r27, 1

lbl_8001AE5C:
	lwz      r0, 8(r31)
	cmplw    r27, r0
	blt      lbl_8001AE10
	li       r3, 0

lbl_8001AE6C:
	lmw      r27, 0x11c(r1)
	lwz      r0, 0x134(r1)
	mtlr     r0
	addi     r1, r1, 0x130
	blr
	*/
}

/*
 * --INFO--
 * Address:	8001AE80
 * Size:	000034
 */
JKRArchive::SDIFileEntry* JKRArchive::findPtrResource(const void*) const
{
	/*
	lwz      r5, 0x44(r3)
	lwz      r3, 0x4c(r3)
	lwz      r0, 8(r5)
	mtctr    r0
	cmplwi   r0, 0
	ble      lbl_8001AEAC

lbl_8001AE98:
	lwz      r0, 0x10(r3)
	cmplw    r0, r4
	beqlr
	addi     r3, r3, 0x14
	bdnz     lbl_8001AE98

lbl_8001AEAC:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8001AEB4
 * Size:	000080
 */
JKRArchive::SDIFileEntry* JKRArchive::findIdResource(u16) const
{
	/*
	clrlwi   r5, r4, 0x10
	cmplwi   r5, 0xffff
	beq      lbl_8001AF2C
	mulli    r0, r5, 0x14
	lwz      r6, 0x4c(r3)
	add      r7, r6, r0
	lhz      r0, 0(r7)
	cmplw    r0, r5
	bne      lbl_8001AEEC
	lwz      r0, 4(r7)
	rlwinm.  r0, r0, 8, 0x1f, 0x1f
	beq      lbl_8001AEEC
	mr       r3, r7
	blr

lbl_8001AEEC:
	lwz      r5, 0x44(r3)
	clrlwi   r3, r4, 0x10
	lwz      r0, 8(r5)
	mtctr    r0
	cmplwi   r0, 0
	ble      lbl_8001AF2C

lbl_8001AF04:
	lhz      r0, 0(r6)
	cmplw    r0, r3
	bne      lbl_8001AF24
	lwz      r0, 4(r6)
	rlwinm.  r0, r0, 8, 0x1f, 0x1f
	beq      lbl_8001AF24
	mr       r3, r6
	blr

lbl_8001AF24:
	addi     r6, r6, 0x14
	bdnz     lbl_8001AF04

lbl_8001AF2C:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8001AF34
 * Size:	000098
 */
void JKRArchive::CArcName::store(const char*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, 0
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	sth      r0, 0(r3)
	b        lbl_8001AF94

lbl_8001AF64:
	extsb    r3, r3
	bl       tolower
	lhz      r0, 0(r29)
	cmpwi    r31, 0x100
	mulli    r0, r0, 3
	add      r0, r3, r0
	sth      r0, 0(r29)
	bge      lbl_8001AF90
	addi     r0, r31, 4
	addi     r31, r31, 1
	stbx     r3, r29, r0

lbl_8001AF90:
	addi     r30, r30, 1

lbl_8001AF94:
	lbz      r3, 0(r30)
	extsb.   r0, r3
	bne      lbl_8001AF64
	sth      r31, 2(r29)
	add      r3, r29, r31
	li       r0, 0
	stb      r0, 4(r3)
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
 * Address:	8001AFCC
 * Size:	0000C8
 */
char* JKRArchive::CArcName::store(const char*, char)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, 0
	stw      r31, 0x1c(r1)
	extsb    r31, r5
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	sth      r0, 0(r3)
	b        lbl_8001B034

lbl_8001B004:
	extsb    r3, r3
	bl       tolower
	lhz      r0, 0(r28)
	cmpwi    r30, 0x100
	mulli    r0, r0, 3
	add      r0, r3, r0
	sth      r0, 0(r28)
	bge      lbl_8001B030
	addi     r0, r30, 4
	addi     r30, r30, 1
	stbx     r3, r28, r0

lbl_8001B030:
	addi     r29, r29, 1

lbl_8001B034:
	lbz      r3, 0(r29)
	extsb.   r0, r3
	beq      lbl_8001B04C
	extsb    r0, r3
	cmpw     r0, r31
	bne      lbl_8001B004

lbl_8001B04C:
	lbz      r0, 0(r29)
	add      r3, r28, r30
	sth      r30, 2(r28)
	li       r4, 0
	extsb.   r0, r0
	stb      r4, 4(r3)
	bne      lbl_8001B070
	li       r3, 0
	b        lbl_8001B074

lbl_8001B070:
	addi     r3, r29, 1

lbl_8001B074:
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
 * Address:	8001B094
 * Size:	00004C
 */
void JKRArchive::setExpandSize(JKRArchive::SDIFileEntry*, unsigned long)
{
	/*
	lwz      r0, 0x4c(r3)
	lis      r6, 0x66666667@ha
	lwz      r7, 0x50(r3)
	addi     r6, r6, 0x66666667@l
	subf     r0, r0, r4
	mulhw    r0, r6, r0
	cmplwi   r7, 0
	srawi    r0, r0, 3
	srwi     r4, r0, 0x1f
	add      r4, r0, r4
	beqlr
	lwz      r3, 0x44(r3)
	lwz      r0, 8(r3)
	cmplw    r4, r0
	blt      lbl_8001B0D4
	blr

lbl_8001B0D4:
	slwi     r0, r4, 2
	stwx     r5, r7, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8001B0E0
 * Size:	000050
 */
void JKRArchive::getExpandSize(JKRArchive::SDIFileEntry*) const
{
	/*
	lwz      r0, 0x4c(r3)
	lis      r5, 0x66666667@ha
	lwz      r6, 0x50(r3)
	addi     r5, r5, 0x66666667@l
	subf     r0, r0, r4
	mulhw    r0, r5, r0
	cmplwi   r6, 0
	srawi    r0, r0, 3
	srwi     r4, r0, 0x1f
	add      r4, r0, r4
	beq      lbl_8001B11C
	lwz      r3, 0x44(r3)
	lwz      r0, 8(r3)
	cmplw    r4, r0
	blt      lbl_8001B124

lbl_8001B11C:
	li       r3, 0
	blr

lbl_8001B124:
	slwi     r0, r4, 2
	lwzx     r3, r6, r0
	blr
	*/
}
