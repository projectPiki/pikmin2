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
void MapMgr::getStartPosition(Vector3f& outPosition, int p2)
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

		BeamCollisionArg beamArg(i, adjustedPos, offset);
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
		for (int i = 0; i < 512; i++) {
			//	path[i] = 0; some wack way of clearing this
		}
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
	char btkPath[256];
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
			char btkPath[256];
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
	file = JKRDvdToMainRam(lightPath, nullptr, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr, nullptr);
	if (file) {
		RamStream stream(file, -1);
		stream.setMode(STREAM_MODE_TEXT, 1);
		if (gameSystem) {
			gameSystem->getLightMgr()->loadParm(stream);
		}
		delete[] file;
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

		file = JKRFileLoader::getGlbResource("waterbox.txt", texts);
		if (file) {
			sys->heapStatusStart("waterbox", nullptr);
			RamStream stream(file, -1);
			stream.setMode(STREAM_MODE_TEXT, 1);
			mSeaMgr->read(stream);
			sys->heapStatusEnd("waterbox");
		}

		file = JKRFileLoader::getGlbResource("mapcode.bin", texts);
		if (file) {
			MapCode::Mgr* mgr = new MapCode::Mgr;
			RamStream stream(file, -1);
			mgr->read(stream);
			mgr->attachCodes(mMapCollision.mDivider->mTriangleTable);
		}
		texts->unmount();
	} else {
		file = JKRDvdToMainRam(arg.mCollisionPath, nullptr, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr, nullptr);
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

	/*
	stwu     r1, -0x2b30(r1)
	mflr     r0
	lis      r5, lbl_8047E190@ha
	stw      r0, 0x2b34(r1)
	stmw     r26, 0x2b18(r1)
	mr       r31, r3
	mr       r29, r4
	addi     r30, r5, lbl_8047E190@l
	addi     r4, r2, lbl_80518860@sda21
	li       r5, 0
	lwz      r3, sys@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_805188B0@sda21
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	lwz      r5, 0(r29)
	addi     r3, r1, 0x810
	addi     r4, r30, 0x24
	crclr    6
	bl       sprintf
	addi     r3, r1, 0x810
	li       r4, 1
	li       r5, 0
	li       r6, 1
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	cmplwi   r3, 0
	bne      lbl_801631A8
	li       r0, 0xc
	li       r3, 0
	mtctr    r0

lbl_80163164:
	addi     r3, r3, 8
	bdnz     lbl_80163164
	subfic   r0, r3, 0x64
	mtctr    r0
	cmpwi    r3, 0x64
	bge      lbl_80163180

lbl_8016317C:
	bdnz     lbl_8016317C

lbl_80163180:
	lwz      r5, 0(r29)
	addi     r3, r1, 0x810
	addi     r4, r30, 0x30
	crclr    6
	bl       sprintf
	addi     r3, r1, 0x810
	li       r4, 1
	li       r5, 0
	li       r6, 1
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection

lbl_801631A8:
	cmplwi   r3, 0
	bne      lbl_801631C4
	addi     r3, r30, 0xc
	addi     r5, r30, 0x18
	li       r4, 0x2d0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801631C4:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_805188B0@sda21
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x3c
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	addi     r3, r30, 0x48
	li       r4, 0
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	or.      r27, r3, r3
	li       r4, 0
	beq      lbl_80163208
	lwz      r0, 0(r29)
	cmplwi   r0, 0
	beq      lbl_80163208
	li       r4, 1

lbl_80163208:
	clrlwi.  r0, r4, 0x18
	bne      lbl_80163224
	addi     r3, r30, 0xc
	addi     r5, r30, 0x18
	li       r4, 0x2d9
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80163224:
	mr       r3, r27
	lis      r4, 0x2004
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	lis      r4, 4
	mr       r27, r3
	bl       newSharedDisplayList__12J3DModelDataFUl
	mr       r3, r27
	bl       makeSharedDL__12J3DModelDataFv
	li       r3, 0x14
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80163268
	mr       r4, r27
	lis      r5, 2
	li       r6, 2
	bl       __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
	mr       r0, r3

lbl_80163268:
	stw      r0, 0x34(r31)
	li       r4, 0x200
	lwz      r3, 0x34(r31)
	lwz      r3, 8(r3)
	bl       newDifferedDisplayList__8J3DModelFUl
	lwz      r3, 0x34(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x34(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x34(r31)
	lwz      r3, 8(r3)
	bl       makeDL__8J3DModelFv
	lwz      r3, 0x34(r31)
	lwz      r3, 8(r3)
	bl       lock__8J3DModelFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x3c
	bl       heapStatusEnd__6SystemFPc
	li       r3, 0x40
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801632EC
	li       r4, 2
	bl       __ct__Q34Game4Farm7FarmMgrFUl
	mr       r0, r3

lbl_801632EC:
	stw      r0, farmMgr__Q24Game4Farm@sda21(r13)
	li       r27, 0

lbl_801632F4:
	addi     r3, r1, 0x610
	addi     r4, r30, 0x54
	addi     r5, r27, 1
	crclr    6
	bl       sprintf
	addi     r3, r1, 0x610
	li       r4, 0
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	or.      r4, r3, r3
	beq      lbl_80163330
	lwz      r3, farmMgr__Q24Game4Farm@sda21(r13)
	bl       addFarmBmd__Q34Game4Farm7FarmMgrFPv
	addi     r27, r27, 1
	cmpwi    r27, 0xa
	blt      lbl_801632F4

lbl_80163330:
	lwz      r3, 0x34(r31)
	li       r4, 0
	bl       enableMaterialAnim__Q28SysShape5ModelFi
	li       r0, 0
	li       r27, 0
	stw      r0, 0x24(r31)
	stw      r0, 0x2c(r31)

lbl_8016334C:
	addi     r3, r1, 0x110
	addi     r4, r30, 0x60
	addi     r5, r27, 1
	crclr    6
	bl       sprintf
	addi     r3, r1, 0x110
	li       r4, 0
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	cmplwi   r3, 0
	beq      lbl_8016338C
	lwz      r3, 0x24(r31)
	addi     r27, r27, 1
	cmpwi    r27, 0x64
	addi     r0, r3, 1
	stw      r0, 0x24(r31)
	blt      lbl_8016334C

lbl_8016338C:
	lwz      r0, 0x24(r31)
	cmpwi    r0, 0
	ble      lbl_80163478
	stw      r0, 0x2c(r31)
	lwz      r28, 0x24(r31)
	slwi     r3, r28, 4
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q23Sys15MatTexAnimationFv@ha
	mr       r7, r28
	addi     r4, r4, __ct__Q23Sys15MatTexAnimationFv@l
	li       r5, 0
	li       r6, 0x10
	bl       __construct_new_array
	stw      r3, 0x28(r31)
	lwz      r28, 0x2c(r31)
	mulli    r3, r28, 0xc
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q23Sys15MatLoopAnimatorFv@ha
	mr       r7, r28
	addi     r4, r4, __ct__Q23Sys15MatLoopAnimatorFv@l
	li       r5, 0
	li       r6, 0xc
	bl       __construct_new_array
	li       r27, 0
	stw      r3, 0x30(r31)
	mr       r28, r27
	li       r26, 0
	b        lbl_8016346C

lbl_80163404:
	addi     r3, r1, 0x10
	addi     r4, r30, 0x60
	addi     r5, r26, 1
	crclr    6
	bl       sprintf
	addi     r3, r1, 0x10
	li       r4, 0
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	lwz      r4, 0x34(r31)
	lwz      r0, 0x28(r31)
	lwz      r5, 8(r4)
	mr       r4, r3
	add      r3, r0, r27
	lwz      r5, 4(r5)
	bl       attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
	lwz      r3, 0x30(r31)
	lwz      r0, 0x28(r31)
	add      r3, r3, r28
	lwz      r12, 0(r3)
	add      r4, r0, r27
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r27, r27, 0x10
	addi     r28, r28, 0xc
	addi     r26, r26, 1

lbl_8016346C:
	lwz      r0, 0x24(r31)
	cmpw     r26, r0
	blt      lbl_80163404

lbl_80163478:
	lwz      r3, 0x34(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r5, 4(r29)
	addi     r3, r1, 0x410
	addi     r4, r30, 0x70
	crclr    6
	bl       sprintf
	li       r0, 0
	addi     r3, r1, 0x410
	stw      r0, 8(r1)
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 2
	li       r9, 0
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	or.      r28, r3, r3
	beq      lbl_80163520
	mr       r4, r28
	addi     r3, r1, 0x26f0
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x26fc(r1)
	bne      lbl_80163500
	li       r0, 0
	stw      r0, 0x2b04(r1)

lbl_80163500:
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80163518
	bl       getLightMgr__Q24Game10GameSystemFv
	addi     r4, r1, 0x26f0
	bl       loadParm__Q24Game12GameLightMgrFR6Stream

lbl_80163518:
	mr       r3, r28
	bl       __dla__FPv

lbl_80163520:
	lwz      r5, 0(r29)
	addi     r3, r1, 0x210
	addi     r4, r30, 0x80
	crclr    6
	bl       sprintf
	lwz      r5, sCurrentHeap__7JKRHeap@sda21(r13)
	addi     r3, r1, 0x210
	li       r4, 1
	li       r6, 2
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	or.      r28, r3, r3
	beq      lbl_80163684
	mr       r4, r28
	addi     r3, r30, 0x90
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	or.      r26, r3, r3
	bne      lbl_80163578
	addi     r3, r30, 0xc
	addi     r5, r30, 0x18
	li       r4, 0x377
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80163578:
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x9c
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	mr       r4, r26
	addi     r3, r1, 0x22d0
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	addi     r3, r31, 0x38
	addi     r4, r1, 0x22d0
	bl       read__12MapCollisionFR6Stream
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x9c
	bl       heapStatusEnd__6SystemFPc
	mr       r4, r28
	addi     r3, r30, 0xac
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	or.      r26, r3, r3
	beq      lbl_80163614
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0xbc
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	mr       r4, r26
	addi     r3, r1, 0x1eb0
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x1ebc(r1)
	bne      lbl_801635FC
	li       r0, 0
	stw      r0, 0x22c4(r1)

lbl_801635FC:
	lwz      r3, 0x10(r31)
	addi     r4, r1, 0x1eb0
	bl       read__Q24Game6SeaMgrFR6Stream
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0xbc
	bl       heapStatusEnd__6SystemFPc

lbl_80163614:
	mr       r4, r28
	addi     r3, r30, 0xc8
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	or.      r26, r3, r3
	beq      lbl_8016366C
	li       r3, 0x28
	bl       __nw__FUl
	or.      r27, r3, r3
	beq      lbl_80163640
	bl       __ct__Q27MapCode3MgrFv
	mr       r27, r3

lbl_80163640:
	mr       r4, r26
	addi     r3, r1, 0x1a90
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	mr       r3, r27
	addi     r4, r1, 0x1a90
	bl       read__Q27MapCode3MgrFR6Stream
	lwz      r4, 0x50(r31)
	mr       r3, r27
	lwz      r4, 0x1c(r4)
	bl       attachCodes__Q27MapCode3MgrFPQ23Sys13TriangleTable

lbl_8016366C:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_80163808

lbl_80163684:
	li       r0, 0
	li       r4, 0
	stw      r0, 8(r1)
	li       r5, 0
	li       r6, 0
	li       r7, 0
	lwz      r3, 0xc(r29)
	li       r8, 2
	li       r9, 0
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	mr       r27, r3
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x9c
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	mr       r4, r27
	addi     r3, r1, 0x1670
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	addi     r3, r31, 0x38
	addi     r4, r1, 0x1670
	bl       read__12MapCollisionFR6Stream
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x9c
	bl       heapStatusEnd__6SystemFPc
	mr       r3, r27
	bl       __dla__FPv
	lwz      r3, 0x10(r29)
	cmplwi   r3, 0
	beq      lbl_80163784
	li       r0, 0
	li       r4, 0
	stw      r0, 8(r1)
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 2
	li       r9, 0
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	mr       r27, r3
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0xbc
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	mr       r4, r27
	addi     r3, r1, 0x1250
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x125c(r1)
	bne      lbl_80163764
	li       r0, 0
	stw      r0, 0x1664(r1)

lbl_80163764:
	lwz      r3, 0x10(r31)
	addi     r4, r1, 0x1250
	bl       read__Q24Game6SeaMgrFR6Stream
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0xbc
	bl       heapStatusEnd__6SystemFPc
	mr       r3, r27
	bl       __dla__FPv

lbl_80163784:
	lwz      r3, 0x14(r29)
	cmplwi   r3, 0
	beq      lbl_80163808
	li       r0, 0
	li       r4, 0
	stw      r0, 8(r1)
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 2
	li       r9, 0
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	mr       r27, r3
	li       r3, 0x28
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_801637D4
	bl       __ct__Q27MapCode3MgrFv
	mr       r28, r3

lbl_801637D4:
	mr       r4, r27
	addi     r3, r1, 0xe30
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	mr       r3, r28
	addi     r4, r1, 0xe30
	bl       read__Q27MapCode3MgrFR6Stream
	lwz      r4, 0x50(r31)
	mr       r3, r28
	lwz      r4, 0x1c(r4)
	bl       attachCodes__Q27MapCode3MgrFPQ23Sys13TriangleTable
	mr       r3, r27
	bl       __dla__FPv

lbl_80163808:
	lwz      r3, 0x1c(r29)
	cmplwi   r3, 0
	beq      lbl_801638CC
	li       r0, 0
	li       r4, 0
	stw      r0, 8(r1)
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 2
	li       r9, 0
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	mr       r27, r3
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0xd4
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	mr       r4, r27
	addi     r3, r1, 0xa10
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0xa1c(r1)
	bne      lbl_80163878
	li       r0, 0
	stw      r0, 0xe24(r1)

lbl_80163878:
	lwz      r0, 8(r31)
	cmplwi   r0, 0
	bne      lbl_801638A0
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8016389C
	bl       __ct__Q24Game12GameRouteMgrFv
	mr       r0, r3

lbl_8016389C:
	stw      r0, 8(r31)

lbl_801638A0:
	lwz      r3, 8(r31)
	addi     r4, r1, 0xa10
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0xd4
	bl       heapStatusEnd__6SystemFPc
	mr       r3, r27
	bl       __dla__FPv

lbl_801638CC:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80518860@sda21
	bl       heapStatusEnd__6SystemFPc
	lmw      r26, 0x2b18(r1)
	lwz      r0, 0x2b34(r1)
	mtlr     r0
	addi     r1, r1, 0x2b30
	blr
	*/
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

/**
 * @note Address: 0x80163FE0
 * @note Size: 0x80
 */
void ShapeMapMgr::getBoundBox2d(BoundBox2d& bounds)
{
	BoundBox calc;
	mMapCollision.mDivider->getBoundBox(calc);
	bounds.fromBoundBox(calc);
}

/**
 * @note Address: 0x80164060
 * @note Size: 0x90
 */
void ShapeMapMgr::getBoundBox(BoundBox& bounds)
{
	BoundBox calc;
	mMapCollision.mDivider->getBoundBox(calc);
	bounds = calc;
}

static const char unusedString1[] = "loop av. %.1f";
static const char unusedString2[] = "%d %d %d<%d>";
static const char unusedString3[] = "tris av. %.1f";

} // namespace Game
