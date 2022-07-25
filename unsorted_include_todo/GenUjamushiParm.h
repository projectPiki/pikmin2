#ifndef _GENUJAMUSHIPARM_H
#define _GENUJAMUSHIPARM_H

/*
    __vt__15GenUjamushiParm:
    .4byte 0
    .4byte 0
    .4byte getShapeID__Q24Game11GenItemParmFv
*/

namespace Game {
struct GenItemParm {
	virtual void getShapeID(); // _08 (weak)
};
} // namespace Game

struct GenUjamushiParm : public GenItemParm {
};

#endif
