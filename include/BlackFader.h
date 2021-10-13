#ifndef _BLACKFADER_H
#define _BLACKFADER_H

struct BlackFader {
	BlackFader();
	~BlackFader();

	void do_draw(float);
	void isBlack();
	void isWhite();
};

#endif
