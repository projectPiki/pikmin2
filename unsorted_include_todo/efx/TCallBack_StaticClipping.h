#ifndef _EFX_TCALLBACK_STATICCLIPPING_H
#define _EFX_TCALLBACK_STATICCLIPPING_H

struct JPAEmitterCallBack {
	virtual void _00() = 0;                  // _00
	virtual void execute(JPABaseEmitter*);   // _04
	virtual void _08() = 0;                  // _08
	virtual void draw(JPABaseEmitter*);      // _0C
	virtual void drawAfter(JPABaseEmitter*); // _10

	// _00 VTBL
};

namespace efx {
struct TCallBack_StaticClipping : public JPAEmitterCallBack {
	virtual ~TCallBack_StaticClipping();        // _00
	virtual void execute(JPABaseEmitter*);      // _04
	virtual void executeAfter(JPABaseEmitter*); // _08
	virtual void draw(JPABaseEmitter*);         // _0C
	virtual void drawAfter(JPABaseEmitter*);    // _10

	// _00 VTBL
};
} // namespace efx

#endif
