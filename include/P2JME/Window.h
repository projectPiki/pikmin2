#ifndef _P2JME_WINDOW_H
#define _P2JME_WINDOW_H

#include "P2JME/TControl.h"
#include "Matrixf.h"
#include "CNode.h"

namespace P2JME {
namespace Window {
struct DrawInfo : public CNode {
	DrawInfo();

	virtual ~DrawInfo(); // _08 (weak)

	// _00     = VTBL
	// _00-_18 = CNode
	u8 _18[0x4]; // _18, unknown
	f32 _1C;     // _1C
	f32 _20;     // _20
};

struct DrawInfoMgr {
	// TODO: fill this in once known
};

struct TControl : public P2JME::TControl {
	TControl();

	virtual ~TControl();                           // _08 (weak)
	virtual void reset();                          // _0C
	virtual void update(Controller*, Controller*); // _14
	virtual void draw(Graphics&);                  // _18
	virtual void draw(Mtx, Mtx);                   // _1C (weak)
	virtual void onInit();                         // _34
	virtual void createSequenceProcessor();        // _40 (weak)
	virtual void createRenderingProcessor();       // _44 (weak)

	void initRenderingProcessor(u32);

	// _00     = VTBL
	// _00-_50 = P2JME::TControl
	f32 _50; // _50
	f32 _54; // _54
	f32 _58; // _58
};

struct TRenderingProcessor : public P2JME::TRenderingProcessor {
	TRenderingProcessor(JMessage::TReference*);

	virtual ~TRenderingProcessor();                              // _08 (weak)
	virtual void update();                                       // _68
	virtual void reset();                                        // _6C
	virtual void doDrawImage(JUTTexture*, f32, f32, f32, f32);   // _74
	virtual void doDrawRuby(f32, f32, f32, f32, int, bool);      // _78
	virtual void doDrawLetter(f32, f32, f32, f32, int, bool);    // _7C
	virtual void doDrawCommon(f32, f32, Matrixf*, Matrixf*);     // _84
	virtual void makeMatrix(Matrixf*, DrawInfo*, f32, Vector3f); // _88
	virtual void doGetDrawInfo(DrawInfo*);                       // _8C (weak)

	// _00      = VTBL
	// _00-_110 = P2JME::TRenderingProcessor
	CNode _110; // _110, treat as DrawInfo
	CNode _128; // _128, treat as DrawInfo
	f32 _140;   // _140
};

struct TSequenceProcessor : public P2JME::TSequenceProcessor {
	TSequenceProcessor(JMessage::TReference*, JMessage::TControl*);

	virtual ~TSequenceProcessor();     // _08 (weak)
	virtual void doCharacterSEStart(); // _64
	virtual void doCharacterSE(int);   // _68
	virtual void doCharacterSEEnd();   // _6C
	virtual void doFastForwardSE();    // _70

	// _00     = VTBL
	// _00-_70 = P2JME::TSequenceProcessor
};
} // namespace Window
} // namespace P2JME

#endif
