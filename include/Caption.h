#ifndef _CAPTION_H
#define _CAPTION_H

struct Caption {
	struct Mgr {
		Mgr();
		~Mgr();

		void draw(struct Graphics&);
		void getFreeMessage();
		void read(struct Stream&);
		void reset();
		void resetMessageObjs();
		void update(long);
	};

	struct Node {
		~Node();
		void read(Stream&);
	};
};

#endif
