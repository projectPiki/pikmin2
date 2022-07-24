#ifndef _PSM_OTAKARA_H
#define _PSM_OTAKARA_H

/*
        __vt__Q23PSM7Otakara:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "@16@__dt__Q23PSM7OtakaraFv"
        .4byte __dt__Q23PSM7OtakaraFv
        .4byte frameEnd_onPlaySe__Q23PSM11CreatureObjFv
        .4byte getCastType__Q23PSM7OtakaraFv
        .4byte exec__Q23PSM8CreatureFv
        .4byte getJAIObject__Q23PSM11CreatureObjFv
        .4byte onCalcOn__Q23PSM11CreatureObjFv
        .4byte loopCalc__Q23PSM8CreatureFRQ23PSM12FrameCalcArg
        .4byte startSoundInner__Q23PSM8CreatureFRQ23PSM13StartSoundArg
        .4byte judgeNearWithPlayer__Q23PSM8CreatureFRC3VecRC3Vecff
        .4byte onPlayingSe__Q23PSM8CreatureFUlP8JAISound
        .4byte getHandleArea__Q23PSM11CreatureObjFUc
        .4byte 0
        .4byte 0
        .4byte "@48@__dt__Q23PSM7OtakaraFv"
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
        .4byte otakaraEventStart__Q23PSM7OtakaraFv
        .4byte otakaraEventRestart__Q23PSM7OtakaraFv
        .4byte otakaraEventStop__Q23PSM7OtakaraFv
        .4byte otakaraEventFinish__Q23PSM7OtakaraFv
*/

namespace PSM {
struct CreatureObj {
    virtual void _08() = 0;                                // _08
    virtual void _0C() = 0;                                // _0C
    virtual void @16 @__dt();                              // _10 (inline)
    virtual ~CreatureObj();                                // _14 (inline)
    virtual void frameEnd_onPlaySe();                      // _18
    virtual void getCastType();                            // _1C (inline)
    virtual void _20() = 0;                                // _20
    virtual void getJAIObject();                           // _24 (inline)
    virtual void onCalcOn();                               // _28 (inline)
    virtual void _2C() = 0;                                // _2C
    virtual void _30() = 0;                                // _30
    virtual void _34() = 0;                                // _34
    virtual void _38() = 0;                                // _38
    virtual void getHandleArea(unsigned char);             // _3C (inline)
    virtual void _40() = 0;                                // _40
    virtual void _44() = 0;                                // _44
    virtual void @48 @__dt();                              // _48 (inline)
    virtual void _4C() = 0;                                // _4C
    virtual void _50() = 0;                                // _50
    virtual void _54() = 0;                                // _54
    virtual void _58() = 0;                                // _58
    virtual void _5C() = 0;                                // _5C
    virtual void _60() = 0;                                // _60
    virtual void _64() = 0;                                // _64
    virtual void _68() = 0;                                // _68
    virtual void _6C() = 0;                                // _6C
    virtual void _70() = 0;                                // _70
    virtual void _74() = 0;                                // _74
    virtual void _78() = 0;                                // _78
    virtual void startSound(unsigned long, unsigned long); // _7C (inline)
    virtual void startSound(unsigned char, unsigned long,
                            unsigned long); // _80 (inline)
    virtual void startSound(JAISound**, unsigned long,
                            unsigned long); // _84 (inline)
};
} // namespace PSM

namespace PSM {
struct Creature {
    virtual void _08() = 0;                       // _08
    virtual void _0C() = 0;                       // _0C
    virtual void @16 @__dt();                     // _10 (inline)
    virtual ~Creature();                          // _14 (inline)
    virtual void _18() = 0;                       // _18
    virtual void getCastType();                   // _1C (inline)
    virtual void exec();                          // _20
    virtual void _24() = 0;                       // _24
    virtual void _28() = 0;                       // _28
    virtual void loopCalc(FrameCalcArg&);         // _2C
    virtual void startSoundInner(StartSoundArg&); // _30
    virtual void judgeNearWithPlayer(const Vec&, const Vec&, float,
                                     float);            // _34
    virtual void onPlayingSe(unsigned long, JAISound*); // _38
};
} // namespace PSM

namespace JAInter {
struct ObjectBase {
    virtual void _08() = 0;                                // _08
    virtual void _0C() = 0;                                // _0C
    virtual void @16 @__dt();                              // _10 (inline)
    virtual ~ObjectBase();                                 // _14 (inline)
    virtual void _18() = 0;                                // _18
    virtual void getCastType();                            // _1C (inline)
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
    virtual void @48 @__dt();                              // _48 (inline)
    virtual void _4C() = 0;                                // _4C
    virtual void _50() = 0;                                // _50
    virtual void _54() = 0;                                // _54
    virtual void stopAllSound();                           // _58
    virtual void stopSound(unsigned long, unsigned long);  // _5C
    virtual void enable();                                 // _60 (inline)
    virtual void _64() = 0;                                // _64
    virtual void dispose();                                // _68
    virtual void getFreeSoundHandlePointer();              // _6C
    virtual void getUseSoundHandlePointer(unsigned long);  // _70
    virtual void handleStop(unsigned char, unsigned long); // _74
};
} // namespace JAInter

namespace JAInter {
struct Object {
    virtual void _08() = 0;     // _08
    virtual void _0C() = 0;     // _0C
    virtual void @16 @__dt();   // _10 (inline)
    virtual ~Object();          // _14 (inline)
    virtual void _18() = 0;     // _18
    virtual void getCastType(); // _1C (inline)
    virtual void _20() = 0;     // _20
    virtual void _24() = 0;     // _24
    virtual void _28() = 0;     // _28
    virtual void _2C() = 0;     // _2C
    virtual void _30() = 0;     // _30
    virtual void _34() = 0;     // _34
    virtual void _38() = 0;     // _38
    virtual void _3C() = 0;     // _3C
    virtual void _40() = 0;     // _40
    virtual void _44() = 0;     // _44
    virtual void @48 @__dt();   // _48 (inline)
    virtual void _4C() = 0;     // _4C
    virtual void _50() = 0;     // _50
    virtual void _54() = 0;     // _54
    virtual void _58() = 0;     // _58
    virtual void _5C() = 0;     // _5C
    virtual void _60() = 0;     // _60
    virtual void disable();     // _64
    virtual void _68() = 0;     // _68
    virtual void _6C() = 0;     // _6C
    virtual void _70() = 0;     // _70
    virtual void _74() = 0;     // _74
    virtual void loop();        // _78
};
} // namespace JAInter

namespace PSM {
struct Otakara : public CreatureObj,
                 public Creature,
                 public ObjectBase,
                 public Object {
    virtual void _08() = 0;             // _08
    virtual void _0C() = 0;             // _0C
    virtual void @16 @__dt();           // _10 (inline)
    virtual ~Otakara();                 // _14 (inline)
    virtual void getCastType();         // _1C (inline)
    virtual void _40() = 0;             // _40
    virtual void _44() = 0;             // _44
    virtual void @48 @__dt();           // _48 (inline)
    virtual void otakaraEventStart();   // _88
    virtual void otakaraEventRestart(); // _8C
    virtual void otakaraEventStop();    // _90
    virtual void otakaraEventFinish();  // _94

    void setGoalOnyon(Game::Creature*);
};
} // namespace PSM

#endif
