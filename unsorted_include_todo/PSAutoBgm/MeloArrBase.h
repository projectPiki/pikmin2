#ifndef _PSAUTOBGM_MELOARRBASE_H
#define _PSAUTOBGM_MELOARRBASE_H

namespace PSAutoBgm {
struct MeloArrBase {
    virtual void _00() = 0;         // _00
    virtual void _04() = 0;         // _04
    virtual void @16 @__dt();       // _08
    virtual void directOn(Track*);  // _0C
    virtual void directOff(Track*); // _10
    virtual void pre(MeloArrArg&);  // _14
    virtual void post(MeloArrArg&); // _18
    virtual void _1C() = 0;         // _1C
    virtual ~MeloArrBase();         // _20

    // _00 VTBL
};
} // namespace PSAutoBgm

#endif
