#ifndef _P2JME_MOVIE_H
#define _P2JME_MOVIE_H

#include "P2JME/messageObj.h"
#include "P2DScreen.h"
#include "Vector3.h"
#include "System.h"
#include "Dolphin/rand.h"
#include "Game/gamePlayData.h"

namespace P2JME {
namespace Movie {
struct WindowPane : public P2DScreen::CallBackNode {
	enum WindowPaneState {
		WINDOWPANE_Inactive = 0,
		WINDOWPANE_Appear   = 1,
		WINDOWPANE_2        = 2,
		WINDOWPANE_Finish   = 3,
		WINDOWPANE_4,
	};

	WindowPane();

	virtual ~WindowPane() { } // _08 (weak)
	virtual void update();    // _10
	virtual void doInit();    // _18

	void moveWindow(bool);
	void open(f32);
	void close(f32); // unused

	// _00     = VTBL
	// _00-_1C = P2DScreen::CallBackNode
	int mState;                // _1C
	f32 mTimer;                // _20
	f32 mMaxTime;              // _24
	Vector3f mInitialPosition; // _28
	f32 mCurrAngle;            // _34
	Vector3f mNewPosition;     // _38
	Vector3f mCurrPosition;    // _44
};

struct AbtnPane : public P2DScreen::CallBackNode {
	AbtnPane(u8);

	virtual ~AbtnPane() { } // _08 (weak)
	virtual void update();  // _10
	virtual void doInit();  // _18

	// _00     = VTBL
	// _00-_1C = P2DScreen::CallBackNode
	u32 mState;  // _1C
	f32 mTimer1; // _20
	f32 mTimer2; // _24
};

struct MessageWindowScreen : P2DScreen::Mgr_tuning {
	MessageWindowScreen() { }

	virtual ~MessageWindowScreen() { } // _08 (weak)

	void open(f32);
	void set(JKRArchive*);

	// _00      = VTBL
	// _00-_148 = P2DScreen::Mgr_tuning
	WindowPane* mWindowPane; // _148
	AbtnPane* mAButton;      // _14C
	AbtnPane* mArrowPane;    // _150
	u8 _154[0x4];            // _154, unknown
};

struct PodIconScreen : P2DScreen::Mgr_tuning {
	PodIconScreen();

	virtual ~PodIconScreen() { } // _08 (weak)
	virtual void update();       // _30

	// unused/inlined functions
	void setTrans();

	void reset();

	void appear()
	{
		mMomentum = Vector3f(1.0f, randFloat(), 0.0f);
		mMomentum.normalise();
		mPosition = Vector3f(0.0f);
		Game::playData->mStoryFlags& Game::STORY_DebtPaid ? setXY(mInitialPos.x - 250.0f, mInitialPos.y - 25.0f)
		                                                  : setXY(mInitialPos.x - 250.0f, mInitialPos.y - 10.0f);
		// mIsVisible = true; // should be here, but we are reaching limits of inline complexity
		mState = 0;
	}

	void disappear()
	{
		setTrans();
		hide();
	}
	void set(JKRArchive*);

	// _00      = VTBL
	// _00-_148 = P2DScreen::Mgr_tuning
	int mState;                       // _148
	J2DAnmColor* mAnmColor;           // _14C
	f32 mAnmColorTimer;               // _150
	J2DAnmTransform* mAnmTrans;       // _154
	f32 mAnmTransTimer;               // _158
	J2DAnmTexPattern* mAnmTexPattern; // _15C
	f32 mAnmTexPatternTimer;          // _160
	Vector3f mInitialPos;             // _164
	Vector3f mPosition;               // _170
	Vector3f mMomentum;               // _17C
};

struct TControl : public P2JME::Window::TControl {
	enum EModeFlag {
		MODEFLAG_Inactive = 0,
		MODEFLAG_Start    = 1,
		MODEFLAG_Writing  = 2,
		MODEFLAG_Finish   = 3,
	};

	TControl();

	virtual ~TControl() { }                        // _08 (weak)
	virtual void reset();                          // _0C
	virtual bool update(Controller*, Controller*); // _14
	virtual void draw(Graphics&);                  // _18
	virtual bool onInit();                         // _34

	EModeFlag setMode(EModeFlag);

	// _00     = VTBL
	// _00-_5C = P2JME::Window::TControl
	MessageWindowScreen* mMessageWindow; // _5C
	PodIconScreen* mPodIcon;             // _60
	J2DPane* mPaneMgDemo;                // _64
	bool mIsActive;                      // _68
	EModeFlag mModeFlag;                 // _6C
	union {
		u8 bytesView[4];
		u32 dwordView;
	} mFlags;     // _70
	u8 mIsPaused; // _74
};
} // namespace Movie
} // namespace P2JME

#endif
