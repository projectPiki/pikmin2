#ifndef _JSYSTEM_JAI_JAIANIMESOUND_H
#define _JSYSTEM_JAI_JAIANIMESOUND_H

#include "JSystem/JAudio/JAI/JAInter/Object.h"
#include "JSystem/JAudio/JAI/JAInter.h"

struct JAIBasic;

// frame sound record in a BAS animation sound file
struct JAIAnimeFrameSoundData {
	u32 mSoundID;        // _00
	f32 mStartTime;      // _04
	f32 mEndTime;        // _08
	f32 mPitch;          // _0C
	u32 mPlayFlags;      // _10
	u8 mVolume;          // _14
	s8 mPitchScale;      // _15
	u8 mActivationFrame; // _16
	u8 mPan;             // _17
	s8 mVolumeScale;     // _18
	u8 _19[0x7];         // _19
};

// BAS header followed by mEntryNum frame sound records
struct JAIAnimeSoundData {
	u16 mEntryNum;                         // _00
	u16 _02;                               // _02
	u32 _04;                               // _04
	JAIAnimeFrameSoundData mSndEntries[1]; // _08, variable-length
};

struct JAIAnimeSound : public JAInter::Object {
	JAIAnimeSound(Vec*, JKRHeap*, u8);

	// virtual ~JAIAnimeSound() { }                                                 // _08 (weak)
	virtual void handleStop(u8, u32);                                          // _34
	virtual void playActorAnimSound(JAInter::Actor*, f32, u8);                 // _3C
	virtual void startAnimSound(u32, JAISound**, JAInter::Actor*, u8);         // _40
	virtual void setSpeedModifySound(JAISound*, JAIAnimeFrameSoundData*, f32); // _44

	void initActorAnimSound(JAIAnimeSoundData*, u32, f32, f32);
	int checkLoopStartCount(f32);
	int checkLoopEndCount(f32);
	void setAnimSoundActor(JAInter::Actor*, f32, f32, u8);

	// Unused/inlined:
	void initActorAnimSound(JAIAnimeSoundData*, JAInter::Actor, u32, f32, f32);
	void setLoopStartFrame(f32);
	void setLoopEndFrame(f32);
	void setLoopFrame(f32, f32);
	void setAnimSound(f32, f32, u8);
	void setAnimSound(JAIBasic*, f32, f32, u8);
	void setAnimObjectSound(f32, f32, u8);
	void setAnimSoundVec(Vec*, f32, f32, u32, u8);
	void setAnimSoundVec(JAIBasic*, Vec*, f32, f32, u32, u8);

	// _00 VTBL
	u8* mSoundStatus;                     // _40
	JAIAnimeFrameSoundData** mBasEntries; // _44
	u32 _48;                              // _48
	u32 _4C;                              // _4C
	u32 _50;                              // _50
	u32 _54;                              // _54
	u8 _58;                               // _58
	u32 mSoundFlags;                      // _5C
	u32 mLoopStartID;                     // _60
	u32 mLoopEndID;                       // _64
	u32 mAnimID;                          // _68
	u32 mFrameTimer;                      // _6C
	f32 mCurrentFrameTimer;               // _70
	f32 mAnimSpeed;                       // _74
	JAIAnimeSoundData* mSoundData;        // _78
};

#endif
