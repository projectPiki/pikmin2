#ifndef _BASEPARM_H
#define _BASEPARM_H

struct BaseParm {
	BaseParm(struct Parameters*, unsigned long, char*);
	void read(struct Stream&);
	void write(struct Stream&);
};

#endif
