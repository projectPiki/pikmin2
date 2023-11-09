#ifndef _JSYSTEM_JAI_JAISTREAM_H
#define _JSYSTEM_JAI_JAISTREAM_H

#include "JSystem/JAudio/JAI/JAInter.h"
#include "JSystem/JAudio/JAI/JAISound.h"
#include "JSystem/JAudio/JAI/JAInter/StreamMgr.h"
#include "types.h"

struct JAIStream : public JAISound {
	JAIStream();

	virtual void setPortData(u8, u16);            // _08 (weak)
	virtual u16 getPortData(u8);                  // _0C (weak)
	virtual void stop(u32);                       // _14 (weak)
	virtual void setVolume(f32 p1, u32 p2, u8 p3) // _1C (weak)
	{
		int result = _64[p3].set(p1, p2);
		if (result == 1) {
			_50 |= 1 << p3;
		}
		if (_1B4 != nullptr && result != 2) {
			_1B4->_18 |= 0x40000;
		}
	}
	virtual f32 getVolume(u8);                                                         // _20 (weak)
	virtual void setPan(f32, u32, u8);                                                 // _24 (weak)
	virtual f32 getPan(u8);                                                            // _28 (weak)
	virtual void setPitch(f32, u32, u8);                                               // _2C (weak)
	virtual f32 getPitch(u8);                                                          // _30 (weak)
	virtual void setFxmix(f32, u32, u8);                                               // _34 (weak)
	virtual f32 getFxmix(u8);                                                          // _38 (weak)
	virtual void setDolby(f32, u32, u8);                                               // _3C (weak)
	virtual f32 getDolby(u8);                                                          // _40 (weak)
	virtual void setVolumeU7(u8 p1, u32 p2, u8 p3) { setVolume(p1 / 127.0f, p2, p3); } // _4C (weak)
	virtual u8 getVolumeU7(u8);                                                        // _50 (weak)
	virtual void setPanU7(u8, u32, u8);                                                // _54 (weak)
	virtual u8 getPanU7(u8);                                                           // _58 (weak)
	virtual void setFxmixU7(u8, u32, u8);                                              // _5C (weak)
	virtual u8 getFxmixU7(u8);                                                         // _60 (weak)
	virtual void setDolbyU7(u8, u32, u8);                                              // _64 (weak)
	virtual u8 getDolbyU7(u8);                                                         // _68 (weak)
	virtual u32 getFadeCounter();                                                      // _A4
	virtual void setPrepareFlag(u8);                                                   // _A8 (weak)
	virtual void checkReady();                                                         // _AC (weak)

	void setStreamPrepareFlag(u8);
	bool checkStreamReady();
	void setChannelVolume(u8, f32, u32);
	void setChannelPan(u8, f32, u32);

	// unused/inlined:
	void setStreamMode(u32);
	void setStreamInterVolume(u8, f32, u32);
	void setStreamInterPan(u8, f32, u32);
	void setStreamInterPitch(u8, f32, u32);
	void setStreamInterFxmix(u8, f32, u32);
	void setStreamInterDolby(u8, f32, u32);
	void setChannelFxmix(u8, f32, u32);
	void setChannelDolby(u8, f32, u32);
	void getChannelVolume(u8);
	void getChannelPan(u8);
	void getChannelFxmix(u8);
	void getChannelDolby(u8);
	void getStreamInterVolume(u8);
	void getStreamInterPan(u8);
	void getStreamInterPitch(u8);
	void getStreamInterFxmix(u8);
	void getStreamInterDolby(u8);

	// _00-_10  = JSULink
	// _10      = VTABLE
	// _14-_48  = JAISound
	u8 _48;                                 // _48 - unknown
	u32 _4C;                                // _4C
	u32 _50;                                // _50
	u32 _54;                                // _54
	u32 _58;                                // _58
	u32 _5C;                                // _5C
	u32 _60;                                // _60
	JAInter::MoveParaSet _64[20];           // _64 - volume param sets?
	JAInter::MoveParaSet* _1A4;             // _1A4 - pitch param set?
	JAInter::MoveParaSet* _1A8;             // _1A8 - pitch param sets?
	JAInter::MoveParaSetInitZero* _1AC;     // _1AC - FxMix param
	JAInter::MoveParaSetInitZero* _1B0;     // _1B0
	JAInter::StreamMgr::StreamUpdate* _1B4; // _1B4 - unknown pointer
	uint _1B8;                              // _1B8
	u32 _1BC;                               // _1BC
	u32 _1C0;                               // _1C0
	u32 _1C4;                               // _1C4
	JAInter::MoveParaSet* _1C8;             // _1C8
	JAInter::MoveParaSet* _1CC;             // _1CC
	JAInter::MoveParaSet* _1D0;             // _1D0
	JAInter::MoveParaSet* _1D4;             // _1D4
};

#endif
