#ifndef _P2JME_TCONTROL_H
#define _P2JME_TCONTROL_H

/*
    __vt__Q25P2JME8TControl:
    .4byte 0
    .4byte 0
    .4byte __dt__Q25P2JME8TControlFv
    .4byte reset__Q25P2JME8TControlFv
    .4byte update__Q25P2JME8TControlFv
    .4byte update__Q25P2JME8TControlFP10ControllerP10Controller
    .4byte draw__Q25P2JME8TControlFR8Graphics
    .4byte draw__Q25P2JME8TControlFPA4_fPA4_f
    .4byte setMessageID__Q25P2JME8TControlFUlUl
    .4byte setMessageID__Q25P2JME8TControlFPc
    .4byte setMessageID__Q25P2JME8TControlFUx
    .4byte setMessageCode__Q25P2JME8TControlFUsUs
    .4byte setMessageCode__Q25P2JME8TControlFUl
    .4byte onInit__Q25P2JME8TControlFv
    .4byte createReference__Q25P2JME8TControlFv
    .4byte createResourceContainer__Q25P2JME8TControlFv
    .4byte createSequenceProcessor__Q25P2JME8TControlFv
    .4byte createRenderingProcessor__Q25P2JME8TControlFv
*/

namespace P2JME {
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
} // namespace P2JME

#endif
