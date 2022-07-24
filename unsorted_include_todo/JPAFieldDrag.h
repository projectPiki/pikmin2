#ifndef _JPAFIELDDRAG_H
#define _JPAFIELDDRAG_H

/*
    __vt__12JPAFieldDrag:
    .4byte 0
    .4byte 0
    .4byte __dt__12JPAFieldDragFv
    .4byte prepare__12JPAFieldBaseFP18JPAEmitterWorkDataP13JPAFieldBlock
    .4byte calc__12JPAFieldDragFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle
*/

struct JPAFieldBase {
	virtual ~JPAFieldBase();                                   // _08 (inline)
	virtual void prepare(JPAEmitterWorkData*, JPAFieldBlock*); // _0C (inline)
};

struct JPAFieldDrag : public JPAFieldBase {
	virtual ~JPAFieldDrag();                                                  // _08 (inline)
	virtual void calc(JPAEmitterWorkData*, JPAFieldBlock*, JPABaseParticle*); // _10
};

#endif
