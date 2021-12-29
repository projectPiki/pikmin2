#ifndef _OG_NEWSCREEN_SARGCHALLENGE2P_H
#define _OG_NEWSCREEN_SARGCHALLENGE2P_H

/*
    __vt__Q32og9newScreen15SArgChallenge2P:
    .4byte 0
    .4byte 0
    .4byte getSceneType__Q32og9newScreen15SArgChallenge2PCFv
    .4byte getClassSize__Q32og9newScreen15SArgChallenge2PFv
*/

namespace og {
namespace newScreen {
	struct SArgChallenge2P {
		virtual void getSceneType() const; // _00
		virtual void getClassSize();       // _04

		// _00 VTBL
	};
} // namespace newScreen
} // namespace og

#endif
