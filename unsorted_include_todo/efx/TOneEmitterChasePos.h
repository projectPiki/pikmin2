#ifndef _EFX_TONEEMITTERCHASEPOS_H
#define _EFX_TONEEMITTERCHASEPOS_H

/*
        __vt__Q23efx19TOneEmitterChasePos:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx19TOneEmitterChasePosFPQ23efx3Arg
        .4byte forceKill__Q23efx19TOneEmitterChasePosFv
        .4byte fade__Q23efx19TOneEmitterChasePosFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx19TOneEmitterChasePosFv"
        .4byte execute__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte "@4@executeAfter__Q23efx19TOneEmitterChasePosFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte executeAfter__Q23efx19TOneEmitterChasePosFP14JPABaseEmitter
        .4byte startDemoDrawOff__Q23efx19TOneEmitterChasePosFv
        .4byte endDemoDrawOn__Q23efx19TOneEmitterChasePosFv
        .4byte __dt__Q23efx19TOneEmitterChasePosFv
*/

struct JPAEmitterCallBack {
    virtual void create(Arg*);                      // _00
    virtual void forceKill();                       // _04
    virtual void fade();                            // _08
    virtual void _0C() = 0;                         // _0C
    virtual void _10() = 0;                         // _10
    virtual void @4 @__dt();                        // _14
    virtual void execute(JPABaseEmitter*);          // _18
    virtual void @4 @executeAfter(JPABaseEmitter*); // _1C
    virtual void draw(JPABaseEmitter*);             // _20
    virtual void drawAfter(JPABaseEmitter*);        // _24

    // _00 VTBL
};

namespace efx {
struct TOneEmitterChasePos : public JPAEmitterCallBack {
    virtual void create(Arg*);                      // _00
    virtual void forceKill();                       // _04
    virtual void fade();                            // _08
    virtual void _0C() = 0;                         // _0C
    virtual void _10() = 0;                         // _10
    virtual void @4 @__dt();                        // _14
    virtual void execute(JPABaseEmitter*);          // _18
    virtual void @4 @executeAfter(JPABaseEmitter*); // _1C
    virtual void draw(JPABaseEmitter*);             // _20
    virtual void drawAfter(JPABaseEmitter*);        // _24
    virtual void executeAfter(JPABaseEmitter*);     // _28
    virtual void startDemoDrawOff();                // _2C
    virtual void endDemoDrawOn();                   // _30
    virtual ~TOneEmitterChasePos();                 // _34

    // _00 VTBL
};
} // namespace efx

#endif
