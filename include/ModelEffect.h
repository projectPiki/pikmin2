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
	virtual ~ModelEffectData() { }                            // _08 (weak)
	virtual void loadResources()                         = 0; // _10
	virtual u64 getID()                                  = 0; // _14
	virtual ModelEffect* onCreate(ModelEffectCreateArg*) = 0; // _18

	void entry();
	void create(ModelEffectCreateArg*);
	void allocModelData(int);

	// _00		= VTBL
	// _00-_18	= CNode
	int m_sizeInBytes;          // _18
	J3DModelData** m_modelData; // _1C
};

struct ModelEffectDataRoot : public ModelEffectData {
	virtual ~ModelEffectDataRoot();                       // _08 (weak)
	virtual void loadResources();                         // _10 (weak)
	virtual u64 getID();                                  // _14 (weak)
	virtual ModelEffect* onCreate(ModelEffectCreateArg*); // _18 (weak)
};

struct ModelEffect {

	inline ModelEffect()
	{
		_39      = 1;
		_38      = 1;
		m_culled = 0;
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
	SysShape::Model* m_model; // _04
	Matrixf m_mtx;            // _08
	u8 _38;                   // _38
	u8 _39;                   // _39
	bool m_culled;            // _3A
};

#endif
