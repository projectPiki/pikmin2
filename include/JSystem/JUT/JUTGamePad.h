#ifndef _JSYSTEM_JUT_JUTGAMEPAD_H
#define _JSYSTEM_JUT_JUTGAMEPAD_H

#include "types.h"

struct JUTGamePad {
	enum EPadPort { PORT_0 = 0, PORT_1, PORT_2, PORT_3, PORT_INVALID = 0xFFFFFFFF };

	JUTGamePad(EPadPort);

	virtual ~JUTGamePad(); // _00
};

#endif
