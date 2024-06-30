#ifndef _SYSSHAPE_KEYEVENT_H
#define _SYSSHAPE_KEYEVENT_H

#include "CNode.h"

namespace SysShape {
#define KEYEVENT_LOOP_START 0
#define KEYEVENT_LOOP_END   1
#define KEYEVENT_2          2
#define KEYEVENT_3          3
#define KEYEVENT_4          4
#define KEYEVENT_5          5
#define KEYEVENT_6          6
#define KEYEVENT_7          7
#define KEYEVENT_8          8
#define KEYEVENT_9          9
#define KEYEVENT_10         10
#define KEYEVENT_11         11
#define KEYEVENT_100        100
#define KEYEVENT_200        200
#define KEYEVENT_201        201
#define KEYEVENT_END        1000 // End of animation
#define KEYEVENT_END_BLEND  2000 // Finish blend animation (?)

/**
 * @size{0x20}
 */
struct KeyEvent : public CNode {
	inline KeyEvent()
	{
		mFrame   = 0;
		mType    = KEYEVENT_LOOP_START;
		mAnimIdx = -1;
	}

	virtual ~KeyEvent() { } // _08 (weak)

	inline int getFrame() const { return mFrame; }
	inline int getType() const { return mType; }
	inline s16 getAnimIdx() const { return mAnimIdx; }

	inline bool isEnd() const { return mType == KEYEVENT_END; }

	int mFrame;   // _18
	u32 mType;    // _1C
	s16 mAnimIdx; // _20
};

} // namespace SysShape

#endif
