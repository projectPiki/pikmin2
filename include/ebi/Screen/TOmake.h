#ifndef _EBI_SCREEN_TOMAKE_H
#define _EBI_SCREEN_TOMAKE_H

#include "ebi/E2DCallBack.h"
#include "ebi/Screen/TScreenBase.h"
#include "ebi/Utility.h"
#include "P2DScreen.h"
#include "types.h"

namespace ebi {
namespace Screen {

// TODO: Data members.
struct TOmake : public TScreenBase {
	TOmake();

	~TOmake();

	virtual void doSetArchive(JKRArchive*); // _24
	virtual void doOpenScreen(ArgOpen*);    // _28
	virtual void doCloseScreen(ArgClose*);  // _2C
	virtual void doInitWaitState();         // _34
	virtual bool doUpdateStateOpen();       // _38
	virtual bool doUpdateStateWait();       // _3C
	virtual bool doUpdateStateClose();      // _40
	virtual void doDraw();                  // _44
	virtual char* getName();                // _48

	void setController(Controller*);
	void showPanes_() const;
	void hidePanes_() const;
	void openFromMovie_() const;
	void openFromCardE_() const;

	// _00     = VTBL
	// _00-_08 = TScreenBase
	int m_state2;                          // _0C
	EUTPadInterface_countNum m_input;      // _10
	int m_currSel;                         // _3C
	Controller* m_controller;              // _40
	JUtility::TColor m_color1;             // _44
	u8 m_alpha;                            // _48
	int m_state;                           // _4C
	u32 m_counter;                         // _50
	int _54;                               // _54
	P2DScreen::Mgr_tuning* m_screenMain;   // _58
	J2DPane* m_paneWindow;                 // _5C
	J2DPane* m_paneTitle;                  // _60
	J2DPane* m_paneAButton;                // _64
	J2DPane* m_paneBButton;                // _68
	J2DPane* m_paneList1[7];               // _6C
	J2DPane* m_paneSelect;                 // _88
	J2DPane* m_paneList2[7];               // _8C
	J2DPane* m_paneList3[7];               // _A8
	J2DPane* m_paneList4[7];               // _C4
	E2DCallBack_AnmBase m_anims[3];        // _E0
	bool _194;                             // _194
	JGeometry::TBox2f m_box1;              // _198
	JGeometry::TBox2f m_box2;              // _1A8
	int _1B8;                              // _1B8
	int _1BC;                              // _1BC
	og::Screen::ScaleMgr m_scalemgr;       // _1C0
	f32 _1DC;                              // _1DC
	J2DPane* _1E0;                         // _1E0
	E2DCallBack_BlinkFontColor m_fonts[7]; // _1E4
	u64 m_mesgTags[7];                     // _3F8
	JUtility::TColor m_colors[12];         // _430
};

// TODO: Data members.
struct TOmakeCardE : public TScreenBase {
	TOmakeCardE();
	~TOmakeCardE();

	virtual void doSetArchive(JKRArchive*); // _24
	virtual void doOpenScreen(ArgOpen*);    // _28
	virtual void doCloseScreen(ArgClose*);  // _2C
	virtual void doInitWaitState();         // _34
	virtual bool doUpdateStateOpen();       // _38
	virtual bool doUpdateStateWait();       // _3C
	virtual bool doUpdateStateClose();      // _40
	virtual void doDraw();                  // _44
	virtual char* getName();                // _48

	// _00     = VTBL
	// _00-_08 = TScreenBase
	u8 _0C[0x164];
};

// TODO: Data members.
struct TOmakeGame : public TScreenBase {
	TOmakeGame();
	~TOmakeGame();

	virtual void doSetArchive(JKRArchive*); // _24
	virtual void doOpenScreen(ArgOpen*);    // _28
	virtual void doCloseScreen(ArgClose*);  // _2C
	virtual bool doUpdateStateOpen();       // _38
	virtual bool doUpdateStateWait();       // _3C
	virtual bool doUpdateStateClose();      // _40
	virtual void doDraw();                  // _44
	virtual char* getName();                // _48

	bool isDelegateControl();
	bool openMsg(long);
	void setController(Controller*);
	void setSelfControl();

	// _00     = VTBL
	// _00-_08 = TScreenBase
	u8 _0C[0x2A8];
};
} // namespace Screen
} // namespace ebi

#endif
