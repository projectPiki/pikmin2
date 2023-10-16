#ifndef _CONTROLLER_H
#define _CONTROLLER_H

#include "JSystem/JUtility/JUTGamePad.h"

struct Controller : public JUTGamePad {
	Controller(JUTGamePad::EPadPort);

	virtual ~Controller() { } // _08 (weak)
};

#endif
