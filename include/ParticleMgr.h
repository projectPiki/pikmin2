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
	virtual ~ParticleMgr();                      // _08
	virtual void update();                       // _10
	virtual void doAnimation();                  // _14
	virtual void doEntry();                      // _18
	virtual void doSetView(int);                 // _1C
	virtual void doViewCalc();                   // _20
	virtual void draw(Viewport*, unsigned char); // _24

	static void globalInstance();
	static void deleteInstance();
	static void Instance_TPkEffectMgr();
	static void deleteInstance_TPkEffectMgr();

	ParticleMgr();
	void createHeap(unsigned long);
	void createMgr(char*, unsigned long, unsigned long, unsigned long);
	void beginEntryModelEffect();
	void endEntryModelEffect();
	void start();
	void reset();
	void killAll();
	void setXfb(const ResTIMG*);
	JPABaseEmitter* create(unsigned short, Vector3<float>&, unsigned char);
	JPABaseEmitter* createDemo(unsigned short, Vector3<float>&, unsigned char, unsigned char);
	void setGlobalColor(JPABaseEmitter*);
	void forceKill(JPABaseEmitter*);
	void fade(JPABaseEmitter*);
	void setDemoResourceManager(JPAResourceManager*);
	void clearDemoResourceManager();
	void setViewport(Graphics&);
	bool cullByResFlg(Vector3<float>&, unsigned short);
	bool cullByResFlg(JPABaseEmitter*);
	void entryModelEffect(ModelEffectData*);
	void createModelEffect(ModelEffectCreateArg*);

	// Unused/inlined:
	void destroyHeap();
	void cull(Sys::Sphere&);           // Might return bool?
	void cullCylinder(Sys::Cylinder&); // Might return bool?
	void draw2d();
	void getModelEffectData(unsigned long long);
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
