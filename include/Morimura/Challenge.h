#ifndef _MORIMURA_CHALLENGE_H
#define _MORIMURA_CHALLENGE_H

#include "Morimura/DayEndCount.h"
#include "Morimura/Window.h"
#include "Screen/Enums.h"
#include "og/Screen/ogScreen.h"

struct JKRExpHeap;

namespace og {
namespace Screen {
struct DispMemberWorldMapInfoWin0;
}
} // namespace og

namespace Game {
struct Challenge2D_TitleInfo;
} // namespace Game

namespace Morimura {
struct DispMemberChallengeResult : public og::Screen::DispMemberBase {
	virtual u32 getSize();     // _08 (weak)
	virtual u32 getOwnerID();  // _0C (weak)
	virtual u64 getMemberID(); // _10 (weak)

	// _00     = VTBL
	// _00-_08 = og::Screen::DispMemberBase
	u32 _08;            // _08, unknown
	JKRExpHeap* m_heap; // _0C
	int _10;            // _10
};

struct DispMemberChallengeSelect : public og::Screen::DispMemberBase {

	virtual u32 getSize() { return sizeof(DispMemberChallengeSelect); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_MRMR; }                     // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_CHALLENGE_SELECT; }       // _10 (weak)

	// _00     = VTBL
	// _00-_08 = og::Screen::DispMemberBase
	Game::Challenge2D_TitleInfo* m_titleInfo;                       // _08
	JKRExpHeap* m_debugExpHeap;                                     // _0C
	int m_stageNumber;                                              // _10
	int m_selectedStageIndex;                                       // _14
	int m_playType;                                                 // _18
	int _1C;                                                        // _1C
	og::Screen::DispMemberWorldMapInfoWin0* m_dispWorldMapInfoWin0; // _20
};

struct TChallengePlayModeScreen : public TScreenBase {
	TChallengePlayModeScreen(JKRArchive*, int);

	virtual void create(const char*, u32);        // _08
	virtual void update();                        // _0C
	virtual void draw(Graphics&, J2DPerspGraph*); // _10

	// _00     = VTBL
	// _00-_18 = TScreenBase
	u8 _18[0x8];                      // _18, unknown
	J2DPicture* _20;                  // _20
	u8 _24[0x18];                     // _24, unknown
	og::Screen::ScaleMgr* _3C;        // _3C
	og::Screen::ScaleMgr* _40;        // _40
	og::Screen::AnimText_Screen* _44; // _44
	og::Screen::AnimText_Screen* _48; // _48
	og::Screen::AnimText_Screen* _4C; // _4C
	u8 _50[0x30];                     // _50, unknown
	int _80;                          // _80
	u8 _84;                           // _84
	u8 _85[0x7];                      // _85, unknown
	f32 _8C;                          // _8C
	u8 _90[0x1C];                     // _1C, unknown
};

struct TChallengeResultDemoScreen : public TScreenBase {
	virtual void create(const char*, u32);        // _08
	virtual void update();                        // _0C
	virtual void draw(Graphics&, J2DPerspGraph*); // _10

	// _00     = VTBL
	// _00-_18 = TScreenBase
	og::Screen::AnimPane* _18; // _18
	og::Screen::AnimPane* _1C; // _1C
	og::Screen::AnimPane* _20; // _20
	u8 _24;                    // _24
};

struct TChallengeScreen : public TScreenBase {
	TChallengeScreen(JKRArchive*, int);

	virtual void create(const char*, u32); // _08
	virtual void update();                 // _0C
	virtual void createAnimPane(char*);    // _14
	virtual void updateBckPane();          // _18

	bool isRandAnimStart();

	// _00     = VTBL
	// _00-_18 = TScreenBase
	int m_animPaneCount;                // _18
	og::Screen::AnimPane** m_animPanes; // _1C
	u32 _20;                            // _20, unknown
	u32 _24;                            // _24, unknown
	u8 _28;                             // _28
};

struct TChallengeResultScreen : public TChallengeScreen {
	virtual void create(const char*, u32); // _08
	virtual void createAnimPane(char*);    // _14
	virtual void updateBckPane();          // _18

	// _00     = VTBL
	// _00-_2C = TChallengeScreen
	og::Screen::AnimPane* _2C; // _2C
};

struct TChallengeEndCount : public TDayEndCount {
	TChallengeEndCount();

	virtual ~TChallengeEndCount();      // _08 (weak)
	virtual void doCreate(JKRArchive*); // _4C

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_D4 = TDayEndCount
};

struct TChallengeEndCount1p : public TChallengeEndCount {
	TChallengeEndCount1p();

	virtual ~TChallengeEndCount1p(); // _08 (weak)
	virtual bool doUpdate();         // _58

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_D4 = TChallengeEndCount
};

struct TChallengeEndCount2p : public TChallengeEndCount {
	TChallengeEndCount2p();

	virtual ~TChallengeEndCount2p(); // _08 (weak)
	virtual bool doUpdate();         // _58

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_D4 = TChallengeEndCount
};

struct TChallengeResult : public TTestBase {
	struct VectorUnit {
		f32 _00; // _00
		f32 _04; // _04
		f32 _08; // _08
		f32 _0C; // _0C
	};

	TChallengeResult();

	virtual ~TChallengeResult();                             // _08 (weak)
	virtual void doCreate(JKRArchive*);                      // _4C
	virtual bool doUpdate();                                 // _58
	virtual void doUpdateFadeoutFinish();                    // _64
	virtual void doDraw(Graphics& gfx);                      // _68
	virtual og::Screen::DispMemberBase* getDispMemberBase(); // _78 (weak)

	void setInfo();
	void updateDemo();
	void changeAnimDemo();
	void startRankInDemo();
	void startDemo();
	void fadeEffect();

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_78 = TTestBase
	JKRArchive* _78;                                // _78
	TChallengeResultScreen* m_resultScreen;         // _7C
	TChallengeResultDemoScreen* m_resultDemoScreen; // _80
	u8 _84[0x178];                                  // _84, TODO: fill these in from ghidra
};

struct TChallengeSelect : public TTestBase {
	TChallengeSelect();

	virtual ~TChallengeSelect();                             // _08 (weak)
	virtual void doCreate(JKRArchive*);                      // _4C
	virtual bool doUpdate();                                 // _58
	virtual void doUpdateFadeoutFinish();                    // _64
	virtual void doDraw(Graphics& gfx);                      // _68
	virtual og::Screen::DispMemberBase* getDispMemberBase(); // _78 (weak)

	void setInfo(int);
	void setStageName(int);
	void getState(int);
	void getAfterState(int);
	void isChangeState(int);
	void getIndexMax();
	void openWindow();
	void closeWindow();
	void reset();
	void demoStart();

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_78 = TTestBase
	JKRArchive* _78; // _78
	u8 _7C[0xD4];    // _7C, TODO: fill these in from ghidra
};

struct TChallengeResultScene : public THIOScene {
	virtual SceneType getSceneType();                       // _08 (weak)
	virtual ScreenOwnerID getOwnerID();                     // _0C (weak)
	virtual ScreenMemberID getMemberID();                   // _10 (weak)
	virtual const char* getResName() const;                 // _1C (weak)
	virtual void doCreateObj(JKRArchive*);                  // _20 (weak)
	virtual void doUserCallBackFunc(Resource::MgrCommand*); // _24

	// _00      = VTBL
	// _00-_224 = THIOScene
	// _220, treat as TChallengeResult*
};

struct TChallengeSelectScene : public THIOScene {
	virtual SceneType getSceneType();             // _08 (weak)
	virtual ScreenOwnerID getOwnerID();           // _0C (weak)
	virtual ScreenMemberID getMemberID();         // _10 (weak)
	virtual const char* getResName() const;       // _1C (weak)
	virtual void doCreateObj(JKRArchive*);        // _20 (weak)
	virtual bool doStart(Screen::StartSceneArg*); // _3C

	// _00      = VTBL
	// _00-_224 = THIOScene
	// _220, treat as TChallengeSelect*
	TConfirmEndWindow* m_confirmEndWindow; // _224
};

struct TChallengeSelectExplanationWindow : TSelectExplanationWindow {
	virtual void create(const char*, u32); // _08
	virtual void screenScaleUp();          // _14

	// _00     = VTBL
	// _00-_30 = TSelectExplanationWindow
};
} // namespace Morimura

#endif
