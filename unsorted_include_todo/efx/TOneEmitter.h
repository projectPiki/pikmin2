#ifndef _EFX_TONEEMITTER_H
#define _EFX_TONEEMITTER_H

/*
    __vt__Q23efx11TOneEmitter:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx11TOneEmitterFPQ23efx3Arg
    .4byte forceKill__Q23efx11TOneEmitterFv
    .4byte fade__Q23efx11TOneEmitterFv
    .4byte 0
    .4byte 0
    .4byte "@4@__dt__Q23efx11TOneEmitterFv"
    .4byte execute__18JPAEmitterCallBackFP14JPABaseEmitter
    .4byte "@4@executeAfter__Q23efx11TOneEmitterFP14JPABaseEmitter"
    .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
    .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
    .4byte executeAfter__Q23efx11TOneEmitterFP14JPABaseEmitter
    .4byte startDemoDrawOff__Q23efx11TOneEmitterFv
    .4byte endDemoDrawOn__Q23efx11TOneEmitterFv
    .4byte __dt__Q23efx11TOneEmitterFv
*/

struct JPAEmitterCallBack {
	virtual void create(Arg*);               // _08
	virtual void forceKill();                // _0C
	virtual void fade();                     // _10
	virtual void _14() = 0;                  // _14
	virtual void _18() = 0;                  // _18
	virtual void _1C() = 0;                  // _1C
	virtual void execute(JPABaseEmitter*);   // _20 (weak)
	virtual void _24() = 0;                  // _24
	virtual void draw(JPABaseEmitter*);      // _28 (weak)
	virtual void drawAfter(JPABaseEmitter*); // _2C (weak)
};

namespace efx {
struct TOneEmitter : public JPAEmitterCallBack {
	virtual void create(Arg*);                  // _08
	virtual void forceKill();                   // _0C
	virtual void fade();                        // _10
	virtual void _14() = 0;                     // _14
	virtual void _18() = 0;                     // _18
	virtual void executeAfter(JPABaseEmitter*); // _30 (weak)
	virtual void startDemoDrawOff();            // _34 (weak)
	virtual void endDemoDrawOn();               // _38 (weak)
	virtual ~TOneEmitter();                     // _3C (weak)

	void add(efx::Context*);
};
} // namespace efx

#endif
