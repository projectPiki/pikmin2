#ifndef _GENDOWNFLOORPARM_H
#define _GENDOWNFLOORPARM_H

/*
    __vt__16GenDownFloorParm:
    .4byte 0
    .4byte 0
    .4byte getShapeID__Q24Game11GenItemParmFv
*/

namespace Game {
struct GenItemParm {
	virtual void getShapeID(); // _08 (inline)
};
} // namespace Game

struct GenDownFloorParm : public GenItemParm {
};

#endif
