#ifndef _GAME_RUMBLE_H
#define _GAME_RUMBLE_H

#include "BaseParm.h"
#include "CNode.h"
#include "Parameters.h"
#include "Vector3.h"
#include "types.h"
#include "stream.h"

struct Controller;

namespace Game {
struct Navi;

enum RumbleType {
	// 0-7 are pre-programmed, variable intensity + duration
	RUMBLETYPE_PluckPiki        = 0, // 11 points, 1 big peak, 2 small peaks, duration 0.46s
	RUMBLETYPE_NaviDamage       = 1, // 19 points, 2 big peaks, 3 small peaks, duration 0.92s
	RUMBLETYPE_Nudge            = 2, // 7 points, gradual drop, duration 0.3s; also used for grabbing pikis
	RUMBLETYPE_Whistle          = 3, // 12 points, low continuous rumble, duration 1.5s; also for bulblax roar lol
	RUMBLETYPE_Unused4          = 4, // 4 points, 1 big peak, duration 0.2s; unused
	RUMBLETYPE_BigTreasureStart = 5, // 16 points, 5 dropping peaks, duration 2.6s
	RUMBLETYPE_HoudaiStart      = 6, // 16 points, 2 big broad peaks, duration 7.6s
	RUMBLETYPE_HoudaiDeath      = 7, // 24 points, long low rumble with 1 big peak halfway, duration 7.03s

	// 8-16 are calculated on the fly, set intensity
	RUMBLETYPE_Fixed8  = 8,  // no data, manual parm calc
	RUMBLETYPE_Fixed9  = 9,  // no data, manual parm calc
	RUMBLETYPE_Fixed10 = 10, // no data, manual parm calc
	RUMBLETYPE_Fixed11 = 11, // no data, manual parm calc
	RUMBLETYPE_Fixed12 = 12, // no data, manual parm calc
	RUMBLETYPE_Fixed13 = 13, // no data, manual parm calc
	RUMBLETYPE_Fixed14 = 14, // no data, manual parm calc
	RUMBLETYPE_Fixed15 = 15, // no data, manual parm calc
	RUMBLETYPE_Fixed16 = 16, // no data, manual parm calc
};

enum RumbleID {
	RUMBLEID_Navi0 = 0,
	RUMBLEID_Navi1 = 1,
	RUMBLEID_Both  = 2,
};

struct RumbleData {
	RumbleData();

	inline void read(Stream& stream)
	{
		mCount = stream.readInt();
		if (mCount <= 0) {
			return;
		}

		mTimes       = new f32[mCount];
		mIntensities = new f32[mCount];

		for (int j = 0; j < mCount; j++) {
			mTimes[j] = stream.readFloat();
		}

		for (int j = 0; j < mCount; j++) {
			mIntensities[j] = stream.readFloat();
		}
	}

	int mCount;        // _00
	f32* mTimes;       // _04, times at which to change intensity
	f32* mIntensities; // _08, values to set intensity to
};

struct RumbleDataMgr {
	RumbleDataMgr();

	RumbleData* getRumbleData(int idx);
	void read(Stream& stream);

	int mDataCnt;         // _00
	RumbleData* mDataArr; // _04
};

struct RumbleNode : public CNode {
	RumbleNode();

	virtual ~RumbleNode() { } // _08 (weak)

	inline void setParameters(int idx, f32 curIntensity, f32 defIntensity, f32 timer, f32 timeLimit, RumbleData* data)
	{
		mNodeIdx          = idx;
		mCurrentIntensity = curIntensity;
		mDefaultIntensity = defIntensity;
		mRumbleTimer      = timer;
		mRumbleTimeLimit  = timeLimit;
		mRumbleData       = data;
	}

	// unused/inlined:
	void update();
	void startRumble(int, f32, RumbleData*, f32);
	bool isSameLabel(int);
	bool isRumbleEnd();

	// _00     = VTBL
	// _00-_18 = CNode
	int mNodeIdx;            // _18
	f32 mCurrentIntensity;   // _1C
	f32 mDefaultIntensity;   // _20
	f32 mRumbleTimer;        // _24, for rumble without data
	f32 mRumbleTimeLimit;    // _28, for rumble without data
	RumbleData* mRumbleData; // _2C
};

struct ContRumble {
	ContRumble(int padChannel, int nodeCount);

	void init();
	void update();
	void setController(bool);
	void startRumble(int idx, f32 intensity);
	void rumbleStop();
	void rumbleStop(int idx);
	void getRumbleParameter(int idx, f32& intensity, f32& p1);

	bool mIsActive;           // _00
	int mPadChannel;          // _04
	f32 mTotalIntensity;      // _08
	f32 mRumbleTimer;         // _0C
	f32 mRumbleTimeoutTimer;  // _10
	RumbleNode* mParentNode;  // _14
	RumbleNode* mActiveNodes; // _18
	RumbleDataMgr* mDataMgr;  // _1C
};

struct RumbleMgr : public CNode {
	struct Parms : public Parameters {
		inline Parms()
		    : Parameters(nullptr, "RumbleParms")
		    , mMaxDistance(this, 'rrdm', "Max Distance", 750.0f, 0.0f, 1000.0f)
		{
		}

		Parm<f32> mMaxDistance; // _0C, rrdm
	};

	RumbleMgr();

	virtual ~RumbleMgr() { } // _08 (weak)

	void loadResource();
	void init();
	void update();
	void startRumble(int type, Vector3f& pos, int rumbleID);
	void startRumble(int type, int rumbleID);
	void stopRumble(int type, int rumbleID);
	void stopRumble(int rumbleID);
	bool isRumbleUpdateOn();
	void setZukanRumble(Controller* controller, Vector3f* zukanPos);
	bool isStartAndEnd(int* startEndData, int rumbleID);
	void readRumbleParms(char* fileName);
	void readRumbleData(char* fileName);

	// _00     = VTBL
	// _00-_18 = CNode
	bool mIsRumbleActive;     // _18
	Navi** mNavis;            // _1C, array of size 2, one for each captain
	ContRumble** mContRumble; // _20, array of size 2, one for each captain
	Parms* mParms;            // _24
	RumbleDataMgr* mDataMgr;  // _28
	Controller* mController;  // _2C
	Vector3f* mZukanPosition; // _30, position to use in Piklopedia in place of captain position
};

extern RumbleMgr* rumbleMgr;
} // namespace Game

#endif
