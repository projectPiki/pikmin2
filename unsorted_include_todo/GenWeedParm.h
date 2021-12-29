#ifndef _GENWEEDPARM_H
#define _GENWEEDPARM_H

/*
    __vt__11GenWeedParm:
    .4byte 0
    .4byte 0
    .4byte getShapeID__Q24Game11GenItemParmFv
*/

namespace Game {
struct GenItemParm {
	virtual void getShapeID(); // _00

	// _00 VTBL
};
} // namespace Game

struct GenWeedParm : public GenItemParm {
	virtual void getShapeID(); // _00

	// _00 VTBL
};

#endif
