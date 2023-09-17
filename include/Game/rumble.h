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
	inline RumbleNode()
	    : CNode()
	    , mNodeIdx(-1)
	    , mCurrentIntensity(0.0f)
	    , mDefaultIntensity(0.0f)
	    , mRumbleTimer(0.0f)
	    , _28(0.0f)
	    , mRumbleData(0)
	{
	}

	virtual ~RumbleNode() { } // _08 (weak)

	inline void setParameters(int idx, f32 curIntensity, f32 defIntensity, f32 timer, f32 p1, RumbleData* data)
	{
		mNodeIdx          = idx;
		mCurrentIntensity = curIntensity;
		mDefaultIntensity = defIntensity;
		mRumbleTimer      = timer;
		_28               = p1;
		mRumbleData       = data;
	}

	// _00     = VTBL
	// _00-_18 = CNode
	int mNodeIdx;            // _18
	f32 mCurrentIntensity;   // _1C
	f32 mDefaultIntensity;   // _20
	f32 mRumbleTimer;        // _24
	f32 _28;                 // _28
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
