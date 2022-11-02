#ifndef _EBI_TITLE_ENTITIES_TKOGANE_H
#define _EBI_TITLE_ENTITIES_TKOGANE_H

#include "CNode.h"
#include "Vector2.h"

struct JKRArchive;
struct Controller;

namespace ebi {
namespace title {
namespace Kogane {
struct TAnimFolder {
	virtual void getAnimRes(long); // _08 (weak)
};

struct TMgr : public CNode {
	virtual ~TMgr(); // _08 (weak)

	TMgr();
	void setArchive(JKRArchive*);
	void initUnit();
};

struct TUnit {
	enum enumState { UNKNOWN };

	virtual void getCreatureType(); // _08 (weak)
	virtual void isCalc();          // _0C

	void setController(Controller*);
	void init(TMgr*);
	void startZigzagWalk(Vector2f&, Vector2f&);
	void goHome();
	void outOfCalc();
	void isController();
	void startState(TUnit::enumState);
	void update();
};
} // namespace Kogane
} // namespace title
} // namespace ebi

#endif
