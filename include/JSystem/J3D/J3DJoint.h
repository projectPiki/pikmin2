#ifndef _JSYSTEM_J3D_J3DJOINT_H
#define _JSYSTEM_J3D_J3DJOINT_H

#include "types.h"
#include "Quat.h"
#include "Vector3.h"

struct J3DMaterial;
struct J3DMtxCalc;
struct J3DMtxCalcAnmBase;

struct J3DJoint {
	J3DJoint();

	void appendChild(J3DJoint*);
	void entryIn();
	J3DJoint* getChild();
	J3DJoint* getYounger();
	void recursiveCalc();

	u32 _00;                      // _00
	u32 m_function;               // _04
	u32 _08;                      // _08
	J3DJoint* m_child;            // _0C
	J3DJoint* m_parent;           // _10
	s16 m_jointIdx;               // _14
	s8 _16;                       // _16
	s8 m_ignoreParentScaling;     // _17
	Vector3f m_scale;             // _18
	s16 m_eulerRot[3];            // _24
	Quat m_zRotation;             // _2C
	Quat m_yRotation;             // _3C
	u32 _4C;                      // _4C
	u32 _50;                      // _50
	J3DMtxCalcAnmBase* m_mtxCalc; // _54
	J3DMaterial* m_material;      // _58

	static J3DMtxCalc* sCurrentMtxCalc;
};

#endif
