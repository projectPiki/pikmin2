#ifndef _GAME_GAMESTAGES_H
#define _GAME_GAMESTAGES_H

#include "CNode.h"
#include "Game/gamePlayData.h"
#include "Game/routeMgr.h"
#include "Matrixf.h"
#include "Vector3.h"

namespace Game {
/**
 * @size{0x2C}
 */
struct CaveOtakara : public CNode {
	CaveOtakara();

	virtual ~CaveOtakara(); // _00

	ID32 m_id;         // _18
	u8 m_otakaraCount; // _24
	char* m_filename;  // _28
};

/**
 * @size{0x24}
 */
struct LimitGen : public CNode {
	virtual ~LimitGen(); // _00

	u32 _18;        // _18
	u32 _1C;        // _1C
	u32 m_dayLimit; // _20
};

/**
 * @size{0x100}
 */
struct CourseInfo : public CNode {
	CourseInfo();

	virtual ~CourseInfo(); // _00

	void dump();
	void read(Stream&);
	int getOtakaraNum(ID32&);
	int getOtakaraNum(int);
	int getCaveIndex_FromID(ID32&);
	char* getCaveinfoFilename_FromID(ID32&);
	ID32* getCaveID_FromIndex(int);
	int getCaveNum();

	char* m_folder;                 // _18
	char* m_abeFolder;              // _1C
	char* m_modelPath;              // _20
	char* m_collisionPath;          // _24
	char* m_waterboxPath;           // _28
	char* m_mapcodePath;            // _2C
	char* m_farmPath;               // _30
	char* m_routePath;              // _34
	Vector3f m_startPosition;       // _38
	float m_startAngle;             // _44
	u32 m_courseIndex;              // _48
	int m_limitGenCount;            // _4C
	LimitGen m_limitGenOwner;       // _50
	int m_loopGenCount;             // _74
	LimitGen m_loopGenOwner;        // _78
	int m_caveCount;                // _9C
	CaveOtakara m_caveOtakaraOwner; // _A0
	int m_groundOtakaraMax;         // _CC
	Matrixf _D0;
};

struct Stages {
	Stages();

	void update();
	CourseInfo* getCourseInfo(char*);
	CourseInfo* getCourseInfo(int);
	void draw2d();
	void createMapMgr(CourseInfo*, RouteMgr*);
	void dump();
	void read(Stream&);

	CourseInfo m_courseInfo; // _00
	u16 m_courseCount;       // _100
	u32 _104;                // _104
	u16 _108;                // _108
};

extern Stages* stageList;
} // namespace Game

#endif
