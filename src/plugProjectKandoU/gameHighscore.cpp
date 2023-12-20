#include "stream.h"
#include "Game/Highscore.h"
#include "P2Macros.h"

namespace Game {

/**
 * __ct
 *
 * @note Address: 0x80233CEC
 * @note Size: 0x1C
 */
Highscore::Highscore()
{
	mScoreCount = 0;
	mScores     = nullptr;
}

/**
 * @note Address: 0x80233D08
 * @note Size: 0x44
 */
void Highscore::allocate(int count)
{
	mScoreCount = count;
	mScores     = new int[mScoreCount];
	clear();
}

/**
 * @note Address: 0x80233D4C
 * @note Size: 0x88
 */
int Highscore::getScore(int index)
{
	bool check = (0 <= index && index < mScoreCount && mScores);
	P2ASSERTLINE(23, check);
	return mScores[index];
}

/**
 * @note Address: N/A
 * @note Size: 0x8C
 *          35(dec) instructions
 */
inline void Highscore::newRecord(int)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80233DD4
 * @note Size: 0x178
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

/**
 * @note Address: 0x80233F4C
 * @note Size: 0x4C
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

/**
 * @note Address: 0x80233FB0
 * @note Size: 0xB8
 */
void Highscore::read(Stream& input)
{
	bool test = (0 < mScoreCount && mScores);
	P2ASSERTLINE(63, test);
	for (int i = 0; i < mScoreCount; i++) {
		mScores[i] = input.readInt();
	}
}

/**
 * @note Address: 0x80234068
 * @note Size: 0x74
 */
void Highscore::write(Stream& output)
{
	for (int i = 0; i < mScoreCount; i++) {
		output.writeInt(mScores[i]);
	}
}

/**
 * @note Address: 0x802340DC
 * @note Size: 0x30
 */
void Highscore::clear()
{
	for (int i = 0; i < mScoreCount; i++) {
		mScores[i] = -1;
	}
}
} // namespace Game
