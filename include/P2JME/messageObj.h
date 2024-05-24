#ifndef _P2JME_WINDOW_H
#define _P2JME_WINDOW_H

#include "JSystem/JMessage/TControl.h"
#include "P2JME/messageRendering.h"
#include "P2JME/TSequenceProcessor.h"
#include "P2JME/P2JME.h"
#include "Matrixf.h"
#include "CNode.h"
#include "Graphics.h"

namespace P2JME {

struct TControl : public JMessage::TControl {
	TControl();

	virtual ~TControl() { }                                            // _08 (weak)
	virtual void reset();                                              // _0C
	virtual bool update();                                             // _10
	virtual bool update(Controller*, Controller*) { return update(); } // _14 (weak)
	virtual void draw(Graphics&);                                      // _18
	virtual void draw(Mtx, Mtx);                                       // _1C
	virtual BOOL setMessageID(u32, u32);                               // _20
	virtual void setMessageID(char*);                                  // _24
	virtual void setMessageID(u64 tag)                                 // _28 (weak)
	{
		setMessageID((char*)&tag);
	}
	virtual BOOL setMessageCode(u16, u16); // _2C
	virtual BOOL setMessageCode(u32);      // _30
	virtual bool onInit() { return true; } // _34 (weak)
	virtual void createReference()         // _38 (weak)
	{
		mReference = gP2JMEMgr->mMsgRef;
	}
	virtual void createResourceContainer() // _3C (weak)
	{
		mResContainer = gP2JMEMgr->mResContainer;
	}
	virtual void createSequenceProcessor() { mSequenceProc = new TSequenceProcessor(getReference(), this); } // _40 (weak)
	virtual void createRenderingProcessor() { mTextRenderProc = new TRenderingProcessor(getReference()); }   // _44 (weak)

	inline JMessage::TReference* getReference()
	{
		P2ASSERTLINE(121, mReference);
		return mReference;
	}

	bool setController(Controller*, Controller*);
	bool setFont(JUTFont* font);
	bool setRubyFont(JUTFont*);
	bool init();
	void setLocate(int, int);
	void drawCommon();

	// _00     = VTBL
	// _00-_38 = JMessage::TControl
	JMessage::TReference* mReference;            // _38
	TSequenceProcessor* mSequenceProc;           // _3C
	TRenderingProcessor* mTextRenderProc;        // _40
	JMessage::TResourceContainer* mResContainer; // _44
	f32 mTimer;                                  // _48
	BitFlag<u32> mStatus;                        // _4C
};

namespace Window {
struct DrawInfo : public CNode {
	DrawInfo();

	virtual ~DrawInfo() { } // _08 (weak)

	void update();
	void init(int);

	f32 getCalc()
	{
		f32 calc = mTimer / mTimeLimit;
		calc *= TAU * 2.0f;
		return calc;
	}

	// _00     = VTBL
	// _00-_18 = CNode
	u32 _18;        // _18
	f32 mTimer;     // _1C
	f32 mTimeLimit; // _20
};

struct DrawInfoMgr {
	DrawInfoMgr() { }

	DrawInfo* searchDrawInfo(int);
	DrawInfo* getDrawInfo(int);
	void releaseDrawInfo(DrawInfo*);
	void init(u32);
	void update();
	void reset();

	CNode mInfoList1; // _00
	CNode mInfoList2; // _18
};

struct TRenderingProcessor : public P2JME::TRenderingProcessor {
	TRenderingProcessor(JMessage::TReference*);

	virtual ~TRenderingProcessor() { }                           // _08 (weak)
	virtual void update();                                       // _68
	virtual void reset();                                        // _6C
	virtual void doDrawImage(JUTTexture*, f32, f32, f32, f32);   // _74
	virtual f32 doDrawRuby(f32, f32, f32, f32, int, bool);       // _78
	virtual f32 doDrawLetter(f32, f32, f32, f32, int, bool);     // _7C
	virtual BOOL doDrawCommon(f32, f32, Matrixf*, Matrixf*);     // _84
	virtual void makeMatrix(Matrixf*, DrawInfo*, f32, Vector3f); // _88
	virtual void doGetDrawInfo(DrawInfo*) { }                    // _8C (weak)

	void initDrawInfoMgr(u32);

	// _00      = VTBL
	// _00-_110 = P2JME::TRenderingProcessor
	DrawInfoMgr mDrawInfo; // _110
	f32 mSpeed;            // _140
};

struct TSequenceProcessor : public P2JME::TSequenceProcessor {
	TSequenceProcessor(JMessage::TReference*, JMessage::TControl*);

	virtual ~TSequenceProcessor() { }  // _08 (weak)
	virtual void doCharacterSEStart(); // _64
	virtual void doCharacterSE(int);   // _68
	virtual void doCharacterSEEnd();   // _6C
	virtual void doFastForwardSE();    // _70

	inline bool isFastSE()
	{
		bool ret = false;
		switch (_6C) {
		case 0:
			break;
		case 1:
		case 2:
			ret = true;
			break;
		}
		return ret;
	}

	// _00     = VTBL
	// _00-_70 = P2JME::TSequenceProcessor
};

struct TControl : public P2JME::TControl {
	TControl();

	virtual ~TControl() { }                        // _08 (weak)
	virtual void reset();                          // _0C
	virtual bool update(Controller*, Controller*); // _14
	virtual void draw(Graphics&);                  // _18
	virtual void draw(Mtx mtx1, Mtx mtx2)          // _1C (weak)
	{
		P2JME::TControl::draw(mtx1, mtx2);
	}
	virtual bool onInit();                  // _34
	virtual void createRenderingProcessor() // _44 (weak)
	{
		mTextRenderProc = new TRenderingProcessor(getReference());
	}

	virtual void createSequenceProcessor() // _40 (weak)
	{
		mSequenceProc = new TSequenceProcessor(getReference(), this);
	}
	void initRenderingProcessor(u32);

	// _00     = VTBL
	// _00-_50 = P2JME::TControl
	f32 _50;     // _50
	f32 mTimer1; // _54
	f32 mTimer2; // _58
};

} // namespace Window
} // namespace P2JME

#endif
