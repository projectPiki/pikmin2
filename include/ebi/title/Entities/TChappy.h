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
};

struct TMgr : public CNode {
	virtual ~TMgr(); // _08 (weak)

	TMgr();
	void setArchive(JKRArchive*);
	void initUnit();
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
	void startAIState_(TUnit::enumAIState);
	void update();
};
} // namespace Chappy
} // namespace title
} // namespace ebi

#endif
