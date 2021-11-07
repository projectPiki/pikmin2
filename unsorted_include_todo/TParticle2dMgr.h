#ifndef _TPARTICLE2DMGR_H
#define _TPARTICLE2DMGR_H

struct CNode {
    virtual void _00() = 0;       // _00
    virtual void getChildCount(); // _04

    // _00 VTBL
};

struct TParticle2dMgr : public CNode {
    virtual ~TParticle2dMgr();    // _00
    virtual void getChildCount(); // _04
    virtual void _08() = 0;       // _08
    virtual void _0C() = 0;       // _0C
    virtual void @24 @__dt();     // _10

    // _00 VTBL
};

#endif
