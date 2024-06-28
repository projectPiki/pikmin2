#include "Sys/OBB.h"
#include "Sys/OBBTree.h"
#include "Sys/geometry.h"
#include "Sys/RayIntersectInfo.h"
#include "Game/CurrTriInfo.h"
#include "types.h"

namespace Sys {

bool OBBTree::debugTraceMove = false;

/**
 * @note Address: 0x8041CEBC
 * @note Size: 0x170
 */
OBBTree* OBBTree::clone(Matrixf& mat)
{
	OBBTree* copy = new OBBTree;

	copy->mTriangleTable = mTriangleTable;

	copy->mVertexTable = new VertexTable;
	copy->mVertexTable->alloc(mVertexTable->getNum());

	for (int i = 0; i < mVertexTable->getNum(); i++) {
		Vector3f vert = *mVertexTable->getVertex(i);
		copy->mVertexTable->addOne(vert);
	}

	copy->mVertexTable->transform(mat);

	copy->construct(copy->mVertexTable, copy->mTriangleTable, 8, 8);

	return copy;
}

/**
 * @note Address: N/A
 * @note Size: 0x108
 */
OBB::OBB()
{
	mName  = "OBB";
	mHalfA = mHalfB = nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0xC8
 */
f32 OBB::calcPointDist(Vector3f&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xC0
 */
bool OBB::intersect(Vector3f&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
bool OBB::intersect(Sys::Sphere&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x2AC
 */
bool OBB::intersect(Sys::VertexTable&, Sys::Triangle&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void TriDivider::drawTriList(Graphics&, Sys::TriIndexList*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void OBB::draw(Graphics&, Sys::VertexTable&, Sys::TriangleTable&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8041D02C
 * @note Size: 0x704
 */
void OBB::create2(Sys::VertexTable& vertTable, Sys::TriangleTable& triTable, Matrix3f& mat1, Matrix3f& mat2, Vector3f& position)
{
	mPosition = position;

	Vector3f col1;
	col1.x = mat2.mMatrix[0][0];
	col1.y = mat2.mMatrix[1][0];
	col1.z = mat2.mMatrix[2][0];
	// Vector3f col2 = Vector3f(mat2.m_matrix[0][1], mat2.m_matrix[1][1], mat2.m_matrix[2][1]);

	Vector3f col2;
	col2.x = mat2.mMatrix[0][1];
	col2.y = mat2.mMatrix[1][1];
	col2.z = mat2.mMatrix[2][1];

	// Vector3f col3 = Vector3f(mat2.m_matrix[0][2], mat2.m_matrix[1][2], mat2.m_matrix[2][2]);
	Vector3f col3;
	col3.x = mat2.mMatrix[0][2];
	col3.y = mat2.mMatrix[1][2];
	col3.z = mat2.mMatrix[2][2];

	f32 min;
	f32 max;
	mTriIndexList.getMinMax(vertTable, triTable, col1, mPosition, min, max);
	mMinXYZ[0] = min;
	mMaxXYZ[0] = max;

	mTriIndexList.getMinMax(vertTable, triTable, col2, mPosition, min, max);
	mMinXYZ[1] = min;
	mMaxXYZ[1] = max;

	mTriIndexList.getMinMax(vertTable, triTable, col3, mPosition, min, max);
	mMinXYZ[2] = min;
	mMaxXYZ[2] = max;

	mAxes[0] = col1;
	mAxes[1] = col2;
	mAxes[2] = col3;

	// get coordinates of "max" corner and "min" corner of box
	Vector3f maxVec = mPosition + mAxes[0] * mMaxXYZ[0] + mAxes[1] * mMaxXYZ[1] + mAxes[2] * mMaxXYZ[2];
	Vector3f minVec = mPosition + mAxes[0] * mMinXYZ[0] + mAxes[1] * mMinXYZ[1] + mAxes[2] * mMinXYZ[2];

	// set bounding sphere center to midpoint between diagonal corners
	mSphere.mPosition = (maxVec + minVec) * 0.5f;

	Vector3f maxSep = maxVec - mSphere.mPosition;
	f32 maxDist     = lenVec(maxSep);

	Vector3f minSep = minVec - mSphere.mPosition;

	f32 maxRadius = maxDist;
	if (maxDist < lenVec(minSep)) {
		maxRadius = lenVec(minSep);
	}

	mSphere.mRadius = maxRadius;

	// for (int i = 0; i < 3; i++) {
	//     m_sidePlanes[i].a = m_axes[i].x;
	//     m_sidePlanes[i].b = m_axes[i].y;
	//     m_sidePlanes[i].c = m_axes[i].z;
	//     m_sidePlanes[i].d = m_sidePlanes[i].a * (m_position.x + (m_axes[i].x * m_maxXYZ[i])) + m_sidePlanes[i].b * (m_position.y +
	//     (m_axes[i].y * m_maxXYZ[i])) + m_sidePlanes[i].c * (m_position.z + (m_axes[i].z * m_maxXYZ[i]));
	// }

	Vector3f tempVec;
	setMaxPlane(&tempVec, 0);
	setMaxPlane(&tempVec, 1);
	setMaxPlane(&tempVec, 2);

	setMinPlane(0);
	setMinPlane(1);
	setMinPlane(2);
	/*
	.loc_0x0:
	  stwu      r1, -0x150(r1)
	  mflr      r0
	  stw       r0, 0x154(r1)
	  stfd      f31, 0x140(r1)
	  psq_st    f31,0x148(r1),0,0
	  stfd      f30, 0x130(r1)
	  psq_st    f30,0x138(r1),0,0
	  stfd      f29, 0x120(r1)
	  psq_st    f29,0x128(r1),0,0
	  stfd      f28, 0x110(r1)
	  psq_st    f28,0x118(r1),0,0
	  stfd      f27, 0x100(r1)
	  psq_st    f27,0x108(r1),0,0
	  stfd      f26, 0xF0(r1)
	  psq_st    f26,0xF8(r1),0,0
	  stfd      f25, 0xE0(r1)
	  psq_st    f25,0xE8(r1),0,0
	  stfd      f24, 0xD0(r1)
	  psq_st    f24,0xD8(r1),0,0
	  stfd      f23, 0xC0(r1)
	  psq_st    f23,0xC8(r1),0,0
	  stw       r31, 0xBC(r1)
	  stw       r30, 0xB8(r1)
	  stw       r29, 0xB4(r1)
	  lfs       f0, 0x0(r8)
	  mr        r31, r3
	  mr        r29, r4
	  mr        r30, r5
	  stfs      f0, 0x78(r3)
	  addi      r3, r31, 0xD8
	  addi      r6, r1, 0xA0
	  addi      r9, r1, 0x8
	  lfs       f0, 0x4(r8)
	  stfs      f0, 0x7C(r31)
	  lfs       f0, 0x8(r8)
	  addi      r8, r1, 0xC
	  stfs      f0, 0x80(r31)
	  lfs       f0, 0x0(r7)
	  stfs      f0, 0xA0(r1)
	  lfs       f0, 0xC(r7)
	  stfs      f0, 0xA4(r1)
	  lfs       f0, 0x18(r7)
	  stfs      f0, 0xA8(r1)
	  lfs       f0, 0x4(r7)
	  stfs      f0, 0x94(r1)
	  lfs       f0, 0x10(r7)
	  stfs      f0, 0x98(r1)
	  lfs       f0, 0x1C(r7)
	  stfs      f0, 0x9C(r1)
	  lfs       f0, 0x8(r7)
	  stfs      f0, 0x88(r1)
	  lfs       f0, 0x14(r7)
	  stfs      f0, 0x8C(r1)
	  lfs       f0, 0x20(r7)
	  addi      r7, r31, 0x78
	  stfs      f0, 0x90(r1)
	  bl        -0x3B78
	  lfs       f0, 0xC(r1)
	  mr        r4, r29
	  mr        r5, r30
	  addi      r3, r31, 0xD8
	  stfs      f0, 0xA8(r31)
	  addi      r6, r1, 0x94
	  addi      r7, r31, 0x78
	  addi      r8, r1, 0xC
	  lfs       f0, 0x8(r1)
	  addi      r9, r1, 0x8
	  stfs      f0, 0xB4(r31)
	  bl        -0x3BA8
	  lfs       f0, 0xC(r1)
	  mr        r4, r29
	  mr        r5, r30
	  addi      r3, r31, 0xD8
	  stfs      f0, 0xAC(r31)
	  addi      r6, r1, 0x88
	  addi      r7, r31, 0x78
	  addi      r8, r1, 0xC
	  lfs       f0, 0x8(r1)
	  addi      r9, r1, 0x8
	  stfs      f0, 0xB8(r31)
	  bl        -0x3BD8
	  lfs       f0, 0xC(r1)
	  lfs       f2, 0x206C(r2)
	  stfs      f0, 0xB0(r31)
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0xBC(r31)
	  lfs       f0, 0xA0(r1)
	  stfs      f0, 0x84(r31)
	  lfs       f0, 0xA4(r1)
	  stfs      f0, 0x88(r31)
	  lfs       f0, 0xA8(r1)
	  stfs      f0, 0x8C(r31)
	  lfs       f0, 0x94(r1)
	  stfs      f0, 0x90(r31)
	  lfs       f0, 0x98(r1)
	  stfs      f0, 0x94(r31)
	  lfs       f0, 0x9C(r1)
	  stfs      f0, 0x98(r31)
	  lfs       f0, 0x88(r1)
	  stfs      f0, 0x9C(r31)
	  lfs       f0, 0x8C(r1)
	  stfs      f0, 0xA0(r31)
	  lfs       f0, 0x90(r1)
	  stfs      f0, 0xA4(r31)
	  lfs       f5, 0xB4(r31)
	  lfs       f1, 0x84(r31)
	  lfs       f6, 0xA8(r31)
	  lfs       f0, 0x88(r31)
	  fmuls     f3, f1, f5
	  lfs       f12, 0x8C(r31)
	  fmuls     f1, f1, f6
	  lfs       f4, 0x78(r31)
	  fmuls     f10, f0, f5
	  lfs       f23, 0x7C(r31)
	  fmuls     f0, f0, f6
	  lfs       f9, 0xB8(r31)
	  lfs       f11, 0x90(r31)
	  fadds     f8, f4, f3
	  lfs       f29, 0xAC(r31)
	  fadds     f4, f4, f1
	  lfs       f13, 0x94(r31)
	  fmuls     f7, f11, f9
	  lfs       f25, 0x98(r31)
	  fmuls     f3, f11, f29
	  fmuls     f27, f12, f5
	  lfs       f24, 0x80(r31)
	  fmuls     f1, f12, f6
	  lfs       f11, 0xBC(r31)
	  fmuls     f30, f13, f9
	  lfs       f28, 0x9C(r31)
	  lfs       f12, 0xB0(r31)
	  fadds     f31, f23, f10
	  lfs       f26, 0xA0(r31)
	  fadds     f6, f23, f0
	  lfs       f0, 0xA4(r31)
	  fmuls     f5, f13, f29
	  fmuls     f13, f28, f11
	  fadds     f10, f8, f7
	  fadds     f8, f4, f3
	  fmuls     f7, f28, f12
	  fmuls     f28, f25, f9
	  fadds     f27, f24, f27
	  fadds     f4, f24, f1
	  fmuls     f3, f25, f29
	  fmuls     f29, f26, f11
	  fadds     f9, f31, f30
	  fadds     f6, f6, f5
	  fmuls     f5, f26, f12
	  fadds     f10, f10, f13
	  fadds     f31, f8, f7
	  fmuls     f8, f0, f11
	  fadds     f7, f27, f28
	  fadds     f1, f10, f31
	  fadds     f4, f4, f3
	  fmuls     f3, f0, f12
	  fmuls     f0, f1, f2
	  fadds     f9, f9, f29
	  fadds     f30, f6, f5
	  fadds     f5, f7, f8
	  stfs      f0, 0x100(r31)
	  fadds     f29, f4, f3
	  fadds     f1, f9, f30
	  fadds     f0, f5, f29
	  fmuls     f1, f1, f2
	  fmuls     f0, f0, f2
	  stfs      f1, 0x104(r31)
	  stfs      f0, 0x108(r31)
	  lfs       f0, 0x104(r31)
	  lfs       f1, 0x100(r31)
	  fsubs     f2, f9, f0
	  lfs       f0, 0x108(r31)
	  fsubs     f1, f10, f1
	  fsubs     f3, f5, f0
	  fmuls     f0, f2, f2
	  fmadds    f0, f1, f1, f0
	  fmadds    f1, f3, f3, f0
	  bl        -0xBAE8
	  lfs       f0, 0x104(r31)
	  fmr       f27, f1
	  lfs       f3, 0x100(r31)
	  fsubs     f0, f30, f0
	  lfs       f2, 0x108(r31)
	  fsubs     f1, f31, f3
	  fsubs     f2, f29, f2
	  fmuls     f0, f0, f0
	  fmr       f24, f27
	  fmadds    f0, f1, f1, f0
	  fmadds    f23, f2, f2, f0
	  fmr       f1, f23
	  bl        -0xBB1C
	  fcmpo     cr0, f27, f1
	  bge-      .loc_0x30C
	  fmr       f1, f23
	  bl        -0xBB2C
	  fmr       f24, f1

	.loc_0x30C:
	  stfs      f24, 0x10C(r31)
	  lfs       f2, 0x84(r31)
	  lfs       f0, 0x88(r31)
	  stfs      f2, 0x7C(r1)
	  lfs       f3, 0xB4(r31)
	  lfs       f1, 0x8C(r31)
	  stfs      f0, 0x80(r1)
	  fmuls     f0, f0, f3
	  lwz       r3, 0x7C(r1)
	  fmuls     f2, f2, f3
	  stfs      f1, 0x84(r1)
	  fmuls     f1, f1, f3
	  lwz       r0, 0x80(r1)
	  stw       r3, 0x70(r1)
	  lfs       f4, 0x78(r31)
	  stw       r0, 0x74(r1)
	  lfs       f3, 0x7C(r31)
	  fadds     f4, f4, f2
	  lfs       f2, 0x80(r31)
	  lwz       r0, 0x84(r1)
	  fadds     f3, f3, f0
	  lfs       f0, 0x70(r1)
	  fadds     f5, f2, f1
	  stw       r0, 0x78(r1)
	  lfs       f1, 0x74(r1)
	  stfs      f0, 0x18(r31)
	  lfs       f0, 0x78(r1)
	  stfs      f1, 0x1C(r31)
	  stfs      f0, 0x20(r31)
	  lfs       f0, 0x1C(r31)
	  lfs       f1, 0x18(r31)
	  fmuls     f0, f0, f3
	  lfs       f2, 0x20(r31)
	  fmadds    f0, f1, f4, f0
	  fmadds    f0, f2, f5, f0
	  stfs      f0, 0x24(r31)
	  lfs       f3, 0x90(r31)
	  lfs       f1, 0x94(r31)
	  lfs       f5, 0xB8(r31)
	  lfs       f4, 0x98(r31)
	  stfs      f3, 0x7C(r1)
	  fmuls     f0, f1, f5
	  lfs       f2, 0x7C(r31)
	  fmuls     f3, f3, f5
	  stfs      f1, 0x80(r1)
	  fmuls     f1, f4, f5
	  lwz       r3, 0x7C(r1)
	  stfs      f4, 0x84(r1)
	  fadds     f4, f2, f0
	  lwz       r0, 0x80(r1)
	  stw       r3, 0x64(r1)
	  lfs       f0, 0x78(r31)
	  stw       r0, 0x68(r1)
	  lfs       f2, 0x80(r31)
	  fadds     f3, f0, f3
	  lwz       r0, 0x84(r1)
	  lfs       f0, 0x64(r1)
	  fadds     f5, f2, f1
	  stw       r0, 0x6C(r1)
	  lfs       f1, 0x68(r1)
	  stfs      f0, 0x28(r31)
	  lfs       f0, 0x6C(r1)
	  stfs      f1, 0x2C(r31)
	  stfs      f0, 0x30(r31)
	  lfs       f0, 0x2C(r31)
	  lfs       f1, 0x28(r31)
	  fmuls     f0, f0, f4
	  lfs       f2, 0x30(r31)
	  fmadds    f0, f1, f3, f0
	  fmadds    f0, f2, f5, f0
	  stfs      f0, 0x34(r31)
	  lfs       f1, 0x9C(r31)
	  lfs       f0, 0xA0(r31)
	  lfs       f3, 0xBC(r31)
	  lfs       f5, 0xA4(r31)
	  stfs      f1, 0x7C(r1)
	  fmuls     f1, f1, f3
	  lfs       f4, 0x78(r31)
	  fmuls     f2, f0, f3
	  stfs      f0, 0x80(r1)
	  fmuls     f0, f5, f3
	  lfs       f3, 0x7C(r31)
	  stfs      f5, 0x84(r1)
	  fadds     f4, f4, f1
	  lfs       f1, 0x80(r31)
	  fadds     f2, f3, f2
	  lwz       r4, 0x7C(r1)
	  lwz       r3, 0x80(r1)
	  fadds     f3, f1, f0
	  lwz       r0, 0x84(r1)
	  stw       r4, 0x58(r1)
	  stw       r3, 0x5C(r1)
	  stw       r0, 0x60(r1)
	  lfs       f0, 0x58(r1)
	  lfs       f1, 0x5C(r1)
	  stfs      f0, 0x38(r31)
	  lfs       f0, 0x60(r1)
	  stfs      f1, 0x3C(r31)
	  stfs      f0, 0x40(r31)
	  lfs       f0, 0x3C(r31)
	  lfs       f1, 0x38(r31)
	  fmuls     f0, f0, f2
	  lfs       f2, 0x40(r31)
	  fmadds    f0, f1, f4, f0
	  fmadds    f0, f2, f3, f0
	  stfs      f0, 0x44(r31)
	  lfs       f7, 0x84(r31)
	  lfs       f6, 0x88(r31)
	  fneg      f2, f7
	  lfs       f5, 0x8C(r31)
	  lfs       f8, 0xA8(r31)
	  fneg      f1, f6
	  fneg      f0, f5
	  lfs       f4, 0x78(r31)
	  stfs      f2, 0x40(r1)
	  fmuls     f3, f7, f8
	  lfs       f2, 0x7C(r31)
	  fmuls     f9, f6, f8
	  stfs      f1, 0x44(r1)
	  fmuls     f1, f5, f8
	  lwz       r3, 0x40(r1)
	  stfs      f0, 0x48(r1)
	  fadds     f2, f2, f9
	  lwz       r0, 0x44(r1)
	  fadds     f3, f4, f3
	  stw       r3, 0x4C(r1)
	  lfs       f0, 0x80(r31)
	  stw       r0, 0x50(r1)
	  lwz       r0, 0x48(r1)
	  fadds     f4, f0, f1
	  lfs       f0, 0x4C(r1)
	  stw       r0, 0x54(r1)
	  lfs       f1, 0x50(r1)
	  stfs      f0, 0x48(r31)
	  lfs       f0, 0x54(r1)
	  stfs      f1, 0x4C(r31)
	  stfs      f0, 0x50(r31)
	  lfs       f0, 0x4C(r31)
	  lfs       f1, 0x48(r31)
	  fmuls     f0, f0, f2
	  lfs       f2, 0x50(r31)
	  stfs      f7, 0x7C(r1)
	  fmadds    f0, f1, f3, f0
	  stfs      f6, 0x80(r1)
	  stfs      f5, 0x84(r1)
	  fmadds    f0, f2, f4, f0
	  stfs      f0, 0x54(r31)
	  lfs       f6, 0x90(r31)
	  lfs       f5, 0x94(r31)
	  lfs       f4, 0x98(r31)
	  fneg      f2, f6
	  fneg      f1, f5
	  lfs       f7, 0xAC(r31)
	  fneg      f0, f4
	  lfs       f3, 0x78(r31)
	  stfs      f2, 0x28(r1)
	  lfs       f2, 0x7C(r31)
	  stfs      f1, 0x2C(r1)
	  fmuls     f8, f5, f7
	  lwz       r3, 0x28(r1)
	  fmuls     f1, f6, f7
	  stfs      f0, 0x30(r1)
	  fmuls     f7, f4, f7
	  lwz       r0, 0x2C(r1)
	  stw       r3, 0x34(r1)
	  fadds     f2, f2, f8
	  lfs       f0, 0x80(r31)
	  fadds     f3, f3, f1
	  stw       r0, 0x38(r1)
	  lwz       r0, 0x30(r1)
	  fadds     f7, f0, f7
	  lfs       f0, 0x34(r1)
	  stw       r0, 0x3C(r1)
	  lfs       f1, 0x38(r1)
	  stfs      f0, 0x58(r31)
	  lfs       f0, 0x3C(r1)
	  stfs      f1, 0x5C(r31)
	  stfs      f0, 0x60(r31)
	  lfs       f0, 0x5C(r31)
	  lfs       f1, 0x58(r31)
	  fmuls     f0, f0, f2
	  lfs       f2, 0x60(r31)
	  stfs      f6, 0x7C(r1)
	  fmadds    f0, f1, f3, f0
	  stfs      f5, 0x80(r1)
	  stfs      f4, 0x84(r1)
	  fmadds    f0, f2, f7, f0
	  stfs      f0, 0x64(r31)
	  lfs       f6, 0x9C(r31)
	  lfs       f5, 0xA0(r31)
	  fneg      f2, f6
	  lfs       f4, 0xA4(r31)
	  lfs       f7, 0xB0(r31)
	  fneg      f1, f5
	  fneg      f0, f4
	  lfs       f3, 0x80(r31)
	  stfs      f2, 0x10(r1)
	  fmuls     f9, f4, f7
	  lfs       f2, 0x7C(r31)
	  fmuls     f8, f5, f7
	  stfs      f1, 0x14(r1)
	  fmuls     f1, f6, f7
	  lwz       r3, 0x10(r1)
	  stfs      f0, 0x18(r1)
	  fadds     f2, f2, f8
	  lwz       r0, 0x14(r1)
	  fadds     f7, f3, f9
	  stw       r3, 0x1C(r1)
	  lfs       f0, 0x78(r31)
	  stw       r0, 0x20(r1)
	  lwz       r0, 0x18(r1)
	  fadds     f3, f0, f1
	  lfs       f0, 0x1C(r1)
	  stw       r0, 0x24(r1)
	  lfs       f1, 0x20(r1)
	  stfs      f0, 0x68(r31)
	  lfs       f0, 0x24(r1)
	  stfs      f1, 0x6C(r31)
	  stfs      f0, 0x70(r31)
	  lfs       f0, 0x6C(r31)
	  lfs       f1, 0x68(r31)
	  fmuls     f0, f0, f2
	  lfs       f2, 0x70(r31)
	  stfs      f6, 0x7C(r1)
	  fmadds    f0, f1, f3, f0
	  stfs      f5, 0x80(r1)
	  stfs      f4, 0x84(r1)
	  fmadds    f0, f2, f7, f0
	  stfs      f0, 0x74(r31)
	  psq_l     f31,0x148(r1),0,0
	  lfd       f31, 0x140(r1)
	  psq_l     f30,0x138(r1),0,0
	  lfd       f30, 0x130(r1)
	  psq_l     f29,0x128(r1),0,0
	  lfd       f29, 0x120(r1)
	  psq_l     f28,0x118(r1),0,0
	  lfd       f28, 0x110(r1)
	  psq_l     f27,0x108(r1),0,0
	  lfd       f27, 0x100(r1)
	  psq_l     f26,0xF8(r1),0,0
	  lfd       f26, 0xF0(r1)
	  psq_l     f25,0xE8(r1),0,0
	  lfd       f25, 0xE0(r1)
	  psq_l     f24,0xD8(r1),0,0
	  lfd       f24, 0xD0(r1)
	  psq_l     f23,0xC8(r1),0,0
	  lfd       f23, 0xC0(r1)
	  lwz       r31, 0xBC(r1)
	  lwz       r30, 0xB8(r1)
	  lwz       r0, 0x154(r1)
	  lwz       r29, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x150
	  blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x84
 */
void OBB::constructOBB2(Sys::VertexTable& vertTable, Sys::TriangleTable& triTable)
{
	Vector3f pos;
	Matrix3f covar;
	Matrix3f P;
	Matrix3f D;

	TriIndexList* triList = &mTriIndexList;
	triList->makeCovarianceMatrix(vertTable, triTable, covar, pos);
	P.makeIdentity();
	covar.calcEigenMatrix(D, P);
	create2(vertTable, triTable, D, P, pos);
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8041D730
 * @note Size: 0x2D8
 */
void OBB::autoDivide(Sys::VertexTable& vertTable, Sys::TriangleTable& triTable, int p1, int p2)
{
	if ((mTriIndexList.getNum() > p1) && (p2 > 0) && (divide(vertTable, triTable))) {
		if (mHalfA) {
			mHalfA->autoDivide(vertTable, triTable, p1, p2 - 1);
		}
		if (mHalfB) {
			mHalfB->autoDivide(vertTable, triTable, p1, p2 - 1);
		}

		// below matches but needs to be recursive to generate ArrayContainer::getNum

		// FIRST HALF
		// OBB* half_1 = mHalfA;
		// if ((half_1) && (half_1->mTriIndexList.mCount > p1) && ((p2 - 1) > 0) && (half_1->divide(vertTable, triTable))) {
		//     // FIRST HALF, FIRST HALF
		//     OBB* quarter_1 = half_1->mHalfA;
		//     if ((quarter_1) && (quarter_1->mTriIndexList.getNum() > p1) && ((p2 - 2) > 0)) {
		//         quarter_1->mTriIndexList.getNum();
		//         if (quarter_1->divide(vertTable, triTable)) {
		//             // FIRST HALF, FIRST HALF, FIRST HALF
		//             OBB* eighth_1 = quarter_1->mHalfA;
		//             if (eighth_1) {
		//                 eighth_1->autoDivide(vertTable, triTable, p1, p2 - 3);
		//             }
		//             // FIRST HALF, FIRST HALF, SECOND HALF
		//             OBB* eighth_2 = quarter_1->mHalfB;
		//             if (eighth_2) {
		//                 eighth_2->autoDivide(vertTable, triTable, p1, p2 - 3);
		//             }
		//         }
		//     }
		//     // FIRST HALF, SECOND HALF
		//     OBB* quarter_2 = half_1->mHalfB;
		//     if ((quarter_2) && (quarter_2->mTriIndexList.getNum() > p1) && ((p2 - 2) > 0)) {
		//         quarter_2->mTriIndexList.getNum();
		//         if (quarter_2->divide(vertTable, triTable)) {
		//             // FIRST HALF, SECOND HALF, FIRST HALF
		//             OBB* eighth_1 = quarter_2->mHalfA;
		//             if (eighth_1) {
		//                 eighth_1->autoDivide(vertTable, triTable, p1, p2 - 3);
		//             }
		//             // FIRST HALF, SECOND HALF, SECOND HALF
		//             OBB* eighth_2 = quarter_2->mHalfB;
		//             if (eighth_2) {
		//                 eighth_2->autoDivide(vertTable, triTable, p1, p2 - 3);
		//             }
		//         }
		//     }
		// }

		// // SECOND HALF
		// OBB* half_2 = mHalfB;
		// if ((half_2) && (half_2->mTriIndexList.mCount > p1) && ((p2 - 1) > 0) && (half_2->divide(vertTable, triTable))) {
		//     // SECOND HALF, FIRST HALF
		//     OBB* quarter_1 = half_2->mHalfA;
		//     if ((quarter_1) && (quarter_1->mTriIndexList.getNum() > p1) && ((p2 - 2) > 0)) {
		//         quarter_1->mTriIndexList.getNum();
		//         if (quarter_1->divide(vertTable, triTable)) {
		//             // SECOND HALF, FIRST HALF, FIRST HALF
		//             OBB* eighth_1 = quarter_1->mHalfA;
		//             if (eighth_1) {
		//                 eighth_1->autoDivide(vertTable, triTable, p1, p2 - 3);
		//             }
		//             // SECOND HALF, FIRST HALF, SECOND HALF
		//             OBB* eighth_2 = quarter_1->mHalfB;
		//             if (eighth_2) {
		//                 eighth_2->autoDivide(vertTable, triTable, p1, p2 - 3);
		//             }
		//         }
		//     }
		//     // SECOND HALF, SECOND HALF
		//     OBB* quarter_2 = half_2->mHalfB;
		//     if ((quarter_2) && (quarter_2->mTriIndexList.getNum() > p1) && ((p2 - 2) > 0)) {
		//         quarter_2->mTriIndexList.getNum();
		//         if (quarter_2->divide(vertTable, triTable)) {
		//             // SECOND HALF, SECOND HALF, FIRST HALF
		//             OBB* eighth_1 = quarter_2->mHalfA;
		//             if (eighth_1) {
		//                 eighth_1->autoDivide(vertTable, triTable, p1, p2 - 3);
		//             }
		//             // SECOND HALF, SECOND HALF, SECOND HALF
		//             OBB* eighth_2 = quarter_2->mHalfB;
		//             if (eighth_2) {
		//                 eighth_2->autoDivide(vertTable, triTable, p1, p2 - 3);
		//             }
		//         }
		//     }
		// }
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r30, r6
	mr       r27, r3
	mr       r28, r4
	mr       r29, r5
	mr       r31, r7
	lwz      r0, 0xf4(r3)
	cmpw     r0, r30
	ble      lbl_8041D9F4
	cmpwi    r31, 0
	ble      lbl_8041D9F4
	bl       divide__Q23Sys3OBBFRQ23Sys11VertexTableRQ23Sys13TriangleTable
	clrlwi.  r0, r3, 0x18
	beq      lbl_8041D9F4
	lwz      r26, 0xc0(r27)
	cmplwi   r26, 0
	beq      lbl_8041D8B4
	lwz      r0, 0xf4(r26)
	cmpw     r0, r30
	ble      lbl_8041D8B4
	addic.   r0, r31, -1
	ble      lbl_8041D8B4
	mr       r3, r26
	mr       r4, r28
	mr       r5, r29
	bl       divide__Q23Sys3OBBFRQ23Sys11VertexTableRQ23Sys13TriangleTable
	clrlwi.  r0, r3, 0x18
	beq      lbl_8041D8B4
	lwz      r25, 0xc0(r26)
	cmplwi   r25, 0
	beq      lbl_8041D830
	addi     r3, r25, 0xd8
	bl       "getNum__17ArrayContainer<i>Fv"
	cmpw     r3, r30
	ble      lbl_8041D830
	addic.   r0, r31, -2
	ble      lbl_8041D830
	addi     r3, r25, 0xd8
	bl       "getNum__17ArrayContainer<i>Fv"
	mr       r3, r25
	mr       r4, r28
	mr       r5, r29
	bl       divide__Q23Sys3OBBFRQ23Sys11VertexTableRQ23Sys13TriangleTable
	clrlwi.  r0, r3, 0x18
	beq      lbl_8041D830
	lwz      r3, 0xc0(r25)
	cmplwi   r3, 0
	beq      lbl_8041D810
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	addi     r7, r31, -3
	bl       autoDivide__Q23Sys3OBBFRQ23Sys11VertexTableRQ23Sys13TriangleTableii

lbl_8041D810:
	lwz      r3, 0xc4(r25)
	cmplwi   r3, 0
	beq      lbl_8041D830
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	addi     r7, r31, -3
	bl       autoDivide__Q23Sys3OBBFRQ23Sys11VertexTableRQ23Sys13TriangleTableii

lbl_8041D830:
	lwz      r25, 0xc4(r26)
	cmplwi   r25, 0
	beq      lbl_8041D8B4
	addi     r3, r25, 0xd8
	bl       "getNum__17ArrayContainer<i>Fv"
	cmpw     r3, r30
	ble      lbl_8041D8B4
	addic.   r0, r31, -2
	ble      lbl_8041D8B4
	addi     r3, r25, 0xd8
	bl       "getNum__17ArrayContainer<i>Fv"
	mr       r3, r25
	mr       r4, r28
	mr       r5, r29
	bl       divide__Q23Sys3OBBFRQ23Sys11VertexTableRQ23Sys13TriangleTable
	clrlwi.  r0, r3, 0x18
	beq      lbl_8041D8B4
	lwz      r3, 0xc0(r25)
	cmplwi   r3, 0
	beq      lbl_8041D894
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	addi     r7, r31, -3
	bl       autoDivide__Q23Sys3OBBFRQ23Sys11VertexTableRQ23Sys13TriangleTableii

lbl_8041D894:
	lwz      r3, 0xc4(r25)
	cmplwi   r3, 0
	beq      lbl_8041D8B4
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	addi     r7, r31, -3
	bl       autoDivide__Q23Sys3OBBFRQ23Sys11VertexTableRQ23Sys13TriangleTableii

lbl_8041D8B4:
	lwz      r25, 0xc4(r27)
	cmplwi   r25, 0
	beq      lbl_8041D9F4
	lwz      r0, 0xf4(r25)
	cmpw     r0, r30
	ble      lbl_8041D9F4
	addic.   r0, r31, -1
	ble      lbl_8041D9F4
	mr       r3, r25
	mr       r4, r28
	mr       r5, r29
	bl       divide__Q23Sys3OBBFRQ23Sys11VertexTableRQ23Sys13TriangleTable
	clrlwi.  r0, r3, 0x18
	beq      lbl_8041D9F4
	lwz      r26, 0xc0(r25)
	cmplwi   r26, 0
	beq      lbl_8041D970
	addi     r3, r26, 0xd8
	bl       "getNum__17ArrayContainer<i>Fv"
	cmpw     r3, r30
	ble      lbl_8041D970
	addic.   r0, r31, -2
	ble      lbl_8041D970
	addi     r3, r26, 0xd8
	bl       "getNum__17ArrayContainer<i>Fv"
	mr       r3, r26
	mr       r4, r28
	mr       r5, r29
	bl       divide__Q23Sys3OBBFRQ23Sys11VertexTableRQ23Sys13TriangleTable
	clrlwi.  r0, r3, 0x18
	beq      lbl_8041D970
	lwz      r3, 0xc0(r26)
	cmplwi   r3, 0
	beq      lbl_8041D950
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	addi     r7, r31, -3
	bl       autoDivide__Q23Sys3OBBFRQ23Sys11VertexTableRQ23Sys13TriangleTableii

lbl_8041D950:
	lwz      r3, 0xc4(r26)
	cmplwi   r3, 0
	beq      lbl_8041D970
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	addi     r7, r31, -3
	bl       autoDivide__Q23Sys3OBBFRQ23Sys11VertexTableRQ23Sys13TriangleTableii

lbl_8041D970:
	lwz      r25, 0xc4(r25)
	cmplwi   r25, 0
	beq      lbl_8041D9F4
	addi     r3, r25, 0xd8
	bl       "getNum__17ArrayContainer<i>Fv"
	cmpw     r3, r30
	ble      lbl_8041D9F4
	addic.   r0, r31, -2
	ble      lbl_8041D9F4
	addi     r3, r25, 0xd8
	bl       "getNum__17ArrayContainer<i>Fv"
	mr       r3, r25
	mr       r4, r28
	mr       r5, r29
	bl       divide__Q23Sys3OBBFRQ23Sys11VertexTableRQ23Sys13TriangleTable
	clrlwi.  r0, r3, 0x18
	beq      lbl_8041D9F4
	lwz      r3, 0xc0(r25)
	cmplwi   r3, 0
	beq      lbl_8041D9D4
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	addi     r7, r31, -3
	bl       autoDivide__Q23Sys3OBBFRQ23Sys11VertexTableRQ23Sys13TriangleTableii

lbl_8041D9D4:
	lwz      r3, 0xc4(r25)
	cmplwi   r3, 0
	beq      lbl_8041D9F4
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	addi     r7, r31, -3
	bl       autoDivide__Q23Sys3OBBFRQ23Sys11VertexTableRQ23Sys13TriangleTableii

lbl_8041D9F4:
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

// } // namespace Sys

// /**
//  * @note Address: 0x8041DA08
//  * @note Size: 0x8
//  */
// void ArrayContainer<int>::getNum()
// {
// 	/*
// 	lwz      r3, 0x1c(r3)
// 	blr
// 	*/
// }

// namespace Sys {

/**
 * @note Address: N/A
 * @note Size: 0x128
 */
void OBB::countDivResult(Sys::VertexTable& vertTable, Sys::TriangleTable& triTable, int count, int& numAbove, int& numBelow)
{
	mHalfA->mTriIndexList.alloc(numAbove);
	mHalfB->mTriIndexList.alloc(numBelow);

	for (int i = 0; i < mTriIndexList.getNum(); i++) {
		int currIndex     = mTriIndexList.mObjects[i];
		Triangle* currTri = triTable.getTriangle(currIndex);
		f32 triDist       = currTri->calcDist(mDivPlane, vertTable);
		if (triDist > 0.0f) {
			mHalfA->mTriIndexList.addOne(currIndex);
		} else if (triDist < 0.0f) {
			mHalfB->mTriIndexList.addOne(currIndex);
		} else {
			mHalfA->mTriIndexList.addOne(currIndex);
			mHalfB->mTriIndexList.addOne(currIndex);
		}
	}
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8041DA10
 * @note Size: 0x1C4
 */
void OBB::determineDivPlane(Sys::VertexTable& vertTable, Sys::TriangleTable& triTable)
{
	int min    = 100000000; // 100 million
	int axisID = 0;

	// loop through axes of box
	for (int i = 0; i < 3; i++) {
		Plane currPlane = Plane();
		int numAbove    = 0;
		int numBelow    = 0;

		Vector3f* currAxis  = &mAxes[i];
		currPlane.mNormal.x = currAxis->x;
		currPlane.mNormal.y = currAxis->y;
		currPlane.mNormal.z = currAxis->z;
		currPlane.mOffset   = currAxis->dot(mPosition);

		// loop through all triangles
		for (int j = 0; j < mTriIndexList.mCount; j++) {
			Triangle* currTri = &triTable.mObjects[mTriIndexList.mObjects[j]];
			f32 triDist       = currTri->calcDist(currPlane, vertTable);
			if (triDist > 0.0f) { // triangle above plane
				numAbove += 1;
			} else if (triDist < 0.0f) { // triangle below plane
				numBelow += 1;
			} else { // triangle 'in' plane
				numAbove += 1;
				numBelow += 1;
			}
		}

		int numCuts = numAbove + numBelow;
		if (numAbove == mTriIndexList.mCount) {
			numCuts += numAbove;
		}
		if (numBelow == mTriIndexList.mCount) {
			numCuts += numBelow;
		}
		if (numCuts < min) { // record axis with min number of cuts
			min    = numCuts;
			axisID = i;
		}
	}

	Vector3f correctAxis = mAxes[axisID];
	// divPlane has normal = axis with min cuts, and goes through center/position of box
	mDivPlane.mNormal = correctAxis;
	mDivPlane.mOffset = correctAxis.dot(mPosition);
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stmw     r21, 0x34(r1)
	mr       r21, r3
	lis      r3, 0x05F5E100@ha
	lfs      f31, lbl_805203C0@sda21(r2)
	mr       r22, r4
	lfs      f30, lbl_805203C4@sda21(r2)
	mr       r23, r5
	mr       r27, r21
	addi     r25, r3, 0x05F5E100@l
	li       r26, 0
	li       r24, 0

lbl_8041DA58:
	stfs     f31, 8(r1)
	li       r29, 0
	mr       r30, r29
	stfs     f30, 0xc(r1)
	mr       r31, r29
	mr       r28, r29
	stfs     f31, 0x10(r1)
	stfs     f31, 0x14(r1)
	lwz      r4, 0x84(r27)
	lwz      r3, 0x88(r27)
	lwz      r0, 0x8c(r27)
	stw      r4, 0x18(r1)
	stw      r3, 0x1c(r1)
	lfs      f4, 0x18(r1)
	stw      r0, 0x20(r1)
	lfs      f2, 0x1c(r1)
	lfs      f3, 0x20(r1)
	stfs     f4, 8(r1)
	stfs     f2, 0xc(r1)
	stfs     f3, 0x10(r1)
	lfs      f0, 0x7c(r21)
	lfs      f1, 0x78(r21)
	fmuls    f0, f2, f0
	lfs      f2, 0x80(r21)
	fmadds   f0, f4, f1, f0
	fmadds   f0, f3, f2, f0
	stfs     f0, 0x14(r1)
	b        lbl_8041DB14

lbl_8041DAC8:
	lwz      r3, 0xfc(r21)
	mr       r5, r22
	lwz      r6, 0x24(r23)
	addi     r4, r1, 8
	lwzx     r0, r3, r28
	mulli    r0, r0, 0x60
	add      r3, r6, r0
	bl       calcDist__Q23Sys8TriangleFR5PlaneRQ23Sys11VertexTable
	fcmpo    cr0, f1, f31
	ble      lbl_8041DAF8
	addi     r29, r29, 1
	b        lbl_8041DB0C

lbl_8041DAF8:
	bge      lbl_8041DB04
	addi     r30, r30, 1
	b        lbl_8041DB0C

lbl_8041DB04:
	addi     r29, r29, 1
	addi     r30, r30, 1

lbl_8041DB0C:
	addi     r28, r28, 4
	addi     r31, r31, 1

lbl_8041DB14:
	lwz      r0, 0xf4(r21)
	cmpw     r31, r0
	blt      lbl_8041DAC8
	cmpw     r29, r0
	add      r3, r29, r30
	bne      lbl_8041DB30
	add      r3, r3, r29

lbl_8041DB30:
	cmpw     r30, r0
	bne      lbl_8041DB3C
	add      r3, r3, r30

lbl_8041DB3C:
	cmpw     r3, r25
	bge      lbl_8041DB4C
	mr       r25, r3
	mr       r26, r24

lbl_8041DB4C:
	addi     r24, r24, 1
	addi     r27, r27, 0xc
	cmpwi    r24, 3
	blt      lbl_8041DA58
	mulli    r0, r26, 0xc
	lfs      f0, 0x7c(r21)
	lfs      f2, 0x80(r21)
	lfs      f1, 0x78(r21)
	add      r4, r21, r0
	lwz      r0, 0x88(r4)
	lwz      r3, 0x84(r4)
	stw      r0, 0x28(r1)
	lwz      r0, 0x8c(r4)
	lfs      f4, 0x28(r1)
	stw      r3, 0x24(r1)
	fmuls    f0, f4, f0
	lfs      f3, 0x24(r1)
	stw      r0, 0x2c(r1)
	fmadds   f0, f3, f1, f0
	stfs     f3, 0xc8(r21)
	lfs      f1, 0x2c(r1)
	stfs     f4, 0xcc(r21)
	fmadds   f0, f1, f2, f0
	stfs     f1, 0xd0(r21)
	stfs     f0, 0xd4(r21)
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	lmw      r21, 0x34(r1)
	lwz      r0, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/**
 * @note Address: 0x8041DBD4
 * @note Size: 0x480
 */
bool OBB::divide(Sys::VertexTable& vertTable, Sys::TriangleTable& triTable)
{
	determineDivPlane(vertTable, triTable);
	bool checkAbove = true;
	bool checkBelow = true;
	int numAbove    = 0;
	int numBelow    = 0;

	for (int i = 0; i < mTriIndexList.mCount; i++) {
		Triangle* currTri = &triTable.mObjects[mTriIndexList.mObjects[i]];
		f32 triDist       = currTri->calcDist(mDivPlane, vertTable);
		if (triDist > 0.0f) {
			numAbove += 1;
		} else if (triDist < 0.0f) {
			numBelow += 1;
		} else {
			numAbove += 1;
			numBelow += 1;
		}
	}

	if ((numAbove == 0) || (numBelow == 0)) { // no cuts
		return false;
	}
	if (numAbove == mTriIndexList.mCount) {
		checkAbove = false;
	}
	if (numBelow == mTriIndexList.mCount) {
		checkBelow = false;
	}
	if (!checkAbove && !checkBelow) {
		return false;
	}

	mHalfA = new OBB;
	add(mHalfA);

	mHalfB = new OBB;
	add(mHalfB);

	countDivResult(vertTable, triTable, 0, numAbove, numBelow);

	mHalfA->constructOBB2(vertTable, triTable);
	mHalfB->constructOBB2(vertTable, triTable);

	return true;
	/*
	stwu     r1, -0x140(r1)
	mflr     r0
	stw      r0, 0x144(r1)
	stfd     f31, 0x130(r1)
	psq_st   f31, 312(r1), 0, qr0
	stmw     r23, 0x10c(r1)
	mr       r26, r3
	mr       r27, r4
	mr       r28, r5
	bl determineDivPlane__Q23Sys3OBBFRQ23Sys11VertexTableRQ23Sys13TriangleTable
	lfs      f31, lbl_805203C0@sda21(r2)
	li       r31, 1
	li       r23, 1
	li       r30, 0
	li       r29, 0
	li       r25, 0
	li       r24, 0
	b        lbl_8041DC68

lbl_8041DC1C:
	lwz      r3, 0xfc(r26)
	mr       r5, r27
	lwz      r6, 0x24(r28)
	addi     r4, r26, 0xc8
	lwzx     r0, r3, r24
	mulli    r0, r0, 0x60
	add      r3, r6, r0
	bl       calcDist__Q23Sys8TriangleFR5PlaneRQ23Sys11VertexTable
	fcmpo    cr0, f1, f31
	ble      lbl_8041DC4C
	addi     r30, r30, 1
	b        lbl_8041DC60

lbl_8041DC4C:
	bge      lbl_8041DC58
	addi     r29, r29, 1
	b        lbl_8041DC60

lbl_8041DC58:
	addi     r30, r30, 1
	addi     r29, r29, 1

lbl_8041DC60:
	addi     r24, r24, 4
	addi     r25, r25, 1

lbl_8041DC68:
	lwz      r0, 0xf4(r26)
	cmpw     r25, r0
	blt      lbl_8041DC1C
	cmpwi    r30, 0
	beq      lbl_8041DC84
	cmpwi    r29, 0
	bne      lbl_8041DC8C

lbl_8041DC84:
	li       r3, 0
	b        lbl_8041E038

lbl_8041DC8C:
	cmpw     r30, r0
	bne      lbl_8041DC98
	li       r31, 0

lbl_8041DC98:
	cmpw     r29, r0
	bne      lbl_8041DCA4
	li       r23, 0

lbl_8041DCA4:
	clrlwi.  r0, r31, 0x18
	bne      lbl_8041DCBC
	clrlwi.  r0, r23, 0x18
	bne      lbl_8041DCBC
	li       r3, 0
	b        lbl_8041E038

lbl_8041DCBC:
	li       r3, 0x110
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8041DDA0
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q23Sys3OBB@ha
	lis      r4, __ct__5PlaneFv@ha
	addi     r0, r3, __vt__Q23Sys3OBB@l
	li       r5, 0
	stw      r0, 0(r31)
	addi     r3, r31, 0x18
	addi     r4, r4, __ct__5PlaneFv@l
	li       r6, 0x10
	li       r7, 6
	bl       __construct_array
	lis      r4, "__ct__10Vector3<f>Fv"@ha
	addi     r3, r31, 0x84
	addi     r4, r4, "__ct__10Vector3<f>Fv"@l
	li       r5, 0
	li       r6, 0xc
	li       r7, 3
	bl       __construct_array
	lfs      f1, lbl_805203C0@sda21(r2)
	addi     r25, r31, 0xd8
	lfs      f0, lbl_805203C4@sda21(r2)
	mr       r3, r25
	stfs     f1, 0xc8(r31)
	stfs     f0, 0xcc(r31)
	stfs     f1, 0xd0(r31)
	stfs     f1, 0xd4(r31)
	bl       __ct__5CNodeFv
	lis      r4, __vt__16GenericContainer@ha
	lis      r3, "__vt__12Container<i>"@ha
	addi     r0, r4, __vt__16GenericContainer@l
	lis      r5, "__vt__17ArrayContainer<i>"@ha
	stw      r0, 0(r25)
	addi     r0, r3, "__vt__12Container<i>"@l
	lis      r4, __vt__Q23Sys9IndexList@ha
	lis      r3, __vt__Q23Sys12TriIndexList@ha
	stw      r0, 0(r25)
	li       r7, 0
	addi     r6, r5, "__vt__17ArrayContainer<i>"@l
	li       r5, 1
	stb      r7, 0x18(r25)
	addi     r4, r4, __vt__Q23Sys9IndexList@l
	addi     r3, r3, __vt__Q23Sys12TriIndexList@l
	addi     r0, r2, lbl_805203C8@sda21
	stw      r6, 0(r25)
	stb      r5, 0x18(r25)
	stw      r7, 0x20(r25)
	stw      r7, 0x1c(r25)
	stw      r7, 0x24(r25)
	stw      r4, 0(r25)
	stw      r3, 0(r25)
	stw      r0, 0x14(r31)
	stw      r7, 0xc4(r31)
	stw      r7, 0xc0(r31)

lbl_8041DDA0:
	stw      r31, 0xc0(r26)
	mr       r3, r26
	lwz      r4, 0xc0(r26)
	bl       add__5CNodeFP5CNode
	li       r3, 0x110
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8041DE98
	mr       r25, r31
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q23Sys3OBB@ha
	lis      r4, __ct__5PlaneFv@ha
	addi     r0, r3, __vt__Q23Sys3OBB@l
	li       r5, 0
	stw      r0, 0(r25)
	addi     r3, r25, 0x18
	addi     r4, r4, __ct__5PlaneFv@l
	li       r6, 0x10
	li       r7, 6
	bl       __construct_array
	lis      r4, "__ct__10Vector3<f>Fv"@ha
	addi     r3, r25, 0x84
	addi     r4, r4, "__ct__10Vector3<f>Fv"@l
	li       r5, 0
	li       r6, 0xc
	li       r7, 3
	bl       __construct_array
	lfs      f1, lbl_805203C0@sda21(r2)
	addi     r24, r25, 0xd8
	lfs      f0, lbl_805203C4@sda21(r2)
	mr       r3, r24
	stfs     f1, 0xc8(r25)
	stfs     f0, 0xcc(r25)
	stfs     f1, 0xd0(r25)
	stfs     f1, 0xd4(r25)
	bl       __ct__5CNodeFv
	lis      r4, __vt__16GenericContainer@ha
	lis      r3, "__vt__12Container<i>"@ha
	addi     r0, r4, __vt__16GenericContainer@l
	lis      r5, "__vt__17ArrayContainer<i>"@ha
	stw      r0, 0(r24)
	addi     r0, r3, "__vt__12Container<i>"@l
	lis      r4, __vt__Q23Sys9IndexList@ha
	lis      r3, __vt__Q23Sys12TriIndexList@ha
	stw      r0, 0(r24)
	li       r7, 0
	addi     r6, r5, "__vt__17ArrayContainer<i>"@l
	li       r5, 1
	stb      r7, 0x18(r24)
	addi     r4, r4, __vt__Q23Sys9IndexList@l
	addi     r3, r3, __vt__Q23Sys12TriIndexList@l
	addi     r0, r2, lbl_805203C8@sda21
	stw      r6, 0(r24)
	stb      r5, 0x18(r24)
	stw      r7, 0x20(r24)
	stw      r7, 0x1c(r24)
	stw      r7, 0x24(r24)
	stw      r4, 0(r24)
	stw      r3, 0(r24)
	stw      r0, 0x14(r25)
	stw      r7, 0xc4(r25)
	stw      r7, 0xc0(r25)

lbl_8041DE98:
	stw      r31, 0xc4(r26)
	mr       r3, r26
	lwz      r4, 0xc4(r26)
	bl       add__5CNodeFP5CNode
	lwz      r3, 0xc0(r26)
	mr       r4, r30
	lwzu     r12, 0xd8(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc4(r26)
	mr       r4, r29
	lwzu     r12, 0xd8(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	li       r25, 0
	lfs      f31, lbl_805203C0@sda21(r2)
	mr       r24, r25
	b        lbl_8041DF88

lbl_8041DEE8:
	lwz      r3, 0xfc(r26)
	mr       r5, r27
	addi     r4, r26, 0xc8
	lwzx     r0, r3, r24
	stw      r0, 8(r1)
	mulli    r0, r0, 0x60
	lwz      r3, 0x24(r28)
	add      r3, r3, r0
	bl       calcDist__Q23Sys8TriangleFR5PlaneRQ23Sys11VertexTable
	fcmpo    cr0, f1, f31
	ble      lbl_8041DF30
	lwz      r3, 0xc0(r26)
	addi     r4, r1, 8
	lwzu     r12, 0xd8(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	b        lbl_8041DF80

lbl_8041DF30:
	bge      lbl_8041DF50
	lwz      r3, 0xc4(r26)
	addi     r4, r1, 8
	lwzu     r12, 0xd8(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	b        lbl_8041DF80

lbl_8041DF50:
	lwz      r3, 0xc0(r26)
	addi     r4, r1, 8
	lwzu     r12, 0xd8(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc4(r26)
	addi     r4, r1, 8
	lwzu     r12, 0xd8(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl

lbl_8041DF80:
	addi     r24, r24, 4
	addi     r25, r25, 1

lbl_8041DF88:
	lwz      r0, 0xf4(r26)
	cmpw     r25, r0
	blt      lbl_8041DEE8
	lwz      r24, 0xc0(r26)
	mr       r4, r27
	mr       r5, r28
	addi     r6, r1, 0x90
	addi     r3, r24, 0xd8
	addi     r7, r1, 0x18
	bl
"makeCovarianceMatrix__Q23Sys12TriIndexListFRQ23Sys11VertexTableRQ23Sys13TriangleTableR8Matrix3fR10Vector3<f>"
	addi     r3, r1, 0xb4
	bl       makeIdentity__8Matrix3fFv
	addi     r3, r1, 0x90
	addi     r4, r1, 0xd8
	addi     r5, r1, 0xb4
	bl       calcEigenMatrix__8Matrix3fFR8Matrix3fR8Matrix3f
	mr       r3, r24
	mr       r4, r27
	mr       r5, r28
	addi     r6, r1, 0xd8
	addi     r7, r1, 0xb4
	addi     r8, r1, 0x18
	bl
"create2__Q23Sys3OBBFRQ23Sys11VertexTableRQ23Sys13TriangleTableR8Matrix3fR8Matrix3fR10Vector3<f>"
	lwz      r24, 0xc4(r26)
	mr       r4, r27
	mr       r5, r28
	addi     r6, r1, 0x24
	addi     r3, r24, 0xd8
	addi     r7, r1, 0xc
	bl
"makeCovarianceMatrix__Q23Sys12TriIndexListFRQ23Sys11VertexTableRQ23Sys13TriangleTableR8Matrix3fR10Vector3<f>"
	addi     r3, r1, 0x48
	bl       makeIdentity__8Matrix3fFv
	addi     r3, r1, 0x24
	addi     r4, r1, 0x6c
	addi     r5, r1, 0x48
	bl       calcEigenMatrix__8Matrix3fFR8Matrix3fR8Matrix3f
	mr       r3, r24
	mr       r4, r27
	mr       r5, r28
	addi     r6, r1, 0x6c
	addi     r7, r1, 0x48
	addi     r8, r1, 0xc
	bl
"create2__Q23Sys3OBBFRQ23Sys11VertexTableRQ23Sys13TriangleTableR8Matrix3fR8Matrix3fR10Vector3<f>"
	li       r3, 1

lbl_8041E038:
	psq_l    f31, 312(r1), 0, qr0
	lfd      f31, 0x130(r1)
	lmw      r23, 0x10c(r1)
	lwz      r0, 0x144(r1)
	mtlr     r0
	addi     r1, r1, 0x140
	blr
	*/
}

/**
 * @note Address: 0x8041E054
 * @note Size: 0x144
 */
OBBTree::OBBTree()
{
	mVertexTable   = nullptr;
	mTriangleTable = nullptr;
}

/**
 * @note Address: 0x8041E198
 * @note Size: 0x2C
 */
void OBBTree::getCurrTri(Game::CurrTriInfo& info)
{
	info.mTable = mTriangleTable;
	mRoot.getCurrTri(info);
}

/**
 * @note Address: 0x8041E1C4
 * @note Size: 0x498
 */
void OBB::getCurrTri(Game::CurrTriInfo& info)
{
	if (isLeaf()) {
		getCurrTriTriList(info);
		return;
	}

	f32 dist;
	if (mDivPlane.mNormal.y == 0.0f) {
		dist = mDivPlane.calcDist(info.mPosition);
	} else {
		Vector3f vec = info.mPosition;
		vec.y        = (mDivPlane.mOffset - (mDivPlane.mNormal.x * info.mPosition.x) - (mDivPlane.mNormal.z * info.mPosition.z))
		      / mDivPlane.mNormal.y;
		dist = mDivPlane.calcDist(vec);
	}

	if (dist > 0.01f) {
		if (mHalfA) {
			mHalfA->getCurrTri(info);
		}
	} else if (dist < -0.01f) {
		if (mHalfB) {
			mHalfB->getCurrTri(info);
		}
	} else {
		mHalfA->getCurrTri(info);
		mHalfB->getCurrTri(info);
	}
}

/**
 * @note Address: 0x8041E6B4
 * @note Size: 0x118
 */
void OBB::getCurrTriTriList(Game::CurrTriInfo& info)
{
	for (int i = 0; i < mTriIndexList.getNum(); i++) {
		Triangle* currTri = info.mTable->getTriangle(mTriIndexList.mObjects[i]);

		Vector3f position = info.mPosition;

		// Check if the position is inside the XZ bounds of the triangle
		if (currTri->insideXZ(position)) {
			// If the current Y is less than the max Y, update the max Y and possibly the normal vector and triangle
			if (info.mMaxY > position.y) {
				info.mMaxY = position.y;

				if (info.mUpdateOnNewMaxY) {
					info.mNormalVec   = currTri->mTrianglePlane.mNormal;
					info.mTriangle    = currTri;
					info.mGetFullInfo = true;
				}
			}

			// If the current Y is greater than the min Y, update the min Y and possibly the normal vector and triangle
			if (info.mMinY < position.y) {
				info.mMinY = position.y;

				if (!info.mUpdateOnNewMaxY) {
					info.mNormalVec   = currTri->mTrianglePlane.mNormal;
					info.mTriangle    = currTri;
					info.mGetFullInfo = true;
				}
			}
		}
	}
}

/**
 * @note Address: 0x8041E7CC
 * @note Size: 0xB4
 */
void OBBTree::construct(Sys::VertexTable* vertTable, Sys::TriangleTable* triTable, int arg2, int arg3)
{
	mVertexTable   = vertTable;
	mTriangleTable = triTable;
	getOBB()->mTriIndexList.constructClone(*triTable);
	getOBB()->constructOBB2(*mVertexTable, *mTriangleTable);
	getOBB()->autoDivide(*mVertexTable, *mTriangleTable, arg2, arg3);
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stmw     r26, 0x88(r1)
	mr       r26, r3
	mr       r27, r6
	mr       r28, r7
	stw      r4, 0x18(r3)
	mr       r4, r5
	stw      r5, 0x1c(r3)
	addi     r3, r26, 0xf8
	bl       constructClone__Q23Sys12TriIndexListFRQ23Sys13TriangleTable
	lwz      r29, 0x1c(r26)
	addi     r31, r26, 0x20
	lwz      r30, 0x18(r26)
	addi     r3, r31, 0xd8
	mr       r5, r29
	addi     r6, r1, 0x14
	mr       r4, r30
	addi     r7, r1, 8
	bl
	"makeCovarianceMatrix__Q23Sys12TriIndexListFRQ23Sys11VertexTableRQ23Sys13TriangleTableR8Matrix3fR10Vector3<f>"
	addi     r3, r1, 0x38
	bl       makeIdentity__8Matrix3fFv
	addi     r3, r1, 0x14
	addi     r4, r1, 0x5c
	addi     r5, r1, 0x38
	bl       calcEigenMatrix__8Matrix3fFR8Matrix3fR8Matrix3f
	mr       r3, r31
	mr       r4, r30
	mr       r5, r29
	addi     r6, r1, 0x5c
	addi     r7, r1, 0x38
	addi     r8, r1, 8
	bl
	"create2__Q23Sys3OBBFRQ23Sys11VertexTableRQ23Sys13TriangleTableR8Matrix3fR8Matrix3fR10Vector3<f>"
	lwz      r4, 0x18(r26)
	mr       r6, r27
	lwz      r5, 0x1c(r26)
	mr       r7, r28
	mr       r3, r31
	bl       autoDivide__Q23Sys3OBBFRQ23Sys11VertexTableRQ23Sys13TriangleTableii
	lmw      r26, 0x88(r1)
	lwz      r0, 0xa4(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void OBBTree::draw(Graphics&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x6C
 */
void OBBTree::write(Stream&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8041E880
 * @note Size: 0x118
 */
void OBBTree::read(Stream& input)
{
	mVertexTable = new VertexTable;
	mVertexTable->read(input);
	mTriangleTable = new TriangleTable;
	mTriangleTable->read(input);
	getOBB()->read(input);
}

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
void OBBTree::writeVertsOnly(Stream&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
void OBBTree::writeWithoutVerts(Stream&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8041E998
 * @note Size: 0x78
 */
void OBBTree::readWithoutVerts(Stream& input, Sys::VertexTable& vertTable)
{
	mVertexTable   = &vertTable;
	mTriangleTable = new TriangleTable;
	mTriangleTable->read(input);
	getOBB()->read(input);
}

/**
 * @note Address: 0x8041EA10
 * @note Size: 0x24
 */
void OBBTree::traceMove(Matrixf& mat1, Matrixf& mat2, Game::MoveInfo& info, f32) { traceMove_new(mat1, mat2, info, 0.0f); }

/**
 * @note Address: 0x8041EA34
 * @note Size: 0x24
 */
void OBBTree::traceMove_global(Game::MoveInfo& info, f32) { traceMove_new_global(info, 0.0f); }

/**
 * @note Address: N/A
 * @note Size: 0x3A4
 */
void OBBTree::traceMove_original(Matrixf&, Matrixf&, Game::MoveInfo&, f32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8041EA58
 * @note Size: 0x214
 */
bool OBBTree::findRayIntersection(Sys::RayIntersectInfo& info, Matrixf& transformationMtx, Matrixf& edgeTransformationMtx)
{
	Vector3f edgeStart = info.mIntersectEdge.mStartPos;
	Vector3f edgeEnd   = info.mIntersectEdge.mEndPos;

	Vector3f intersectEdgeStart = edgeTransformationMtx.mtxMult(edgeStart);
	Vector3f intersectEdgeEnd   = edgeTransformationMtx.mtxMult(edgeEnd);

	Vector3f edgeVec = info.mIntersectEdge.mStartPos - info.mIntersectEdge.mEndPos;

	Sphere ball;
	ball.mRadius   = edgeVec.qLength();
	ball.mPosition = (intersectEdgeStart + intersectEdgeEnd) * 0.5f;
	if (!getOBB()->mSphere.intersect(ball)) {
		return false;
	}

	info.mTriTable                = mTriangleTable;
	info.mIntersectEdge.mStartPos = intersectEdgeStart;
	info.mIntersectEdge.mEndPos   = intersectEdgeEnd;
	info.mBoundingSphere          = ball;

	bool rayIntersect = getOBB()->findRayIntersection(info, transformationMtx, edgeTransformationMtx);

	info.mIntersectEdge.mStartPos = edgeStart;
	info.mIntersectEdge.mEndPos   = edgeEnd;
	return rayIntersect;
	/*
	stwu     r1, -0xc0(r1)
	mflr     r0
	stw      r0, 0xc4(r1)
	stfd     f31, 0xb0(r1)
	psq_st   f31, 184(r1), 0, qr0
	stfd     f30, 0xa0(r1)
	psq_st   f30, 168(r1), 0, qr0
	stfd     f29, 0x90(r1)
	psq_st   f29, 152(r1), 0, qr0
	stfd     f28, 0x80(r1)
	psq_st   f28, 136(r1), 0, qr0
	stfd     f27, 0x70(r1)
	psq_st   f27, 120(r1), 0, qr0
	stfd     f26, 0x60(r1)
	psq_st   f26, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	stw      r29, 0x54(r1)
	stw      r28, 0x50(r1)
	mr       r29, r4
	mr       r30, r5
	lfs      f0, 0(r4)
	mr       r31, r6
	mr       r28, r3
	addi     r4, r1, 0x3c
	stfs     f0, 0x3c(r1)
	mr       r3, r31
	addi     r5, r1, 0x14
	lfs      f0, 4(r29)
	stfs     f0, 0x40(r1)
	lfs      f0, 8(r29)
	stfs     f0, 0x44(r1)
	lfs      f0, 0xc(r29)
	stfs     f0, 0x30(r1)
	lfs      f0, 0x10(r29)
	stfs     f0, 0x34(r1)
	lfs      f0, 0x14(r29)
	stfs     f0, 0x38(r1)
	bl       PSMTXMultVec
	lfs      f31, 0x14(r1)
	mr       r3, r31
	lfs      f30, 0x18(r1)
	addi     r4, r1, 0x30
	lfs      f29, 0x1c(r1)
	addi     r5, r1, 8
	bl       PSMTXMultVec
	lfs      f1, 4(r29)
	lfs      f0, 0x10(r29)
	lfs      f3, 0(r29)
	fsubs    f4, f1, f0
	lfs      f0, 0xc(r29)
	lfs      f2, 8(r29)
	fsubs    f3, f3, f0
	lfs      f1, 0x14(r29)
	fmuls    f0, f4, f4
	fsubs    f1, f2, f1
	lfs      f26, 8(r1)
	lfs      f28, 0xc(r1)
	fmadds   f0, f3, f3, f0
	lfs      f27, 0x10(r1)
	fmadds   f1, f1, f1, f0
	bl       pikmin2_sqrtf__Ff
	fadds    f3, f31, f26
	lfs      f4, lbl_805203CC@sda21(r2)
	fadds    f2, f30, f28
	stfs     f1, 0x2c(r1)
	fadds    f0, f29, f27
	addi     r3, r28, 0x120
	fmuls    f3, f3, f4
	addi     r4, r1, 0x20
	fmuls    f1, f2, f4
	fmuls    f0, f0, f4
	stfs     f3, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	bl       intersect__Q23Sys6SphereFRQ23Sys6Sphere
	clrlwi.  r0, r3, 0x18
	bne      lbl_8041EB98
	li       r3, 0
	b        lbl_8041EC1C

lbl_8041EB98:
	lwz      r0, 0x1c(r28)
	mr       r4, r29
	mr       r5, r30
	mr       r6, r31
	stw      r0, 0x30(r29)
	addi     r3, r28, 0x20
	stfs     f31, 0(r29)
	stfs     f30, 4(r29)
	stfs     f29, 8(r29)
	stfs     f26, 0xc(r29)
	stfs     f28, 0x10(r29)
	stfs     f27, 0x14(r29)
	lfs      f0, 0x20(r1)
	stfs     f0, 0x20(r29)
	lfs      f0, 0x24(r1)
	stfs     f0, 0x24(r29)
	lfs      f0, 0x28(r1)
	stfs     f0, 0x28(r29)
	lfs      f0, 0x2c(r1)
	stfs     f0, 0x2c(r29)
	bl
findRayIntersection__Q23Sys3OBBFRQ23Sys16RayIntersectInfoR7MatrixfR7Matrixf lfs
f0, 0x3c(r1) stfs     f0, 0(r29) lfs      f0, 0x40(r1) stfs     f0, 4(r29) lfs
f0, 0x44(r1) stfs     f0, 8(r29) lfs      f0, 0x30(r1) stfs     f0, 0xc(r29) lfs
f0, 0x34(r1) stfs     f0, 0x10(r29) lfs      f0, 0x38(r1) stfs     f0, 0x14(r29)

lbl_8041EC1C:
	psq_l    f31, 184(r1), 0, qr0
	lfd      f31, 0xb0(r1)
	psq_l    f30, 168(r1), 0, qr0
	lfd      f30, 0xa0(r1)
	psq_l    f29, 152(r1), 0, qr0
	lfd      f29, 0x90(r1)
	psq_l    f28, 136(r1), 0, qr0
	lfd      f28, 0x80(r1)
	psq_l    f27, 120(r1), 0, qr0
	lfd      f27, 0x70(r1)
	psq_l    f26, 104(r1), 0, qr0
	lfd      f26, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r29, 0x54(r1)
	lwz      r0, 0xc4(r1)
	lwz      r28, 0x50(r1)
	mtlr     r0
	addi     r1, r1, 0xc0
	blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x70
 */
void OBBTree::testIntersection(Sys::Sphere&, Vector3f&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x180
 */
void OBB::testIntersectionTriList(Sys::Sphere&, Vector3f&, Sys::VertexTable&, Sys::TriangleTable&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x19C
 */
void OBB::testIntersection(Sys::Sphere&, Vector3f&, Sys::VertexTable&, Sys::TriangleTable&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x224
 */
void OBB::traceMoveTriList_original(Game::MoveInfo&, Sys::VertexTable&, Sys::TriangleTable&, Matrixf&, Matrixf&, int&, Sys::Triangle**,
                                    f32*, Vector3f*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x7F0
 */
void OBB::traceMove_original(Game::MoveInfo&, Sys::VertexTable&, Sys::TriangleTable&, Matrixf&, Matrixf&, int&, Sys::Triangle**, f32*,
                             Vector3f*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8041EC6C
 * @note Size: 0x5C0
 */
bool OBB::findRayIntersection(Sys::RayIntersectInfo& info, Matrixf& transformationMtx, Matrixf& unused)
{
	if (isLeaf()) {
		return findRayIntersectionTriList(info, transformationMtx, unused);
	}

	f32 rad      = info.mBoundingSphere.mRadius;
	f32 ballDist = mDivPlane.calcDist(info.mBoundingSphere.mPosition);

	if (ballDist > rad) {
		if (mHalfA) {
			return mHalfA->findRayIntersection(info, transformationMtx, unused);
		}
		return findRayIntersectionTriList(info, transformationMtx, unused);
	}
	if (ballDist < -rad) {
		if (mHalfB) {
			return mHalfB->findRayIntersection(info, transformationMtx, unused);
		}
		return findRayIntersectionTriList(info, transformationMtx, unused);
	}
	return false;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r27, r3
	mr       r31, r4
	mr       r30, r5
	mr       r29, r6
	lwz      r26, 0xc0(r3)
	li       r3, 0
	cmplwi   r26, 0
	bne      lbl_8041ECAC
	lwz      r0, 0xc4(r27)
	cmplwi   r0, 0
	bne      lbl_8041ECAC
	li       r3, 1

lbl_8041ECAC:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8041ECCC
	mr       r3, r27
	mr       r4, r31
	mr       r5, r30
	mr       r6, r29
	bl
findRayIntersectionTriList__Q23Sys3OBBFRQ23Sys16RayIntersectInfoR7MatrixfR7Matrixf
	b        lbl_8041F218

lbl_8041ECCC:
	lfs      f1, 0x24(r31)
	lfs      f0, 0xcc(r27)
	lfs      f2, 0x20(r31)
	fmuls    f0, f1, f0
	lfs      f1, 0xc8(r27)
	lfs      f4, 0x28(r31)
	lfs      f3, 0xd0(r27)
	fmadds   f1, f2, f1, f0
	lfs      f0, 0xd4(r27)
	lfs      f2, 0x2c(r31)
	fmadds   f1, f4, f3, f1
	fsubs    f1, f1, f0
	fcmpo    cr0, f1, f2
	ble      lbl_8041EE48
	cmplwi   r26, 0
	beq      lbl_8041EE30
	mr       r3, r26
	addi     r27, r31, 0x20
	bl       isLeaf__Q23Sys3OBBFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8041ED38
	mr       r3, r26
	mr       r4, r31
	mr       r5, r30
	mr       r6, r29
	bl
findRayIntersectionTriList__Q23Sys3OBBFRQ23Sys16RayIntersectInfoR7MatrixfR7Matrixf
	b        lbl_8041F218

lbl_8041ED38:
	mr       r4, r27
	addi     r3, r26, 0xc8
	bl       "calcDist__5PlaneCFRC10Vector3<f>"
	lfs      f0, 0xc(r27)
	fcmpo    cr0, f1, f0
	ble      lbl_8041ED88
	lwz      r3, 0xc0(r26)
	cmplwi   r3, 0
	beq      lbl_8041ED70
	mr       r4, r31
	mr       r5, r30
	mr       r6, r29
	bl
findRayIntersection__Q23Sys3OBBFRQ23Sys16RayIntersectInfoR7MatrixfR7Matrixf b
lbl_8041F218

lbl_8041ED70:
	mr       r3, r26
	mr       r4, r31
	mr       r5, r30
	mr       r6, r29
	bl
findRayIntersectionTriList__Q23Sys3OBBFRQ23Sys16RayIntersectInfoR7MatrixfR7Matrixf
	b        lbl_8041F218

lbl_8041ED88:
	fneg     f0, f0
	fcmpo    cr0, f1, f0
	bge      lbl_8041EDCC
	lwz      r3, 0xc4(r26)
	cmplwi   r3, 0
	beq      lbl_8041EDB4
	mr       r4, r31
	mr       r5, r30
	mr       r6, r29
	bl
findRayIntersection__Q23Sys3OBBFRQ23Sys16RayIntersectInfoR7MatrixfR7Matrixf b
lbl_8041F218

lbl_8041EDB4:
	mr       r3, r26
	mr       r4, r31
	mr       r5, r30
	mr       r6, r29
	bl
findRayIntersectionTriList__Q23Sys3OBBFRQ23Sys16RayIntersectInfoR7MatrixfR7Matrixf
	b        lbl_8041F218

lbl_8041EDCC:
	lwz      r3, 0xc0(r26)
	li       r27, 0
	cmplwi   r3, 0
	beq      lbl_8041EDF0
	mr       r4, r31
	mr       r5, r30
	mr       r6, r29
	bl
findRayIntersection__Q23Sys3OBBFRQ23Sys16RayIntersectInfoR7MatrixfR7Matrixf mr
r27, r3

lbl_8041EDF0:
	lwz      r3, 0xc4(r26)
	li       r4, 0
	cmplwi   r3, 0
	beq      lbl_8041EE14
	mr       r4, r31
	mr       r5, r30
	mr       r6, r29
	bl
findRayIntersection__Q23Sys3OBBFRQ23Sys16RayIntersectInfoR7MatrixfR7Matrixf mr
r4, r3

lbl_8041EE14:
	clrlwi.  r0, r27, 0x18
	li       r3, 0
	bne      lbl_8041EE28
	clrlwi.  r0, r4, 0x18
	beq      lbl_8041F218

lbl_8041EE28:
	li       r3, 1
	b        lbl_8041F218

lbl_8041EE30:
	mr       r3, r27
	mr       r4, r31
	mr       r5, r30
	mr       r6, r29
	bl
findRayIntersectionTriList__Q23Sys3OBBFRQ23Sys16RayIntersectInfoR7MatrixfR7Matrixf
	b        lbl_8041F218

lbl_8041EE48:
	fneg     f0, f2
	fcmpo    cr0, f1, f0
	bge      lbl_8041EF9C
	lwz      r28, 0xc4(r27)
	cmplwi   r28, 0
	beq      lbl_8041EF84
	mr       r3, r28
	addi     r26, r31, 0x20
	bl       isLeaf__Q23Sys3OBBFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8041EE8C
	mr       r3, r28
	mr       r4, r31
	mr       r5, r30
	mr       r6, r29
	bl
findRayIntersectionTriList__Q23Sys3OBBFRQ23Sys16RayIntersectInfoR7MatrixfR7Matrixf
	b        lbl_8041F218

lbl_8041EE8C:
	mr       r4, r26
	addi     r3, r28, 0xc8
	bl       "calcDist__5PlaneCFRC10Vector3<f>"
	lfs      f0, 0xc(r26)
	fcmpo    cr0, f1, f0
	ble      lbl_8041EEDC
	lwz      r3, 0xc0(r28)
	cmplwi   r3, 0
	beq      lbl_8041EEC4
	mr       r4, r31
	mr       r5, r30
	mr       r6, r29
	bl
findRayIntersection__Q23Sys3OBBFRQ23Sys16RayIntersectInfoR7MatrixfR7Matrixf b
lbl_8041F218

lbl_8041EEC4:
	mr       r3, r28
	mr       r4, r31
	mr       r5, r30
	mr       r6, r29
	bl
findRayIntersectionTriList__Q23Sys3OBBFRQ23Sys16RayIntersectInfoR7MatrixfR7Matrixf
	b        lbl_8041F218

lbl_8041EEDC:
	fneg     f0, f0
	fcmpo    cr0, f1, f0
	bge      lbl_8041EF20
	lwz      r3, 0xc4(r28)
	cmplwi   r3, 0
	beq      lbl_8041EF08
	mr       r4, r31
	mr       r5, r30
	mr       r6, r29
	bl
findRayIntersection__Q23Sys3OBBFRQ23Sys16RayIntersectInfoR7MatrixfR7Matrixf b
lbl_8041F218

lbl_8041EF08:
	mr       r3, r28
	mr       r4, r31
	mr       r5, r30
	mr       r6, r29
	bl
findRayIntersectionTriList__Q23Sys3OBBFRQ23Sys16RayIntersectInfoR7MatrixfR7Matrixf
	b        lbl_8041F218

lbl_8041EF20:
	lwz      r3, 0xc0(r28)
	li       r26, 0
	cmplwi   r3, 0
	beq      lbl_8041EF44
	mr       r4, r31
	mr       r5, r30
	mr       r6, r29
	bl
findRayIntersection__Q23Sys3OBBFRQ23Sys16RayIntersectInfoR7MatrixfR7Matrixf mr
r26, r3

lbl_8041EF44:
	lwz      r3, 0xc4(r28)
	li       r4, 0
	cmplwi   r3, 0
	beq      lbl_8041EF68
	mr       r4, r31
	mr       r5, r30
	mr       r6, r29
	bl
findRayIntersection__Q23Sys3OBBFRQ23Sys16RayIntersectInfoR7MatrixfR7Matrixf mr
r4, r3

lbl_8041EF68:
	clrlwi.  r0, r26, 0x18
	li       r3, 0
	bne      lbl_8041EF7C
	clrlwi.  r0, r4, 0x18
	beq      lbl_8041F218

lbl_8041EF7C:
	li       r3, 1
	b        lbl_8041F218

lbl_8041EF84:
	mr       r3, r27
	mr       r4, r31
	mr       r5, r30
	mr       r6, r29
	bl
findRayIntersectionTriList__Q23Sys3OBBFRQ23Sys16RayIntersectInfoR7MatrixfR7Matrixf
	b        lbl_8041F218

lbl_8041EF9C:
	cmplwi   r26, 0
	li       r28, 0
	beq      lbl_8041F0CC
	mr       r3, r26
	addi     r28, r31, 0x20
	bl       isLeaf__Q23Sys3OBBFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8041EFD4
	mr       r3, r26
	mr       r4, r31
	mr       r5, r30
	mr       r6, r29
	bl
findRayIntersectionTriList__Q23Sys3OBBFRQ23Sys16RayIntersectInfoR7MatrixfR7Matrixf
	b        lbl_8041F0C8

lbl_8041EFD4:
	mr       r4, r28
	addi     r3, r26, 0xc8
	bl       "calcDist__5PlaneCFRC10Vector3<f>"
	lfs      f0, 0xc(r28)
	fcmpo    cr0, f1, f0
	ble      lbl_8041F024
	lwz      r3, 0xc0(r26)
	cmplwi   r3, 0
	beq      lbl_8041F00C
	mr       r4, r31
	mr       r5, r30
	mr       r6, r29
	bl
findRayIntersection__Q23Sys3OBBFRQ23Sys16RayIntersectInfoR7MatrixfR7Matrixf b
lbl_8041F0C8

lbl_8041F00C:
	mr       r3, r26
	mr       r4, r31
	mr       r5, r30
	mr       r6, r29
	bl
findRayIntersectionTriList__Q23Sys3OBBFRQ23Sys16RayIntersectInfoR7MatrixfR7Matrixf
	b        lbl_8041F0C8

lbl_8041F024:
	fneg     f0, f0
	fcmpo    cr0, f1, f0
	bge      lbl_8041F068
	lwz      r3, 0xc4(r26)
	cmplwi   r3, 0
	beq      lbl_8041F050
	mr       r4, r31
	mr       r5, r30
	mr       r6, r29
	bl
findRayIntersection__Q23Sys3OBBFRQ23Sys16RayIntersectInfoR7MatrixfR7Matrixf b
lbl_8041F0C8

lbl_8041F050:
	mr       r3, r26
	mr       r4, r31
	mr       r5, r30
	mr       r6, r29
	bl
findRayIntersectionTriList__Q23Sys3OBBFRQ23Sys16RayIntersectInfoR7MatrixfR7Matrixf
	b        lbl_8041F0C8

lbl_8041F068:
	lwz      r3, 0xc0(r26)
	li       r28, 0
	cmplwi   r3, 0
	beq      lbl_8041F08C
	mr       r4, r31
	mr       r5, r30
	mr       r6, r29
	bl
findRayIntersection__Q23Sys3OBBFRQ23Sys16RayIntersectInfoR7MatrixfR7Matrixf mr
r28, r3

lbl_8041F08C:
	lwz      r3, 0xc4(r26)
	li       r4, 0
	cmplwi   r3, 0
	beq      lbl_8041F0B0
	mr       r4, r31
	mr       r5, r30
	mr       r6, r29
	bl
findRayIntersection__Q23Sys3OBBFRQ23Sys16RayIntersectInfoR7MatrixfR7Matrixf mr
r4, r3

lbl_8041F0B0:
	clrlwi.  r0, r28, 0x18
	li       r3, 0
	bne      lbl_8041F0C4
	clrlwi.  r0, r4, 0x18
	beq      lbl_8041F0C8

lbl_8041F0C4:
	li       r3, 1

lbl_8041F0C8:
	mr       r28, r3

lbl_8041F0CC:
	lwz      r27, 0xc4(r27)
	li       r3, 0
	cmplwi   r27, 0
	beq      lbl_8041F1FC
	mr       r3, r27
	addi     r26, r31, 0x20
	bl       isLeaf__Q23Sys3OBBFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8041F108
	mr       r3, r27
	mr       r4, r31
	mr       r5, r30
	mr       r6, r29
	bl
findRayIntersectionTriList__Q23Sys3OBBFRQ23Sys16RayIntersectInfoR7MatrixfR7Matrixf
	b        lbl_8041F1FC

lbl_8041F108:
	mr       r4, r26
	addi     r3, r27, 0xc8
	bl       "calcDist__5PlaneCFRC10Vector3<f>"
	lfs      f0, 0xc(r26)
	fcmpo    cr0, f1, f0
	ble      lbl_8041F158
	lwz      r3, 0xc0(r27)
	cmplwi   r3, 0
	beq      lbl_8041F140
	mr       r4, r31
	mr       r5, r30
	mr       r6, r29
	bl
findRayIntersection__Q23Sys3OBBFRQ23Sys16RayIntersectInfoR7MatrixfR7Matrixf b
lbl_8041F1FC

lbl_8041F140:
	mr       r3, r27
	mr       r4, r31
	mr       r5, r30
	mr       r6, r29
	bl
findRayIntersectionTriList__Q23Sys3OBBFRQ23Sys16RayIntersectInfoR7MatrixfR7Matrixf
	b        lbl_8041F1FC

lbl_8041F158:
	fneg     f0, f0
	fcmpo    cr0, f1, f0
	bge      lbl_8041F19C
	lwz      r3, 0xc4(r27)
	cmplwi   r3, 0
	beq      lbl_8041F184
	mr       r4, r31
	mr       r5, r30
	mr       r6, r29
	bl
findRayIntersection__Q23Sys3OBBFRQ23Sys16RayIntersectInfoR7MatrixfR7Matrixf b
lbl_8041F1FC

lbl_8041F184:
	mr       r3, r27
	mr       r4, r31
	mr       r5, r30
	mr       r6, r29
	bl
findRayIntersectionTriList__Q23Sys3OBBFRQ23Sys16RayIntersectInfoR7MatrixfR7Matrixf
	b        lbl_8041F1FC

lbl_8041F19C:
	lwz      r3, 0xc0(r27)
	li       r26, 0
	cmplwi   r3, 0
	beq      lbl_8041F1C0
	mr       r4, r31
	mr       r5, r30
	mr       r6, r29
	bl
findRayIntersection__Q23Sys3OBBFRQ23Sys16RayIntersectInfoR7MatrixfR7Matrixf mr
r26, r3

lbl_8041F1C0:
	lwz      r3, 0xc4(r27)
	li       r4, 0
	cmplwi   r3, 0
	beq      lbl_8041F1E4
	mr       r4, r31
	mr       r5, r30
	mr       r6, r29
	bl
findRayIntersection__Q23Sys3OBBFRQ23Sys16RayIntersectInfoR7MatrixfR7Matrixf mr
r4, r3

lbl_8041F1E4:
	clrlwi.  r0, r26, 0x18
	li       r3, 0
	bne      lbl_8041F1F8
	clrlwi.  r0, r4, 0x18
	beq      lbl_8041F1FC

lbl_8041F1F8:
	li       r3, 1

lbl_8041F1FC:
	clrlwi.  r0, r28, 0x18
	li       r4, 0
	bne      lbl_8041F210
	clrlwi.  r0, r3, 0x18
	beq      lbl_8041F214

lbl_8041F210:
	li       r4, 1

lbl_8041F214:
	mr       r3, r4

lbl_8041F218:
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x8041F22C
 * @note Size: 0x114
 */
bool OBB::findRayIntersectionTriList(Sys::RayIntersectInfo& rayInfo, Matrixf& transformMtx, Matrixf& arg2)
{
	bool isIntersect = false;

	for (int i = 0; i < mTriIndexList.getNum(); i++) {
		Triangle* currTri = rayInfo.mTriTable->getTriangle(mTriIndexList.mObjects[i]);
		Vector3f intersectVec;

		if (rayInfo.condition(*currTri) && currTri->intersect(rayInfo.mIntersectEdge, rayInfo.mRadius, intersectVec)) {
			isIntersect     = true;
			Vector3f sepVec = intersectVec - rayInfo.mIntersectEdge.mStartPos;
			f32 sqSep       = sepVec.x * sepVec.x + sepVec.y * sepVec.y + sepVec.z * sepVec.z;
			if (sqSep < rayInfo.mDistance) {
				rayInfo.mDistance          = sqSep;
				rayInfo.mIntersectPosition = transformMtx.mtxMult(intersectVec);
				rayInfo.mNormalY           = currTri->mTrianglePlane.mNormal.y;
			}
		}
	}
	return isIntersect;
}

/**
 * @note Address: 0x8041F340
 * @note Size: 0x178
 */
Sys::TriIndexList* OBB::findTriLists(Sys::Sphere& ball)
{
	TriIndexList* triList = nullptr;

	if (isLeaf()) {
		mTriIndexList.clearRelations();
		return &mTriIndexList;
	}

	f32 rad      = ball.mRadius;
	f32 ballDist = mDivPlane.calcDist(ball.mPosition);

	if (ballDist > rad) {

		if (mHalfA) {
			TriIndexList* triListTemp = mHalfA->findTriLists(ball);
			return (triListTemp) ? triListTemp : nullptr;
		}

	} else if (ballDist < -rad) {

		if (mHalfB) {
			TriIndexList* triListTemp = mHalfB->findTriLists(ball);
			return (triListTemp) ? triListTemp : nullptr;
		}

	} else {

		if (mHalfA) {
			TriIndexList* triListTemp1 = mHalfA->findTriLists(ball);
			if (triListTemp1) {
				triList = triListTemp1;
			}
		}

		if (mHalfB) {
			TriIndexList* triListTemp2 = mHalfB->findTriLists(ball);
			if (triListTemp2) {
				if (triList) {
					triList->concat(triListTemp2);
				} else {
					triList = triListTemp2;
				}
				return triList;
			}
		}

		return triList;
	}

	// probably just a sign of an inline
	goto nullreturn;
nullreturn:

	return nullptr;
}

/**
 * @note Address: 0x8041F4B8
 * @note Size: 0x2C
 */
f32 OBBTree::getMinY(Vector3f& pos) { getOBB()->getMinY(pos, *mTriangleTable, FLOAT_DIST_MIN); }

/**
 * @note Address: 0x8041F4E4
 * @note Size: 0x6C0
 */
f32 OBB::getMinY(Vector3f& pos, Sys::TriangleTable& triTable, f32 inputMin)
{
	f32 divDist;
	f32 minY = inputMin;

	if (isLeaf()) {
		return getMinYTriList(pos, triTable);
	}

	if (0.0f == mDivPlane.mNormal.y) {
		divDist = mDivPlane.calcDist(pos);
	} else {
		Vector3f planeVec = pos;
		planeVec.y        = -(mDivPlane.mNormal.x * planeVec.x - mDivPlane.mOffset);
		planeVec.y        = -(mDivPlane.mNormal.z * planeVec.z - planeVec.y);
		planeVec.y        = planeVec.y / mDivPlane.mNormal.y;
		divDist           = mDivPlane.calcDist(planeVec);
	}

	if (divDist > 0.01f) {
		if (mHalfA) {
			minY = mHalfA->getMinY(pos, triTable, inputMin);
			if (minY < inputMin) {

			} else {
				minY = inputMin;
			}
		} else {
			minY = inputMin;
		}
		return minY;
	}
	if (divDist < -0.01f) {
		if (mHalfB) {
			f32 minY = mHalfB->getMinY(pos, triTable, inputMin);
			if (minY < inputMin) {

			} else {
				minY = inputMin;
			}
		} else {
			minY = inputMin;
		}
	}
	return minY;
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	stw      r29, 0x44(r1)
	stw      r28, 0x40(r1)
	mr       r28, r3
	fmr      f31, f1
	lwz      r29, 0xc0(r3)
	mr       r30, r4
	mr       r31, r5
	li       r3, 0
	cmplwi   r29, 0
	bne      lbl_8041F540
	lwz      r0, 0xc4(r28)
	cmplwi   r0, 0
	bne      lbl_8041F540
	li       r3, 1

lbl_8041F540:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8041F55C
	mr       r3, r28
	mr       r4, r30
	mr       r5, r31
	bl       "getMinYTriList__Q23Sys3OBBFR10Vector3<f>RQ23Sys13TriangleTable"
	b        lbl_8041FB74

lbl_8041F55C:
	lfs      f0, lbl_805203C0@sda21(r2)
	lfs      f1, 0xcc(r28)
	fcmpu    cr0, f0, f1
	bne      lbl_8041F598
	lfs      f0, 4(r30)
	lfs      f2, 0(r30)
	fmuls    f0, f0, f1
	lfs      f1, 0xc8(r28)
	lfs      f4, 8(r30)
	lfs      f3, 0xd0(r28)
	fmadds   f1, f2, f1, f0
	lfs      f0, 0xd4(r28)
	fmadds   f1, f4, f3, f1
	fsubs    f1, f1, f0
	b        lbl_8041F5C8

lbl_8041F598:
	lfs      f6, 0xd4(r28)
	lfs      f2, 0xc8(r28)
	lfs      f3, 0(r30)
	lfs      f4, 0xd0(r28)
	fnmsubs  f0, f2, f3, f6
	lfs      f5, 8(r30)
	fnmsubs  f0, f4, f5, f0
	fdivs    f0, f0, f1
	fmuls    f0, f0, f1
	fmadds   f0, f3, f2, f0
	fmadds   f0, f5, f4, f0
	fsubs    f1, f0, f6

lbl_8041F5C8:
	lfs      f0, lbl_805203D0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8041F73C
	cmplwi   r29, 0
	beq      lbl_8041FB70
	fmr      f30, f31
	mr       r3, r29
	bl       isLeaf__Q23Sys3OBBFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8041F604
	mr       r3, r29
	mr       r4, r30
	mr       r5, r31
	bl       "getMinYTriList__Q23Sys3OBBFR10Vector3<f>RQ23Sys13TriangleTable"
	b        lbl_8041F728

lbl_8041F604:
	lfs      f1, lbl_805203C0@sda21(r2)
	lfs      f0, 0xcc(r29)
	fcmpu    cr0, f1, f0
	bne      lbl_8041F624
	mr       r4, r30
	addi     r3, r29, 0xc8
	bl       "calcDist__5PlaneCFRC10Vector3<f>"
	b        lbl_8041F664

lbl_8041F624:
	mr       r4, r30
	addi     r3, r1, 0x2c
	bl       "__ct__10Vector3<f>FRC10Vector3<f>"
	lfs      f2, 0xc8(r29)
	addi     r3, r29, 0xc8
	lfs      f1, 0(r30)
	addi     r4, r1, 0x2c
	lfs      f0, 0xd4(r29)
	lfs      f3, 0xd0(r29)
	fnmsubs  f1, f2, f1, f0
	lfs      f2, 8(r30)
	lfs      f0, 0xcc(r29)
	fnmsubs  f1, f3, f2, f1
	fdivs    f0, f1, f0
	stfs     f0, 0x30(r1)
	bl       "calcDist__5PlaneCFRC10Vector3<f>"

lbl_8041F664:
	lfs      f0, lbl_805203D0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8041F6A0
	lwz      r3, 0xc0(r29)
	cmplwi   r3, 0
	beq      lbl_8041F724
	fmr      f1, f31
	mr       r4, r30
	mr       r5, r31
	bl       "getMinY__Q23Sys3OBBFR10Vector3<f>RQ23Sys13TriangleTablef"
	fcmpo    cr0, f1, f31
	ble      lbl_8041F698
	b        lbl_8041F728

lbl_8041F698:
	fmr      f1, f31
	b        lbl_8041F728

lbl_8041F6A0:
	lfs      f0, lbl_805203D4@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8041F6DC
	lwz      r3, 0xc4(r29)
	cmplwi   r3, 0
	beq      lbl_8041F724
	fmr      f1, f31
	mr       r4, r30
	mr       r5, r31
	bl       "getMinY__Q23Sys3OBBFR10Vector3<f>RQ23Sys13TriangleTablef"
	fcmpo    cr0, f1, f31
	ble      lbl_8041F6D4
	b        lbl_8041F728

lbl_8041F6D4:
	fmr      f1, f31
	b        lbl_8041F728

lbl_8041F6DC:
	fmr      f1, f31
	lwz      r3, 0xc0(r29)
	mr       r4, r30
	mr       r5, r31
	bl       "getMinY__Q23Sys3OBBFR10Vector3<f>RQ23Sys13TriangleTablef"
	fcmpo    cr0, f1, f31
	ble      lbl_8041F6FC
	fmr      f30, f1

lbl_8041F6FC:
	fmr      f1, f30
	lwz      r3, 0xc4(r29)
	mr       r4, r30
	mr       r5, r31
	bl       "getMinY__Q23Sys3OBBFR10Vector3<f>RQ23Sys13TriangleTablef"
	fcmpo    cr0, f1, f30
	ble      lbl_8041F71C
	fmr      f30, f1

lbl_8041F71C:
	fmr      f1, f30
	b        lbl_8041F728

lbl_8041F724:
	fmr      f1, f31

lbl_8041F728:
	fcmpo    cr0, f1, f31
	ble      lbl_8041F734
	b        lbl_8041FB74

lbl_8041F734:
	fmr      f1, f31
	b        lbl_8041FB74

lbl_8041F73C:
	lfs      f0, lbl_805203D4@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8041F8B4
	lwz      r29, 0xc4(r28)
	cmplwi   r29, 0
	beq      lbl_8041FB70
	fmr      f30, f31
	mr       r3, r29
	bl       isLeaf__Q23Sys3OBBFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8041F77C
	mr       r3, r29
	mr       r4, r30
	mr       r5, r31
	bl       "getMinYTriList__Q23Sys3OBBFR10Vector3<f>RQ23Sys13TriangleTable"
	b        lbl_8041F8A0

lbl_8041F77C:
	lfs      f1, lbl_805203C0@sda21(r2)
	lfs      f0, 0xcc(r29)
	fcmpu    cr0, f1, f0
	bne      lbl_8041F79C
	mr       r4, r30
	addi     r3, r29, 0xc8
	bl       "calcDist__5PlaneCFRC10Vector3<f>"
	b        lbl_8041F7DC

lbl_8041F79C:
	mr       r4, r30
	addi     r3, r1, 0x20
	bl       "__ct__10Vector3<f>FRC10Vector3<f>"
	lfs      f2, 0xc8(r29)
	addi     r3, r29, 0xc8
	lfs      f1, 0(r30)
	addi     r4, r1, 0x20
	lfs      f0, 0xd4(r29)
	lfs      f3, 0xd0(r29)
	fnmsubs  f1, f2, f1, f0
	lfs      f2, 8(r30)
	lfs      f0, 0xcc(r29)
	fnmsubs  f1, f3, f2, f1
	fdivs    f0, f1, f0
	stfs     f0, 0x24(r1)
	bl       "calcDist__5PlaneCFRC10Vector3<f>"

lbl_8041F7DC:
	lfs      f0, lbl_805203D0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8041F818
	lwz      r3, 0xc0(r29)
	cmplwi   r3, 0
	beq      lbl_8041F89C
	fmr      f1, f31
	mr       r4, r30
	mr       r5, r31
	bl       "getMinY__Q23Sys3OBBFR10Vector3<f>RQ23Sys13TriangleTablef"
	fcmpo    cr0, f1, f31
	ble      lbl_8041F810
	b        lbl_8041F8A0

lbl_8041F810:
	fmr      f1, f31
	b        lbl_8041F8A0

lbl_8041F818:
	lfs      f0, lbl_805203D4@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8041F854
	lwz      r3, 0xc4(r29)
	cmplwi   r3, 0
	beq      lbl_8041F89C
	fmr      f1, f31
	mr       r4, r30
	mr       r5, r31
	bl       "getMinY__Q23Sys3OBBFR10Vector3<f>RQ23Sys13TriangleTablef"
	fcmpo    cr0, f1, f31
	ble      lbl_8041F84C
	b        lbl_8041F8A0

lbl_8041F84C:
	fmr      f1, f31
	b        lbl_8041F8A0

lbl_8041F854:
	fmr      f1, f31
	lwz      r3, 0xc0(r29)
	mr       r4, r30
	mr       r5, r31
	bl       "getMinY__Q23Sys3OBBFR10Vector3<f>RQ23Sys13TriangleTablef"
	fcmpo    cr0, f1, f31
	ble      lbl_8041F874
	fmr      f30, f1

lbl_8041F874:
	fmr      f1, f30
	lwz      r3, 0xc4(r29)
	mr       r4, r30
	mr       r5, r31
	bl       "getMinY__Q23Sys3OBBFR10Vector3<f>RQ23Sys13TriangleTablef"
	fcmpo    cr0, f1, f30
	ble      lbl_8041F894
	fmr      f30, f1

lbl_8041F894:
	fmr      f1, f30
	b        lbl_8041F8A0

lbl_8041F89C:
	fmr      f1, f31

lbl_8041F8A0:
	fcmpo    cr0, f1, f31
	ble      lbl_8041F8AC
	b        lbl_8041FB74

lbl_8041F8AC:
	fmr      f1, f31
	b        lbl_8041FB74

lbl_8041F8B4:
	fmr      f30, f31
	mr       r3, r29
	bl       isLeaf__Q23Sys3OBBFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8041F8DC
	mr       r3, r29
	mr       r4, r30
	mr       r5, r31
	bl       "getMinYTriList__Q23Sys3OBBFR10Vector3<f>RQ23Sys13TriangleTable"
	b        lbl_8041FA00

lbl_8041F8DC:
	lfs      f1, lbl_805203C0@sda21(r2)
	lfs      f0, 0xcc(r29)
	fcmpu    cr0, f1, f0
	bne      lbl_8041F8FC
	mr       r4, r30
	addi     r3, r29, 0xc8
	bl       "calcDist__5PlaneCFRC10Vector3<f>"
	b        lbl_8041F93C

lbl_8041F8FC:
	mr       r4, r30
	addi     r3, r1, 0x14
	bl       "__ct__10Vector3<f>FRC10Vector3<f>"
	lfs      f2, 0xc8(r29)
	addi     r3, r29, 0xc8
	lfs      f1, 0(r30)
	addi     r4, r1, 0x14
	lfs      f0, 0xd4(r29)
	lfs      f3, 0xd0(r29)
	fnmsubs  f1, f2, f1, f0
	lfs      f2, 8(r30)
	lfs      f0, 0xcc(r29)
	fnmsubs  f1, f3, f2, f1
	fdivs    f0, f1, f0
	stfs     f0, 0x18(r1)
	bl       "calcDist__5PlaneCFRC10Vector3<f>"

lbl_8041F93C:
	lfs      f0, lbl_805203D0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8041F978
	lwz      r3, 0xc0(r29)
	cmplwi   r3, 0
	beq      lbl_8041F9FC
	fmr      f1, f31
	mr       r4, r30
	mr       r5, r31
	bl       "getMinY__Q23Sys3OBBFR10Vector3<f>RQ23Sys13TriangleTablef"
	fcmpo    cr0, f1, f31
	ble      lbl_8041F970
	b        lbl_8041FA00

lbl_8041F970:
	fmr      f1, f31
	b        lbl_8041FA00

lbl_8041F978:
	lfs      f0, lbl_805203D4@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8041F9B4
	lwz      r3, 0xc4(r29)
	cmplwi   r3, 0
	beq      lbl_8041F9FC
	fmr      f1, f31
	mr       r4, r30
	mr       r5, r31
	bl       "getMinY__Q23Sys3OBBFR10Vector3<f>RQ23Sys13TriangleTablef"
	fcmpo    cr0, f1, f31
	ble      lbl_8041F9AC
	b        lbl_8041FA00

lbl_8041F9AC:
	fmr      f1, f31
	b        lbl_8041FA00

lbl_8041F9B4:
	fmr      f1, f31
	lwz      r3, 0xc0(r29)
	mr       r4, r30
	mr       r5, r31
	bl       "getMinY__Q23Sys3OBBFR10Vector3<f>RQ23Sys13TriangleTablef"
	fcmpo    cr0, f1, f31
	ble      lbl_8041F9D4
	fmr      f30, f1

lbl_8041F9D4:
	fmr      f1, f30
	lwz      r3, 0xc4(r29)
	mr       r4, r30
	mr       r5, r31
	bl       "getMinY__Q23Sys3OBBFR10Vector3<f>RQ23Sys13TriangleTablef"
	fcmpo    cr0, f1, f30
	ble      lbl_8041F9F4
	fmr      f30, f1

lbl_8041F9F4:
	fmr      f1, f30
	b        lbl_8041FA00

lbl_8041F9FC:
	fmr      f1, f31

lbl_8041FA00:
	fcmpo    cr0, f1, f31
	ble      lbl_8041FA0C
	fmr      f31, f1

lbl_8041FA0C:
	lwz      r29, 0xc4(r28)
	fmr      f30, f31
	mr       r3, r29
	bl       isLeaf__Q23Sys3OBBFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8041FA38
	mr       r3, r29
	mr       r4, r30
	mr       r5, r31
	bl       "getMinYTriList__Q23Sys3OBBFR10Vector3<f>RQ23Sys13TriangleTable"
	b        lbl_8041FB5C

lbl_8041FA38:
	lfs      f1, lbl_805203C0@sda21(r2)
	lfs      f0, 0xcc(r29)
	fcmpu    cr0, f1, f0
	bne      lbl_8041FA58
	mr       r4, r30
	addi     r3, r29, 0xc8
	bl       "calcDist__5PlaneCFRC10Vector3<f>"
	b        lbl_8041FA98

lbl_8041FA58:
	mr       r4, r30
	addi     r3, r1, 8
	bl       "__ct__10Vector3<f>FRC10Vector3<f>"
	lfs      f2, 0xc8(r29)
	addi     r3, r29, 0xc8
	lfs      f1, 0(r30)
	addi     r4, r1, 8
	lfs      f0, 0xd4(r29)
	lfs      f3, 0xd0(r29)
	fnmsubs  f1, f2, f1, f0
	lfs      f2, 8(r30)
	lfs      f0, 0xcc(r29)
	fnmsubs  f1, f3, f2, f1
	fdivs    f0, f1, f0
	stfs     f0, 0xc(r1)
	bl       "calcDist__5PlaneCFRC10Vector3<f>"

lbl_8041FA98:
	lfs      f0, lbl_805203D0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8041FAD4
	lwz      r3, 0xc0(r29)
	cmplwi   r3, 0
	beq      lbl_8041FB58
	fmr      f1, f31
	mr       r4, r30
	mr       r5, r31
	bl       "getMinY__Q23Sys3OBBFR10Vector3<f>RQ23Sys13TriangleTablef"
	fcmpo    cr0, f1, f31
	ble      lbl_8041FACC
	b        lbl_8041FB5C

lbl_8041FACC:
	fmr      f1, f31
	b        lbl_8041FB5C

lbl_8041FAD4:
	lfs      f0, lbl_805203D4@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8041FB10
	lwz      r3, 0xc4(r29)
	cmplwi   r3, 0
	beq      lbl_8041FB58
	fmr      f1, f31
	mr       r4, r30
	mr       r5, r31
	bl       "getMinY__Q23Sys3OBBFR10Vector3<f>RQ23Sys13TriangleTablef"
	fcmpo    cr0, f1, f31
	ble      lbl_8041FB08
	b        lbl_8041FB5C

lbl_8041FB08:
	fmr      f1, f31
	b        lbl_8041FB5C

lbl_8041FB10:
	fmr      f1, f31
	lwz      r3, 0xc0(r29)
	mr       r4, r30
	mr       r5, r31
	bl       "getMinY__Q23Sys3OBBFR10Vector3<f>RQ23Sys13TriangleTablef"
	fcmpo    cr0, f1, f31
	ble      lbl_8041FB30
	fmr      f30, f1

lbl_8041FB30:
	fmr      f1, f30
	lwz      r3, 0xc4(r29)
	mr       r4, r30
	mr       r5, r31
	bl       "getMinY__Q23Sys3OBBFR10Vector3<f>RQ23Sys13TriangleTablef"
	fcmpo    cr0, f1, f30
	ble      lbl_8041FB50
	fmr      f30, f1

lbl_8041FB50:
	fmr      f1, f30
	b        lbl_8041FB5C

lbl_8041FB58:
	fmr      f1, f31

lbl_8041FB5C:
	fcmpo    cr0, f1, f31
	ble      lbl_8041FB68
	fmr      f31, f1

lbl_8041FB68:
	fmr      f1, f31
	b        lbl_8041FB74

lbl_8041FB70:
	fmr      f1, f31

lbl_8041FB74:
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r29, 0x44(r1)
	lwz      r0, 0x74(r1)
	lwz      r28, 0x40(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/**
 * @note Address: 0x8041FBA4
 * @note Size: 0xB4
 */
f32 OBB::getMinYTriList(Vector3f& vec, Sys::TriangleTable& triTable)
{
	f32 min = FLOAT_DIST_MIN;
	for (int i = 0; i < mTriIndexList.mCount; i++) {
		Triangle* currTri = triTable.getTriangle(mTriIndexList.mObjects[i]);
		Vector3f testVec  = vec;
		if ((currTri->insideXZ(testVec)) && (min < testVec.y)) {
			min = testVec.y;
		}
	}
	return min;
}

/**
 * @note Address: N/A
 * @note Size: 0x304
 */
void OBB::write(Stream&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8041FC58
 * @note Size: 0x320
 */
void OBB::read(Stream& input)
{
	// read side planes
	for (int i = 0; i < 6; i++) {
		mSidePlanes[i].read(input);
	}
	// read position of box
	mPosition.read(input);

	// read box axes
	for (int i = 0; i < 3; i++) {
		mAxes[i].read(input);
	}

	// read max and min vals for axes
	for (int i = 0; i < 3; i++) {
		mMinXYZ[i] = input.readFloat();
		mMaxXYZ[i] = input.readFloat();
	}

	// read div plane
	mDivPlane.read(input);
	// read sphere
	mSphere.mPosition.read(input);
	mSphere.mRadius = input.readFloat();
	// read triIndexList
	if (input.readByte() == 1) {
		mTriIndexList.read(input);
	}
	// read sub-OBBs if not a leaf
	u8 testByte = input.readByte();
	if ((testByte & 1)) {
		mHalfA = new OBB;
		mHalfA->read(input);
	} else {
		mHalfA = nullptr;
	}
	if ((testByte & 2)) {
		mHalfB = new OBB;
		mHalfB->read(input);
		return;
	}
	mHalfB = nullptr;
}

} // namespace Sys
