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
    .4byte "@8@execute__Q23efx13TFueactCircleFP14JPABaseEmitterP15JPABaseParticle"
    .4byte draw__19JPAParticleCallBackFP14JPABaseEmitterP15JPABaseParticle
    .4byte execute__Q23efx13TFueactCircleFP14JPABaseEmitter
    .4byte execute__Q23efx13TFueactCircleFP14JPABaseEmitterP15JPABaseParticle
    .4byte executeAfter__Q23efx13TFueactCircleFP14JPABaseEmitter
    .4byte __dt__Q23efx13TFueactCircleFv
*/

struct JPAEmitterCallBack {
	virtual void create(Arg*);               // _08
	virtual void forceKill();                // _0C (weak)
	virtual void fade();                     // _10 (weak)
	virtual void _14() = 0;                  // _14
	virtual void _18() = 0;                  // _18
	virtual void _1C() = 0;                  // _1C
	virtual void _20() = 0;                  // _20
	virtual void _24() = 0;                  // _24
	virtual void draw(JPABaseEmitter*);      // _28 (weak)
	virtual void drawAfter(JPABaseEmitter*); // _2C (weak)
};

struct JPAParticleCallBack {
	virtual void create(Arg*);                            // _08
	virtual void forceKill();                             // _0C (weak)
	virtual void fade();                                  // _10 (weak)
	virtual void _14() = 0;                               // _14
	virtual void _18() = 0;                               // _18
	virtual void _1C() = 0;                               // _1C
	virtual void _20() = 0;                               // _20
	virtual void _24() = 0;                               // _24
	virtual void _28() = 0;                               // _28
	virtual void _2C() = 0;                               // _2C
	virtual void _30() = 0;                               // _30
	virtual void _34() = 0;                               // _34
	virtual void _38() = 0;                               // _38
	virtual void _3C() = 0;                               // _3C
	virtual void draw(JPABaseEmitter*, JPABaseParticle*); // _40 (weak)
};

namespace efx {
struct TFueactCircle : public JPAEmitterCallBack, public JPAParticleCallBack {
	virtual void create(Arg*);                               // _08
	virtual void forceKill();                                // _0C (weak)
	virtual void fade();                                     // _10 (weak)
	virtual void _14() = 0;                                  // _14
	virtual void _18() = 0;                                  // _18
	virtual void _30() = 0;                                  // _30
	virtual void _34() = 0;                                  // _34
	virtual void execute(JPABaseEmitter*);                   // _44 (weak)
	virtual void execute(JPABaseEmitter*, JPABaseParticle*); // _48 (weak)
	virtual void executeAfter(JPABaseEmitter*);              // _4C (weak)
	virtual ~TFueactCircle();                                // _50 (weak)
};
} // namespace efx

#endif
