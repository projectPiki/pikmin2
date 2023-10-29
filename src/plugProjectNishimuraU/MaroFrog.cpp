#include "Game/Entities/MaroFrog.h"
#include "Game/Navi.h"
#include "efx/TFrog.h"

namespace Game {
namespace MaroFrog {

/*
 * --INFO--
 * Address:	802617E0
 * Size:	000098
 */
Obj::Obj() { createEffect(); }

/*
 * --INFO--
 * Address:	80261878
 * Size:	00045C
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

/*
 * --INFO--
 * Address:	80261CD4
 * Size:	0000B0
 */
void Obj::createEffect() { mEfxPota = new efx::TFrogPota; }

} // namespace MaroFrog
} // namespace Game
