#ifndef _GAME_FAKEPIKIPARMS_H
#define _GAME_FAKEPIKIPARMS_H

/*
    __vt__Q24Game13FakePikiParms:
    .4byte 0
    .4byte 0
    .4byte read__Q24Game13FakePikiParmsFR6Stream
*/

namespace Game {
struct FakePikiParms {
	virtual void read(Stream&); // _08 (weak)

	FakePikiParms();
};
} // namespace Game

#endif
