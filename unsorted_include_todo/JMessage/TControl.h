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
	virtual ~TControl();    // _00
	virtual void _04() = 0; // _04

	// _00 VTBL
};
} // namespace JMessage

#endif
