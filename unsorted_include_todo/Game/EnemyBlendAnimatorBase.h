#ifndef _GAME_ENEMYBLENDANIMATORBASE_H
#define _GAME_ENEMYBLENDANIMATORBASE_H

namespace Game {
struct EnemyAnimatorBase {
	virtual void _00() = 0;        // _00
	virtual void _04() = 0;        // _04
	virtual void _08() = 0;        // _08
	virtual void _0C() = 0;        // _0C
	virtual void _10() = 0;        // _10
	virtual void _14() = 0;        // _14
	virtual void resetAnimSpeed(); // _18

	// _00 VTBL
};
} // namespace Game

namespace Game {
struct EnemyBlendAnimatorBase : public EnemyAnimatorBase {
	virtual ~EnemyBlendAnimatorBase();           // _00
	virtual void setAnimMgr(SysShape::AnimMgr*); // _04
	virtual void getAnimator();                  // _08
	virtual void getAnimator(int);               // _0C
	virtual void animate(float);                 // _10
	virtual void animate(int, float);            // _14
	virtual void resetAnimSpeed();               // _18
	virtual void getTypeID();                    // _1C

	// _00 VTBL
};
} // namespace Game

#endif
