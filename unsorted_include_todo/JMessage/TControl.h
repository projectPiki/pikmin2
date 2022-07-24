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

	// _00 VTBL
};
} // namespace JMessage

#endif
