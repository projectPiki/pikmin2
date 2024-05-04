#ifndef _JSYSTEM_JAI_JAIANIMESOUND_H
#define _JSYSTEM_JAI_JAIANIMESOUND_H

#include "JSystem/JAudio/JAI/JAInter/Object.h"
#include "JSystem/JAudio/JAI/JAInter.h"

struct JAIBasic;

/**
 * @fabricated
 * @size{0x20}
 */
struct JAIAnimeSoundDataEntry {
	f32 mTime;    // _00 something dumb going on with all of this
	u8 _04[0x1C]; // _04 - unknown
};

// represenation of contents of .bas file, maybe
struct JAIAnimeSoundData {
	u16 mEntryNum;                       // _00
	u32 _04;                             // _04 - unknown
	u32 _08;                             // _08
	JAIAnimeSoundDataEntry* mSndEntries; // _0C
	u8 _10[8];                           // _10 - unknown
	u8 _18;                              // _18
};

struct JAIAnimeFrameSoundData {
	u32 mSoundID;        // _00 none of the values here make senese
	f32 mStartTime;      // _04 Im pretty sure its just an entry
	f32 mPlaybackTimer;  // _08 from a .bas file, the first few
	f32 mPitch;          // _0C members line up, but the later stuff
	u32 mPlayFlags;      // _10 doesnt
	u8 mPanning;         // _14
	s8 mPitchScale;      // _15
	u8 mActivationFrame; // _16
	u8 mVelocity;        // _17
	s8 mPanOffsetScale;  // _18
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
