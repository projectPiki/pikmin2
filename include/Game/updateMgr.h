#ifndef _GAME_UPDATEMGR_H
#define _GAME_UPDATEMGR_H

#include "types.h"

struct Graphics;

namespace Game {
struct UpdateMgr;

struct UpdateContext {
	UpdateContext();

	void exit();
	void init(UpdateMgr*);
	bool updatable();

	UpdateMgr* mMgr;     // _00
	int mClientIndex;    // _04
	bool mIsActive;      // _08
	bool mDoForceActive; // _09
};

struct UpdateMgr {
	UpdateMgr();

	void create(int);
	void addClient(UpdateContext*);
	void removeClient(UpdateContext*);
	void update();
	bool updatable(UpdateContext*);

	// Unused/inlined:
	void balanceClient(UpdateContext*);
	void showInfo(Graphics&, int, int);

	int mMaxClientId;  // _00
	u32 mClientCount;  // _04
	int* mClientListA; // _08
	int* mClientListB; // _0C
	u32 mCurrentIndex; // _10
	u32 _14;           // _14
};

extern UpdateMgr* collisionUpdateMgr;
} // namespace Game

#endif
