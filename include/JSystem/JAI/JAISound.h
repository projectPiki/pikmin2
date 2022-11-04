#ifndef _JSYSTEM_JAI_JAISOUND_H
#define _JSYSTEM_JAI_JAISOUND_H

#include "Dolphin/vec.h"
#include "JSystem/JAI/JAIBasic.h"
#include "JSystem/JAI/JAIGlobalParameter.h"
#include "JSystem/JAI/JAInter.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JSupport/JSUList.h"
#include "SoundID.h"
#include "types.h"

namespace JAInter {
struct Actor;
struct MoveParaSet;
struct SoundInfo;
} // namespace JAInter

/**
 * @size{0x1C}
 * @fabricated
 */
struct JAISound_0x34 {
	f32 _00; // _00
	f32 _04; // _04
	f32 _08; // _08
	f32 _0C; // _0C
	f32 _10; // _10
	f32 _14; // _14
	f32 _18; // _18
};

struct JAISound : public JSULink<JAISound> {
	JAISound();

	virtual void setPortData(u8, u16) = 0;            // _08
	virtual u16 getPortData(u8)       = 0;            // _0C
	virtual void start(u32);                          // _10
	virtual void stop(u32);                           // _14
	virtual void release();                           // _18
	virtual void setVolume(float, u32, u8) = 0;       // _1C
	virtual float getVolume(u8)            = 0;       // _20
	virtual void setPan(float, u32, u8)    = 0;       // _24
	virtual float getPan(u8)               = 0;       // _28
	virtual void setPitch(float, u32, u8)  = 0;       // _2C
	virtual float getPitch(u8)             = 0;       // _30
	virtual void setFxmix(float, u32, u8)  = 0;       // _34
	virtual float getFxmix(u8)             = 0;       // _38
	virtual void setDolby(float, u32, u8)  = 0;       // _3C
	virtual float getDolby(u8)             = 0;       // _40
	virtual void setTempoProportion(float, u32);      // _44 (weak)
	virtual float getTempoProportion();               // _48 (weak)
	virtual void setVolumeU7(u8, u32, u8) = 0;        // _4C
	virtual u8 getVolumeU7(u8)            = 0;        // _50
	virtual void setPanU7(u8, u32, u8)    = 0;        // _54
	virtual u8 getPanU7(u8)               = 0;        // _58
	virtual void setFxmixU7(u8, u32, u8)  = 0;        // _5C
	virtual u8 getFxmixU7(u8)             = 0;        // _60
	virtual void setDolbyU7(u8, u32, u8)  = 0;        // _64
	virtual u8 getDolbyU7(u8)             = 0;        // _68
	virtual void setDirectVolume(float, u32);         // _6C (weak)
	virtual void setDirectPan(float, u32);            // _70 (weak)
	virtual void setDirectPitch(float, u32);          // _74 (weak)
	virtual void setDirectFxmix(float, u32);          // _78 (weak)
	virtual void setDirectDolby(float, u32);          // _7C (weak)
	virtual void setDemoVolume(float, u32);           // _80 (weak)
	virtual void setDemoPan(float, u32);              // _84 (weak)
	virtual void setDemoPitch(float, u32);            // _88 (weak)
	virtual void setDemoFxmix(float, u32);            // _8C (weak)
	virtual void setDemoDolby(float, u32);            // _90 (weak)
	virtual void setDemoVolumeU7(u8, u32);            // _94 (weak)
	virtual void setDemoPanU7(u8, u32);               // _98 (weak)
	virtual void setDemoFxmixU7(u8, u32);             // _9C (weak)
	virtual void setDemoDolbyU7(u8, u32);             // _A0 (weak)
	virtual u32 getFadeCounter() = 0;                 // _A4
	virtual void setPrepareFlag(u8);                  // _A8
	virtual void checkReady();                        // _AC
	virtual void setDistanceParameterMoveTime(u8);    // _B0 (weak)
	virtual void setAdjustPriority(short);            // _B4 (weak)
	virtual float setPositionDopplarCommon(u32);      // _B8
	virtual float setDistanceVolumeCommon(float, u8); // _BC
	virtual float setDistancePanCommon();             // _C0
	virtual float setDistanceDolbyCommon();           // _C4
	virtual void initParameter(void*, JAInter::Actor*, u32, u32, u8,
	                           JAInter::SoundInfo*); // _C8
	virtual void onGet();                            // _CC (weak)
	virtual void onRelease();                        // _D0 (weak)

	~JAISound();
	void initMultiMoveParameter(JAInter::MoveParaSet*, u8, u32, float, float, u32);
	u32 getSwBit();
	u32 checkSwBit(u32);
	u32 getInfoPriority();
	void clearMainSoundPPointer();
	void setPauseMode(u8, u8);
	u32 getTrackPortRoute(u8, u8);
	bool checkSoundHandle(u32, void*);

	// unused/inlined:
	void getPointer(u8, char);
	void getActorGroundNumber();

	// _00 - _10: JSULink
	// VTBL _10
	u8 _14;                          // _14
	u8 _15;                          // _15
	u8 _16;                          // _16
	u8 _17;                          // _17
	u8 _18;                          // _18
	u8 m_distanceParameterMoveTime;  // _19
	u8 _1A;                          // _1A
	u8 _1B;                          // _1B
	short m_adjustPriority;          // _1C
	u32 m_soundID;                   // _20
	u8 _24[4];                       // _24
	u32 _28;                         // _28
	u32 _2C;                         // _2C
	u32 _30;                         // _30
	JAISound_0x34* _34;              // _34
	void* _38;                       // _38
	Vec* _3C;                        // _3C
	void** _40;                      // _40
	JAInter::SoundInfo* m_soundInfo; // _44
};

#endif
