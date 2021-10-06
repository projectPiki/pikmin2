#ifndef _CONTROLLER_H
#define _CONTROLLER_H

#include "JSystem/JUTGamePad.h"

struct Controller : public JUTGamePad {
    Controller(JUTGamePad::EPadPort);
    virtual ~Controller();
};

#endif