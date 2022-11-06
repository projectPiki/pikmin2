#ifndef _EBI_TITLE_ENTITIES_TPIKMIN_H
#define _EBI_TITLE_ENTITIES_TPIKMIN_H

#include "CNode.h"
#include "Vector2.h"
#include "ebi/Geometry.h"

struct JKRArchive;

namespace ebi {
namespace title {
struct TObjBase;

namespace Pikmin {
struct TBoidParamMgr : public CNode {
	virtual ~TBoidParamMgr(); // _08 (weak)

	// _00     = VTBL
	// _00-_18 = CNode
};

struct TUnit {
	enum enumState { UNKNOWN = 0 };

	TUnit();

	~TUnit();

	virtual void getCreatureType(); // _08 (weak)
	virtual void isCalc();          // _0C

	void init(TMgr*, long);
	void goDestination();
	void beAttacked();
	void alive();
	void isAssemble();
	void isWalk();
	void startState(enumState);
	void update();
	void updateSmoothWalk_(Vector2f&);
	void updateEnemyReaction_();

	// _00 = VTBL
};

struct TMgr : public CNode {
	TMgr();

	virtual ~TMgr(); // _08 (weak)

	void setArchive(JKRArchive*);
	void initUnit();
	void update();
	void setStartPos(Vector2f*);
	void setDestPos(Vector2f*);
	void forceArriveDest();
	void assemble();
	void quickAssemble();
	void startBoid1(f32);
	void startBoid2(f32);
	void startBoid3(f32);
	void startWindBlow(EGEBox2f&);
	void startDemo();
	void enemyPushOut(TObjBase*);
	void updateCalcBoid_();
	void isAssemble();
	void getUnit(long);

	// _00     = VTBL
	// _00-_18 = CNode
};
} // namespace Pikmin
} // namespace title
} // namespace ebi

#endif
