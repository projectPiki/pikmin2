#ifndef _P2JME_CAPTION_H
#define _P2JME_CAPTION_H

#include "P2JME/Window.h"

namespace P2JME {
namespace Caption {
struct TControl : public P2JME::Window::TControl {
	TControl();

	virtual ~TControl();                     // _08 (weak)
	virtual void reset();                    // _0C
	virtual void draw(Graphics&);            // _18
	virtual void onInit();                   // _34
	virtual void createSequenceProcessor();  // _40 (weak)
	virtual void createRenderingProcessor(); // _44 (weak)

	void updateSetFrame(long);
	void start(char*, long, long);

	// _00     = VTBL
	// _00-_5C = P2JME::Window::TControl
	u32 _5C;        // _5C, unknown
	u32 m_msgID[2]; // _60
	u32 _68;        // _68, unknown
};

struct TRenderingProcessor : public P2JME::Window::TRenderingProcessor {
	virtual ~TRenderingProcessor();                          // _08 (weak)
	virtual void doDrawCommon(f32, f32, Matrixf*, Matrixf*); // _84
	virtual void doGetDrawInfo(Window::DrawInfo*);           // _8C

	// _00      = VTBL
	// _00-_144 = P2JME::Window::TRenderingProcessor
	f32 _144; // _144
};

struct TSequenceProcessor : public P2JME::Window::TSequenceProcessor {

	virtual ~TSequenceProcessor();     // _08 (weak)
	virtual bool do_isReady();         // _48 (weak)
	virtual void doResetAbtnWaitSE();  // _60 (weak)
	virtual void doCharacterSEStart(); // _64 (weak)
	virtual void doCharacterSE(int);   // _68 (weak)
	virtual void doCharacterSEEnd();   // _6C (weak)

	// _00     = VTBL
	// _00-_70 = P2JME::Window::TSequenceProcessor
};
} // namespace Caption
} // namespace P2JME

#endif
