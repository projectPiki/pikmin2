#ifndef _PSAUTOBGM_MELOARRBASE_H
#define _PSAUTOBGM_MELOARRBASE_H

/*
        __vt__Q29PSAutoBgm11MeloArrBase:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "@16@__dt__Q29PSAutoBgm11MeloArrBaseFv"
        .4byte directOn__Q29PSAutoBgm11MeloArrBaseFPQ29PSAutoBgm5Track
        .4byte directOff__Q29PSAutoBgm11MeloArrBaseFPQ29PSAutoBgm5Track
        .4byte pre__Q29PSAutoBgm11MeloArrBaseFRQ29PSAutoBgm10MeloArrArg
        .4byte post__Q29PSAutoBgm11MeloArrBaseFRQ29PSAutoBgm10MeloArrArg
        .4byte 0
        .4byte __dt__Q29PSAutoBgm11MeloArrBaseFv
*/

namespace PSAutoBgm {
struct MeloArrBase {
    virtual void _08() = 0;         // _08
    virtual void _0C() = 0;         // _0C
    virtual void @16 @__dt();       // _10 (inline)
    virtual void directOn(Track*);  // _14 (inline)
    virtual void directOff(Track*); // _18 (inline)
    virtual void pre(MeloArrArg&);  // _1C (inline)
    virtual void post(MeloArrArg&); // _20 (inline)
    virtual void _24() = 0;         // _24
    virtual ~MeloArrBase();         // _28 (inline)
};
} // namespace PSAutoBgm

#endif
