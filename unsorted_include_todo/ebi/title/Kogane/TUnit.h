#ifndef _EBI_TITLE_KOGANE_TUNIT_H
#define _EBI_TITLE_KOGANE_TUNIT_H

/*
    __vt__Q43ebi5title6Kogane5TUnit:
    .4byte 0
    .4byte 0
    .4byte getCreatureType__Q43ebi5title6Kogane5TUnitFv
    .4byte isCalc__Q43ebi5title6Kogane5TUnitFv
*/

namespace ebi {
namespace title {
namespace Kogane {
struct TUnit {
	virtual void getCreatureType(); // _08 (inline)
	virtual void isCalc();          // _0C

	void setController(Controller*);
	void init(ebi::title::Kogane::TMgr*);
	void startZigzagWalk(Vector2<float>&, Vector2<float>&);
	void goHome();
	void outOfCalc();
	void isController();
	void startState(ebi::title::Kogane::TUnit::enumState);
	void update();
};
} // namespace Kogane
} // namespace title
} // namespace ebi

#endif
