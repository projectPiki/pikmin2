#ifndef _EBI_SCREEN_FILESELECT_TMAINSCREEN_H
#define _EBI_SCREEN_FILESELECT_TMAINSCREEN_H

/*
    __vt__Q43ebi6Screen10FileSelect11TMainScreen:
    .4byte 0
    .4byte 0
    .4byte setArchive__Q33ebi6Screen11TScreenBaseFP10JKRArchive
    .4byte openScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen7ArgOpen
    .4byte closeScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen8ArgClose
    .4byte killScreen__Q33ebi6Screen11TScreenBaseFv
    .4byte update__Q33ebi6Screen11TScreenBaseFv
    .4byte draw__Q33ebi6Screen11TScreenBaseFv
    .4byte isFinishScreen__Q33ebi6Screen11TScreenBaseFv
    .4byte doSetArchive__Q43ebi6Screen10FileSelect11TMainScreenFP10JKRArchive
    .4byte doOpenScreen__Q43ebi6Screen10FileSelect11TMainScreenFPQ33ebi6Screen7ArgOpen
    .4byte doCloseScreen__Q43ebi6Screen10FileSelect11TMainScreenFPQ33ebi6Screen8ArgClose
    .4byte doKillScreen__Q43ebi6Screen10FileSelect11TMainScreenFv
    .4byte doInitWaitState__Q43ebi6Screen10FileSelect11TMainScreenFv
    .4byte doUpdateStateOpen__Q43ebi6Screen10FileSelect11TMainScreenFv
    .4byte doUpdateStateWait__Q43ebi6Screen10FileSelect11TMainScreenFv
    .4byte doUpdateStateClose__Q43ebi6Screen10FileSelect11TMainScreenFv
    .4byte doDraw__Q43ebi6Screen10FileSelect11TMainScreenFv
    .4byte getName__Q43ebi6Screen10FileSelect11TMainScreenFv
*/

namespace ebi {
namespace Screen {
struct TScreenBase {
	virtual void setArchive(JKRArchive*); // _08
	virtual void openScreen(ArgOpen*);    // _0C
	virtual void closeScreen(ArgClose*);  // _10
	virtual void killScreen();            // _14
	virtual void update();                // _18
	virtual void draw();                  // _1C
	virtual void isFinishScreen();        // _20
};
} // namespace Screen
} // namespace ebi

namespace ebi {
namespace Screen {
namespace FileSelect {
struct TMainScreen : public TScreenBase {
	virtual void TMaindoSetArchive(JKRArchive*); // _24
	virtual void TMaindoOpenScreen(ArgOpen*);    // _28
	virtual void TMaindoCloseScreen(ArgClose*);  // _2C
	virtual void TMaindoKillScreen();            // _30
	virtual void TMaindoInitWaitState();         // _34
	virtual void TMaindoUpdateStateOpen();       // _38
	virtual void TMaindoUpdateStateWait();       // _3C
	virtual void TMaindoUpdateStateClose();      // _40
	virtual void TMaindoDraw();                  // _44
	virtual void TMaingetName();                 // _48 (inline)

	TMainScreen();
	void loadResource();
	void inDataBall(long);
	void outDataBall(long);
	void decideDataBall(long);
	void createFiledecide(long);
	void isFinishOutDataBall(long);
	void isFinishDecideDataBall(long);
	void createCopyCursor(long);
	void fadeCopyCursor();
	void moveLeftCopyCursor();
	void moveRightCopyCursor();
	void createFilecopyEffect(long, long);
	void fadeFilecopyEffect();
	void createFiledeletingEffect(long);
	void fadeFiledeletingEffect();
	void openDataWindow(long);
	void closeDataWindow();
	void decideDataWindow();
	void isFinishCloseDataWindow();
	void openMSG(long);
	void closeMSG();
	void isFinishCloseMSG();
	void setYesNo(bool);
	void updateMsg_();
	void setMsgID_(unsigned long long, unsigned long long, unsigned long long);
	void inCopyErase();
	void outCopyErase();
	void inYesNo_();
	void outYesNo_();
	void setDataBallCopyResult(long, long);
	void setDataBallNew(long);
	void setDataBallBroken(long);
	void initDataBalls_();
	void setColorTimgDataBall_(long);
	void getDataBallColor_(long);
	void calcDataBallColor_(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long);
	void setIconColorAlpha_(unsigned char);
	~TMainScreen();
};
} // namespace FileSelect
} // namespace Screen
} // namespace ebi

#endif
