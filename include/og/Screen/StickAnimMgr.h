#ifndef _OG_SCREEN_STICKANIMMGR_H
#define _OG_SCREEN_STICKANIMMGR_H

#include "og/Screen/callBackNodes.h"

namespace og {
namespace Screen {
struct StickAnimMgr {

	enum state { STICKANIM_Disabled, STICKANIM_Up, STICKANIM_Down, STICKANIM_UpDown };

	StickAnimMgr(CallBack_Picture*);

	void stickUp();
	void stickDown();
	void stickUpDown();

	// unused/inlined:
	void stickStop();

	CallBack_Picture* mCallBackPicture; // _00
	int mState;                         // _04, unknown
};
} // namespace Screen
} // namespace og

#endif
