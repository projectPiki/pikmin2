#ifndef _OG_SCREEN_DOPINGSCREEN_H
#define _OG_SCREEN_DOPINGSCREEN_H

#include "JSystem/J2D/J2DPane.h"
#include "P2DScreen.h"
#include "og/Screen/Data.h"
#include "Vector2.h"
#include "efx2d/T2DExtractUp.h"
#include "types.h"

namespace og {
namespace Screen {
struct ScaleMgr;

struct DopingCheck {
	DopingCheck();
	void init(J2DPane* spicyPane, J2DPane* bitterPane, ScaleMgr* spicyMgr, ScaleMgr* bitterMgr);
	void update();
	void effStart(J2DPane* pane);
	inline void startGetEff(J2DPane* pane);
	void startGetEff_Up();   // Spicy  'get' effect
	void startGetEff_Down(); // Bitter 'get' effect

	J2DPane* m_spicyPane;              // _00
	J2DPane* m_bitterPane;             // _04
	f32 m_naviLifeRatio;               // _08
	int m_followPiki;                  // _0C
	int m_nextThrowPiki;               // _10
	u32 m_spicySprayCount;             // _14
	u32 m_bitterSprayCount;            // _18
	u8 m_activeNaviID;                 // _1C
	u32* m_newSpicyCount;              // _20, unknown
	u32* m_newBitterCount;             // _24, unknown
	u32 m_oldSpicyCount;               // _28, unknown
	u32 m_oldBitterCount;              // _2C, unknown
	efx2d::T2DExtractUp* m_extractEfx; // _30, unknown
	ScaleMgr* m_spicyScaleMgr;         // _34
	ScaleMgr* m_bitterScaleMgr;        // _38
	f32 m_xOffset;                     // _3C
	u8 m_isUpdateCount;                // _40
};

struct DopingScreen : public P2DScreen::Mgr_tuning {
	DopingScreen();

	virtual ~DopingScreen() { } // _08 (weak)
	virtual void update();      // _30

	void setCallBack(JKRArchive* arc);
	void setParam(DataNavi& data);
	void adjPos(f32 x, f32 y);
	void setDopingEnable(bool gotSpicy, bool gotBitter);
	void openDopingUp();
	void openDopingDown();
	void openDopingKey();

	// _00      = VTBL
	// _00-_148 = P2DScreen::Mgr_tuning
	DopingCheck* m_dopingCheck;  // _148
	J2DPane* m_paneAll;          // _14C
	J2DPane* m_paneSpicySpray;   // _150
	J2DPane* m_paneBitterSpray;  // _154
	J2DPane* m_paneCenterDpad;   // _158
	J2DPane* m_paneBottleSpicy;  // _15C, these pane names are a leftover of the beta HUD
	J2DPane* m_paneBottleBitter; // _160
	Vector2f m_rootPosition;     // _164
	Vector2f m_offset;           // _16C
	bool m_isSpicySprayEnabled;  // _174
	bool m_isBitterSprayEnabled; // _175
	bool m_hasGotSpicySpray;     // _176
	bool m_hasGotBitterSpray;    // _177
	bool m_hasGotCenterDpad;     // _178
	f32 m_spicySprayGet;         // _17C
	f32 m_bitterSprayGet;        // _180
	f32 m_scaleJujiKey;          // _184
	ScaleMgr* m_scaleMgr1;       // _188
	ScaleMgr* m_scaleMgr2;       // _18C
	ScaleMgr* m_scaleMgr3;       // _190
	u32 _194;                    // _194, unknown
};
} // namespace Screen
} // namespace og

#endif
