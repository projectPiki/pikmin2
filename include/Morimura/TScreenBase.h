#ifndef _MORIMURA_TSCREENBASE_H
#define _MORIMURA_TSCREENBASE_H

namespace Morimura {
struct TScreenBase {
	virtual void create(const char*, unsigned long); // _00
	virtual void update();                           // _04
	virtual void draw(Graphics&, J2DPerspGraph*);    // _08

	// _00 VTBL
	AnimScreen** m_apAnimScreens; // _04
	J2DScreen * m_pJ2DScreen_0x8; // _08 This might be P2DScreen/Mgr?
	JKRArchive * m_pArchive_0xc;  // _0C
	int m_0x10; // _10
	int m_animCount; // _14
};

struct TSelectExplanationWindow : public TScreenBase {
	/* inherited from TScreenBase */ // virtual void create(const char*, unsigned long); // _00
	virtual void update();                           // _04
	virtual void draw(Graphics&, J2DPerspGraph*);    // _08

	// _00 VTBL
	// inherited from TScreenBase
	int unknown_0x18; // _18
	float _1C; // _1C
	float _20; // _20
	float _24; // _24
	float _28; // _28
	ScaleMgr * pScaleMgr_0x2c; // _2C
};
} // namespace Morimura
#endif
