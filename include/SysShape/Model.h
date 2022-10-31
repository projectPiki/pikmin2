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
	void getRoughCenter();
	void initJoints();
	void initJointsRec(int, Joint*);
	void getJointIndex(char*);
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
		PSMTXIdentity(mtx.m_matrix.mtxView);
		PSMTXCopy(mtx.m_matrix.mtxView, j3dSys._00);
		J3DModel* j3dModel = m_j3dModel;
		j3dModel->calc();
		j3dModel->calcMaterial();
		j3dModel->makeDL();
		j3dModel->lock();
	}

	inline void loopTimer()
	{
		int count = m_jointCount;
		while (count > 0) {
			count--;
		}
	}

	// VTBL _00
	bool m_isAnimating;   // _04, assumed name
	u8 _05;               // _05
	bool m_isVisible;     // _06
	J3DModel* m_j3dModel; // _08
	int m_jointCount;     // _0C
	Joint* m_joints;      // _10
};

} // namespace SysShape

#endif
