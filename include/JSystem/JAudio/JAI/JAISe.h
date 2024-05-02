#ifndef _JSYSTEM_JAI_JAISE_H
#define _JSYSTEM_JAI_JAISE_H

#include "JSystem/JAudio/JAI/JAISound.h"
#include "JSystem/JAudio/JAI/JAInter.h"
#include "JSystem/JAudio/JAI/JAInter/SeMgr.h"
#include "types.h"

struct JAISe : public JAISound {
	JAISe();

	virtual void setPortData(u8, u16);                                                                        // _08 (weak)
	virtual u16 getPortData(u8);                                                                              // _0C (weak)
	virtual void stop(u32 p1) { JAInter::SeMgr::releaseSeBuffer(this, p1); }                                  // _14 (weak)
	virtual void setVolume(f32 value, u32 moveTime, u8 type) { setSeInterVolume(type, value, moveTime, 0); }  // _1C (weak)
	virtual f32 getVolume(u8 type) { return mSeParam.mVolumes[type].mCurrentValue; }                          // _20 (weak)
	virtual void setPan(f32 value, u32 moveTime, u8 type) { mSeParam.mPans[type].set(value, moveTime); }      // _24 (weak)
	virtual f32 getPan(u8 type) { return mSeParam.mPans[type].mCurrentValue; }                                // _28 (weak)
	virtual void setPitch(f32 value, u32 moveTime, u8 type) { mSeParam.mPitches[type].set(value, moveTime); } // _2C (weak)
	virtual f32 getPitch(u8 type) { return mSeParam.mPitches[type].mCurrentValue; }                           // _30 (weak)
	virtual void setFxmix(f32 value, u32 moveTime, u8 type) { mSeParam.mFxmixes[type].set(value, moveTime); } // _34 (weak)
	virtual f32 getFxmix(u8 type) { return mSeParam.mFxmixes[type].mCurrentValue; }                           // _38 (weak)
	virtual void setDolby(f32 value, u32 moveTime, u8 type) { mSeParam.mDolbys[type].set(value, moveTime); }  // _3C (weak)
	virtual f32 getDolby(u8 type) { return mSeParam.mDolbys[type].mCurrentValue; }                            // _40 (weak)
	virtual void setVolumeU7(u8 value, u32 moveTime, u8 type)                                                 // _4C (weak)
	{
		f32 volume = value / 127.0f;
		mSeParam.mVolumes[type].set(volume, moveTime);
	}
	virtual u8 getVolumeU7(u8 type) { return mSeParam.mVolumes[type].mCurrentValue * 127.0f; } // _50 (weak)
	virtual void setPanU7(u8 value, u32 moveTime, u8 type)                                     // _54 (weak)
	{
		f32 pan = value / 127.0f;
		mSeParam.mPans[type].set(pan, moveTime);
	}
	virtual u8 getPanU7(u8 type) { return mSeParam.mPans[type].mCurrentValue * 127.0f; } // _58 (weak)
	virtual void setFxmixU7(u8 value, u32 moveTime, u8 type)                             // _5C (weak)
	{
		f32 fxmix = value / 127.0f;
		mSeParam.mFxmixes[type].set(fxmix, moveTime);
	}
	virtual u8 getFxmixU7(u8 type) { return mSeParam.mFxmixes[type].mCurrentValue * 127.0f; } // _60 (weak)
	virtual void setDolbyU7(u8 value, u32 moveTime, u8 type)                                  // _64 (weak)
	{
		f32 dolby = value / 127.0f;
		mSeParam.mDolbys[type].set(dolby, moveTime);
	}
	virtual u8 getDolbyU7(u8 type) { return mSeParam.mDolbys[type].mCurrentValue * 127.0f; } // _68 (weak)
	virtual u32 getFadeCounter();                                                            // _A4
	virtual void setSeDistanceParameters();                                                  // _D4
	virtual void setSeDistanceVolume(u8);                                                    // _D8
	virtual void setSeDistancePan(u8);                                                       // _DC
	virtual void setSeDistancePitch(u8);                                                     // _E0
	virtual void setSeDistanceFxmix(u8);                                                     // _E4
	virtual void setSeDistanceFir(u8);                                                       // _E8
	virtual void setSeDistanceDolby(u8);                                                     // _EC
	virtual void setSePositionDopplar();                                                     // _F0

	u8 getSeCategoryNumber();
	void setSeInterVolume(u8, f32, u32, u8);
	void setSeInterPan(u8, f32, u32, u8);
	void setSeInterDolby(u8, f32, u32, u8);

	// unused/inlined:
	void setSeInterRandomPara(f32*, u32, f32, f32);
	void setSeInterPitch(u8, f32, u32, f32);
	void setSeInterFxmix(u8, f32, u32, u8);
	void setSeInterFir(u8, u8, u32, u8);
	void setSePortData(u8, u16);
	void getSePortData(u8);
	void getSeParametermeterF32(u8, u8);
	void getSeInfoPointer();

	// _00      = VTABLE
	// _04-_48  = JAISound
	JAInter::SeParameter mSeParam; // _48
};

#endif
