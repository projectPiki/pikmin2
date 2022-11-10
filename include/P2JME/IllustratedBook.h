#ifndef _P2JME_ILLUSTRATEDBOOK_H
#define _P2JME_ILLUSTRATEDBOOK_H

#include "P2JME/Window.h"

struct J2DTextBox;

namespace P2JME {
namespace IllustratedBook {
struct TControl : public P2JME::Window::TControl {
	TControl();

	virtual ~TControl();                           // _08 (weak)
	virtual void reset();                          // _0C
	virtual void update(Controller*, Controller*); // _14
	virtual void draw(Graphics&);                  // _18 (weak)
	virtual void draw(Mtx, Mtx);                   // _1C
	virtual void onInit();                         // _34
	virtual void createSequenceProcessor();        // _40 (weak)
	virtual void createRenderingProcessor();       // _44 (weak)

	void getScrollPosition();
	void scroll(f32);
	void setTextBoxInfo(J2DTextBox*);

	// _00     = VTBL
	// _00-_5C = P2JME::Window::TControl
	f32 _5C;               // _5C
	f32 _60;               // _60
	J2DTextBox* m_textBox; // _64
	f32 _68;               // _68
	f32 _6C;               // _6C
	f32 m_scrollSpeed;     // _70
};

struct TRenderingProcessor : public P2JME::Window::TRenderingProcessor {
	virtual ~TRenderingProcessor();                                      // _08 (weak)
	virtual void doTagControlAbtnWait();                                 // _80 (weak)
	virtual void makeMatrix(Matrixf*, Window::DrawInfo*, f32, Vector3f); // _88

	// _00      = VTBL
	// _00-_144 = P2JME::Window::TRenderingProcessor
};

struct TSequenceProcessor : public P2JME::TSeqProcNoSeq {

	virtual ~TSequenceProcessor(); // _08 (weak)

	// _00     = VTBL
	// _00-_70 = P2JME::TSeqProcNoSeq
};
} // namespace IllustratedBook
} // namespace P2JME

#endif
