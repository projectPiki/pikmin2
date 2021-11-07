#ifndef _GAME_GENBASE_H
#define _GAME_GENBASE_H

namespace Game {
struct GenBase {
	virtual void doWrite(Stream&);              // _00
	virtual void ramSaveParameters(Stream&);    // _04
	virtual void ramLoadParameters(Stream&);    // _08
	virtual void doEvent(unsigned long);        // _0C
	virtual void doRead(Stream&);               // _10
	virtual void update(Generator*);            // _14
	virtual void render(Graphics&, Generator*); // _18
	virtual void getLatestVersion();            // _1C
	virtual void getShape();                    // _20

	// _00 VTBL
};
} // namespace Game

#endif
