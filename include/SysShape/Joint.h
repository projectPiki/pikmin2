#ifndef _SYSSHAPE_JOINT_H
#define _SYSSHAPE_JOINT_H

#include "CNode.h"
#include "Vector3.h"

struct J3DJoint;
struct Matrixf;

namespace SysShape {
struct Model;

/**
 * @size{0x3C}
 */
struct Joint : public CNode {
	Joint();

	virtual ~Joint(); // _08 (weak)

	Matrixf* getWorldMatrix();
	void init(u16, Model*, J3DJoint*);

	u32 getJntNo() const;

	J3DJoint* m_j3d;  // _18
	Vector3f _1C;     // _1C
	Vector3f _28;     // _28
	Model* m_model;   // _34
	u16 m_jointIndex; // _38
};

} // namespace SysShape

#endif
