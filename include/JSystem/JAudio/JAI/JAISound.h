#ifndef _JSYSTEM_JAI_JAISOUND_H
#define _JSYSTEM_JAI_JAISOUND_H

#include "Dolphin/vec.h"
#include "JSystem/JAudio/JAI/JAIBasic.h"
#include "JSystem/JAudio/JAI/JAIGlobalParameter.h"
#include "JSystem/JAudio/JAI/JAInter.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JSupport/JSUList.h"
#include "SoundID.h"
#include "types.h"

enum JAISoundType {
	SOUNDPARAM_Unk0     = 0,
	SOUNDPARAM_Dopplar  = 1,
	SOUNDPARAM_Demo     = 2,
	SOUNDPARAM_Unk3     = 3,
	SOUNDPARAM_Distance = 4,
	SOUNDPARAM_Unk5     = 5,
	SOUNDPARAM_Direct   = 6,
	SOUNDPARAM_Fadeout  = 7,
	SOUNDPARAM_Unk8     = 8,
	SOUNDPARAM_Unk9     = 9,
	SOUNDPARAM_Unk10    = 10,
	SOUNDPARAM_Pause    = 11,
};

enum JAISoundState {
	SOUNDSTATE_Inactive = 0,
	SOUNDSTATE_Stored   = 1,
	SOUNDSTATE_Loaded   = 2,
	SOUNDSTATE_Ready    = 3,
	SOUNDSTATE_Playing  = 4,
	SOUNDSTATE_Fadeout  = 5,
};

enum JAISoundPauseMode {
	SOUNDPAUSE_Unk0 = 0,
	SOUNDPAUSE_Unk1 = 1,
	SOUNDPAUSE_Unk2 = 2,
	SOUNDPAUSE_Unk3 = 3,
	SOUNDPAUSE_Unk4 = 4,
	SOUNDPAUSE_Unk5 = 8,
};

namespace JAInter {
struct Actor;
struct MoveParaSet;
} // namespace JAInter

/**
 * @size{0x1C}
 * @fabricated
 */
struct JAISound_0x34 {
	inline void setVec(Vec& vec, f32 p1)
	{
		mPosition = vec;
		_0C.x     = p1;
	}

	Vec mPosition; // _00
	Vec _0C;       // _0C
	f32 mDistance; // _18
};

struct JAISound : public JSULink<JAISound> {
	JAISound();

	virtual void setPortData(u8, u16) = 0;                                                                   // _08
	virtual u16 getPortData(u8)       = 0;                                                                   // _0C
	virtual void start(u32);                                                                                 // _10
	virtual void stop(u32);                                                                                  // _14
	virtual void release();                                                                                  // _18
	virtual void setVolume(f32 value, u32 moveTime, u8 type) = 0;                                            // _1C
	virtual f32 getVolume(u8 type)                           = 0;                                            // _20
	virtual void setPan(f32 value, u32 moveTime, u8 type)    = 0;                                            // _24
	virtual f32 getPan(u8 type)                              = 0;                                            // _28
	virtual void setPitch(f32 value, u32 moveTime, u8 type)  = 0;                                            // _2C
	virtual f32 getPitch(u8 type)                            = 0;                                            // _30
	virtual void setFxmix(f32 value, u32 moveTime, u8 type)  = 0;                                            // _34
	virtual f32 getFxmix(u8 type)                            = 0;                                            // _38
	virtual void setDolby(f32 value, u32 moveTime, u8 type)  = 0;                                            // _3C
	virtual f32 getDolby(u8 type)                            = 0;                                            // _40
	virtual void setTempoProportion(f32 value, u32 moveTime) { }                                             // _44 (weak)
	virtual f32 getTempoProportion() { return 1.0f; }                                                        // _48 (weak)
	virtual void setVolumeU7(u8 value, u32 moveTime, u8 type) = 0;                                           // _4C
	virtual u8 getVolumeU7(u8 type)                           = 0;                                           // _50
	virtual void setPanU7(u8 value, u32 moveTime, u8 type)    = 0;                                           // _54
	virtual u8 getPanU7(u8 type)                              = 0;                                           // _58
	virtual void setFxmixU7(u8 value, u32 moveTime, u8 type)  = 0;                                           // _5C
	virtual u8 getFxmixU7(u8 type)                            = 0;                                           // _60
	virtual void setDolbyU7(u8 value, u32 moveTime, u8 type)  = 0;                                           // _64
	virtual u8 getDolbyU7(u8 type)                            = 0;                                           // _68
	virtual void setDirectVolume(f32 value, u32 moveTime) { setVolume(value, moveTime, SOUNDPARAM_Direct); } // _6C (weak)
	virtual void setDirectPan(f32 value, u32 moveTime) { setPan(value, moveTime, SOUNDPARAM_Direct); }       // _70 (weak)
	virtual void setDirectPitch(f32 value, u32 moveTime) { setPitch(value, moveTime, SOUNDPARAM_Direct); }   // _74 (weak)
	virtual void setDirectFxmix(f32 value, u32 moveTime) { setFxmix(value, moveTime, SOUNDPARAM_Direct); }   // _78 (weak)
	virtual void setDirectDolby(f32 value, u32 moveTime) { setDolby(value, moveTime, SOUNDPARAM_Direct); }   // _7C (weak)
	virtual void setDemoVolume(f32 value, u32 moveTime) { setVolume(value, moveTime, SOUNDPARAM_Demo); }     // _80 (weak)
	virtual void setDemoPan(f32 value, u32 moveTime) { setPan(value, moveTime, SOUNDPARAM_Demo); }           // _84 (weak)
	virtual void setDemoPitch(f32 value, u32 moveTime) { setPitch(value, moveTime, SOUNDPARAM_Demo); }       // _88 (weak)
	virtual void setDemoFxmix(f32 value, u32 moveTime) { setFxmix(value, moveTime, SOUNDPARAM_Demo); }       // _8C (weak)
	virtual void setDemoDolby(f32 value, u32 moveTime) { setDolby(value, moveTime, SOUNDPARAM_Demo); }       // _90 (weak)
	virtual void setDemoVolumeU7(u8 value, u32 moveTime) { setVolumeU7(value, moveTime, SOUNDPARAM_Demo); }  // _94 (weak)
	virtual void setDemoPanU7(u8 value, u32 moveTime) { setPanU7(value, moveTime, SOUNDPARAM_Demo); }        // _98 (weak)
	virtual void setDemoFxmixU7(u8 value, u32 moveTime) { setFxmixU7(value, moveTime, SOUNDPARAM_Demo); }    // _9C (weak)
	virtual void setDemoDolbyU7(u8 value, u32 moveTime) { setDolbyU7(value, moveTime, SOUNDPARAM_Demo); }    // _A0 (weak)
	virtual u32 getFadeCounter() = 0;                                                                        // _A4
	virtual void setPrepareFlag(u8 flag);                                                                    // _A8
	virtual void checkReady();                                                                               // _AC
	virtual void setDistanceParameterMoveTime(u8 moveTime) { mDistanceParameterMoveTime = moveTime; }        // _B0 (weak)
	virtual void setAdjustPriority(s16 prio) { mAdjustPriority = prio; }                                     // _B4 (weak)
	virtual f32 setPositionDopplarCommon(u32 moveTime);                                                      // _B8
	virtual f32 setDistanceVolumeCommon(f32 value, u8 moveTime);                                             // _BC
	virtual f32 setDistancePanCommon();                                                                      // _C0
	virtual f32 setDistanceDolbyCommon();                                                                    // _C4
	virtual void initParameter(void*, JAInter::Actor*, u32, u32, u8,
	                           JAInter::SoundInfo*); // _C8
	virtual void onGet();                            // _CC (weak)
	virtual void onRelease();                        // _D0 (weak)

	~JAISound();
	void initMultiMoveParameter(JAInter::MoveParaSet*, u8, u32, f32, f32, u32);
	u32 getSwBit();
	u32 checkSwBit(u32);
	u8 getInfoPriority();
	void clearMainSoundPPointer();
	void setPauseMode(u8 pauseMode, u8 volume);
	u32 getTrackPortRoute(u8, u8);
	u32 checkSoundHandle(u32, void*);

	// unused/inlined:
	void getPointer(u8, char);
	void getActorGroundNumber();

	inline JAISound_0x34* getSoundObj() { return mSoundObj; }
	inline u8 getTrackNumber() { return _14; }

	// _00 - _10: JSULink
	// VTBL _10
	u8 _14;                         // _14
	u8 mState;                      // _15
	u8 _16;                         // _16
	u8 _17;                         // _17
	u8 _18;                         // _18
	u8 mDistanceParameterMoveTime;  // _19
	u8 _1A;                         // _1A
	u8 _1B;                         // _1B
	s16 mAdjustPriority;            // _1C
	u32 mSoundID;                   // _20
	u32 _24;                        // _24
	u32 mFadeCounter;               // _28
	u32 _2C;                        // _2C
	u32 _30;                        // _30
	JAISound_0x34* mSoundObj;       // _34
	void* mCreatureObj;             // _38
	Vec* _3C;                       // _3C
	void** mMainSoundPPointer;      // _40, ptr to main sound ptr
	JAInter::SoundInfo* mSoundInfo; // _44
};

#endif
