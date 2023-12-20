#include "Game/gameStat.h"
#include "Game/gamePlayData.h"
#include "Game/Navi.h"

namespace Game {
namespace GameStat {

PikiNaviCounter formationPikis;
PikiNaviCounter workPikis;
PikiCounter alivePikis;
PikiCounter mePikis;
PikiCounter zikatuPikis; // Wild pikis, that you find & whistle to unlock the type

/**
 * @note Address: 0x801D0DB8
 * @note Size: 0x58
 */
void clear()
{
	formationPikis.clear();
	mePikis.clear();
	workPikis.clear();
	alivePikis.clear();
	zikatuPikis.clear();
}

/**
 * @note Address: 0x801D0E10
 * @note Size: 0x50
 */
int getMapPikmins_exclude_Me(int id)
{
	if (id == -1) {
		return alivePikis;
	}

	return alivePikis.mPikiCounts[id];
}

/**
 * @note Address: 0x801D0E60
 * @note Size: 0x8C
 */
int getMapPikmins(int id)
{
	if (id == -1) {
		return alivePikis + mePikis;
	}

	return alivePikis.mPikiCounts[id] + mePikis.mPikiCounts[id];
}

/**
 * @note Address: 0x801D0EEC
 * @note Size: 0x50
 */
int getZikatuPikmins(int id)
{
	if (id == -1) {
		return zikatuPikis;
	}

	return zikatuPikis.mPikiCounts[id];
}

/**
 * @note Address: 0x801D0F3C
 * @note Size: 0xF8
 */
int getAllPikmins(int id)
{
	if (id == -1) {
		int sum = alivePikis + mePikis;
		return playData->mPikiContainer.getTotalSum() + sum;
	}

	return getMapPikmins(id) + playData->mPikiContainer.getColorSum(id);
}

/**
 * @note Address: 0x801D1034
 * @note Size: 0x3C
 */
PikiCounter::PikiCounter() { clear(); }

/**
 * @note Address: 0x801D1070
 * @note Size: 0x24
 */
void PikiCounter::clear()
{
	for (int i = 0; i < PikiColorCount; i++) {
		mPikiCounts[i] = 0;
	}
}

/**
 * @note Address: 0x801D1094
 * @note Size: 0x84
 */
void PikiCounter::inc(Piki* piki)
{
	int id = piki->getKind();
	P2ASSERTBOUNDSLINE(147, 0, id, PikiColorCount);
	mPikiCounts[id]++;
}

/**
 * @note Address: 0x801D1118
 * @note Size: 0x84
 */
void PikiCounter::dec(Piki* piki)
{
	int id = piki->getKind();
	P2ASSERTBOUNDSLINE(156, 0, id, PikiColorCount);
	mPikiCounts[id]--;
}

/**
 * @note Address: 0x801D119C
 * @note Size: 0x80
 */
void PikiCounter::inc(int id)
{
	P2ASSERTBOUNDSLINE(164, 0, id, PikiColorCount);
	mPikiCounts[id]++;
}

/**
 * @note Address: 0x801D121C
 * @note Size: 0x80
 */
void PikiCounter::dec(int id)
{
	P2ASSERTBOUNDSLINE(170, 0, id, PikiColorCount);
	mPikiCounts[id]--;
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
PikiNaviCounter::PikiNaviCounter() { clear(); }

/**
 * @note Address: 0x801D129C
 * @note Size: 0xCC
 */
void PikiNaviCounter::clear()
{
	for (int i = 0; i < PikiColorCount; i++) {
		mCounter[i].clear();
	}
}

/**
 * @note Address: 0x801D1368
 * @note Size: 0xAC
 */
void PikiNaviCounter::inc(Piki* piki)
{
	int id;
	if (!piki->mNavi) {
		id = 2;
	} else {
		id = piki->mNavi->getNaviID();
	}

	// this should be a PikiCounter::inc inline judging from the error line, but it makes a regswap
	// mCounter[id].inc(piki);
	int type = piki->mPikiKind; // regswap if getKind() is used
	P2ASSERTBOUNDSLINE(147, 0, type, PikiColorCount);
	mCounter[id].mPikiCounts[type]++;
}

/**
 * @note Address: 0x801D1414
 * @note Size: 0xAC
 */
void PikiNaviCounter::dec(Game::Piki* piki)
{
	int id;
	if (!piki->mNavi) {
		id = 2;
	} else {
		id = piki->mNavi->getNaviID();
	}

	// this should be a PikiCounter::dec inline judging from the error line, but it makes a regswap
	int type = piki->mPikiKind; // regswap if getKind() is used
	P2ASSERTBOUNDSLINE(156, 0, type, PikiColorCount);
	mCounter[id].mPikiCounts[type]--;
}
} // namespace GameStat
} // namespace Game
