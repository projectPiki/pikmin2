#ifndef _SYSSHAPE_MODEL_H
#define _SYSSHAPE_MODEL_H

namespace Sys {
struct Sphere;
} // namespace Sys

namespace SysShape {
struct Joint;

struct Model {
	Model(struct J3DModelData*, unsigned long, unsigned long);

	void clearAnimatorAll();
	void enableMaterialAnim(int);
	void enableMaterialAnim(J3DModelData*, int);
	void getJoint(char*);
	void getJointIndex(char*);
	void getMatrix(int);
	void getRoughBoundingRadius();
	void getRoughCenter();
	void hide();
	void hidePackets();
	void initJoints();
	void initJointsRec(int, SysShape::Joint*);
	void isModel();
	void isMtxImmediate();
	void isVisible();
	void isVisible(Sys::Sphere&);
	void jointVisible(bool, int);
	void jointVisible(bool, SysShape::Joint*);
	void setCurrentViewNo(unsigned long);
	void setViewCalcModeImm();
	void setViewCalcModeInd();
	void show();
	void showPackets();
	void viewCalc();
};
} // namespace SysShape

#endif