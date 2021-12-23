#ifndef _PSM_ENEMYHEKOI_H
#define _PSM_ENEMYHEKOI_H

#include "PSM/EnemyBase.h"

namespace PSM {
struct EnemyHekoi : public EnemyBase {
	// vtable 2 (Creature)
	/**
	 * @reifiedAddress{80107AA0}
	 * @reifiedFile{plugProjectYamashitaU/enemyBase.cpp}
	 */
	virtual ~EnemyHekoi(); // _04
	/**
	 * @reifiedAddress{80107C04}
	 * @reifiedFile{plugProjectYamashitaU/enemyBase.cpp}
	 */
	virtual CreatureCastType getCastType() // _0C
	{
		return CCT_EnemyHekoi;
	}
};
} // namespace PSM

#endif
