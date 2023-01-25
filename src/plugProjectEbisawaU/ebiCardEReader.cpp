#include "ebi/CardEReader.h"
#include "JSystem/JUT/JUTException.h"
#include "Dolphin/gba.h"
#include "JSystem/JKR/JKRFile.h"
#include "JSystem/JKR/JKRDvdRipper.h"

int SIProbe(int);

static const char name[] = "ebiCardEReader";

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
void gCardEMgr_ThreadFunc(void* data)
{
	P2ASSERTLINE(16, gCardEMgr);
	gCardEMgr->threadProc(data);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void CardEReader::changeEndian(u32)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void CardEReader::roundup4b(u32)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void CardEReader::CardE_probeAGB()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803ECB9C
 * Size:	000274
 */
bool CardEReader::CardE_uploadToGBA(long portIndex, u8* data, u32 size)
{
	u8 flags1[4];
	u8 flags2[4];
	u8 flags3[4];

	if (GBAReset(portIndex, flags1)) {
		return false;
	} else if (GBAGetStatus(portIndex, flags1)) {
		return false;
	} else if (flags1[0] != 0x28) {
		return false;
	} else if (GBARead(portIndex, flags2, flags1)) {
		return false;
	} else if (flags2[0] != cInitialCode[0]) {
		return false;
	} else if (flags2[1] != cInitialCode[1]) {
		return false;
	} else if (flags2[2] != cInitialCode[2]) {
		return false;
	} else if (flags2[3] != cInitialCode[3]) {
		return false;
	} else if (GBAGetStatus(portIndex, flags1)) {
		return false;
	} else if (flags1[0] != 0x20) {
		return false;
	} else if (GBAWrite(portIndex, flags2, flags1)) {
		return false;
	} else if (GBAGetStatus(portIndex, flags1)) {
		return false;
	} else if (flags1[0] != 0x30) {
		return false;
	} else if (GBAWrite(portIndex, (u8*)&size, flags1)) {
		return false;
	} else if (GBARead(portIndex, flags3, flags1)) {
		return false;
	} else if (size != flags3[0]) {
		return false;
	}

	for (int i = 0; i < size; i++) {
		u8 flags4[4];
		while (true) {
			if (GBAGetStatus(portIndex, flags4)) {
				return false;
			}
			if (flags4[0] & 2)
				break;
			if (flags4[0] & 0x30 != 0x30) {
				return false;
			}
		}
		if (GBAWrite(portIndex, data + i, flags4)) {
			return false;
		}
	}
	return true;
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
CardEReader::TMgr::~TMgr() { gCardEMgr = nullptr; }

/*
 * --INFO--
 * Address:	803ECE78
 * Size:	00006C
 */
void CardEReader::TMgr::globalInstance()
{
	if (!gCardEMgr)
		gCardEMgr = new TMgr;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void CardEReader::TMgr::deleteInstance()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803ECEE4
 * Size:	00011C
 */
void CardEReader::TMgr::loadResource()
{
	for (int i = 0; i < EREADER_GAMES; i++) {
		char* path = "";
		if (i == 0) {
			path = "user/Ebisawa/card_e_reader/pp1.dwn";
		} else if (i == 1) {
			path = "user/Ebisawa/card_e_reader/pp2.dwn";
		} else if (i == 2) {
			path = "user/Ebisawa/card_e_reader/pp3.dwn";
		}
		JKRDvdFile file;
		file.open(path);
		mGameDatas[i] = JKRDvdRipper::loadToMainRAM(&file, nullptr, (JKRExpandSwitch)0, 0, nullptr, (JKRDvdRipper::ALLOC_DIR_BOTTOM), 0,
		                                            nullptr, nullptr);
		P2ASSERTLINE(462, mGameDatas[i]);
		mSizes[i] = file.mDvdPlayer.mFileSize;
		file.close();
		mSizes[i] = (mSizes[i] + 3) & ~3;
	}
}

/*
 * --INFO--
 * Address:	803ED000
 * Size:	00003C
 */
void CardEReader::TMgr::init()
{
	GBAInit();
	OSInitMutex(&mMutex);
	OSInitCond(&mCond);
}

/*
 * --INFO--
 * Address:	803ED03C
 * Size:	00001C
 */
void CardEReader::TMgr::uploadToGBA(long data)
{
	_38      = 1;
	mState   = 1;
	mCounter = 0;
	mGameID  = data;
}

/*
 * --INFO--
 * Address:	803ED058
 * Size:	000018
 */
void CardEReader::TMgr::probeAGB()
{
	_38      = 0;
	mState   = 1;
	mCounter = 0;
}

/*
 * --INFO--
 * Address:	803ED070
 * Size:	000150
 */
void CardEReader::TMgr::update()
{
	switch (mState) {
	case 1: {
		int stat;
		if (SIProbe(1) == 0x40000) {
			stat = 1;
		} else if (SIProbe(2) == 0x40000) {
			stat = 2;
		} else if (SIProbe(3) == 0x40000) {
			stat = 3;
		} else {
			stat = -1;
		}
		mGbaPort = stat;
		mCounter++;
		if (mGbaPort != -1) {
			goEnd_(Error_0);
		} else if (_38 == 0) {
			mCounter = 0;
			mState   = 2;
		} else {
			goEnd_(Error_1);
		}
		break;
	}
	case 2:
		bool stat = tryUploadToGBA_();
		mCounter++;
		if (stat) {
			mCounter = 0;
			mState   = 3;
		} else {
			if (mCounter >= 1) {
				goEnd_(Error_2);
			}
		}
		break;
	}
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
bool CardEReader::TMgr::isFinish()
{
	u8 test = mState;
	return test;
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
void CardEReader::TMgr::threadProc(void* data)
{
	while (true) {
		OSLockMutex(&mMutex);
		OSWaitCond(&mCond, &mMutex);
		if (CardE_uploadToGBA(mGbaPort, (u8*)mGameDatas[mGameID], mSizes[mGameID])) {
			goEnd_(Error_0);
		} else {
			goEnd_(Error_2);
		}
		OSUnlockMutex(&mMutex);
	}
}

/*
 * --INFO--
 * Address:	803ED244
 * Size:	000054
 */
bool CardEReader::TMgr::tryUploadToGBA_()
{
	if (OSTryLockMutex(&mMutex)) {
		OSUnlockMutex(&mMutex);
		OSSignalCond(&mCond);
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	803ED298
 * Size:	000010
 */
void CardEReader::TMgr::goEnd_(enumErr stat)
{
	mEndStat = stat;
	mState   = 0;
}
} // namespace ebi
