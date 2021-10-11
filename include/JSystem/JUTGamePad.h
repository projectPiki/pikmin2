#ifndef _JSYSTEM_JUTGAMEPAD_H
#define _JSYSTEM_JUTGAMEPAD_H

#include "types.h"

struct JUTGamePad {
	enum EPadPort {
		PORT_0 = 0,
		PORT_1,
		PORT_2,
		PORT_3,
	};

	JUTGamePad(EPadPort);
	virtual ~JUTGamePad();
};

#endif