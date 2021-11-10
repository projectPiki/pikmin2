#include "types.h"

namespace Game {
struct BaseHIOParms {
	static u8 sEntryOpt;
	static u8 sEntryOptMapRoom;
	static u8 sDrawParticle;
	static u8 sMabikiEfx;
	static u8 sMapRoomFinal;
	static u8 sTekiChappyFlag[3];
};

u8 BaseHIOParms::sEntryOpt          = 1;
u8 BaseHIOParms::sEntryOptMapRoom   = 1;
u8 BaseHIOParms::sDrawParticle      = 1;
u8 BaseHIOParms::sMabikiEfx         = 1;
u8 BaseHIOParms::sMapRoomFinal      = 1;
u8 BaseHIOParms::sTekiChappyFlag[3] = { 1, 0, 0 };
} // namespace Game
