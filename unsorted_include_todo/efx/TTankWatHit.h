#ifndef _EFX_TTANKWATHIT_H
#define _EFX_TTANKWATHIT_H

/*
        __vt__Q23efx11TTankWatHit:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx17TOneEmitterSimpleFPQ23efx3Arg
        .4byte forceKill__Q23efx17TOneEmitterSimpleFv
        .4byte fade__Q23efx17TOneEmitterSimpleFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx11TTankWatHitFv"
        .4byte execute__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte "@4@executeAfter__Q23efx17TOneEmitterSimpleFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte executeAfter__Q23efx17TOneEmitterSimpleFP14JPABaseEmitter
        .4byte startDemoDrawOff__Q23efx17TOneEmitterSimpleFv
        .4byte endDemoDrawOn__Q23efx17TOneEmitterSimpleFv
        .4byte __dt__Q23efx11TTankWatHitFv
*/

namespace efx {
struct TOneEmitterSimple {
    virtual void create(Arg*);                  // _00
    virtual void forceKill();                   // _04
    virtual void fade();                        // _08
    virtual void _0C() = 0;                     // _0C
    virtual void _10() = 0;                     // _10
    virtual void _14() = 0;                     // _14
    virtual void _18() = 0;                     // _18
    virtual void _1C() = 0;                     // _1C
    virtual void _20() = 0;                     // _20
    virtual void _24() = 0;                     // _24
    virtual void executeAfter(JPABaseEmitter*); // _28
    virtual void startDemoDrawOff();            // _2C
    virtual void endDemoDrawOn();               // _30

    // _00 VTBL
};
} // namespace efx

struct JPAEmitterCallBack {
    virtual void _00() = 0;                  // _00
    virtual void _04() = 0;                  // _04
    virtual void _08() = 0;                  // _08
    virtual void _0C() = 0;                  // _0C
    virtual void _10() = 0;                  // _10
    virtual void _14() = 0;                  // _14
    virtual void execute(JPABaseEmitter*);   // _18
    virtual void _1C() = 0;                  // _1C
    virtual void draw(JPABaseEmitter*);      // _20
    virtual void drawAfter(JPABaseEmitter*); // _24

    // _00 VTBL
};

namespace efx {
struct TTankWatHit : public TOneEmitterSimple, public JPAEmitterCallBack {
    virtual void create(Arg*);                  // _00
    virtual void forceKill();                   // _04
    virtual void fade();                        // _08
    virtual void _0C() = 0;                     // _0C
    virtual void _10() = 0;                     // _10
    virtual void @4 @__dt();                    // _14
    virtual void execute(JPABaseEmitter*);      // _18
    virtual void draw(JPABaseEmitter*);         // _20
    virtual void drawAfter(JPABaseEmitter*);    // _24
    virtual void executeAfter(JPABaseEmitter*); // _28
    virtual void startDemoDrawOff();            // _2C
    virtual void endDemoDrawOn();               // _30
    virtual ~TTankWatHit();                     // _34

    // _00 VTBL
};
} // namespace efx

#endif
