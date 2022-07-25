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
	virtual void doWrite(Stream&);              // _08 (weak)
	virtual void ramSaveParameters(Stream&);    // _0C
	virtual void ramLoadParameters(Stream&);    // _10
	virtual void doEvent(unsigned long);        // _14 (weak)
	virtual void doRead(Stream&);               // _18 (weak)
	virtual void update(Generator*);            // _1C (weak)
	virtual void render(Graphics&, Generator*); // _20 (weak)
	virtual void getLatestVersion();            // _24 (weak)
	virtual void getShape();                    // _28 (weak)

	GenBase(unsigned long, char*, char*);
};
} // namespace Game

#endif
