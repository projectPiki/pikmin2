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
	enum enumState { MEMCARD_Disabled, MEMCARD_Selection, MEMCARD_Message, MEMCARD_Finish };

	enum openMsg {
		OPEN_None,
		OPEN_NoCard,
		OPEN_CardDamaged,
		OPEN_WrongDevice,
		OPEN_CantUseCard,
		OPEN_DoFormat,
		OPEN_NotEnoughSpace,
		OPEN_GoToIPL,
		OPEN_CantFormat,
		OPEN_CardFormatted,
		OPEN_Formatting,
		OPEN_DoFormatConfirm,
		OPEN_CantUseCard2,
		OPEN_DoGotoIPL,
		OPEN_DoPlayNoSaving,
		OPEN_DoCreateFile,
		OPEN_NoFileFound,
		OPEN_CantCreateFile,
		OPEN_CreatingFile,
		OPEN_FileCreated,
		OPEN_CantSaveNoCard,
		OPEN_CantSaveCardDamaged,
		OPEN_CantSaveWrongDevice,
		OPEN_CantSaveCantUseCard,
		OPEN_CantSaveDoFormat,
		OPEN_CantSaveNoSpace,
		OPEN_InsertOriginalCard,
		OPEN_CantFormat2,
		OPEN_FormatSuccess,
		OPEN_Formatting2,
		OPEN_DoFormat2,
		OPEN_CantSaveCantUseCard2,
		OPEN_CantSaveGotoIPL,
		OPEN_DoGotoIPL2,
		OPEN_DoCreateFile2,
		OPEN_CantSaveNoFile,
		OPEN_CreatingFile2,
		OPEN_CantCreateFile2,
		OPEN_FileCreated2,
		OPEN_CantSaveInsertOriginalCard,
		OPEN_CardCorruptedDoOverwrite,
		OPEN_Saving,
		OPEN_SaveSuccess,
		OPEN_SaveFail
	};

	TMemoryCard();

	~TMemoryCard();

	void loadResource(JKRHeap*);
	void setArchive(JKRArchive*);
	void destroyResource();
	void open(long);
	void close();
	void killScreen();
	void setSelect_(bool);
	bool isFinish();
	void startState(enumState);
	void update();
	void draw();

	// unused/inlined:
	bool isDecide();

	inline void doSetSelect(f32 p1, bool check)
	{
		// needs tweaking
		m_blinkFont[0].setPaneColors();
		m_blinkFont[1].setPaneColors();

		m_cursor1.m_timer    = p1;
		m_cursor1.m_selected = check;
		m_cursor2.m_timer    = p1;
		m_cursor2.m_selected = check;
	}

	int m_state;                               // _00, unknown
	Controller* m_controller;                  // _04
	uint m_inputDelay;                         // _08
	uint _0C;                                  // _0C
	u32 m_msgAlpha;                            // _10
	int m_alphaMod;                            // _14
	u8 m_currSel;                              // _18
	u8 m_canExit;                              // _19
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
	bool m_isPlaySavingSE;                     // _294
};
} // namespace Screen
} // namespace ebi

#endif
