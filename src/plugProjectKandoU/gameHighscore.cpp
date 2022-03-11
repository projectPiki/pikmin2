#include "stream.h"
#include "types.h"
#include "Game/Highscore.h"
#include "JSystem/JUT/JUTException.h"

namespace Game {

/*
 * __ct
 *
 * --INFO--
 * Address:	80233CEC
 * Size:	00001C
 */
Highscore::Highscore(void)
{
	m_scoreCount = 0;
	m_scores     = nullptr;
}

/*
 * --INFO--
 * Address:	80233D08
 * Size:	000044
 */
void Highscore::allocate(int count)
{
	m_scoreCount = count;
	m_scores     = new int[m_scoreCount];
	clear();
}

/*
 * --INFO--
 * Address:	80233D4C
 * Size:	000088
 */
int Highscore::getScore(int index)
{
	bool check = (0 <= index && index < m_scoreCount && m_scores);
	P2ASSERTLINE(23, check);
	return m_scores[index];
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
	while (nextIndex < m_scoreCount) {
		if (higher(newScore, m_scores[nextIndex])) {
			newIndex = nextIndex;
			break;
		}
		nextIndex++;
	}
	if (newIndex != -1) {
		for (int i = m_scoreCount - 1; i > newIndex; i--) {
			m_scores[i] = m_scores[i - 1];
		}
		m_scores[newIndex] = newScore;
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
 * Address:	80233F98
 * Size:	000018
 */
bool Highscore::do_higher(int a, int b) { return a > b; }

/*
 * --INFO--
 * Address:	80233FB0
 * Size:	0000B8
 */
void Highscore::read(Stream& input)
{
	bool test = (0 < m_scoreCount && m_scores);
	P2ASSERTLINE(63, test);
	for (int i = 0; i < m_scoreCount; i++) {
		m_scores[i] = input.readInt();
	}
}

/*
 * --INFO--
 * Address:	80234068
 * Size:	000074
 */
void Highscore::write(Stream& output)
{
	for (int i = 0; i < m_scoreCount; i++) {
		output.writeInt(m_scores[i]);
	}
}

/*
 * --INFO--
 * Address:	802340DC
 * Size:	000030
 */
void Highscore::clear(void)
{
	for (int i = 0; i < m_scoreCount; i++) {
		m_scores[i] = -1;
	}
}
} // namespace Game
