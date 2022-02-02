#ifndef _GAME_ENTITIES_OTAKARABASE_H
#define _GAME_ENTITIES_OTAKARABASE_H

#include "Game/EnemyAnimatorBase.h"

namespace Game {
namespace OtakaraBase {
struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() {};                                     // _00
	virtual void setAnimMgr(SysShape::AnimMgr*);                      // _04
	virtual SysShape::Animator& getAnimator() { return m_animator; }; // _08
	virtual SysShape::Animator& getAnimator(int);                     // _0C

	SysShape::Animator m_animator; // _10
};
} // namespace OtakaraBase
} // namespace Game

#endif
