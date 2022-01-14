#ifndef _SYSSHAPE_MODEL_H
#define _SYSSHAPE_MODEL_H

#include "types.h"
#include "SysShape/MtxObject.h"
#include "JSystem/J3D/J3DModel.h"

struct Matrixf;
namespace Sys {
struct Sphere;
} // namespace Sys

namespace SysShape {
struct Joint;

struct Model : MtxObject {
	Model(J3DModelData*, u32, u32);

	virtual Matrixf* getMatrix();                      // _00
	virtual bool isModel();                            // _04
	virtual bool isVisible(Sys::Sphere&);              // _08
	virtual bool isVisible();                          // _0C
	virtual void hide();                               // _10
	virtual void show();                               // _14
	virtual void hidePackets();                        // _18
	virtual void showPackets();                        // _1C
	virtual void jointVisible(bool, int);              // _20
	virtual void jointVisible(bool, SysShape::Joint*); // _24

	void clearAnimatorAll();
	void enableMaterialAnim(int);
	static void enableMaterialAnim(J3DModelData*, int);
	SysShape::Joint* getJoint(char*);
	void getJointIndex(char*);
	void getMatrix(int);
	void getRoughBoundingRadius();
	void getRoughCenter();
	void initJoints();
	void initJointsRec(int, SysShape::Joint*);
	void isMtxImmediate();
	void setCurrentViewNo(u32);
	void setViewCalcModeImm();
	void setViewCalcModeInd();
	void viewCalc();

	// Unused/inlined:
	void entry(Sys::Sphere&);
	void update();
	bool needViewCalc();

	// VTBL _00
	u8 _04;               // _04
	u8 _05;               // _05
	bool m_isVisible;     // _06
	J3DModel* m_j3dModel; // _08
	int m_jointCount;     // _0C
	Joint* m_joints;      // _10
};
} // namespace SysShape

#endif
