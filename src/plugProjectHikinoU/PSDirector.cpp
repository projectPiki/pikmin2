#include "PSM/Director.h"

namespace PSSystem {

u8 DirectorBase::sToolMode;

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

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void DirectorBase::initCheck()
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
void DirectorBase::playInit(JASTrack* track)
{
	onPlayInit(track);
	OSLockMutex(&mMutex1);
	for (u8 k = 0; k < mTrackNum; k++) {
		if (mTracks[k]->getTaskEntryList()->mTrack == track) {
			mTrackFlagList[k] = true;
		}
		if (!mTrackFlagList[k]) {
			OSUnlockMutex(&mMutex1);
			return;
		}
	}
	OSUnlockMutex(&mMutex1);
	OSLockMutex(&mMutex2);
	mIsBegin = true;
	OSUnlockMutex(&mMutex2);
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

		if (mState == 1 || mState == 2) {
			return;
		}

		directOffInner();
	}
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
 * Address:	........
 * Size:	000068
 */
void DirectorBase::powerOff()
{
	OSLockMutex(&mMutex1);
	mEnabled = false;
	for (u8 i = 0; i < mTrackNum; i++) {
		mTrackFlagList[i] = 0;
	}
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
		mDirectors[i]->initCheck();
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
		for (u8 j = 0; j < mDirectors[i]->getTrackCount(); j++) {
			DirectorBase* director = mDirectors[i];
			director->checkTrackNum(j);
			if (director->mTracks[j]->getTaskEntryList()->mTrack == track) {
				mDirectors[i]->playInit(track);
			}
		}
	}
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
 * Address:	........
 * Size:	000060
 */
void DirectorMgrBase::lock()
{
	for (u8 i = 0; i < mDirectorCount; i++) {
		OSLockMutex(&mDirectors[i]->mMutex1);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void DirectorMgrBase::unlock()
{
	for (u8 i = 0; i < mDirectorCount; i++) {
		OSUnlockMutex(&mDirectors[i]->mMutex1);
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

	lock();
	bgm->removeAllChildren();
	powerOff();
	unlock();

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
