#include "PSM/Director.h"

namespace PSSystem {

/*
 * --INFO--
 * Address:	80342EB4
 * Size:	000214
 */
DirectorBase::DirectorBase(int tracks, const char*)
    : JADHioNode(nullptr)
{
	mTracks = nullptr;
	mState  = 2;
	OSInitMutex(&mMutex1);
	OSInitMutex(&mMutex2);
	mIsBegin  = false;
	mEnabled  = false;
	mTrackNum = tracks;
	P2ASSERTLINE(24, tracks > 0);
	mTracks        = new SeqTrackBase*[tracks];
	mTrackFlagList = new u8[tracks];
	P2ASSERTLINE(29, mTracks);
	for (u8 i = 0; i < tracks; i++) {
		mTracks[i]        = nullptr;
		mTrackFlagList[i] = false;
	}
}

/*
 * --INFO--
 * Address:	803430C8
 * Size:	000010
 */
bool DirectorBase::isUnderDirection() { return mState == 0; }

/*
 * --INFO--
 * Address:	803430D8
 * Size:	0000A4
 */
void DirectorBase::setTrack(u8 id, SeqTrackBase* track)
{
	P2ASSERTLINE(62, id < mTrackNum);
	P2ASSERTLINE(63, !mTracks[id]);
	mTracks[id] = track;
}

// fabricated, goes here based on line number and this being the file
void DirectorBase::checkTracks()
{
	for (u8 i = 0; i < mTrackNum; i++) {
		P2ASSERTLINE(73, mTracks[i]);
	}
}

/*
 * --INFO--
 * Address:	8034317C
 * Size:	00014C
 */
void DirectorBase::exec()
{
	JUT_ASSERTLINE(101, OSGetThreadPriority(OSGetCurrentThread()) == 0x10, "\nNot Called From Main Thread\n");

	if (mIsBegin == true) {
		powerOn();
		doUpdateRequest();
		OSLockMutex(&mMutex2);
		mIsBegin = false;
		OSUnlockMutex(&mMutex2);
	}

	if (mEnabled) {
		execInner();
		if (mState != 2) {
			bool flag = needDirection();
			if (!flag && mState == 1) {
				mState = 2;
			}
		}
		if (mState == 0) {
			underDirection();
		}
	}
}

/*
 * --INFO--
 * Address:	803432C8
 * Size:	000074
 */
void DirectorBase::directOn()
{
	JUT_ASSERTLINE(184, OSGetThreadPriority(OSGetCurrentThread()) == 0x10, "\nNot Called From Main Thread\n");
	if (sToolMode != 1 && mState != 0) {
		directOnInner();
	}
}

/*
 * --INFO--
 * Address:	8034333C
 * Size:	0000B0
 */
void DirectorBase::directOnInner()
{
	OSLockMutex(&mMutex1);
	if (!mEnabled) {
		OSUnlockMutex(&mMutex1);
		return;
	}

	for (u8 i = 0; i < mTrackNum; i++) {
		directOnTrack(*mTracks[i]);
	}

	OSUnlockMutex(&mMutex1);
	onDirectOn();
	mState = 0;
}

/*
 * --INFO--
 * Address:	803433EC
 * Size:	000080
 */
void DirectorBase::directOff()
{
	if (sToolMode != 1) {
		JUT_ASSERTLINE(219, OSGetThreadPriority(OSGetCurrentThread()) == 0x10, "\nNot Called From Main Thread\n");
		switch (mState) {
		case 1:
			break; // weirdness here
		case 2:
			break;
		case 0:
			directOffInner();
			break;
		}
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lbz      r0, sToolMode__Q28PSSystem12DirectorBase@sda21(r13)
	cmplwi   r0, 1
	beq      lbl_80343458
	bl       OSGetCurrentThread
	bl       OSGetThreadPriority
	cmpwi    r3, 0x10
	beq      lbl_80343438
	lis      r3, lbl_80490180@ha
	lis      r5, lbl_8049019C@ha
	addi     r3, r3, lbl_80490180@l
	li       r4, 0xdb
	addi     r5, r5, lbl_8049019C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80343438:
	lwz      r0, 8(r31)
	cmpwi    r0, 1
	beq      lbl_80343458
	cmpwi    r0, 2
	bne      lbl_80343450
	b        lbl_80343458

lbl_80343450:
	mr       r3, r31
	bl       directOffInner__Q28PSSystem12DirectorBaseFv

lbl_80343458:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034346C
 * Size:	0000B0
 */
void DirectorBase::directOffInner()
{
	OSLockMutex(&mMutex1);
	if (!mEnabled) {
		OSUnlockMutex(&mMutex1);
		return;
	}

	for (u8 i = 0; i < mTrackNum; i++) {
		directOffTrack(*mTracks[i]);
	}

	OSUnlockMutex(&mMutex1);
	onDirectOff();
	mState = 1;
}

/*
 * --INFO--
 * Address:	8034351C
 * Size:	000004
 */
void DirectorBase::doUpdateRequest() { }

/*
 * --INFO--
 * Address:	80343520
 * Size:	000040
 */
void DirectorBase::powerOn()
{
	OSLockMutex(&mMutex1);
	mEnabled = true;
	OSUnlockMutex(&mMutex1);
}

/*
 * --INFO--
 * Address:	80343560
 * Size:	000150
 */
void OneShotDirector::exec()
{
	JUT_ASSERTLINE(336, OSGetThreadPriority(OSGetCurrentThread()) == 0x10, "\nNot Called From Main Thread\n");

	if (mIsBegin == true) {
		powerOn();
		doUpdateRequest();
		OSLockMutex(&mMutex2);
		mIsBegin = false;
		OSUnlockMutex(&mMutex2);
	}

	if (mEnabled) {
		execInner();
		if (mState != 2) {
			bool flag = needDirection();
			if (!flag) {
				mState = 2;
			}
		}
		if (mState == 0) {
			underDirection();
		}
	}
}

/*
 * --INFO--
 * Address:	803436B0
 * Size:	000198
 */
void SwitcherDirector::doUpdateRequest()
{
	if (mState == 0) {
		directOnInner();
	} else if (mState == 1) {
		if (needDirection()) {
			directOffInner();
		}
	}
}

/*
 * --INFO--
 * Address:	80343848
 * Size:	000088
 */
DirectorMgrBase::DirectorMgrBase(u8 type)
    : JADHioNode("ディレクターマネージャ") // "Director Manager"
{
	mDirectors     = nullptr;
	mDirectorCount = type;
	P2ASSERTLINE(394, mDirectorCount != 0);
}

/*
 * --INFO--
 * Address:	803438D0
 * Size:	00012C
 */
void DirectorMgrBase::initAndAdaptToBgm(DirectedBgm& bgm)
{
	P2ASSERTLINE(401, !mDirectors);
	mDirectors = new DirectorBase*[mDirectorCount];
	P2ASSERTLINE(403, mDirectors);
	for (u8 i = 0; i < mDirectorCount; i++) {
		mDirectors[i] = newDirector(i, bgm);
		mDirectors[i]->checkTracks();
	}
}

/*
 * --INFO--
 * Address:	803439FC
 * Size:	000164
 */
void DirectorMgrBase::playInit(JASTrack* track)
{
	for (u8 i = 0; i < mDirectorCount; i++) {
		mDirectors[i]->playInit(track);
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r23, 0xc(r1)
	mr       r27, r3
	mr       r28, r4
	li       r30, 0
	b        lbl_80343B3C

lbl_80343A1C:
	rlwinm   r31, r30, 2, 0x16, 0x1d
	li       r29, 0
	b        lbl_80343B20

lbl_80343A28:
	lbz      r0, 0x41(r24)
	clrlwi   r3, r29, 0x18
	cmplw    r3, r0
	blt      lbl_80343A54
	lis      r3, lbl_804901D4@ha
	lis      r5, lbl_80490190@ha
	addi     r3, r3, lbl_804901D4@l
	li       r4, 0x33
	addi     r5, r5, lbl_80490190@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80343A54:
	lwz      r3, 4(r24)
	rlwinm   r0, r29, 2, 0x16, 0x1d
	lwzx     r3, r3, r0
	bl       getTaskEntryList__Q28PSSystem12SeqTrackBaseFv
	lwz      r0, 0x24(r3)
	cmplw    r0, r28
	bne      lbl_80343B1C
	lwz      r0, 4(r27)
	mr       r4, r28
	lwzx     r24, r31, r0
	mr       r3, r24
	lwz      r12, 0(r24)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	addi     r3, r24, 0xc
	bl       OSLockMutex
	li       r25, 0
	li       r26, 1
	b        lbl_80343AEC

lbl_80343AA4:
	lwz      r3, 4(r24)
	rlwinm   r0, r25, 2, 0x16, 0x1d
	clrlwi   r23, r25, 0x18
	lwzx     r3, r3, r0
	bl       getTaskEntryList__Q28PSSystem12SeqTrackBaseFv
	lwz      r0, 0x24(r3)
	cmplw    r0, r28
	bne      lbl_80343ACC
	lwz      r3, 0x44(r24)
	stbx     r26, r3, r23

lbl_80343ACC:
	lwz      r3, 0x44(r24)
	lbzx     r0, r3, r23
	cmplwi   r0, 0
	bne      lbl_80343AE8
	addi     r3, r24, 0xc
	bl       OSUnlockMutex
	b        lbl_80343B1C

lbl_80343AE8:
	addi     r25, r25, 1

lbl_80343AEC:
	lbz      r0, 0x41(r24)
	clrlwi   r3, r25, 0x18
	cmplw    r3, r0
	blt      lbl_80343AA4
	addi     r3, r24, 0xc
	bl       OSUnlockMutex
	addi     r3, r24, 0x24
	bl       OSLockMutex
	li       r0, 1
	addi     r3, r24, 0x24
	stb      r0, 0x3c(r24)
	bl       OSUnlockMutex

lbl_80343B1C:
	addi     r29, r29, 1

lbl_80343B20:
	lwz      r3, 4(r27)
	clrlwi   r0, r29, 0x18
	lwzx     r24, r31, r3
	lbz      r3, 0x41(r24)
	cmplw    r0, r3
	blt      lbl_80343A28
	addi     r30, r30, 1

lbl_80343B3C:
	lbz      r0, 8(r27)
	clrlwi   r3, r30, 0x18
	cmplw    r3, r0
	blt      lbl_80343A1C
	lmw      r23, 0xc(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80343B60
 * Size:	000068
 */
void DirectorMgrBase::exec()
{
	for (u8 i = 0; i < mDirectorCount; i++) {
		mDirectors[i]->exec();
	}
}

/*
 * --INFO--
 * Address:	80343BC8
 * Size:	0001BC
 */
void DirectorMgrBase::off(DirectedBgm* bgm)
{
	P2ASSERTLINE(458, bgm);
	for (u8 i = 0; i < mDirectorCount; i++) {
		OSLockMutex(&mDirectors[i]->mMutex1);
	}
	bgm->assertLoaded();

	bgm->mRootTrack->getTaskEntryList()->removeAllEntry();
	bgm->removeAllChildren();
	for (u8 i = 0; i > mDirectorCount; i++) {
		mDirectors[i]->stop();
	}

	for (u8 i = 0; i < mDirectorCount; i++) {
		OSUnlockMutex(&mDirectors[i]->mMutex1);
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	or.      r31, r4, r4
	mr       r30, r3
	bne      lbl_80343C00
	lis      r3, lbl_80490180@ha
	lis      r5, lbl_80490190@ha
	addi     r3, r3, lbl_80490180@l
	li       r4, 0x1ca
	addi     r5, r5, lbl_80490190@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80343C00:
	li       r29, 0
	b        lbl_80343C20

lbl_80343C08:
	lwz      r3, 4(r30)
	rlwinm   r0, r29, 2, 0x16, 0x1d
	lwzx     r3, r3, r0
	addi     r3, r3, 0xc
	bl       OSLockMutex
	addi     r29, r29, 1

lbl_80343C20:
	lbz      r0, 8(r30)
	clrlwi   r3, r29, 0x18
	cmplw    r3, r0
	blt      lbl_80343C08
	lbz      r0, 0xb4(r31)
	li       r3, 0
	cmplwi   r0, 1
	bne      lbl_80343C50
	lwz      r0, 0x70(r31)
	cmplwi   r0, 0
	beq      lbl_80343C50
	li       r3, 1

lbl_80343C50:
	clrlwi.  r0, r3, 0x18
	bne      lbl_80343C70
	lis      r4, lbl_80490190@ha
	addi     r3, r2, lbl_8051E1F0@sda21
	addi     r5, r4, lbl_80490190@l
	li       r4, 0x19f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80343C70:
	lwz      r3, 0x70(r31)
	bl       getTaskEntryList__Q28PSSystem12SeqTrackBaseFv
	bl       removeAllEntry__Q28PSSystem12TaskEntryMgrFv
	lis      r3, lbl_80490190@ha
	li       r27, 0
	addi     r29, r3, lbl_80490190@l
	b        lbl_80343CCC

lbl_80343C8C:
	clrlwi   r28, r27, 0x18
	cmpwi    r28, 0x10
	blt      lbl_80343CAC
	mr       r5, r29
	addi     r3, r2, lbl_8051E1F0@sda21
	li       r4, 0x1a3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80343CAC:
	slwi     r3, r28, 2
	addi     r0, r3, 0x74
	lwzx     r3, r31, r0
	cmplwi   r3, 0
	beq      lbl_80343CC8
	bl       getTaskEntryList__Q28PSSystem12SeqTrackBaseFv
	bl       removeAllEntry__Q28PSSystem12TaskEntryMgrFv

lbl_80343CC8:
	addi     r27, r27, 1

lbl_80343CCC:
	clrlwi   r0, r27, 0x18
	cmplwi   r0, 0x10
	blt      lbl_80343C8C
	li       r27, 0
	b        lbl_80343D30

lbl_80343CE0:
	lwz      r3, 4(r30)
	rlwinm   r0, r27, 2, 0x16, 0x1d
	lwzx     r29, r3, r0
	addi     r3, r29, 0xc
	bl       OSLockMutex
	li       r4, 0
	stb      r4, 0x40(r29)
	mr       r5, r4
	b        lbl_80343D14

lbl_80343D04:
	lwz      r3, 0x44(r29)
	clrlwi   r0, r5, 0x18
	addi     r5, r5, 1
	stbx     r4, r3, r0

lbl_80343D14:
	lbz      r0, 0x41(r29)
	clrlwi   r3, r5, 0x18
	cmplw    r3, r0
	blt      lbl_80343D04
	addi     r3, r29, 0xc
	bl       OSUnlockMutex
	addi     r27, r27, 1

lbl_80343D30:
	lbz      r0, 8(r30)
	clrlwi   r3, r27, 0x18
	cmplw    r3, r0
	blt      lbl_80343CE0
	li       r29, 0
	b        lbl_80343D60

lbl_80343D48:
	lwz      r3, 4(r30)
	rlwinm   r0, r29, 2, 0x16, 0x1d
	lwzx     r3, r3, r0
	addi     r3, r3, 0xc
	bl       OSUnlockMutex
	addi     r29, r29, 1

lbl_80343D60:
	lbz      r0, 8(r30)
	clrlwi   r3, r29, 0x18
	cmplw    r3, r0
	blt      lbl_80343D48
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80343D84
 * Size:	000024
 */
DirectorCopyActor::DirectorCopyActor(DirectorBase* child, DirectorBase* parent)
{
	mDirectorChild  = child;
	mDirectorParent = parent;
}

/*
 * --INFO--
 * Address:	80343DA8
 * Size:	000120
 */
void DirectorCopyActor::exec(DirectorBase* director)
{
	P2ASSERTLINE(513, mDirectorChild);
	if (director == mDirectorChild) {
		onUpdateFromMasterD();
	} else if (mDirectorParent == director) {
		P2ASSERTLINE(525, mDirectorParent);
		onUpdateFromSlaveD();
		if (mDirectorParent->mState == 0 && mDirectorChild->mState != 0) {
			mDirectorParent->directOff();
		} else if (mDirectorParent->mState != 0 && mDirectorChild->mState == 0) {
			mDirectorParent->directOn();
		}
	}
}

} // namespace PSSystem
