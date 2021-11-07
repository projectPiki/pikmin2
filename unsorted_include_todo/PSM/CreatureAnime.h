#ifndef _PSM_CREATUREANIME_H
#define _PSM_CREATUREANIME_H

namespace PSM {
struct Creature {
    virtual void _00() = 0;                       // _00
    virtual void _04() = 0;                       // _04
    virtual void _08() = 0;                       // _08
    virtual void _0C() = 0;                       // _0C
    virtual void _10() = 0;                       // _10
    virtual void _14() = 0;                       // _14
    virtual void _18() = 0;                       // _18
    virtual void _1C() = 0;                       // _1C
    virtual void _20() = 0;                       // _20
    virtual void loopCalc(FrameCalcArg&);         // _24
    virtual void startSoundInner(StartSoundArg&); // _28
    virtual void judgeNearWithPlayer(const Vec&, const Vec&, float,
                                     float);            // _2C
    virtual void onPlayingSe(unsigned long, JAISound*); // _30

    // _00 VTBL
};
} // namespace PSM

namespace JAInter {
struct ObjectBase {
    virtual void _00() = 0;                               // _00
    virtual void _04() = 0;                               // _04
    virtual void _08() = 0;                               // _08
    virtual void _0C() = 0;                               // _0C
    virtual void _10() = 0;                               // _10
    virtual void _14() = 0;                               // _14
    virtual void _18() = 0;                               // _18
    virtual void _1C() = 0;                               // _1C
    virtual void _20() = 0;                               // _20
    virtual void _24() = 0;                               // _24
    virtual void _28() = 0;                               // _28
    virtual void _2C() = 0;                               // _2C
    virtual void _30() = 0;                               // _30
    virtual void _34() = 0;                               // _34
    virtual void _38() = 0;                               // _38
    virtual void _3C() = 0;                               // _3C
    virtual void _40() = 0;                               // _40
    virtual void _44() = 0;                               // _44
    virtual void _48() = 0;                               // _48
    virtual void _4C() = 0;                               // _4C
    virtual void stopAllSound();                          // _50
    virtual void stopSound(unsigned long, unsigned long); // _54
    virtual void enable();                                // _58
    virtual void _5C() = 0;                               // _5C
    virtual void dispose();                               // _60
    virtual void getFreeSoundHandlePointer();             // _64
    virtual void getUseSoundHandlePointer(unsigned long); // _68

    // _00 VTBL
};
} // namespace JAInter

namespace JAInter {
struct Object {
    virtual void _00() = 0; // _00
    virtual void _04() = 0; // _04
    virtual void _08() = 0; // _08
    virtual void _0C() = 0; // _0C
    virtual void _10() = 0; // _10
    virtual void _14() = 0; // _14
    virtual void _18() = 0; // _18
    virtual void _1C() = 0; // _1C
    virtual void _20() = 0; // _20
    virtual void _24() = 0; // _24
    virtual void _28() = 0; // _28
    virtual void _2C() = 0; // _2C
    virtual void _30() = 0; // _30
    virtual void _34() = 0; // _34
    virtual void _38() = 0; // _38
    virtual void _3C() = 0; // _3C
    virtual void _40() = 0; // _40
    virtual void _44() = 0; // _44
    virtual void _48() = 0; // _48
    virtual void _4C() = 0; // _4C
    virtual void _50() = 0; // _50
    virtual void _54() = 0; // _54
    virtual void _58() = 0; // _58
    virtual void disable(); // _5C
    virtual void _60() = 0; // _60
    virtual void _64() = 0; // _64
    virtual void _68() = 0; // _68
    virtual void _6C() = 0; // _6C
    virtual void loop();    // _70

    // _00 VTBL
};
} // namespace JAInter

struct JAIAnimeSound {
    virtual void _00() = 0;                                // _00
    virtual void _04() = 0;                                // _04
    virtual void _08() = 0;                                // _08
    virtual void _0C() = 0;                                // _0C
    virtual void _10() = 0;                                // _10
    virtual void _14() = 0;                                // _14
    virtual void _18() = 0;                                // _18
    virtual void _1C() = 0;                                // _1C
    virtual void _20() = 0;                                // _20
    virtual void _24() = 0;                                // _24
    virtual void _28() = 0;                                // _28
    virtual void _2C() = 0;                                // _2C
    virtual void _30() = 0;                                // _30
    virtual void _34() = 0;                                // _34
    virtual void _38() = 0;                                // _38
    virtual void _3C() = 0;                                // _3C
    virtual void _40() = 0;                                // _40
    virtual void _44() = 0;                                // _44
    virtual void _48() = 0;                                // _48
    virtual void _4C() = 0;                                // _4C
    virtual void _50() = 0;                                // _50
    virtual void _54() = 0;                                // _54
    virtual void _58() = 0;                                // _58
    virtual void _5C() = 0;                                // _5C
    virtual void _60() = 0;                                // _60
    virtual void _64() = 0;                                // _64
    virtual void _68() = 0;                                // _68
    virtual void handleStop(unsigned char, unsigned long); // _6C
    virtual void _70() = 0;                                // _70
    virtual void _74() = 0;                                // _74
    virtual void _78() = 0;                                // _78
    virtual void setSpeedModifySound(JAISound*, JAIAnimeFrameSoundData*,
                                     float); // _7C

    // _00 VTBL
};

namespace PSM {
struct CreatureAnime : public Creature,
                       public ObjectBase,
                       public Object,
                       public JAIAnimeSound {
    virtual void _00() = 0;                       // _00
    virtual void _04() = 0;                       // _04
    virtual void @16 @__dt();                     // _08
    virtual ~CreatureAnime();                     // _0C
    virtual void frameEnd_onPlaySe();             // _10
    virtual void getCastType();                   // _14
    virtual void exec();                          // _18
    virtual void getJAIObject();                  // _1C
    virtual void onCalcOn();                      // _20
    virtual void loopCalc(FrameCalcArg&);         // _24
    virtual void startSoundInner(StartSoundArg&); // _28
    virtual void judgeNearWithPlayer(const Vec&, const Vec&, float,
                                     float);                    // _2C
    virtual void onPlayingSe(unsigned long, JAISound*);         // _30
    virtual void getHandleArea(unsigned char);                  // _34
    virtual void _38() = 0;                                     // _38
    virtual void _3C() = 0;                                     // _3C
    virtual void @48 @__dt();                                   // _40
    virtual void @48 @startSound(unsigned long, unsigned long); // _44
    virtual void @48
        @startSound(unsigned char, unsigned long, unsigned long); // _48
    virtual void @48
        @startSound(JAISound**, unsigned long, unsigned long); // _4C
    virtual void stopAllSound();                               // _50
    virtual void stopSound(unsigned long, unsigned long);      // _54
    virtual void enable();                                     // _58
    virtual void disable();                                    // _5C
    virtual void dispose();                                    // _60
    virtual void getFreeSoundHandlePointer();                  // _64
    virtual void getUseSoundHandlePointer(unsigned long);      // _68
    virtual void handleStop(unsigned char, unsigned long);     // _6C
    virtual void loop();                                       // _70
    virtual void @48
        @playActorAnimSound(JAInter::Actor*, float, unsigned char); // _74
    virtual void @48 @startAnimSound(unsigned long, JAISound**, JAInter::Actor*,
                                     unsigned char); // _78
    virtual void setSpeedModifySound(JAISound*, JAIAnimeFrameSoundData*,
                                     float);                              // _7C
    virtual void startSound(unsigned long, unsigned long);                // _80
    virtual void startSound(unsigned char, unsigned long, unsigned long); // _84
    virtual void startSound(JAISound**, unsigned long, unsigned long);    // _88
    virtual void startAnimSound(unsigned long, JAISound**, JAInter::Actor*,
                                unsigned char); // _8C
    virtual void playActorAnimSound(JAInter::Actor*, float,
                                    unsigned char); // _90
    virtual void onCalcTurnOn();                    // _94
    virtual void onCalcTurnOff();                   // _98

    // _00 VTBL
};
} // namespace PSM

#endif
