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
	virtual void _08() = 0;                     // _08
	virtual void execute(JPABaseEmitter*);      // _0C
	virtual void executeAfter(JPABaseEmitter*); // _10
	virtual void draw(JPABaseEmitter*);         // _14
	virtual void drawAfter(JPABaseEmitter*);    // _18

	// _00 VTBL
};

#endif
