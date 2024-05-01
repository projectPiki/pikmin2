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

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
// BirthCounter::BirthCounter()
// {
// 	// UNUSED FUNCTION
// 	reset();
// }

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
void BirthCounter::reset()
{
	// UNUSED FUNCTION
	for (int i = 0; i < PikiColorCount - 1; i++) {
		mCounts[i] = 0;
	}
	mTotal = 0;
}

/**
 * @note Address: N/A
 * @note Size: 0x78
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

/**
 * @note Address: N/A
 * @note Size: 0x5C
 */
void BirthCounter::read(Stream& input)
{
	// UNUSED FUNCTION
	for (int i = 0; i < PikiColorCount - 1; i++) {
		mCounts[i] = input.readInt();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x90
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

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
BirthMgr::BirthMgr()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8022F9FC
 * @note Size: 0x68
 */
void BirthMgr::clear()
{
	mToday.reset();
	mCave.reset();
	mTotal.reset();
}

/**
 * @note Address: 0x8022FA64
 * @note Size: 0x48
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

/**
 * @note Address: 0x8022FAAC
 * @note Size: 0x48
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

/**
 * @note Address: 0x8022FAF4
 * @note Size: 0xD0
 */
void BirthMgr::inc_today(int pikiColor)
{
	mToday(pikiColor)++;
	if (pikiColor != AllPikmin) {
		mToday(AllPikmin)++;
	}
}

/**
 * @note Address: 0x8022FBC4
 * @note Size: 0xD0
 */
void BirthMgr::inc_cave(int pikiColor)
{
	mCave(pikiColor)++;
	if (pikiColor != AllPikmin) {
		mCave(AllPikmin)++;
	}
}

/**
 * @note Address: 0x8022FC94
 * @note Size: 0xD0
 */
void BirthMgr::dec_today(int pikiColor)
{
	mToday(pikiColor)--;
	if (pikiColor != AllPikmin) {
		mToday(AllPikmin)--;
	}
}

/**
 * @note Address: 0x8022FD64
 * @note Size: 0xD0
 */
void BirthMgr::dec_cave(int pikiColor)
{
	mCave(pikiColor)--;
	if (pikiColor != AllPikmin) {
		mCave(AllPikmin)--;
	}
}

/**
 * @note Address: 0x8022FE34
 * @note Size: 0x140
 */
void BirthMgr::account_cave()
{
	for (int i = FirstPikmin; i < PikiColorCount - 1; i++) {
		mToday(i) += mCave(i);
	}
	mCave.reset();
}

/**
 * @note Address: 0x8022FF74
 * @note Size: 0x2B4
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

/**
 * @note Address: 0x80230228
 * @note Size: 0x204
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

/**
 * @note Address: N/A
 * @note Size: 0x70
 */
int BirthMgr::get_cave(int pikiColor)
{
	// UNUSED FUNCTION
	return mCave(pikiColor);
}

/**
 * @note Address: N/A
 * @note Size: 0x70
 */
int BirthMgr::get_today(int pikiColor)
{
	// UNUSED FUNCTION
	return mToday(pikiColor);
}

/**
 * @note Address: 0x8023042C
 * @note Size: 0x70
 */
int BirthMgr::get_total(int pikiColor) { return mTotal(pikiColor); }

/**
 * @note Address: 0x8023049C
 * @note Size: 0xB0
 * read__Q24Game8BirthMgrFR6Stream
 */
void BirthMgr::read(Stream& input)
{
	mCave.read(input);
	mToday.read(input);
	mTotal.read(input);
}

/**
 * @note Address: 0x8023054C
 * @note Size: 0x148
 * write__Q24Game8BirthMgrFR6Stream
 */
void BirthMgr::write(Stream& output)
{
	mCave.write(output);
	mToday.write(output);
	mTotal.write(output);
}

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
// DeathCounter::DeathCounter()
// {
// 	// UNUSED FUNCTION
// 	reset();
// }

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
void DeathCounter::reset()
{
	// UNUSED FUNCTION
	for (int i = 0; i <= COD_SourceCount; i++) {
		mCounts[i] = 0;
	}
	mTotal = 0;
}

/**
 * @note Address: N/A
 * @note Size: 0x100
 */
int& DeathCounter::operator()(int cod)
{
	// UNUSED FUNCTION
	if (cod == COD_All) {
		int& total = mTotal;
		mTotal     = 0;
		for (int i = 0; i < COD_SourceCount; i++) {
			mTotal += mCounts[i];
		}
		return total;
	} else {
		P2ASSERTBOUNDSINCLUSIVELINE(338, 0, cod, COD_SourceCount);
		return mCounts[cod];
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x5C
 */
void DeathCounter::read(Stream& input)
{
	// UNUSED FUNCTION
	for (int i = 0; i < COD_SourceCount + 1; i++) {
		mCounts[i] = input.readInt();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x90
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

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
DeathMgr::DeathMgr()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80230694
 * @note Size: 0x84
 * clear__Q24Game8DeathMgrFv
 */
void DeathMgr::clear()
{
	mToday.reset();
	mCave.reset();
	mTotal.reset();
	mSoundDeathCount = 0;
}

/**
 * @note Address: 0x80230718
 * @note Size: 0x5C
 * inc__Q24Game8DeathMgrFi
 */
void DeathMgr::inc(int cod)
{
	if (gameSystem == nullptr || !(gameSystem->isFlag(GAMESYS_DisableDeathCounter)) || cod == DeathCounter::COD_Sunset
	    || cod == DeathCounter::COD_All) {
		if (gameSystem->mIsInCave) {
			inc_cave(cod);
		} else {
			inc_today(cod);
		}
	}
}

/**
 * @note Address: 0x80230774
 * @note Size: 0xFC
 * inc_today__Q24Game8DeathMgrFi
 */
void DeathMgr::inc_today(int cod)
{
	mToday(cod)++;
	mSoundDeathCount++;
}

/**
 * @note Address: 0x80230870
 * @note Size: 0xFC
 * inc_cave__Q24Game8DeathMgrFi
 */
void DeathMgr::inc_cave(int cod)
{
	mCave(cod)++;
	mSoundDeathCount++;
}

/**
 * @note Address: 0x8023096C
 * @note Size: 0x1FC
 * account_cave__Q24Game8DeathMgrFv
 */
void DeathMgr::account_cave()
{
	for (int i = 0; i < DeathCounter::COD_SourceCount + 1; i++) {
		mToday(i) += mCave(i);
	}
	mCave.reset();
}

/**
 * @note Address: 0x80230B68
 * @note Size: 0x1FC
 * account_today__Q24Game8DeathMgrFv
 */
void DeathMgr::account_today()
{
	for (int i = 0; i < DeathCounter::COD_SourceCount + 1; i++) {
		mTotal(i) += mToday(i);
	}
	mToday.reset();
}

/**
 * @note Address: 0x80230D64
 * @note Size: 0xE8
 * get_cave__Q24Game8DeathMgrFi
 */
int DeathMgr::get_cave(int cod) { return mCave(cod); }

/**
 * @note Address: 0x80230E4C
 * @note Size: 0xE8
 * get_today__Q24Game8DeathMgrFi
 */
int DeathMgr::get_today(int cod) { return mToday(cod); }

/**
 * @note Address: 0x80230F34
 * @note Size: 0xE8
 * get_total__Q24Game8DeathMgrFi
 */
int DeathMgr::get_total(int cod) { return mTotal(cod); }

/**
 * @note Address: 0x8023101C
 * @note Size: 0xB0
 * read__Q24Game8DeathMgrFR6Stream
 */
void DeathMgr::read(Stream& input)
{
	mCave.read(input);
	mToday.read(input);
	mTotal.read(input);
}

/**
 * @note Address: 0x802310CC
 * @note Size: 0x148
 * write__Q24Game8DeathMgrFR6Stream
 */
void DeathMgr::write(Stream& output)
{
	mCave.write(output);
	mToday.write(output);
	mTotal.write(output);
}

} // namespace Game
