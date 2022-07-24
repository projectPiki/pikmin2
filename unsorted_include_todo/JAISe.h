#ifndef _JAISE_H
#define _JAISE_H

/*
    __vt__5JAISe:
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
    .4byte setDistanceVolumeCommon__8JAISoundFfUc
    .4byte setDistancePanCommon__8JAISoundFv
    .4byte setDistanceDolbyCommon__8JAISoundFv
    .4byte initParameter__8JAISoundFPvPQ27JAInter5ActorUlUlUcPQ27JAInter9SoundInfo
    .4byte onGet__8JAISoundFv
    .4byte onRelease__8JAISoundFv
    .4byte setSeDistanceParameters__5JAISeFv
    .4byte setSeDistanceVolume__5JAISeFUc
    .4byte setSeDistancePan__5JAISeFUc
    .4byte setSeDistancePitch__5JAISeFUc
    .4byte setSeDistanceFxmix__5JAISeFUc
    .4byte setSeDistanceFir__5JAISeFUc
    .4byte setSeDistanceDolby__5JAISeFUc
    .4byte setSePositionDopplar__5JAISeFv
*/

struct JAISound {
	virtual void setPortData(unsigned char, unsigned short);                                                              // _08
	virtual void getPortData(unsigned char);                                                                              // _0C
	virtual void start(unsigned long);                                                                                    // _10
	virtual void stop(unsigned long);                                                                                     // _14
	virtual void release();                                                                                               // _18
	virtual void setVolume(float, unsigned long, unsigned char);                                                          // _1C
	virtual void getVolume(unsigned char);                                                                                // _20
	virtual void setPan(float, unsigned long, unsigned char);                                                             // _24
	virtual void getPan(unsigned char);                                                                                   // _28
	virtual void setPitch(float, unsigned long, unsigned char);                                                           // _2C
	virtual void getPitch(unsigned char);                                                                                 // _30
	virtual void setFxmix(float, unsigned long, unsigned char);                                                           // _34
	virtual void getFxmix(unsigned char);                                                                                 // _38
	virtual void setDolby(float, unsigned long, unsigned char);                                                           // _3C
	virtual void getDolby(unsigned char);                                                                                 // _40
	virtual void setTempoProportion(float, unsigned long);                                                                // _44
	virtual void getTempoProportion();                                                                                    // _48
	virtual void setVolumeU7(unsigned char, unsigned long, unsigned char);                                                // _4C
	virtual void getVolumeU7(unsigned char);                                                                              // _50
	virtual void setPanU7(unsigned char, unsigned long, unsigned char);                                                   // _54
	virtual void getPanU7(unsigned char);                                                                                 // _58
	virtual void setFxmixU7(unsigned char, unsigned long, unsigned char);                                                 // _5C
	virtual void getFxmixU7(unsigned char);                                                                               // _60
	virtual void setDolbyU7(unsigned char, unsigned long, unsigned char);                                                 // _64
	virtual void getDolbyU7(unsigned char);                                                                               // _68
	virtual void setDirectVolume(float, unsigned long);                                                                   // _6C
	virtual void setDirectPan(float, unsigned long);                                                                      // _70
	virtual void setDirectPitch(float, unsigned long);                                                                    // _74
	virtual void setDirectFxmix(float, unsigned long);                                                                    // _78
	virtual void setDirectDolby(float, unsigned long);                                                                    // _7C
	virtual void setDemoVolume(float, unsigned long);                                                                     // _80
	virtual void setDemoPan(float, unsigned long);                                                                        // _84
	virtual void setDemoPitch(float, unsigned long);                                                                      // _88
	virtual void setDemoFxmix(float, unsigned long);                                                                      // _8C
	virtual void setDemoDolby(float, unsigned long);                                                                      // _90
	virtual void setDemoVolumeU7(unsigned char, unsigned long);                                                           // _94
	virtual void setDemoPanU7(unsigned char, unsigned long);                                                              // _98
	virtual void setDemoFxmixU7(unsigned char, unsigned long);                                                            // _9C
	virtual void setDemoDolbyU7(unsigned char, unsigned long);                                                            // _A0
	virtual void getFadeCounter();                                                                                        // _A4
	virtual void setPrepareFlag(unsigned char);                                                                           // _A8
	virtual void checkReady();                                                                                            // _AC
	virtual void setDistanceParameterMoveTime(unsigned char);                                                             // _B0
	virtual void setAdjustPriority(short);                                                                                // _B4
	virtual void setPositionDopplarCommon(unsigned long);                                                                 // _B8
	virtual void setDistanceVolumeCommon(float, unsigned char);                                                           // _BC
	virtual void setDistancePanCommon();                                                                                  // _C0
	virtual void setDistanceDolbyCommon();                                                                                // _C4
	virtual void initParameter(void*, JAInter::Actor*, unsigned long, unsigned long, unsigned char, JAInter::SoundInfo*); // _C8
	virtual void onGet();                                                                                                 // _CC
	virtual void onRelease();                                                                                             // _D0

	// _00 VTBL
};

struct JAISe : public JAISound {
	virtual void setPortData(unsigned char, unsigned short);               // _08
	virtual void getPortData(unsigned char);                               // _0C
	virtual void stop(unsigned long);                                      // _14
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
	virtual void setVolumeU7(unsigned char, unsigned long, unsigned char); // _4C
	virtual void getVolumeU7(unsigned char);                               // _50
	virtual void setPanU7(unsigned char, unsigned long, unsigned char);    // _54
	virtual void getPanU7(unsigned char);                                  // _58
	virtual void setFxmixU7(unsigned char, unsigned long, unsigned char);  // _5C
	virtual void getFxmixU7(unsigned char);                                // _60
	virtual void setDolbyU7(unsigned char, unsigned long, unsigned char);  // _64
	virtual void getDolbyU7(unsigned char);                                // _68
	virtual void getFadeCounter();                                         // _A4
	virtual void setSeDistanceParameters();                                // _D4
	virtual void setSeDistanceVolume(unsigned char);                       // _D8
	virtual void setSeDistancePan(unsigned char);                          // _DC
	virtual void setSeDistancePitch(unsigned char);                        // _E0
	virtual void setSeDistanceFxmix(unsigned char);                        // _E4
	virtual void setSeDistanceFir(unsigned char);                          // _E8
	virtual void setSeDistanceDolby(unsigned char);                        // _EC
	virtual void setSePositionDopplar();                                   // _F0

	// _00 VTBL
};

#endif
