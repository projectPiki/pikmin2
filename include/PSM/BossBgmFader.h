#ifndef _PSM_BOSSBGMFADER_H
#define _PSM_BOSSBGMFADER_H

#include "PSSystem/PSCommon.h"
#include "types.h"
#include "PSM/Director.h"
#include "PSM/EnemyBoss.h"
#include "JSystem/JSupport/JSUList.h"

namespace PSM {
namespace BossBgmFader {

/**
 * @size{0x30}
 */
struct TypedProc : public JSUList<EnemyBoss> {
	enum ProcState {
		PROC_None      = 0, // no boss sound
		PROC_Fade      = 1, //
		PROC_MainLoop  = 2,
		PROC_Directed  = 3,
		PROC_Disappear = 4,
	};

	TypedProc(f32 maxDist, f32 fadeRange);

	virtual void update(); // _08

	// inlined:
	~TypedProc() { }

	// inlined/unused:
	void endUpdate();
	f32 getBossFadeVolume();

	// _00-_0C = JSUList<EnemyBoss>
	// _0C     = VTBL
	f32 mMaxDist;                      // _10, dist > mMaxDist = no boss sound
	f32 mFadeDist;                     // _14, mMaxDist > dist > mFadeDist = boss music fades out
	f32 mFadeRange;                    // _18, distance between mMaxDist and mFadeDist
	f32 mDirectDist;                   // _1C, dist < mDirectDist = directed boss music; dist > mDirectDist = just main loop
	int mCurrProcState;                // _20, see ProcState enum
	int mPrevProcState;                // _24, see ProcState enum
	EnemyBoss* mNearestBoss;           // _28
	f32 mBossDistance;                 // _2C, distance to nearest boss
	DirectorUpdator* mDirectorUpdator; // _30
	bool mNeedJump;                    // _34
};

/**
 * @size{0x34}
 */
struct TypedProc_MidBoss : public TypedProc {
	inline TypedProc_MidBoss(f32 maxDist, f32 fadeRange)
	    : TypedProc(maxDist, fadeRange)
	{
		mDirectorUpdator = nullptr;
	}

	virtual void update(); // _08

	// inlined:
	~TypedProc_MidBoss() { }

	// _0C      = VTBL
	// _00-_30  = TypedProc
	DirectorUpdator* mBossUpdator; // _3C
};

/**
 * @size{0x44}
 */
struct Mgr : ::PSSystem::SingletonBase<Mgr> {
	Mgr();

	// virtual ~Mgr() { } // _08 (weak)

	void appendTarget(JSULink<EnemyBoss>*);
	void exec();

	inline bool checkBossActive()
	{
		bool ret = false;
		FOREACH_NODE(JSULink<EnemyBoss>, mTypedProc.getFirst(), link)
		{
			EnemyBoss* obj = link->getObject();
			if (obj->_FE) {
				ret = true;
			}
		}
		return ret;
	}

	// _00 VTBL
	TypedProc_MidBoss mTypedProc; // _04
};
} // namespace BossBgmFader
} // namespace PSM

#endif
