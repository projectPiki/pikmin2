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
		COD_Unknown0 = 0,
		COD_Unknown1,
		COD_Unknown2,
		COD_Water,
		COD_Unknown4,
		COD_Unknown5,
		COD_Unknown6,
		COD_All,                  // All causes combined
		COD_SourceCount = COD_All // Count of individual causes
	};

	inline DeathCounter() { reset(); }

	void reset();
	int& operator()(int);
	void read(Stream&);
	void write(Stream&);

	int m_counts[COD_SourceCount + 1]; // _00
	int m_total;                       // _20
};
struct DeathMgr {
	inline DeathMgr();

	static void clear();
	static void inc(int);
	static void inc_today(int);
	static void inc_cave(int);
	static void account_cave();
	static void account_today();
	static int get_cave(int);
	static int get_today(int);
	static int get_total(int);
	static void read(Stream&);
	static void write(Stream&);

	static DeathCounter mToday;
	static DeathCounter mCave;
	static DeathCounter mTotal;
	static int mSoundDeathCount;
};

extern DeathMgr* deathMgr;
} // namespace Game

#endif
