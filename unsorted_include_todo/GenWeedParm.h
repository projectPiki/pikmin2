#ifndef _GENWEEDPARM_H
#define _GENWEEDPARM_H

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
