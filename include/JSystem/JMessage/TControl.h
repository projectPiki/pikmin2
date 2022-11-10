#ifndef _JSYSTEM_JMESSAGE_TCONTROL_H
#define _JSYSTEM_JMESSAGE_TCONTROL_H

#include "types.h"

namespace JMessage {

struct TProcessor;
struct TResource;

struct TControl {
	TControl();

	virtual ~TControl();      // _08
	virtual void reset() = 0; // _0C

	bool update();
	void render();
	bool setMessageCode(u16, u16);
	bool setMessageID(u32, u32, bool*);
	bool setMessageCode_inSequence_(const TProcessor*, u16, u16);

	// _00 = VTBL
	TProcessor* _04; // _04
	TProcessor* _08; // _08
	u16 _0C;         // _0C
	u16 _0E;         // _0E
	TResource* _10;  // _10
	char* _14;       // _14
	char* _18;       // _18
	char* _1C;       // _1C
	char* _20;       // _20
	int _24;         // _24
	u8 _28[0x10];    // _28-_38 - unknown
};
} // namespace JMessage

#endif
