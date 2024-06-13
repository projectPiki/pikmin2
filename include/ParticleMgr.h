#ifndef _PARTICLEMGR_H
#define _PARTICLEMGR_H

#include "CNode.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JParticle/JPAEmitter.h"
#include "JSystem/JParticle/JPAResource.h"
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
	void Instance_TPkEffectMgr();
	void deleteInstance_TPkEffectMgr();

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
	bool cull(Sys::Sphere&);           // Might return bool?
	void cullCylinder(Sys::Cylinder&); // Might return bool?
	void draw2d();
	ModelEffectData* getModelEffectData(u64);
	void testCreateModelEffect(int, int, Vector3f&);

	inline JPAEmitterManager* getManager() const { return mEmitterManager; }
	inline Game::GameLightMgr* getLightMgr() const { return mLightMgr; }

	Game::GameLightMgr* mLightMgr;              // _18
	NodeObjectMgr<ModelEffect> mModelEffectMgr; // _1C
	u8 _58[8];                                  // _58
	ModelEffectDataRoot mModelEffectDataRoot;   // _60
	int mReferencedViewportCount;               // _80
	Viewport* mViewports[4];                    // _84
	int mActiveViewportCount;                   // _94
	JPAEmitterManager* mEmitterManager;         // _98
	JPAResourceManager* mResourceManager;       // _9C
	JKRHeap* mHeap;                             // _A0
	JKRHeap* mModelEffectHeap;                  // _A4
	int mUnusedVal;                             // _A8

	static bool disableCulling;
	static f32 mClipRadiusS; // = 10.0f;
	static f32 mClipRadiusM; // = 30.0f;
	static f32 mClipRadiusL; // = 100.0f;
};

extern ParticleMgr* particleMgr;

#endif
