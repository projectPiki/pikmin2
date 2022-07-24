#ifndef _GENCAVEPARM_H
#define _GENCAVEPARM_H

/*
    __vt__11GenCaveParm:
    .4byte 0
    .4byte 0
    .4byte getShapeID__Q24Game11GenItemParmFv
*/

namespace Game {
struct GenItemParm {
	virtual void getShapeID(); // _08 (inline)
};
} // namespace Game

struct GenCaveParm : public GenItemParm {
};

#endif
