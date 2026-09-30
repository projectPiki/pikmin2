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

	// fun fact! these seem to have to be in separate blocks/scopes to make registers work
	// how fun is that! so fun! ha ha!
	// this sure looks like an inline! or a loop! but guess what!
	// the last block has flipped registers as if it uses operator+ instead of element-wise addition
	// this is all just pain.
	Vec tempVec;
	{
		tempVec.x          = mAxes[0].x;
		tempVec.y          = mAxes[0].y;
		tempVec.z          = mAxes[0].z;
		Vector3f scaledVec = Vector3f(tempVec) * mMaxXYZ[0];
		Vector3f point;
		point.x = mPosition.x + scaledVec.x;
		point.y = mPosition.y + scaledVec.y;
		point.z = mPosition.z + scaledVec.z;
		setMaxPlane(&tempVec, 0, point);
	}
	{
		tempVec.x          = mAxes[1].x;
		tempVec.y          = mAxes[1].y;
		tempVec.z          = mAxes[1].z;
		Vector3f scaledVec = Vector3f(tempVec) * mMaxXYZ[1];
		Vector3f point;
		point.x = mPosition.x + scaledVec.x;
		point.y = mPosition.y + scaledVec.y;
		point.z = mPosition.z + scaledVec.z;
		setMaxPlane(&tempVec, 1, point);
	}
	{
		tempVec.x          = mAxes[2].x;
		tempVec.y          = mAxes[2].y;
		tempVec.z          = mAxes[2].z;
		Vector3f scaledVec = Vector3f(tempVec) * mMaxXYZ[2];
		Vector3f point;
		point.x = mPosition.x + scaledVec.x;
		point.y = mPosition.y + scaledVec.y;
		point.z = mPosition.z + scaledVec.z;
		setMaxPlane(&tempVec, 2, point);
	}
	{
		tempVec.x          = mAxes[0].x;
		tempVec.y          = mAxes[0].y;
		tempVec.z          = mAxes[0].z;
		Vector3f scaledVec = Vector3f(tempVec) * mMinXYZ[0];
		Vector3f point;
		point.x = mPosition.x + scaledVec.x;
		point.y = mPosition.y + scaledVec.y;
		point.z = mPosition.z + scaledVec.z;
		setMinPlane(&tempVec, 0, point);
	}
	{
		tempVec.x          = mAxes[1].x;
		tempVec.y          = mAxes[1].y;
		tempVec.z          = mAxes[1].z;
		Vector3f scaledVec = Vector3f(tempVec) * mMinXYZ[1];
		Vector3f point;
		point.x = mPosition.x + scaledVec.x;
		point.y = mPosition.y + scaledVec.y;
		point.z = mPosition.z + scaledVec.z;
		setMinPlane(&tempVec, 1, point);
	}
	{
		tempVec.x          = mAxes[2].x;
		tempVec.y          = mAxes[2].y;
		tempVec.z          = mAxes[2].z;
		Vector3f scaledVec = Vector3f(tempVec) * mMinXYZ[2];
		Vector3f point     = mPosition + scaledVec;
		setMinPlane(&tempVec, 2, point);
	}
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
void OBBTree::write(Stream& output)
{
	mVertexTable->write(output);
	mTriangleTable->write(output);
	getOBB()->write(output);
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
void OBBTree::writeVertsOnly(Stream& output)
{
	mVertexTable->write(output);
}

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
void OBBTree::writeWithoutVerts(Stream& output)
{
	mTriangleTable->write(output);
	getOBB()->write(output);
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
