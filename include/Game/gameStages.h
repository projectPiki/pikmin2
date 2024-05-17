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
	ID32 mId;         // _18
	u8 mOtakaraCount; // _24
	char* mFilename;  // _28
};

struct CaveOtakaraInfo {
	CaveOtakaraInfo();
	~CaveOtakaraInfo();

	void read(Stream&);

	int get_index(int);
	CaveOtakara* get_id(ID32&);
	int getCaveIndex_FromID(ID32&);
	ID32* getCaveID_FromIndex(int);

	int mCount;         // _00
	CaveOtakara mOwner; // _04
};

/**
 * @size{0x24}
 */
struct LimitGen : public CNode {
	LimitGen() { }

	virtual ~LimitGen(); // _08 (weak)

	int mMinimumDay; // _18
	int mMaximumDay; // _1C
	int mDayLimit;   // _20
};

struct LimitGenInfo {
	LimitGenInfo();
	~LimitGenInfo();

	void read(Stream&);

	int mCount;      // _00
	LimitGen mOwner; // _04
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
	u32 getCaveID_FromIndex(int);
	int getCaveNum();

	char* mFolder;                    // _18
	char* mAbeFolder;                 // _1C
	char* mModelPath;                 // _20
	char* mCollisionPath;             // _24
	char* mWaterboxPath;              // _28
	char* mMapcodePath;               // _2C
	char* mFarmPath;                  // _30
	char* mRoutePath;                 // _34
	Vector3f mStartPosition;          // _38
	f32 mStartAngle;                  // _44
	u32 mCourseIndex;                 // _48
	LimitGenInfo mLimitGenInfo;       // _4C
	LimitGenInfo mLoopGenInfo;        // _78
	CaveOtakaraInfo mCaveOtakaraInfo; // _9C
	int mGroundOtakaraMax;            // _CC
	Matrixf mDemoMatrix;              // _D0
};

#define MAX_LEVELS (4)

struct Stages {
	Stages();

	void update();
	CourseInfo* getCourseInfo(char*);
	CourseInfo* getCourseInfo(int);
	void draw2d();
	void dump();
	void read(Stream&);

	static void createMapMgr(CourseInfo*, RouteMgr*);

	inline u16 getCourseCount() const { return mCourseCount; }

	CourseInfo mCourseInfo; // _00
	u16 mCourseCount;       // _100
	u32 _104;               // _104
	u16 _108;               // _108
	u8 _10A;                // _10A
};

extern Stages* stageList;
} // namespace Game

#endif
