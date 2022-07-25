#ifndef _PIKIAI_ACTONESHOTARG_H
#define _PIKIAI_ACTONESHOTARG_H

/*
    __vt__Q26PikiAI13ActOneshotArg:
    .4byte 0
    .4byte 0
    .4byte getName__Q26PikiAI9ActionArgFv
*/

namespace PikiAI {
struct ActionArg {
	virtual void getName(); // _08 (weak)
};
} // namespace PikiAI

namespace PikiAI {
struct ActOneshotArg : public ActionArg {
};
} // namespace PikiAI

#endif
