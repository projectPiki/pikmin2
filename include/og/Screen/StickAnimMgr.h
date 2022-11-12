#ifndef _OG_SCREEN_STICKANIMMGR_H
#define _OG_SCREEN_STICKANIMMGR_H

#include "og/Screen/callBackNodes.h"

namespace og {
namespace Screen {
struct StickAnimMgr {
	StickAnimMgr(CallBack_Picture*);

	void stickUp();
	void stickDown();
	void stickUpDown();

	// unused/inlined:
	void stickStop();

	CallBack_Picture* m_callBackPicture; // _00
	u32 _04;                             // _04, unknown
};
} // namespace Screen
} // namespace og

#endif
