#ifndef _OG_SCREEN_PIKMINCOUNTER_H
#define _OG_SCREEN_PIKMINCOUNTER_H

#include "JSystem/J2D/J2DPane.h"
#include "P2DScreen.h"
#include "og/Screen/Data.h"

namespace og {
namespace Screen {
struct CallBack_CatchPiki;
struct ScaleMgr;

struct PikminCounter : public P2DScreen::Mgr_tuning {
	PikminCounter();

	virtual ~PikminCounter() { }           // _08 (weak)
	virtual void update();                 // _30
	virtual void setCallBack(JKRArchive*); // _A0

	void setParam(DataGame&, DataNavi&);

	// unused/inline
	void setCallBackCommon(JKRArchive*, bool);

	// _00      = VTBL
	// _00-_148 = P2DScreen::Mgr_tuning
	DataGame mDataGame;             // _148
	DataNavi mDataNavi;             // _164
	CallBack_CatchPiki* mCatchPiki; // _17C
	u32 _180;                       // _180
	u32 _184;                       // _184
	u32 _188;                       // _188
	bool mIsTotalPokoActive;        // _18C
	J2DPane* mPaneSublevel;         // _190
	ScaleMgr* mScaleMgr;            // _194
	Vector2f mStandardPos;          // _198
	Vector2f mCurrPos;              // _1A0
};

struct PikminCounterCave : public PikminCounter {
	virtual ~PikminCounterCave() { }       // _08 (weak)
	virtual void setCallBack(JKRArchive*); // _A0

	// _00      = VTBL
	// _00-_1A8 = PikminCounter
};

struct PikminCounterChallenge1P : public PikminCounter {
	virtual ~PikminCounterChallenge1P() { } // _08 (weak)
	virtual void setCallBack(JKRArchive*);  // _A0

	// _00      = VTBL
	// _00-_1A8 = PikminCounter
};
} // namespace Screen
} // namespace og

#endif
