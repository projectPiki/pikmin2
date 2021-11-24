#ifndef _GAME_UPDATEMGR_H
#define _GAME_UPDATEMGR_H

#include "types.h"

namespace Game {
struct UpdateMgr;

struct UpdateContext {
	UpdateContext();

	void exit();
	void init(UpdateMgr*);
	bool updatable();

	UpdateMgr* _00; // _00
	s32 _04;        // _04
	u8 _08;         // _08
	u8 _09;         // _09
};

struct UpdateMgr {
	bool updatable(UpdateContext*);
};

extern UpdateMgr* collisionUpdateMgr;
} // namespace Game

#endif
