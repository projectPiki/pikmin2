#ifndef _PSSYSTEM_SEQSOUND_H
#define _PSSYSTEM_SEQSOUND_H

/*
    __vt__Q28PSSystem8SeqSound:
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
    .4byte 0
    .4byte 0
    .4byte stop__Q28PSSystem12SeqSoundBaseFUl
    .4byte "@1696@stopInner__Q28PSSystem8SeqSoundFUl"
    .4byte stopInner__Q28PSSystem8SeqSoundFUl
*/

struct JAISequence {
	virtual void setPortData(unsigned char, unsigned short);               // _08 (weak)
	virtual void getPortData(unsigned char);                               // _0C (weak)
	virtual void _10() = 0;                                                // _10
	virtual void stop(unsigned long);                                      // _14 (weak)
	virtual void _18() = 0;                                                // _18
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
	virtual void setPrepareFlag(unsigned char);                            // _A8 (weak)
	virtual void checkReady();                                             // _AC (weak)
};

struct JAISound {
	virtual void _08() = 0;                                                                                               // _08
	virtual void _0C() = 0;                                                                                               // _0C
	virtual void start(unsigned long);                                                                                    // _10
	virtual void _14() = 0;                                                                                               // _14
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
	virtual void _44() = 0;                                                                                               // _44
	virtual void _48() = 0;                                                                                               // _48
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
	virtual void _A8() = 0;                                                                                               // _A8
	virtual void _AC() = 0;                                                                                               // _AC
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

namespace PSSystem {
struct SeqSoundBase {
	virtual void _08() = 0;           // _08
	virtual void _0C() = 0;           // _0C
	virtual void _10() = 0;           // _10
	virtual void _14() = 0;           // _14
	virtual void _18() = 0;           // _18
	virtual void _1C() = 0;           // _1C
	virtual void _20() = 0;           // _20
	virtual void _24() = 0;           // _24
	virtual void _28() = 0;           // _28
	virtual void _2C() = 0;           // _2C
	virtual void _30() = 0;           // _30
	virtual void _34() = 0;           // _34
	virtual void _38() = 0;           // _38
	virtual void _3C() = 0;           // _3C
	virtual void _40() = 0;           // _40
	virtual void _44() = 0;           // _44
	virtual void _48() = 0;           // _48
	virtual void _4C() = 0;           // _4C
	virtual void _50() = 0;           // _50
	virtual void _54() = 0;           // _54
	virtual void _58() = 0;           // _58
	virtual void _5C() = 0;           // _5C
	virtual void _60() = 0;           // _60
	virtual void _64() = 0;           // _64
	virtual void _68() = 0;           // _68
	virtual void _6C() = 0;           // _6C
	virtual void _70() = 0;           // _70
	virtual void _74() = 0;           // _74
	virtual void _78() = 0;           // _78
	virtual void _7C() = 0;           // _7C
	virtual void _80() = 0;           // _80
	virtual void _84() = 0;           // _84
	virtual void _88() = 0;           // _88
	virtual void _8C() = 0;           // _8C
	virtual void _90() = 0;           // _90
	virtual void _94() = 0;           // _94
	virtual void _98() = 0;           // _98
	virtual void _9C() = 0;           // _9C
	virtual void _A0() = 0;           // _A0
	virtual void _A4() = 0;           // _A4
	virtual void _A8() = 0;           // _A8
	virtual void _AC() = 0;           // _AC
	virtual void _B0() = 0;           // _B0
	virtual void _B4() = 0;           // _B4
	virtual void _B8() = 0;           // _B8
	virtual void _BC() = 0;           // _BC
	virtual void _C0() = 0;           // _C0
	virtual void _C4() = 0;           // _C4
	virtual void _C8() = 0;           // _C8
	virtual void _CC() = 0;           // _CC
	virtual void _D0() = 0;           // _D0
	virtual void _D4() = 0;           // _D4
	virtual void _D8() = 0;           // _D8
	virtual void stop(unsigned long); // _DC
};
} // namespace PSSystem

namespace PSSystem {
struct SeqSound : public JAISequence, public JAISound, public SeqSoundBase {
	virtual void _D4() = 0;                // _D4
	virtual void _D8() = 0;                // _D8
	virtual void stopInner(unsigned long); // _E4 (weak)

	SeqSound();
};
} // namespace PSSystem

#endif
