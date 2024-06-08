#ifndef _MORIMURA_MRUTIL_H
#define _MORIMURA_MRUTIL_H

#include "og/Screen/callbackNodes.h"
#include "Screen/screenObj.h"
#include "efx2d/T2DCountKira.h"
#include "Morimura/Bases.h"

struct J2DPane;

namespace Morimura {

struct TCallbackScrollMsg;

void setScreenAlpha(J2DPane*, u8);

struct TOffsetMsgSet {
	TOffsetMsgSet(u64*, u64, int);
	TOffsetMsgSet(u64*, u64, int, u64*, int*);

	u64 getMsgID(int);

	inline void calcOffset(int& offset, int i)
	{
		int calc   = pow(10.0f, i);
		int calc2  = offset / calc;
		mIdList[i] = offset / calc;
		calc2 *= calc;
		offset -= calc2;
	}

	u64* mTagList; // _00
	int* mIdList;  // _04
	u64 mMsgID;    // _08
	int mSize;     // _10
};

struct TScaleUpCounter : public og::Screen::CallBack_CounterRV {

	inline TScaleUpCounter(char** texData, u16 digits, u16 flag2, JKRArchive* arc)
	    : CallBack_CounterRV(texData, digits, flag2, arc)
	{
		_A8 = 0;
		_A9 = 0;
		_AA = 0;
		_AC = 0.0f;
	}

	virtual ~TScaleUpCounter() { }                                                           // _08 (weak)
	virtual void init(J2DScreen* screen, u64 tag1, u64 tag2, u64 tag3, u32* ptr, bool check) // _1C (weak)
	{
		og::Screen::CallBack_CounterRV::init(screen, tag1, tag2, tag3, ptr, check);
		_AC = mPane12DistX;
	}
	virtual void setValue(bool, bool); // _28

	void forceScaleUp(bool);
	void setScale(f32, f32);

	// _00     = VTBL
	// _00-_A8 = og::Screen::CallBack_CounterRV
	u8 _A8;  // _A8
	u8 _A9;  // _A9
	u8 _AA;  // _AA
	f32 _AC; // _AC
};

TScaleUpCounter* setScaleUpCounter(P2DScreen::Mgr*, u64, u32*, u16, JKRArchive*);
TScaleUpCounter* setScaleUpCounter2(P2DScreen::Mgr*, u64, u64, u32*, u16, JKRArchive*);

struct TCounterRV : public og::Screen::CallBack_CounterRV {
	TCounterRV(char**, u16, u16, JKRArchive*);

	virtual ~TCounterRV() { }          // _08 (weak)
	virtual void update();             // _10
	virtual void setValue(bool, bool); // _28

	// unused functions
	void createKiraEffect(f32, int);
	void fadeKiraEffect();
	void startScaleAnim();
	void reset();

	inline void setColor(u8 c)
	{
		mColor.a = c;
		mColor.b = c;
		mColor.g = c;
		mColor.r = c;
	}

	inline void setColor(u8 r, u8 g, u8 b, u8 a)
	{
		mColor.r = r;
		mColor.g = g;
		mColor.b = b;
		mColor.a = a;
	}

	inline void start()
	{
		if (!_B1) {
			mEnabled = true;
			_B1      = true;
		}
	}

	// _00     = VTBL
	// _00-_A8 = og::Screen::CallBack_CounterRV
	GXColor mColor;                       // _A8
	efx2d::T2DCountKira** mEfxCountKiras; // _AC, array of ptrs?
	u8 mEnabled;                          // _B0
	u8 _B1;                               // _B1
};

TCounterRV* setTCounterRV(P2DScreen::Mgr*, u64, u64, u64, u32*, u16, u16, JKRArchive*);

struct TCallbackScissor : public P2DScreen::CallBackNode {
	TCallbackScissor() { mBounds.set(0.0f); }

	inline void setDefaultBounds() { mBounds.set(0.0f, 0.0f, 640.0f, 480.0f); }

	virtual ~TCallbackScissor() { }                // _08 (weak)
	virtual void draw(Graphics&, J2DGrafContext&); // _14

	// _00     = VTBL
	// _00-_1C = P2DScreen::CallBackNode
	JGeometry::TBox2f mBounds; // _1C
};

struct TScissorPane : public J2DPictureEx {
	TScissorPane() { }
	virtual ~TScissorPane() { }            // _08 (weak)
	virtual void drawSelf(f32, f32, Mtx*); // _38

	// _00      = VTBL
	// _00-_1A8 = J2DPictureEx
	JGeometry::TBox2f mBounds; // _1A8
};

struct TGXSetPane : public J2DPictureEx {
	TGXSetPane()
	    : J2DPictureEx('test', JGeometry::TBox2f(0.0f, 0.0f, 10.0f, 10.0f), "dummy", 0x1100000)
	{
	}

	virtual ~TGXSetPane() { }             // _08 (weak)
	virtual void drawSelf(f32, f32, Mtx*) // _38
	{
		GXSetColorUpdate(GX_TRUE);
		GXSetAlphaUpdate(GX_FALSE);
	}

	// _00      = VTBL
	// _00-_1A8 = J2DPictureEx
};

struct TMovePane {
	TMovePane()
	{
		mPane      = nullptr;
		mStickPane = nullptr;
		mAngle     = 0.0f;
		mState     = 0;
		mCounter   = 0;
		_44        = 0;
		_48        = 0;
	}

	void setPane(J2DPane*);
	void update();
	void move();
	void turn();
	f32 getAngDist();
	bool hosei();
	void rolling();
	void stick();
	void forceTurn();
	void startStick(J2DPane*);
	bool isReachToGoal();
	void reset();

	inline void start()
	{
		mState   = 1;
		mOffset  = mPanePosition;
		mCounter = 0;
	}

	J2DPane* mPane;                   // _00
	J2DPane* mStickPane;              // _04
	JGeometry::TVec2f mOffset;        // _08
	JGeometry::TVec2f mPanePosition;  // _10
	JGeometry::TVec2f mPaneGoal;      // _18
	JGeometry::TVec2f mVelocity;      // _20
	f32 mAngleSin;                    // _28
	f32 mAngleCos;                    // _2C
	JGeometry::TVec2f mStickPosition; // _30
	f32 mAngle;                       // _38
	int mState;                       // _3C
	int mCounter;                     // _40
	u32 _44;                          // _44, unknown
	int _48;                          // _48, unknown
};

struct THuWhitePaneSet : public J2DPictureEx {
	THuWhitePaneSet(J2DPane* pane)
	    : J2DPictureEx('test', JGeometry::TBox2f(0.0f, 0.0f, pane->getWidth(), pane->getHeight()), "sunh_w.bti", 0x1100000)
	{
		_1A8 = Vector2f(0.0f);
	}

	virtual ~THuWhitePaneSet() { }         // _08 (weak)
	virtual void drawSelf(f32, f32, Mtx*); // _38

	void gxSet();

	// _00      = VTBL
	// _00-_1A8 = J2DPictureEx
	Vector2f _1A8;   // _1A8
	Matrixf mMatrix; // _1B0
	u8 mAlpha;       // _1E0
	u8 _1E1[0x7];    // _1E1, unknown
};

struct TIndPane : public CNode {
	TIndPane(const char*, f32, f32);

	virtual ~TIndPane() { } // _08 (weak)
	virtual void draw();    // _10

	void createIndTexture(const char*);
	void createCaptureTexture(_GXTexFmt);

	inline void setAngleTimer(f32 time)
	{
		mMtxUseType  = 0;
		mTexMtxScale = -6;
		mMtxYOffset  = 0.0f;
		mMtxXOffset  = 0.0f;
		mRotation    = (time * 360.0f) / TAU;
	}

	inline void setXY(f32 x, f32 y)
	{
		mMtxXOffset = x;
		mMtxYOffset = y;
	}

	inline void setFlag(int flag)
	{
		mTexMtxScale = 0;
		mMtxUseType  = flag;
	}

	// _00     = VTBL
	// _00-_18 = CNode
	JUTTexture* mTexture1; // _18
	JUTTexture* mTexture2; // _1C
	JUTTexture* mTexture3; // _20
	Vector2f mMinPos;      // _24
	Vector2f mMaxPos;      // _2C
	f32 mMtxXOffset;       // _34
	f32 mMtxYOffset;       // _38
	s16 mTexMtxScale;      // _3C
	f32 mRotation;         // _40
	u8 mMtxUseType;        // _44
};

struct TChallengeScreen : public TScreenBase {
	TChallengeScreen(JKRArchive*, int);

	virtual void create(const char*, u32); // _08
	virtual void update();                 // _0C
	virtual void createAnimPane(char*);    // _14
	virtual void updateBckPane();          // _18

	bool isRandAnimStart();

	inline u8 getScreenAlpha()
	{
		GXColor color;
		JUT_ASSERTLINE(88, mAnimScreenCountMax >= 1, nullptr);
		static_cast<J2DAnmColor*>(mAnimScreens[1]->mAnm)->getColor(0, &color);
		return color.a;
	}

	// _00     = VTBL
	// _00-_18 = TScreenBase
	int mAnimPaneCount;                // _18
	og::Screen::AnimPane** mAnimPanes; // _1C
	int mCounter;                      // _20
	int mCounterMax;                   // _24
	bool _28;                          // _28
};

struct TChallengePiki {
	struct posInfo { // smh morimura why is this lower case
		posInfo() { }

		int mState;           // _00
		f32 mTimer;           // _04
		int _08;              // _08
		Vector2f mCurrentPos; // _0C
		Vector2f mInitialPos; // _14
		Vector2f mDeviation;  // _1C
	};

	enum PikiState {
		ChallengePiki_Inactive = 0,
		ChallengePiki_Standby  = 2,
		ChallengePiki_Jumping  = 4,
		ChallengePiki_Falling  = 5,
	};

	TChallengePiki(J2DPane*, J2DPane*, J2DPane*);

	void reset();
	void jumpStart(f32);
	void update();
	void draw();
	void setGoalPos(Vector2f&);
	bool isDemoEnd();

	J2DPane* mPanes[3];   // _00
	f32 mGoalXPos;        // _0C
	f32 mGoalYPos;        // _10
	Vector2f mVec[2];     // _14
	posInfo mPosInfo[50]; // _24
	int mMaxPiki;         // _72C
	f32 mYOffset;         // _730
};

struct TChallengeDoping {
	TChallengeDoping(J2DPane*, J2DPane*, J2DPane*, J2DPane*);

	void setLevel(int);
	void update();

	J2DPane* mPaneBase;       // _00
	J2DPane* mBubblePanes[3]; // _04
	f32 mGoalFillLevel;       // _10
	f32 mCurrentFillLevel;    // _14
};

struct TChallengePanel {
	TChallengePanel(J2DPictureEx*, J2DPane*, J2DPane*);
	void stateInitialize(JKRArchive*, int, int);
	void changeState();
	void addAlpha();
	void decAlpha();
	void alphaUpdate(f32);
	bool canSelect();
	void update(int, bool);
	void startScaleUp();

	enum ChallengePanelState {
		ChallengePanel_NotOpen  = 0, // yellow bud
		ChallengePanel_Unbeaten = 1, // leaf
		ChallengePanel_Cleared  = 2, // white flower
		ChallengePanel_Perfect  = 3, // purple flower
	};

	JKRArchive* mArchive;            // _00
	J2DPictureEx* mPane1;            // _04
	J2DPane* mPane2;                 // _08
	J2DPane* mPane3;                 // _0C
	og::Screen::ScaleMgr* mScaleMgr; // _10
	f32 mCurrentScale;               // _14
	f32 mSelectAnimAlpha;            // _18
	int mState;                      // _1C
	int mAfterState;                 // _20
	bool mIsUnlock;                  // _24
	f32 mXOffset;                    // _28
	f32 mYOffset;                    // _2C
	int mIndex;                      // _30
	f32 mTimer;                      // _34
};

struct TZukanWindow : public TScreenBase {
	enum StateID {
		STATE_Inactive = 0,
		STATE_Appear,
		STATE_Active,
		STATE_Exit,
	};

	TZukanWindow(JKRArchive*, int);

	virtual void create(const char*, u32);        // _08
	virtual void update();                        // _0C
	virtual void draw(Graphics&, J2DPerspGraph*); // _10

	inline void getAnimColor(GXColor& color)
	{
		JUT_ASSERTLINE(88, mAnimScreenCountMax >= 1, nullptr);
		static_cast<J2DAnmColor*>(mAnimScreens[1]->mAnm)->getColor(0, &color);
	}

	void windowOpen();
	void windowClose();
	void msgScroll(f32);
	f32 getPosRate();
	void setWindowColor(J2DGXColorS10&);
	void setIconColor(J2DGXColorS10&, J2DGXColorS10&);
	void onIcon(int);
	void moveIcon(f32);
	void changeIconTexture(int, ResTIMG*);

	inline bool checkState(u8 state) const { return mState == state; }

	// _00     = VTBL
	// _00-_18 = TScreenBase
	u8 _18;                               // _18
	f32 mCharacterIconXOffset;            // _1C
	int mState;                           // _20
	og::Screen::AnimPane* mAnimPaneLR;    // _24
	og::Screen::AnimPane* mAnimPaneLight; // _28
	TCallbackScrollMsg* mMsgCallback;     // _2C
	og::Screen::ScaleMgr* mScaleMgr;      // _30
	TCallbackScissor* mScissor;           // _34
	J2DPane* mPaneWinCap;                 // _38
	J2DPane* mPaneIcon;                   // _3C
	J2DPane* mPaneWinMap;                 // _40
	J2DPane* mPaneIconLight;              // _44
	J2DPicture* mCharacterIcon[2];        // _48
	f32 mScrollPosition;                  // _50
	f32 mIconYHeightSin;                  // _54
};

} // namespace Morimura

#endif
