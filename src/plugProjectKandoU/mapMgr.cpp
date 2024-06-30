#include "Game/MapMgr.h"
#include "Game/gameStages.h"
#include "Game/GameSystem.h"
#include "Game/TDispTriangle.h"
#include "Game/PlatInstance.h"
#include "Sys/TriangleTable.h"
#include "Sys/RayIntersectInfo.h"
#include "JSystem/J3D/J3DModelLoader.h"
#include "Game/GameLight.h"
#include "Game/Farm.h"
#include "Game/seaMgr.h"
#include "nans.h"

static const int padding[] = { 0, 0, 0 };

static void _Print(char* format, ...) { OSReport("mapMgr"); }

namespace Game {

MapMgr* mapMgr;
bool MapMgr::traceMoveDebug;

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
TDispTriangleArray::TDispTriangleArray()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x68
 */
void TDispTriangleArray::alloc(int)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
TDispTriangle::TDispTriangle()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
void TDispTriangleArray::clear()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8016239C
 * @note Size: 0x44
 */
void TDispTriangleArray::store(Sys::Triangle& triangle, Sys::VertexTable& vertexTable, int p3)
{
	if (mUsedCount < mTotalCount) {
		mItems[mUsedCount++].store(triangle, vertexTable, p3);
	}
}

/**
 * @note Address: 0x801623E0
 * @note Size: 0x44
 */
void TDispTriangleArray::store(Matrixf& mtx, Sys::Triangle& triangle, Sys::VertexTable& vertexTable, int index)
{
	if (mUsedCount < mTotalCount) {
		mItems[mUsedCount++].store(mtx, triangle, vertexTable, index);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
void TDispTriangleArray::draw(Graphics&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80162424
 * @note Size: 0xC0
 */
void TDispTriangle::store(Sys::Triangle& triangle, Sys::VertexTable& vertexTable, int index)
{
	mSysTriangle = &triangle;
	mVertices[0] = vertexTable.mObjects[triangle.mVertices[0]];
	mVertices[1] = vertexTable.mObjects[triangle.mVertices[1]];
	mVertices[2] = vertexTable.mObjects[triangle.mVertices[2]];
	mFlags.clear();
	mFlags.typeView |= 1;
	mIndex = index;
	PSMTXIdentity(mMatrix.mMatrix.mtxView);
}

/**
 * @note Address: 0x801624E4
 * @note Size: 0x100
 */
void TDispTriangle::store(Matrixf& mtx, Sys::Triangle& tri, Sys::VertexTable& vertTable, int index)
{
	mSysTriangle = &tri;
	mVertices[0] = mtx.mtxMult(vertTable.mObjects[tri.mVertices[0]]);
	mVertices[1] = mtx.mtxMult(vertTable.mObjects[tri.mVertices[1]]);
	mVertices[2] = mtx.mtxMult(vertTable.mObjects[tri.mVertices[2]]);
	mFlags.clear();
	mFlags.typeView |= 1;
	mIndex = index;
	PSMTXCopy(mtx.mMatrix.mtxView, mMatrix.mMatrix.mtxView);
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void TDispTriangle::draw(Graphics&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x801625E4
 * @note Size: 0x98
 */
MapMgr::MapMgr()
{
	mSeaMgr     = new SeaMgr;
	mRouteMgr   = nullptr;
	mCourseInfo = nullptr;
}

/**
 * @note Address: 0x8016267C
 * @note Size: 0x7C
 */
void MapMgr::getStartPosition(Vector3f& outPosition, int unused)
{
	if (mCourseInfo) {
		outPosition   = mCourseInfo->mStartPosition;
		outPosition.y = getMinY(outPosition) + 8.5f;
	} else {
		outPosition = Vector3f(0.0f);
	}
}

/**
 * @note Address: 0x801626F8
 * @note Size: 0x2C
 */
f32 MapMgr::getMapRotation()
{
	if (mCourseInfo) {
		return TORADIANS(mCourseInfo->mStartAngle);
	}

	return 0.0f;
}

/**
 * @note Address: 0x80162724
 * @note Size: 0x1C
 */
Matrixf* MapMgr::getDemoMatrix() { return (mCourseInfo) ? &mCourseInfo->mDemoMatrix : nullptr; }

/**
 * @note Address: 0x80162740
 * @note Size: 0x704
 */
f32 MapMgr::getBestAngle(Vector3f& position, f32 distance, f32 divisor)
{
	P2ASSERTLINE(488, divisor > 0.0f);
	Vector3f adjustedPos = position;
	adjustedPos.y        = 15.0f + getMinY(adjustedPos);

	f32 angles[16]; // 0x7C
	for (int i = 0; i < 16; i++) {
		angles[i] = 0.0f;
	}

	// Shoot 16 beams, 22.5 degrees apart from each other (PI / 8)
	for (int i = 0; i < 16; i++) {
		f32 angle    = (PI / 8) * (f32)i;
		f32 tanTheta = tanf_kludge(divisor) * distance;

		Vector3f offset(distance * sinf(angle), tanTheta, distance * cosf(angle));
		offset = offset + adjustedPos;

		BeamCollisionArg beamArg;
		beamArg.setup(i, adjustedPos, offset);
		checkBeamCollision(beamArg);
		angles[i] = beamArg.mTargetDistance;
	}

	// Average and smooth out the angles
	f32 averagedAngles[16]; // 0x14
	for (int i = 0; i < 16; i++) {
		averagedAngles[i] = 0.0f;
		averagedAngles[i] = (angles[(i + 15) % 16] + angles[(i) % 16] + angles[(i + 1) % 16]) / 3.0f;
	}

	for (int i = 0; i < 16; i++) {
		angles[i] = averagedAngles[i];
	}

	// Find the best angle
	f32 bestAngle    = FLOAT_DIST_MAX;
	int bestAngleNum = 0;
	for (int i = 0; i < 16; i++) {
		if (bestAngle > angles[i]) {
			bestAngle    = angles[i];
			bestAngleNum = i;
		}
	}

	return (f32)bestAngleNum * (PI / 8);
}

/**
 * @note Address: 0x80162E44
 * @note Size: 0x2A4
 */
void MapMgr::checkBeamCollision(BeamCollisionArg& arg)
{
	arg.mHitSuccess     = 0;
	arg.mTargetDistance = 9.9999998E+10f;

	Vector3f sep = arg.mTargetPosition - arg.mPosition;
	f32 dist     = sep.normalise();

	if (dist == 0.0f) {
		return;
	}

	f32 norm              = dist / 30.0f;
	Vector3f prevVelocity = sep * norm;

	Sys::Sphere sphere(arg.mPosition, arg.mBeamRadius);
	Vector3f velocity;

	for (int i = 0; i < 30; i++) {
		velocity         = prevVelocity;
		sphere.mPosition = arg.mPosition;
		MoveInfo moveInfo(&sphere, &velocity, 1.0f);

		traceMove(moveInfo, 1.0f);
		if (platMgr) {
			platMgr->traceMove(moveInfo, 1.0f);
		}

		if (moveInfo.mWallTriangle || moveInfo.mFloorTriangle || moveInfo.mOtherTriangle) {
			arg.mHitSuccess = true;
			break;
		}

		arg.mPosition = sphere.mPosition;
		prevVelocity  = velocity;
	}

	Vector3f sep2       = arg.mTargetPosition - arg.mPosition;
	arg.mTargetDistance = sep2.length();
}

/**
 * @note Address: 0x801630E8
 * @note Size: 0x804
 */
void ShapeMapMgr::load(LoadArg& arg)
{
	sys->heapStatusStart("mapMgr", nullptr);

	sys->heapStatusStart("map arc", nullptr);

	char path[512];
	sprintf(path, "%s/arc.szs", arg.mFolder);
	JKRArchive* arc = JKRMountArchive(path, JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	if (!arc) {
		// what was this even here for.
		int count = 0;
		for (int i = 0; i < 96; i++, count++) { }
		for (int i = count; i < 100; i++) { }
		sprintf(path, "%s/arc.arc", arg.mFolder);
		arc = JKRMountArchive(path, JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	}
	P2ASSERTLINE(720, arc);
	sys->heapStatusEnd("map arc");

	sys->heapStatusStart("map model", nullptr);
	void* file = JKRFileLoader::getGlbResource("model.bmd", nullptr);
	P2ASSERTBOOLLINE(729, file && arg.mFolder);
	J3DModelData* model = J3DModelLoaderDataBase::load(file, 0x20040000);
	model->newSharedDisplayList(0x40000);
	model->makeSharedDL();
	mMapModel = new SysShape::Model(model, J3DMODEL_CreateNewDL, 2);
	mMapModel->getJ3DModel()->newDifferedDisplayList(0x200);
	mMapModel->getJ3DModel()->calc();
	mMapModel->getJ3DModel()->calcMaterial();
	mMapModel->getJ3DModel()->makeDL();
	mMapModel->getJ3DModel()->lock();
	sys->heapStatusEnd("map model");

	Farm::farmMgr = new Farm::FarmMgr(2);
	char farmPath[512];
	for (int i = 0; i < 10; i++) {
		sprintf(farmPath, "farm_%d.bmd", i + 1);
		void* file = JKRFileLoader::getGlbResource(farmPath, nullptr);
		if (!file)
			break;
		Farm::farmMgr->addFarmBmd(file);
	}

	mMapModel->enableMaterialAnim(0);
	mTexAnimCount  = 0;
	mAnimatorCount = 0;

	// You know, casual 100 .btk files
	char btkPath[PATH_MAX];
	for (int i = 0; i < 100; i++) {
		sprintf(btkPath, "texanm_%d.btk", i + 1);
		void* file = JKRFileLoader::getGlbResource(btkPath, nullptr);
		if (!file)
			break;
		mTexAnimCount++;
	}

	if (mTexAnimCount > 0) {
		mAnimatorCount = mTexAnimCount;
		mTexAnims      = new Sys::MatTexAnimation[mTexAnimCount];
		mMatAnimators  = new Sys::MatLoopAnimator[mAnimatorCount];
		for (int i = 0; i < mTexAnimCount; i++) {
			char btkPath[PATH_MAX];
			sprintf(btkPath, "texanm_%d.btk", i + 1);
			void* file = JKRFileLoader::getGlbResource(btkPath, nullptr);
			mTexAnims[i].attachResource(file, mMapModel->getJ3DModel()->getModelData());
			mMatAnimators[i].start(&mTexAnims[i]);
		}
	}
	mMapModel->getJ3DModel()->calc();

	// Load Lighting data
	char lightPath[512];
	sprintf(lightPath, "%s/light.ini", arg.mAbeFolder);
	void* file2 = JKRDvdToMainRam(lightPath, nullptr, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr, nullptr);
	if (file2) {
		RamStream stream(file2, -1);
		stream.setMode(STREAM_MODE_TEXT, 1);
		if (gameSystem) {
			gameSystem->getLightMgr()->loadParm(stream);
		}
		delete[] file2;
	}

	char textsPath[512];
	sprintf(textsPath, "%s/texts.szs", arg.mFolder);
	JKRArchive* texts = JKRMountArchive(textsPath, JKRArchive::EMM_Mem, JKRGetCurrentHeap(), JKRArchive::EMD_Tail);
	if (texts) {

		void* file = JKRFileLoader::getGlbResource("grid.bin", texts);
		P2ASSERTLINE(887, file);
		sys->heapStatusStart("map collision", nullptr);
		RamStream stream(file, -1);
		mMapCollision.read(stream);
		sys->heapStatusEnd("map collision");

		void* file2 = JKRFileLoader::getGlbResource("waterbox.txt", texts);
		if (file2) {
			sys->heapStatusStart("waterbox", nullptr);
			RamStream stream(file2, -1);
			stream.setMode(STREAM_MODE_TEXT, 1);
			mSeaMgr->read(stream);
			sys->heapStatusEnd("waterbox");
		}

		void* file3 = JKRFileLoader::getGlbResource("mapcode.bin", texts);
		if (file3) {
			MapCode::Mgr* mgr = new MapCode::Mgr;
			RamStream stream(file3, -1);
			mgr->read(stream);
			mgr->attachCodes(mMapCollision.mDivider->mTriangleTable);
		}
		texts->unmount();
	} else {
		void* file
		    = JKRDvdToMainRam(arg.mCollisionPath, nullptr, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr, nullptr);
		sys->heapStatusStart("map collision", nullptr);
		RamStream stream(file, -1);
		mMapCollision.read(stream);
		sys->heapStatusEnd("map collision");
		delete[] file;

		if (arg.mWaterboxPath) {
			void* file
			    = JKRDvdToMainRam(arg.mWaterboxPath, nullptr, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr, nullptr);
			sys->heapStatusStart("waterbox", nullptr);
			RamStream stream(file, -1);
			stream.setMode(STREAM_MODE_TEXT, 1);
			mSeaMgr->read(stream);
			sys->heapStatusEnd("waterbox");
			delete[] file;
		}

		if (arg.mMapcodePath) {
			void* file
			    = JKRDvdToMainRam(arg.mMapcodePath, nullptr, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr, nullptr);
			MapCode::Mgr* mgr = new MapCode::Mgr;
			RamStream stream(file, -1);
			mgr->read(stream);
			mgr->attachCodes(mMapCollision.mDivider->mTriangleTable);
			delete[] file;
		}
	}

	if (arg.mRoutePath) {
		void* file = JKRDvdToMainRam(arg.mRoutePath, nullptr, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr, nullptr);
		sys->heapStatusStart("routeInfo", nullptr);
		RamStream stream(file, -1);
		stream.setMode(STREAM_MODE_TEXT, 1);
		if (!mRouteMgr) {
			mRouteMgr = new GameRouteMgr;
		}
		mRouteMgr->read(stream);
		sys->heapStatusEnd("routeInfo");
		delete[] file;
	}

	sys->heapStatusEnd("mapMgr");
}

/**
 * @note Address: 0x80163928
 * @note Size: 0x34
 */
WaterBox* MapMgr::findWater(::Sys::Sphere& boundingSphere) { return (mSeaMgr != nullptr) ? mSeaMgr->findWater(boundingSphere) : nullptr; }

/**
 * @note Address: 0x8016395C
 * @note Size: 0x9C
 */
void ShapeMapMgr::do_update()
{
	if (gameSystem->paused()) {
		return;
	}
	for (int i = 0; i < mTexAnimCount; i++) {
		mMatAnimators[i].animate(30.0f);
	}
	mMapModel->getJ3DModel()->calcMaterial();
	mMapModel->getJ3DModel()->diff();
}

/**
 * @note Address: 0x801639F8
 * @note Size: 0x50
 */
void MapMgr::update()
{
	clearPerfMonitor();
	if (mSeaMgr != nullptr) {
		mSeaMgr->update();
	}
	do_update();
}

/**
 * @note Address: 0x80163A4C
 * @note Size: 0x18
 */
void MapMgr::clearPerfMonitor()
{
	mTotalTraceCount         = 0;
	mTotalStepCount          = 0;
	mTotalTriCount           = 0;
	mMissedIntersectionCount = 0;
}

/**
 * @note Address: N/A
 * @note Size: 0x258
 */
void MapMgr::draw2d(Graphics&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80163A64
 * @note Size: 0xAC
 */
void ShapeMapMgr::drawCollision(Graphics& gfx, ::Sys::Sphere& boundingSphere)
{
	gfx.initPrimDraw(nullptr);
	gfx.mDrawColor = Color4(50, 255, 10, 255);
	GXSetLineWidth(32, GX_TO_ZERO);
	Sys::TriIndexList* triLists  = mMapCollision.mDivider->findTriLists(boundingSphere);
	Sys::VertexTable& vertTable  = *mMapCollision.mDivider->mVertexTable;
	Sys::TriangleTable& triTable = *mMapCollision.mDivider->mTriangleTable;
	if (triLists) {
		triLists->draw(gfx, vertTable, triTable, true);
	}
}

/**
 * @note Address: 0x80163B10
 * @note Size: 0x2C
 */
void ShapeMapMgr::createTriangles(::Sys::CreateTriangleArg& arg) { mMapCollision.createTriangles(arg); }

/**
 * @note Address: 0x80163B70
 * @note Size: 0x8C
 */
f32 ShapeMapMgr::getMinY(Vector3f& pos)
{
	CurrTriInfo info;
	info.mPosition        = pos;
	info.mUpdateOnNewMaxY = false;

	mMapCollision.getCurrTri(info);
	return info.mMinY;
}

/**
 * @note Address: 0x80163BFC
 * @note Size: 0x2C
 */
void ShapeMapMgr::getCurrTri(CurrTriInfo& info) { mMapCollision.getCurrTri(info); }

/**
 * @note Address: 0x80163C28
 * @note Size: 0x38
 */
void ShapeMapMgr::doAnimation()
{
	if (mSeaMgr) {
		mSeaMgr->doAnimation();
	}
}

/**
 * @note Address: 0x80163C60
 * @note Size: 0x60
 */
void ShapeMapMgr::doSetView(int viewportNumber)
{
	mMapModel->setCurrentViewNo((u16)viewportNumber);
	if (mSeaMgr) {
		mSeaMgr->doSetView(viewportNumber);
	}
}

/**
 * @note Address: 0x80163CC0
 * @note Size: 0x4C
 */
void ShapeMapMgr::doViewCalc()
{
	if (mSeaMgr) {
		mSeaMgr->doViewCalc();
	}

	mMapModel->viewCalc();
}

/**
 * @note Address: 0x80163D0C
 * @note Size: 0xC0
 */
void ShapeMapMgr::doEntry()
{
	sys->mTimers->_start("ENT-MAP", true);
	if (gameSystem != nullptr) {
		if (mSeaMgr != nullptr) {
			mSeaMgr->doEntry();
		}
		gameSystem->setDrawBuffer(2);
		mMapModel->getJ3DModel()->entry();
		gameSystem->setDrawBuffer(0);
	} else {
		mMapModel->getJ3DModel()->entry();
	}
	sys->mTimers->_stop("ENT-MAP");
}

/**
 * Finds the intersection point between a ray and the map's collision geometry.
 *
 * @param info The ray intersection information.
 * @return True if an intersection is found, false otherwise.
 *
 * @note Address: 0x80163DCC
 * @note Size: 0x214
 */
bool ShapeMapMgr::findRayIntersection(Sys::RayIntersectInfo& info)
{
	Vector3f startPos = info.mIntersectEdge.mStartPos;
	Vector3f endPos   = info.mIntersectEdge.mEndPos;
	f32 edgeLen       = startPos.distance(endPos);

	Vector3f midPoint = (startPos + info.mIntersectEdge.mEndPos) / 2;
	Sys::Sphere sphere;
	sphere.mRadius   = edgeLen;
	sphere.mPosition = midPoint;

	Sys::TriIndexList* triList = mMapCollision.mDivider->findTriLists(sphere);
	Vector3f closestIntersectionPoint;
	f32 minDist = 1.28E7f;

	bool intersectionFound = false;
	// Iterate through all the triangles in the list
	for (; triList; triList = static_cast<Sys::TriIndexList*>(triList->mNext)) {
		for (int i = 0; i < triList->getNum(); i++) {
			// Get the triangle
			Sys::Triangle* tri = mMapCollision.mDivider->mTriangleTable->getTriangle(triList->mObjects[i]);

			// Check if the triangle intersects with the ray
			Vector3f currIntersectionPoint;
			if (info.condition(*tri) && tri->intersect(info.mIntersectEdge, info.mRadius, currIntersectionPoint)) {
				intersectionFound = true;

				// Check if the intersection point is closer to the start position
				f32 distance = currIntersectionPoint.sqrDistance(startPos);
				if (currIntersectionPoint.sqrDistance(startPos) < minDist) {
					closestIntersectionPoint = currIntersectionPoint;
					info.mNormalY            = tri->mTrianglePlane.mNormal.y;
					minDist                  = distance;
				}
			}
		}
	}

	info.mIntersectPosition = closestIntersectionPoint;
	return intersectionFound;
}

static const char unusedString1[] = "loop av. %.1f";
static const char unusedString2[] = "%d %d %d<%d>";
static const char unusedString3[] = "tris av. %.1f";

} // namespace Game
