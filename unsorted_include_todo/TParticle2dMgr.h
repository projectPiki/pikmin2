#ifndef _TPARTICLE2DMGR_H
#define _TPARTICLE2DMGR_H

/*
    __vt__14TParticle2dMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__14TParticle2dMgrFv
    .4byte getChildCount__5CNodeFv
    .4byte 0
    .4byte 0
    .4byte "@24@__dt__14TParticle2dMgrFv"
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

struct TParticle2dMgr : public CNode {
	virtual ~TParticle2dMgr(); // _08 (weak)
	virtual void _10() = 0;    // _10
	virtual void _14() = 0;    // _14

	void globalInstance();
	void Instance();
	void deleteInstance();
	TParticle2dMgr();
	void createHeap(unsigned long);
	void createMgr(char*, unsigned long, unsigned long, unsigned long);
	void setSceneEmitterAndResourceManager(JPAEmitterManager*, JPAResourceManager*);
	void clearSceneEmitterAndResourceManager();
	void setSceneResourceManager(JPAResourceManager*);
	void clearSceneResourceManager();
	void update();
	void draw(unsigned char, unsigned short);
	void create(unsigned short, Vector2<float>&, unsigned char, unsigned char);
	void kill(JPABaseEmitter*);
	void fade(JPABaseEmitter*);
	void killAll();
	void killGroup(unsigned char);
};

#endif
