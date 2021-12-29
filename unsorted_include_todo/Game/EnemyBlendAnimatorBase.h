#ifndef _GAME_ENEMYBLENDANIMATORBASE_H
#define _GAME_ENEMYBLENDANIMATORBASE_H

/*
    __vt__Q24Game22EnemyBlendAnimatorBase:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game22EnemyBlendAnimatorBaseFv
    .4byte setAnimMgr__Q24Game22EnemyBlendAnimatorBaseFPQ28SysShape7AnimMgr
    .4byte getAnimator__Q24Game22EnemyBlendAnimatorBaseFv
    .4byte getAnimator__Q24Game22EnemyBlendAnimatorBaseFi
    .4byte animate__Q24Game22EnemyBlendAnimatorBaseFf
    .4byte animate__Q24Game22EnemyBlendAnimatorBaseFif
    .4byte resetAnimSpeed__Q24Game17EnemyAnimatorBaseFv
    .4byte getTypeID__Q24Game22EnemyBlendAnimatorBaseFv
*/

namespace Game {
struct EnemyAnimatorBase {
	virtual ~EnemyAnimatorBase();                // _00
	virtual void setAnimMgr(SysShape::AnimMgr*); // _04
	virtual void getAnimator();                  // _08
	virtual void getAnimator(int);               // _0C
	virtual void animate(float);                 // _10
	virtual void animate(int, float);            // _14
	virtual void resetAnimSpeed();               // _18

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
