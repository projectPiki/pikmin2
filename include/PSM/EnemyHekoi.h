#ifndef _PSM_ENEMYHEKOI_H
#define _PSM_ENEMYHEKOI_H

#include "PSM/EnemyBase.h"

namespace PSM {
struct EnemyHekoi : public EnemyBase {
	// vtable 2 (Creature)
	virtual ~EnemyHekoi() { }              // _04
	virtual CreatureCastType getCastType() // _0C
	{
		return CCT_EnemyHekoi;
	}

	// _10     = VTBL 1
	// _28     = VTBL 2
	// _00-_E0 = EnemyBase
};
} // namespace PSM

#endif
