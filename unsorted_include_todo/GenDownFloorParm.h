#ifndef _GENDOWNFLOORPARM_H
#define _GENDOWNFLOORPARM_H

namespace Game {
struct GenItemParm {
	virtual void getShapeID(); // _00

	// _00 VTBL
};
} // namespace Game

struct GenDownFloorParm : public GenItemParm {
	virtual void getShapeID(); // _00

	// _00 VTBL
};

#endif
