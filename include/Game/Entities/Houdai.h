#ifndef _GAME_ENTITIES_HOUDAI_H
#define _GAME_ENTITIES_HOUDAI_H

#include "Game/EnemyAnimatorBase.h"
#include "Game/EnemyBase.h"
#include "Game/AABBWaterBox.h"

namespace Game {
namespace Houdai {
struct ProperAnimator : public EnemyAnimatorBase {
	virtual ~ProperAnimator() {};                                     // _00
	virtual void setAnimMgr(SysShape::AnimMgr*);                      // _04
	virtual SysShape::Animator& getAnimator() { return m_animator; }; // _08
	virtual SysShape::Animator& getAnimator(int);                     // _0C

	SysShape::Animator m_animator; // _10
};

struct EnemyInitialParamBase;

struct Obj : public EnemyBase {
	Obj();

	void setInitialSetting(EnemyInitialParamBase*);

	void createOnGroundEffect(int, WaterBox*);
	void createOffGroundEffect(int, WaterBox*);
};

struct HoudaiGroundCallBack {
	virtual void invokeOnGround(int, WaterBox*);
	virtual void invokeOffGround(int, WaterBox*);

	// _00 VTBL
	Obj* m_parent; // _04
};
} // namespace Houdai
} // namespace Game

#endif
