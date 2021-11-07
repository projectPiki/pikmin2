#ifndef _GENCAVEPARM_H
#define _GENCAVEPARM_H

namespace Game {
struct GenItemParm {
	virtual void getShapeID(); // _00

	// _00 VTBL
};
} // namespace Game

struct GenCaveParm : public GenItemParm {
	virtual void getShapeID(); // _00

	// _00 VTBL
};

#endif
