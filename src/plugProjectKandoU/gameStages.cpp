#include "Dolphin/mtx.h"
#include "JSystem/JKernel/JKRDvdRipper.h"

#include "Game/gameStages.h"
#include "Game/MapMgr.h"
#include "MapCollision.h"

const char gameStages[] = "gameStages";

namespace Game {
Stages* stageList;

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
inline CaveOtakara::CaveOtakara()
{
	mOtakaraCount = 0;
	mId.setID('xxxx');
	mFilename = "keigo_de_sox.txt";
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
inline CaveOtakaraInfo::CaveOtakaraInfo()
{
	mCount = 0;
	mOwner.clearRelations();
}

/*
 * --INFO--
 * Address:	801AD378
 * Size:	000060
 * AUTOGEN
 */
CaveOtakara::~CaveOtakara() { }

/*
 * --INFO--
 * Address:	........
 * Size:	0000EC
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

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
inline int CaveOtakaraInfo::get_index(int)
{
	// TODO
	return 0;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
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

/*
 * --INFO--
 * Address:	........
 * Size:	000080
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

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
inline ID32* CaveOtakaraInfo::getCaveID_FromIndex(int)
{
	return nullptr;
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
inline LimitGenInfo::LimitGenInfo()
{
	mCount = 0;
	mOwner.clearRelations();
}

/*
 * --INFO--
 * Address:	801AD3D8
 * Size:	000060
 * AUTOGEN
 */
LimitGen::~LimitGen() { }

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
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

/*
 * --INFO--
 * Address:	801AD438
 * Size:	000154
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

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 * AUTOGEN
 */
inline CaveOtakaraInfo::~CaveOtakaraInfo() { }

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 * AUTOGEN
 */
inline LimitGenInfo::~LimitGenInfo() { }

/*
 * --INFO--
 * Address:	801AD58C
 * Size:	000004
 */
void CourseInfo::dump() { }

/*
 * --INFO--
 * Address:	801AD590
 * Size:	0004C4
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

/*
 * --INFO--
 * Address:	801ADA54
 * Size:	000088
 */
int CourseInfo::getOtakaraNum(ID32& id)
{
	CaveOtakara* caveNode = mCaveOtakaraInfo.get_id(id);

	return (caveNode) ? caveNode->mOtakaraCount : -1;
}

/*
 * --INFO--
 * Address:	801ADADC
 * Size:	000038
 */
int CourseInfo::getOtakaraNum(int childIdx)
{
	CaveOtakara* node = (CaveOtakara*)mCaveOtakaraInfo.mOwner.getChildAt(childIdx);

	if (node) {
		return node->mOtakaraCount;
	}

	return -1;
}

/*
 * --INFO--
 * Address:	801ADB14
 * Size:	00008C
 */
int CourseInfo::getCaveIndex_FromID(ID32& id) { return mCaveOtakaraInfo.getCaveIndex_FromID(id); }

/*
 * --INFO--
 * Address:	801ADBA0
 * Size:	00009C
 */
char* CourseInfo::getCaveinfoFilename_FromID(ID32& id)
{
	CaveOtakara* caveNode = mCaveOtakaraInfo.get_id(id);
	P2ASSERTLINE(282, caveNode);
	return caveNode->mFilename;
}

/*
 * --INFO--
 * Address:	801ADC3C
 * Size:	00003C
 */
ID32* CourseInfo::getCaveID_FromIndex(int childIdx)
{
	CaveOtakara* node = (CaveOtakara*)mCaveOtakaraInfo.mOwner.getChildAt(childIdx);

	if (node) {
		return (ID32*)node->mId.getID();
	}

	return (ID32*)'none';
}

/*
 * --INFO--
 * Address:	801ADC78
 * Size:	000008
 */
int CourseInfo::getCaveNum() { return mCaveOtakaraInfo.mCount; }

/*
 * --INFO--
 * Address:	801ADC80
 * Size:	0001EC
 */
Stages::Stages()
{
	mCourseInfo.clearRelations();

	_108 = 0;
	_104 = 0;
	_10A = 0;

	loadAndRead(this, "user/Abe/stages.txt", nullptr, false);
}

/*
 * --INFO--
 * Address:	801ADE6C
 * Size:	0000D0
 */
CourseInfo::~CourseInfo() { }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
inline void Stages::update()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801ADF3C
 * Size:	000070
 */
CourseInfo* Stages::getCourseInfo(char* name)
{
	for (CNode* node = mCourseInfo.mChild; node; node = node->mNext) {
		if (!strncmp(name, node->mName, strlen(name))) {
			return (CourseInfo*)node;
		}
	}

	return nullptr;
}

/*
 * --INFO--
 * Address:	801ADFAC
 * Size:	000074
 */
CourseInfo* Stages::getCourseInfo(int courseNum)
{
	CourseInfo* childInfo = (CourseInfo*)mCourseInfo.mChild;
	for (int i = 0; i < courseNum; i++) {
		childInfo = (CourseInfo*)childInfo->mNext;
	}
	return childInfo;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0003FC
 */
inline void Stages::draw2d()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801AE020
 * Size:	000234
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

/*
 * --INFO--
 * Address:	801AE254
 * Size:	000060
 * AUTOGEN
 */
// MapCollision::~MapCollision() { }

namespace Game {

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
inline void Stages::dump()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801AE2B4
 * Size:	000194
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
