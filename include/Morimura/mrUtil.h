#ifndef _MORIMURA_MRUTIL_H
#define _MORIMURA_MRUTIL_H

#include "og/Screen/callbackNodes.h"
#include "Screen/screenObj.h"
#include "efx2d/T2DCountKira.h"

struct J2DPane;

namespace Morimura {

void setScreenAlpha(J2DPane*, u8);

struct TOffsetMsgSet {
	TOffsetMsgSet(u64*, u64, int);
	TOffsetMsgSet(u64*, u64, int, u64*, int*);

	u64 getMsgID(int);

	inline void calcOffset(int& offset, int i)
	{
		int calc  = pow(10.0f, i);
		int calc2 = offset / calc;
		_04[i]    = offset / calc;
		calc2 *= calc;
		offset -= calc2;
	}

	u64* mTagList; // _00
	int* _04;      // _04
	u64 mMsgID;    // _08
	int mSize;     // _10
};

struct TScaleUpCounter : public og::Screen::CallBack_CounterRV {

	inline TScaleUpCounter(char** name, u16 flag1, u16 flag2, JKRArchive* arc)
	    : CallBack_CounterRV(name, flag1, flag2, arc)
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

	inline void getColor(JUtility::TColor& color) { color.set(mColor); }

	// _00     = VTBL
	// _00-_A8 = og::Screen::CallBack_CounterRV
	JUtility::TColor mColor;              // _A8
	efx2d::T2DCountKira** mEfxCountKiras; // _AC, array of ptrs?
	u8 mEnabled;                          // _B0
	u8 _B1;                               // _B1
};

TCounterRV* setTCounterRV(P2DScreen::Mgr*, u64, u64, u64, u32*, u16, u16, JKRArchive*);

struct TCallbackScissor : public P2DScreen::CallBackNode {
	TCallbackScissor() { mBounds.set(0.0f); }

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

	J2DPane* mPane;      // _00
	J2DPane* mStickPane; // _04
	JGeometry::TVec2f mOffset;
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
	u32 _48;                          // _48, unknown
};

struct THuWhitePaneSet : public J2DPictureEx {
	THuWhitePaneSet(J2DPane* pane)
	    : J2DPictureEx('test', JGeometry::TBox2f(0.0f, 0.0f, pane->mBounds.f.x - pane->mBounds.i.x, pane->mBounds.f.y - pane->mBounds.i.y),
	                   "sunh_w.bti", 0x1100000)
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
		_44 = 0;
		_3C = -6;
		_38 = 0.0f;
		_34 = 0.0f;
		_40 = (time * 360.0f) / TAU;
	}

	inline void setXY(f32 x, f32 y)
	{
		_34 = x;
		_38 = y;
	}

	inline void setFlag(int flag)
	{
		_3C = 0;
		_44 = flag;
	}

	// _00     = VTBL
	// _00-_18 = CNode
	JUTTexture* mTexture1; // _18
	JUTTexture* mTexture2; // _1C
	JUTTexture* mTexture3; // _20
	Vector2f mMinPos;      // _24
	Vector2f mMaxPos;      // _2C
	f32 _34;               // _34
	f32 _38;               // _38
	s16 _3C;               // _3C
	f32 _40;               // _40
	u8 _44;                // _44
};

// unused struct?
struct TClearTexture {
	void resetTexture();
	void changeTexture(bool);
	void getPosition(Vector2f&);
	void getEffectPosition(Vector2f&);
};

} // namespace Morimura

#endif
