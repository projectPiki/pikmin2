#ifndef _SCREEN_MGR_H
#define _SCREEN_MGR_H

/*
    __vt__Q26Screen3Mgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q26Screen3MgrFv
    .4byte setScene__Q26Screen3MgrFRQ26Screen11SetSceneArg
    .4byte startScene__Q26Screen3MgrFPQ26Screen13StartSceneArg
    .4byte endScene__Q26Screen3MgrFPQ26Screen11EndSceneArg
    .4byte reset__Q26Screen3MgrFv
    .4byte setColorBG__Q26Screen3MgrFRQ28JUtility6TColor
    .4byte setBGMode__Q26Screen3MgrFi
    .4byte doGetSceneBase__Q26Screen3MgrFl
    .4byte drawBG__Q26Screen3MgrFR8Graphics
    .4byte drawWipe__Q26Screen3MgrFR8Graphics
*/

namespace Screen {
struct Mgr {
	virtual ~Mgr();                             // _08 (inline)
	virtual void setScene(SetSceneArg&);        // _0C
	virtual void startScene(StartSceneArg*);    // _10
	virtual void endScene(EndSceneArg*);        // _14
	virtual void reset();                       // _18
	virtual void setColorBG(JUtility::TColor&); // _1C (inline)
	virtual void setBGMode(int);                // _20 (inline)
	virtual void doGetSceneBase(long);          // _24
	virtual void drawBG(Graphics&);             // _28 (inline)
	virtual void drawWipe(Graphics&);           // _2C (inline)

	Mgr();
	void init();
	void getCurrentCommand();
	void getNewCommand();
	void releaseCommand(Screen::MgrCommand*);
	void update();
	void draw(Graphics&);
	void clearBackupSceneInfo();
	void changeScene(Screen::SetSceneArg&, unsigned char*);
	void isCurrentSceneLoading();
	void copyDispMember(unsigned char*, unsigned char*);
	void setDispMember(og::Screen::DispMemberBase*);
	void getDispMember();
	void getSceneType();
	void isSceneFinish();
	void getSceneFinishState();
	void setGamePad(Controller*);
	void setBackupScene();
	void isAnyReservation() const;
};
} // namespace Screen

#endif
