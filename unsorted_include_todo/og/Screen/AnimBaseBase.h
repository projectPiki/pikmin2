#ifndef _OG_SCREEN_ANIMBASEBASE_H
#define _OG_SCREEN_ANIMBASEBASE_H

/*
    __vt__Q32og6Screen12AnimBaseBase:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
*/

namespace og {
namespace Screen {
struct AnimBaseBase {
	virtual void _08() = 0; // _08
	virtual void _0C() = 0; // _0C

	void start(float);
	void updateSub();
	void update();
};
} // namespace Screen
} // namespace og

#endif
