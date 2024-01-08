#include "P2Macros.h"
#include "PSSystem/SeqTrack.h"

namespace PSSystem {

/**
 * @note Address: 0x803422A8
 * @note Size: 0x2C
 */
void BeatMgr::proc()
{
	if (_00 & 0x40) {
		_00 &= 1;
	} else if (_00 & 0x80) {
		_00 |= 0x40;
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
    : _34(2.0f)
    , mSwingState(0)
    , _3E(0x3C)
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
	_2C                  = track->_352;
	_2E                  = _2C;
	mBeatMgr._00         = 0;
	initSwingRatio();
}

/**
 * @note Address: 0x80342728
 * @note Size: 0x7C
 */
void SeqTrackRoot::initSwingRatio()
{
	_32 = _2C * (_34 + 1.0f) / 2;
	_30 = _32 / _34;
}

/**
 * @note Address: 0x803427A4
 * @note Size: 0x88
 */
void SeqTrackRoot::pitchModulation(f32 f1, f32 f2, u32 arg, PSSystem::DirectorBase* base)
{
	mTaskEntryMgr.removeEntry(&_16C);
	_16C.makeEntry(f1, f2, arg);
	mTaskEntryMgr.appendEntry(&_16C, base);
}

/**
 * @note Address: 0x8034282C
 * @note Size: 0x78
 */
void SeqTrackRoot::tempoChange(f32 tempo, u32 arg, PSSystem::DirectorBase* base)
{
	mTaskEntryMgr.removeEntry(&_40);
	_40.makeEntry(tempo, arg);
	mTaskEntryMgr.appendEntry(&_40, base);
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
	mBeatMgr._00 = (mBeatMgr._00 & 1 ^ 1) & 0x00FF | 0x80;
	if (mSwingState == 1) {
		if (mBeatMgr._00 & 1) {
			_2E = _30;
		} else {
			_2E = _32;
		}
	} else {
		_2E = _2C;
	}
	mTaskEntryMgr.mTrack->setTempo(_2E);
	onBeatTop();
	return _3E;
}

/**
 * @note Address: 0x80342964
 * @note Size: 0x2EC
 * __ct__Q28PSSystem13SeqTrackChildFRCQ28PSSystem12SeqTrackRoot
 */
SeqTrackChild::SeqTrackChild(const PSSystem::SeqTrackRoot&)
    : _1B8(1)
{
}

/**
 * @note Address: 0x80342C50
 * @note Size: 0x84
 */
void SeqTrackChild::muteOffAndFadeIn(f32 arg1, u32 arg2, PSSystem::DirectorBase* base)
{
	mTaskEntryMgr.removeEntry(&_2C);
	mTaskEntryMgr.removeEntry(&_12C);
	_2C.makeEntry(arg1, arg2);
	mTaskEntryMgr.appendEntry(&_2C, base);
}

/**
 * @note Address: 0x80342CD4
 * @note Size: 0x74
 */
void SeqTrackChild::fadeoutAndMute(u32 arg, PSSystem::DirectorBase* base)
{
	mTaskEntryMgr.removeEntry(&_2C);
	mTaskEntryMgr.removeEntry(&_12C);
	_12C.makeEntry(arg);
	mTaskEntryMgr.appendEntry(&_12C, base);
}

/**
 * @note Address: 0x80342D48
 * @note Size: 0x78
 */
void SeqTrackChild::fade(f32 arg1, u32 arg2, PSSystem::DirectorBase* base)
{
	mTaskEntryMgr.removeEntry(&_1B8);
	_1B8.makeEntry(arg1, arg2);
	mTaskEntryMgr.appendEntry(&_1B8, base);
}

/**
 * @note Address: 0x80342DC0
 * @note Size: 0x68
 */
void SeqTrackChild::setIdMask(u8 mask, PSSystem::DirectorBase* base)
{
	mTaskEntryMgr.removeEntry(&_224);
	_224.makeEntry(mask);
	mTaskEntryMgr.appendEntry(&_224, base);
}

/**
 * @note Address: 0x80342E28
 * @note Size: 0x24
 */
void SeqTrackChild::onStopSeq() { mTaskEntryMgr.removeAllEntry(); }
} // namespace PSSystem
