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
	virtual ~EnemyAnimatorBase();                // _08
	virtual void setAnimMgr(SysShape::AnimMgr*); // _0C
	virtual void getAnimator();                  // _10
	virtual void getAnimator(int);               // _14
	virtual void animate(float);                 // _18
	virtual void animate(int, float);            // _1C
	virtual void resetAnimSpeed();               // _20

	// _00 VTBL
};
} // namespace Game

namespace Game {
struct EnemyBlendAnimatorBase : public EnemyAnimatorBase {
	virtual ~EnemyBlendAnimatorBase();           // _08
	virtual void setAnimMgr(SysShape::AnimMgr*); // _0C
	virtual void getAnimator();                  // _10
	virtual void getAnimator(int);               // _14
	virtual void animate(float);                 // _18
	virtual void animate(int, float);            // _1C
	virtual void getTypeID();                    // _24

	// _00 VTBL
};
} // namespace Game

#endif
