#ifndef _TPARTICLE2DMGR_H
#define _TPARTICLE2DMGR_H

/*
        __vt__14TParticle2dMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__14TParticle2dMgrFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__14TParticle2dMgrFv"
*/

struct CNode {
    virtual ~CNode();             // _00
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
