#ifndef _P2JME_CAPTION_H
#define _P2JME_CAPTION_H

#include "P2JME/messageObj.h"

namespace P2JME {
namespace Caption {

struct TRenderingProcessor : public P2JME::Window::TRenderingProcessor {
	TRenderingProcessor(JMessage::TReference* ref);

	virtual ~TRenderingProcessor() { }                       // _08 (weak)
	virtual BOOL doDrawCommon(f32, f32, Matrixf*, Matrixf*); // _84
	virtual void doGetDrawInfo(Window::DrawInfo*);           // _8C

	// _00      = VTBL
	// _00-_144 = P2JME::Window::TRenderingProcessor
	f32 _144; // _144
};

struct TSequenceProcessor : public P2JME::Window::TSequenceProcessor {
	TSequenceProcessor(JMessage::TReference* ref, JMessage::TControl* owner)
	    : Window::TSequenceProcessor(ref, owner)
	{
	}

	virtual ~TSequenceProcessor() { }          // _08 (weak)
	virtual bool do_isReady() { return true; } // _48 (weak)
	virtual void doResetAbtnWaitSE() { }       // _60 (weak)
	virtual void doCharacterSE(int) { }        // _68 (weak)
	virtual void doCharacterSEStart() { }      // _64 (weak)
	virtual void doCharacterSEEnd() { }        // _6C (weak)

	// _00     = VTBL
	// _00-_70 = P2JME::Window::TSequenceProcessor
};

struct TControl : public P2JME::Window::TControl {
	TControl();

	virtual ~TControl() { }                                                                                           // _08 (weak)
	virtual void reset();                                                                                             // _0C
	virtual void draw(Graphics&);                                                                                     // _18
	virtual bool onInit();                                                                                            // _34
	virtual void createSequenceProcessor() { mSequenceProc = new Caption::TSequenceProcessor(getReference(), this); } // _40 (weak)
	virtual void createRenderingProcessor() { mTextRenderProc = new Caption::TRenderingProcessor(getReference()); }   // _44 (weak)

	bool updateSetFrame(s32);
	void start(char*, s32, s32);

	// _00     = VTBL
	// _00-_5C = P2JME::Window::TControl
	int mState;      // _5C
	int mStartFrame; // _60
	int mEndFrame;   // _64
	int _68;         // _68, unknown
};

} // namespace Caption
} // namespace P2JME

#endif
