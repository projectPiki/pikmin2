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
    virtual void _08() = 0;         // _08
    virtual void _0C() = 0;         // _0C
    virtual void @16 @__dt();       // _10
    virtual void directOn(Track*);  // _14
    virtual void directOff(Track*); // _18
    virtual void pre(MeloArrArg&);  // _1C
    virtual void post(MeloArrArg&); // _20

    // _00 VTBL
};
} // namespace PSAutoBgm

namespace PSAutoBgm {
struct MeloArr_RandomAvoid : public MeloArrBase {
    virtual void _08() = 0;             // _08
    virtual void _0C() = 0;             // _0C
    virtual void @16 @__dt();           // _10
    virtual void avoidChk(MeloArrArg&); // _24
    virtual ~MeloArr_RandomAvoid();     // _28

    // _00 VTBL
};
} // namespace PSAutoBgm

#endif
