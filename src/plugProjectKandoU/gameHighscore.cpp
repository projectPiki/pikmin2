#include "stream.h"
#include "Game/Highscore.h"
#include "P2Macros.h"

namespace Game {

/*
 * __ct
 *
 * --INFO--
 * Address:	80233CEC
 * Size:	00001C
 */
Highscore::Highscore()
{
	mScoreCount = 0;
	mScores     = nullptr;
}

/*
 * --INFO--
 * Address:	80233D08
 * Size:	000044
 */
void Highscore::allocate(int count)
{
	mScoreCount = count;
	mScores     = new int[mScoreCount];
	clear();
}

/*
 * --INFO--
 * Address:	80233D4C
 * Size:	000088
 */
int Highscore::getScore(int index)
{
	bool check = (0 <= index && index < mScoreCount && mScores);
	P2ASSERTLINE(23, check);
	return mScores[index];
}

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 *          35(dec) instructions
 */
inline void Highscore::newRecord(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80233DD4
 * Size:	000178
 */
int Highscore::entryScore(int newScore)
{
	int newIndex  = -1;
	int nextIndex = 0;
	while (nextIndex < mScoreCount) {
		if (higher(newScore, mScores[nextIndex])) {
			newIndex = nextIndex;
			break;
		}
		nextIndex++;
	}
	if (newIndex != -1) {
		for (int i = mScoreCount - 1; i > newIndex; i--) {
			mScores[i] = mScores[i - 1];
		}
		mScores[newIndex] = newScore;
	}
	return newIndex;
}

/*
 * --INFO--
 * Address:	80233F4C
 * Size:	00004C
 */
bool Highscore::higher(int a, int b)
{
	if (b == -1) {
		return true;
	}
	if (a == -1) {
		return false;
	}
	return do_higher(a, b);
}

/*
 * --INFO--
 * Address:	80233FB0
 * Size:	0000B8
 */
void Highscore::read(Stream& input)
{
	bool test = (0 < mScoreCount && mScores);
	P2ASSERTLINE(63, test);
	for (int i = 0; i < mScoreCount; i++) {
		mScores[i] = input.readInt();
	}
}

/*
 * --INFO--
 * Address:	80234068
 * Size:	000074
 */
void Highscore::write(Stream& output)
{
	for (int i = 0; i < mScoreCount; i++) {
		output.writeInt(mScores[i]);
	}
}

/*
 * --INFO--
 * Address:	802340DC
 * Size:	000030
 */
void Highscore::clear()
{
	for (int i = 0; i < mScoreCount; i++) {
		mScores[i] = -1;
	}
}
} // namespace Game
