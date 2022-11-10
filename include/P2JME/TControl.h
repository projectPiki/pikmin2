#ifndef _P2JME_TCONTROL_H
#define _P2JME_TCONTROL_H

#include "JSystem/JMessage/TControl.h"
#include "JSystem/JMessage/TReference.h"
#include "P2JME/TRenderingProcessor.h"
#include "P2JME/TSequenceProcessor.h"
#include "Dolphin/mtx.h"
#include "Graphics.h"

struct Controller;

namespace P2JME {
struct TControl : public JMessage::TControl {
	TControl();

	virtual ~TControl();                           // _08 (weak)
	virtual void reset();                          // _0C
	virtual void update();                         // _10
	virtual void update(Controller*, Controller*); // _14 (weak)
	virtual void draw(Graphics&);                  // _18
	virtual void draw(Mtx, Mtx);                   // _1C
	virtual void setMessageID(u32, u32);           // _20
	virtual void setMessageID(char*);              // _24
	virtual void setMessageID(u64);                // _28 (weak)
	virtual void setMessageCode(u16, u16);         // _2C
	virtual void setMessageCode(u32);              // _30
	virtual void onInit();                         // _34 (weak)
	virtual void createReference();                // _38 (weak)
	virtual void createResourceContainer();        // _3C (weak)
	virtual void createSequenceProcessor();        // _40 (weak)
	virtual void createRenderingProcessor();       // _44 (weak)

	void setController(Controller*, Controller*);
	void setFont(JUTFont*);
	void setRubyFont(JUTFont*);
	void init();
	void setLocate(int, int);

	// _00     = VTBL
	// _00-_38 = JMessage::TControl
	JMessage::TReference* _38;         // _38
	TSequenceProcessor* _3C;           // _3C
	TRenderingProcessor* _40;          // _40
	JMessage::TResourceContainer* _44; // _44
	f32 _48;                           // _48
	uint _4C;                          // _4C
};
} // namespace P2JME

#endif
