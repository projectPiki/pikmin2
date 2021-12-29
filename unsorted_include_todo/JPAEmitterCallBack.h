#ifndef _JPAEMITTERCALLBACK_H
#define _JPAEMITTERCALLBACK_H

/*
    __vt__18JPAEmitterCallBack:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte execute__18JPAEmitterCallBackFP14JPABaseEmitter
    .4byte executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter
    .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
    .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
*/

struct JPAEmitterCallBack {
	virtual void _00() = 0;                     // _00
	virtual void execute(JPABaseEmitter*);      // _04
	virtual void executeAfter(JPABaseEmitter*); // _08
	virtual void draw(JPABaseEmitter*);         // _0C
	virtual void drawAfter(JPABaseEmitter*);    // _10

	// _00 VTBL
};

#endif
