#ifndef _JPAEMITTERCALLBACK_H
#define _JPAEMITTERCALLBACK_H

struct JPAEmitterCallBack {
	virtual void _00() = 0;                     // _00
	virtual void execute(JPABaseEmitter*);      // _04
	virtual void executeAfter(JPABaseEmitter*); // _08
	virtual void draw(JPABaseEmitter*);         // _0C
	virtual void drawAfter(JPABaseEmitter*);    // _10

	// _00 VTBL
};

#endif
