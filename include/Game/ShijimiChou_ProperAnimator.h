#ifndef _GAME_SHIJIMICHOU_PROPERANIMATOR_H
#define _GAME_SHIJIMICHOU_PROPERANIMATOR_H

#include "Game/EnemyAnimatorBase.h"

namespace Game {
namespace ShijimiChou {
	struct ProperAnimator : public EnemyAnimatorBase {
		virtual ~ProperAnimator();                   // _00
		virtual void setAnimMgr(SysShape::AnimMgr*); // _04
		virtual Animator& getAnimator();             // _08
		virtual Animator& getAnimator(int);          // _0C
	};
} // namespace ShijimiChou
} // namespace Game

#endif
