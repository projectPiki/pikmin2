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
	inline TypedProc(f32, f32);

	virtual void update(); // _08

	// inlined:
	~TypedProc() { }

	// inlined/unused:
	void endUpdate();
	void getBossFadeVolume();

	// _00-_0C = JSUList<EnemyBoss>
	// _0C     = VTBL
	f32 mFarDist;                      // _10
	f32 mMiddleDist;                   // _14
	f32 mNearDist;                     // _18
	f32 mStopDist;                     // _1C
	int mCurrState;                    // _20
	int mPrevState;                    // _24
	EnemyBoss* mCurrObj;               // _28
	f32 mMaxDistance;                  // _2C
	DirectorUpdator* mDirectorUpdator; // _30
	u8 mNeedJump;                      // _34
	f32 _38;                           // _38
};

/**
 * @size{0x34}
 */
struct TypedProc_MidBoss : public TypedProc {
	inline TypedProc_MidBoss(f32 a1, f32 a2)
	    : TypedProc(a1, a2)
	{
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

	inline void setUpdator(::PSSystem::DirectorBase* director)
	{
		if (mTypedProc.mLinkCount) {
			mTypedProc.mBossUpdator = new DirectorUpdator(director, mTypedProc.mLinkCount, DirectorUpdator::TYPE_0);
		}
	}

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
