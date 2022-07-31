#ifndef _JAISOUND_H
#define _JAISOUND_H

/*
    __vt__8JAISound:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte start__8JAISoundFUl
    .4byte stop__8JAISoundFUl
    .4byte release__8JAISoundFv
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte setTempoProportion__8JAISoundFfUl
    .4byte getTempoProportion__8JAISoundFv
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte setDirectVolume__8JAISoundFfUl
    .4byte setDirectPan__8JAISoundFfUl
    .4byte setDirectPitch__8JAISoundFfUl
    .4byte setDirectFxmix__8JAISoundFfUl
    .4byte setDirectDolby__8JAISoundFfUl
    .4byte setDemoVolume__8JAISoundFfUl
    .4byte setDemoPan__8JAISoundFfUl
    .4byte setDemoPitch__8JAISoundFfUl
    .4byte setDemoFxmix__8JAISoundFfUl
    .4byte setDemoDolby__8JAISoundFfUl
    .4byte setDemoVolumeU7__8JAISoundFUcUl
    .4byte setDemoPanU7__8JAISoundFUcUl
    .4byte setDemoFxmixU7__8JAISoundFUcUl
    .4byte setDemoDolbyU7__8JAISoundFUcUl
    .4byte 0
    .4byte setPrepareFlag__8JAISoundFUc
    .4byte checkReady__8JAISoundFv
    .4byte setDistanceParameterMoveTime__8JAISoundFUc
    .4byte setAdjustPriority__8JAISoundFs
    .4byte setPositionDopplarCommon__8JAISoundFUl
    .4byte setDistanceVolumeCommon__8JAISoundFfUc
    .4byte setDistancePanCommon__8JAISoundFv
    .4byte setDistanceDolbyCommon__8JAISoundFv
    .4byte initParameter__8JAISoundFPvPQ27JAInter5ActorUlUlUcPQ27JAInter9SoundInfo
    .4byte onGet__8JAISoundFv
    .4byte onRelease__8JAISoundFv
*/

struct JAISound {
	virtual void _08() = 0;                                                                                               // _08
	virtual void _0C() = 0;                                                                                               // _0C
	virtual void start(unsigned long);                                                                                    // _10
	virtual void stop(unsigned long);                                                                                     // _14
	virtual void release();                                                                                               // _18
	virtual void _1C() = 0;                                                                                               // _1C
	virtual void _20() = 0;                                                                                               // _20
	virtual void _24() = 0;                                                                                               // _24
	virtual void _28() = 0;                                                                                               // _28
	virtual void _2C() = 0;                                                                                               // _2C
	virtual void _30() = 0;                                                                                               // _30
	virtual void _34() = 0;                                                                                               // _34
	virtual void _38() = 0;                                                                                               // _38
	virtual void _3C() = 0;                                                                                               // _3C
	virtual void _40() = 0;                                                                                               // _40
	virtual void setTempoProportion(float, unsigned long);                                                                // _44 (weak)
	virtual void getTempoProportion();                                                                                    // _48 (weak)
	virtual void _4C() = 0;                                                                                               // _4C
	virtual void _50() = 0;                                                                                               // _50
	virtual void _54() = 0;                                                                                               // _54
	virtual void _58() = 0;                                                                                               // _58
	virtual void _5C() = 0;                                                                                               // _5C
	virtual void _60() = 0;                                                                                               // _60
	virtual void _64() = 0;                                                                                               // _64
	virtual void _68() = 0;                                                                                               // _68
	virtual void setDirectVolume(float, unsigned long);                                                                   // _6C (weak)
	virtual void setDirectPan(float, unsigned long);                                                                      // _70 (weak)
	virtual void setDirectPitch(float, unsigned long);                                                                    // _74 (weak)
	virtual void setDirectFxmix(float, unsigned long);                                                                    // _78 (weak)
	virtual void setDirectDolby(float, unsigned long);                                                                    // _7C (weak)
	virtual void setDemoVolume(float, unsigned long);                                                                     // _80 (weak)
	virtual void setDemoPan(float, unsigned long);                                                                        // _84 (weak)
	virtual void setDemoPitch(float, unsigned long);                                                                      // _88 (weak)
	virtual void setDemoFxmix(float, unsigned long);                                                                      // _8C (weak)
	virtual void setDemoDolby(float, unsigned long);                                                                      // _90 (weak)
	virtual void setDemoVolumeU7(unsigned char, unsigned long);                                                           // _94 (weak)
	virtual void setDemoPanU7(unsigned char, unsigned long);                                                              // _98 (weak)
	virtual void setDemoFxmixU7(unsigned char, unsigned long);                                                            // _9C (weak)
	virtual void setDemoDolbyU7(unsigned char, unsigned long);                                                            // _A0 (weak)
	virtual void _A4() = 0;                                                                                               // _A4
	virtual void setPrepareFlag(unsigned char);                                                                           // _A8
	virtual void checkReady();                                                                                            // _AC
	virtual void setDistanceParameterMoveTime(unsigned char);                                                             // _B0 (weak)
	virtual void setAdjustPriority(short);                                                                                // _B4 (weak)
	virtual void setPositionDopplarCommon(unsigned long);                                                                 // _B8
	virtual void setDistanceVolumeCommon(float, unsigned char);                                                           // _BC
	virtual void setDistancePanCommon();                                                                                  // _C0
	virtual void setDistanceDolbyCommon();                                                                                // _C4
	virtual void initParameter(void*, JAInter::Actor*, unsigned long, unsigned long, unsigned char, JAInter::SoundInfo*); // _C8
	virtual void onGet();                                                                                                 // _CC (weak)
	virtual void onRelease();                                                                                             // _D0 (weak)

	void getSwBit();
	void checkSwBit(unsigned long);
	void getInfoPriority();
	void clearMainSoundPPointer();
	void setPauseMode(unsigned char, unsigned char);
	void getTrackPortRoute(unsigned char, unsigned char);
	void checkSoundHandle(unsigned long, void*);
};

#endif
