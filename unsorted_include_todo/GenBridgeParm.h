#ifndef _GENBRIDGEPARM_H
#define _GENBRIDGEPARM_H

/*
    __vt__13GenBridgeParm:
    .4byte 0
    .4byte 0
    .4byte getShapeID__Q24Game11GenItemParmFv
*/

namespace Game {
struct GenItemParm {
	virtual void getShapeID(); // _08 (weak)
};
} // namespace Game

struct GenBridgeParm : public GenItemParm {
};

#endif
