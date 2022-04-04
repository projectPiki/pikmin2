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
	// vtable 1 (JSUPtrLink, empty)
	// vtable 2 (JKRDisposer + self?)
	// thunk to dtor // _00
	virtual ~ObjBase();                         // _04
	virtual void frameEnd_onPlaySe()       = 0; // _08
	virtual CreatureCastType getCastType() = 0; // _0C

	// _00 VTBL
};
} // namespace PSM

#endif
