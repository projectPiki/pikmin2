#include "Game/Entities/Demon.h"
#include "Game/Navi.h"

namespace Game {
namespace Demon {
/*
 * --INFO--
 * Address:	8028E394
 * Size:	000090
 */
Obj::Obj() { }

/*
 * --INFO--
 * Address:	8028E424
 * Size:	0003F0
 */
FakePiki* Obj::getAttackableTarget()
{
	mAttackTimer += sys->mDeltaTime;
	if (mAttackTimer > 3.0f) {
		Vector3f pos = getPosition();

		if (sqrDistanceXZ(pos, mHomePosition) < SQUARE(static_cast<Sarai::Parms*>(mParms)->mGeneral.mTerritoryRadius())) {
			f32 fov = PI * (DEG2RAD * static_cast<Sarai::Parms*>(mParms)->mGeneral.mViewAngle());
			f32 max = SQUARE(static_cast<Sarai::Parms*>(mParms)->mGeneral.mSightRadius());

			Iterator<Navi> iter(naviMgr);
			Navi* navi;
			CI_LOOP(iter)
			{
				navi = (*iter);
				if (navi->isAlive() && !navi->isStickToMouth()) {
					f32 ang = getAngDist(navi);
					if (FABS(ang) <= fov) {
						Vector3f Navipos2 = navi->getPosition();
						if (sqrDistanceXZ(pos, Navipos2) < max) {
							return navi;
						}
					}
				}
			}
		}
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	8028E814
 * Size:	00033C
 */
int Obj::catchTarget()
{
	int id = 0;
	Iterator<Game::Navi> iter(Game::naviMgr);
	Game::Navi* navi;
	CI_LOOP(iter)
	{
		navi = (*iter);
		if (navi->isAlive() && !navi->isStickToMouth()) {
			for (int i = 0; i < mMouthSlots.mMax; i++) {
				MouthCollPart* slot = mMouthSlots.getSlot(i);
				if (!slot->mStuckCreature) {
					Vector3f slotpos;
					slot->getPosition(slotpos);
					Vector3f naviPos = navi->getPosition();

					f32 dist = slotpos.distance(naviPos);
					if (dist < slot->mRadius) {
						InteractSarai act(this, 1.0f, slot);
						navi->stimulate(act);
						id++;
						break;
					}
				}
			}
		}
	}
	return id;
}

} // namespace Demon
} // namespace Game
