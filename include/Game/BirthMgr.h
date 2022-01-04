#ifndef _GAME_BIRTHMGR_H
#define _GAME_BIRTHMGR_H

#include "Game/Piki.h"
#include "stream.h"

namespace Game {
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

	static i32 mToday[PikiColorCount];
	static i32 mCave[PikiColorCount];
	static i32 mTotal[PikiColorCount];
};
} // namespace Game

#endif
