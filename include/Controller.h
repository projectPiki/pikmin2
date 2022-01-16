#ifndef _CONTROLLER_H
#define _CONTROLLER_H

#include "JSystem/JUT/JUTGamePad.h"

struct Controller : public JUTGamePad {
	Controller(JUTGamePad::EPadPort);

	virtual ~Controller(); // _00
};

#endif
