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

	~TMainScreen() { }

	virtual void doSetArchive(JKRArchive*); // _24
	virtual void doOpenScreen(ArgOpen*);    // _28
	virtual void doCloseScreen(ArgClose*);  // _2C
	virtual void doKillScreen();            // _30
	virtual void doInitWaitState();         // _34
	virtual bool doUpdateStateOpen();       // _38
	virtual bool doUpdateStateWait();       // _3C
	virtual bool doUpdateStateClose();      // _40
	virtual void doDraw();                  // _44
	virtual char* getName();                // _48 (weak)

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
	void getDataBallColor_(s32);
	void calcDataBallColor_(u32, u32, u32, u32, u32);
	void setIconColorAlpha_(u8);

	// _00     = VTBL
	// _00-_0C = TScreenBase
	P2DScreen::Mgr_tuning* _0C;               // _00C
	J2DPictureEx* _10[3];                     // _010
	J2DPane* _1C;                             // _01C
	J2DPane* _20[2][3];                       // _020
	J2DPicture* _38[3];                       // _038
	J2DPicture* _44[3];                       // _044
	J2DPane* _50[3];                          // _050
	J2DPane* _5C[3];                          // _05C
	J2DPicture* _68[3];                       // _068
	J2DPicture* _74[3];                       // _074
	J2DPane* _80[3];                          // _080
	J2DPane* _8C[3];                          // _08C
	J2DPane* _98;                             // _098
	J2DPane* _9C;                             // _09C
	J2DTextBox* _A0;                          // _0A0
	J2DPane* _A4;                             // _0A4
	J2DPane* _A8;                             // _0A8
	J2DPane* _AC;                             // _0AC
	J2DPane* _B0;                             // _0B0
	J2DPane* _B4;                             // _0B4
	J2DPane* _B8;                             // _0B8
	J2DPane* _BC;                             // _0BC
	E2DFullFontColor _C0;                     // _0C0
	E2DFullFontColor _D0;                     // _0D0
	E2DCallBack_AnmBase _E0;                  // _0E0
	E2DCallBack_AnmBase _11C;                 // _11C
	E2DCallBack_AnmBase _158[3];              // _158
	E2DCallBack_AnmBase _20C[3];              // _20C
	E2DCallBack_AnmBase _2C0;                 // _2C0
	E2DCallBack_AnmBase _2FC;                 // _2FC
	E2DCallBack_AnmBase _338;                 // _338
	E2DCallBack_AnmBase _374;                 // _374
	E2DCallBack_AnmBase _3B0[3];              // _3B0
	E2DCallBack_AnmBase _464[3];              // _464
	E2DCallBack_AnmBase _518[3];              // _518
	E2DCallBack_AnmBase _5CC;                 // _5CC
	E2DCallBack_AnmBase _608;                 // _608
	E2DCallBack_AnmBase _644;                 // _644
	E2DCallBack_AnmBase _680;                 // _680
	E2DCallBack_AnmBase _6BC;                 // _6BC
	E2DCallBack_AnmBase _6F8;                 // _6F8
	E2DCallBack_AnmBase _734;                 // _734
	E2DCallBack_AnmBase _770;                 // _770
	E2DCallBack_AnmBase _7AC;                 // _7AC
	E2DCallBack_AnmBase _7E8;                 // _7E8
	E2DCallBack_AnmBase _824;                 // _824
	E2DCallBack_AnmBase _860;                 // _860
	E2DCallBack_CalcAnimation _89C;           // _89C
	E2DCallBack_BlinkFontColor _8BC;          // _8BC
	E2DCallBack_BlinkFontColor _908;          // _908
	E2DCallBack_Purupuru _954[2];             // _954
	og::Screen::CallBack_CounterDay* _9D4;    // _9D4
	og::Screen::CallBack_CounterDay* _9D8;    // _9D8
	og::Screen::CallBack_CounterDay* _9DC;    // _9DC
	og::Screen::CallBack_CounterDay* _9E0;    // _9E0
	og::Screen::CallBack_CounterDay* _9E4;    // _9E4
	og::Screen::CallBack_CounterDay* _9E8;    // _9E8
	TYesNoCursor _9EC;                        // _9EC
	TYesNoCursor _A24;                        // _A24
	efx2d::FileSelect::T2DFilecopy _A5C;      // _A5C
	efx2d::FileSelect::T2DFilecopyM _A70;     // _A5C
	efx2d::FileSelect::T2DFilesel* _A84[3];   // _A84
	efx2d::FileSelect::T2DFileselM* _A90[3];  // _A90
	efx2d::FileSelect::T2DFiledeleting _A9C;  // _A9C
	efx2d::FileSelect::T2DFiledeletingM _AB0; // _AB0
	Vector2f _AC4[3];                         // _AC4
	Vector2f _ADC[3];                         // _ADC
	JPAResourceManager* _AF4;                 // _AF4
	u8 _AF8;                                  // _AF8
	u8 _AF9;                                  // _AF9
	u8 _AFA;                                  // _AFA
	u8 _AFB;                                  // _AFB
	JUtility::TColor _AFC;                    // _AFC
	TFileData mFileData[3];                   // _B00
	int _B9C;                                 // _B9C
	P2DScreen::Mgr* _BA0;                     // _BA0
	u8 _BA4;                                  // _BA4
	TScreenDataWindow_data _BA8;              // _BA8
	JUtility::TColor _BD4;                    // _BD4
	u8 _BD8;                                  // _BD8
	int _BDC;                                 // _BDC
	int _BE0;                                 // _BE0
	u32 _BE4;                                 // _BE4
	int _BE8;                                 // _BE8
	u32 _BEC;                                 // _BEC
	u32 _BF0;                                 // _BF0
	u32 _BF4;                                 // _BF4
};
} // namespace FileSelect
} // namespace Screen
} // namespace ebi

#endif
