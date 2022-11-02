#ifndef _EBI_TITLE_PIKMIN_TUNIT_H
#define _EBI_TITLE_PIKMIN_TUNIT_H

/*
    __vt__Q43ebi5title6Pikmin5TUnit:
    .4byte 0
    .4byte 0
    .4byte getCreatureType__Q43ebi5title6Pikmin5TUnitFv
    .4byte isCalc__Q43ebi5title6Pikmin5TUnitFv
    .4byte 0
*/

namespace ebi {
namespace title {
namespace Pikmin {
struct TUnit {
	virtual void getCreatureType(); // _08 (weak)
	virtual void isCalc();          // _0C
	virtual void _10() = 0;         // _10

	~TUnit();
	void init(ebi::title::Pikmin::TMgr*, long);
	void goDestination();
	void beAttacked();
	void alive();
	void isAssemble();
	void isWalk();
	void startState(ebi::title::Pikmin::TUnit::enumState);
	void update();
	void updateSmoothWalk_(Vector2f&);
	void updateEnemyReaction_();
	TUnit();
};
} // namespace Pikmin
} // namespace title
} // namespace ebi

#endif
