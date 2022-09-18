#ifndef _JSYSTEM_J3D_J3DJOINTFACTORY_H
#define _JSYSTEM_J3D_J3DJOINTFACTORY_H

#include "JSystem/J3D/J3DFileBlock.h"
#include "JSystem/J3D/J3DJoint.h"
#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/JGeometry.h"
#include "types.h"

struct J3DJointInitData;

struct J3DJointFactory {
	J3DJointFactory(const J3DJointBlock& block);
	J3DJoint* create(int jointIndex);

	J3DJointInitData* m_initData; // _00
	/** Indices into m_initData, indexed by joint number. */
	u16* m_indexMap; // _04
};

struct J3DJointInitData {
	u16 _00;                          // _00
	s8 m_ignoreParentScaling;         // _02
	J3DTransformInfo m_transformInfo; // _04
	f32 _24;                          // _24
	JGeometry::TVec3f _28;            // _28
	JGeometry::TVec3f _34;            // _34
};

#endif
