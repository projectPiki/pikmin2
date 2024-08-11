#include "PSM/Director.h"

namespace PSSystem {

u8 DirectorBase::sToolMode;

/**
 * @note Address: 0x80342EB4
 * @note Size: 0x214
 */
DirectorBase::DirectorBase(int numTracks, const char* name)
    : JADHioNode(nullptr)
{
	mTracks = nullptr;
	mState  = 2;
	OSInitMutex(&mMutex1);
	OSInitMutex(&mMutex2);
	mIsBegin  = false;
	mEnabled  = false;
	mTrackNum = numTracks;
	P2ASSERTLINE(24, numTracks > 0);
	mTracks        = new SeqTrackBase*[numTracks];
	mTrackFlagList = new u8[numTracks];
	P2ASSERTLINE(29, mTracks);
	for (u8 i = 0; i < numTracks; i++) {
		mTracks[i]        = nullptr;
		mTrackFlagList[i] = false;
	}
}

/**
 * @note Address: 0x803430C8
 * @note Size: 0x10
 */
bool DirectorBase::isUnderDirection() { return mState == 0; }

/**
 * @note Address: 0x803430D8
 * @note Size: 0xA4
 */
void DirectorBase::setTrack(u8 id, SeqTrackBase* track)
{
	P2ASSERTLINE(62, id < mTrackNum);
	P2ASSERTLINE(63, !mTracks[id]);
	mTracks[id] = track;
}

/**
 * @note Address: N/A
 * @note Size: 0x94
 */
void DirectorBase::initCheck()
{
	for (u8 i = 0; i < mTrackNum; i++) {
		P2ASSERTLINE(73, mTracks[i]);
	}
}

/**
 * @note Address: 0x8034317C
 * @note Size: 0x14C
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

/**
 * @note Address: 0x803432C8
 * @note Size: 0x74
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

/**
 * @note Address: 0x803432C8
 * @note Size: 0x74
 */
void DirectorBase::directOn()
{
	JUT_ASSERTLINE(184, OSGetThreadPriority(OSGetCurrentThread()) == 0x10, "\nNot Called From Main Thread\n");
	if (sToolMode != 1 && mState != 0) {
		directOnInner();
	}
}

/**
 * @note Address: 0x8034333C
 * @note Size: 0xB0
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

/**
 * @note Address: 0x803433EC
 * @note Size: 0x80
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

/**
 * @note Address: 0x8034346C
 * @note Size: 0xB0
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

/**
 * @note Address: 0x8034351C
 * @note Size: 0x4
 */
void DirectorBase::doUpdateRequest() { }

/**
 * @note Address: 0x80343520
 * @note Size: 0x40
 */
void DirectorBase::powerOn()
{
	OSLockMutex(&mMutex1);
	mEnabled = true;
	OSUnlockMutex(&mMutex1);
}

/**
 * @note Address: N/A
 * @note Size: 0x68
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

/**
 * @note Address: 0x80343560
 * @note Size: 0x150
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

/**
 * @note Address: 0x803436B0
 * @note Size: 0x198
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

/**
 * @note Address: 0x80343848
 * @note Size: 0x88
 */
DirectorMgrBase::DirectorMgrBase(u8 count)
    : JADHioNode("ディレクターマネージャ") // "Director Manager"
{
	mDirectors     = nullptr;
	mDirectorCount = count;
	P2ASSERTLINE(394, mDirectorCount != 0);
}

/**
 * @note Address: 0x803438D0
 * @note Size: 0x12C
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

/**
 * @note Address: 0x803439FC
 * @note Size: 0x164
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

/**
 * @note Address: 0x80343B60
 * @note Size: 0x68
 */
void DirectorMgrBase::exec()
{
	for (u8 i = 0; i < mDirectorCount; i++) {
		mDirectors[i]->exec();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x60
 */
void DirectorMgrBase::lock()
{
	for (u8 i = 0; i < mDirectorCount; i++) {
		OSLockMutex(&mDirectors[i]->mMutex1);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x60
 */
void DirectorMgrBase::unlock()
{
	for (u8 i = 0; i < mDirectorCount; i++) {
		OSUnlockMutex(&mDirectors[i]->mMutex1);
	}
}

/**
 * @note Address: 0x80343BC8
 * @note Size: 0x1BC
 */
void DirectorMgrBase::off(DirectedBgm* bgm)
{
	P2ASSERTLINE(458, bgm);

	lock();

	bgm->assertValidTrack();
	bgm->mRootTrack->removeEntry();
	for (u8 i = 0; i < 16; i++) {
		SeqTrackChild* track = bgm->getChildTrack(i);
		if (track) {
			track->removeEntry();
		}
	}

	for (u8 i = 0; i < mDirectorCount; i++) {
		mDirectors[i]->powerOff();
	}

	unlock();
}

/**
 * @note Address: 0x80343D84
 * @note Size: 0x24
 */
DirectorCopyActor::DirectorCopyActor(DirectorBase* child, DirectorBase* parent)
{
	mDirectorChild  = child;
	mDirectorParent = parent;
}

/**
 * @note Address: 0x80343DA8
 * @note Size: 0x120
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
