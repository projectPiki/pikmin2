#ifndef _SCREEN_SCREENMGR_H
#define _SCREEN_SCREENMGR_H

#include "Screen/screenObj.h"
#include "Screen/SceneInfoList.h"

struct Controller;

namespace og {
namespace Screen {
struct DispMemberBase;
}
} // namespace og

namespace Screen {

struct SceneBase;
struct SetSceneArg;
struct StartSceneArg;
struct EndSceneArg;
struct MgrCommand;

ScreenOwnerID getSceneOwnerName(SceneBase* scene);
ScreenMemberID getSceneMemberName(SceneBase* scene);

struct MgrBase : public JKRDisposer {
	virtual ~MgrBase() { }                           // _08
	virtual bool setScene(SetSceneArg& arg)     = 0; // _0C
	virtual bool startScene(StartSceneArg* arg) = 0; // _10
	virtual bool endScene(EndSceneArg* arg)     = 0; // _14

	// _00     = VTBL
	// _00-_18 = JKRDisposer
};

struct Mgr : public MgrBase {
	enum SceneFinishState {
		SFS_OPEN_PAUSE_MENU = -1,
		SFS_NO_STATE        = 0,
		SFS_UNPAUSE_RESUME  = 1,
		SFS_GIVE_UP         = 4,
	};

	Mgr();

	virtual ~Mgr() { sScreenMgr = nullptr; }          // _08 (weak)
	virtual bool setScene(SetSceneArg&);              // _0C
	virtual bool startScene(StartSceneArg*);          // _10
	virtual bool endScene(EndSceneArg*);              // _14
	virtual bool reset();                             // _18
	virtual void setColorBG(JUtility::TColor&) { }    // _1C (weak)
	virtual void setBGMode(int) { }                   // _20 (weak)
	virtual ::Screen::SceneBase* doGetSceneBase(s32); // _24
	virtual void drawBG(Graphics&) { }                // _28 (weak)
	virtual void drawWipe(Graphics&) { }              // _2C (weak)

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
	SceneBase* getSceneBase(s32);
	void createNewBackupSceneInfo(SceneBase* scene);

	inline void checkController()
	{
		Controller* controller = mController;
		P2ASSERTLINE(280, controller);
	}

	static Mgr* sScreenMgr;

	inline SceneInfoList* getFirstList() { return static_cast<SceneInfoList*>(mSceneInfoList.mChild); }

	// _00     = VTBL
	// _00-_18 = MgrBase
	BitFlag<u32> mFlags;      // _18
	SceneBase* mBackupScene;  // _1C
	Controller* mController;  // _20
	int mHeapSize;            // _24
	int m2DHeapSize;          // _28
	CNode mAvailableCommands; // _2C
	CNode mCommandList;       // _44
	JKRSolidHeap* mCurrHeap;  // _5C
	CNode mBackupInfoList;    // _60
	CNode mSceneInfoList;     // _78, treat as SceneInfoList
};

inline void checkSceneList(SceneInfoList* list) { P2ASSERTLINE(329, list); }

struct DispMemberCpy {
	DispMemberCpy(u8*, og::Screen::DispMemberBase*);
};

} // namespace Screen

namespace newScreen {
::Screen::SceneBase* createScene_Ogawa(s32);
::Screen::SceneBase* createScene_Morimura(s32);

struct Mgr : public Screen::Mgr {
	Mgr()
	{
		mInitialised = 0;
		mInCave      = false;
		mInDemo      = false;
		mCourseIndex = 0;
		mUnused      = 0;
	}

	virtual ~Mgr() { }                                                 // _08 (weak)
	virtual bool reset();                                              // _18
	virtual void setColorBG(JUtility::TColor& col) { mBgColor = col; } // _1C (weak)
	virtual void setBGMode(int mode) { mBgMode = mode; }               // _20 (weak)
	virtual ::Screen::SceneBase* doGetSceneBase(s32);                  // _24
	virtual void drawBG(Graphics&);                                    // _28

	static Mgr* create();

	// _00     = VTBL
	// _00-_90 = Mgr
	u8 mInitialised;           // _90
	bool mInCave;              // _91
	bool mInDemo;              // _92
	u32 mCourseIndex;          // _94
	u32 mUnused;               // _98
	JUtility::TColor mBgColor; // _9C
	JUtility::TColor mColor2;  // _A0
	int mBgMode;               // _A4
};
} // namespace newScreen

// no idea if theres a better place to put this, its kind of a random single function
namespace kh {
namespace Screen {
::Screen::SceneBase* createScene_Koono(s32);
} // namespace Screen
} // namespace kh

#endif
