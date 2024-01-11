#ifndef _MODELEFFECT_H
#define _MODELEFFECT_H

#include "CNode.h"
#include "Graphics.h"
#include "JSystem/J3D/J3DModel.h"
#include "Matrixf.h"
#include "Sys/Cylinder.h"
#include "SysShape/Model.h"

struct ModelEffect;

struct ModelEffectCreateArg {
	virtual u64 getID() = 0; // _08
};

struct ModelEffectData : public CNode {
	virtual ~ModelEffectData() { }                                // _08 (weak)
	virtual void loadResources()                             = 0; // _10
	virtual u64 getID()                                      = 0; // _14
	virtual ModelEffect* onCreate(ModelEffectCreateArg* arg) = 0; // _18

	void entry();
	ModelEffect* create(ModelEffectCreateArg*);
	void allocModelData(int count);

	// _00		= VTBL
	// _00-_18	= CNode
	int mCount;                // _18
	J3DModelData** mModelData; // _1C
};

struct ModelEffectDataRoot : public ModelEffectData {
	virtual ~ModelEffectDataRoot() { }                                           // _08 (weak)
	virtual void loadResources() { }                                             // _10 (weak)
	virtual u64 getID() { return 'ROOT'; }                                       // _14 (weak)
	virtual ModelEffect* onCreate(ModelEffectCreateArg* arg) { return nullptr; } // _18 (weak)
};

struct ModelEffect {

	inline ModelEffect()
	{
		mViewportVisibleFlag[1] = 1;
		mViewportVisibleFlag[0] = 1;
		mCulled                 = 0;
	}

	virtual void constructor() { }               // _08 (weak)
	virtual void doAnimation();                  // _0C
	virtual void doEntry();                      // _10
	virtual void doSetView(int viewportNumber);  // _14
	virtual void doViewCalc();                   // _18
	virtual void changeMaterial();               // _1C (weak)
	virtual void getLODSphere(Sys::Sphere&) = 0; // _20
	virtual bool useCylinderLOD();               // _24 (weak)
	virtual void getLODCylinder(Sys::Cylinder&); // _28 (weak)
	virtual void doSimulation(f32) { }           // _2C (weak)
	virtual void doDirectDraw(Graphics& gfx) { } // _30 (weak)

	// _00 VTBL
	SysShape::Model* mModel;    // _04
	Matrixf mMtx;               // _08
	u8 mViewportVisibleFlag[2]; // _38
	bool mCulled;               // _3A
};

#endif
