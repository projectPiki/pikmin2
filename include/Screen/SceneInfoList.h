#ifndef _SCREEN_SCENEINFOLIST_H
#define _SCREEN_SCENEINFOLIST_H

#include "CNode.h"
#include "Screen/Enums.h"

namespace og {
namespace Screen {
struct DispMemberBase;
}
} // namespace og

namespace Screen {
/**
 * @size{0x41C}
 */
struct SceneInfoList : public CNode {
	SceneInfoList();

	virtual ~SceneInfoList() { } // _00

	void set(s32, og::Screen::DispMemberBase*);

	SceneType mSceneType;        // _18
	u8 mDispMemberBuffer[0x400]; // _1C
};
} // namespace Screen

#endif
