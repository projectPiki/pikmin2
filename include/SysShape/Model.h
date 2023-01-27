#ifndef _SYSSHAPE_MODEL_H
#define _SYSSHAPE_MODEL_H

#include "Matrixf.h"
#include "types.h"
#include "SysShape/MtxObject.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DSys.h"

namespace Sys {
struct Sphere;
} // namespace Sys

namespace SysShape {
struct Joint;

/**
 * @size{0x14}
 */
struct Model : public MtxObject {
	Model(J3DModelData*, u32, u32);

	virtual Matrixf* getMatrix(int);         // _08
	virtual bool isModel();                  // _0C (weak)
	virtual bool isVisible(Sys::Sphere&);    // _10
	virtual bool isVisible();                // _14 (weak)
	virtual void hide();                     // _18
	virtual void show();                     // _1C
	virtual void hidePackets();              // _20
	virtual void showPackets();              // _24
	virtual void jointVisible(bool, int);    // _28
	virtual void jointVisible(bool, Joint*); // _2C (weak)

	void clearAnimatorAll();
	void enableMaterialAnim(int);
	f32 getRoughBoundingRadius();
	Vector3f& getRoughCenter();
	void initJoints();
	void initJointsRec(int, Joint*);
	s16 getJointIndex(char*);
	Joint* getJoint(char*);
	void setViewCalcModeImm();
	void setViewCalcModeInd();
	void viewCalc();
	void setCurrentViewNo(u32);
	void isMtxImmediate();

	static void enableMaterialAnim(J3DModelData*, int);

	// Unused/inlined:
	void entry(Sys::Sphere&);
	void update();
	bool needViewCalc();

	inline void updateModel()
	{
		Matrixf mtx;
		PSMTXIdentity(mtx.mMatrix.mtxView);
		PSMTXCopy(mtx.mMatrix.mtxView, j3dSys.mViewMtx);
		J3DModel* j3dModel = mJ3dModel;
		j3dModel->calc();
		j3dModel->calcMaterial();
		j3dModel->makeDL();
		j3dModel->lock();
	}

	inline void loopTimer()
	{
		int count = mJointCount;
		while (count > 0) {
			count--;
		}
	}

	inline J3DModel* getJ3DModel() { return mJ3dModel; }

	// VTBL _00
	bool mIsAnimating;   // _04, assumed name
	u8 _05;              // _05
	bool mIsVisible;     // _06
	J3DModel* mJ3dModel; // _08
	int mJointCount;     // _0C
	Joint* mJoints;      // _10

	static u8 viewCalcMode;
};

} // namespace SysShape

#endif
