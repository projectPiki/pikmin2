#ifndef _GENBRIDGEPARM_H
#define _GENBRIDGEPARM_H

namespace Game {
struct GenItemParm {
	virtual void getShapeID(); // _00

	// _00 VTBL
};
} // namespace Game

struct GenBridgeParm : public GenItemParm {
	virtual void getShapeID(); // _00

	// _00 VTBL
};

#endif
