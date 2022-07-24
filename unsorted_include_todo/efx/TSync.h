#ifndef _EFX_TSYNC_H
#define _EFX_TSYNC_H

/*
        __vt__Q23efx5TSync:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx5TSyncFv"
        .4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte execute__Q23efx5TSyncFP14JPABaseEmitter
        .4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte 0
        .4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte startDemoDrawOff__Q23efx5TSyncFv
        .4byte endDemoDrawOn__Q23efx5TSyncFv
        .4byte __dt__Q23efx5TSyncFv
*/

struct JPAEmitterCallBack {
    virtual void create(Arg*);                      // _08
    virtual void forceKill();                       // _0C
    virtual void fade();                            // _10
    virtual void _14() = 0;                         // _14
    virtual void _18() = 0;                         // _18
    virtual void @4 @__dt();                        // _1C (inline)
    virtual void @4 @execute(JPABaseEmitter*);      // _20 (inline)
    virtual void @4 @executeAfter(JPABaseEmitter*); // _24 (inline)
    virtual void draw(JPABaseEmitter*);             // _28 (inline)
    virtual void drawAfter(JPABaseEmitter*);        // _2C (inline)
};

namespace efx {
struct TSync : public JPAEmitterCallBack {
    virtual void create(Arg*);                      // _08
    virtual void forceKill();                       // _0C
    virtual void fade();                            // _10
    virtual void _14() = 0;                         // _14
    virtual void _18() = 0;                         // _18
    virtual void @4 @__dt();                        // _1C (inline)
    virtual void @4 @execute(JPABaseEmitter*);      // _20 (inline)
    virtual void @4 @executeAfter(JPABaseEmitter*); // _24 (inline)
    virtual void execute(JPABaseEmitter*);          // _30 (inline)
    virtual void executeAfter(JPABaseEmitter*);     // _34 (inline)
    virtual void _38() = 0;                         // _38
    virtual void doExecuteAfter(JPABaseEmitter*);   // _3C (inline)
    virtual void startDemoDrawOff();                // _40 (inline)
    virtual void endDemoDrawOn();                   // _44 (inline)
    virtual ~TSync();                               // _48 (inline)
};
} // namespace efx

#endif
