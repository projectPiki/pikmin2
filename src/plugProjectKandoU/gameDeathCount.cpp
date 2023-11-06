#include "Game/BirthMgr.h"
#include "Game/DeathMgr.h"
#include "Game/GameSystem.h"
#include "Game/Piki.h"
#include "P2Macros.h"
#include "types.h"

// sinit
Game::BirthCounter Game::BirthMgr::mToday;
Game::BirthCounter Game::BirthMgr::mCave;
Game::BirthCounter Game::BirthMgr::mTotal;
Game::DeathCounter Game::DeathMgr::mToday;
Game::DeathCounter Game::DeathMgr::mCave;
Game::DeathCounter Game::DeathMgr::mTotal;

int Game::DeathMgr::mSoundDeathCount;

namespace Game {

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
// BirthCounter::BirthCounter()
// {
// 	// UNUSED FUNCTION
// 	reset();
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void BirthCounter::reset()
{
	// UNUSED FUNCTION
	for (int i = 0; i < PikiColorCount - 1; i++) {
		mCounts[i] = 0;
	}
	mTotal = 0;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
int& BirthCounter::operator()(int pikiColor)
{
	// UNUSED FUNCTION
	if (pikiColor == AllPikmin) {
		int& v = mTotal;
		mTotal = 0;
		for (int i = 0; i <= LastStoredPikiColor; i++) {
			mTotal += mCounts[i];
		}
		return v;
	} else {
		return mCounts[pikiColor];
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void BirthCounter::read(Stream& input)
{
	// UNUSED FUNCTION
	for (int i = 0; i < PikiColorCount - 1; i++) {
		mCounts[i] = input.readInt();
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void BirthCounter::write(Stream& output)
{
	// UNUSED FUNCTION
	output.textBeginGroup("BirthCoutner");
	for (int i = 0; i < PikiColorCount - 1; i++) {
		output.textWriteTab(output.mTabCount);
		output.writeInt(mCounts[i]);
		output.textWriteText("\r\n");
	}
	output.textEndGroup();
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
BirthMgr::BirthMgr()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8022F9FC
 * Size:	000068
 */
void BirthMgr::clear()
{
	mToday.reset();
	mCave.reset();
	mTotal.reset();
}

/*
 * --INFO--
 * Address:	8022FA64
 * Size:	000048
 * inc__Q24Game8BirthMgrFi
 */
void BirthMgr::inc(int pikiColor)
{
	if (0 <= pikiColor && pikiColor <= LastStoredPikiColor) {
		if (gameSystem->mIsInCave) {
			inc_cave(pikiColor);
		} else {
			inc_today(pikiColor);
		}
	}
}

/*
 * --INFO--
 * Address:	8022FAAC
 * Size:	000048
 * dec__Q24Game8BirthMgrFi
 */
void BirthMgr::dec(int pikiColor)
{
	if (0 <= pikiColor && pikiColor <= LastStoredPikiColor) {
		if (gameSystem->mIsInCave) {
			dec_cave(pikiColor);
		} else {
			dec_today(pikiColor);
		}
	}
}

/*
 * --INFO--
 * Address:	8022FAF4
 * Size:	0000D0
 */
void BirthMgr::inc_today(int pikiColor)
{
	mToday(pikiColor)++;
	if (pikiColor != AllPikmin) {
		mToday(AllPikmin)++;
	}
}

/*
 * --INFO--
 * Address:	8022FBC4
 * Size:	0000D0
 */
void BirthMgr::inc_cave(int pikiColor)
{
	mCave(pikiColor)++;
	if (pikiColor != AllPikmin) {
		mCave(AllPikmin)++;
	}
}

/*
 * --INFO--
 * Address:	8022FC94
 * Size:	0000D0
 */
void BirthMgr::dec_today(int pikiColor)
{
	mToday(pikiColor)--;
	if (pikiColor != AllPikmin) {
		mToday(AllPikmin)--;
	}
}

/*
 * --INFO--
 * Address:	8022FD64
 * Size:	0000D0
 */
void BirthMgr::dec_cave(int pikiColor)
{
	mCave(pikiColor)--;
	if (pikiColor != AllPikmin) {
		mCave(AllPikmin)--;
	}
}

/*
 * --INFO--
 * Address:	8022FE34
 * Size:	000140
 */
void BirthMgr::account_cave()
{
	for (int i = FirstPikmin; i < PikiColorCount - 1; i++) {
		mToday(i) += mCave(i);
	}
	mCave.reset();
}

/*
 * --INFO--
 * Address:	8022FF74
 * Size:	0002B4
 */
void BirthMgr::account_today_adjust()
{
	for (int i = FirstPikmin; i < StoredPikiCount; i++) {
		if (mToday(i) < 0) {
			mTotal(i) += mToday(i);
			mToday(i) = 0;
		}
	}
	int a = 0;
	for (int i = FirstPikmin; i < StoredPikiCount; i++) {
		a += mToday(i);
	}
	mToday(AllPikmin) = a;
}

/*
 * --INFO--
 * Address:	80230228
 * Size:	000204
 * account_today__Q24Game8BirthMgrFv
 */
void BirthMgr::account_today()
{
	for (int i = FirstPikmin; i < PikiColorCount - 1; i++) {
		mTotal(i) += mToday(i);
	}
	int a = 0;
	for (int i = FirstPikmin; i < StoredPikiCount; i++) {
		a += mTotal(i);
	}
	mToday(AllPikmin) = a;
	mToday.reset();
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
int BirthMgr::get_cave(int pikiColor)
{
	// UNUSED FUNCTION
	return mCave(pikiColor);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
int BirthMgr::get_today(int pikiColor)
{
	// UNUSED FUNCTION
	return mToday(pikiColor);
}

/*
 * --INFO--
 * Address:	8023042C
 * Size:	000070
 */
int BirthMgr::get_total(int pikiColor) { return mTotal(pikiColor); }

/*
 * --INFO--
 * Address:	8023049C
 * Size:	0000B0
 * read__Q24Game8BirthMgrFR6Stream
 */
void BirthMgr::read(Stream& input)
{
	mCave.read(input);
	mToday.read(input);
	mTotal.read(input);
}

/*
 * --INFO--
 * Address:	8023054C
 * Size:	000148
 * write__Q24Game8BirthMgrFR6Stream
 */
void BirthMgr::write(Stream& output)
{
	mCave.write(output);
	mToday.write(output);
	mTotal.write(output);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
// DeathCounter::DeathCounter()
// {
// 	// UNUSED FUNCTION
// 	reset();
// }

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void DeathCounter::reset()
{
	// UNUSED FUNCTION
	for (int i = 0; i <= COD_SourceCount; i++) {
		mCounts[i] = 0;
	}
	mTotal = 0;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000100
 */
int& DeathCounter::operator()(int cod)
{
	// UNUSED FUNCTION
	if (cod == COD_SourceCount) {
		int& v = mTotal;
		mTotal = 0;
		for (int i = 0; i < COD_SourceCount; i++) {
			mTotal += mCounts[i];
		}
		return v;
	} else {
		P2ASSERTBOUNDSINCLUSIVELINE(338, 0, cod, COD_SourceCount);
		return mCounts[cod];
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void DeathCounter::read(Stream& input)
{
	// UNUSED FUNCTION
	for (int i = 0; i < COD_SourceCount + 1; i++) {
		mCounts[i] = input.readInt();
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void DeathCounter::write(Stream& output)
{
	// UNUSED FUNCTION
	output.textBeginGroup("DeathCoutner");
	for (int i = 0; i < COD_SourceCount + 1; i++) {
		output.textWriteTab(output.mTabCount);
		output.writeInt(mCounts[i]);
		output.textWriteText("\r\n");
	}
	output.textEndGroup();
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
DeathMgr::DeathMgr()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80230694
 * Size:	000084
 * clear__Q24Game8DeathMgrFv
 */
void DeathMgr::clear()
{
	mToday.reset();
	mCave.reset();
	mTotal.reset();
	mSoundDeathCount = 0;
}

/*
 * --INFO--
 * Address:	80230718
 * Size:	00005C
 * inc__Q24Game8DeathMgrFi
 */
void DeathMgr::inc(int cod)
{
	if (gameSystem == nullptr || !(gameSystem->isFlag(GAMESYS_Unk5)) || cod == DeathCounter::COD_Sunset || cod == DeathCounter::COD_All) {
		if (gameSystem->mIsInCave) {
			inc_cave(cod);
		} else {
			inc_today(cod);
		}
	}
}

/*
 * --INFO--
 * Address:	80230774
 * Size:	0000FC
 * inc_today__Q24Game8DeathMgrFi
 */
void DeathMgr::inc_today(int cod)
{
	mToday(cod)++;
	mSoundDeathCount++;
}

/*
 * --INFO--
 * Address:	80230870
 * Size:	0000FC
 * inc_cave__Q24Game8DeathMgrFi
 */
void DeathMgr::inc_cave(int cod)
{
	mCave(cod)++;
	mSoundDeathCount++;
}

/*
 * --INFO--
 * Address:	8023096C
 * Size:	0001FC
 * account_cave__Q24Game8DeathMgrFv
 */
void DeathMgr::account_cave()
{
	for (int i = 0; i < DeathCounter::COD_SourceCount + 1; i++) {
		mToday(i) += mCave(i);
	}
	mCave.reset();
}

/*
 * --INFO--
 * Address:	80230B68
 * Size:	0001FC
 * account_today__Q24Game8DeathMgrFv
 */
void DeathMgr::account_today()
{
	for (int i = 0; i < DeathCounter::COD_SourceCount + 1; i++) {
		mTotal(i) += mToday(i);
	}
	mToday.reset();
}

/*
 * --INFO--
 * Address:	80230D64
 * Size:	0000E8
 * get_cave__Q24Game8DeathMgrFi
 */
int DeathMgr::get_cave(int cod) { return mCave(cod); }

/*
 * --INFO--
 * Address:	80230E4C
 * Size:	0000E8
 * get_today__Q24Game8DeathMgrFi
 */
int DeathMgr::get_today(int cod) { return mToday(cod); }

/*
 * --INFO--
 * Address:	80230F34
 * Size:	0000E8
 * get_total__Q24Game8DeathMgrFi
 */
int DeathMgr::get_total(int cod) { return mTotal(cod); }

/*
 * --INFO--
 * Address:	8023101C
 * Size:	0000B0
 * read__Q24Game8DeathMgrFR6Stream
 */
void DeathMgr::read(Stream& input)
{
	mCave.read(input);
	mToday.read(input);
	mTotal.read(input);
}

/*
 * --INFO--
 * Address:	802310CC
 * Size:	000148
 * write__Q24Game8DeathMgrFR6Stream
 */
void DeathMgr::write(Stream& output)
{
	mCave.write(output);
	mToday.write(output);
	mTotal.write(output);
}

} // namespace Game
