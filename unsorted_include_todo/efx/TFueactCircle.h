#ifndef _EFX_TFUEACTCIRCLE_H
#define _EFX_TFUEACTCIRCLE_H

/*
        __vt__Q23efx13TFueactCircle:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx13TFueactCircleFPQ23efx3Arg
        .4byte forceKill__Q23efx13TFueactCircleFv
        .4byte fade__Q23efx13TFueactCircleFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx13TFueactCircleFv"
        .4byte "@4@execute__Q23efx13TFueactCircleFP14JPABaseEmitter"
        .4byte "@4@executeAfter__Q23efx13TFueactCircleFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte 0
        .4byte 0
        .4byte "@8@__dt__Q23efx13TFueactCircleFv"
        .4byte
   "@8@execute__Q23efx13TFueactCircleFP14JPABaseEmitterP15JPABaseParticle"
        .4byte draw__19JPAParticleCallBackFP14JPABaseEmitterP15JPABaseParticle
        .4byte execute__Q23efx13TFueactCircleFP14JPABaseEmitter
        .4byte
   execute__Q23efx13TFueactCircleFP14JPABaseEmitterP15JPABaseParticle .4byte
   executeAfter__Q23efx13TFueactCircleFP14JPABaseEmitter .4byte
   __dt__Q23efx13TFueactCircleFv
*/

struct JPAEmitterCallBack {
    virtual void create(Arg*);                      // _08
    virtual void forceKill();                       // _0C (inline)
    virtual void fade();                            // _10 (inline)
    virtual void _14() = 0;                         // _14
    virtual void _18() = 0;                         // _18
    virtual void @4 @__dt();                        // _1C (inline)
    virtual void @4 @execute(JPABaseEmitter*);      // _20 (inline)
    virtual void @4 @executeAfter(JPABaseEmitter*); // _24 (inline)
    virtual void draw(JPABaseEmitter*);             // _28 (inline)
    virtual void drawAfter(JPABaseEmitter*);        // _2C (inline)
};

struct JPAParticleCallBack {
    virtual void create(Arg*);                                   // _08
    virtual void forceKill();                                    // _0C (inline)
    virtual void fade();                                         // _10 (inline)
    virtual void _14() = 0;                                      // _14
    virtual void _18() = 0;                                      // _18
    virtual void @4 @__dt();                                     // _1C (inline)
    virtual void @4 @execute(JPABaseEmitter*);                   // _20 (inline)
    virtual void @4 @executeAfter(JPABaseEmitter*);              // _24 (inline)
    virtual void _28() = 0;                                      // _28
    virtual void _2C() = 0;                                      // _2C
    virtual void _30() = 0;                                      // _30
    virtual void _34() = 0;                                      // _34
    virtual void @8 @__dt();                                     // _38 (inline)
    virtual void @8 @execute(JPABaseEmitter*, JPABaseParticle*); // _3C (inline)
    virtual void draw(JPABaseEmitter*, JPABaseParticle*);        // _40 (inline)
};

namespace efx {
struct TFueactCircle : public JPAEmitterCallBack, public JPAParticleCallBack {
    virtual void create(Arg*);                                   // _08
    virtual void forceKill();                                    // _0C (inline)
    virtual void fade();                                         // _10 (inline)
    virtual void _14() = 0;                                      // _14
    virtual void _18() = 0;                                      // _18
    virtual void @4 @__dt();                                     // _1C (inline)
    virtual void @4 @execute(JPABaseEmitter*);                   // _20 (inline)
    virtual void @4 @executeAfter(JPABaseEmitter*);              // _24 (inline)
    virtual void _30() = 0;                                      // _30
    virtual void _34() = 0;                                      // _34
    virtual void @8 @__dt();                                     // _38 (inline)
    virtual void @8 @execute(JPABaseEmitter*, JPABaseParticle*); // _3C (inline)
    virtual void execute(JPABaseEmitter*);                       // _44 (inline)
    virtual void execute(JPABaseEmitter*, JPABaseParticle*);     // _48 (inline)
    virtual void executeAfter(JPABaseEmitter*);                  // _4C (inline)
    virtual ~TFueactCircle();                                    // _50 (inline)
};
} // namespace efx

#endif
