#ifndef _EFX_TCALLBACK_STATICCLIPPING_H
#define _EFX_TCALLBACK_STATICCLIPPING_H

/*
    __vt__Q23efx24TCallBack_StaticClipping:
    .4byte 0
    .4byte 0
    .4byte __dt__Q23efx24TCallBack_StaticClippingFv
    .4byte execute__18JPAEmitterCallBackFP14JPABaseEmitter
    .4byte executeAfter__Q23efx24TCallBack_StaticClippingFP14JPABaseEmitter
    .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
    .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
*/

struct JPAEmitterCallBack {
	virtual ~JPAEmitterCallBack();              // _08 (inline)
	virtual void execute(JPABaseEmitter*);      // _0C (inline)
	virtual void executeAfter(JPABaseEmitter*); // _10
	virtual void draw(JPABaseEmitter*);         // _14 (inline)
	virtual void drawAfter(JPABaseEmitter*);    // _18 (inline)
};

namespace efx {
struct TCallBack_StaticClipping : public JPAEmitterCallBack {
	virtual ~TCallBack_StaticClipping();        // _08 (inline)
	virtual void executeAfter(JPABaseEmitter*); // _10
};
} // namespace efx

#endif
