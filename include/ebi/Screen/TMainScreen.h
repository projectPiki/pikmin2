#ifndef _EBI_SCREEN_FILESELECT_TMAINSCREEN_H
#define _EBI_SCREEN_FILESELECT_TMAINSCREEN_H

#include "ebi/Screen/TScreenBase.h"
#include "og/Screen/callbackNodes.h"
#include "efx2d/FileSelect.h"
#include "ebi/Screen/TFileData.h"
#include "ebi/Screen/TScreenDataWindow.h"

namespace ebi {
namespace Screen {
namespace FileSelect {
struct TMainScreen : public TScreenBase {
	TMainScreen();

	enum MsgOpenType {
		MessageType_SelectAFile    = 0,
		MessageType_FileCorrupted  = 1,
		MessageType_ErasingFile    = 2,
		MessageType_DoYouErase     = 3,
		MessageType_CopyWhere      = 4,
		MessageType_FileDeleteFail = 5,
		MessageType_FileDeleted    = 6,
		MessageType_DoYouOverwrite = 7,
		MessageType_FileCopyFail   = 8,
		MessageType_CopyingFile    = 9,
		MessageType_FileCopied     = 10,
	};

	enum ScreenFlags {
		FileSelectScreen_YesNoOpen = 1,
		FileSelectScreen_Copy      = 2,
		FileSelectScreen_MsgOpen   = 4,
		FileSelectScreen_Decided   = 8
	};

	enum State {
		State_FadeIn  = 1,
		State_FadeOut = 2,
	};

	// ~TMainScreen() { }

	virtual void doSetArchive(JKRArchive*);           // _24
	virtual void doOpenScreen(ArgOpen*);              // _28
	virtual void doCloseScreen(ArgClose*);            // _2C
	virtual void doKillScreen();                      // _30
	virtual void doInitWaitState();                   // _34
	virtual bool doUpdateStateOpen();                 // _38
	virtual bool doUpdateStateWait();                 // _3C
	virtual bool doUpdateStateClose();                // _40
	virtual void doDraw();                            // _44
	virtual char* getName() { return "TFileSelect"; } // _48 (weak)

	void loadResource();
	void inDataBall(s32);
	void outDataBall(s32);
	void decideDataBall(s32);
	void createFiledecide(s32);
	bool isFinishOutDataBall(s32);
	bool isFinishDecideDataBall(s32);
	void createCopyCursor(s32);
	void fadeCopyCursor();
	void moveLeftCopyCursor();
	void moveRightCopyCursor();
	void createFilecopyEffect(s32, s32);
	void fadeFilecopyEffect();
	void createFiledeletingEffect(s32);
	void fadeFiledeletingEffect();
	void openDataWindow(s32);
	void closeDataWindow();
	void decideDataWindow();
	bool isFinishCloseDataWindow();
	void openMSG(s32);
	void closeMSG();
	bool isFinishCloseMSG();
	void setYesNo(bool);
	void updateMsg_();
	void setMsgID_(u64, u64, u64);
	void inCopyErase();
	void outCopyErase();
	void inYesNo_();
	void outYesNo_();
	void setDataBallCopyResult(s32, s32);
	void setDataBallNew(s32);
	void setDataBallBroken(s32);
	void initDataBalls_();
	void setColorTimgDataBall_(s32);
	JUtility::TColor getDataBallColor_(s32);
	JUtility::TColor calcDataBallColor_(u32, u32, u32, u32, u32);
	void setIconColorAlpha_(u8);

	TFileData* getFileData(int id) { return &mFileData[id]; }

	inline bool checkClose()
	{
		if (mCounter == 0) {
			return true;
		}
		return false;
	}

	void setTevColor(J2DTevBlock* paneIconTev, J2DGXColorS10& newColor)
	{
		newColor.a = (u16)paneIconTev->getTevColor(0)->a;
		paneIconTev->setTevColor(0, newColor);
	}
	// _00     = VTBL
	// _00-_0C = TScreenBase
	P2DScreen::Mgr_tuning* mMainScreen;              // _00C
	J2DPictureEx* mPaneND[3];                        // _010
	J2DPane* mPaneDataWindow;                        // _01C
	J2DPane* mPaneSel[2][3];                         // _020
	J2DPicture* mPaneSelE0[3];                       // _038
	J2DPicture* mPaneSelE1[3];                       // _044
	J2DPicture* mPanePdc[3];                         // _050
	J2DPicture* mPaneMdc[3];                         // _05C
	J2DPicture* mPaneIconColorA[3];                  // _068
	J2DPicture* mPaneIconColorB[3];                  // _074
	J2DPane* mPaneCopyCursorL[3];                    // _080
	J2DPane* mPaneCopyCursorR[3];                    // _08C
	J2DTextBox* mPaneMesgYes;                        // _098
	J2DTextBox* mPaneMesgYesShadow;                  // _09C
	J2DTextBox* mPaneMesgNo;                         // _0A0
	J2DTextBox* mPaneMesgNoShadow;                   // _0A4
	J2DPane* mPaneButton;                            // _0A8
	J2DPane* mPaneButtonShadow;                      // _0AC
	J2DPane* mPaneButtonB;                           // _0B0
	J2DPane* mPaneButtonBShadow;                     // _0B4
	J2DTextBox* mPaneMesgMain;                       // _0B8
	J2DTextBox* mPaneMesgMainShadow;                 // _0BC
	E2DFullFontColor mFontColor1;                    // _0C0
	E2DFullFontColor mFontColor2;                    // _0D0
	E2DCallBack_AnmBase mAnimOpenScreenA;            // _0E0
	E2DCallBack_AnmBase mAnimOpenScreenB;            // _11C
	E2DCallBack_AnmBase mAnimOpenScreenC[3];         // _158
	E2DCallBack_AnmBase mAnimOpenScreenD[3];         // _20C
	E2DCallBack_AnmBase mAnimOpenScreenE;            // _2C0
	E2DCallBack_AnmBase mAnimOpenScreenF;            // _2FC
	E2DCallBack_AnmBase mAnimOpenScreenG;            // _338
	E2DCallBack_AnmBase mAnimOpenScreenH;            // _374
	E2DCallBack_AnmBase mAnimFileBallIn[3];          // _3B0
	E2DCallBack_AnmBase mAnimFileBallOut[3];         // _464
	E2DCallBack_AnmBase mAnimFileBallDecide[3];      // _518
	E2DCallBack_AnmBase mAnimInCopyEraseA;           // _5CC
	E2DCallBack_AnmBase mAnimInCopyEraseB;           // _608
	E2DCallBack_AnmBase mAnimOutCopyEraseA;          // _644
	E2DCallBack_AnmBase mAnimOutCopyEraseB;          // _680
	E2DCallBack_AnmBase mAnimInYesNoA;               // _6BC
	E2DCallBack_AnmBase mAnimInYesNoB;               // _6F8
	E2DCallBack_AnmBase mAnimOutYesNoA;              // _734
	E2DCallBack_AnmBase mAnimOutYesNoB;              // _770
	E2DCallBack_AnmBase mAnimWaitScreen;             // _7AC
	E2DCallBack_AnmBase mAnimOpenDataWindow;         // _7E8
	E2DCallBack_AnmBase mAnimCloseDataWindow;        // _824
	E2DCallBack_AnmBase mAnimDecideDataWindow;       // _860
	E2DCallBack_CalcAnimation mCalcAnim;             // _89C
	E2DCallBack_BlinkFontColor mBlinkFontYes;        // _8BC
	E2DCallBack_BlinkFontColor mBlinkFontNo;         // _908
	E2DCallBack_Purupuru mPurupuru[2];               // _954
	og::Screen::CallBack_CounterDay* mCounterDay[3]; // _9D4
	og::Screen::CallBack_CounterDay* mCounterDayM[3];
	TYesNoCursor mCursorA;                           // _9EC
	TYesNoCursor mCursorB;                           // _A24
	efx2d::FileSelect::T2DFilecopy mEfxFileCopy;     // _A5C
	efx2d::FileSelect::T2DFilecopyM mEfxFileCopyM;   // _A5C
	efx2d::FileSelect::T2DFilesel* mEfxFileSel[3];   // _A84
	efx2d::FileSelect::T2DFileselM* mEfxFileSelM[3]; // _A90
	efx2d::FileSelect::T2DFiledeleting mEfxDelete;   // _A9C
	efx2d::FileSelect::T2DFiledeletingM mEfxDeleteM; // _AB0
	Vector2f mCursorSelPos[3];                       // _AC4
	Vector2f mCursorSelPosM[3];                      // _ADC
	JPAResourceManager* mParticleResource;           // _AF4
	bool mIsCardSeActive;                            // _AF8
	u8 _AF9;                                         // _AF9
	u8 _AFA;                                         // _AFA
	u8 _AFB;                                         // _AFB
	BitFlag<u32> mFlags;                             // _AFC
	TFileData mFileData[3];                          // _B00
	int mCurrFileInfoId;                             // _B9C
	TScreenDataWindow_new mNewScreen;                // _BA0
	TScreenDataWindow_data mDataScreen;              // _BA8
	JUtility::TColor mDrawColor;                     // _BD4
	u8 mDrawAlpha;                                   // _BD8
	int mState;                                      // _BDC
	u32 mCounter;                                    // _BE0
	u32 mCounterMax;                                 // _BE4
	u32 mOpenCounter;                                // _BE8
	u32 mOpenCounterMax;                             // _BEC
	u32 mMesgCounter;                                // _BF0
	u32 mMesgCounterMax;                             // _BF4
};
} // namespace FileSelect
} // namespace Screen
} // namespace ebi

#endif
