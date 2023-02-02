#ifndef _EBI_TITLE_ENTITIES_TKOGANE_H
#define _EBI_TITLE_ENTITIES_TKOGANE_H

#include "CNode.h"
#include "Vector2.h"
#include "ebi/title/TObjects.h"
#include "ebi/E3DGraph.h"
#include "BaseParm.h"

struct JKRArchive;
struct Controller;
struct J3DModelData;

namespace ebi {
namespace title {
namespace Kogane {
struct TUnit;

struct TParam : public TParamBase {
	TParam();

	Parm<f32> mScale;            // _0C, b000
	Parm<f32> mCullRadius;       // _34, b001
	Parm<f32> mCollRadius;       // _5C, b002
	Parm<f32> mPikiReactRadius;  // _84, b003
	Parm<f32> mWalkRandomAngle;  // _AC, kg00
	Parm<f32> mWalkSpeed;        // _D4, kg01
	Parm<f32> mTurnRate;         // _FC, kg15
	Parm<f32> mMinWaitTime;      // _124, kg10
	Parm<f32> mMaxWaitTime;      // _14C, kg11
	Parm<f32> mMinMoveTime;      // _174, kg12
	Parm<f32> mMaxMoveTime;      // _19C, kg13
	Parm<f32> mControlStateTime; // _1C4, kg14
};

struct TAnimFolder {
	virtual void getAnimRes(long); // _08 (weak)

	// _00 = VTBL
	E3DAnimRes mAnims[2]; // _04
};

struct TAnimator {
	TAnimator();

	void setArchive(JKRArchive*);

	TAnimFolder mAnimFolder;  // _00
	J3DModelData* mModelData; // _84
};

struct TMgr : public CNode {
	TMgr();

	virtual ~TMgr(); // _08 (weak)

	void setArchive(JKRArchive*);
	void initUnit();

	// _00     = VTBL
	// _00-_18 = CNode
	TAnimator* mAnimator; // _18
	TParam mParams;       // _1C
	TUnit* mObject;       // _20C
};

struct TUnit : public TObjBase {
	enum enumState { UNKNOWN };

	virtual u32 getCreatureType(); // _08 (weak)
	virtual bool isCalc();         // _0C

	void setController(Controller*);
	void init(TMgr*);
	void startZigzagWalk(Vector2f&, Vector2f&);
	void goHome();
	void outOfCalc();
	bool isController();
	void startState(enumState);
	void update();

	// _00     = VTBL
	// _00-_2C = TObjBase
	u8 _2C[0x18];         // _2C, unknown
	Controller* mControl; // _44
	TMgr* mManager;       // _48
	E3DAnimCtrl mAnim;    // _4C
	u8 _60[0x8];          // _60, unknown
};
} // namespace Kogane
} // namespace title
} // namespace ebi

#endif
