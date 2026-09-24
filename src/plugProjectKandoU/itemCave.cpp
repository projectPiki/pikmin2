#include "Game/Entities/ItemCave.h"
#include "Game/Entities/ItemBarrel.h"
#include "Game/gamePlayData.h"
#include "Game/Navi.h"
#include "Platform.h"
#include "Radar.h"
#include "nans.h"
#include "utilityU.h"
#include "SoundID.h"

static const int padding[]    = { 0, 0, 0 };
static const char className[] = "itemCave";

namespace Game {
namespace ItemCave {

Mgr* mgr;

/**
 * @note Address: 0x801E9FB8
 * @note Size: 0xD8
 */
void FSM::init(Item*)
{
	create(CAVESTATE_StateCount);
	registerState(new NormalState);
	registerState(new OpenState);
}

/**
 * @note Address: 0x801EA090
 * @note Size: 0x4
 */
void NormalState::init(Item*, StateArg*)
{
}

/**
 * @note Address: 0x801EA094
 * @note Size: 0x4
 */
void NormalState::exec(Item*)
{
}

/**
 * @note Address: 0x801EA098
 * @note Size: 0x4
 */
void NormalState::cleanup(Item*)
{
}

/**
 * @note Address: 0x801EA09C
 * @note Size: 0x4
 */
void OpenState::init(Item*, StateArg*)
{
}

/**
 * @note Address: 0x801EA0A0
 * @note Size: 0x4
 */
void OpenState::exec(Item*)
{
}

/**
 * @note Address: 0x801EA0A4
 * @note Size: 0x4
 */
void OpenState::cleanup(Item*)
{
}

/**
 * @note Address: 0x801EA0A8
 * @note Size: 0xE4
 */
Item::Item()
    : FSMItem<Item, FSM, State>(OBJTYPE_Cave)
{
	mCaveFilename   = nullptr;
	_1E4            = nullptr;
	mLightEventNode = nullptr;
}

/**
 * @note Address: 0x801EA18C
 * @note Size: 0x2B4
 */
FogParm::FogParm()
    : Parameters(nullptr, "FogParm")
    , mStartZ(this, 'fg00', "startZ", 32.0f, 1.0f, 12800.0f)
    , mEndZ(this, 'fg01', "endZ", 1200.0f, 1.0f, 12800.0f)
    , mStartTime(this, 'fg02', "startTime", 2.0f, 0.0f, 30.0f)
    , mEndTime(this, 'fg03', "endTime", 2.0f, 0.0f, 30.0f)
    , mRed(this, 'fg04', "Red", 10, 0, 255)
    , mGreen(this, 'fg05', "Green", 110, 0, 255)
    , mBlue(this, 'fg06', "Blue", 118, 0, 255)
    , mDistance(this, 'fg07', "Distance", 2000.0f, 0.0f, 12800.0f)
    , mEnterDistance(this, 'fg08', "Enter Dist", 190.0f, 0.0f, 12800.0f)
    , mExitDistance(this, 'fg09', "Exit  Dist", 240.0f, 0.0f, 12800.0f)

{
}

/**
 * @note Address: 0x801EA440
 * @note Size: 0x78
 */
void Item::onInit(CreatureInitArg* arg)
{
	mNodeItemMgr->setup(this);
	mFsm->start(this, CAVESTATE_Normal, nullptr);
	setAlive(true);
}

/**
 * @note Address: 0x801EA4EC
 * @note Size: 0x44
 */
void Item::makeTrMatrix()
{
	Vector3f angle(0.0f, mFaceDir, 0.0f);
	mBaseTrMatrix.makeTR(mPosition, angle);
}

/**
 * @note Address: 0x801EA530
 * @note Size: 0x264
 */
void Item::onSetPosition()
{
	mBoundingSphere.mPosition = mPosition;
	mBoundingSphere.mRadius   = 50.0f;
	mEfxWarpZone              = new efx::WarpZone;

	if (gameSystem->mSection->getCurrentCourseInfo()) {
		int courseIndex = gameSystem->mSection->getCurrentCourseInfo()->mCourseIndex;
		if (playData->isCaveFirstTime(courseIndex, mCaveID)) {
			Radar::Mgr::entry(this, Radar::MAP_UNENTERED_CAVE, mCaveID.getID());
		} else {
			if (complete()) {
				Radar::Mgr::entry(this, Radar::MAP_COMPLETED_CAVE, mCaveID.getID());
			} else {
				Radar::Mgr::entry(this, Radar::MAP_INCOMPLETE_CAVE, mCaveID.getID());
			}
		}
	}

	if (complete()) {
		mBoundingSphere.mRadius = 65.0f;
	}
	makeTrMatrix();
	PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
	mModel->mJ3dModel->calc();

	Matrixf* mtx = mModel->mJoints->getWorldMatrix();
	ID32 id('futa');
	PlatAddInstanceArg arg;
	arg.mItem     = this;
	arg.mId       = id;
	arg.mPlatform = mgr->mPlatformA;
	arg.mMatrix   = mtx;
	arg.mRadius   = 75.0f;
	arg.mMatrix->print("*** ITEMCAVE MAT\n");
	mPlatformA = platMgr->addInstance(arg);

	ID32 id2('side');
	PlatAddInstanceArg arg2;
	arg2.mItem     = this;
	arg2.mId       = id2;
	arg2.mPlatform = mgr->mPlatformB;
	arg2.mMatrix   = mtx;
	arg2.mRadius   = 75.0f;
	mPlatformB     = platMgr->addInstance(arg2);

	mPlatformA->setCollision(true);
	mPlatformB->setCollision(true);
}

/**
 * @note Address: 0x801EA794
 * @note Size: 0x314
 */
void Item::initDependency()
{
	Iterator<BaseItem> iterator(ItemBarrel::mgr);
	CI_LOOP(iterator)
	{
		ItemBarrel::Item* item = static_cast<ItemBarrel::Item*>(*iterator);
		if (item->isAlive()) {
			Vector3f sep   = item->getPosition() - getPosition();
			Vector2f sep2D = Vector2f(sep.x, sep.z);
			if (sep2D.length() < 40.0f) {
				mBarrel = item;
				return;
			}
		}
	}

	if (!complete()) {
		efx::Arg arg;
		arg.mPosition = mPosition;
		mEfxWarpZone->create(&arg);
	}
	mBarrel = nullptr;
}

/**
 * @note Address: 0x801EAAA8
 * @note Size: 0x8C
 */
bool Item::sound_culling()
{
	Navi* navi = naviMgr->getActiveNavi();
	if (navi) {
		Vector3f pos = navi->getPosition();
		if (pos.sqrDistance2D(mPosition) >= SQUARE(700.0f)) {
			return true;
		}
	}
	return false;
}

/**
 * @note Address: 0x801EAB34
 * @note Size: 0x5C
 */
void Item::changeMaterial()
{
	if (!complete()) {
		mModel->jointVisible(false, mModel->getJoint("flag")->mJointIndex);
	}
}

#pragma auto_inline off
/**
 * @note Address: 0x801EAB90
 * @note Size: 0x14C
 */
void Item::createLightEvent()
{
	if (!mLightEventNode) {
		GameLightEventArg arg;
		arg.setFog(mFogParm.mStartZ.mValue, mFogParm.mEndZ.mValue);
		arg.setTime(mFogParm.mStartTime.mValue, mFogParm.mEndTime.mValue);
		arg.setColorScale(mFogParm.mRed.mValue, mFogParm.mGreen.mValue, mFogParm.mBlue.mValue);
		arg.setPosition(&mPosition, mFogParm.mDistance.mValue);
		mLightEventNode = gameSystem->getLightMgr()->createEventLight(arg);
	}
}
#pragma auto_inline reset

/**
 * @note Address: 0x801EACDC
 * @note Size: 0x14
 */
void Item::do_setLODParm(AILODParm& parm)
{
	parm.mFar   = 0.15f;
	parm.mClose = 0.085f;
}

/**
 * @note Address: 0x801EACF0
 * @note Size: 0x214
 */
void Item::doAI()
{
	mEfxWarpZone->setRateLOD(mLod.isFlag(AILOD_IsMid | AILOD_IsFar), false);
	mFsm->exec(this);
	if (mBarrel && !mBarrel->isAlive()) {
		mBarrel = nullptr;
		if (!complete()) {
			efx::Arg arg;
			arg.mPosition = mPosition;
			mEfxWarpZone->create(&arg);
		}
	}

	if (!complete()) {
		Navi* navi = naviMgr->getActiveNavi();
		if (navi) {
			PSPlayCaveHoleSound(mSoundObj);
			Vector3f sep = navi->getPosition();
			sep          = sep - mPosition;
			f32 dist     = sep.length();
			if (gameSystem->isFlag(GAMESYS_IsPlaying) && dist < mFogParm.mEnterDistance.mValue) {
				startSound(PSSE_EV_POLUTION_MIX_HOLE);
				createLightEvent();
			} else if (dist > mFogParm.mExitDistance.mValue) {
				if (mLightEventNode) {
					mLightEventNode->setEvent(LIGHTEVENT_Unk1);
					mLightEventNode = nullptr;
				}
			}
		} else {
			if (mLightEventNode) {
				mLightEventNode->setEvent(LIGHTEVENT_Unk1);
				mLightEventNode = nullptr;
			}
		}
	}
}

/**
 * @note Address: 0x801EAF04
 * @note Size: 0x60
 */
u32 Item::getCaveOtakaraNum()
{
	CourseInfo* info = gameSystem->mSection->getCurrentCourseInfo();
	if (info) {
		return playData->getOtakaraNum_Course_CaveID(info->mCourseIndex, mCaveID);
	} else {
		return -1;
	}
}

/**
 * @note Address: 0x801EAF64
 * @note Size: 0x60
 */
u32 Item::getCaveOtakaraMax()
{
	CourseInfo* info = gameSystem->mSection->getCurrentCourseInfo();
	if (info) {
		return playData->getOtakaraMax_Course_CaveID(info->mCourseIndex, mCaveID);
	} else {
		return -1;
	}
}

/**
 * @note Address: 0x801EAFC4
 * @note Size: 0xB4
 */
bool Item::complete()
{
	int otaNum = getCaveOtakaraNum();
	int otaMax = getCaveOtakaraMax();
	return (otaNum >= otaMax);
}

/**
 * @note Address: 0x801EB078
 * @note Size: 0x1F0
 */
void Item::doDirectDraw(Graphics& gfx)
{
	gfx.initPrimDraw(nullptr);
	Matrixf mtx;
	PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mtx.mMatrix.mtxView);
	Vector3f trans = mtx.getTranslation();
	trans.y += 10.0f;
	mtx.setTranslation(trans);
	GXSetLineWidth(40, GX_TO_ZERO);
	gfx.drawAxis(50.0f, &mtx);
	PerspPrintfInfo info;
	gfx.initPerspPrintf(gfx.mCurrentViewport);
	info.mColorA.set(10, 200, 10, 255);
	info.mColorB.set(0, 200, 0, 255);
	info.mScale  = 1.0f;
	Vector3f pos = getPosition();
	pos.y += 60.0f;

	int otaNum = getCaveOtakaraNum();
	int otaMax = getCaveOtakaraMax();
	gfx.perspPrintf(info, pos, "%s %d/%d", mCaveID.getStr(), otaNum, otaMax);

	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stw      r31, 0x7c(r1)
	mr       r31, r4
	li       r4, 0
	stw      r30, 0x78(r1)
	mr       r30, r3
	mr       r3, r31
	stw      r29, 0x74(r1)
	bl       initPrimDraw__8GraphicsFP7Matrixf
	addi     r3, r30, 0x138
	addi     r4, r1, 0x3c
	bl       PSMTXCopy
	lfs      f1, 0x58(r1)
	li       r3, 0x28
	lfs      f0, lbl_80519A78@sda21(r2)
	li       r4, 0
	fadds    f1, f1, f0
	lfs      f0, 0x48(r1)
	stfs     f0, 0x48(r1)
	stfs     f1, 0x58(r1)
	bl       GXSetLineWidth
	lfs      f1, lbl_80519A3C@sda21(r2)
	mr       r3, r31
	addi     r4, r1, 0x3c
	bl       drawAxis__8GraphicsFfP7Matrixf
	lwz      r3, systemFont__9JFWSystem@sda21(r13)
	li       r6, 0
	li       r0, 0xff
	li       r5, 0x66
	lfs      f0, lbl_805199F4@sda21(r2)
	li       r4, 0x99
	stw      r3, 0x20(r1)
	mr       r3, r31
	stw      r6, 0x24(r1)
	stw      r6, 0x28(r1)
	stw      r6, 0x2c(r1)
	stfs     f0, 0x30(r1)
	stb      r5, 0x34(r1)
	stb      r4, 0x35(r1)
	stb      r0, 0x36(r1)
	stb      r0, 0x37(r1)
	stb      r6, 0x38(r1)
	stb      r5, 0x39(r1)
	stb      r0, 0x3a(r1)
	stb      r0, 0x3b(r1)
	lwz      r4, 0x25c(r31)
	bl       initPerspPrintf__8GraphicsFP8Viewport
	lfs      f0, lbl_805199F4@sda21(r2)
	li       r7, 0xa
	li       r6, 0xc8
	li       r5, 0xff
	li       r0, 0
	stb      r7, 0x34(r1)
	mr       r4, r30
	addi     r3, r1, 8
	stb      r6, 0x35(r1)
	stb      r7, 0x36(r1)
	stb      r5, 0x37(r1)
	stb      r0, 0x38(r1)
	stb      r6, 0x39(r1)
	stb      r0, 0x3a(r1)
	stb      r5, 0x3b(r1)
	stfs     f0, 0x30(r1)
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0xc(r1)
	lfs      f0, lbl_80519A7C@sda21(r2)
	lfs      f3, 8(r1)
	lfs      f1, 0x10(r1)
	fadds    f0, f2, f0
	stfs     f2, 0x18(r1)
	lwz      r3, gameSystem__4Game@sda21(r13)
	stfs     f3, 0x14(r1)
	stfs     f1, 0x1c(r1)
	stfs     f0, 0x18(r1)
	lwz      r3, 0x58(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	or.      r4, r3, r3
	beq      lbl_801EB1E8
	lwz      r3, playData__4Game@sda21(r13)
	addi     r5, r30, 0x1e8
	lwz      r4, 0x48(r4)
	bl       getOtakaraNum_Course_CaveID__Q24Game8PlayDataFiR4ID32
	mr       r29, r3
	b        lbl_801EB1EC

lbl_801EB1E8:
	li       r29, -1

lbl_801EB1EC:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x58(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	or.      r4, r3, r3
	beq      lbl_801EB224
	lwz      r3, playData__4Game@sda21(r13)
	addi     r5, r30, 0x1e8
	lwz      r4, 0x48(r4)
	bl       getOtakaraMax_Course_CaveID__Q24Game8PlayDataFiR4ID32
	mr       r9, r3
	b        lbl_801EB228

lbl_801EB224:
	li       r9, -1

lbl_801EB228:
	lis      r4, lbl_80480FF4@ha
	mr       r3, r31
	addi     r6, r4, lbl_80480FF4@l
	mr       r8, r29
	addi     r4, r1, 0x20
	addi     r5, r1, 0x14
	addi     r7, r30, 0x1e8
	crclr    6
	bl       "perspPrintf__8GraphicsFR15PerspPrintfInfoR10Vector3<f>Pce"
	lwz      r0, 0x84(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r29, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/**
 * @note Address: 0x801EB268
 * @note Size: 0x7C
 */
Mgr::Mgr()
{
	mItemName = "Cave";
	setModelSize(1);
	mObjectPathComponent = "user/Kando/objects/dungeon_hole";
}

/**
 * @note Address: 0x801EB2E4
 * @note Size: 0xE4
 */
void Mgr::onLoadResources()
{
	loadArchive("arc.szs");
	loadBmd("dungeon_hole.bmd", 0, J3DMODEL_CreateNewDL);
	JKRArchive* arc = openTextArc("texts.szs");
	mPlatformA      = loadPlatform(arc, "cap_platform.bin");
	mPlatformB      = loadPlatform(arc, "side_platform.bin");
	MapCode::Code code;
	code.setCode(MapCode::Code::Attribute1, MapCode::Code::SlipCode_Steep, true);
	mPlatformA->setMapCodeAll(code);
	code.setCode(MapCode::Code::Attribute1, MapCode::Code::SlipCode_NoSlip, true);
	mPlatformB->setMapCodeAll(code);
	closeTextArc(arc);
}

/**
 * @note Address: 0x801EB3C8
 * @note Size: 0x74
 */
void Mgr::setup(BaseItem* item)
{
	item->mModel = new SysShape::Model(getModelData(0), J3DMODEL_CreateNewDL, 2);
}

/**
 * @note Address: 0x801EB43C
 * @note Size: 0x38
 */
GenItemParm* Mgr::generatorNewItemParm()
{
	return new GenCaveParm;
}

/**
 * @note Address: 0x801EB580
 * @note Size: 0xE0
 */
void Mgr::generatorWrite(Stream& stream, GenItemParm* parm)
{
	GenCaveParm* gparm = static_cast<GenCaveParm*>(parm);
	P2ASSERTLINE(1193, parm);
	stream.textWriteTab(stream.mTabCount);
	stream.writeString(gparm->mCaveFilename);
	stream.textWriteText("\r\n");
	stream.textWriteTab(stream.mTabCount);
	stream.writeString(gparm->_24);
	stream.textWriteText("\r\n");
	stream.textWriteTab(stream.mTabCount);
	gparm->mId.write(stream);
	stream.textWriteText("\t# id (for stages.txt)\r\n");
	gparm->mFogParm.write(stream);
}

/**
 * @note Address: 0x801EB660
 * @note Size: 0x218
 */
void Mgr::generatorRead(Stream& stream, GenItemParm* parm, u32 flag)
{
	GenCaveParm* gparm = static_cast<GenCaveParm*>(parm);
	P2ASSERTLINE(1212, parm);
	char* name = stream.readString(nullptr, 0);
	for (int i = 0; i < 0x20; i++) {
		gparm->mCaveFilename[i] = name[i];
	}

	name = stream.readString(nullptr, 0);
	for (int i = 0; i < 0x20; i++) {
		gparm->_24[i] = name[i];
	}

	if (flag >= '0001') {
		gparm->mId.read(stream);
	}
	if (flag >= '0002') {
		gparm->mFogParm.read(stream);
	}
}

/**
 * @note Address: 0x801EB878
 * @note Size: 0xFC
 */
BaseItem* Mgr::generatorBirth(Vector3f& pos, Vector3f& angle, GenItemParm* parm)
{
	GenCaveParm* gparm = static_cast<GenCaveParm*>(parm);
	P2ASSERTLINE(1236, parm);
	Item* item          = static_cast<Item*>(birth());
	item->mCaveFilename = new char[strlen(gparm->mCaveFilename) + 1];
	item->_1E4          = new char[strlen(gparm->_24) + 1];
	strcpy(item->mCaveFilename, gparm->mCaveFilename);
	strcpy(item->_1E4, gparm->_24);
	item->mCaveID.setID(gparm->mId.getID());
	item->init(nullptr);
	item->mFaceDir = angle.y;
	item->setPosition(pos, false);
	item->mFogParm = gparm->mFogParm;
	return item;
}

} // namespace ItemCave
} // namespace Game
