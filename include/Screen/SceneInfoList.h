#ifndef _SCREEN_SCENEINFOLIST_H
#define _SCREEN_SCENEINFOLIST_H

#include "CNode.h"
#include "Screen/Enums.h"

namespace Screen {
/**
 * @size{0x41C}
 */
struct SceneInfoList : public CNode {
	SceneInfoList();

	virtual ~SceneInfoList(); // _00

	// virtual void _08() = 0;       // _08

	SceneType m_sceneType;        // _18
	u8 m_dispMemberBuffer[0x400]; // _1C
};
} // namespace Screen

#endif
