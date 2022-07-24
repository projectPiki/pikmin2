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
	virtual void setPortData(unsigned char, unsigned short);                                                              // _08 (inline)
	virtual void getPortData(unsigned char);                                                                              // _0C (inline)
	virtual void start(unsigned long);                                                                                    // _10
	virtual void stop(unsigned long);                                                                                     // _14 (inline)
	virtual void release();                                                                                               // _18
	virtual void setVolume(float, unsigned long, unsigned char);                                                          // _1C (inline)
	virtual void getVolume(unsigned char);                                                                                // _20 (inline)
	virtual void setPan(float, unsigned long, unsigned char);                                                             // _24 (inline)
	virtual void getPan(unsigned char);                                                                                   // _28 (inline)
	virtual void setPitch(float, unsigned long, unsigned char);                                                           // _2C (inline)
	virtual void getPitch(unsigned char);                                                                                 // _30 (inline)
	virtual void setFxmix(float, unsigned long, unsigned char);                                                           // _34 (inline)
	virtual void getFxmix(unsigned char);                                                                                 // _38 (inline)
	virtual void setDolby(float, unsigned long, unsigned char);                                                           // _3C (inline)
	virtual void getDolby(unsigned char);                                                                                 // _40 (inline)
	virtual void setTempoProportion(float, unsigned long);                                                                // _44 (inline)
	virtual void getTempoProportion();                                                                                    // _48 (inline)
	virtual void setVolumeU7(unsigned char, unsigned long, unsigned char);                                                // _4C (inline)
	virtual void getVolumeU7(unsigned char);                                                                              // _50 (inline)
	virtual void setPanU7(unsigned char, unsigned long, unsigned char);                                                   // _54 (inline)
	virtual void getPanU7(unsigned char);                                                                                 // _58 (inline)
	virtual void setFxmixU7(unsigned char, unsigned long, unsigned char);                                                 // _5C (inline)
	virtual void getFxmixU7(unsigned char);                                                                               // _60 (inline)
	virtual void setDolbyU7(unsigned char, unsigned long, unsigned char);                                                 // _64 (inline)
	virtual void getDolbyU7(unsigned char);                                                                               // _68 (inline)
	virtual void setDirectVolume(float, unsigned long);                                                                   // _6C (inline)
	virtual void setDirectPan(float, unsigned long);                                                                      // _70 (inline)
	virtual void setDirectPitch(float, unsigned long);                                                                    // _74 (inline)
	virtual void setDirectFxmix(float, unsigned long);                                                                    // _78 (inline)
	virtual void setDirectDolby(float, unsigned long);                                                                    // _7C (inline)
	virtual void setDemoVolume(float, unsigned long);                                                                     // _80 (inline)
	virtual void setDemoPan(float, unsigned long);                                                                        // _84 (inline)
	virtual void setDemoPitch(float, unsigned long);                                                                      // _88 (inline)
	virtual void setDemoFxmix(float, unsigned long);                                                                      // _8C (inline)
	virtual void setDemoDolby(float, unsigned long);                                                                      // _90 (inline)
	virtual void setDemoVolumeU7(unsigned char, unsigned long);                                                           // _94 (inline)
	virtual void setDemoPanU7(unsigned char, unsigned long);                                                              // _98 (inline)
	virtual void setDemoFxmixU7(unsigned char, unsigned long);                                                            // _9C (inline)
	virtual void setDemoDolbyU7(unsigned char, unsigned long);                                                            // _A0 (inline)
	virtual void getFadeCounter();                                                                                        // _A4
	virtual void setPrepareFlag(unsigned char);                                                                           // _A8
	virtual void checkReady();                                                                                            // _AC
	virtual void setDistanceParameterMoveTime(unsigned char);                                                             // _B0 (inline)
	virtual void setAdjustPriority(short);                                                                                // _B4 (inline)
	virtual void setPositionDopplarCommon(unsigned long);                                                                 // _B8
	virtual void setDistanceVolumeCommon(float, unsigned char);                                                           // _BC
	virtual void setDistancePanCommon();                                                                                  // _C0
	virtual void setDistanceDolbyCommon();                                                                                // _C4
	virtual void initParameter(void*, JAInter::Actor*, unsigned long, unsigned long, unsigned char, JAInter::SoundInfo*); // _C8
	virtual void onGet();                                                                                                 // _CC (inline)
	virtual void onRelease();                                                                                             // _D0 (inline)
};

struct JAISe : public JAISound {
	virtual void setPortData(unsigned char, unsigned short);               // _08 (inline)
	virtual void getPortData(unsigned char);                               // _0C (inline)
	virtual void stop(unsigned long);                                      // _14 (inline)
	virtual void setVolume(float, unsigned long, unsigned char);           // _1C (inline)
	virtual void getVolume(unsigned char);                                 // _20 (inline)
	virtual void setPan(float, unsigned long, unsigned char);              // _24 (inline)
	virtual void getPan(unsigned char);                                    // _28 (inline)
	virtual void setPitch(float, unsigned long, unsigned char);            // _2C (inline)
	virtual void getPitch(unsigned char);                                  // _30 (inline)
	virtual void setFxmix(float, unsigned long, unsigned char);            // _34 (inline)
	virtual void getFxmix(unsigned char);                                  // _38 (inline)
	virtual void setDolby(float, unsigned long, unsigned char);            // _3C (inline)
	virtual void getDolby(unsigned char);                                  // _40 (inline)
	virtual void setVolumeU7(unsigned char, unsigned long, unsigned char); // _4C (inline)
	virtual void getVolumeU7(unsigned char);                               // _50 (inline)
	virtual void setPanU7(unsigned char, unsigned long, unsigned char);    // _54 (inline)
	virtual void getPanU7(unsigned char);                                  // _58 (inline)
	virtual void setFxmixU7(unsigned char, unsigned long, unsigned char);  // _5C (inline)
	virtual void getFxmixU7(unsigned char);                                // _60 (inline)
	virtual void setDolbyU7(unsigned char, unsigned long, unsigned char);  // _64 (inline)
	virtual void getDolbyU7(unsigned char);                                // _68 (inline)
	virtual void getFadeCounter();                                         // _A4
	virtual void setSeDistanceParameters();                                // _D4
	virtual void setSeDistanceVolume(unsigned char);                       // _D8
	virtual void setSeDistancePan(unsigned char);                          // _DC
	virtual void setSeDistancePitch(unsigned char);                        // _E0
	virtual void setSeDistanceFxmix(unsigned char);                        // _E4
	virtual void setSeDistanceFir(unsigned char);                          // _E8
	virtual void setSeDistanceDolby(unsigned char);                        // _EC
	virtual void setSePositionDopplar();                                   // _F0
};

#endif
