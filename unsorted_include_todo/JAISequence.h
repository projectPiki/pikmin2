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
    .4byte initParameter__8JAISoundFPvPQ27JAInter5ActorUlUlUcPQ27JAInter9SoundInfo
    .4byte onGet__8JAISoundFv
    .4byte onRelease__8JAISoundFv
*/

struct JAISound {
	virtual void setPortData(unsigned char, unsigned short);                                                              // _08 (weak)
	virtual void getPortData(unsigned char);                                                                              // _0C (weak)
	virtual void start(unsigned long);                                                                                    // _10
	virtual void stop(unsigned long);                                                                                     // _14 (weak)
	virtual void release();                                                                                               // _18
	virtual void setVolume(float, unsigned long, unsigned char);                                                          // _1C (weak)
	virtual void getVolume(unsigned char);                                                                                // _20 (weak)
	virtual void setPan(float, unsigned long, unsigned char);                                                             // _24 (weak)
	virtual void getPan(unsigned char);                                                                                   // _28 (weak)
	virtual void setPitch(float, unsigned long, unsigned char);                                                           // _2C (weak)
	virtual void getPitch(unsigned char);                                                                                 // _30 (weak)
	virtual void setFxmix(float, unsigned long, unsigned char);                                                           // _34 (weak)
	virtual void getFxmix(unsigned char);                                                                                 // _38 (weak)
	virtual void setDolby(float, unsigned long, unsigned char);                                                           // _3C (weak)
	virtual void getDolby(unsigned char);                                                                                 // _40 (weak)
	virtual void setTempoProportion(float, unsigned long);                                                                // _44 (weak)
	virtual void getTempoProportion();                                                                                    // _48 (weak)
	virtual void setVolumeU7(unsigned char, unsigned long, unsigned char);                                                // _4C (weak)
	virtual void getVolumeU7(unsigned char);                                                                              // _50 (weak)
	virtual void setPanU7(unsigned char, unsigned long, unsigned char);                                                   // _54 (weak)
	virtual void getPanU7(unsigned char);                                                                                 // _58 (weak)
	virtual void setFxmixU7(unsigned char, unsigned long, unsigned char);                                                 // _5C (weak)
	virtual void getFxmixU7(unsigned char);                                                                               // _60 (weak)
	virtual void setDolbyU7(unsigned char, unsigned long, unsigned char);                                                 // _64 (weak)
	virtual void getDolbyU7(unsigned char);                                                                               // _68 (weak)
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
	virtual void getFadeCounter();                                                                                        // _A4
	virtual void setPrepareFlag(unsigned char);                                                                           // _A8 (weak)
	virtual void checkReady();                                                                                            // _AC (weak)
	virtual void setDistanceParameterMoveTime(unsigned char);                                                             // _B0 (weak)
	virtual void setAdjustPriority(short);                                                                                // _B4 (weak)
	virtual void setPositionDopplarCommon(unsigned long);                                                                 // _B8
	virtual void setDistanceVolumeCommon(float, unsigned char);                                                           // _BC
	virtual void setDistancePanCommon();                                                                                  // _C0
	virtual void setDistanceDolbyCommon();                                                                                // _C4
	virtual void initParameter(void*, JAInter::Actor*, unsigned long, unsigned long, unsigned char, JAInter::SoundInfo*); // _C8
	virtual void onGet();                                                                                                 // _CC (weak)
	virtual void onRelease();                                                                                             // _D0 (weak)
};

struct JAISequence : public JAISound {
	virtual void setPortData(unsigned char, unsigned short);               // _08 (weak)
	virtual void getPortData(unsigned char);                               // _0C (weak)
	virtual void stop(unsigned long);                                      // _14 (weak)
	virtual void setVolume(float, unsigned long, unsigned char);           // _1C (weak)
	virtual void getVolume(unsigned char);                                 // _20 (weak)
	virtual void setPan(float, unsigned long, unsigned char);              // _24 (weak)
	virtual void getPan(unsigned char);                                    // _28 (weak)
	virtual void setPitch(float, unsigned long, unsigned char);            // _2C (weak)
	virtual void getPitch(unsigned char);                                  // _30 (weak)
	virtual void setFxmix(float, unsigned long, unsigned char);            // _34 (weak)
	virtual void getFxmix(unsigned char);                                  // _38 (weak)
	virtual void setDolby(float, unsigned long, unsigned char);            // _3C (weak)
	virtual void getDolby(unsigned char);                                  // _40 (weak)
	virtual void setTempoProportion(float, unsigned long);                 // _44 (weak)
	virtual void getTempoProportion();                                     // _48 (weak)
	virtual void setVolumeU7(unsigned char, unsigned long, unsigned char); // _4C (weak)
	virtual void getVolumeU7(unsigned char);                               // _50 (weak)
	virtual void setPanU7(unsigned char, unsigned long, unsigned char);    // _54 (weak)
	virtual void getPanU7(unsigned char);                                  // _58 (weak)
	virtual void setFxmixU7(unsigned char, unsigned long, unsigned char);  // _5C (weak)
	virtual void getFxmixU7(unsigned char);                                // _60 (weak)
	virtual void setDolbyU7(unsigned char, unsigned long, unsigned char);  // _64 (weak)
	virtual void getDolbyU7(unsigned char);                                // _68 (weak)
	virtual void getFadeCounter();                                         // _A4
	virtual void setPrepareFlag(unsigned char);                            // _A8 (weak)
	virtual void checkReady();                                             // _AC (weak)

	JAISequence();
	void setSeqInterVolume(unsigned char, float, unsigned long);
	void setSeqInterPan(unsigned char, float, unsigned long);
	void setSeqInterPitch(unsigned char, float, unsigned long);
	void setTrackInterruptSwitch(unsigned char, unsigned char);
	void setTrackFxmix(unsigned char, float, unsigned long);
	void setTrackPortData(unsigned char, unsigned char, unsigned short);
	void setSeqPrepareFlag(unsigned char);
	void checkSeqReady();
	void getSeqInterVolume(unsigned char);
};

#endif
