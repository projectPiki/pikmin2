#ifndef _OG_SCREEN_DOPINGSCREEN_H
#define _OG_SCREEN_DOPINGSCREEN_H

#include "JSystem/J2D/J2DPane.h"
#include "P2DScreen.h"
#include "og/Screen/Data.h"
#include "Vector2.h"

namespace og {
namespace Screen {
struct ScaleMgr;

struct DopingCheck {
	J2DPane* _00;  // _00
	J2DPane* _04;  // _04
	f32 _08;       // _08
	int _0C;       // _0C
	int _10;       // _10
	int _14;       // _14
	int _18;       // _18
	u8 _1C;        // _1C
	void* _20;     // _20, unknown
	void* _24;     // _24, unknown
	u32 _28;       // _28, unknown
	u32 _2C;       // _2C, unknown
	void* _30;     // _30, unknown
	ScaleMgr* _34; // _34
	ScaleMgr* _38; // _38
	u32 _3C;       // _3C
	u8 _40;        // _40
};

struct DopingScreen : public P2DScreen::Mgr_tuning {
	DopingScreen();

	virtual ~DopingScreen(); // _08 (weak)
	virtual void update();   // _30

	void setCallBack(JKRArchive*);
	void setParam(DataNavi&);
	void adjPos(f32, f32);
	void setDopingEnable(bool, bool);
	void openDopingUp();
	void openDopingDown();
	void openDopingKey();

	// _00      = VTBL
	// _00-_148 = P2DScreen::Mgr_tuning
	DopingCheck* m_dopingCheck; // _148
	void* _14C;                 // _14C, unknown
	J2DPane* _150;              // _150
	J2DPane* _154;              // _154
	J2DPane* _158;              // _158
	J2DPane* _15C;              // _15C
	J2DPane* _160;              // _160
	Vector2f _164;              // _164
	Vector2f _16C;              // _16C
	bool _174;                  // _174, doping enabled 1?
	bool _175;                  // _174, doping enabled 2?
	u8 _176;                    // _176
	u8 _177;                    // _177
	u8 _178;                    // _178
	f32 _17C;                   // _17C
	f32 _180;                   // _180
	f32 _184;                   // _184
	ScaleMgr* _188;             // _188
	ScaleMgr* _18C;             // _18C
	ScaleMgr* _190;             // _190
	u8 _194[0x4];               // _194, unknown
};
} // namespace Screen
} // namespace og

#endif
