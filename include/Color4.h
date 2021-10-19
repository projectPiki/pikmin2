#ifndef _COLOR4_H
#define _COLOR4_H

#include "types.h"

struct Color4 {
	Color4();

	void read(struct Stream&);
	void write(struct Stream&);

	u8 r;
	u8 g;
	u8 b;
	u8 a;
};

#endif
