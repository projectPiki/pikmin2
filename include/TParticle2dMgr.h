#ifndef _TPARTICLE2DMGR_H
#define _TPARTICLE2DMGR_H

#include "types.h"
#include "CNode.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "Vector2.h"

struct JPABaseEmitter;
struct JPAEmitterManager;
struct JPAResourceManager;
struct JKRSolidHeap;

struct TParticle2dMgr : public CNode, JKRDisposer {
	TParticle2dMgr();

	virtual ~TParticle2dMgr(); // _08 (weak)

	static void globalInstance();
	static TParticle2dMgr* Instance();
	static void deleteInstance();

	void clearSceneEmitterAndResourceManager();
	void clearSceneResourceManager();
	JPABaseEmitter* create(u16, Vector2f&, u8, u8);
	void createHeap(u32);
	void createMgr(char*, u32, u32, u32);
	void draw(u8, u16);
	void fade(JPABaseEmitter* emitter);
	void kill(JPABaseEmitter* emitter);
	void killAll();
	void killGroup(u8);
	void setSceneEmitterAndResourceManager(JPAEmitterManager* emitterManager, JPAResourceManager* resourceManager);
	void setSceneResourceManager(JPAResourceManager* resourceManager);
	void update();

	// unused/inlined:
	void exitMgr();
	void destroyHeap();
	void setXfb(const struct ResTIMG*);
	void showInfo(s32, s32, s32, s32);

	// _00		= VTBL
	// _00-_18	= CNode
	// _18-_30	= JKRDisposer
	JPAEmitterManager* mActiveEmitter;    // _30
	JPAResourceManager* mResourceManager; // _34
	JKRSolidHeap* mSolidHeap;             // _38
	JPAEmitterManager* mEmitterBackup;    // _3C
	u8 _40[4];                            // _40

	static TParticle2dMgr* _instance;
};

extern TParticle2dMgr* particle2dMgr;

#endif
