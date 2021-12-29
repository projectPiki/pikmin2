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
    virtual void _00() = 0;                       // _00
    virtual void _04() = 0;                       // _04
    virtual void @16 @__dt();                     // _08
    virtual ~Creature();                          // _0C
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
    virtual void _34() = 0;                             // _34

    // _00 VTBL
};
} // namespace PSM

#endif
