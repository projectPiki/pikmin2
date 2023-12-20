#include "Game/Entities/MaroFrog.h"
#include "Game/Navi.h"
#include "efx/TFrog.h"

namespace Game {
namespace MaroFrog {

/**
 * @note Address: 0x802617E0
 * @note Size: 0x98
 */
Obj::Obj() { createEffect(); }

/**
 * @note Address: 0x80261878
 * @note Size: 0x45C
 */
void Obj::attackNaviPosition()
{
	Iterator<Navi> iter(naviMgr);

	CI_LOOP(iter)
	{
		Navi* navi = (*iter);
		if (navi->isAlive()) {
			f32 attackDist, attackAngle;
			attackAngle = static_cast<EnemyParmsBase*>(mParms)->mGeneral.mMaxAttackAngle();
			attackDist  = static_cast<EnemyParmsBase*>(mParms)->mGeneral.mMaxAttackRange();

			f32 angledist = getCreatureViewAngle(navi);

			bool check   = false;
			Vector3f sep = getTargetSeparation(navi);
			if ((sep.sqrMagnitude() < SQUARE(attackDist)) && FABS(angledist) <= TORADIANS(attackAngle)) {
				check = true;
			}

			if (check) {
				mTargetPosition = Vector3f(navi->getPosition());
			}
		}
	}
}

/**
 * @note Address: 0x80261CD4
 * @note Size: 0xB0
 */
void Obj::createEffect() { mEfxPota = new efx::TFrogPota; }

} // namespace MaroFrog
} // namespace Game
