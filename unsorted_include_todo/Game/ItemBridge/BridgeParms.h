#ifndef _GAME_ITEMBRIDGE_BRIDGEPARMS_H
#define _GAME_ITEMBRIDGE_BRIDGEPARMS_H

/*
    __vt__Q34Game10ItemBridge11BridgeParms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game10ItemBridge11BridgeParmsFR6Stream
*/

namespace Game {
namespace ItemBridge {
struct BridgeParms {
	virtual void read(Stream&); // _08 (inline)

	BridgeParms();
};
} // namespace ItemBridge
} // namespace Game

#endif
