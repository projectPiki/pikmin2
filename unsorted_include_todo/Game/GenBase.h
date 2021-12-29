#ifndef _GAME_GENBASE_H
#define _GAME_GENBASE_H

/*
    __vt__Q24Game7GenBase:
    .4byte 0
    .4byte 0
    .4byte doWrite__Q24Game7GenBaseFR6Stream
    .4byte ramSaveParameters__Q24Game7GenBaseFR6Stream
    .4byte ramLoadParameters__Q24Game7GenBaseFR6Stream
    .4byte doEvent__Q24Game7GenBaseFUl
    .4byte doRead__Q24Game7GenBaseFR6Stream
    .4byte update__Q24Game7GenBaseFPQ24Game9Generator
    .4byte render__Q24Game7GenBaseFR8GraphicsPQ24Game9Generator
    .4byte getLatestVersion__Q24Game7GenBaseFv
    .4byte getShape__Q24Game7GenBaseFv
*/

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
