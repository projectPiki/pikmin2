#ifndef _GAME_TEKISTAT_H
#define _GAME_TEKISTAT_H

#include "types.h"
#include "stream.h"
#include "BitFlag.h"

namespace Game {
namespace TekiStat {
#define TEKISTAT_STATE_UPDATED     1
#define TEKISTAT_STATE_OUT_OF_DATE 2

/**
 * @size{0xC}
 */
struct Info {
	Info();

	void incKilled();
	void incKillPikmin();

	void write(Stream&);
	void read(Stream&);

	int mKilledTekiCount;   // _00
	int mKilledPikminCount; // _04

	// 1 is ORed to this in incKilled
	BitFlag<u8> mState; // _08
};

struct Mgr {
	Mgr();

	void allocate(int);
	void clear();
	Info* getTekiInfo(int tekiID);
	void setOutOfDateAll();
	bool whatsNew();

	void write(Stream&);
	void read(Stream&);

	Info* mData; // _00
	int mCount;  // _04
};
} // namespace TekiStat
} // namespace Game

#endif
