#ifndef _PSSYSTEM_ENVSEBASE_H
#define _PSSYSTEM_ENVSEBASE_H

#include "Dolphin/os.h"
#include "PSSystem/Reservator.h"
#include "JSystem/JSupport/JSUList.h"
#include "SoundID.h"
#include "P2Macros.h"

struct JAISound;

namespace PSSystem {
struct MoveParamSet {
	inline MoveParamSet(f32 value, u32 time, int type, u8 soundType)
	    : mValue(value)
	    , mMoveTime(time)
	    , mParamType(type)
	    , mSoundType(soundType)
	{
	}

	f32 mValue;     // _00
	u32 mMoveTime;  // _04
	int mParamType; // _08, see JASTrack::ParamType enum
	u8 mSoundType;  // _0C, see JAISoundType enum
};

struct IdLink : public JSULink<IdLink> {
	IdLink(u32 id)
	    : JSULink(this)
	    , mId(id)
	{
	}

	~IdLink() { }

	// _00-_10 = JSULink
	u32 mId; // _10
};

struct IdList : public JSUList<IdLink> {
	IdList() { }

	~IdList()
	{
		JSULink<IdLink>* link;
		while (link = (JSULink<IdLink>*)mHead) {
			remove(link);
			delete (IdLink*)link->getObjectPtr();
		}
	}

	// _00-_0C = JSUList
	IdLink* mNextLink; // _0C, I have no idea if this should actually exist or not
};

struct EnvSeBase : public JSULink<EnvSeBase> {
	EnvSeBase(u32 soundID, f32 volume);

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
	f32 mVolume;             // _28
	f32 mVolume2;            // _2C, also a volume?
	f32 _30;                 // _30, fx mix value?
	JAISound* mSound;        // _34
	u8 mPauseFlag;           // _38
	bool mIsOn;              // _39
	u8 _3A;                  // _3A, forces mPauseFlag to 0?
};

struct EnvSeMgr {
	EnvSeMgr()
	{
		mReservator.mMgr = this;
		FORCE_DONT_INLINE;
	}

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
