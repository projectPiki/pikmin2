#include "PSM/ObjCalc.h"
#include "PSMath.h"
#include "Iterator.h"
#include "Game/Navi.h"

namespace PSM {

/**
 * @note Address: 0x804728A4
 * @note Size: 0x60
 */
void ObjCalc_SingleGame::newInstance_SingleGame()
{
	new ObjCalc_SingleGame;
}

/**
 * @note Address: 0x80472904
 * @note Size: 0x8
 */
u8 ObjCalc_SingleGame::getPlayerNo(PSM::Creature*)
{
	return mPlayerNum;
}

/**
 * @note Address: 0x8047290C
 * @note Size: 0x8
 */
u8 ObjCalc_SingleGame::getPlayerNo(Vec&)
{
	return mPlayerNum;
}

/**
 * @note Address: 0x80472914
 * @note Size: 0x5C
 */
void ObjCalc_2PGame::newInstance_2PGame()
{
	new ObjCalc_2PGame;
}

/**
 * @note Address: 0x80472970
 * @note Size: 0x3BC
 */
u8 ObjCalc_2PGame::getPlayerNo(Vec& pos)
{
	switch (mMode) {
	case OBJCALC_1:
		return 0;

	case OBJCALC_0:
		f32 dists[2] = { 100000.0f, 1000000.0f };
		Iterator<Game::Navi> it(Game::naviMgr);
		int i = 0;
		CI_LOOP(it)
		{
			Game::Navi* navi = *it;
			Vector3f npos    = navi->getPosition();
			P2ASSERTLINE(65, &npos != 0);
			P2ASSERTLINE(66, i < 2);

			dists[i] = PSMath::calcSquareDistance(pos, npos);
			i++;
		}
		if (dists[0] < dists[1]) {
			return 0;
		}
		return 1;
	default:
		P2ASSERTLINE(77, false);
		return 0;
	}
}

/**
 * @note Address: 0x80472D2C
 * @note Size: 0xC8
 */
u8 ObjCalc_2PGame::getPlayerNo(PSM::Creature* obj)
{
	P2ASSERTLINE(87, obj);
	switch (mMode) {
	case OBJCALC_1:
		return 0;
	case OBJCALC_0:
		return obj->mGameObj->getSound_AILOD()->mSoundVPID;
	default:
		JUT_PANICLINE(125, "ありえないケース1");
		JUT_PANICLINE(128, "ありえないケース2");
		return 0;
	}
}

} // namespace PSM
