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
	// inline TypedProc(f32, f32);

	virtual void update(); // _08

	// inlined:
	~TypedProc() { }

	// inlined/unused:
	void endUpdate();
	void getBossFadeVolume();

	// _00-_0C = JSUList<EnemyBoss>
	// _0C     = VTBL
	f32 _04;                           // _10
	f32 _08;                           // _14
	f32 _0C;                           // _18
	f32 _10;                           // _1C
	int _14;                           // _20
	u32 _18;                           // _24, unknown
	u32 _1C;                           // _28, unknown
	u32 _20;                           // _2C
	DirectorUpdator* mDirectorUpdator; // _30
	u8 _28;                            // _34
	f32 _2C;                           // _38
};

/**
 * @size{0x34}
 */
struct TypedProc_MidBoss : public TypedProc {
	// inline TypedProc_MidBoss(f32, f32);

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
