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
	Vector3f maxVec;
	Vector3f minVec;
	maxVec = Vector3f::add2(mPosition, mAxes[0] * mMaxXYZ[0]) + mAxes[1] * mMaxXYZ[1] + mAxes[2] * mMaxXYZ[2];
	minVec = Vector3f::add2(mPosition, mAxes[0] * mMinXYZ[0]) + mAxes[1] * mMinXYZ[1] + mAxes[2] * mMinXYZ[2];

	// set bounding sphere center to midpoint between diagonal corners
	mSphere.mPosition = (maxVec + minVec) * 0.5f;

	Vector3f maxSep;
	maxSep      = maxVec - mSphere.mPosition;
	f32 maxDist = maxSep.qLength();

	Vector3f minSep;
	minSep = minVec - mSphere.mPosition;

	f32 maxRadius = maxDist;
	if (maxDist < minSep.qLength()) {
		maxRadius = minSep.qLength();
	}

	mSphere.mRadius = maxRadius;

	// for (int i = 0; i < 3; i++) {
	//     m_sidePlanes[i].a = m_axes[i].x;
	//     m_sidePlanes[i].b = m_axes[i].y;
	//     m_sidePlanes[i].c = m_axes[i].z;
	//     m_sidePlanes[i].d = m_sidePlanes[i].a * (m_position.x + (m_axes[i].x * m_maxXYZ[i])) + m_sidePlanes[i].b * (m_position.y +
	//     (m_axes[i].y * m_maxXYZ[i])) + m_sidePlanes[i].c * (m_position.z + (m_axes[i].z * m_maxXYZ[i]));
	// }

	Vec tempVec;
	setMaxPlane(&tempVec, 0);
	setMaxPlane(&tempVec, 1);
	setMaxPlane(&tempVec, 2);

	setMinPlane(&tempVec, 0);
	setMinPlane(&tempVec, 1);
	setMinPlane(&tempVec, 2);
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

	mTriIndexList.makeCovarianceMatrix(vertTable, triTable, covar, pos);
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
	if (mTriIndexList.getNum() > p1 && p2 > 0) {
		mTriIndexList.getNum();
		if (divide(vertTable, triTable)) {
			if (mHalfA) {
				mHalfA->autoDivide(vertTable, triTable, p1, p2 - 1);
			}
			if (mHalfB) {
				mHalfB->autoDivide(vertTable, triTable, p1, p2 - 1);
			}
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x128
 */
void OBB::countDivResult(Sys::VertexTable& vertTable, Sys::TriangleTable& triTable, int axis, int& aboveCount, int& belowCount)
{
	Plane plane;
	int numAbove = 0;
	int numBelow = 0;

	plane.updatePlane(mPosition, mAxes[axis]);

	// loop through all triangles
	for (int j = 0; j < mTriIndexList.mCount; j++) {
		Triangle* currTri = &triTable.mObjects[mTriIndexList.mObjects[j]];
		f32 triDist       = currTri->calcDist(plane, vertTable);
		if (triDist > 0.0f) { // triangle above plane
			numAbove += 1;
		} else if (triDist < 0.0f) { // triangle below plane
			numBelow += 1;
		} else { // triangle 'in' plane
			numAbove += 1;
			numBelow += 1;
		}
	}

	aboveCount = numAbove;
	belowCount = numBelow;
}

/**
 * @note Address: 0x8041DA10
 * @note Size: 0x1C4
 */
void OBB::determineDivPlane(Sys::VertexTable& vertTable, Sys::TriangleTable& triTable)
{
	int axisID = 0;
	int min    = 100000000; // 100 million

	// loop through axes of box
	for (int i = 0; i < 3; i++) {
		int numAbove;
		int numBelow;
		countDivResult(vertTable, triTable, i, numAbove, numBelow);

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

	// divPlane has normal = axis with min cuts, and goes through center/position of box
	Plane plane;
	plane.updatePlane(mPosition, mAxes[axisID]);
	mDivPlane = plane;
}

/**
 * @note Address: 0x8041DBD4
 * @note Size: 0x480
 */
bool OBB::divide(Sys::VertexTable& vertTable, Sys::TriangleTable& triTable)
{
	determineDivPlane(vertTable, triTable);
	int i;
	bool checkAbove = true;
	bool checkBelow = true;
	int numAbove    = 0;
	int numBelow    = 0;

	for (i = 0; i < mTriIndexList.mCount; i++) {
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

	mHalfA->mTriIndexList.alloc(numAbove);
	mHalfB->mTriIndexList.alloc(numBelow);

	for (i = 0; i < mTriIndexList.getNum(); i++) {
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

	mHalfA->constructOBB2(vertTable, triTable);
	mHalfB->constructOBB2(vertTable, triTable);

	return true;
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
		dist         = mDivPlane.calcDist(vec);
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
	VertexTable* verts;
	TriangleTable* tris;

	mVertexTable   = vertTable;
	mTriangleTable = triTable;
	getOBB()->mTriIndexList.constructClone(*triTable);

	tris  = mTriangleTable;
	verts = mVertexTable;
	getOBB()->constructOBB2(*verts, *tris);
	getOBB()->autoDivide(*mVertexTable, *mTriangleTable, arg2, arg3);
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
void OBBTree::traceMove(Matrixf& mat1, Matrixf& mat2, Game::MoveInfo& info, f32)
{
	traceMove_new(mat1, mat2, info, 0.0f);
}

/**
 * @note Address: 0x8041EA34
 * @note Size: 0x24
 */
void OBBTree::traceMove_global(Game::MoveInfo& info, f32)
{
	traceMove_new_global(info, 0.0f);
}

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

	Vector3f mid = (intersectEdgeStart + intersectEdgeEnd) * 0.5f;
	f32 radius   = info.mIntersectEdge.mStartPos.qDistance(info.mIntersectEdge.mEndPos);
	Sphere ball(mid, radius);
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
	Sphere* sphere = &info.mBoundingSphere;
	if (isLeaf()) {
		return findRayIntersectionTriList(info, transformationMtx, unused);
	}

	f32 ballDist = mDivPlane.calcDist(sphere->mPosition);

	if (ballDist > sphere->mRadius) {
		if (mHalfA) {
			return mHalfA->findRayIntersection(info, transformationMtx, unused);
		}
		return findRayIntersectionTriList(info, transformationMtx, unused);
	}
	if (ballDist < -sphere->mRadius) {
		if (mHalfB) {
			return mHalfB->findRayIntersection(info, transformationMtx, unused);
		}
		return findRayIntersectionTriList(info, transformationMtx, unused);
	}

	bool intersectA = false;
	if (mHalfA) {
		intersectA = mHalfA->findRayIntersection(info, transformationMtx, unused);
	}
	bool intersectB = false;
	if (mHalfB) {
		intersectB = mHalfB->findRayIntersection(info, transformationMtx, unused);
	}
	return intersectA || intersectB;
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
			f32 sqSep       = sepVec.sqrLength();
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
f32 OBBTree::getMinY(Vector3f& pos)
{
	return getOBB()->getMinY(pos, *mTriangleTable, FLOAT_DIST_MIN);
}

/**
 * @note Address: 0x8041F4E4
 * @note Size: 0x6C0
 */
f32 OBB::getMinY(Vector3f& pos, Sys::TriangleTable& triTable, f32 inputMin)
{
	f32 divDist;

	if (isLeaf()) {
		return getMinYTriList(pos, triTable);
	}

	if (0.0f == mDivPlane.mNormal.y) {
		divDist = mDivPlane.calcDist(pos);
	} else {
		Vector3f planeVec(pos);
		planeVec.y = (mDivPlane.mOffset - mDivPlane.mNormal.x * pos.x - mDivPlane.mNormal.z * pos.z) / mDivPlane.mNormal.y;
		divDist    = mDivPlane.calcDist(planeVec);
	}

	if (divDist > 0.01f) {
		if (mHalfA) {
			f32 minY2 = mHalfA->getMinY(pos, triTable, inputMin);
			return minY2 > inputMin ? minY2 : inputMin;
		}
	} else if (divDist < -0.01f) {
		if (mHalfB) {
			f32 minY2 = mHalfB->getMinY(pos, triTable, inputMin);
			return minY2 > inputMin ? minY2 : inputMin;
		}
	} else {
		f32 minY2 = mHalfA->getMinY(pos, triTable, inputMin);
		if (minY2 > inputMin) {
			inputMin = minY2;
		}

		minY2 = mHalfB->getMinY(pos, triTable, inputMin);
		if (minY2 > inputMin) {
			inputMin = minY2;
		}

		return inputMin;
	}

	return inputMin;
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
