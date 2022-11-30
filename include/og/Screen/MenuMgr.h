#ifndef _OG_SCREEN_MENUMGR_H
#define _OG_SCREEN_MENUMGR_H

#include "types.h"
#include "Vector2.h"

struct J2DGrafContext;
struct J2DPane;
struct J2DScreen;
namespace efx2d {
struct T2DCursor;
}
namespace og {
namespace Screen {
struct ScaleMgr;
}
} // namespace og

namespace og {
namespace Screen {
// Size: 0x78
struct MenuMgr {
	MenuMgr();
	void calcCenter(J2DPane*, Vector2f*);
	void calcPoint(Vector2f*, Vector2f*, float, Vector2f*);
	void draw(J2DGrafContext*);
	void init(J2DScreen*, u16, u64, u64, u64);
	void init(J2DScreen*, u16, u64, u64, u64, u64, u64);
	void init2taku(J2DScreen*, u64, u64, u64, u64, u64, u64, u64, u64);
	void init2takuTitle(J2DScreen*, u64, u64, u64, u64, u64, u64, u64, u64);
	void initCommon();
	void initSub(J2DScreen*, u16, u64, u64, u64);
	void initSelNum(u16);
	void killCursor();
	void startCursor(float);
	void select(u16);
	void selectSub(u16);
	void update();
	void MenuOnOff();

	int _00;                     // _00
	float _04;                   // _04
	u16 m_elementCount;          // _08
	u16 m_currentSelectionIndex; // _0A
	float _0C;                   // _0C
	float _10;                   // _10
	J2DPane** _14;               // _14 /* ptr to array of ptrs */
	J2DPane** _18;               // _18 /* ptr to array of ptrs */
	J2DPane** _1C;               // _1C /* ptr to array of ptrs */
	ScaleMgr* m_scaleMgrs;       // _20 /* ptr to array */
	J2DPane** _24;               // _24 /* ptr to array of ptrs */
	J2DPane** _28;               // _28 /* ptr to array of ptrs */
	u8 _2C;                      // _2C
	u8 _2D;                      // _2D
	char m_doScale;              // _2E
	float _30;                   // _30
	float _34;                   // _34
	float _38;                   // _38
	float _3C;                   // _3C
	efx2d::T2DCursor* _40;       // _40
	efx2d::T2DCursor* _44;       // _44
	u8 _48;                      // _48
	float _4C;                   // _4C
	float _50;                   // _50
	float _54;                   // _54
	float _58;                   // _58
	float _5C;                   // _5C
	float _60;                   // _60
	float _64;                   // _64
	float _68;                   // _68
	float _6C;                   // _6C
	u16 _70;                     // _70
	float _74;                   // _74
};
} // namespace Screen
} // namespace og

#endif
