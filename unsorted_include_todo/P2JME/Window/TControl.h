#ifndef _P2JME_WINDOW_TCONTROL_H
#define _P2JME_WINDOW_TCONTROL_H

/*
    __vt__Q35P2JME6Window8TControl:
    .4byte 0
    .4byte 0
    .4byte __dt__Q35P2JME6Window8TControlFv
    .4byte reset__Q35P2JME6Window8TControlFv
    .4byte update__Q25P2JME8TControlFv
    .4byte update__Q35P2JME6Window8TControlFP10ControllerP10Controller
    .4byte draw__Q35P2JME6Window8TControlFR8Graphics
    .4byte draw__Q35P2JME6Window8TControlFPA4_fPA4_f
    .4byte setMessageID__Q25P2JME8TControlFUlUl
    .4byte setMessageID__Q25P2JME8TControlFPc
    .4byte setMessageID__Q25P2JME8TControlFUx
    .4byte setMessageCode__Q25P2JME8TControlFUsUs
    .4byte setMessageCode__Q25P2JME8TControlFUl
    .4byte onInit__Q35P2JME6Window8TControlFv
    .4byte createReference__Q25P2JME8TControlFv
    .4byte createResourceContainer__Q25P2JME8TControlFv
    .4byte createSequenceProcessor__Q35P2JME6Window8TControlFv
    .4byte createRenderingProcessor__Q35P2JME6Window8TControlFv
*/

namespace P2JME {
struct TControl {
	virtual ~TControl();                                         // _08 (weak)
	virtual void reset();                                        // _0C
	virtual void update();                                       // _10
	virtual void update(Controller*, Controller*);               // _14
	virtual void draw(Graphics&);                                // _18
	virtual void draw(float (*)[4], float (*)[4]);               // _1C (weak)
	virtual void setMessageID(unsigned long, unsigned long);     // _20
	virtual void setMessageID(char*);                            // _24
	virtual void setMessageID(unsigned long long);               // _28 (weak)
	virtual void setMessageCode(unsigned short, unsigned short); // _2C
	virtual void setMessageCode(unsigned long);                  // _30
	virtual void onInit();                                       // _34
	virtual void createReference();                              // _38 (weak)
	virtual void createResourceContainer();                      // _3C (weak)
};
} // namespace P2JME

namespace P2JME {
namespace Window {
struct TControl : public TControl {
	virtual ~TControl();                           // _08 (weak)
	virtual void reset();                          // _0C
	virtual void update(Controller*, Controller*); // _14
	virtual void draw(Graphics&);                  // _18
	virtual void draw(float (*)[4], float (*)[4]); // _1C (weak)
	virtual void onInit();                         // _34
	virtual void createSequenceProcessor();        // _40 (weak)
	virtual void createRenderingProcessor();       // _44 (weak)

	TControl();
	void initRenderingProcessor(unsigned long);
};
} // namespace Window
} // namespace P2JME

#endif
