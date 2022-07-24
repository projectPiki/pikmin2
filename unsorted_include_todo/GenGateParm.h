#ifndef _GENGATEPARM_H
#define _GENGATEPARM_H

/*
    __vt__11GenGateParm:
    .4byte 0
    .4byte 0
    .4byte getShapeID__Q24Game11GenItemParmFv
*/

namespace Game {
struct GenItemParm {
	virtual void getShapeID(); // _08 (inline)
};
} // namespace Game

struct GenGateParm : public GenItemParm {
};

#endif
