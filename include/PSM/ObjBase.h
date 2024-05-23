#ifndef _PSM_OBJBASE_H
#define _PSM_OBJBASE_H

#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JSupport/JSUList.h"

namespace PSM {
#pragma enumalwaysint off
/**
 * Intended size: 1 byte
 */
enum CreatureCastType {
	CCT_CreatureObj        = 0,
	CCT_CreatureAnime      = 1,
	CCT_Enemy              = 2,
	CCT_EnemyHekoi         = 3,
	CCT_EnemyBoss          = 4,
	CCT_Unknown5           = 5,
	CCT_EnemyMidBoss       = 6,
	CCT_EnemyBigBoss       = 7,
	CCT_EnemyBig           = 8,
	CCT_EnemyNotAggressive = 9,
	CCT_WorkItem           = 10,
	CCT_Otakara            = 11,
	CCT_PelletOtakara      = 12,
	CCT_PelletItem         = 13,
	CCT_Piki               = 14,
	CCT_Navi               = 15,
};
#pragma enumalwaysint reset

struct ObjBase : public JSULink<ObjBase>, public JKRDisposer {
	ObjBase();

	// VTBL 1 (JKRDisposer, dtor-only)
	// VTBL 2 (self)
	virtual ~ObjBase();                         // _14
	virtual void frameEnd_onPlaySe()       = 0; // _18
	virtual CreatureCastType getCastType() = 0; // _1C

	// _10     = VTBL 1
	// _28     = VTBL 2
	// _00-_10 = JSUPtrLink
	// _10-_28 = JKRDisposer
};
} // namespace PSM

#endif
