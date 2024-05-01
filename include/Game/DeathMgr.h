#ifndef _GAME_DEATHMGR_H
#define _GAME_DEATHMGR_H

#include "Dolphin/gx.h"
#include "Game/Piki.h"
#include "stream.h"

namespace Game {
// DeathCounter is entirely inlined. The data members are used statically.
struct DeathCounter {
	/**
	 * @fabricated
	 */
	enum CauseOfDeath {
		COD_Battle = 0,  // 0, death by combat
		COD_Sunset,      // 1, death by being left behind :(
		COD_Fire,        // 2, death by burning
		COD_Water,       // 3, death by drowning
		COD_Electricity, // 4, death by zap
		COD_Explosion,   // 5, death by boom
		COD_Poison,      // 6, death by choking
		COD_All, // 7, All causes combined - also gets manually inc'd for EOD, left as sprouts in cave, or both captains dying in a cave
		COD_SourceCount = COD_All // Count of individual causes
	};

	inline DeathCounter() { reset(); }

	void reset();
	int& operator()(int causeOfDeath);
	void read(Stream& input);
	void write(Stream& output);

	int mCounts[COD_SourceCount + 1]; // _00
	int mTotal;                       // _20
};
struct DeathMgr {
	inline DeathMgr();

	static void clear();
	static void inc(int causeOfDeath);
	static void inc_today(int causeOfDeath);
	static void inc_cave(int causeOfDeath);
	static void account_cave();
	static void account_today();
	static int get_cave(int causeOfDeath);
	static int get_today(int causeOfDeath);
	static int get_total(int causeOfDeath);
	static void read(Stream& input);
	static void write(Stream& output);

	static DeathCounter mToday;
	static DeathCounter mCave;
	static DeathCounter mTotal;
	static int mSoundDeathCount;
};

extern DeathMgr* deathMgr;
} // namespace Game

#endif
