#ifndef _SCREEN_SCREENMGR_H
#define _SCREEN_SCREENMGR_H

#include "Screen/screenObj.h"

namespace Screen {
struct MgrBase : public JKRDisposer {
	virtual ~MgrBase() { }                       // _08
	virtual bool setScene(SetSceneArg&)     = 0; // _0C
	virtual bool startScene(StartSceneArg*) = 0; // _10
	virtual void endScene(EndSceneArg*)     = 0; // _14

	// _00     = VTBL
	// _00-_18 = JKRDisposer
};

struct Mgr : public MgrBase {
	Mgr();

	virtual ~Mgr() { sScreenMgr = nullptr; }           // _08 (weak)
	virtual bool setScene(SetSceneArg&);               // _0C
	virtual bool startScene(StartSceneArg*);           // _10
	virtual void endScene(EndSceneArg*);               // _14
	virtual bool reset();                              // _18
	virtual void setColorBG(JUtility::TColor&);        // _1C (weak)
	virtual void setBGMode(int);                       // _20 (weak)
	virtual ::Screen::SceneBase* doGetSceneBase(long); // _24
	virtual void drawBG(Graphics&);                    // _28 (weak)
	virtual void drawWipe(Graphics&) { }               // _2C (weak)

	void init();
	void getCurrentCommand();
	void getNewCommand();
	void releaseCommand(Screen::MgrCommand*);
	void update();
	void draw(Graphics&);
	void clearBackupSceneInfo();
	void changeScene(Screen::SetSceneArg&, u8*);
	void isCurrentSceneLoading();
	void copyDispMember(u8*, u8*);
	bool setDispMember(og::Screen::DispMemberBase*);
	og::Screen::DispMemberBase* getDispMember();
	SceneType getSceneType();
	bool isSceneFinish();
	int getSceneFinishState();
	void setGamePad(Controller*);
	bool setBackupScene();
	bool isAnyReservation() const;

	inline void checkController()
	{
		Controller* controller = m_controller;
		P2ASSERTLINE(280, controller);
	}

	inline SceneInfoList* getInfoList() { return (SceneInfoList*)_60.m_child; }

	// _00     = VTBL
	// _00-_18 = MgrBase
	u8 _18;                     // _18
	u8 _19;                     // _19
	u8 _1A;                     // _1A
	u8 _1B;                     // _1B
	SceneBase* m_backupScene;   // _1C
	Controller* m_controller;   // _20
	u8 _24[8];                  // _24
	CNode _2C;                  // _2C
	CNode _44;                  // _44
	JKRSolidHeap* _5C;          // _5C
	CNode _60;                  // _60
	CNode m_sceneInfoList;      // _78, treat as SceneInfoList
	u8 _90;                     // _90
	bool m_inCave;              // _91
	bool m_inDemo;              // _92
	u32 _94;                    // _94
	u32 _98;                    // _98
	JUtility::TColor m_bgColor; // _9C
	JUtility::TColor _A0;       // _A0
	int m_bgMode;               // _A4

	static Mgr* sScreenMgr;
};

} // namespace Screen

namespace newScreen {
::Screen::SceneBase* createScene_Ogawa(long);
::Screen::SceneBase* createScene_Morimura(long);
::Screen::SceneBase* createScene_Koono(long);

struct Mgr : public Screen::Mgr {
	Mgr()
	{
		m_bgColor.set(-1);
		_A0.set(-1);
		_90      = 0;
		m_inCave = false;
		m_inDemo = false;
		_94      = 0;
		_98      = 0;
	}

	virtual ~Mgr() { }                                                  // _08 (weak)
	virtual bool reset();                                               // _18
	virtual void setColorBG(JUtility::TColor& col) { m_bgColor = col; } // _1C (weak)
	virtual void setBGMode(int mode) { m_bgMode = mode; }               // _20 (weak)
	virtual ::Screen::SceneBase* doGetSceneBase(long);                  // _24
	virtual void drawBG(Graphics&);                                     // _28

	static Mgr* create();

	// _00     = VTBL
	// _00-_A8 = Mgr
};
} // namespace newScreen

#endif
