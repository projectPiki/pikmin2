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

	UpdateMgr* m_mgr; // _00
	int _04;          // _04
	bool _08;         // _08
	bool _09;         // _09
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

	int _00;  // _00
	u32 _04;  // _04
	int* _08; // _08
	int* _0C; // _0C
	u32 _10;  // _10
	u32 _14;  // _14
};

extern UpdateMgr* collisionUpdateMgr;
} // namespace Game

#endif
