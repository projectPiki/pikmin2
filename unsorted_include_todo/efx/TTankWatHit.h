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
    virtual void create(Arg*);                  // _08
    virtual void forceKill();                   // _0C (inline)
    virtual void fade();                        // _10 (inline)
    virtual void _14() = 0;                     // _14
    virtual void _18() = 0;                     // _18
    virtual void @4 @__dt();                    // _1C (inline)
    virtual void _20() = 0;                     // _20
    virtual void _24() = 0;                     // _24
    virtual void _28() = 0;                     // _28
    virtual void _2C() = 0;                     // _2C
    virtual void executeAfter(JPABaseEmitter*); // _30 (inline)
    virtual void startDemoDrawOff();            // _34 (inline)
    virtual void endDemoDrawOn();               // _38 (inline)
};
} // namespace efx

struct JPAEmitterCallBack {
    virtual void _08() = 0;                  // _08
    virtual void _0C() = 0;                  // _0C
    virtual void _10() = 0;                  // _10
    virtual void _14() = 0;                  // _14
    virtual void _18() = 0;                  // _18
    virtual void @4 @__dt();                 // _1C (inline)
    virtual void execute(JPABaseEmitter*);   // _20 (inline)
    virtual void _24() = 0;                  // _24
    virtual void draw(JPABaseEmitter*);      // _28 (inline)
    virtual void drawAfter(JPABaseEmitter*); // _2C (inline)
};

namespace efx {
struct TTankWatHit : public TOneEmitterSimple, public JPAEmitterCallBack {
    virtual void _14() = 0;  // _14
    virtual void _18() = 0;  // _18
    virtual void @4 @__dt(); // _1C (inline)
    virtual ~TTankWatHit();  // _3C (inline)
};
} // namespace efx

#endif
