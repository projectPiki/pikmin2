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
struct TypedProc {
	// inline TypedProc(f32, f32);

	virtual void update(); // _08

	// inlined/unused:
	// ~TypedProc();
	void endUpdate();
	void getBossFadeVolume();

	// _00 VTBL
	f32 _04;                           // _04
	f32 _08;                           // _08
	f32 _0C;                           // _0C
	f32 _10;                           // _10
	u32 _14;                           // _14, unknown
	u32 _18;                           // _18, unknown
	u32 _1C;                           // _1C, unknown
	u32 _20;                           // _20
	DirectorUpdator* mDirectorUpdator; // _24
	u8 _28;                            // _28
	u8 _29[0x3];                       // _29, unknown/padding
	f32 _2C;                           // _2C
};

/**
 * @size{0x34}
 */
struct TypedProc_MidBoss : public TypedProc {
	// inline TypedProc_MidBoss(f32, f32);

	virtual void update(); // _08

	// inlined/unused:
	// ~TypedProc_MidBoss();

	// _00      = VTBL
	// _00-_30  = TypedProc
	DirectorUpdator* mBossUpdator; // _30
};

/**
 * @size{0x44}
 */
struct Mgr : ::PSSystem::SingletonBase<Mgr> {
	Mgr();

	virtual ~Mgr(); // _08 (weak)

	void appendTarget(JSULink<EnemyBoss>*);
	void exec();

	inline void setUpdator(::PSSystem::DirectorBase* director)
	{
		if (mEnemyBossList.mLinkCount) {
			mTypedProc.mBossUpdator = new DirectorUpdator(director, mEnemyBossList.mLinkCount, DirectorUpdator::TYPE_0);
		}
	}

	// _00 VTBL
	JSUList<EnemyBoss> mEnemyBossList; // _04
	TypedProc_MidBoss mTypedProc;      // _10
};
} // namespace BossBgmFader
} // namespace PSM

#endif
