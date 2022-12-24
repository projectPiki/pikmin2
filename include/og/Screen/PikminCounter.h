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
	DataGame m_dataGame;             // _148
	DataNavi m_dataNavi;             // _164
	CallBack_CatchPiki* m_catchPiki; // _17C
	u32 _180;                        // _180
	u32 _184;                        // _184
	u32 _188;                        // _188
	bool m_isTotalPokoActive;        // _18C
	J2DPane* m_paneSublevel;         // _190
	ScaleMgr* m_scaleMgr;            // _194
	Vector2f m_standardPos;          // _198
	Vector2f m_currPos;              // _1A0
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
