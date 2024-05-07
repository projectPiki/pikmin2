#ifndef _EBI_SCREEN_TMEMORYCARD_H
#define _EBI_SCREEN_TMEMORYCARD_H

#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JKernel/JKRArchive.h"
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
	void open(s32);
	void close();
	void killScreen();
	void setSelect_(bool);
	bool isFinish();
	void startState(enumState);
	void update();
	void draw();

	// unused/inlined:
	bool isDecide();

	inline f32 calcAlpha() { return mAlphaMod ? (f32)mMsgAlpha / (f32)mAlphaMod : 0.0f; }

	int mState;                             // _00, unknown
	Controller* mController;                // _04
	u32 mInputDelay;                        // _08
	u32 mInputDelayMax;                     // _0C, isnt used
	u32 mMsgAlpha;                          // _10
	u32 mAlphaMod;                          // _14
	u8 mSelectionIdx;                       // _18
	u8 mCanExit;                            // _19
	P2DScreen::Mgr_tuning* mScreenMain;     // _1C
	J2DTextBox* mPaneMsg1;                  // _20
	J2DTextBox* mPaneMsg2;                  // _24
	J2DTextBox* mPaneMsg3;                  // _28
	J2DTextBox* mPaneMsg4;                  // _2C
	J2DPane* mPane_il00;                    // _30
	J2DPane* mPane_il01;                    // _34
	J2DPane* mPane_ir00;                    // _38
	J2DPane* mPane_ir01;                    // _3C
	E2DCallBack_BlinkFontColor mBlinkFont1; // _40
	E2DCallBack_BlinkFontColor mBlinkFont2; // _8C
	E2DCallBack_AnmBase mAnim1;             // _D8
	E2DCallBack_AnmBase mAnim2;             // _D8
	E2DCallBack_AnmBase mAnim3;             // _D8
	E2DCallBack_AnmBase mAnim4;             // _D8
	E2DCallBack_AnmBase mAnim5;             // _D8
	E2DCallBack_CalcAnimation mCalcAnim;    // _204
	TYesNoCursor mCursor1;                  // _224
	TYesNoCursor mCursor2;                  // _25C
	bool mIsPlaySavingSE;                   // _294
};
} // namespace Screen
} // namespace ebi

#endif
