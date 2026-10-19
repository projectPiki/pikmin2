#ifndef _GAME_BIRTHMGR_H
#define _GAME_BIRTHMGR_H

#include "Game/Piki.h"
#include "stream.h"

namespace Game {

// BirthCounter is entirely inlined. The data members is used statically.
struct BirthCounter {
	inline BirthCounter() { reset(); }

	void reset();
	int& operator()(int);
	void read(Stream&);
	void write(Stream&);

	int mCounts[PikiColorCount - 1];
	int mTotal;
};

struct BirthMgr {
	BirthMgr();

	static void clear();
	static void inc(int);
	static void dec(int);
	static void inc_today(int);
	static void inc_cave(int);
	static void dec_today(int);
	static void dec_cave(int);
	static void account_cave();
	static void account_today_adjust();
	static void account_today();
	static int get_total(int);
	static void read(Stream&);
	static void write(Stream&);

	// Unused/inlined:
	static int get_cave(int);
	static int get_today(int);

	static BirthCounter mToday;
	static BirthCounter mCave;
	static BirthCounter mTotal;
};

} // namespace Game

#endif
