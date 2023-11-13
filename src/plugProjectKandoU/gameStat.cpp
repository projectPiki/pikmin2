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

/*
 * --INFO--
 * Address:	801D0DB8
 * Size:	000058
 */
void clear()
{
	formationPikis.clear();
	mePikis.clear();
	workPikis.clear();
	alivePikis.clear();
	zikatuPikis.clear();
}

/*
 * --INFO--
 * Address:	801D0E10
 * Size:	000050
 */
int getMapPikmins_exclude_Me(int id)
{
	if (id == -1) {
		return alivePikis;
	} else {
		return alivePikis.mPikiCounts[id];
	}
}

/*
 * --INFO--
 * Address:	801D0E60
 * Size:	00008C
 */
int getMapPikmins(int id)
{
	if (id == -1) {
		return alivePikis + mePikis;
	} else {
		return alivePikis.mPikiCounts[id] + mePikis.mPikiCounts[id];
	}
}

/*
 * --INFO--
 * Address:	801D0EEC
 * Size:	000050
 */
int getZikatuPikmins(int id)
{
	if (id == -1) {
		return zikatuPikis;
	} else {
		return zikatuPikis.mPikiCounts[id];
	}
}

/*
 * --INFO--
 * Address:	801D0F3C
 * Size:	0000F8
 */
int getAllPikmins(int id)
{
	if (id == -1) {
		int sum = alivePikis + mePikis;
		return playData->mPikiContainer.getTotalSum() + sum;
	} else {
		return getMapPikmins(id) + playData->mPikiContainer.getColorSum(id);
	}
}

/*
 * --INFO--
 * Address:	801D1034
 * Size:	00003C
 */
PikiCounter::PikiCounter() { clear(); }

/*
 * --INFO--
 * Address:	801D1070
 * Size:	000024
 */
void PikiCounter::clear()
{
	for (int i = 0; i < PikiColorCount; i++) {
		mPikiCounts[i] = 0;
	}
}

/*
 * --INFO--
 * Address:	801D1094
 * Size:	000084
 */
void PikiCounter::inc(Piki* piki)
{
	int id = piki->getKind();
	P2ASSERTBOUNDSLINE(147, 0, id, PikiColorCount);
	mPikiCounts[id]++;
}

/*
 * --INFO--
 * Address:	801D1118
 * Size:	000084
 */
void PikiCounter::dec(Piki* piki)
{
	int id = piki->getKind();
	P2ASSERTBOUNDSLINE(156, 0, id, PikiColorCount);
	mPikiCounts[id]--;
}

/*
 * --INFO--
 * Address:	801D119C
 * Size:	000080
 */
void PikiCounter::inc(int id)
{
	P2ASSERTBOUNDSLINE(164, 0, id, PikiColorCount);
	mPikiCounts[id]++;
}

/*
 * --INFO--
 * Address:	801D121C
 * Size:	000080
 */
void PikiCounter::dec(int id)
{
	P2ASSERTBOUNDSLINE(170, 0, id, PikiColorCount);
	mPikiCounts[id]--;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
PikiNaviCounter::PikiNaviCounter() { clear(); }

/*
 * --INFO--
 * Address:	801D129C
 * Size:	0000CC
 */
void PikiNaviCounter::clear()
{
	for (int i = 0; i < PikiColorCount; i++) {
		mCounter[i].clear();
	}
}

/*
 * --INFO--
 * Address:	801D1368
 * Size:	0000AC
 */
void PikiNaviCounter::inc(Piki* piki)
{
	int id;
	if (!piki->mNavi) {
		id = 2;
	} else {
		id = piki->mNavi->mNaviIndex;
	}

	// this should be a PikiCounter::inc inline judging from the error line, but it makes a regswap
	int type = piki->mPikiKind; // regswap if getKind() is used
	P2ASSERTBOUNDSLINE(147, 0, type, PikiColorCount);
	mCounter[id].mPikiCounts[type]++;
}

/*
 * --INFO--
 * Address:	801D1414
 * Size:	0000AC
 */
void PikiNaviCounter::dec(Game::Piki* piki)
{
	int id;
	if (!piki->mNavi) {
		id = 2;
	} else {
		id = piki->mNavi->mNaviIndex;
	}

	// this should be a PikiCounter::dec inline judging from the error line, but it makes a regswap
	int type = piki->mPikiKind; // regswap if getKind() is used
	P2ASSERTBOUNDSLINE(156, 0, type, PikiColorCount);
	mCounter[id].mPikiCounts[type]--;
}
} // namespace GameStat
} // namespace Game
