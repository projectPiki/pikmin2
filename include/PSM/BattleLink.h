#ifndef _PSM_BATTLELINK_H
#define _PSM_BATTLELINK_H

#include "Game/Creature.h"
#include "JSystem/JSupport/JSUList.h"

namespace PSM {
/**
 * @size{0x14}
 */
struct BattleLink : public JSULink<Game::Creature> {
	inline BattleLink(Game::Creature* gameObj)
	    : JSULink(gameObj)
	{
	}

	virtual void battleOn();  // _08
	virtual void battleOff(); // _0C

	// _10     = VTBL
	// _00-_10 = JSULink
};
} // namespace PSM

#endif
