#ifndef _GENONYONPARM_H
#define _GENONYONPARM_H

namespace Game {
struct GenItemParm {
	virtual void getShapeID(); // _00

	// _00 VTBL
};
} // namespace Game

struct GenOnyonParm : public GenItemParm {
	virtual void getShapeID(); // _00

	// _00 VTBL
};

#endif
