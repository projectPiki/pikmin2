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
	virtual void getShapeID(); // _08 (inline)
};
} // namespace Game

struct GenPlantParm : public GenItemParm {
};

#endif
