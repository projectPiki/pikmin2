#ifndef _JSYSTEM_JAI_JAISTREAM_H
#define _JSYSTEM_JAI_JAISTREAM_H

#include "JSystem/JAudio/JAI/JAInter.h"
#include "JSystem/JAudio/JAI/JAISound.h"
#include "JSystem/JAudio/JAI/JAInter/StreamMgr.h"
#include "types.h"

struct JAIStream : public JAISound {
	JAIStream();

	virtual void setPortData(u8, u16);                       // _08 (weak)
	virtual u16 getPortData(u8);                             // _0C (weak)
	virtual void stop(u32);                                  // _14 (weak)
	virtual void setVolume(f32 value, u32 moveTime, u8 type) // _1C (weak)
	{
		int result = mStreamParameter.mVolumes[type].set(value, moveTime);
		if (result == JAInter::MOVEPARA_SetTarget) {
			mStreamParameter.mVolumeFlags |= 1 << type;
		}
		if (mStreamParameter.mUpdateData && result != JAInter::MOVEPARA_AlreadySet) {
			mStreamParameter.mUpdateData->mActiveTrackFlag |= JAInter::SOUNDACTIVE_Volume;
		}
	}
	virtual f32 getVolume(u8 type);                                                                          // _20 (weak)
	virtual void setPan(f32 value, u32 moveTime, u8 type);                                                   // _24 (weak)
	virtual f32 getPan(u8 type);                                                                             // _28 (weak)
	virtual void setPitch(f32 value, u32 moveTime, u8 type);                                                 // _2C (weak)
	virtual f32 getPitch(u8 type);                                                                           // _30 (weak)
	virtual void setFxmix(f32 value, u32 moveTime, u8 type);                                                 // _34 (weak)
	virtual f32 getFxmix(u8 type);                                                                           // _38 (weak)
	virtual void setDolby(f32 value, u32 moveTime, u8 type);                                                 // _3C (weak)
	virtual f32 getDolby(u8 type);                                                                           // _40 (weak)
	virtual void setVolumeU7(u8 value, u32 moveTime, u8 type) { setVolume(value / 127.0f, moveTime, type); } // _4C (weak)
	virtual u8 getVolumeU7(u8 type);                                                                         // _50 (weak)
	virtual void setPanU7(u8 value, u32 moveTime, u8 type);                                                  // _54 (weak)
	virtual u8 getPanU7(u8 type);                                                                            // _58 (weak)
	virtual void setFxmixU7(u8 value, u32 moveTime, u8 type);                                                // _5C (weak)
	virtual u8 getFxmixU7(u8 type);                                                                          // _60 (weak)
	virtual void setDolbyU7(u8 value, u32 moveTime, u8 type);                                                // _64 (weak)
	virtual u8 getDolbyU7(u8 type);                                                                          // _68 (weak)
	virtual u32 getFadeCounter();                                                                            // _A4
	virtual void setPrepareFlag(u8 flag) { setStreamPrepareFlag(flag); }                                     // _A8 (weak)
	virtual void checkReady() { checkStreamReady(); }                                                        // _AC (weak)

	void setStreamPrepareFlag(u8 flag);
	bool checkStreamReady();
	void setChannelVolume(u8 type, f32 value, u32 moveTime);
	void setChannelPan(u8 type, f32 value, u32 moveTime);

	// unused/inlined:
	void setStreamMode(u32);
	void setStreamInterVolume(u8 type, f32 value, u32 moveTime);
	void setStreamInterPan(u8 type, f32 value, u32 moveTime);
	void setStreamInterPitch(u8 type, f32 value, u32 moveTime);
	void setStreamInterFxmix(u8 type, f32 value, u32 moveTime);
	void setStreamInterDolby(u8 type, f32 value, u32 moveTime);
	void setChannelFxmix(u8 type, f32 value, u32 moveTime);
	void setChannelDolby(u8 type, f32 value, u32 moveTime);
	void getChannelVolume(u8 type);
	void getChannelPan(u8 type);
	void getChannelFxmix(u8 type);
	void getChannelDolby(u8 type);
	void getStreamInterVolume(u8 type);
	void getStreamInterPan(u8 type);
	void getStreamInterPitch(u8 type);
	void getStreamInterFxmix(u8 type);
	void getStreamInterDolby(u8 type);

	// _00-_10  = JSULink
	// _10      = VTABLE
	// _14-_48  = JAISound
	JAInter::StreamParameter mStreamParameter; // _48
};

#endif
