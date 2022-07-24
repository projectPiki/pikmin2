#ifndef _EFX_TPKONEEMITTERSIMPLE_H
#define _EFX_TPKONEEMITTERSIMPLE_H

/*
        __vt__Q23efx19TPkOneEmitterSimple:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx19TPkOneEmitterSimpleFPQ23efx3Arg
        .4byte forceKill__Q23efx19TPkOneEmitterSimpleFv
        .4byte fade__Q23efx19TPkOneEmitterSimpleFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx19TPkOneEmitterSimpleFv"
        .4byte execute__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte "@4@executeAfter__Q23efx19TPkOneEmitterSimpleFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte executeAfter__Q23efx19TPkOneEmitterSimpleFP14JPABaseEmitter
        .4byte __dt__Q23efx19TPkOneEmitterSimpleFv
        .4byte 0
*/

struct JPAEmitterCallBack {
    virtual void create(Arg*);                      // _08
    virtual void forceKill();                       // _0C (inline)
    virtual void fade();                            // _10 (inline)
    virtual void _14() = 0;                         // _14
    virtual void _18() = 0;                         // _18
    virtual void @4 @__dt();                        // _1C (inline)
    virtual void execute(JPABaseEmitter*);          // _20 (inline)
    virtual void @4 @executeAfter(JPABaseEmitter*); // _24 (inline)
    virtual void draw(JPABaseEmitter*);             // _28 (inline)
    virtual void drawAfter(JPABaseEmitter*);        // _2C (inline)
};

namespace efx {
struct TPkOneEmitterSimple : public JPAEmitterCallBack {
    virtual void create(Arg*);                      // _08
    virtual void forceKill();                       // _0C (inline)
    virtual void fade();                            // _10 (inline)
    virtual void _14() = 0;                         // _14
    virtual void _18() = 0;                         // _18
    virtual void @4 @__dt();                        // _1C (inline)
    virtual void @4 @executeAfter(JPABaseEmitter*); // _24 (inline)
    virtual void executeAfter(JPABaseEmitter*);     // _30 (inline)
    virtual ~TPkOneEmitterSimple();                 // _34 (inline)
    virtual void _38() = 0;                         // _38
};
} // namespace efx

#endif
