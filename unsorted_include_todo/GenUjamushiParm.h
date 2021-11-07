#ifndef _GENUJAMUSHIPARM_H
#define _GENUJAMUSHIPARM_H

namespace Game {
struct GenItemParm {
	virtual void getShapeID(); // _00

	// _00 VTBL
};
} // namespace Game

struct GenUjamushiParm : public GenItemParm {
	virtual void getShapeID(); // _00

	// _00 VTBL
};

#endif
