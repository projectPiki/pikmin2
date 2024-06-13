#include "Dolphin/mtx.h"
#include "JSystem/JKernel/JKRDvdRipper.h"

#include "Game/gameStages.h"
#include "Game/MapMgr.h"
#include "MapCollision.h"

const char gameStages[] = "gameStages";

namespace Game {
Stages* stageList;

/**
 * @note Address: N/A
 * @note Size: 0x68
 */
inline CaveOtakara::CaveOtakara()
{
	mOtakaraCount = 0;
	mId.setID('xxxx');
	mFilename = "keigo_de_sox.txt";
}

/**
 * @note Address: N/A
 * @note Size: 0x90
 */
inline CaveOtakaraInfo::CaveOtakaraInfo()
{
	mCount = 0;
	mOwner.clearRelations();
}

/**
 * @note Address: 0x801AD378
 * @note Size: 0x60
 * AUTOGEN
 */
CaveOtakara::~CaveOtakara() { }

/**
 * @note Address: N/A
 * @note Size: 0xEC
 */
inline void CaveOtakaraInfo::read(Stream& stream)
{
	mCount = stream.readInt();
	for (int i = 0; i < mCount; i++) {
		CaveOtakara* currOtakara = new CaveOtakara;
		currOtakara->mId.read(stream);
		currOtakara->mOtakaraCount = stream.readByte();
		currOtakara->mFilename     = stream.readString(nullptr, 0);
		mOwner.add(currOtakara);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
inline int CaveOtakaraInfo::get_index(int)
{
	// TODO
	return 0;
}

/**
 * @note Address: N/A
 * @note Size: 0x8C
 */
inline CaveOtakara* CaveOtakaraInfo::get_id(ID32& id)
{
	CaveOtakara* caveNode;
	for (int i = 0; i < mCount; i++) {
		caveNode = (CaveOtakara*)mOwner.getChildAt(i);

		if ((caveNode->mId == id.getID())) {
			return caveNode;
		} else {
			continue;
		}
	}
	return 0;
};

/**
 * @note Address: N/A
 * @note Size: 0x80
 */
inline int CaveOtakaraInfo::getCaveIndex_FromID(ID32& id)
{
	CaveOtakara* caveNode;
	for (int idx = 0; idx < mCount; idx++) {
		caveNode = (CaveOtakara*)mOwner.getChildAt(idx);

		if ((caveNode->mId == id.getID())) {
			return idx;
		}
	}
	return -1;
};

/**
 * @note Address: N/A
 * @note Size: 0x3C
 */
inline ID32* CaveOtakaraInfo::getCaveID_FromIndex(int)
{
	return nullptr;
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
inline LimitGenInfo::LimitGenInfo()
{
	mCount = 0;
	mOwner.clearRelations();
}

/**
 * @note Address: 0x801AD3D8
 * @note Size: 0x60
 * AUTOGEN
 */
LimitGen::~LimitGen() { }

/**
 * @note Address: N/A
 * @note Size: 0xCC
 */
inline void LimitGenInfo::read(Stream& stream)
{
	mCount = stream.readInt();
	for (int i = 0; i < mCount; i++) {
		LimitGen* currLimitGen    = new LimitGen;
		currLimitGen->mName       = stream.readString(nullptr, 0);
		currLimitGen->mMinimumDay = stream.readInt();
		currLimitGen->mMaximumDay = stream.readInt();
		currLimitGen->mDayLimit   = stream.readInt();
		mOwner.add(currLimitGen);
	}
}

/**
 * @note Address: 0x801AD438
 * @note Size: 0x154
 */
CourseInfo::CourseInfo()
{
	setName("noname");

	mRoutePath     = 0;
	mFarmPath      = 0;
	mMapcodePath   = 0;
	mWaterboxPath  = 0;
	mCollisionPath = 0;
	mModelPath     = 0;
	mFolder        = 0;

	mStartPosition = 0.0f;
	mStartAngle    = 0;

	mCourseIndex = 0;

	PSMTXIdentity(mDemoMatrix.mMatrix.mtxView);
	mGroundOtakaraMax = 0;
}

/**
 * @note Address: N/A
 * @note Size: 0x6C
 * AUTOGEN
 */
inline CaveOtakaraInfo::~CaveOtakaraInfo() { }

/**
 * @note Address: N/A
 * @note Size: 0x6C
 * AUTOGEN
 */
inline LimitGenInfo::~LimitGenInfo() { }

/**
 * @note Address: 0x801AD58C
 * @note Size: 0x4
 */
void CourseInfo::dump() { }

/**
 * @note Address: 0x801AD590
 * @note Size: 0x4C4
 */
void CourseInfo::read(Stream& stream)
{
	char* currentBytes = stream.readString(nullptr, 0);
	if (strcmp(currentBytes, "name") == 0) {
		mName        = stream.readString(nullptr, 0);
		currentBytes = stream.readString(nullptr, 0);
	}

	if (strcmp(currentBytes, "folder") == 0) {
		mFolder      = stream.readString(nullptr, 0);
		currentBytes = stream.readString(nullptr, 0);
	}

	if (strcmp(currentBytes, "abe_folder") == 0) {
		mAbeFolder   = stream.readString(nullptr, 0);
		currentBytes = stream.readString(nullptr, 0);
	}

	if (strcmp(currentBytes, "model") == 0) {
		mModelPath   = stream.readString(nullptr, 0);
		currentBytes = stream.readString(nullptr, 0);
	}

	if (strcmp(currentBytes, "collision") == 0) {
		mCollisionPath = stream.readString(nullptr, 0);
		currentBytes   = stream.readString(nullptr, 0);
	}

	if (strcmp(currentBytes, "waterbox") == 0) {
		mWaterboxPath = stream.readString(nullptr, 0);
		currentBytes  = stream.readString(nullptr, 0);
	}

	if (strcmp(currentBytes, "mapcode") == 0) {
		mMapcodePath = stream.readString(nullptr, 0);
		currentBytes = stream.readString(nullptr, 0);
	}

	if (strcmp(currentBytes, "farm") == 0) {
		mFarmPath    = stream.readString(nullptr, 0);
		currentBytes = stream.readString(nullptr, 0);
	}

	if (strcmp(currentBytes, "route") == 0) {
		mRoutePath   = stream.readString(nullptr, 0);
		currentBytes = stream.readString(nullptr, 0);
	}

	if (strcmp(currentBytes, "start") == 0) {
		mStartPosition.read(stream);
		currentBytes = stream.readString(nullptr, 0);
	}

	if (strcmp(currentBytes, "startangle") == 0) {
		mStartAngle = stream.readFloat();
		stream.readString(nullptr, 0);

		// Convert angle to radians
		Vector3f vec(0.0f, TORADIANS(mStartAngle), 0.0f);
		mDemoMatrix.makeTR(mStartPosition, vec);
	}

	mLimitGenInfo.read(stream);
	mLoopGenInfo.read(stream);
	mCaveOtakaraInfo.read(stream);

	mGroundOtakaraMax = stream.readInt();
}

/**
 * @note Address: 0x801ADA54
 * @note Size: 0x88
 */
int CourseInfo::getOtakaraNum(ID32& id)
{
	CaveOtakara* caveNode = mCaveOtakaraInfo.get_id(id);

	return (caveNode) ? caveNode->mOtakaraCount : -1;
}

/**
 * @note Address: 0x801ADADC
 * @note Size: 0x38
 */
int CourseInfo::getOtakaraNum(int childIdx)
{
	CaveOtakara* node = (CaveOtakara*)mCaveOtakaraInfo.mOwner.getChildAt(childIdx);

	if (node) {
		return node->mOtakaraCount;
	}

	return -1;
}

/**
 * @note Address: 0x801ADB14
 * @note Size: 0x8C
 */
int CourseInfo::getCaveIndex_FromID(ID32& id) { return mCaveOtakaraInfo.getCaveIndex_FromID(id); }

/**
 * @note Address: 0x801ADBA0
 * @note Size: 0x9C
 */
char* CourseInfo::getCaveinfoFilename_FromID(ID32& id)
{
	CaveOtakara* caveNode = mCaveOtakaraInfo.get_id(id);
	P2ASSERTLINE(282, caveNode);
	return caveNode->mFilename;
}

/**
 * @note Address: 0x801ADC3C
 * @note Size: 0x3C
 */
u32 CourseInfo::getCaveID_FromIndex(int childIdx)
{
	CaveOtakara* node = (CaveOtakara*)mCaveOtakaraInfo.mOwner.getChildAt(childIdx);

	if (node) {
		return node->mId.getID();
	}

	return 'none';
}

/**
 * @note Address: 0x801ADC78
 * @note Size: 0x8
 */
int CourseInfo::getCaveNum() { return mCaveOtakaraInfo.mCount; }

/**
 * @note Address: 0x801ADC80
 * @note Size: 0x1EC
 */
Stages::Stages()
{
	mCourseInfo.clearRelations();

	_108 = 0;
	_104 = 0;
	_10A = 0;

	loadFromFile(this, "user/Abe/stages.txt", nullptr, false);
}

/**
 * @note Address: 0x801ADE6C
 * @note Size: 0xD0
 */
CourseInfo::~CourseInfo() { }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
inline void Stages::update()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x801ADF3C
 * @note Size: 0x70
 */
CourseInfo* Stages::getCourseInfo(char* name)
{
	for (CNode* node = mCourseInfo.mChild; node; node = node->mNext) {
		if (IS_SAME_STRING_N(name, node->mName, strlen(name))) {
			return (CourseInfo*)node;
		}
	}

	return nullptr;
}

/**
 * @note Address: 0x801ADFAC
 * @note Size: 0x74
 */
CourseInfo* Stages::getCourseInfo(int courseNum)
{
	CourseInfo* childInfo = (CourseInfo*)mCourseInfo.mChild;
	for (int i = 0; i < courseNum; i++) {
		childInfo = (CourseInfo*)childInfo->mNext;
	}
	return childInfo;
}

/**
 * @note Address: N/A
 * @note Size: 0x3FC
 */
inline void Stages::draw2d()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x801AE020
 * @note Size: 0x234
 */
void Stages::createMapMgr(Game::CourseInfo* info, Game::RouteMgr* routeMgr)
{
	char modelPathTxt[0x100];
	if (info->mModelPath) {
		sprintf(modelPathTxt, "%s/%s", info->mFolder, info->mModelPath);
	}

	char collPathTxt[0x100];
	if (info->mCollisionPath) {
		sprintf(collPathTxt, "%s/%s", info->mFolder, info->mCollisionPath);
	}

	char wboxPathTxt[0x100];
	if (info->mWaterboxPath) {
		sprintf(wboxPathTxt, "%s/%s", info->mFolder, info->mWaterboxPath);
	}

	char codePathTxt[0x100];
	if (info->mMapcodePath) {
		sprintf(codePathTxt, "%s/%s", info->mFolder, info->mMapcodePath);
	}

	char farmPathTxt[0x100];
	if (info->mFarmPath) {
		sprintf(farmPathTxt, "%s/%s", info->mFolder, info->mFarmPath);
	}

	char routePathTxt[0x100];
	if (info->mRoutePath) {
		sprintf(routePathTxt, "%s/%s", info->mAbeFolder, info->mRoutePath);
	}

	mapMgr                                         = new ShapeMapMgr;
	static_cast<ShapeMapMgr*>(mapMgr)->mRouteMgr   = routeMgr;
	static_cast<ShapeMapMgr*>(mapMgr)->mCourseInfo = info;

	ShapeMapMgr::LoadArg loadarg(info->mModelPath ? modelPathTxt : nullptr, info->mCollisionPath ? collPathTxt : nullptr,
	                             info->mRoutePath ? routePathTxt : nullptr);

	loadarg.mFolder    = info->mFolder;
	loadarg.mAbeFolder = info->mAbeFolder;

	loadarg.mWaterboxPath = info->mWaterboxPath ? wboxPathTxt : nullptr;
	loadarg.mMapcodePath  = info->mMapcodePath ? codePathTxt : nullptr;

	static_cast<ShapeMapMgr*>(mapMgr)->load(loadarg);
}

} // namespace Game

/**
 * @note Address: 0x801AE254
 * @note Size: 0x60
 * AUTOGEN
 */
// MapCollision::~MapCollision() { }

namespace Game {

/**
 * @note Address: N/A
 * @note Size: 0x18
 */
inline void Stages::dump()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x801AE2B4
 * @note Size: 0x194
 */
void Stages::read(Stream& stream)
{
	s16 courseCount = stream.readShort();
	mCourseCount    = courseCount;

	// set courseIndex for each child CourseInfo from stream
	for (int i = 0; i < (u16)courseCount; i++) {
		CourseInfo* newInfo   = new CourseInfo();
		newInfo->mCourseIndex = i;
		newInfo->read(stream);
		mCourseInfo.add(newInfo);
	}
}

const char selectCourse[] = "Select Course";
const char caveCount[]    = "%s : %d caves\n";
const char measureThing[] = "[%s] %d/%d";

} // namespace Game
