#ifndef _JAISE_H
#define _JAISE_H

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

	// _00 VTBL
};

struct JAISe : public JAISound {
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
	virtual void setSeDistanceParameters();          // _CC
	virtual void setSeDistanceVolume(unsigned char); // _D0
	virtual void setSeDistancePan(unsigned char);    // _D4
	virtual void setSeDistancePitch(unsigned char);  // _D8
	virtual void setSeDistanceFxmix(unsigned char);  // _DC
	virtual void setSeDistanceFir(unsigned char);    // _E0
	virtual void setSeDistanceDolby(unsigned char);  // _E4
	virtual void setSePositionDopplar();             // _E8

	// _00 VTBL
};

#endif
