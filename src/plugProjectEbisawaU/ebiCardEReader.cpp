#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80497978
    lbl_80497978:
        .4byte 0x65626943
        .4byte 0x61726445
        .4byte 0x52656164
        .4byte 0x65720000
    .global lbl_80497988
    lbl_80497988:
        .4byte 0x65626943
        .4byte 0x61726445
        .4byte 0x52656164
        .4byte 0x65722E63
        .4byte 0x70700000
    .global lbl_8049799C
    lbl_8049799C:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x75736572
        .4byte 0x2F456269
        .4byte 0x73617761
        .4byte 0x2F636172
        .4byte 0x645F655F
        .4byte 0x72656164
        .4byte 0x65722F70
        .4byte 0x70312E64
        .4byte 0x776E0000
        .4byte 0x75736572
        .4byte 0x2F456269
        .4byte 0x73617761
        .4byte 0x2F636172
        .4byte 0x645F655F
        .4byte 0x72656164
        .4byte 0x65722F70
        .4byte 0x70322E64
        .4byte 0x776E0000
        .4byte 0x75736572
        .4byte 0x2F456269
        .4byte 0x73617761
        .4byte 0x2F636172
        .4byte 0x645F655F
        .4byte 0x72656164
        .4byte 0x65722F70
        .4byte 0x70332E64
        .4byte 0x776E0000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q33ebi11CardEReader4TMgr
    __vt__Q33ebi11CardEReader4TMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q33ebi11CardEReader4TMgrFv
        .4byte 0

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global cInitialCode__Q23ebi11CardEReader
    cInitialCode__Q23ebi11CardEReader:
        .ascii "PSAJ"

    .section .sbss # 0x80514D80 - 0x80516360
    .global gCardEMgr__3ebi
    gCardEMgr__3ebi:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051FE58
    lbl_8051FE58:
        .4byte 0x00000000
*/

namespace ebi {

/*
 * --INFO--
 * Address:	803ECB40
 * Size:	00005C
 */
void gCardEMgr_ThreadFunc(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, gCardEMgr__3ebi@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_803ECB7C
	lis      r3, lbl_80497988@ha
	lis      r5, lbl_8049799C@ha
	addi     r3, r3, lbl_80497988@l
	li       r4, 0x10
	addi     r5, r5, lbl_8049799C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803ECB7C:
	lwz      r3, gCardEMgr__3ebi@sda21(r13)
	mr       r4, r31
	bl       threadProc__Q33ebi11CardEReader4TMgrFPv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void CardEReader::changeEndian(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void CardEReader::roundup4b(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void CardEReader::CardE_probeAGB(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803ECB9C
 * Size:	000274
 */
void CardEReader::CardE_uploadToGBA(long, unsigned char*, unsigned long)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r5
	stw      r30, 0x28(r1)
	mr       r30, r4
	addi     r4, r1, 8
	stw      r29, 0x24(r1)
	mr       r29, r3
	stw      r28, 0x20(r1)
	bl       GBAReset
	cmpwi    r3, 0
	beq      lbl_803ECBDC
	li       r3, 0
	b        lbl_803ECDF0

lbl_803ECBDC:
	mr       r3, r29
	addi     r4, r1, 8
	bl       GBAGetStatus
	cmpwi    r3, 0
	beq      lbl_803ECBF8
	li       r3, 0
	b        lbl_803ECDF0

lbl_803ECBF8:
	lbz      r0, 8(r1)
	cmplwi   r0, 0x28
	beq      lbl_803ECC0C
	li       r3, 0
	b        lbl_803ECDF0

lbl_803ECC0C:
	mr       r3, r29
	addi     r4, r1, 0x14
	addi     r5, r1, 8
	bl       GBARead
	cmpwi    r3, 0
	beq      lbl_803ECC2C
	li       r3, 0
	b        lbl_803ECDF0

lbl_803ECC2C:
	addi     r4, r13, cInitialCode__Q23ebi11CardEReader@sda21
	lbz      r3, 0x14(r1)
	lbz      r0, cInitialCode__Q23ebi11CardEReader@sda21(r13)
	cmplw    r3, r0
	beq      lbl_803ECC48
	li       r3, 0
	b        lbl_803ECDF0

lbl_803ECC48:
	lbz      r3, 0x15(r1)
	lbzu     r0, 1(r4)
	cmplw    r3, r0
	beq      lbl_803ECC60
	li       r3, 0
	b        lbl_803ECDF0

lbl_803ECC60:
	lbz      r3, 0x16(r1)
	lbzu     r0, 1(r4)
	cmplw    r3, r0
	beq      lbl_803ECC78
	li       r3, 0
	b        lbl_803ECDF0

lbl_803ECC78:
	lbz      r3, 0x17(r1)
	lbz      r0, 1(r4)
	cmplw    r3, r0
	beq      lbl_803ECC90
	li       r3, 0
	b        lbl_803ECDF0

lbl_803ECC90:
	mr       r3, r29
	addi     r4, r1, 8
	bl       GBAGetStatus
	cmpwi    r3, 0
	beq      lbl_803ECCAC
	li       r3, 0
	b        lbl_803ECDF0

lbl_803ECCAC:
	lbz      r0, 8(r1)
	cmplwi   r0, 0x20
	beq      lbl_803ECCC0
	li       r3, 0
	b        lbl_803ECDF0

lbl_803ECCC0:
	mr       r3, r29
	addi     r4, r1, 0x14
	addi     r5, r1, 8
	bl       GBAWrite
	cmpwi    r3, 0
	beq      lbl_803ECCE0
	li       r3, 0
	b        lbl_803ECDF0

lbl_803ECCE0:
	mr       r3, r29
	addi     r4, r1, 8
	bl       GBAGetStatus
	cmpwi    r3, 0
	beq      lbl_803ECCFC
	li       r3, 0
	b        lbl_803ECDF0

lbl_803ECCFC:
	lbz      r0, 8(r1)
	cmplwi   r0, 0x30
	beq      lbl_803ECD10
	li       r3, 0
	b        lbl_803ECDF0

lbl_803ECD10:
	addi     r0, r1, 0x10
	mr       r3, r29
	stwbrx   r31, 0, r0
	addi     r4, r1, 0x10
	addi     r5, r1, 8
	bl       GBAWrite
	cmpwi    r3, 0
	beq      lbl_803ECD38
	li       r3, 0
	b        lbl_803ECDF0

lbl_803ECD38:
	mr       r3, r29
	addi     r4, r1, 0xc
	addi     r5, r1, 8
	bl       GBARead
	cmpwi    r3, 0
	beq      lbl_803ECD58
	li       r3, 0
	b        lbl_803ECDF0

lbl_803ECD58:
	lwz      r3, 0xc(r1)
	rlwinm   r0, r3, 0x18, 0x10, 0x17
	rlwimi   r0, r3, 8, 0x18, 0x1f
	rlwimi   r0, r3, 8, 8, 0xf
	rlwimi   r0, r3, 0x18, 0, 7
	cmplw    r31, r0
	beq      lbl_803ECD7C
	li       r3, 0
	b        lbl_803ECDF0

lbl_803ECD7C:
	li       r28, 0
	b        lbl_803ECDE4

lbl_803ECD84:
	mr       r3, r29
	addi     r4, r1, 8
	bl       GBAGetStatus
	cmpwi    r3, 0
	beq      lbl_803ECDA0
	li       r3, 0
	b        lbl_803ECDF0

lbl_803ECDA0:
	lbz      r3, 8(r1)
	rlwinm.  r0, r3, 0, 0x1e, 0x1e
	beq      lbl_803ECDC0
	rlwinm   r0, r3, 0, 0x1a, 0x1b
	cmpwi    r0, 0x30
	beq      lbl_803ECD84
	li       r3, 0
	b        lbl_803ECDF0

lbl_803ECDC0:
	mr       r3, r29
	add      r4, r30, r28
	addi     r5, r1, 8
	bl       GBAWrite
	cmpwi    r3, 0
	beq      lbl_803ECDE0
	li       r3, 0
	b        lbl_803ECDF0

lbl_803ECDE0:
	addi     r28, r28, 4

lbl_803ECDE4:
	cmplw    r28, r31
	blt      lbl_803ECD84
	li       r3, 1

lbl_803ECDF0:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	803ECE10
 * Size:	000068
 */
CardEReader::TMgr::~TMgr(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_803ECE5C
	lis      r4, __vt__Q33ebi11CardEReader4TMgr@ha
	li       r0, 0
	addi     r5, r4, __vt__Q33ebi11CardEReader4TMgr@l
	li       r4, 0
	stw      r5, 0(r30)
	stw      r0, gCardEMgr__3ebi@sda21(r13)
	bl       __dt__11JKRDisposerFv
	extsh.   r0, r31
	ble      lbl_803ECE5C
	mr       r3, r30
	bl       __dl__FPv

lbl_803ECE5C:
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
 * Address:	803ECE78
 * Size:	00006C
 */
void CardEReader::TMgr::globalInstance(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r0, gCardEMgr__3ebi@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_803ECED0
	li       r3, 0x68
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_803ECECC
	bl       __ct__11JKRDisposerFv
	lis      r4, __vt__Q33ebi11CardEReader4TMgr@ha
	li       r3, 0
	addi     r4, r4, __vt__Q33ebi11CardEReader4TMgr@l
	li       r0, -1
	stw      r4, 0(r31)
	stw      r3, 0x30(r31)
	stw      r3, 0x34(r31)
	stw      r3, 0x3c(r31)
	stw      r0, 0x40(r31)

lbl_803ECECC:
	stw      r31, gCardEMgr__3ebi@sda21(r13)

lbl_803ECED0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void CardEReader::TMgr::deleteInstance(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803ECEE4
 * Size:	00011C
 */
void CardEReader::TMgr::loadResource(void)
{
	/*
	stwu     r1, -0x120(r1)
	mflr     r0
	lis      r4, lbl_80497978@ha
	stw      r0, 0x124(r1)
	stw      r31, 0x11c(r1)
	addi     r31, r4, lbl_80497978@l
	stw      r30, 0x118(r1)
	mr       r30, r3
	stw      r29, 0x114(r1)
	li       r29, 0
	stw      r28, 0x110(r1)

lbl_803ECF10:
	cmpwi    r29, 0
	addi     r28, r2, lbl_8051FE58@sda21
	bne      lbl_803ECF24
	addi     r28, r31, 0x30
	b        lbl_803ECF40

lbl_803ECF24:
	cmpwi    r29, 1
	bne      lbl_803ECF34
	addi     r28, r31, 0x54
	b        lbl_803ECF40

lbl_803ECF34:
	cmpwi    r29, 2
	bne      lbl_803ECF40
	addi     r28, r31, 0x78

lbl_803ECF40:
	addi     r3, r1, 0x10
	bl       __ct__10JKRDvdFileFv
	mr       r4, r28
	addi     r3, r1, 0x10
	bl       open__10JKRDvdFileFPCc
	li       r0, 0
	addi     r3, r1, 0x10
	stw      r0, 8(r1)
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 2
	li       r9, 0
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFP10JKRDvdFilePUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	stw      r3, 0x18(r30)
	lwz      r0, 0x18(r30)
	cmplwi   r0, 0
	bne      lbl_803ECFA4
	addi     r3, r31, 0x10
	addi     r5, r31, 0x24
	li       r4, 0x1ce
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803ECFA4:
	lwz      r0, 0xa0(r1)
	addi     r3, r1, 0x10
	stw      r0, 0x24(r30)
	bl       close__10JKRDvdFileFv
	lwz      r5, 0x24(r30)
	addi     r3, r1, 0x10
	li       r4, -1
	addi     r0, r5, 3
	rlwinm   r0, r0, 0, 0, 0x1d
	stw      r0, 0x24(r30)
	bl       __dt__10JKRDvdFileFv
	addi     r29, r29, 1
	addi     r30, r30, 4
	cmpwi    r29, 3
	blt      lbl_803ECF10
	lwz      r0, 0x124(r1)
	lwz      r31, 0x11c(r1)
	lwz      r30, 0x118(r1)
	lwz      r29, 0x114(r1)
	lwz      r28, 0x110(r1)
	mtlr     r0
	addi     r1, r1, 0x120
	blr
	*/
}

/*
 * --INFO--
 * Address:	803ED000
 * Size:	00003C
 */
void CardEReader::TMgr::init(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       GBAInit
	addi     r3, r31, 0x48
	bl       OSInitMutex
	addi     r3, r31, 0x60
	bl       OSInitCond
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803ED03C
 * Size:	00001C
 */
void CardEReader::TMgr::uploadToGBA(long)
{
	/*
	li       r5, 1
	li       r0, 0
	stw      r5, 0x38(r3)
	stw      r5, 0x34(r3)
	stw      r0, 0x44(r3)
	stw      r4, 0x30(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803ED058
 * Size:	000018
 */
void CardEReader::TMgr::probeAGB(void)
{
	/*
	li       r4, 0
	li       r0, 1
	stw      r4, 0x38(r3)
	stw      r0, 0x34(r3)
	stw      r4, 0x44(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803ED070
 * Size:	000150
 */
void CardEReader::TMgr::update(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0x34(r3)
	cmpwi    r0, 2
	beq      lbl_803ED168
	bge      lbl_803ED1AC
	cmpwi    r0, 0
	beq      lbl_803ED1AC
	bge      lbl_803ED0A8
	b        lbl_803ED1AC
	b        lbl_803ED1AC

lbl_803ED0A8:
	li       r3, 1
	bl       SIProbe
	addis    r0, r3, 0xfffc
	cmplwi   r0, 0
	bne      lbl_803ED0C4
	li       r0, 1
	b        lbl_803ED100

lbl_803ED0C4:
	li       r3, 2
	bl       SIProbe
	addis    r0, r3, 0xfffc
	cmplwi   r0, 0
	bne      lbl_803ED0E0
	li       r0, 2
	b        lbl_803ED100

lbl_803ED0E0:
	li       r3, 3
	bl       SIProbe
	addis    r0, r3, 0xfffc
	cmplwi   r0, 0
	bne      lbl_803ED0FC
	li       r0, 3
	b        lbl_803ED100

lbl_803ED0FC:
	li       r0, -1

lbl_803ED100:
	stw      r0, 0x40(r31)
	lwz      r3, 0x44(r31)
	addi     r0, r3, 1
	stw      r0, 0x44(r31)
	lwz      r0, 0x40(r31)
	cmpwi    r0, -1
	beq      lbl_803ED14C
	lwz      r0, 0x38(r31)
	cmpwi    r0, 0
	bne      lbl_803ED138
	mr       r3, r31
	li       r4, 0
	bl       goEnd___Q33ebi11CardEReader4TMgrFQ43ebi11CardEReader4TMgr7enumErr
	b        lbl_803ED1AC

lbl_803ED138:
	li       r3, 0
	li       r0, 2
	stw      r3, 0x44(r31)
	stw      r0, 0x34(r31)
	b        lbl_803ED1AC

lbl_803ED14C:
	lwz      r0, 0x44(r31)
	cmpwi    r0, 2
	blt      lbl_803ED1AC
	mr       r3, r31
	li       r4, 1
	bl       goEnd___Q33ebi11CardEReader4TMgrFQ43ebi11CardEReader4TMgr7enumErr
	b        lbl_803ED1AC

lbl_803ED168:
	bl       tryUploadToGBA___Q33ebi11CardEReader4TMgrFv
	lwz      r4, 0x44(r31)
	clrlwi.  r0, r3, 0x18
	addi     r0, r4, 1
	stw      r0, 0x44(r31)
	beq      lbl_803ED194
	li       r3, 0
	li       r0, 3
	stw      r3, 0x44(r31)
	stw      r0, 0x34(r31)
	b        lbl_803ED1AC

lbl_803ED194:
	lwz      r0, 0x44(r31)
	cmpwi    r0, 1
	blt      lbl_803ED1AC
	mr       r3, r31
	li       r4, 2
	bl       goEnd___Q33ebi11CardEReader4TMgrFQ43ebi11CardEReader4TMgr7enumErr

lbl_803ED1AC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803ED1C0
 * Size:	000010
 */
void CardEReader::TMgr::isFinish(void)
{
	/*
	lwz      r0, 0x34(r3)
	cntlzw   r0, r0
	rlwinm   r3, r0, 0x1b, 0x18, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	803ED1D0
 * Size:	000074
 */
void CardEReader::TMgr::threadProc(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3

lbl_803ED1E4:
	addi     r3, r31, 0x48
	bl       OSLockMutex
	addi     r3, r31, 0x60
	addi     r4, r31, 0x48
	bl       OSWaitCond
	lwz      r0, 0x30(r31)
	lwz      r3, 0x40(r31)
	slwi     r0, r0, 2
	add      r5, r31, r0
	lwz      r4, 0x18(r5)
	lwz      r5, 0x24(r5)
	bl       CardE_uploadToGBA__Q23ebi11CardEReaderFlPUcUl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803ED22C
	mr       r3, r31
	li       r4, 0
	bl       goEnd___Q33ebi11CardEReader4TMgrFQ43ebi11CardEReader4TMgr7enumErr
	b        lbl_803ED238

lbl_803ED22C:
	mr       r3, r31
	li       r4, 2
	bl       goEnd___Q33ebi11CardEReader4TMgrFQ43ebi11CardEReader4TMgr7enumErr

lbl_803ED238:
	addi     r3, r31, 0x48
	bl       OSUnlockMutex
	b        lbl_803ED1E4
	*/
}

/*
 * --INFO--
 * Address:	803ED244
 * Size:	000054
 */
void CardEReader::TMgr::tryUploadToGBA_(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 0x48
	bl       OSTryLockMutex
	cmpwi    r3, 0
	beq      lbl_803ED280
	addi     r3, r31, 0x48
	bl       OSUnlockMutex
	addi     r3, r31, 0x60
	bl       OSSignalCond
	li       r3, 1
	b        lbl_803ED284

lbl_803ED280:
	li       r3, 0

lbl_803ED284:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803ED298
 * Size:	000010
 */
void CardEReader::TMgr::goEnd_(ebi::CardEReader::TMgr::enumErr)
{
	/*
	stw      r4, 0x3c(r3)
	li       r0, 0
	stw      r0, 0x34(r3)
	blr
	*/
}
} // namespace ebi
