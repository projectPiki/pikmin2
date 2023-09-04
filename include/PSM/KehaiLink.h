#ifndef _PSM_KEHAILINK_H
#define _PSM_KEHAILINK_H

#include "Game/Creature.h"
#include "JSystem/JSupport/JSUList.h"

namespace PSM {
/**
 * @size{0x14}
 */
struct KehaiLink : public JSULink<Game::Creature> {
	inline KehaiLink(Game::Creature* gameObj)
	    : JSULink(gameObj)
	{
	}

	virtual void kehaiOn();  // _08
	virtual void kehaiOff(); // _0C

	// _10     = VTBL
	// _00-_10 = JSULink
};
} // namespace PSM

#endif
