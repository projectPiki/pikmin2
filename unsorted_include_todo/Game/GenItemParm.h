#ifndef _GAME_GENITEMPARM_H
#define _GAME_GENITEMPARM_H

/*
    __vt__Q24Game11GenItemParm:
    .4byte 0
    .4byte 0
    .4byte getShapeID__Q24Game11GenItemParmFv
*/

namespace Game {
struct GenItemParm {
	virtual void getShapeID(); // _08 (weak)
};
} // namespace Game

#endif
