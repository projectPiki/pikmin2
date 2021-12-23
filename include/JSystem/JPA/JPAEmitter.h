#ifndef _JSYSTEM_JPA_JPAEMITTER_H
#define _JSYSTEM_JPA_JPAEMITTER_H

#include "types.h"

struct JPABaseEmitter {
};

struct JPAEmitterCallback {
	virtual ~JPAEmitterCallback() = 0;          // _00
	virtual void execute(JPABaseEmitter*);      // _04
	virtual void executeAfter(JPABaseEmitter*); // _08
	virtual void draw(JPABaseEmitter*);         // _0C
	virtual void drawAfter(JPABaseEmitter*);    // _10
};

#endif
