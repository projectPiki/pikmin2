#ifndef _GAME_SHIJIMICHOU_PARMS_H
#define _GAME_SHIJIMICHOU_PARMS_H

namespace Game {
namespace ShijimiChou {
	struct Parms {
		virtual void read(Stream&); // _00
		virtual void _04() = 0;     // _04

		// _00 VTBL
	};
} // namespace ShijimiChou
} // namespace Game

#endif
