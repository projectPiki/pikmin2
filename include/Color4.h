#ifndef _COLOR4_H
#define _COLOR4_H

struct Color4 {
	Color4();

	void read(struct Stream&);
	void write(struct Stream&);
};

#endif
