#ifndef _GAME_ITEMHONEY_H
#define _GAME_ITEMHONEY_H

#include "Game/BaseItem.h"

namespace Game {
namespace ItemHoney {
struct InitArg : public CreatureInitArg {
	/**
	 * @reifiedAddress{80107C50}
	 * @reifiedFile{plugProjectYamashitaU/enemyBase.cpp}
	 */
	virtual const char* getName() // _00
	{
		return "ItemHoney::InitArg";
	}
};

struct Item : public BaseItem {
};

// struct Mgr : public BaseItemMgr {
// };
} // namespace ItemHoney
} // namespace Game

#endif
