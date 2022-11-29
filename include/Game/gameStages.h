#ifndef _GAME_GAMESTAGES_H
#define _GAME_GAMESTAGES_H

#include "CNode.h"
#include "Game/routeMgr.h"
#include "Matrixf.h"
#include "Vector3.h"
#include "id32.h"

namespace Game {
/**
 * @size{0x2C}
 */
struct CaveOtakara : public CNode {
	CaveOtakara();

	virtual ~CaveOtakara(); // _08 (weak)

	// _00     = VTBL
	// _00-_18 = CNode
	ID32 m_id;         // _18
	u8 m_otakaraCount; // _24
	char* m_filename;  // _28
};

struct CaveOtakaraInfo {
	CaveOtakaraInfo();
	~CaveOtakaraInfo();

	void read(Stream&);

	int get_index(int);
	CaveOtakara* get_id(ID32&);
	int getCaveIndex_FromID(ID32&);
	ID32* getCaveID_FromIndex(int);

	int m_count;         // _00
	CaveOtakara m_owner; // _04
};

/**
 * @size{0x24}
 */
struct LimitGen : public CNode {
	LimitGen() { }

	virtual ~LimitGen(); // _08 (weak)

	u32 _18;        // _18
	u32 _1C;        // _1C
	u32 m_dayLimit; // _20
};

struct LimitGenInfo {
	LimitGenInfo();
	~LimitGenInfo();

	void read(Stream&);

	int m_count;      // _00
	LimitGen m_owner; // _04
};

/**
 * @size{0x100}
 */
struct CourseInfo : public CNode {
	CourseInfo();

	virtual ~CourseInfo(); // _08 (weak)

	void dump();
	void read(Stream&);
	int getOtakaraNum(ID32&);
	int getOtakaraNum(int);
	int getCaveIndex_FromID(ID32&);
	char* getCaveinfoFilename_FromID(ID32&);
	ID32* getCaveID_FromIndex(int);
	int getCaveNum();

	char* m_folder;           // _18
	char* m_abeFolder;        // _1C
	char* m_modelPath;        // _20
	char* m_collisionPath;    // _24
	char* m_waterboxPath;     // _28
	char* m_mapcodePath;      // _2C
	char* m_farmPath;         // _30
	char* m_routePath;        // _34
	Vector3f m_startPosition; // _38
	float m_startAngle;       // _44
	u32 m_courseIndex;        // _48

	LimitGenInfo m_limitGenInfo;       // _4C
	LimitGenInfo m_loopGenInfo;        // _78
	CaveOtakaraInfo m_caveOtakaraInfo; // _9C
	int m_groundOtakaraMax;            // _CC
	Matrixf _D0;                       // _D0
};

struct Stages {
	Stages();

	void update();
	CourseInfo* getCourseInfo(char*);
	CourseInfo* getCourseInfo(int);
	void draw2d();
	void dump();
	void read(Stream&);

	static void createMapMgr(CourseInfo*, RouteMgr*);

	CourseInfo m_courseInfo; // _00
	u16 m_courseCount;       // _100
	u32 _104;                // _104
	u16 _108;                // _108
	u8 _10A;                 // _10A
};

extern Stages* stageList;
} // namespace Game

#endif
