#ifndef _EFX2D_TCHASEPOS_H
#define _EFX2D_TCHASEPOS_H

/*
        __vt__Q25efx2d9TChasePos:
        .4byte 0
        .4byte 0
        .4byte create__Q25efx2d9TChasePosFPQ25efx2d3Arg
        .4byte kill__Q25efx2d8TForeverFv
        .4byte fade__Q25efx2d8TForeverFv
        .4byte setGroup__Q25efx2d5TBaseFUc
        .4byte 0
        .4byte 0
        .4byte "@8@__dt__Q25efx2d9TChasePosFv"
        .4byte "@8@execute__Q25efx2d9TChasePosFP14JPABaseEmitter"
        .4byte executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte __dt__Q25efx2d9TChasePosFv
        .4byte execute__Q25efx2d9TChasePosFP14JPABaseEmitter
*/

namespace efx2d {
struct TForever {
    virtual void _08() = 0; // _08
    virtual void kill();    // _0C
    virtual void fade();    // _10

    // _00 VTBL
};
} // namespace efx2d

namespace efx2d {
struct TBase {
    virtual void _08() = 0;               // _08
    virtual void _0C() = 0;               // _0C
    virtual void _10() = 0;               // _10
    virtual void setGroup(unsigned char); // _14

    // _00 VTBL
};
} // namespace efx2d

struct JPAEmitterCallBack {
    virtual void _08() = 0;                     // _08
    virtual void _0C() = 0;                     // _0C
    virtual void _10() = 0;                     // _10
    virtual void _14() = 0;                     // _14
    virtual void _18() = 0;                     // _18
    virtual void _1C() = 0;                     // _1C
    virtual void _20() = 0;                     // _20
    virtual void _24() = 0;                     // _24
    virtual void executeAfter(JPABaseEmitter*); // _28
    virtual void draw(JPABaseEmitter*);         // _2C
    virtual void drawAfter(JPABaseEmitter*);    // _30

    // _00 VTBL
};

namespace efx2d {
struct TChasePos : public TForever, public TBase, public JPAEmitterCallBack {
    virtual void create(Arg*);                 // _08
    virtual void _18() = 0;                    // _18
    virtual void _1C() = 0;                    // _1C
    virtual void @8 @__dt();                   // _20
    virtual void @8 @execute(JPABaseEmitter*); // _24
    virtual ~TChasePos();                      // _34
    virtual void execute(JPABaseEmitter*);     // _38

    // _00 VTBL
};
} // namespace efx2d

#endif
