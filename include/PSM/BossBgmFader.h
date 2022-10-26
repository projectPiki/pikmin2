#ifndef _PSM_BOSSBGMFADER_H
#define _PSM_BOSSBGMFADER_H

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
	// inline TypedProc(float, float);

	virtual void update(); // _08

	// inlined/unused:
	// ~TypedProc();
	void endUpdate();
	void getBossFadeVolume();

	// _00 VTBL
	float _04;                               // _04
	float _08;                               // _08
	float _0C;                               // _0C
	float _10;                               // _10
	u32 _14;                                 // _14, unknown
	u32 _18;                                 // _18, unknown
	u32 _1C;                                 // _1C, unknown
	u32 _20;                                 // _20
	PSM::DirectorUpdator* m_directorUpdator; // _24
	u8 _28;                                  // _28
	u8 _29[0x3];                             // _29, unknown/padding
	float _2C;                               // _2C
};

/**
 * @size{0x34}
 */
struct TypedProc_MidBoss : public TypedProc {
	// inline TypedProc_MidBoss(float, float);

	virtual void update(); // _08

	// inlined/unused:
	// ~TypedProc_MidBoss();

	// _00      = VTBL
	// _00-_30  = TypedProc
	PSM::DirectorUpdator* _30; // _30
};

/**
 * @size{0x44}
 */
struct Mgr {
	Mgr();

	virtual ~Mgr(); // _08 (weak)

	void appendTarget(JSULink<PSM::EnemyBoss>*);
	void exec();

	// _00 VTBL
	JSUList<PSM::EnemyBoss> m_enemyBossList; // _04
	TypedProc_MidBoss m_typedProc;           // _10
};
} // namespace BossBgmFader
} // namespace PSM

#endif
