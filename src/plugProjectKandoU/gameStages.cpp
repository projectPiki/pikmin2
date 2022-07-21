#include "Dolphin/mtx.h"
#include "JSystem/JKR/JKRDvdRipper.h"

#include "Game/gameStages.h"
#include "Game/MapMgr.h"
#include "MapCollision.h"

const char gameStages[] = "gameStages";

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047F8A8
    lbl_8047F8A8:
        .4byte 0x67616D65
        .4byte 0x53746167
        .4byte 0x65730000
    .global lbl_8047F8B4
    lbl_8047F8B4:
        .4byte 0x6B656967
        .4byte 0x6F5F6465
        .4byte 0x5F736F78
        .4byte 0x2E747874
        .4byte 0x00000000
        .4byte 0x6162655F
        .4byte 0x666F6C64
        .4byte 0x65720000
        .4byte 0x636F6C6C
        .4byte 0x6973696F
        .4byte 0x6E000000
        .4byte 0x77617465
        .4byte 0x72626F78
        .4byte 0x00000000
        .4byte 0x73746172
        .4byte 0x74616E67
        .4byte 0x6C650000
    .global lbl_8047F8F8
    lbl_8047F8F8:
        .4byte 0x67616D65
        .4byte 0x53746167
        .4byte 0x65732E63
        .4byte 0x70700000
    .global lbl_8047F908
    lbl_8047F908:
        .asciz "P2Assert"
        .skip 3
    .global lbl_8047F914
    lbl_8047F914:
        .4byte 0x75736572
        .4byte 0x2F416265
        .4byte 0x2F737461
        .4byte 0x6765732E
        .4byte 0x74787400
        .4byte 0x53656C65
        .4byte 0x63742043
        .4byte 0x6F757273
        .4byte 0x65000000
        .4byte 0x2573203A
        .4byte 0x20256420
        .4byte 0x63617665
        .4byte 0x730A0000
        .4byte 0x5B25735D
        .4byte 0x2025642F
        .4byte 0x25640000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game10CourseInfo
    __vt__Q24Game10CourseInfo:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game10CourseInfoFv
        .4byte getChildCount__5CNodeFv
    .global __vt__Q24Game8LimitGen
    __vt__Q24Game8LimitGen:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game8LimitGenFv
        .4byte getChildCount__5CNodeFv
    .global __vt__Q24Game11CaveOtakara
    __vt__Q24Game11CaveOtakara:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game11CaveOtakaraFv
        .4byte getChildCount__5CNodeFv

    .section .sbss # 0x80514D80 - 0x80516360
    .global stageList__4Game
    stageList__4Game:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805192C8
    lbl_805192C8:
        .4byte 0x6E6F6E61
        .4byte 0x6D650000
    .global lbl_805192D0
    lbl_805192D0:
        .4byte 0x00000000
    .global lbl_805192D4
    lbl_805192D4:
        .4byte 0x6E616D65
        .4byte 0x00000000
    .global lbl_805192DC
    lbl_805192DC:
        .4byte 0x666F6C64
        .4byte 0x65720000
    .global lbl_805192E4
    lbl_805192E4:
        .4byte 0x6D6F6465
        .4byte 0x6C000000
    .global lbl_805192EC
    lbl_805192EC:
        .4byte 0x6D617063
        .4byte 0x6F646500
    .global lbl_805192F4
    lbl_805192F4:
        .4byte 0x6661726D
        .4byte 0x00000000
    .global lbl_805192FC
    lbl_805192FC:
        .4byte 0x726F7574
        .4byte 0x65000000
    .global lbl_80519304
    lbl_80519304:
        .4byte 0x73746172
        .4byte 0x74000000
    .global lbl_8051930C
    lbl_8051930C:
        .4byte 0x40490FDB
    .global lbl_80519310
    lbl_80519310:
        .4byte 0x3BB60B61
    .global lbl_80519314
    lbl_80519314:
        .4byte 0x25732F25
        .4byte 0x73000000
        .4byte 0x00000000
*/

namespace Game {
Stages* stageList;

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
inline CaveOtakara::CaveOtakara()
{
	m_otakaraCount = 0;
	m_id.setID('xxxx');
	m_filename = "keigo_de_sox.txt";
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
inline CaveOtakaraInfo::CaveOtakaraInfo()
{
	m_count = 0;
	m_owner.clearRelations();
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
	m_count = stream.readInt();
	for (int i = 0; i < m_count; i++) {
		CaveOtakara* currOtakara = new CaveOtakara;
		currOtakara->m_id.read(stream);
		currOtakara->m_otakaraCount = stream.readByte();
		currOtakara->m_filename     = stream.readString(nullptr, 0);
		m_owner.add(currOtakara);
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
	for (int i = 0; i < m_count; i++) {
		caveNode = (CaveOtakara*)m_owner.getChildAt(i);

		if ((caveNode->m_id == id.getID())) {
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
	for (int idx = 0; idx < m_count; idx++) {
		caveNode = (CaveOtakara*)m_owner.getChildAt(idx);

		if ((caveNode->m_id == id.getID())) {
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
	m_count = 0;
	m_owner.clearRelations();
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
	m_count = stream.readInt();
	for (int i = 0; i < m_count; i++) {
		LimitGen* currLimitGen   = new LimitGen;
		currLimitGen->m_name     = stream.readString(nullptr, 0);
		currLimitGen->_18        = stream.readInt();
		currLimitGen->_1C        = stream.readInt();
		currLimitGen->m_dayLimit = stream.readInt();
		m_owner.add(currLimitGen);
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

	m_routePath     = 0;
	m_farmPath      = 0;
	m_mapcodePath   = 0;
	m_waterboxPath  = 0;
	m_collisionPath = 0;
	m_modelPath     = 0;
	m_folder        = 0;

	m_startPosition = 0.0f;
	m_startAngle    = 0;

	m_courseIndex = 0;

	PSMTXIdentity(_D0.m_matrix.mtxView);
	m_groundOtakaraMax = 0;
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
		m_name       = stream.readString(nullptr, 0);
		currentBytes = stream.readString(nullptr, 0);
	}

	if (strcmp(currentBytes, "folder") == 0) {
		m_folder     = stream.readString(nullptr, 0);
		currentBytes = stream.readString(nullptr, 0);
	}

	if (strcmp(currentBytes, "abe_folder") == 0) {
		m_abeFolder  = stream.readString(nullptr, 0);
		currentBytes = stream.readString(nullptr, 0);
	}

	if (strcmp(currentBytes, "model") == 0) {
		m_modelPath  = stream.readString(nullptr, 0);
		currentBytes = stream.readString(nullptr, 0);
	}

	if (strcmp(currentBytes, "collision") == 0) {
		m_collisionPath = stream.readString(nullptr, 0);
		currentBytes    = stream.readString(nullptr, 0);
	}

	if (strcmp(currentBytes, "waterbox") == 0) {
		m_waterboxPath = stream.readString(nullptr, 0);
		currentBytes   = stream.readString(nullptr, 0);
	}

	if (strcmp(currentBytes, "mapcode") == 0) {
		m_mapcodePath = stream.readString(nullptr, 0);
		currentBytes  = stream.readString(nullptr, 0);
	}

	if (strcmp(currentBytes, "farm") == 0) {
		m_farmPath   = stream.readString(nullptr, 0);
		currentBytes = stream.readString(nullptr, 0);
	}

	if (strcmp(currentBytes, "route") == 0) {
		m_routePath  = stream.readString(nullptr, 0);
		currentBytes = stream.readString(nullptr, 0);
	}

	if (strcmp(currentBytes, "start") == 0) {
		m_startPosition.read(stream);
		currentBytes = stream.readString(nullptr, 0);
	}

	if (strcmp(currentBytes, "startangle") == 0) {
		m_startAngle = stream.readFloat();
		stream.readString(nullptr, 0);

		// Convert angle to radians
		Vector3f vec(0.0f, 3.1415927f * (0.0055555557f * m_startAngle), 0.0f);
		_D0.makeTR(m_startPosition, vec);
	}

	m_limitGenInfo.read(stream);
	m_loopGenInfo.read(stream);
	m_caveOtakaraInfo.read(stream);

	m_groundOtakaraMax = stream.readInt();
}

/*
 * --INFO--
 * Address:	801ADA54
 * Size:	000088
 */
int CourseInfo::getOtakaraNum(ID32& id)
{
	CaveOtakara* caveNode = m_caveOtakaraInfo.get_id(id);

	return (caveNode) ? caveNode->m_otakaraCount : -1;
}

/*
 * --INFO--
 * Address:	801ADADC
 * Size:	000038
 */
int CourseInfo::getOtakaraNum(int childIdx)
{
	CaveOtakara* node = (CaveOtakara*)m_caveOtakaraInfo.m_owner.getChildAt(childIdx);

	if (node) {
		return node->m_otakaraCount;
	}

	return -1;
}

/*
 * --INFO--
 * Address:	801ADB14
 * Size:	00008C
 */
int CourseInfo::getCaveIndex_FromID(ID32& id) { return m_caveOtakaraInfo.getCaveIndex_FromID(id); }

/*
 * --INFO--
 * Address:	801ADBA0
 * Size:	00009C
 */
char* CourseInfo::getCaveinfoFilename_FromID(ID32& id)
{
	CaveOtakara* caveNode = m_caveOtakaraInfo.get_id(id);
	P2ASSERTLINE(282, caveNode);
	return caveNode->m_filename;
}

/*
 * --INFO--
 * Address:	801ADC3C
 * Size:	00003C
 */
ID32* CourseInfo::getCaveID_FromIndex(int childIdx)
{
	CaveOtakara* node = (CaveOtakara*)m_caveOtakaraInfo.m_owner.getChildAt(childIdx);

	if (node) {
		return (ID32*)node->m_id.getID();
	}

	return (ID32*)'none';
}

/*
 * --INFO--
 * Address:	801ADC78
 * Size:	000008
 */
int CourseInfo::getCaveNum() { return m_caveOtakaraInfo.m_count; }

/*
 * --INFO--
 * Address:	801ADC80
 * Size:	0001EC
 */
Stages::Stages()
{
	m_courseInfo.clearRelations();

	_108 = 0;
	_104 = 0;
	_10A = 0;

	loadAndRead(this, "user/Abe/stages.txt", false);
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
	for (CNode* node = m_courseInfo.m_child; node; node = node->m_next) {
		if (!strncmp(name, node->m_name, strlen(name))) {
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
	CourseInfo* childInfo = (CourseInfo*)m_courseInfo.m_child;
	for (int i = 0; i < courseNum; i++) {
		childInfo = (CourseInfo*)childInfo->m_next;
	}
	return childInfo;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0003FC
 */
inline void Stages::draw2d(void)
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
	if (info->m_modelPath) {
		sprintf(modelPathTxt, "%s/%s", info->m_folder, info->m_modelPath);
	}

	char collPathTxt[0x100];
	if (info->m_collisionPath) {
		sprintf(collPathTxt, "%s/%s", info->m_folder, info->m_collisionPath);
	}

	char wboxPathTxt[0x100];
	if (info->m_waterboxPath) {
		sprintf(wboxPathTxt, "%s/%s", info->m_folder, info->m_waterboxPath);
	}

	char codePathTxt[0x100];
	if (info->m_mapcodePath) {
		sprintf(codePathTxt, "%s/%s", info->m_folder, info->m_mapcodePath);
	}

	char farmPathTxt[0x100];
	if (info->m_farmPath) {
		sprintf(farmPathTxt, "%s/%s", info->m_folder, info->m_farmPath);
	}

	char routePathTxt[0x100];
	if (info->m_routePath) {
		sprintf(routePathTxt, "%s/%s", info->m_abeFolder, info->m_routePath);
	}

	mapMgr               = new ShapeMapMgr;
	mapMgr->m_routeMgr   = routeMgr;
	mapMgr->m_courseInfo = info;

	ShapeMapMgr::LoadArg loadarg(info->m_modelPath ? modelPathTxt : nullptr, info->m_collisionPath ? collPathTxt : nullptr,
	                             info->m_routePath ? routePathTxt : nullptr);

	loadarg.m_folder    = info->m_folder;
	loadarg.m_abeFolder = info->m_abeFolder;

	loadarg.m_waterboxPath = info->m_waterboxPath ? wboxPathTxt : nullptr;
	loadarg.m_mapcodePath  = info->m_mapcodePath ? codePathTxt : nullptr;

	mapMgr->load(loadarg);
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
inline void Stages::dump(void)
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
	m_courseCount   = courseCount;

	// set courseIndex for each child CourseInfo from stream
	for (int i = 0; i < (u16)courseCount; i++) {
		CourseInfo* newInfo    = new CourseInfo();
		newInfo->m_courseIndex = i;
		newInfo->read(stream);
		m_courseInfo.add(newInfo);
	}
}

const char selectCourse[] = "Select Course";
const char caveCount[]    = "%s : %d caves\n";
const char measureThing[] = "[%s] %d/%d";

} // namespace Game
