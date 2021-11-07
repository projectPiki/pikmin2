#ifndef _OG_NEWSCREEN_SARGCHALLENGE2P_H
#define _OG_NEWSCREEN_SARGCHALLENGE2P_H

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
