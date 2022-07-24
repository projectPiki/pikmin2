#ifndef _GAME_SHIJIMICHOU_PARMS_H
#define _GAME_SHIJIMICHOU_PARMS_H

/*
    __vt__Q34Game11ShijimiChou5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game11ShijimiChou5ParmsFR6Stream
*/

namespace Game {
namespace ShijimiChou {
struct Parms {
	virtual void read(Stream&); // _08

	// _00 VTBL
};
} // namespace ShijimiChou
} // namespace Game

#endif
