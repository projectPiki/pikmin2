#include "Game/Entities/Demon.h"
#include "Game/Navi.h"

#define GENERALPARMS (static_cast<Sarai::Parms*>(mParms)->mGeneral)

namespace Game {
namespace Demon {
/**
 * @note Address: 0x8028E394
 * @note Size: 0x90
 */
Obj::Obj() { }

/**
 * @note Address: 0x8028E424
 * @note Size: 0x3F0
 */
FakePiki* Obj::getAttackableTarget()
{
	mAttackTimer += sys->mDeltaTime;
	if (mAttackTimer > 3.0f) {
		Vector3f pos = getPosition();

		if (sqrDistanceXZ(pos, mHomePosition) < SQUARE(GENERALPARMS.mTerritoryRadius())) {
			f32 fov = TORADIANS(GENERALPARMS.mViewAngle());
			f32 max = SQUARE(GENERALPARMS.mSightRadius());

			Iterator<Navi> iter(naviMgr);
			Navi* navi;
			CI_LOOP(iter)
			{
				navi = (*iter);

				if (!navi->isAlive() || navi->isStickToMouth()) {
					continue;
				}

				f32 ang = getAngDist(navi);
				if (FABS(ang) <= fov) {
					Vector3f naviPos = navi->getPosition();
					if (sqrDistanceXZ(pos, naviPos) < max) {
						return navi;
					}
				}
			}
		}
	}
	return nullptr;
}

/**
 * @note Address: 0x8028E814
 * @note Size: 0x33C
 */
int Obj::catchTarget()
{
	int caughtCount = 0;
	Iterator<Game::Navi> iter(Game::naviMgr);
	Game::Navi* navi;
	CI_LOOP(iter)
	{
		navi = (*iter);

		if (!navi->isAlive() || navi->isStickToMouth()) {
			continue;
		}

		for (int i = 0; i < mMouthSlots.mMax; i++) {
			MouthCollPart* slot = mMouthSlots.getSlot(i);
			if (slot->mStuckCreature) {
				continue;
			}

			Vector3f slotpos;
			slot->getPosition(slotpos);
			Vector3f naviPos = navi->getPosition();

			f32 distanceToSlot = slotpos.distance(naviPos);
			if (distanceToSlot < slot->mRadius) {
				InteractSarai act(this, 1.0f, slot);
				navi->stimulate(act);
				caughtCount++;
				break;
			}
		}
	}

	return caughtCount;
}

} // namespace Demon
} // namespace Game
