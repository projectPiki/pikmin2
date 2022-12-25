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
	void setSelect_(bool);

	int m_state;                               // _00, unknown
	Controller* m_controller;                  // _04
	uint _08;                                  // _08
	uint _0C;                                  // _0C
	u32 _10;                                   // _10
	int _14;                                   // _14
	u8 _18;                                    // _18
	u8 _19;                                    // _19
	P2DScreen::Mgr_tuning* m_screenMain;       // _1C
	J2DTextBox* m_paneMsg1;                    // _20
	J2DTextBox* m_paneMsg2;                    // _24
	J2DTextBox* m_paneMsg3;                    // _28
	J2DTextBox* m_paneMsg4;                    // _2C
	J2DPane* m_pane_il00;                      // _30
	J2DPane* m_pane_il01;                      // _34
	J2DPane* m_pane_ir00;                      // _38
	J2DPane* m_pane_ir01;                      // _3C
	E2DCallBack_BlinkFontColor m_blinkFont[2]; // _40
	E2DCallBack_AnmBase m_anims[5];            // _D8
	E2DCallBack_CalcAnimation m_calcAnim;      // _204
	TYesNoCursor m_cursor1;                    // _224
	TYesNoCursor m_cursor2;                    // _25C
	u8 _294;                                   // _294
};
} // namespace Screen
} // namespace ebi

#endif
