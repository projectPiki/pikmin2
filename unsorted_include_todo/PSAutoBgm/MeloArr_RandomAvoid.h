#ifndef _PSAUTOBGM_MELOARR_RANDOMAVOID_H
#define _PSAUTOBGM_MELOARR_RANDOMAVOID_H

/*
        __vt__Q29PSAutoBgm19MeloArr_RandomAvoid:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "@16@__dt__Q29PSAutoBgm19MeloArr_RandomAvoidFv"
        .4byte directOn__Q29PSAutoBgm11MeloArrBaseFPQ29PSAutoBgm5Track
        .4byte directOff__Q29PSAutoBgm11MeloArrBaseFPQ29PSAutoBgm5Track
        .4byte pre__Q29PSAutoBgm11MeloArrBaseFRQ29PSAutoBgm10MeloArrArg
        .4byte post__Q29PSAutoBgm11MeloArrBaseFRQ29PSAutoBgm10MeloArrArg
        .4byte
   avoidChk__Q29PSAutoBgm19MeloArr_RandomAvoidFRQ29PSAutoBgm10MeloArrArg .4byte
   __dt__Q29PSAutoBgm19MeloArr_RandomAvoidFv
*/

namespace PSAutoBgm {
struct MeloArrBase {
    virtual void _00() = 0;         // _00
    virtual void _04() = 0;         // _04
    virtual void @16 @__dt();       // _08
    virtual void directOn(Track*);  // _0C
    virtual void directOff(Track*); // _10
    virtual void pre(MeloArrArg&);  // _14
    virtual void post(MeloArrArg&); // _18

    // _00 VTBL
};
} // namespace PSAutoBgm

namespace PSAutoBgm {
struct MeloArr_RandomAvoid : public MeloArrBase {
    virtual void _00() = 0;             // _00
    virtual void _04() = 0;             // _04
    virtual void @16 @__dt();           // _08
    virtual void directOn(Track*);      // _0C
    virtual void directOff(Track*);     // _10
    virtual void pre(MeloArrArg&);      // _14
    virtual void post(MeloArrArg&);     // _18
    virtual void avoidChk(MeloArrArg&); // _1C
    virtual ~MeloArr_RandomAvoid();     // _20

    // _00 VTBL
};
} // namespace PSAutoBgm

#endif
