#ifndef _PARTICLEMGR_H
#define _PARTICLEMGR_H

#include "CNode.h"
#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JPA/JPAEmitter.h"
#include "JSystem/JPA/JPAResource.h"
#include "JSystem/ResTIMG.h"
#include "ModelEffect.h"
#include "ObjectMgr.h"
#include "Sys/Sphere.h"
#include "Vector3.h"
#include "Viewport.h"

struct ModelEffect;

namespace Game {
struct GameLightMgr;
} // namespace Game

struct ParticleMgr : public CNode {
	ParticleMgr();

	virtual ~ParticleMgr();                     // _08
	virtual void update();                      // _10
	virtual void doAnimation();                 // _14
	virtual void doEntry();                     // _18
	virtual void doSetView(int viewportNumber); // _1C
	virtual void doViewCalc();                  // _20
	virtual void draw(Viewport*, u8);           // _24

	static void globalInstance();
	static void deleteInstance();
	static void Instance_TPkEffectMgr();
	static void deleteInstance_TPkEffectMgr();

	void createHeap(u32);
	void createMgr(char*, u32, u32, u32);
	void beginEntryModelEffect();
	void endEntryModelEffect();
	void start();
	void reset();
	void killAll();
	void setXfb(const ResTIMG*);
	JPABaseEmitter* create(u16, Vector3f&, u8);
	JPABaseEmitter* createDemo(u16, Vector3f&, u8, u8);
	void setGlobalColor(JPABaseEmitter*);
	void forceKill(JPABaseEmitter*);
	void fade(JPABaseEmitter*);
	void setDemoResourceManager(JPAResourceManager*);
	void clearDemoResourceManager();
	void setViewport(Graphics&);
	bool cullByResFlg(Vector3f&, u16);
	bool cullByResFlg(JPABaseEmitter*);
	void entryModelEffect(ModelEffectData*);
	ModelEffect* createModelEffect(ModelEffectCreateArg*);

	// Unused/inlined:
	void destroyHeap();
	void cull(Sys::Sphere&);           // Might return bool?
	void cullCylinder(Sys::Cylinder&); // Might return bool?
	void draw2d();
	void getModelEffectData(u64);
	void testCreateModelEffect(int, int, Vector3f&);

	Game::GameLightMgr* m_lightMgr;              // _18
	NodeObjectMgr<ModelEffect> m_modelEffectMgr; // _1C
	u8 _58[8];                                   // _58
	ModelEffectDataRoot m_modelEffectDataRoot;   // _60
	u8 _78[8];                                   // _78
	int m_referencedViewportCount;               // _80
	Viewport* m_viewports[4];                    // _84
	int m_activeViewportCount;                   // _94
	JPAEmitterManager* m_emitterManager;         // _98
	JPAResourceManager* m_resourceManager;       // _9C
	JKRHeap* _A0;                                // _A0
	JKRHeap* _A4;                                // _A4
	int _A8;                                     // _A8
};

extern ParticleMgr* particleMgr;

#endif
