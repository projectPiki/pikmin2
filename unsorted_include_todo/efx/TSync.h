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
    virtual void @4 @__dt();                        // _1C
    virtual void @4 @execute(JPABaseEmitter*);      // _20
    virtual void @4 @executeAfter(JPABaseEmitter*); // _24
    virtual void draw(JPABaseEmitter*);             // _28
    virtual void drawAfter(JPABaseEmitter*);        // _2C

    // _00 VTBL
};

namespace efx {
struct TSync : public JPAEmitterCallBack {
    virtual void create(Arg*);                      // _08
    virtual void forceKill();                       // _0C
    virtual void fade();                            // _10
    virtual void _14() = 0;                         // _14
    virtual void _18() = 0;                         // _18
    virtual void @4 @__dt();                        // _1C
    virtual void @4 @execute(JPABaseEmitter*);      // _20
    virtual void @4 @executeAfter(JPABaseEmitter*); // _24
    virtual void execute(JPABaseEmitter*);          // _30
    virtual void executeAfter(JPABaseEmitter*);     // _34
    virtual void _38() = 0;                         // _38
    virtual void doExecuteAfter(JPABaseEmitter*);   // _3C
    virtual void startDemoDrawOff();                // _40
    virtual void endDemoDrawOn();                   // _44
    virtual ~TSync();                               // _48

    // _00 VTBL
};
} // namespace efx

#endif
