#ifndef _JMESSAGE_TCONTROL_H
#define _JMESSAGE_TCONTROL_H

/*
    __vt__Q28JMessage8TControl:
    .4byte 0
    .4byte 0
    .4byte __dt__Q28JMessage8TControlFv
    .4byte 0
*/

namespace JMessage {
struct TControl {
	virtual ~TControl();    // _08
	virtual void _0C() = 0; // _0C

	TControl();
	void reset();
	void update();
	void render();
	void setMessageCode(unsigned short, unsigned short);
	void setMessageID(unsigned long, unsigned long, bool*);
	void setMessageCode_inSequence_(const JMessage::TProcessor*, unsigned short, unsigned short);
};
} // namespace JMessage

#endif
