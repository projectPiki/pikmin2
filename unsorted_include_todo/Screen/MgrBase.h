#ifndef _SCREEN_MGRBASE_H
#define _SCREEN_MGRBASE_H

/*
    __vt__Q26Screen7MgrBase:
    .4byte 0
    .4byte 0
    .4byte __dt__Q26Screen7MgrBaseFv
    .4byte 0
    .4byte 0
    .4byte 0
*/

namespace Screen {
struct MgrBase {
	virtual ~MgrBase();     // _08
	virtual void _0C() = 0; // _0C
	virtual void _10() = 0; // _10
	virtual void _14() = 0; // _14

	// _00 VTBL
};
} // namespace Screen

#endif
