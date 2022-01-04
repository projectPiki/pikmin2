#ifndef _TPARTICLE2DMGR_H
#define _TPARTICLE2DMGR_H

#include "types.h"
#include "CNode.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "Vector2.h"

struct JPABaseEmitter;
struct JPAEmitterManager;
struct JPAResourceManager;
struct JKRSolidHeap;

struct TParticle2dMgr : public CNode, JKRDisposer {
	TParticle2dMgr();
	virtual ~TParticle2dMgr();

	static void globalInstance();
	static TParticle2dMgr* Instance();
	static void deleteInstance();

	void clearSceneEmitterAndResourceManager();
	void clearSceneResourceManager();
	JPABaseEmitter* create(ushort, Vector2f&, u8, u8);
	void createHeap(ulong);
	void createMgr(char*, ulong, ulong, ulong);
	void draw(u8, ushort);
	void fade(JPABaseEmitter*);
	void kill(JPABaseEmitter*);
	void killAll();
	void killGroup(u8);
	void setSceneEmitterAndResourceManager(JPAEmitterManager*,
	                                       JPAResourceManager*);
	void setSceneResourceManager(JPAResourceManager*);
	void update();

	JPAEmitterManager* _30;                // _30
	JPAResourceManager* m_resourceManager; // _34
	JKRSolidHeap* m_solidHeap;             // _38
	JPAEmitterManager* _3C;                // _3C
	u8 _40[4];                             // _40

	static TParticle2dMgr* _instance;
};

extern TParticle2dMgr* particle2dMgr;

#endif
