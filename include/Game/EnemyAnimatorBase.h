#ifndef _GAME_ENEMYANIMATORBASE_H
#define _GAME_ENEMYANIMATORBASE_H

namespace SysShape {
struct AnimMgr;
}

namespace Game {
struct EnemyAnimatorBase {
	virtual ~EnemyAnimatorBase();

	virtual void setAnimMgr(SysShape::AnimMgr*) = 0;
	virtual void getAnimMgr()                   = 0;
	virtual void getAnimMgr(int)                = 0;
	virtual void animate(float);
	virtual void animate(int, float);
	virtual void resetAnimSpeed();
	virtual void getTypeID();
};
} // namespace Game

#endif