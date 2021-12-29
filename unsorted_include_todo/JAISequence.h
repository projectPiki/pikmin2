#ifndef _JAISEQUENCE_H
#define _JAISEQUENCE_H

/*
    __vt__11JAISequence:
    .4byte 0
    .4byte 0
    .4byte setPortData__11JAISequenceFUcUs
    .4byte getPortData__11JAISequenceFUc
    .4byte start__8JAISoundFUl
    .4byte stop__11JAISequenceFUl
    .4byte release__8JAISoundFv
    .4byte setVolume__11JAISequenceFfUlUc
    .4byte getVolume__11JAISequenceFUc
    .4byte setPan__11JAISequenceFfUlUc
    .4byte getPan__11JAISequenceFUc
    .4byte setPitch__11JAISequenceFfUlUc
    .4byte getPitch__11JAISequenceFUc
    .4byte setFxmix__11JAISequenceFfUlUc
    .4byte getFxmix__11JAISequenceFUc
    .4byte setDolby__11JAISequenceFfUlUc
    .4byte getDolby__11JAISequenceFUc
    .4byte setTempoProportion__11JAISequenceFfUl
    .4byte getTempoProportion__11JAISequenceFv
    .4byte setVolumeU7__11JAISequenceFUcUlUc
    .4byte getVolumeU7__11JAISequenceFUc
    .4byte setPanU7__11JAISequenceFUcUlUc
    .4byte getPanU7__11JAISequenceFUc
    .4byte setFxmixU7__11JAISequenceFUcUlUc
    .4byte getFxmixU7__11JAISequenceFUc
    .4byte setDolbyU7__11JAISequenceFUcUlUc
    .4byte getDolbyU7__11JAISequenceFUc
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
    .4byte getFadeCounter__11JAISequenceFv
    .4byte setPrepareFlag__11JAISequenceFUc
    .4byte checkReady__11JAISequenceFv
    .4byte setDistanceParameterMoveTime__8JAISoundFUc
    .4byte setAdjustPriority__8JAISoundFs
    .4byte setPositionDopplarCommon__8JAISoundFUl
    .4byte setDistanceVolumeCommon__8JAISoundFfUc
    .4byte setDistancePanCommon__8JAISoundFv
    .4byte setDistanceDolbyCommon__8JAISoundFv
    .4byte
   initParameter__8JAISoundFPvPQ27JAInter5ActorUlUlUcPQ27JAInter9SoundInfo
    .4byte onGet__8JAISoundFv
    .4byte onRelease__8JAISoundFv
*/

struct JAISound {
	virtual void setPortData(unsigned char, unsigned short);     // _00
	virtual void getPortData(unsigned char);                     // _04
	virtual void start(unsigned long);                           // _08
	virtual void stop(unsigned long);                            // _0C
	virtual void release();                                      // _10
	virtual void setVolume(float, unsigned long, unsigned char); // _14
	virtual void getVolume(unsigned char);                       // _18
	virtual void setPan(float, unsigned long, unsigned char);    // _1C
	virtual void getPan(unsigned char);                          // _20
	virtual void setPitch(float, unsigned long, unsigned char);  // _24
	virtual void getPitch(unsigned char);                        // _28
	virtual void setFxmix(float, unsigned long, unsigned char);  // _2C
	virtual void getFxmix(unsigned char);                        // _30
	virtual void setDolby(float, unsigned long, unsigned char);  // _34
	virtual void getDolby(unsigned char);                        // _38
	virtual void setTempoProportion(float, unsigned long);       // _3C
	virtual void getTempoProportion();                           // _40
	virtual void setVolumeU7(unsigned char, unsigned long,
	                         unsigned char);                              // _44
	virtual void getVolumeU7(unsigned char);                              // _48
	virtual void setPanU7(unsigned char, unsigned long, unsigned char);   // _4C
	virtual void getPanU7(unsigned char);                                 // _50
	virtual void setFxmixU7(unsigned char, unsigned long, unsigned char); // _54
	virtual void getFxmixU7(unsigned char);                               // _58
	virtual void setDolbyU7(unsigned char, unsigned long, unsigned char); // _5C
	virtual void getDolbyU7(unsigned char);                               // _60
	virtual void setDirectVolume(float, unsigned long);                   // _64
	virtual void setDirectPan(float, unsigned long);                      // _68
	virtual void setDirectPitch(float, unsigned long);                    // _6C
	virtual void setDirectFxmix(float, unsigned long);                    // _70
	virtual void setDirectDolby(float, unsigned long);                    // _74
	virtual void setDemoVolume(float, unsigned long);                     // _78
	virtual void setDemoPan(float, unsigned long);                        // _7C
	virtual void setDemoPitch(float, unsigned long);                      // _80
	virtual void setDemoFxmix(float, unsigned long);                      // _84
	virtual void setDemoDolby(float, unsigned long);                      // _88
	virtual void setDemoVolumeU7(unsigned char, unsigned long);           // _8C
	virtual void setDemoPanU7(unsigned char, unsigned long);              // _90
	virtual void setDemoFxmixU7(unsigned char, unsigned long);            // _94
	virtual void setDemoDolbyU7(unsigned char, unsigned long);            // _98
	virtual void getFadeCounter();                                        // _9C
	virtual void setPrepareFlag(unsigned char);                           // _A0
	virtual void checkReady();                                            // _A4
	virtual void setDistanceParameterMoveTime(unsigned char);             // _A8
	virtual void setAdjustPriority(short);                                // _AC
	virtual void setPositionDopplarCommon(unsigned long);                 // _B0
	virtual void setDistanceVolumeCommon(float, unsigned char);           // _B4
	virtual void setDistancePanCommon();                                  // _B8
	virtual void setDistanceDolbyCommon();                                // _BC
	virtual void initParameter(void*, JAInter::Actor*, unsigned long,
	                           unsigned long, unsigned char,
	                           JAInter::SoundInfo*); // _C0
	virtual void onGet();                            // _C4
	virtual void onRelease();                        // _C8

	// _00 VTBL
};

struct JAISequence : public JAISound {
	virtual void setPortData(unsigned char, unsigned short);     // _00
	virtual void getPortData(unsigned char);                     // _04
	virtual void start(unsigned long);                           // _08
	virtual void stop(unsigned long);                            // _0C
	virtual void release();                                      // _10
	virtual void setVolume(float, unsigned long, unsigned char); // _14
	virtual void getVolume(unsigned char);                       // _18
	virtual void setPan(float, unsigned long, unsigned char);    // _1C
	virtual void getPan(unsigned char);                          // _20
	virtual void setPitch(float, unsigned long, unsigned char);  // _24
	virtual void getPitch(unsigned char);                        // _28
	virtual void setFxmix(float, unsigned long, unsigned char);  // _2C
	virtual void getFxmix(unsigned char);                        // _30
	virtual void setDolby(float, unsigned long, unsigned char);  // _34
	virtual void getDolby(unsigned char);                        // _38
	virtual void setTempoProportion(float, unsigned long);       // _3C
	virtual void getTempoProportion();                           // _40
	virtual void setVolumeU7(unsigned char, unsigned long,
	                         unsigned char);                              // _44
	virtual void getVolumeU7(unsigned char);                              // _48
	virtual void setPanU7(unsigned char, unsigned long, unsigned char);   // _4C
	virtual void getPanU7(unsigned char);                                 // _50
	virtual void setFxmixU7(unsigned char, unsigned long, unsigned char); // _54
	virtual void getFxmixU7(unsigned char);                               // _58
	virtual void setDolbyU7(unsigned char, unsigned long, unsigned char); // _5C
	virtual void getDolbyU7(unsigned char);                               // _60
	virtual void setDirectVolume(float, unsigned long);                   // _64
	virtual void setDirectPan(float, unsigned long);                      // _68
	virtual void setDirectPitch(float, unsigned long);                    // _6C
	virtual void setDirectFxmix(float, unsigned long);                    // _70
	virtual void setDirectDolby(float, unsigned long);                    // _74
	virtual void setDemoVolume(float, unsigned long);                     // _78
	virtual void setDemoPan(float, unsigned long);                        // _7C
	virtual void setDemoPitch(float, unsigned long);                      // _80
	virtual void setDemoFxmix(float, unsigned long);                      // _84
	virtual void setDemoDolby(float, unsigned long);                      // _88
	virtual void setDemoVolumeU7(unsigned char, unsigned long);           // _8C
	virtual void setDemoPanU7(unsigned char, unsigned long);              // _90
	virtual void setDemoFxmixU7(unsigned char, unsigned long);            // _94
	virtual void setDemoDolbyU7(unsigned char, unsigned long);            // _98
	virtual void getFadeCounter();                                        // _9C
	virtual void setPrepareFlag(unsigned char);                           // _A0
	virtual void checkReady();                                            // _A4
	virtual void setDistanceParameterMoveTime(unsigned char);             // _A8
	virtual void setAdjustPriority(short);                                // _AC
	virtual void setPositionDopplarCommon(unsigned long);                 // _B0
	virtual void setDistanceVolumeCommon(float, unsigned char);           // _B4
	virtual void setDistancePanCommon();                                  // _B8
	virtual void setDistanceDolbyCommon();                                // _BC
	virtual void initParameter(void*, JAInter::Actor*, unsigned long,
	                           unsigned long, unsigned char,
	                           JAInter::SoundInfo*); // _C0
	virtual void onGet();                            // _C4
	virtual void onRelease();                        // _C8

	// _00 VTBL
};

#endif
