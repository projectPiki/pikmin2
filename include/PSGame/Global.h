#ifndef _PSGAME_GLOBAL_H
#define _PSGAME_GLOBAL_H

#include "types.h"

namespace PSSystem {
struct DirectedBgm;
}

// TODO: sort out return types
void PSPlayerChangeToOrimer();
PSSystem::DirectedBgm* PSGetDirectedMainBgm();
void PSPlayerChangeToLugie();
PSSystem::DirectedBgm* PSGetDirectedMainBgmA();
void PSSetBgmSelectAsToolMode();

#endif
