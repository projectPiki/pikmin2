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
};

struct TUnit {
	enum enumState { UNKNOWN = 0 };

	virtual void getCreatureType(); // _08 (weak)
	virtual void isCalc();          // _0C

	~TUnit();
	void init(TMgr*, long);
	void goDestination();
	void beAttacked();
	void alive();
	void isAssemble();
	void isWalk();
	void startState(TUnit::enumState);
	void update();
	void updateSmoothWalk_(Vector2f&);
	void updateEnemyReaction_();
	TUnit();
};

struct TMgr : public CNode {
	virtual ~TMgr(); // _08 (weak)

	TMgr();
	void setArchive(JKRArchive*);
	void initUnit();
	void update();
	void setStartPos(Vector2f*);
	void setDestPos(Vector2f*);
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
