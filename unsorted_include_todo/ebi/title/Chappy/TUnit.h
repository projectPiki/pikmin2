#ifndef _EBI_TITLE_CHAPPY_TUNIT_H
#define _EBI_TITLE_CHAPPY_TUNIT_H

/*
    __vt__Q43ebi5title6Chappy5TUnit:
    .4byte 0
    .4byte 0
    .4byte getCreatureType__Q43ebi5title6Chappy5TUnitFv
    .4byte isCalc__Q43ebi5title6Chappy5TUnitFv
*/

namespace ebi {
namespace title {
namespace Chappy {
struct TUnit {
	virtual void getCreatureType(); // _08 (inline)
	virtual void isCalc();          // _0C

	void setController(Controller*);
	void init(ebi::title::Chappy::TMgr*);
	void startZigzagWalk(Vector2<float>&, Vector2<float>&);
	void goHome();
	void outOfCalc();
	void isController();
	void startAIState_(ebi::title::Chappy::TUnit::enumAIState);
	void update();
};
} // namespace Chappy
} // namespace title
} // namespace ebi

#endif
