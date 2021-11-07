#ifndef _JMESSAGE_TCONTROL_H
#define _JMESSAGE_TCONTROL_H

namespace JMessage {
struct TControl {
	virtual ~TControl();    // _00
	virtual void _04() = 0; // _04

	// _00 VTBL
};
} // namespace JMessage

#endif
