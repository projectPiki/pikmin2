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
	virtual u8 getVolumeU7(u8)             = 0; // _50 (weak)
	virtual void setPanU7(u8, u32, u8)     = 0; // _54 (weak)
	virtual u8 getPanU7(u8)                = 0; // _58 (weak)
	virtual void setFxmixU7(u8, u32, u8)   = 0; // _5C (weak)
	virtual u8 getFxmixU7(u8)              = 0; // _60 (weak)
	virtual void setDolbyU7(u8, u32, u8)   = 0; // _64 (weak)
	virtual u8 getDolbyU7(u8)              = 0; // _68 (weak)
	virtual void getFadeCounter()          = 0; // _A4
	virtual void setPrepareFlag(u8);            // _A8 (weak)
	virtual void checkReady();                  // _AC (weak)

	void setStreamPrepareFlag(u8);
	void checkStreamReady();
	void setChannelVolume(u8, float, u32);
	void setChannelPan(u8, float, u32);

	// unused/inlined:
	void setStreamMode(unsigned long);
	void setStreamInterVolume(unsigned char, float, unsigned long);
	void setStreamInterPan(unsigned char, float, unsigned long);
	void setStreamInterPitch(unsigned char, float, unsigned long);
	void setStreamInterFxmix(unsigned char, float, unsigned long);
	void setStreamInterDolby(unsigned char, float, unsigned long);
	void setChannelFxmix(unsigned char, float, unsigned long);
	void setChannelDolby(unsigned char, float, unsigned long);
	void getChannelVolume(unsigned char);
	void getChannelPan(unsigned char);
	void getChannelFxmix(unsigned char);
	void getChannelDolby(unsigned char);
	void getStreamInterVolume(unsigned char);
	void getStreamInterPan(unsigned char);
	void getStreamInterPitch(unsigned char);
	void getStreamInterFxmix(unsigned char);
	void getStreamInterDolby(unsigned char);

	// _00-_10  = JSULink
	// _10      = VTABLE
	// _14-_48  = JAISound
	u8 _48;                             // _48 - unknown
	u8 _49[7];                          // _49 - unknown/padding
	u32 _50;                            // _50
	u8 _54[0x10];                       // _54 - unknown/padding
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
