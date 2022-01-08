#ifndef _JSYSTEM_JAI_JAISOUND_H
#define _JSYSTEM_JAI_JAISOUND_H

#include "JSystem/JAI/JAInter.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JSU/JSUList.h"
#include "SoundID.h"
#include "types.h"

struct JAISound : public JSULink<JAISound> {
	JAISound();

	virtual void setPortData(unsigned char, unsigned short) = 0;     // _00
	virtual short getPortData(unsigned char)                = 0;     // _04
	virtual void start(unsigned long);                               // _08
	virtual void stop(unsigned long);                                // _0C
	virtual void release();                                          // _10
	virtual void setVolume(float, unsigned long, unsigned char) = 0; // _14
	virtual float getVolume(unsigned char)                      = 0; // _18
	virtual void setPan(float, unsigned long, unsigned char)    = 0; // _1C
	virtual float getPan(unsigned char)                         = 0; // _20
	virtual void setPitch(float, unsigned long, unsigned char)  = 0; // _24
	virtual float getPitch(unsigned char)                       = 0; // _28
	virtual void setFxmix(float, unsigned long, unsigned char)  = 0; // _2C
	virtual float getFxmix(unsigned char)                       = 0; // _30
	virtual void setDolby(float, unsigned long, unsigned char)  = 0; // _34
	virtual float getDolby(unsigned char)                       = 0; // _38
	virtual void setTempoProportion(float, unsigned long);           // _3C
	virtual float getTempoProportion();                              // _40
	virtual void setVolumeU7(unsigned char, unsigned long,
	                         unsigned char)
	    = 0;                                     // _44
	virtual void getVolumeU7(unsigned char) = 0; // _48
	virtual void setPanU7(unsigned char, unsigned long, unsigned char)
	    = 0;                                  // _4C
	virtual void getPanU7(unsigned char) = 0; // _50
	virtual void setFxmixU7(unsigned char, unsigned long, unsigned char)
	    = 0;                                    // _54
	virtual void getFxmixU7(unsigned char) = 0; // _58
	virtual void setDolbyU7(unsigned char, unsigned long, unsigned char)
	    = 0;                                                    // _5C
	virtual void getDolbyU7(unsigned char) = 0;                 // _60
	virtual void setDirectVolume(float, unsigned long);         // _64
	virtual void setDirectPan(float, unsigned long);            // _68
	virtual void setDirectPitch(float, unsigned long);          // _6C
	virtual void setDirectFxmix(float, unsigned long);          // _70
	virtual void setDirectDolby(float, unsigned long);          // _74
	virtual void setDemoVolume(float, unsigned long);           // _78
	virtual void setDemoPan(float, unsigned long);              // _7C
	virtual void setDemoPitch(float, unsigned long);            // _80
	virtual void setDemoFxmix(float, unsigned long);            // _84
	virtual void setDemoDolby(float, unsigned long);            // _88
	virtual void setDemoVolumeU7(unsigned char, unsigned long); // _8C
	virtual void setDemoPanU7(unsigned char, unsigned long);    // _90
	virtual void setDemoFxmixU7(unsigned char, unsigned long);  // _94
	virtual void setDemoDolbyU7(unsigned char, unsigned long);  // _98
	virtual void getFadeCounter() = 0;                          // _9C
	virtual void setPrepareFlag(unsigned char);                 // _A0
	virtual void checkReady();                                  // _A4
	virtual void setDistanceParameterMoveTime(unsigned char);   // _A8
	virtual void setAdjustPriority(short);                      // _AC
	virtual void setPositionDopplarCommon(unsigned long);       // _B0
	virtual void setDistanceVolumeCommon(float, unsigned char); // _B4
	virtual void setDistancePanCommon();                        // _B8
	virtual void setDistanceDolbyCommon();                      // _BC
	virtual void initParameter(void*, JAInter::Actor*, unsigned long,
	                           unsigned long, unsigned char,
	                           JAInter::SoundInfo*); // _C0
	virtual void onGet();                            // _C4
	virtual void onRelease();                        // _C8

	~JAISound();
	void initMultiMoveParameter(JAInter::MoveParaSet*, unsigned char,
	                            unsigned long, float, float, unsigned long);
	void getSwBit();
	void checkSwBit(unsigned long);
	void getInfoPriority();
	void clearMainSoundPPointer();
	void setPauseMode(unsigned char, unsigned char);
	void getPointer(unsigned char, char);
	void getActorGroundNumber();
	void getTrackPortRoute(unsigned char, unsigned char);
	void checkSoundHandle(unsigned long, void*);

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
	SoundID m_soundID;               // _20
	u8 _24[4];                       // _24
	u32 _28;                         // _28
	u32 _2C;                         // _2C
	u32 _30;                         // _30
	JGeometry::TVec3f _34;           // _34
	void* _38;                       // _38
	u32 _3C;                         // _3C
	void* _40;                       // _40
	JAInter::SoundInfo* m_soundInfo; // _44
};

#endif
