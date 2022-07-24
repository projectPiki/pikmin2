#ifndef _GENONYONPARM_H
#define _GENONYONPARM_H

/*
    __vt__12GenOnyonParm:
    .4byte 0
    .4byte 0
    .4byte getShapeID__Q24Game11GenItemParmFv
*/

namespace Game {
struct GenItemParm {
	virtual void getShapeID(); // _08

	// _00 VTBL
};
} // namespace Game

struct GenOnyonParm : public GenItemParm {

	// _00 VTBL
};

#endif
