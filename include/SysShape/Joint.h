#ifndef _SYSSHAPE_JOINT_H
#define _SYSSHAPE_JOINT_H

#include "CNode.h"
#include "Vector3.h"

struct J3DJoint;
struct Matrixf;

namespace SysShape {
struct Model;
struct JointCallback;

/**
 * @size{0x3C}
 */
struct Joint : public CNode {
	Joint();

	virtual ~Joint() { } // _08 (weak)

	Matrixf* getWorldMatrix();
	void init(u16 index, Model* model, J3DJoint* j3dJoint);

	u32 getJntNo() const;

	// unused/inlined:
	void setCallback(SysShape::JointCallback* cb);

	J3DJoint* mJ3d;  // _18
	Vector3f mMin;   // _1C
	Vector3f mMax;   // _28
	Model* mModel;   // _34
	u16 mJointIndex; // _38
};

struct JointCallback {
	// unused/inlined:
	~JointCallback();
	void calc();
	void init(Vec const&, f32 const (&)[3][4]);
};

} // namespace SysShape

#endif
