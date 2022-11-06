#ifndef _EBI_SCREEN_FILESELECT_TMAINSCREEN_H
#define _EBI_SCREEN_FILESELECT_TMAINSCREEN_H

#include "ebi/Screen/TScreenBase.h"

namespace ebi {
namespace Screen {
namespace FileSelect {
struct TMainScreen : public TScreenBase {
	TMainScreen();

	~TMainScreen();

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
	void setMsgID_(u64, u64, u64);
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
	void calcDataBallColor_(u32, u32, u32, u32, u32);
	void setIconColorAlpha_(u8);

	// _00     = VTBL
	// _00-_08 = TScreenBase
};
} // namespace FileSelect
} // namespace Screen
} // namespace ebi

#endif
