#ifndef _GAME_HIGHSCORE_H
#define _GAME_HIGHSCORE_H

struct Stream;

namespace Game {
// Size: 0xC
struct Highscore {
	Highscore();

	virtual bool do_higher(int a, int b) { return a > b; } // _08 (weak)

	void allocate(int);
	int getScore(int);
	void newRecord(int);
	int entryScore(int);
	bool higher(int, int);
	void read(Stream&);
	void write(Stream&);
	void clear();

	// VTBL _00
	int* mScores;    // _04
	int mScoreCount; // _08
};

struct Lowscore : public Highscore {
	virtual bool do_higher(int a, int b) { return a < b; } // _08 (weak)
};
} // namespace Game

#endif
