#ifndef _KANDOLIB_CHOICE_H
#define _KANDOLIB_CHOICE_H

#include "types.h"

namespace KandoLib {
struct Choice {
	u32 mResult; // _00
	f32 mChance; // _04, out of 1.0 (a call to getRandomChoice(choices, 2) will
	             // have both choices set their chance to 0.5)
};

u32 getRandomChoice(Choice* choiceList, int listSize);
} // namespace KandoLib

#endif
