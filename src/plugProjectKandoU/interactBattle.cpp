#include "Game/Interaction.h"
#include "Game/Creature.h"
#include "types.h"

namespace Game {

/**
 * @note Address: 0x8019FE78
 * @note Size: 0x44
 */
bool InteractFlick::actCommon(Creature* creature)
{
	if (creature->isStickTo()) {
		creature->endStick();
	}

	return true;
};

/**
 * @note Address: 0x8019FEBC
 * @note Size: 0x6C
 */
bool InteractAttack::actCommon(Creature* creature)
{
	if (mCreature->isNavi() && !creature->isTeki()) {
		return false;
	}

	return true;
}

/**
 * @note Address: 0x8019FF28
 * @note Size: 0x8
 */
bool InteractSwallow::actCommon(Game::Creature* creature) { return true; }

/**
 * @note Address: 0x8019FF30
 * @note Size: 0x8
 */
bool InteractKill::actCommon(Game::Creature* creature) { return true; }
}; // namespace Game
