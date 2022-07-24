#ifndef _PSM_SESOUND_H
#define _PSM_SESOUND_H

/*
    __vt__Q23PSM7SeSound:
    .4byte 0
    .4byte 0
    .4byte setPortData__5JAISeFUcUs
    .4byte getPortData__5JAISeFUc
    .4byte start__8JAISoundFUl
    .4byte stop__5JAISeFUl
    .4byte release__8JAISoundFv
    .4byte setVolume__5JAISeFfUlUc
    .4byte getVolume__5JAISeFUc
    .4byte setPan__5JAISeFfUlUc
    .4byte getPan__5JAISeFUc
    .4byte setPitch__5JAISeFfUlUc
    .4byte getPitch__5JAISeFUc
    .4byte setFxmix__5JAISeFfUlUc
    .4byte getFxmix__5JAISeFUc
    .4byte setDolby__5JAISeFfUlUc
    .4byte getDolby__5JAISeFUc
    .4byte setTempoProportion__8JAISoundFfUl
    .4byte getTempoProportion__8JAISoundFv
    .4byte setVolumeU7__5JAISeFUcUlUc
    .4byte getVolumeU7__5JAISeFUc
    .4byte setPanU7__5JAISeFUcUlUc
    .4byte getPanU7__5JAISeFUc
    .4byte setFxmixU7__5JAISeFUcUlUc
    .4byte getFxmixU7__5JAISeFUc
    .4byte setDolbyU7__5JAISeFUcUlUc
    .4byte getDolbyU7__5JAISeFUc
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
    .4byte getFadeCounter__5JAISeFv
    .4byte setPrepareFlag__8JAISoundFUc
    .4byte checkReady__8JAISoundFv
    .4byte setDistanceParameterMoveTime__8JAISoundFUc
    .4byte setAdjustPriority__8JAISoundFs
    .4byte setPositionDopplarCommon__8JAISoundFUl
    .4byte setDistanceVolumeCommon__Q23PSM7SeSoundFfUc
    .4byte setDistancePanCommon__8JAISoundFv
    .4byte setDistanceDolbyCommon__8JAISoundFv
    .4byte initParameter__Q23PSM7SeSoundFPvPQ27JAInter5ActorUlUlUcPQ27JAInter9SoundInfo
    .4byte onGet__Q23PSM7SeSoundFv
    .4byte onRelease__Q23PSM7SeSoundFv
    .4byte setSeDistanceParameters__5JAISeFv
    .4byte setSeDistanceVolume__5JAISeFUc
    .4byte setSeDistancePan__Q23PSM7SeSoundFUc
    .4byte setSeDistancePitch__5JAISeFUc
    .4byte setSeDistanceFxmix__5JAISeFUc
    .4byte setSeDistanceFir__5JAISeFUc
    .4byte setSeDistanceDolby__Q23PSM7SeSoundFUc
    .4byte setSePositionDopplar__5JAISeFv
*/

struct JAISe {
	virtual void setPortData(unsigned char, unsigned short);               // _08
	virtual void getPortData(unsigned char);                               // _0C
	virtual void _10() = 0;                                                // _10
	virtual void stop(unsigned long);                                      // _14
	virtual void _18() = 0;                                                // _18
	virtual void setVolume(float, unsigned long, unsigned char);           // _1C
	virtual void getVolume(unsigned char);                                 // _20
	virtual void setPan(float, unsigned long, unsigned char);              // _24
	virtual void getPan(unsigned char);                                    // _28
	virtual void setPitch(float, unsigned long, unsigned char);            // _2C
	virtual void getPitch(unsigned char);                                  // _30
	virtual void setFxmix(float, unsigned long, unsigned char);            // _34
	virtual void getFxmix(unsigned char);                                  // _38
	virtual void setDolby(float, unsigned long, unsigned char);            // _3C
	virtual void getDolby(unsigned char);                                  // _40
	virtual void _44() = 0;                                                // _44
	virtual void _48() = 0;                                                // _48
	virtual void setVolumeU7(unsigned char, unsigned long, unsigned char); // _4C
	virtual void getVolumeU7(unsigned char);                               // _50
	virtual void setPanU7(unsigned char, unsigned long, unsigned char);    // _54
	virtual void getPanU7(unsigned char);                                  // _58
	virtual void setFxmixU7(unsigned char, unsigned long, unsigned char);  // _5C
	virtual void getFxmixU7(unsigned char);                                // _60
	virtual void setDolbyU7(unsigned char, unsigned long, unsigned char);  // _64
	virtual void getDolbyU7(unsigned char);                                // _68
	virtual void _6C() = 0;                                                // _6C
	virtual void _70() = 0;                                                // _70
	virtual void _74() = 0;                                                // _74
	virtual void _78() = 0;                                                // _78
	virtual void _7C() = 0;                                                // _7C
	virtual void _80() = 0;                                                // _80
	virtual void _84() = 0;                                                // _84
	virtual void _88() = 0;                                                // _88
	virtual void _8C() = 0;                                                // _8C
	virtual void _90() = 0;                                                // _90
	virtual void _94() = 0;                                                // _94
	virtual void _98() = 0;                                                // _98
	virtual void _9C() = 0;                                                // _9C
	virtual void _A0() = 0;                                                // _A0
	virtual void getFadeCounter();                                         // _A4
	virtual void _A8() = 0;                                                // _A8
	virtual void _AC() = 0;                                                // _AC
	virtual void _B0() = 0;                                                // _B0
	virtual void _B4() = 0;                                                // _B4
	virtual void _B8() = 0;                                                // _B8
	virtual void _BC() = 0;                                                // _BC
	virtual void _C0() = 0;                                                // _C0
	virtual void _C4() = 0;                                                // _C4
	virtual void _C8() = 0;                                                // _C8
	virtual void _CC() = 0;                                                // _CC
	virtual void _D0() = 0;                                                // _D0
	virtual void setSeDistanceParameters();                                // _D4
	virtual void setSeDistanceVolume(unsigned char);                       // _D8
	virtual void _DC() = 0;                                                // _DC
	virtual void setSeDistancePitch(unsigned char);                        // _E0
	virtual void setSeDistanceFxmix(unsigned char);                        // _E4
	virtual void setSeDistanceFir(unsigned char);                          // _E8
	virtual void _EC() = 0;                                                // _EC
	virtual void setSePositionDopplar();                                   // _F0

	// _00 VTBL
};

struct JAISound {
	virtual void _08() = 0;                                     // _08
	virtual void _0C() = 0;                                     // _0C
	virtual void start(unsigned long);                          // _10
	virtual void _14() = 0;                                     // _14
	virtual void release();                                     // _18
	virtual void _1C() = 0;                                     // _1C
	virtual void _20() = 0;                                     // _20
	virtual void _24() = 0;                                     // _24
	virtual void _28() = 0;                                     // _28
	virtual void _2C() = 0;                                     // _2C
	virtual void _30() = 0;                                     // _30
	virtual void _34() = 0;                                     // _34
	virtual void _38() = 0;                                     // _38
	virtual void _3C() = 0;                                     // _3C
	virtual void _40() = 0;                                     // _40
	virtual void setTempoProportion(float, unsigned long);      // _44
	virtual void getTempoProportion();                          // _48
	virtual void _4C() = 0;                                     // _4C
	virtual void _50() = 0;                                     // _50
	virtual void _54() = 0;                                     // _54
	virtual void _58() = 0;                                     // _58
	virtual void _5C() = 0;                                     // _5C
	virtual void _60() = 0;                                     // _60
	virtual void _64() = 0;                                     // _64
	virtual void _68() = 0;                                     // _68
	virtual void setDirectVolume(float, unsigned long);         // _6C
	virtual void setDirectPan(float, unsigned long);            // _70
	virtual void setDirectPitch(float, unsigned long);          // _74
	virtual void setDirectFxmix(float, unsigned long);          // _78
	virtual void setDirectDolby(float, unsigned long);          // _7C
	virtual void setDemoVolume(float, unsigned long);           // _80
	virtual void setDemoPan(float, unsigned long);              // _84
	virtual void setDemoPitch(float, unsigned long);            // _88
	virtual void setDemoFxmix(float, unsigned long);            // _8C
	virtual void setDemoDolby(float, unsigned long);            // _90
	virtual void setDemoVolumeU7(unsigned char, unsigned long); // _94
	virtual void setDemoPanU7(unsigned char, unsigned long);    // _98
	virtual void setDemoFxmixU7(unsigned char, unsigned long);  // _9C
	virtual void setDemoDolbyU7(unsigned char, unsigned long);  // _A0
	virtual void _A4() = 0;                                     // _A4
	virtual void setPrepareFlag(unsigned char);                 // _A8
	virtual void checkReady();                                  // _AC
	virtual void setDistanceParameterMoveTime(unsigned char);   // _B0
	virtual void setAdjustPriority(short);                      // _B4
	virtual void setPositionDopplarCommon(unsigned long);       // _B8
	virtual void _BC() = 0;                                     // _BC
	virtual void setDistancePanCommon();                        // _C0
	virtual void setDistanceDolbyCommon();                      // _C4

	// _00 VTBL
};

namespace PSM {
struct SeSound : public JAISe, public JAISound {
	virtual void setDistanceVolumeCommon(float, unsigned char);                                                           // _BC
	virtual void initParameter(void*, JAInter::Actor*, unsigned long, unsigned long, unsigned char, JAInter::SoundInfo*); // _C8
	virtual void onGet();                                                                                                 // _CC
	virtual void onRelease();                                                                                             // _D0
	virtual void setSeDistancePan(unsigned char);                                                                         // _DC
	virtual void setSeDistanceDolby(unsigned char);                                                                       // _EC

	// _00 VTBL
};
} // namespace PSM

#endif
