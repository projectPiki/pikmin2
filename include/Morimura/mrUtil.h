#ifndef _MORIMURA_MRUTIL_H
#define _MORIMURA_MRUTIL_H

#include "og/Screen/callbackNodes.h"
#include "Screen/screenObj.h"
#include "efx2d/T2DCountKira.h"

struct J2DPane;

namespace Morimura {

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

struct TCounterRV : public og::Screen::CallBack_CounterRV {
	TCounterRV(char**, u16, u16, JKRArchive*);

	virtual ~TCounterRV();             // _08 (weak)
	virtual void update();             // _10
	virtual void setValue(bool, bool); // _28

	// _00     = VTBL
	// _00-_A8 = og::Screen::CallBack_CounterRV
	u8 _A8;                               // _A8
	u8 _A9;                               // _A9
	u8 _AA;                               // _AA
	u8 _AB;                               // _AB
	efx2d::T2DCountKira** mEfxCountKiras; // _AC, array of ptrs?
	u8 _B0;                               // _B0
	u8 _B1;                               // _B1
};

struct TCallbackScissor : public P2DScreen::CallBackNode {

	virtual ~TCallbackScissor() { }                // _08 (weak)
	virtual void draw(Graphics&, J2DGrafContext&); // _14

	// _00     = VTBL
	// _00-_1C = P2DScreen::CallBackNode
	f32 mX1; // _1C
	f32 mY1; // _20
	f32 mX2; // _24
	f32 mY2; // _28
};

struct TScissorPane : public J2DPictureEx {
	virtual ~TScissorPane() { }            // _08 (weak)
	virtual void drawSelf(f32, f32, Mtx*); // _38

	// _00      = VTBL
	// _00-_1A8 = J2DPictureEx
	f32 _1A8; // _1A8
	f32 _1AC; // _1AC
	f32 _1B0; // _1B0
	f32 _1B4; // _1B4
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
	J2DPane* _00; // _00
	u32 _04;      // _04, unknown
	f32 _08;      // _08
	f32 _0C;      // _0C
	f32 _10;      // _10
	f32 _14;      // _14
	f32 _18;      // _18
	f32 _1C;      // _1C
	f32 _20;      // _20
	f32 _24;      // _24
	f32 _28;      // _28
	f32 _2C;      // _2C
	u8 _30[0x8];  // _30, unknown
	f32 _38;      // _38
	int _3C;      // _3C, current operation maybe?
	int _40;      // _40
	u32 _44;      // _44, unknown
	u32 _48;      // _48, unknown
};

struct THuWhitePaneSet : public J2DPictureEx {
	virtual ~THuWhitePaneSet();            // _08 (weak)
	virtual void drawSelf(f32, f32, Mtx*); // _38

	void gxSet();

	// _00      = VTBL
	// _00-_1A8 = J2DPictureEx
	f32 _1A8;     // _1A8
	f32 _1AC;     // _1AC
	Matrixf _1B0; // _1B0
	u8 _1E0;      // _1E0
	u8 _1E1[0x7]; // _1E1, unknown
};

struct TIndPane : public CNode {
	TIndPane(const char*, f32, f32);

	virtual ~TIndPane() { } // _08 (weak)
	virtual void draw();    // _10

	void createIndTexture(const char*);
	void createCaptureTexture(_GXTexFmt);

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
} // namespace Morimura

#endif
