#ifndef _PSM_OBJBASE_H
#define _PSM_OBJBASE_H

#include "JSystem/JKR/JKRDisposer.h"
#include "JSystem/JSupport/JSUList.h"

namespace PSM {
#pragma enumalwaysint off
/*
 * Intended size: 1 byte
 */
enum CreatureCastType {
	CCT_CreatureObj = 0x0,
	CCT_CreatureAnime,
	CCT_Enemy,
	CCT_EnemyHekoi,
	CCT_EnemyBoss,
	CCT_Unknown5,
	CCT_EnemyMidBoss,
	CCT_EnemyBigBoss,
	CCT_EnemyBig,
	CCT_EnemyNotAggressive,
	CCT_WorkItem,
	CCT_Otakara,
	CCT_PelletOtakara,
	CCT_PelletItem,
	CCT_Piki,
	CCT_Navi,
};
#pragma enumalwaysint reset

struct ObjBase : public JSUPtrLink, public JKRDisposer {
	// VTBL 1 (JKRDisposer, dtor-only)
	// VTBL 2 (self)
	virtual ~ObjBase();                         // _14 (weak)
	virtual void frameEnd_onPlaySe()       = 0; // _18
	virtual CreatureCastType getCastType() = 0; // _1C

	// _10     = VTBL 1
	// _28     = VTBL 2
	// _00-_10 = JSUPtrLink
	// _10-_28 = JKRDisposer
};
} // namespace PSM

#endif
