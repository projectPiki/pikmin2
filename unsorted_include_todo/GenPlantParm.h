#ifndef _GENPLANTPARM_H
#define _GENPLANTPARM_H

/*
    __vt__12GenPlantParm:
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

struct GenPlantParm : public GenItemParm {
	virtual void getShapeID(); // _00

	// _00 VTBL
};

#endif
