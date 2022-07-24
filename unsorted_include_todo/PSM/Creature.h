#ifndef _PSM_CREATURE_H
#define _PSM_CREATURE_H

/*
        __vt__Q23PSM8Creature:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "@16@__dt__Q23PSM8CreatureFv"
        .4byte __dt__Q23PSM8CreatureFv
        .4byte 0
        .4byte 0
        .4byte exec__Q23PSM8CreatureFv
        .4byte 0
        .4byte 0
        .4byte loopCalc__Q23PSM8CreatureFRQ23PSM12FrameCalcArg
        .4byte startSoundInner__Q23PSM8CreatureFRQ23PSM13StartSoundArg
        .4byte judgeNearWithPlayer__Q23PSM8CreatureFRC3VecRC3Vecff
        .4byte onPlayingSe__Q23PSM8CreatureFUlP8JAISound
        .4byte 0
*/

namespace PSM {
struct Creature {
    virtual void _08() = 0;                       // _08
    virtual void _0C() = 0;                       // _0C
    virtual void @16 @__dt();                     // _10
    virtual ~Creature();                          // _14
    virtual void _18() = 0;                       // _18
    virtual void _1C() = 0;                       // _1C
    virtual void exec();                          // _20
    virtual void _24() = 0;                       // _24
    virtual void _28() = 0;                       // _28
    virtual void loopCalc(FrameCalcArg&);         // _2C
    virtual void startSoundInner(StartSoundArg&); // _30
    virtual void judgeNearWithPlayer(const Vec&, const Vec&, float,
                                     float);            // _34
    virtual void onPlayingSe(unsigned long, JAISound*); // _38
    virtual void _3C() = 0;                             // _3C

    // _00 VTBL
};
} // namespace PSM

#endif
