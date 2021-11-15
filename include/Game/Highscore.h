#ifndef _GAME_HIGHSCORE_H
#define _GAME_HIGHSCORE_H

struct Stream;

namespace Game {
// Size: 0xC
struct Highscore {
	Highscore();
	void allocate(int);
	int getScore(int);
	int newRecord(int);
	int entryScore(int);
	bool higher(int, int);
	virtual bool do_higher(int, int);
	void read(Stream&);
	void write(Stream&);
	void clear();

	// VTBL _00
	int* m_scores;    // _04
	int m_scoreCount; // _08
};

struct Lowscore : public Highscore {
	virtual bool do_higher(int, int);
};
} // namespace Game

#endif
