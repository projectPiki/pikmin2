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
    virtual ~CNode();             // _08
    virtual void getChildCount(); // _0C

    // _00 VTBL
};

struct TParticle2dMgr : public CNode {
    virtual ~TParticle2dMgr(); // _08
    virtual void _10() = 0;    // _10
    virtual void _14() = 0;    // _14
    virtual void @24 @__dt();  // _18

    // _00 VTBL
};

#endif
