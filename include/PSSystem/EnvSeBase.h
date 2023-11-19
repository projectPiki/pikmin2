#ifndef _PSSYSTEM_ENVSEBASE_H
#define _PSSYSTEM_ENVSEBASE_H

#include "Dolphin/os.h"
#include "PSSystem/Reservator.h"
#include "JSystem/JSupport/JSUList.h"
#include "SoundID.h"

struct JAISound;

namespace PSSystem {
struct MoveParamSet {
	inline MoveParamSet(f32 p1, u32 p2, int p3, u8 p4)
	    : _00(p1)
	    , _04(p2)
	    , _08(p3)
	    , _0C(p4)
	{
	}

	f32 _00; // _00
	u32 _04; // _04
	int _08; // _08
	u8 _0C;  // _0C
};

struct EnvSeBase : public JSULink<EnvSeBase> {
	EnvSeBase(u32, f32);

	virtual void exec();                         // _08
	virtual JAISound* play();                    // _0C
	virtual u32 getCastType() { return 'base'; } // _10 (weak)
	virtual void setPanAndDolby(JAISound*) { }   // _14 (weak)

	void requestMoveParam(MoveParamSet);
	void doMoveParamRequest();
	void setPauseFlag(u8);

	inline SoundID getSoundID() const { return mSoundID; }

	// _00-_10 = JSULink
	// _10     = VTBL
	MoveParamSet mMoveParam; // _14
	SoundID mSoundID;        // _24
	f32 _28;                 // _28
	f32 _2C;                 // _2C
	f32 _30;                 // _30
	JAISound* mSound;        // _34
	u8 mPauseFlag;           // _38
	bool mIsOn;              // _39
	u8 _3A;                  // _3A
};

struct EnvSeMgr {
	EnvSeMgr() { }

	void setAllPauseFlag(u8);
	void on();
	void on(u32, bool);
	void off();
	void off(u32, bool);
	void reservePauseOff();
	void setVolumeRequest(f32, u32, u8);
	void exec();

	// inlined/unused:
	void setPauseFlag(u32, u8);

	JSUList<EnvSeBase> mEnvList;          // _00
	EnvSe_PauseOffReservator mReservator; // _0C
};
} // namespace PSSystem

#endif
