#ifndef _EBI_SCREEN_TMEMORYCARD_H
#define _EBI_SCREEN_TMEMORYCARD_H

#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JKR/JKRArchive.h"
#include "ebi/E2DCallBack.h"
#include "ebi/TYesNoCursor.h"

struct Controller;
struct J2DPane;

namespace P2DScreen {
struct Mgr_tuning;
} // namespace P2DScreen

namespace ebi {
namespace Screen {
struct TMemoryCard {
	enum enumState { UNKNOWN };

	TMemoryCard();

	~TMemoryCard();

	void loadResource(JKRHeap*);
	void setArchive(JKRArchive*);
	void destroyResource();
	void open(long);
	void close();
	void killScreen();
	void setSelect(bool);
	bool isFinish();
	void startState(enumState);
	void update();
	void draw();

	// unused/inlined:
	bool isDecide();

	u32 _00;                                         // _00, unknown
	Controller* m_controller;                        // _04
	uint _08;                                        // _08
	uint _0C;                                        // _0C
	int _10;                                         // _10
	int _14;                                         // _14
	u8 _18;                                          // _18
	u8 _19;                                          // _19
	P2DScreen::Mgr_tuning* _1C;                      // _1C
	J2DPane* _20;                                    // _20
	J2DPane* _24;                                    // _24
	J2DPane* _28;                                    // _28
	J2DPane* _2C;                                    // _2C
	J2DPane* _30;                                    // _30
	J2DPane* _34;                                    // _34
	J2DPane* _38;                                    // _38
	J2DPane* _3C;                                    // _3C
	E2DCallBack_BlinkFontColor m_blinkFontColors[2]; // _40
	E2DCallBack_AnmBase m_anmBases[5];               // _D8
	E2DCallBack_CalcAnimation m_calcAnimation;       // _204
	TYesNoCursor _224;                               // _224
	TYesNoCursor _25C;                               // _25C
	u8 _294;                                         // _294
};
} // namespace Screen
} // namespace ebi

#endif
