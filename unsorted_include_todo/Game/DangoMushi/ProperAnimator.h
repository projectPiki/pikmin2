#ifndef _GAME_DANGOMUSHI_PROPERANIMATOR_H
#define _GAME_DANGOMUSHI_PROPERANIMATOR_H

/*
    __vt__Q34Game10DangoMushi14ProperAnimator:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game10DangoMushi14ProperAnimatorFv
    .4byte setAnimMgr__Q24Game22EnemyBlendAnimatorBaseFPQ28SysShape7AnimMgr
    .4byte getAnimator__Q24Game22EnemyBlendAnimatorBaseFv
    .4byte getAnimator__Q24Game22EnemyBlendAnimatorBaseFi
    .4byte animate__Q24Game22EnemyBlendAnimatorBaseFf
    .4byte animate__Q24Game22EnemyBlendAnimatorBaseFif
    .4byte resetAnimSpeed__Q24Game17EnemyAnimatorBaseFv
    .4byte getTypeID__Q24Game22EnemyBlendAnimatorBaseFv
*/

namespace Game {
struct EnemyBlendAnimatorBase {
	virtual void _00() = 0;                      // _00
	virtual void setAnimMgr(SysShape::AnimMgr*); // _04
	virtual void getAnimator();                  // _08
	virtual void getAnimator(int);               // _0C
	virtual void animate(float);                 // _10
	virtual void animate(int, float);            // _14
	virtual void _18() = 0;                      // _18
	virtual void getTypeID();                    // _1C

	// _00 VTBL
};
} // namespace Game

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
namespace DangoMushi {
	struct ProperAnimator : public EnemyBlendAnimatorBase,
	                        public EnemyAnimatorBase {
		virtual ~ProperAnimator();                   // _00
		virtual void setAnimMgr(SysShape::AnimMgr*); // _04
		virtual void getAnimator();                  // _08
		virtual void getAnimator(int);               // _0C
		virtual void animate(float);                 // _10
		virtual void animate(int, float);            // _14
		virtual void resetAnimSpeed();               // _18
		virtual void getTypeID();                    // _1C

		// _00 VTBL
	};
} // namespace DangoMushi
} // namespace Game

#endif
