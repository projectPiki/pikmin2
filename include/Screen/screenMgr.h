#ifndef _SCREEN_SCREENMGR_H
#define _SCREEN_SCREENMGR_H

#include "Screen/screenObj.h"

// no idea if theres a better place to put this, its kind of a random single function
namespace kh {
namespace Screen {
::Screen::SceneBase* createScene_Koono(long);
} // namespace Screen
} // namespace kh

namespace Screen {

void getSceneOwnerName(SceneBase* scene);
void getSceneMemberName(SceneBase* scene);

struct MgrBase : public JKRDisposer {
	virtual ~MgrBase() { }                           // _08
	virtual bool setScene(SetSceneArg& arg)     = 0; // _0C
	virtual bool startScene(StartSceneArg* arg) = 0; // _10
	virtual bool endScene(EndSceneArg* arg)     = 0; // _14

	// _00     = VTBL
	// _00-_18 = JKRDisposer
};

struct Mgr : public MgrBase {
	Mgr();

	virtual ~Mgr() { sScreenMgr = nullptr; }           // _08 (weak)
	virtual bool setScene(SetSceneArg&);               // _0C
	virtual bool startScene(StartSceneArg*);           // _10
	virtual bool endScene(EndSceneArg*);               // _14
	virtual bool reset();                              // _18
	virtual void setColorBG(JUtility::TColor&) { }     // _1C (weak)
	virtual void setBGMode(int) { }                    // _20 (weak)
	virtual ::Screen::SceneBase* doGetSceneBase(long); // _24
	virtual void drawBG(Graphics&) { }                 // _28 (weak)
	virtual void drawWipe(Graphics&) { }               // _2C (weak)

	void init();
	MgrCommand* getCurrentCommand();
	MgrCommand* getNewCommand();
	void releaseCommand(Screen::MgrCommand* command);
	void update();
	void draw(Graphics& gfx);
	void clearBackupSceneInfo();
	void changeScene(Screen::SetSceneArg&, u8*);
	bool isCurrentSceneLoading();
	void copyDispMember(u8*, u8*);
	bool setDispMember(og::Screen::DispMemberBase* disp);
	og::Screen::DispMemberBase* getDispMember();
	SceneType getSceneType();
	bool isSceneFinish();
	int getSceneFinishState();
	void setGamePad(Controller* control);
	bool setBackupScene();
	bool isAnyReservation() const;

	// unused/inline
	void create();
	void updateCurrentScene();
	SceneBase* getSceneBase(long);
	void createNewBackupSceneInfo(SceneBase* scene);

	inline void checkController()
	{
		Controller* controller = mController;
		P2ASSERTLINE(280, controller);
	}

	// _00     = VTBL
	// _00-_18 = MgrBase
	BitFlag<u32> mFlags;       // _18
	SceneBase* mBackupScene;   // _1C
	Controller* mController;   // _20
	u8 _24[8];                 // _24
	CNode mAvailableCommands;  // _2C
	CNode mCommandList;        // _44
	JKRSolidHeap* mCurrHeap;   // _5C
	CNode _60;                 // _60
	CNode mSceneInfoList;      // _78, treat as SceneInfoList
	u8 _90;                    // _90
	bool mInCave;              // _91
	bool mInDemo;              // _92
	u32 mCourseIndex;          // _94
	u32 _98;                   // _98
	JUtility::TColor mBgColor; // _9C, I think the type of these are wrong as its messing up the ctor
	JUtility::TColor mColor2;  // _A0
	int mBgMode;               // _A4

	static Mgr* sScreenMgr;
};

inline void checkSceneList(SceneInfoList* list) { P2ASSERTLINE(329, list); }

struct DispMemberCpy {
	DispMemberCpy(u8*, og::Screen::DispMemberBase*);
};

} // namespace Screen

namespace newScreen {
::Screen::SceneBase* createScene_Ogawa(long);
::Screen::SceneBase* createScene_Morimura(long);

struct Mgr : public Screen::Mgr {
	Mgr()
	{
		mBgColor.set(-1);
		mColor2.set(-1);
		_90          = 0;
		mInCave      = false;
		mInDemo      = false;
		mCourseIndex = 0;
		_98          = 0;
	}

	virtual ~Mgr() { }                                                 // _08 (weak)
	virtual bool reset();                                              // _18
	virtual void setColorBG(JUtility::TColor& col) { mBgColor = col; } // _1C (weak)
	virtual void setBGMode(int mode) { mBgMode = mode; }               // _20 (weak)
	virtual ::Screen::SceneBase* doGetSceneBase(long);                 // _24
	virtual void drawBG(Graphics&);                                    // _28

	static Mgr* create();

	// _00     = VTBL
	// _00-_A8 = Mgr
};
} // namespace newScreen

#endif
