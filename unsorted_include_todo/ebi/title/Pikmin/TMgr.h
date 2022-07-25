#ifndef _EBI_TITLE_PIKMIN_TMGR_H
#define _EBI_TITLE_PIKMIN_TMGR_H

/*
    __vt__Q43ebi5title6Pikmin4TMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q43ebi5title6Pikmin4TMgrFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace ebi {
namespace title {
namespace Pikmin {
struct TMgr : public CNode {
	virtual ~TMgr(); // _08 (weak)

	TMgr();
	void setArchive(JKRArchive*);
	void initUnit();
	void update();
	void setStartPos(Vector2<float>*);
	void setDestPos(Vector2<float>*);
	void forceArriveDest();
	void assemble();
	void quickAssemble();
	void startBoid1(float);
	void startBoid2(float);
	void startBoid3(float);
	void startWindBlow(ebi::EGEBox2f&);
	void startDemo();
	void enemyPushOut(ebi::title::TObjBase*);
	void updateCalcBoid_();
	void isAssemble();
	void getUnit(long);
};
} // namespace Pikmin
} // namespace title
} // namespace ebi

#endif
