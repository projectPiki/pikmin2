#ifndef _PSM_PIKI_H
#define _PSM_PIKI_H

/*
        __vt__Q23PSM4Piki:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "@16@__dt__Q23PSM4PikiFv"
        .4byte __dt__Q23PSM4PikiFv
        .4byte frameEnd_onPlaySe__Q23PSM11CreatureObjFv
        .4byte getCastType__Q23PSM4PikiFv
        .4byte exec__Q23PSM8CreatureFv
        .4byte getJAIObject__Q23PSM11CreatureObjFv
        .4byte onCalcOn__Q23PSM4PikiFv
        .4byte loopCalc__Q23PSM8CreatureFRQ23PSM12FrameCalcArg
        .4byte startSoundInner__Q23PSM8CreatureFRQ23PSM13StartSoundArg
        .4byte judgeNearWithPlayer__Q23PSM8CreatureFRC3VecRC3Vecff
        .4byte onPlayingSe__Q23PSM8CreatureFUlP8JAISound
        .4byte getHandleArea__Q23PSM11CreatureObjFUc
        .4byte 0
        .4byte 0
        .4byte "@48@__dt__Q23PSM4PikiFv"
        .4byte "@48@startSound__Q23PSM11CreatureObjFUlUl"
        .4byte "@48@startSound__Q23PSM11CreatureObjFUcUlUl"
        .4byte "@48@startSound__Q23PSM11CreatureObjFPP8JAISoundUlUl"
        .4byte stopAllSound__Q27JAInter10ObjectBaseFv
        .4byte stopSound__Q27JAInter10ObjectBaseFUlUl
        .4byte enable__Q27JAInter10ObjectBaseFv
        .4byte disable__Q27JAInter6ObjectFv
        .4byte dispose__Q27JAInter10ObjectBaseFv
        .4byte getFreeSoundHandlePointer__Q27JAInter10ObjectBaseFv
        .4byte getUseSoundHandlePointer__Q27JAInter10ObjectBaseFUl
        .4byte handleStop__Q27JAInter10ObjectBaseFUcUl
        .4byte loop__Q27JAInter6ObjectFv
        .4byte startSound__Q23PSM11CreatureObjFUlUl
        .4byte startSound__Q23PSM11CreatureObjFUcUlUl
        .4byte startSound__Q23PSM11CreatureObjFPP8JAISoundUlUl
*/

namespace PSM {
struct CreatureObj {
    virtual void _00() = 0;                                               // _00
    virtual void _04() = 0;                                               // _04
    virtual void _08() = 0;                                               // _08
    virtual void _0C() = 0;                                               // _0C
    virtual void frameEnd_onPlaySe();                                     // _10
    virtual void _14() = 0;                                               // _14
    virtual void _18() = 0;                                               // _18
    virtual void getJAIObject();                                          // _1C
    virtual void _20() = 0;                                               // _20
    virtual void _24() = 0;                                               // _24
    virtual void _28() = 0;                                               // _28
    virtual void _2C() = 0;                                               // _2C
    virtual void _30() = 0;                                               // _30
    virtual void getHandleArea(unsigned char);                            // _34
    virtual void _38() = 0;                                               // _38
    virtual void _3C() = 0;                                               // _3C
    virtual void _40() = 0;                                               // _40
    virtual void _44() = 0;                                               // _44
    virtual void _48() = 0;                                               // _48
    virtual void _4C() = 0;                                               // _4C
    virtual void _50() = 0;                                               // _50
    virtual void _54() = 0;                                               // _54
    virtual void _58() = 0;                                               // _58
    virtual void _5C() = 0;                                               // _5C
    virtual void _60() = 0;                                               // _60
    virtual void _64() = 0;                                               // _64
    virtual void _68() = 0;                                               // _68
    virtual void _6C() = 0;                                               // _6C
    virtual void _70() = 0;                                               // _70
    virtual void startSound(unsigned long, unsigned long);                // _74
    virtual void startSound(unsigned char, unsigned long, unsigned long); // _78
    virtual void startSound(JAISound**, unsigned long, unsigned long);    // _7C

    // _00 VTBL
};
} // namespace PSM

namespace PSM {
struct Creature {
    virtual void _00() = 0;                       // _00
    virtual void _04() = 0;                       // _04
    virtual void _08() = 0;                       // _08
    virtual void _0C() = 0;                       // _0C
    virtual void _10() = 0;                       // _10
    virtual void _14() = 0;                       // _14
    virtual void exec();                          // _18
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
    virtual void stopAllSound();                           // _50
    virtual void stopSound(unsigned long, unsigned long);  // _54
    virtual void enable();                                 // _58
    virtual void _5C() = 0;                                // _5C
    virtual void dispose();                                // _60
    virtual void getFreeSoundHandlePointer();              // _64
    virtual void getUseSoundHandlePointer(unsigned long);  // _68
    virtual void handleStop(unsigned char, unsigned long); // _6C

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

namespace PSM {
struct Piki : public CreatureObj,
              public Creature,
              public ObjectBase,
              public Object {
    virtual void _00() = 0;                       // _00
    virtual void _04() = 0;                       // _04
    virtual void @16 @__dt();                     // _08
    virtual ~Piki();                              // _0C
    virtual void frameEnd_onPlaySe();             // _10
    virtual void getCastType();                   // _14
    virtual void exec();                          // _18
    virtual void getJAIObject();                  // _1C
    virtual void onCalcOn();                      // _20
    virtual void loopCalc(FrameCalcArg&);         // _24
    virtual void startSoundInner(StartSoundArg&); // _28
    virtual void judgeNearWithPlayer(const Vec&, const Vec&, float,
                                     float);                              // _2C
    virtual void onPlayingSe(unsigned long, JAISound*);                   // _30
    virtual void getHandleArea(unsigned char);                            // _34
    virtual void _38() = 0;                                               // _38
    virtual void _3C() = 0;                                               // _3C
    virtual void @48 @__dt();                                             // _40
    virtual void stopAllSound();                                          // _50
    virtual void stopSound(unsigned long, unsigned long);                 // _54
    virtual void enable();                                                // _58
    virtual void disable();                                               // _5C
    virtual void dispose();                                               // _60
    virtual void getFreeSoundHandlePointer();                             // _64
    virtual void getUseSoundHandlePointer(unsigned long);                 // _68
    virtual void handleStop(unsigned char, unsigned long);                // _6C
    virtual void loop();                                                  // _70
    virtual void startSound(unsigned long, unsigned long);                // _74
    virtual void startSound(unsigned char, unsigned long, unsigned long); // _78
    virtual void startSound(JAISound**, unsigned long, unsigned long);    // _7C

    // _00 VTBL
};
} // namespace PSM

#endif
