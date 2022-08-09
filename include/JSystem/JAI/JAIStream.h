#ifndef _JSYSTEM_JAI_JAISTREAM_H
#define _JSYSTEM_JAI_JAISTREAM_H

#include "JSystem/JAI/JAInter.h"
#include "JSystem/JAI/JAISound.h"
#include "types.h"

struct JAIStream : public JAISound {
	JAIStream();

	virtual void setPortData(u8, u16) = 0;      // _08 (weak)
	virtual short getPortData(u8)     = 0;      // _0C (weak)
	virtual void stop(u32);                     // _14 (weak)
	virtual void setVolume(float, u32, u8) = 0; // _1C (weak)
	virtual float getVolume(u8)            = 0; // _20 (weak)
	virtual void setPan(float, u32, u8)    = 0; // _24 (weak)
	virtual float getPan(u8)               = 0; // _28 (weak)
	virtual void setPitch(float, u32, u8)  = 0; // _2C (weak)
	virtual float getPitch(u8)             = 0; // _30 (weak)
	virtual void setFxmix(float, u32, u8)  = 0; // _34 (weak)
	virtual float getFxmix(u8)             = 0; // _38 (weak)
	virtual void setDolby(float, u32, u8)  = 0; // _3C (weak)
	virtual float getDolby(u8)             = 0; // _40 (weak)
	virtual void setVolumeU7(u8, u32, u8)  = 0; // _4C (weak)
	virtual void getVolumeU7(u8)           = 0; // _50 (weak)
	virtual void setPanU7(u8, u32, u8)     = 0; // _54 (weak)
	virtual void getPanU7(u8)              = 0; // _58 (weak)
	virtual void setFxmixU7(u8, u32, u8)   = 0; // _5C (weak)
	virtual void getFxmixU7(u8)            = 0; // _60 (weak)
	virtual void setDolbyU7(u8, u32, u8)   = 0; // _64 (weak)
	virtual void getDolbyU7(u8)            = 0; // _68 (weak)
	virtual void getFadeCounter()          = 0; // _A4
	virtual void setPrepareFlag(u8);            // _A8 (weak)
	virtual void checkReady();                  // _AC (weak)

	void setStreamPrepareFlag(u8);
	void checkStreamReady();
	void setChannelVolume(u8, float, u32);
	void setChannelPan(u8, float, u32);

	// _00-_10  = JSULink
	// _10      = VTABLE
	// _14-_48  = JAISound
	u8 _48;                             // _48 - unknown
	u8 _49[27];                         // _49 - unknown/padding
	JAInter::MoveParaSet _64[20];       // _64 - volume param sets?
	JAInter::MoveParaSet* _1A4;         // _1A4 - pitch param set?
	JAInter::MoveParaSet* _1A8;         // _1A8 - pitch param sets?
	JAInter::MoveParaSetInitZero* _1AC; // _1AC - FxMix param
	JAInter::MoveParaSetInitZero* _1B0; // _1B0
	void* _1B4;                         // _1B4 - unknown pointer
	uint _1B8;                          // _1B8
	u8 _1BC[0xC];                       // _1BC - unknown
	JAInter::MoveParaSet* _1C8;         // _1C8
	JAInter::MoveParaSet* _1CC;         // _1CC
	JAInter::MoveParaSet* _1D0;         // _1D0
	JAInter::MoveParaSet* _1D4;         // _1D4
};

#endif
