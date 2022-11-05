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

	virtual ~PikminCounter();              // _08 (weak)
	virtual void update();                 // _30
	virtual void setCallBack(JKRArchive*); // _A0

	void setParam(DataGame&, DataNavi&);

	// _00      = VTBL
	// _00-_148 = P2DScreen::Mgr_tuning
	DataGame m_dataGame;                     // _148
	DataNavi m_dataNavi;                     // _164
	CallBack_CatchPiki* m_callBackCatchPiki; // _17C
	u8 _180[0xC];                            // _180, unknown
	u8 _18C;                                 // _18C
	void* _190;                              // _190, unknown ptr
	ScaleMgr* m_scaleMgr;                    // _194
	f32 _198;                                // _198
	f32 _19C;                                // _19C
	f32 _1A0;                                // _1A0
	f32 _1A4;                                // _1A4
};

struct PikminCounterCave : public PikminCounter {
	virtual ~PikminCounterCave();          // _08 (weak)
	virtual void setCallBack(JKRArchive*); // _A0

	// _00      = VTBL
	// _00-_1A8 = PikminCounter
};

struct PikminCounterChallenge1P : public PikminCounter {
	virtual ~PikminCounterChallenge1P();   // _08 (weak)
	virtual void setCallBack(JKRArchive*); // _A0

	// _00      = VTBL
	// _00-_1A8 = PikminCounter
};
} // namespace Screen
} // namespace og

#endif
