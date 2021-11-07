#ifndef _P2JME_CAPTION_TCONTROL_H
#define _P2JME_CAPTION_TCONTROL_H

namespace P2JME {
namespace Caption {
	struct TControl {
		virtual ~TControl();                                         // _00
		virtual void reset();                                        // _04
		virtual void update();                                       // _08
		virtual void update(Controller*, Controller*);               // _0C
		virtual void draw(Graphics&);                                // _10
		virtual void draw(float (*)[4], float (*)[4]);               // _14
		virtual void setMessageID(unsigned long, unsigned long);     // _18
		virtual void setMessageID(char*);                            // _1C
		virtual void setMessageID(unsigned long long);               // _20
		virtual void setMessageCode(unsigned short, unsigned short); // _24
		virtual void setMessageCode(unsigned long);                  // _28
		virtual void onInit();                                       // _2C
		virtual void createReference();                              // _30
		virtual void createResourceContainer();                      // _34
		virtual void createSequenceProcessor();                      // _38
		virtual void createRenderingProcessor();                     // _3C

		// _00 VTBL
	};
} // namespace Caption
} // namespace P2JME

#endif
