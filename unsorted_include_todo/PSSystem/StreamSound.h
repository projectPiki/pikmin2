#ifndef _PSSYSTEM_STREAMSOUND_H
#define _PSSYSTEM_STREAMSOUND_H

struct JAIStream {
    virtual void setPortData(unsigned char, unsigned short);     // _00
    virtual void getPortData(unsigned char);                     // _04
    virtual void _08() = 0;                                      // _08
    virtual void stop(unsigned long);                            // _0C
    virtual void _10() = 0;                                      // _10
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
    virtual void _3C() = 0;                                      // _3C
    virtual void _40() = 0;                                      // _40
    virtual void setVolumeU7(unsigned char, unsigned long,
                             unsigned char);                              // _44
    virtual void getVolumeU7(unsigned char);                              // _48
    virtual void setPanU7(unsigned char, unsigned long, unsigned char);   // _4C
    virtual void getPanU7(unsigned char);                                 // _50
    virtual void setFxmixU7(unsigned char, unsigned long, unsigned char); // _54
    virtual void getFxmixU7(unsigned char);                               // _58
    virtual void setDolbyU7(unsigned char, unsigned long, unsigned char); // _5C
    virtual void getDolbyU7(unsigned char);                               // _60
    virtual void _64() = 0;                                               // _64
    virtual void _68() = 0;                                               // _68
    virtual void _6C() = 0;                                               // _6C
    virtual void _70() = 0;                                               // _70
    virtual void _74() = 0;                                               // _74
    virtual void _78() = 0;                                               // _78
    virtual void _7C() = 0;                                               // _7C
    virtual void _80() = 0;                                               // _80
    virtual void _84() = 0;                                               // _84
    virtual void _88() = 0;                                               // _88
    virtual void _8C() = 0;                                               // _8C
    virtual void _90() = 0;                                               // _90
    virtual void _94() = 0;                                               // _94
    virtual void _98() = 0;                                               // _98
    virtual void getFadeCounter();                                        // _9C
    virtual void setPrepareFlag(unsigned char);                           // _A0
    virtual void checkReady();                                            // _A4

    // _00 VTBL
};

struct JAISound {
    virtual void _00() = 0;                                     // _00
    virtual void _04() = 0;                                     // _04
    virtual void start(unsigned long);                          // _08
    virtual void _0C() = 0;                                     // _0C
    virtual void release();                                     // _10
    virtual void _14() = 0;                                     // _14
    virtual void _18() = 0;                                     // _18
    virtual void _1C() = 0;                                     // _1C
    virtual void _20() = 0;                                     // _20
    virtual void _24() = 0;                                     // _24
    virtual void _28() = 0;                                     // _28
    virtual void _2C() = 0;                                     // _2C
    virtual void _30() = 0;                                     // _30
    virtual void _34() = 0;                                     // _34
    virtual void _38() = 0;                                     // _38
    virtual void setTempoProportion(float, unsigned long);      // _3C
    virtual void getTempoProportion();                          // _40
    virtual void _44() = 0;                                     // _44
    virtual void _48() = 0;                                     // _48
    virtual void _4C() = 0;                                     // _4C
    virtual void _50() = 0;                                     // _50
    virtual void _54() = 0;                                     // _54
    virtual void _58() = 0;                                     // _58
    virtual void _5C() = 0;                                     // _5C
    virtual void _60() = 0;                                     // _60
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
    virtual void _9C() = 0;                                     // _9C
    virtual void _A0() = 0;                                     // _A0
    virtual void _A4() = 0;                                     // _A4
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

    // _00 VTBL
};

namespace PSSystem {
struct SeqSoundBase {
    virtual void _00() = 0;           // _00
    virtual void _04() = 0;           // _04
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
    virtual void stop(unsigned long); // _D4

    // _00 VTBL
};
} // namespace PSSystem

namespace PSSystem {
struct StreamSound : public JAIStream, public JAISound, public SeqSoundBase {
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
    virtual void _CC() = 0;                          // _CC
    virtual void _D0() = 0;                          // _D0
    virtual void stop(unsigned long);                // _D4
    virtual void @472 @stopInner(unsigned long);     // _D8
    virtual void stopInner(unsigned long);           // _DC

    // _00 VTBL
};
} // namespace PSSystem

#endif
