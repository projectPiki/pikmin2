#ifndef _EBI_TITLE_ENTITIES_TCHAPPY_H
#define _EBI_TITLE_ENTITIES_TCHAPPY_H

#include "CNode.h"
#include "Vector2.h"

struct JKRArchive;
struct Controller;

namespace ebi {
namespace title {
namespace Chappy {
struct TParam {
	// TODO
};

struct TAnimator {
	// TODO
};

struct TAnimFolder {
	virtual void getAnimRes(long); // _08 (weak)

	// _00 = VTBL
};

struct TMgr : public CNode {
	TMgr();

	virtual ~TMgr(); // _08 (weak)

	void setArchive(JKRArchive*);
	void initUnit();

	// _00     = VTBL
	// _00-_18 = CNode
};

struct TUnit {
	enum enumAIState { UNKNOWN };

	virtual u32 getCreatureType() { return 6; } // _08 (weak)
	virtual void isCalc();                      // _0C

	void setController(Controller*);
	void init(TMgr*);
	void startZigzagWalk(Vector2f&, Vector2f&);
	void goHome();
	void outOfCalc();
	void isController();
	void startAIState_(enumAIState);
	void update();

	// _00 = VTBL
};
} // namespace Chappy
} // namespace title
} // namespace ebi

#endif
