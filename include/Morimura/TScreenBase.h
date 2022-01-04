#ifndef _MORIMURA_TSCREENBASE_H
#define _MORIMURA_TSCREENBASE_H

#include "types.h"

struct Graphics;
struct J2DPerspGraph;
struct J2DScreen;
struct JKRArchive;

namespace og {
namespace Screen {
struct AnimScreen;
struct ScaleMgr;
} // namespace Screen
} // namespace og

namespace Morimura {
struct TScreenBase {
	TScreenBase(JKRArchive*, int);

	virtual void create(const char*, unsigned long); // _00
	virtual void update();                           // _04
	virtual void draw(Graphics&, J2DPerspGraph*);    // _08

	// _00 VTBL
	og::Screen::AnimScreen** m_apAnimScreens; // _04
	J2DScreen* m_pJ2DScreen_0x8; // _08 This might be P2DScreen/Mgr?
	JKRArchive* m_pArchive_0xc;  // _0C
	int m_0x10;                  // _10
	int m_animCount;             // _14
};

struct TSelectExplanationWindow : public TScreenBase {
	TSelectExplanationWindow(JKRArchive*, int);

	/* inherited from TScreenBase */
	virtual void update();                        // _04
	virtual void draw(Graphics&, J2DPerspGraph*); // _08
	virtual void _0C() = 0;

	void openWindow();
	void closeWindow();

	// _00 VTBL
	// inherited from TScreenBase
	i32 unknown_0x18;                     // _18
	float _1C;                            // _1C
	float _20;                            // _20
	float _24;                            // _24
	float _28;                            // _28
	og::Screen::ScaleMgr* pScaleMgr_0x2c; // _2C
};
} // namespace Morimura
#endif
