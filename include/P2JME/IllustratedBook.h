#ifndef _P2JME_ILLUSTRATEDBOOK_H
#define _P2JME_ILLUSTRATEDBOOK_H

#include "P2JME/messageObj.h"

struct J2DTextBox;

namespace P2JME {
namespace IllustratedBook {
struct TControl : public P2JME::Window::TControl {
	TControl();

	virtual ~TControl() { }                                                                                  // _08 (weak)
	virtual void reset();                                                                                    // _0C
	virtual bool update(Controller*, Controller*);                                                           // _14
	virtual void draw(Graphics& gfx) { P2JME::Window::TControl::draw(gfx); }                                 // _18 (weak)
	virtual void draw(Mtx, Mtx);                                                                             // _1C
	virtual bool onInit();                                                                                   // _34
	virtual void createSequenceProcessor() { mSequenceProc = new TSequenceProcessor(getReference(), this); } // _40 (weak)
	virtual void createRenderingProcessor() { mTextRenderProc = new TRenderingProcessor(getReference()); }   // _44 (weak)

	f32 getScrollPosition();
	void scroll(f32);
	void setTextBoxInfo(J2DTextBox*);

	// _00     = VTBL
	// _00-_5C = P2JME::Window::TControl
	f32 mCurrentScroll;     // _5C
	f32 mCurrentTextHeight; // _60
	J2DTextBox* mTextBox;   // _64
	f32 mMaxScroll;         // _68
	f32 _6C;                // _6C
	f32 mScrollSpeed;       // _70
};

struct TRenderingProcessor : public P2JME::Window::TRenderingProcessor {
	TRenderingProcessor(JMessage::TReference*);

	virtual ~TRenderingProcessor() { }                                   // _08 (weak)
	virtual bool doTagControlAbtnWait() { return true; }                 // _80 (weak)
	virtual void makeMatrix(Matrixf*, Window::DrawInfo*, f32, Vector3f); // _88

	// _00      = VTBL
	// _00-_144 = P2JME::Window::TRenderingProcessor
	f32 _144; // _144
};

struct TSequenceProcessor : public P2JME::TSeqProcNoSeq {
	TSequenceProcessor(JMessage::TReference* ref, JMessage::TControl* owner)
	    : TSeqProcNoSeq(ref, owner)
	{
	}

	virtual ~TSequenceProcessor() { } // _08 (weak)

	// _00     = VTBL
	// _00-_70 = P2JME::TSeqProcNoSeq
};
} // namespace IllustratedBook
} // namespace P2JME

#endif
