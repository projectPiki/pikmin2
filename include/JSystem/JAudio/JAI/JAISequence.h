#ifndef _JSYSTEM_JAI_JAISEQUENCE_H
#define _JSYSTEM_JAI_JAISEQUENCE_H

#include "JSystem/JAudio/JAI/JAISound.h"
#include "JSystem/JAudio/JAI/JAInter.h"

/**
 * @size{0x6A0}
 */
struct JAISequence : public JAISound {
	JAISequence();

	virtual void setPortData(u8, u16); // _08 (weak)
	virtual u16 getPortData(u8 p1)     // _0C (weak)
	{
		static u16 _port;
		mSeqParameter.mTrack.readPortApp(p1 << 0x10, &_port);
		return _port;
	}
	virtual void stop(u32 fadeTime) { JAInter::SequenceMgr::releaseSeqBuffer(this, fadeTime); }            // _14 (weak)
	virtual void setVolume(f32 value, u32 moveTime, u8 type) { setSeqInterVolume(type, value, moveTime); } // _1C (weak)
	virtual f32 getVolume(u8 type) { return getSeqInterVolume(type); }                                     // _20 (weak)
	virtual void setPan(f32 value, u32 moveTime, u8 type);                                                 // _24 (weak)
	virtual f32 getPan(u8 type)                                                                            // _28 (weak)
	{
		if (mState == SOUNDSTATE_Playing || mState == SOUNDSTATE_Fadeout) {
			return mSeqParameter.mPans[type].mCurrentValue;
		}
		return -1.0f;
	}
	virtual void setPitch(f32 value, u32 moveTime, u8 type); // _2C (weak)
	virtual f32 getPitch(u8 type)                            // _30 (weak)
	{
		if (mState == SOUNDSTATE_Playing || mState == SOUNDSTATE_Fadeout) {
			return mSeqParameter.mPitches[type].mCurrentValue;
		}
		return -1.0f;
	}
	virtual void setFxmix(f32 value, u32 moveTime, u8 type) // _34 (weak)
	{
		int result = mSeqParameter.mFxmixes[type].set(value, moveTime);
		if (result == JAInter::MOVEPARA_SetTarget) {
			mSeqParameter.mFxmixFlags |= 1 << type;
		}
		if (mSeqParameter.mUpdateData && result != JAInter::MOVEPARA_AlreadySet) {
			mSeqParameter.mUpdateData->mActiveTrackFlag |= JAInter::SOUNDACTIVE_Fxmix;
		}
	}
	virtual f32 getFxmix(u8 type) // _38 (weak)
	{
		if (mState == SOUNDSTATE_Playing || mState == SOUNDSTATE_Fadeout) {
			return mSeqParameter.mFxmixes[type].mCurrentValue;
		}
		return -1.0f;
	}
	virtual void setDolby(f32 value, u32 moveTime, u8 type) // _3C (weak)
	{
		if (JAIBasic::getInterface()->mParamSoundOutputMode == 2 || mSeqParameter.mDolbys[type].mCurrentValue != (value = 0.0f)) {
			int result = mSeqParameter.mDolbys[type].set(value, moveTime);
			if (result == JAInter::MOVEPARA_SetTarget) {
				mSeqParameter.mDolbyFlags |= 1 << type;
			}
			if (mSeqParameter.mUpdateData && result != JAInter::MOVEPARA_AlreadySet) {
				mSeqParameter.mUpdateData->mActiveTrackFlag |= JAInter::SOUNDACTIVE_Dolby;
			}
		}
	}
	virtual f32 getDolby(u8 type) // _40 (weak)
	{
		if (mState == SOUNDSTATE_Playing || mState == SOUNDSTATE_Fadeout) {
			return mSeqParameter.mDolbys[type].mCurrentValue;
		}
		return -1.0f;
	}
	virtual void setTempoProportion(f32 value, u32 moveTime) // _44 (weak)
	{
		mSeqParameter.mTempo.set(value, moveTime);
		if (mSeqParameter.mUpdateData) {
			mSeqParameter.mUpdateData->mActiveTrackFlag |= JAInter::SOUNDACTIVE_TempoProportion;
		}
	}
	virtual f32 getTempoProportion() // _48 (weak)
	{
		if (mState == SOUNDSTATE_Playing || mState == SOUNDSTATE_Fadeout) {
			return mSeqParameter.mTempo.mCurrentValue;
		}
		return -1.0f;
	}
	virtual void setVolumeU7(u8 value, u32 moveTime, u8 type) // _4C (weak)
	{
		int result = mSeqParameter.mVolumes[type].set(value / 127.0f, moveTime);
		if (result == JAInter::MOVEPARA_SetTarget) {
			mSeqParameter.mVolumeFlags |= 1 << type;
		}
		if (mSeqParameter.mUpdateData && result != JAInter::MOVEPARA_AlreadySet) {
			mSeqParameter.mUpdateData->mActiveTrackFlag |= JAInter::SOUNDACTIVE_Volume;
		}
	}
	virtual u8 getVolumeU7(u8 type) { return JAISequence::getVolume(type) * 127.0f; } // _50 (weak)
	virtual void setPanU7(u8 value, u32 moveTime, u8 type)                            // _54 (weak)
	{
		int result = mSeqParameter.mPans[type].set(value / 127.0f, moveTime);
		if (result == JAInter::MOVEPARA_SetTarget) {
			mSeqParameter.mPanFlags |= 1 << type;
		}
		if (mSeqParameter.mUpdateData && result != JAInter::MOVEPARA_AlreadySet) {
			mSeqParameter.mUpdateData->mActiveTrackFlag |= JAInter::SOUNDACTIVE_Pan;
		}
	}
	virtual u8 getPanU7(u8 type) { return JAISequence::getPan(type) * 127.0f; } // _58 (weak)
	virtual void setFxmixU7(u8 value, u32 moveTime, u8 type)                    // _5C (weak)
	{
		int result = mSeqParameter.mFxmixes[type].set(value / 127.0f, moveTime);
		if (result == JAInter::MOVEPARA_SetTarget) {
			mSeqParameter.mFxmixFlags |= 1 << type;
		}
		if (mSeqParameter.mUpdateData && result != JAInter::MOVEPARA_AlreadySet) {
			mSeqParameter.mUpdateData->mActiveTrackFlag |= JAInter::SOUNDACTIVE_Fxmix;
		}
	}
	virtual u8 getFxmixU7(u8 type) { return JAISequence::getFxmix(type) * 127.0f; } // _60 (weak)
	virtual void setDolbyU7(u8 value, u32 moveTime, u8 type)                        // _64 (weak)
	{
		f32 dolby = value / 127.0f;
		if (JAIBasic::getInterface()->mParamSoundOutputMode == 2 || mSeqParameter.mDolbys[type].mCurrentValue != (dolby = 0.0f)) {
			int result = mSeqParameter.mDolbys[type].set(dolby, moveTime);
			if (result == JAInter::MOVEPARA_SetTarget) {
				mSeqParameter.mDolbyFlags |= 1 << type;
			}
			if (mSeqParameter.mUpdateData && result != JAInter::MOVEPARA_AlreadySet) {
				mSeqParameter.mUpdateData->mActiveTrackFlag |= JAInter::SOUNDACTIVE_Dolby;
			}
		}
	}
	virtual u8 getDolbyU7(u8 type) { return JAISequence::getDolby(type) * 127.0f; } // _68 (weak)
	virtual u32 getFadeCounter();                                                   // _A4
	virtual void setPrepareFlag(u8 flag) { setSeqPrepareFlag(flag); }               // _A8 (weak)
	virtual void checkReady() { checkSeqReady(); }                                  // _AC (weak)

	void setSeqInterVolume(u8 type, f32 value, u32 moveTime);
	void setSeqInterPan(u8 type, f32 value, u32 moveTime);
	void setSeqInterPitch(u8 type, f32 value, u32 moveTime);
	void setTrackInterruptSwitch(u8, u8);
	void setTrackFxmix(u8 type, f32 value, u32 moveTime);
	void setTrackPortData(u8, u8, u16);
	void setSeqPrepareFlag(u8);
	bool checkSeqReady();
	f32 getSeqInterVolume(u8);

	// unused/inlined:
	void setSeqInterFxmix(u8 type, f32 value, u32 moveTime);
	void setSeqInterDolby(u8 type, f32 value, u32 moveTime);
	void setSeqTempoProportion(f32, u32);
	void setSeqPortData(u8, u16, u32);
	void setWaveReadMode(s32, s32);
	void setTrackVolume(u8 type, f32 value, u32 moveTime);
	void setTrackVolumeMulti(u8, u32, f32, u32);
	void setTrackMuteSwitch(u8, u8);
	void setTrackMuteSwitchMulti(u32, u8);
	void setTrackPan(u8 type, f32 value, u32 moveTime);
	void setTrackPanMulti(u8, u32, f32, u32);
	void setTrackPitch(u8 type, f32 value, u32 moveTime);
	void setTrackPitchMulti(u8, u32, f32, u32);
	void setTrackFxmixMulti(u8, u32, f32, u32);
	void setTrackDolby(u8 type, f32 value, u32 moveTime);
	void setTrackDolbyMulti(u8, u32, f32, u32);
	void getSeqInterPan(u8);
	void getSeqInterPitch(u8);
	void getSeqInterFxmix(u8);
	void getSeqInterDolby(u8);
	void getSeqTempoProportion();
	void getSeqPortData(u8);
	void getTrackParameterU7(u8, char);
	void getTrackParameterF32(u8, char);
	void getTrackPortData(u8, u8);

	inline JASTrack* getTrack() { return &mSeqParameter.mTrack; }

	JAInter::SeqParameter mSeqParameter; // _48
};

#endif
