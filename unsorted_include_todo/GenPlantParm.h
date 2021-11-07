#ifndef _GENPLANTPARM_H
#define _GENPLANTPARM_H

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
