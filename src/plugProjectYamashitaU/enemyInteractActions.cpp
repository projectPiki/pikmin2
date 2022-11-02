#include "Game/Interaction.h"
#include "Game/EnemyBase.h"

namespace Game {
/*
 * --INFO--
 * Address:	80127884
 * Size:	00005C
 */
bool InteractFarmKarero::actEnemy(Game::EnemyBase* base) { return base->farmCallBack(m_creature, -_08); }

/*
 * --INFO--
 * Address:	801278E0
 * Size:	000058
 */
bool InteractFarmHaero::actEnemy(Game::EnemyBase* base) { return base->farmCallBack(m_creature, _08); }

/*
 * --INFO--
 * Address:	80127938
 * Size:	00003C
 */
bool InteractDope::actEnemy(Game::EnemyBase* base) { return base->dopeCallBack(m_creature, m_sprayType); }
} // namespace Game
