#include "P2Macros.h"
#include "PSSystem/SeqTrack.h"

namespace PSSystem {

/**
 * @note Address: 0x803422A8
 * @note Size: 0x2C
 */
void BeatMgr::proc()
{
	if (mFlags & 0x40) {
		mFlags &= 1;
	} else if (mFlags & 0x80) {
		mFlags |= 0x40;
	}
}

/**
 * @note Address: 0x803422D4
 * @note Size: 0x28
 */
u16 SeqTrackBase::update()
{
	mTaskEntryMgr.update();
	return 0;
}

/**
 * @note Address: 0x803422FC
 * @note Size: 0x8
 */
void SeqTrackBase::init(JASTrack* track) { mTaskEntryMgr.mTrack = track; }

/**
 * @note Address: 0x80342304
 * @note Size: 0x8
 */
TaskEntryMgr* SeqTrackBase::getTaskEntryList() { return &mTaskEntryMgr; }

/**
 * @note Address: 0x8034230C
 * @note Size: 0x3A4
 * __ct__Q28PSSystem12SeqTrackRootFv
 */
SeqTrackRoot::SeqTrackRoot()
    : mSwingMagnitude(2.0f)
    , mSwingState(0)
    , mBeatInterval(60)
    , _100(2)
{
}

/**
 * @note Address: 0x803426B0
 * @note Size: 0x78
 */
void SeqTrackRoot::init(JASTrack* track)
{
	P2ASSERTLINE(229, track != nullptr);
	mTaskEntryMgr.mTrack = track;
	mStandardTempo       = track->mTempo;
	mActiveTempo         = mStandardTempo;
	mBeatMgr.mFlags      = 0;
	initSwingRatio();
}

/**
 * @note Address: 0x80342728
 * @note Size: 0x7C
 */
void SeqTrackRoot::initSwingRatio()
{
	mSwingTempoMax = mStandardTempo * (mSwingMagnitude + 1.0f) / 2;
	mSwingTempoMin = mSwingTempoMax / mSwingMagnitude;
}

/**
 * @note Address: 0x803427A4
 * @note Size: 0x88
 */
void SeqTrackRoot::pitchModulation(f32 pitch, f32 speed, u32 time, PSSystem::DirectorBase* base)
{
	mTaskEntryMgr.removeEntry(&mPitchModTask);
	mPitchModTask.makeEntry(pitch, speed, time);
	mTaskEntryMgr.appendEntry(&mPitchModTask, base);
}

/**
 * @note Address: 0x8034282C
 * @note Size: 0x78
 */
void SeqTrackRoot::tempoChange(f32 tempo, u32 arg, PSSystem::DirectorBase* base)
{
	mTaskEntryMgr.removeEntry(&mTempoTask);
	mTempoTask.makeEntry(tempo, arg);
	mTaskEntryMgr.appendEntry(&mTempoTask, base);
}

/**
 * @note Address: 0x803428A4
 * @note Size: 0x24
 */
void SeqTrackRoot::onStopSeq() { mTaskEntryMgr.removeAllEntry(); }

/**
 * @note Address: 0x803428C8
 * @note Size: 0x9C
 */
u16 SeqTrackRoot::beatUpdate()
{
	mBeatMgr.mFlags = (mBeatMgr.mFlags & 1 ^ 1) & 0x00FF | 0x80;
	if (mSwingState == 1) {
		if (mBeatMgr.mFlags & 1) {
			mActiveTempo = mSwingTempoMin;
		} else {
			mActiveTempo = mSwingTempoMax;
		}
	} else {
		mActiveTempo = mStandardTempo;
	}

	mTaskEntryMgr.mTrack->setTempo(mActiveTempo);
	onBeatTop();
	return mBeatInterval;
}

/**
 * @note Address: 0x80342964
 * @note Size: 0x2EC
 * __ct__Q28PSSystem13SeqTrackChildFRCQ28PSSystem12SeqTrackRoot
 */
SeqTrackChild::SeqTrackChild(const PSSystem::SeqTrackRoot&)
    : mFadeTask(1)
{
}

/**
 * @note Address: 0x80342C50
 * @note Size: 0x84
 */
void SeqTrackChild::muteOffAndFadeIn(f32 value, u32 length, PSSystem::DirectorBase* base)
{
	mTaskEntryMgr.removeEntry(&mMuteVolumeTask);
	mTaskEntryMgr.removeEntry(&mMuteOnTask);
	mMuteVolumeTask.makeEntry(value, length);
	mTaskEntryMgr.appendEntry(&mMuteVolumeTask, base);
}

/**
 * @note Address: 0x80342CD4
 * @note Size: 0x74
 */
void SeqTrackChild::fadeoutAndMute(u32 length, PSSystem::DirectorBase* base)
{
	mTaskEntryMgr.removeEntry(&mMuteVolumeTask);
	mTaskEntryMgr.removeEntry(&mMuteOnTask);
	mMuteOnTask.makeEntry(length);
	mTaskEntryMgr.appendEntry(&mMuteOnTask, base);
}

/**
 * @note Address: 0x80342D48
 * @note Size: 0x78
 */
void SeqTrackChild::fade(f32 value, u32 duration, PSSystem::DirectorBase* base)
{
	mTaskEntryMgr.removeEntry(&mFadeTask);
	mFadeTask.makeEntry(value, duration);
	mTaskEntryMgr.appendEntry(&mFadeTask, base);
}

/**
 * @note Address: 0x80342DC0
 * @note Size: 0x68
 */
void SeqTrackChild::setIdMask(u8 mask, PSSystem::DirectorBase* base)
{
	mTaskEntryMgr.removeEntry(&mIdMaskTask);
	mIdMaskTask.makeEntry(mask);
	mTaskEntryMgr.appendEntry(&mIdMaskTask, base);
}

/**
 * @note Address: 0x80342E28
 * @note Size: 0x24
 */
void SeqTrackChild::onStopSeq() { mTaskEntryMgr.removeAllEntry(); }
} // namespace PSSystem
