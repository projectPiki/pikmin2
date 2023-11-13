#ifndef _OG_SCREEN_CALLBACKNODES_H
#define _OG_SCREEN_CALLBACKNODES_H

#include "types.h"
#include "JSystem/J2D/J2DPane.h"
#include "og/Screen/ScaleMgr.h"
#include "og/Screen/AngleMgr.h"
#include "P2DScreen.h"
#include "SoundID.h"

struct LifeGauge;

namespace JUtility {
struct TColor;
} // namespace JUtility

namespace P2JME {
struct SimpleMessage;
struct TRenderingProcessor;
} // namespace P2JME

namespace og {
namespace Screen {
struct AnimGroup;
struct AnimScreen;
struct DataNavi;

struct CounterKeta {
	inline CounterKeta(J2DPicture* pic)
	{
		mPicture      = pic;
		mTextureIndex = 0;
		mScaleMgr     = new ScaleMgr;
		mSize         = Vector2f(1.0f);
	}

	void setSuji(ResTIMG**, u32);
	void calcScale();

	J2DPicture* mPicture; // _00
	u32 mTextureIndex;    // _04
	ScaleMgr* mScaleMgr;  // _08
	Vector2f mSize;       // _0C
};

/**
 * @size{0x44}
 */
struct CallBack_CatchPiki : public P2DScreen::CallBackNode {
	CallBack_CatchPiki();

	virtual ~CallBack_CatchPiki() { } // _08
	virtual void update();            // _10

	void init(J2DScreen* canvas, u64 tag, u32* pikiType, JKRArchive* arc);
	void setPikiIcon(int);

	// _00     = VTBL
	// _00-_1C = P2DScreen::CallBackNode
	u32* mPikiType;        // _1C
	J2DPicture* mPikiIcon; // _20
	u32 mCurrPikiType;     // _24
	ScaleMgr mScaleMgr;    // _28
};

struct CallBack_CounterRV : public P2DScreen::CallBackNode {
	enum EnumCenteringMode { ECM_Unknown0 = 0, ECM_Unknown1 = 1, ECM_UNKNOWN_2 = 2 };

	CallBack_CounterRV(char**, u16, u16, JKRArchive*);

	virtual ~CallBack_CounterRV() { }              // _08 (weak)
	virtual void update();                         // _10
	virtual void draw(Graphics&, J2DGrafContext&); // _14
	virtual void init(J2DScreen*, u64, u64, u64, u32*,
	                  bool);           // _1C
	virtual void show();               // _20
	virtual void hide();               // _24
	virtual void setValue(bool, bool); // _28
	virtual void setValue();           // _2C (weak)

	inline int getMaxCounter() { return (mCurrCounters >= mCounterLimit) ? mCounterLimit : mCurrCounters; }

	J2DPane* getMotherPane();
	void setBlind(bool);
	void setCenteringMode(EnumCenteringMode);
	void setCounterUpDown(int, bool, bool);
	void setKetaSub(int, bool, bool);
	void setPuyoAnim(bool);
	void setPuyoAnimZero(bool);
	void setRandMode(bool);
	void setValPtr(u32*);
	void setZeroAlpha(u8);
	void startPuyoUp(f32);

	inline J2DPicture* getKetaPicture(int i) { return mCounters[i]->mPicture; }

	// _00     = VTBL
	// _00-_1C = P2DScreen::CallBackNode
	char** mCharacterTexturePaths;    // _1C
	u32* mCountPtr;                   // _20
	u32 mInitialDisplayValue;         // _24
	u32 mCurrDisplayValue;            // _28
	u16 mCurrCounters;                // _2C
	u16 mCounterLimit;                // _2E /* allocated slot count of _7C */
	u16 _30;                          // _30
	f32 mPane12DistX;                 // _34
	f32 mPane13DistX;                 // _38
	f32 _3C;                          // _3C
	Vector2f mPaneScale;              // _40
	Vector2f mPaneSize;               // _48
	Vector2f mPanePosition;           // _50
	Vector2f mPaneBounds;             // _58
	u32 mBasePosition;                // _60 /* Use J2DBasePosition constants. */
	u8 mPaneAlpha;                    // _64
	u8 _65[7];                        // _65 /* Hopefully this doesn't mess with size. */
	J2DPictureEx* mPic1;              // _6C
	J2DPane* mPic2;                   // _70
	J2DPane* mPic3;                   // _74
	J2DPane* mMotherPane;             // _78
	CounterKeta** mCounters;          // _7C
	ResTIMG** mImgResources;          // _80
	bool mIsPuyoAnim;                 // _84
	bool mIsPuyoAnimZero;             // _85
	bool mIsBlind;                    // _86
	bool mIsHidden;                   // _87
	bool mIsMother;                   // _88
	u8 _89;                           // _89
	EnumCenteringMode mCenteringMode; // _8C
	u8 mZeroAlpha;                    // _90
	SoundID mScaleUpSoundID;          // _94
	SoundID mScaleDownSoundID;        // _98
	u8 _9C;                           // _9C
	f32 _A0;                          // _A0
	f32 _A4;                          // _A4

	static struct StaticValues {
		inline StaticValues()
		{
			_00 = 0.5f;
			_04 = 30.0f;
			_08 = 0.8f;
		}

		f32 _00; // _00
		f32 _04; // _04
		f32 _08; // _08
	} msVal;
};

struct CallBack_CounterDay : public CallBack_CounterRV {
	CallBack_CounterDay(char**, u16, JKRArchive*);

	virtual ~CallBack_CounterDay() { } // _08 (weak)
	virtual void update();             // _10
	virtual void init(J2DScreen*, u64, u64, u64, u32*,
	                  bool); // _1C
	virtual void show();     // _20
	virtual void hide();     // _24
	virtual void setValue(); // _2C

	// _00     = VTBL
	// _00-_A8 = CallBack_CounterRV
	J2DPicture* mDayPic; // _A8
};

// Size: 0xCC
struct CallBack_CounterSlot : public CallBack_CounterRV {
	CallBack_CounterSlot(char**, u16, u16, JKRArchive*);

	virtual ~CallBack_CounterSlot(); // _08 (weak)
	virtual void update();           // _10
	virtual void init(J2DScreen*, u64, u64, u64, u32*,
	                  bool);           // _1C
	virtual void setValue(bool, bool); // _28
	virtual void setValue();           // _2C (weak)

	void setPuyoParam(f32, f32, f32);
	void slot_up(int);
	void startSlot(f32);

	inline void hidePicture(int i)
	{
		J2DPicture* pic = mCounters[i]->mPicture;
		pic->hide();
	}

	// _00     = VTBL
	// _00-_A8 = CallBack_CounterRV
	u8 _A8;              // _A8
	u8 _A9;              // _A9
	u8 _AA;              // _AA
	u8 _AB;              // _AB
	u8 _AC;              // _AC
	u32 _B0;             // _B0
	f32 mTimer;          // _B4
	f32 mUpdateInterval; // _B8
	f32 mPuyoParm1;      // _BC
	f32 mPuyoParm2;      // _C0
	f32 mPuyoParm3;      // _C4
	SoundID _C8;         // _C8
};

// Size: 0x28
struct CallBack_DrawAfter : public P2DScreen::CallBackNode {
	CallBack_DrawAfter(P2DScreen::Mgr*, u64);

	virtual ~CallBack_DrawAfter() { }                          // _08 (weak)
	virtual void update();                                     // _10
	virtual void draw(Graphics& gfx, J2DGrafContext& context); // _14

	// _00     = VTBL
	// _00-_1C = P2DScreen::CallBackNode
	J2DPictureEx* _1C; // _1C
	J2DPictureEx* _20; // _20
	bool mIsVisible;   // _24
};

// Size: 0x4C
struct CallBack_Furiko : public P2DScreen::CallBackNode {
	inline CallBack_Furiko();

	virtual ~CallBack_Furiko() { }                 // _08 (weak)
	virtual void update();                         // _10
	virtual void draw(Graphics&, J2DGrafContext&); // _14

	void init(J2DPane*, f32, f32, f32);
	void setParam(f32, f32, f32);
	void stop();

	// _00     = VTBL
	// _00-_1C = P2DScreen::CallBackNode
	J2DPane* mPane;           // _1C
	bool mCanUpdate;          // _20
	bool mDoResetPane;        // _21
	Vector2f mCurrPosition;   // _24
	f32 mOffset;              // _2C
	f32 mParam2;              // _30
	f32 mGrowth;              // _34
	Vector2f mGoalPosition;   // _38
	Vector2f mChangeModifier; // _40
	f32 mCurrPaneAngle;       // _48
};

struct CallBack_LifeGauge : public P2DScreen::CallBackNode {

	enum LifeGaugeType {
		LIFEGAUGE_OLIMAR    = 0,
		LIFEGAUGE_LOUIE     = 1,
		LIFEGAUGE_PRESIDENT = 2,
	};

	CallBack_LifeGauge();

	virtual ~CallBack_LifeGauge() { }                          // _08 (weak)
	virtual void update();                                     // _10
	virtual void draw(Graphics& gfx, J2DGrafContext& context); // _14

	void init(P2DScreen::Mgr* mgr, DataNavi* data, LifeGaugeType lifeGaugeType);
	void moveIcon();
	void setType(LifeGaugeType lifeGaugeType);
	void setOffset(f32 x, f32 y);

	static inline void initialiseStaticValues();

	// _00     = VTBL
	// _00-_1C = P2DScreen::CallBackNode
	DataNavi* mData;              // _1C
	f32 mNaviLifeRatio;           // _20
	f32 mWidthOrRadiusMaybe;      // _24
	f32 mOffsetX;                 // _28
	f32 mOffsetY;                 // _2C
	f32 _30;                      // _30
	f32 _34;                      // _34
	f32 _38;                      // _38
	f32 mNa_i_d4;                 // _3C
	f32 mNa_i_d8;                 // _40
	f32 mLi_i_d4;                 // _44
	f32 mLi_i_d8;                 // _48
	LifeGauge* mLifeGauge;        // _4C
	u8 mIsActiveNavi;             // _50
	u8 mIsActiveNaviOld;          // _51
	f32 mLowLifeSoundTimer;       // _54
	f32 _58;                      // _58
	P2DScreen::Mgr* _5C;          // _5C
	J2DPane* mPin1;               // _60
	J2DPicture* mPin2;            // _64
	J2DPane* mNa_i;               // _68
	J2DPane* mLi_i;               // _6C
	J2DPicture* _70;              // _70
	J2DPicture* _74;              // _74
	J2DPicture* _78;              // _78
	J2DPicture* _7C;              // _7C
	J2DPicture* _80;              // _80
	J2DPicture* _84;              // _84
	AngleMgr* mAngleMgr;          // _88
	ScaleMgr* mScaleMgr;          // _8C
	LifeGaugeType mLifeGaugeType; // _90
	u8 mCanNaviChange;            // _94
	f32 mMoveTimer;               // _98

	static struct StaticValues {
		inline StaticValues()
		{
			_00 = 0.4f;
			_04 = 0.6f;
			_08 = 0.3f;
			_0C = 0.4f;
		}

		f32 _00; // _00, unknown
		f32 _04; // _04, unknown
		f32 _08; // _08
		f32 _0C; // _0C
	} msVal;
};

// Size: 0x48
struct CallBack_Message : public P2DScreen::CallBackNode {
	CallBack_Message();

	virtual ~CallBack_Message() { }                // _08 (weak)
	virtual void update() { }                      // _10 (weak)
	virtual void draw(Graphics&, J2DGrafContext&); // _14

	// Unused/inlined:
	void drawInfo(J2DGrafContext&);

	// _00     = VTBL
	// _00-_1C = P2DScreen::CallBackNode
	P2JME::SimpleMessage* mMessage; // _1C
	u64 mMessageIDAsULL;            // _20
	u32 mMessageIDAs2UL[2];         // _28
	f32 _30;                        // _30
	f32 _34;                        // _34
	f32 mMinX;                      // _38, yes this is floats not a TBox2f or TVec2f
	f32 mMinY;                      // _3C, yes i know it's dumb.
	f32 mMaxX;                      // _40, unfortunately the CallBack_Message ctor is thrown up by a recursion
	f32 mMaxY;                      // _44, and it cannot have a ctor for these elements
};

/**
 * @unused
 */
struct CallBack_MessageAndShadow : public CallBack_Message {
	CallBack_MessageAndShadow(f32, f32, J2DPane*);

	virtual ~CallBack_MessageAndShadow();          // _08
	virtual void draw(Graphics&, J2DGrafContext&); // _14

	// _00     = VTBL
	// _00-_48 = CallBack_Message
};

// Unused/inlined:
void MessageSetInfoShadow(J2DPane*, P2JME::TRenderingProcessor*, J2DPane*);

struct CallBack_Screen : public P2DScreen::CallBackNode {
	CallBack_Screen(P2DScreen::Mgr*, u64);

	virtual ~CallBack_Screen() { }                 // _08 (weak)
	virtual void update();                         // _10
	virtual void draw(Graphics&, J2DGrafContext&); // _14

	void changeScreen(P2DScreen::Mgr*, u64);
	P2DScreen::Mgr* getPartsScreen();

	// _00     = VTBL
	// _00-_1C = P2DScreen::CallBackNode
	P2DScreen::Mgr* mPartsScreen; // _1C
	J2DPane* mPane;               // _20
	J2DPane* mTextBox;            // _24
	f32 mScale;                   // _28
	f32 mXOffs;                   // _2C
	f32 mYOffs;                   // _30
};

// Size: 0x38
struct CallBack_Picture : public CallBack_Screen {
	CallBack_Picture(P2DScreen::Mgr*, u64);

	virtual ~CallBack_Picture() { }                // _08
	virtual void update();                         // _10
	virtual void draw(Graphics&, J2DGrafContext&); // _14

	// _00     = VTBL
	// _00-_34 = CallBack_Screen
	AnimGroup* mAnimGroup; // _34
};

struct CallBack_SunMeter : public P2DScreen::CallBackNode {
	CallBack_SunMeter();

	virtual ~CallBack_SunMeter() { } // _08 (weak)
	virtual void update();           // _10

	void init(J2DScreen* canvas, f32* time);
	void startEffectChime();

	// _00     = VTBL
	// _00-_1C = P2DScreen::CallBackNode
	f32 mTimer;             // _1C
	f32* mCurrentTime;      // _20, ptr to current time, as fraction (0 = start of day, 1 = end of day)
	J2DPane* mStartPane;    // _24
	J2DPane* mEndPane;      // _28
	J2DPane* mSuniPane;     // _2C
	J2DPane* mSun1Pane;     // _30
	J2DPane* mSun2Pane;     // _34
	bool mHasChimedNoon;    // _38
	bool mHasChimedMorning; // _39
	bool mHasChimedEvening; // _3A
	ScaleMgr* mScaleMgr;    // _3C
};

struct AnimText_Screen : public CallBack_Screen {
	AnimText_Screen(P2DScreen::Mgr*, u64);

	virtual ~AnimText_Screen() { } // _08 (weak)
	virtual void update();         // _10

	void setAnimScreen(AnimScreen*);
	void close();
	void blink(f32, f32);
	void open(f32);
	void stop();
	void setText(u64);

	// unused/inlined
	void setTextAnim(u64);

	// _00     = VTBL
	// _00-_34 = CallBack_Screen
	int mColorType;            // _34
	AnimScreen* mAnmScreen;    // _38
	bool mIsUpdateSuccess;     // _3C
	J2DTextBox* mMsgBodyPane;  // _40
	J2DTextBox* mMsgBackPane;  // _44 // just a guess
	bool _48;                  // _48
	u32 _4C;                   // _4C
	u64 mTag;                  // _50
	f32 mBlinkTimer;           // _58
	f32 mBlinkFactor;          // _5C
	f32 mBlinkLevel;           // _60
	f32 _64;                   // _64
	bool mIsBlinking;          // _68
	f32 _6C;                   // _6C
	JUtility::TColor mColor0;  // _70
	JUtility::TColor mColor1;  // _74
	JUtility::TColor mColor2;  // _78
	JUtility::TColor mColor3;  // _7C
	JUtility::TColor mColor4;  // _80
	JUtility::TColor mColor5;  // _84
	JUtility::TColor mColor6;  // _88
	JUtility::TColor mColor7;  // _8C
	JUtility::TColor mColor8;  // _90
	JUtility::TColor mColor9;  // _94
	JUtility::TColor mColor10; // _98
	JUtility::TColor mColor11; // _9C
	JUtility::TColor mColor12; // _A0
	JUtility::TColor mColor13; // _A4
	JUtility::TColor mColor14; // _A8
	JUtility::TColor mColor15; // _AC
	JUtility::TColor mColor16; // _B0
	u8 _B4[4];                 // _B4
};

extern const char* SujiTex32[11];
extern const char* SujiTexMap[11];

} // namespace Screen
} // namespace og

#endif
