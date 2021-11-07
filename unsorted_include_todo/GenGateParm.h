#ifndef _GENGATEPARM_H
#define _GENGATEPARM_H

namespace Game {
struct GenItemParm {
	virtual void getShapeID(); // _00

	// _00 VTBL
};
} // namespace Game

struct GenGateParm : public GenItemParm {
	virtual void getShapeID(); // _00

	// _00 VTBL
};

#endif
