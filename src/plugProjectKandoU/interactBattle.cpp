#include "Game/Interaction.h"
#include "Game/Creature.h"
#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	8019FE78
 * Size:	000044
 */
bool InteractFlick::actCommon(Creature* creature)
{
	if (creature->isStickTo()) {
		creature->endStick();
	}

	return true;
};

/*
 * --INFO--
 * Address:	8019FEBC
 * Size:	00006C
 */
bool InteractAttack::actCommon(Creature* creature)
{
	if (mCreature->isNavi() && !creature->isTeki()) {
		return false;
	}

	return true;
}

/*
 * --INFO--
 * Address:	8019FF28
 * Size:	000008
 */
bool InteractSwallow::actCommon(Game::Creature* creature) { return true; }

/*
 * --INFO--
 * Address:	8019FF30
 * Size:	000008
 */
bool InteractKill::actCommon(Game::Creature* creature) { return true; }
}; // namespace Game
