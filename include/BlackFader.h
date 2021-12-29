#ifndef _BLACKFADER_H
#define _BLACKFADER_H

struct BlackFader {
	BlackFader();
	virtual ~BlackFader();        // _00
	virtual void getChildCount(); // _04
	virtual void update();        // _08
	virtual void draw();          // _0C
	virtual bool isWhite();       // _10
	virtual bool isBlack();       // _14
	virtual void on_start();      // _18
	virtual void do_draw(float);  // _1C
};

#endif
