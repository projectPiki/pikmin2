#ifndef _MODELEFFECT_H
#define _MODELEFFECT_H

#include "CNode.h"
#include "Graphics.h"
#include "JSystem/J3D/J3DModel.h"
#include "Matrixf.h"
#include "Sys/Cylinder.h"
#include "SysShape/Model.h"

struct ModelEffectCreateArg {
	virtual void _00() = 0; // _00

	// VTBL _00
};

struct ModelEffectData : public CNode {
	virtual ~ModelEffectData();                       // _00
	virtual void loadResources()                 = 0; // _08
	virtual int getID()                          = 0; // _0C
	virtual void onCreate(ModelEffectCreateArg*) = 0; // _10

	void entry();
	void create(ModelEffectCreateArg*);
	void allocModelData(int);

	int m_sizeInBytes;         // _18
	J3DModelData* m_modelData; // _1C
};

struct ModelEffectDataRoot : public ModelEffectData {
	virtual ~ModelEffectDataRoot();               // _00
	virtual void loadResources();                 // _08
	virtual int getID();                          // _0C
	virtual void onCreate(ModelEffectCreateArg*); // _10
};

struct ModelEffect {
	virtual void constructor();                  // _00
	virtual void doAnimation();                  // _04
	virtual void doEntry();                      // _08
	virtual void doSetView(int);                 // _0C
	virtual void doViewCalc();                   // _10
	virtual void changeMaterial();               // _14
	virtual void _18() = 0;                      // _18
	virtual bool useCylinderLOD();               // _1C
	virtual void getLODCylinder(Sys::Cylinder&); // _20
	virtual void doSimulation(float);            // _24
	virtual void doDirectDraw(Graphics&);        // _28

	// _00 VTBL

	SysShape::Model* m_model; // _04
	Matrixf _08;              // _08
	u8 _38;                   // _38
	u8 _39;                   // _39
};

#endif
