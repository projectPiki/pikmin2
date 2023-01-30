#include "Game/Interaction.h"
#include "Game/EnemyBase.h"

namespace Game {
/*
 * --INFO--
 * Address:	80127884
 * Size:	00005C
 */
bool InteractFarmKarero::actEnemy(EnemyBase* base) { return base->farmCallBack(mCreature, -_08); }

/*
 * --INFO--
 * Address:	801278E0
 * Size:	000058
 */
bool InteractFarmHaero::actEnemy(EnemyBase* base) { return base->farmCallBack(mCreature, _08); }

/*
 * --INFO--
 * Address:	80127938
 * Size:	00003C
 */
bool InteractDope::actEnemy(EnemyBase* base) { return base->dopeCallBack(mCreature, mSprayType); }
} // namespace Game
