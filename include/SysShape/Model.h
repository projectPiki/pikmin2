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
struct BaseAnimator;

/**
 * @size{0x14}
 */
struct Model : public MtxObject {
	Model(J3DModelData* data, u32 flags, u32 viewNum);

	virtual Matrixf* getMatrix(int jointIndex);                    // _08
	virtual bool isModel() { return true; }                        // _0C (weak)
	virtual bool isVisible(Sys::Sphere& sphere);                   // _10
	virtual bool isVisible() { return mIsVisible; }                // _14 (weak)
	virtual void hide();                                           // _18
	virtual void show();                                           // _1C
	virtual void hidePackets();                                    // _20
	virtual void showPackets();                                    // _24
	virtual void jointVisible(bool newVisibility, int jointIndex); // _28
	virtual void jointVisible(bool, Joint*);                       // _2C (weak)

	void clearAnimatorAll();
	void enableMaterialAnim(int);
	f32 getRoughBoundingRadius();
	Vector3f getRoughCenter();
	void initJoints();
	void initJointsRec(int, Joint*);
	u16 getJointIndex(char*);
	Joint* getJoint(char*);
	static void setViewCalcModeImm();
	static void setViewCalcModeInd();
	void viewCalc();
	void setCurrentViewNo(u32 viewportNumber);
	bool isMtxImmediate();

	static void enableMaterialAnim(J3DModelData* data, int p2);

	// Unused/inlined:
	void entry(Sys::Sphere&);
	void update();
	bool needViewCalc();
	void setAnimatorAll(BaseAnimator&);

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

	static int cullCount;

	static u8 viewCalcMode;
};

} // namespace SysShape

#endif
