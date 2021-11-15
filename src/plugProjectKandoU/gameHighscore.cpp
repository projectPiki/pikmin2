#include "stream.h"
#include "types.h"
#include "Game/Highscore.h"
#include "JSystem/JUT/JUTException.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80483A68
    lbl_80483A68:
        .asciz "gameHighscore.cpp"
        .skip 2
    .global lbl_80483A7C
    lbl_80483A7C:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game9Highscore
    __vt__Q24Game9Highscore:
        .4byte 0
        .4byte 0
        .4byte do_higher__Q24Game9HighscoreFii
        .4byte 0
*/

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
	m_scores = nullptr;
}

/*
 * --INFO--
 * Address:	80233D08
 * Size:	000044
 */
void Highscore::allocate(int count)
{
	m_scoreCount = count;
	m_scores = new int[m_scoreCount];
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
inline int Highscore::newRecord(int newScore)
// void Highscore::newRecord(int newIndex)
{
	// UNUSED FUNCTION
	// int newIndex = -1;
	// for (; newIndex+1 < m_scoreCount && !higher(newScore, m_scores[newIndex+1]); newIndex++) {
	// }
	// return newIndex;

	// int newIndex = -1;
	// while (newIndex+1 < m_scoreCount && !higher(newScore, m_scores[++newIndex])) {
	// }
	// return newIndex;

	// int nextIndex = 0;
	// int newIndex = -1;
	// while (nextIndex < m_scoreCount) {
	// 	newIndex = nextIndex++;
	// 	if (higher(newScore, m_scores[newIndex])) {
	// 		break;
	// 	}
	// }
	// return newIndex;

	// int nextIndex = 0;
	// int newIndex = -1;
	// while (nextIndex < m_scoreCount) {
	// 	newIndex = nextIndex;
	// 	if (higher(newScore, m_scores[nextIndex++])) {
	// 		return newIndex;
	// 	}
	// }
	// return newIndex;

	// int nextIndex = 0;
	// int newIndex = -1;
	// while (nextIndex < m_scoreCount) {
	// 	newIndex = nextIndex;
	// 	bool check = higher(newScore, m_scores[nextIndex]);
	// 	if (check) {
	// 		return newIndex;
	// 	}
	// 	nextIndex++;
	// }
	// return newIndex;

	int nextIndex = 0;
	int newIndex = -1;
	while (nextIndex < m_scoreCount) {
		newIndex = nextIndex;
		if (higher(newScore, m_scores[newIndex])) {
			return nextIndex;
		}
		nextIndex++;
	}
	return newIndex;

	// int nextIndex = 0;
	// int newIndex = -1;
	// while (nextIndex < m_scoreCount) {
	// 	// newIndex = nextIndex;
	// 	if (higher(newScore, m_scores[nextIndex])) {
	// 		return nextIndex;
	// 	}
	// 	newIndex = nextIndex++;
	// }
	// return newIndex;

	// int nextIndex = 0;
	// int newIndex = -1;
	// bool isHigher;
	// while (
	// 	nextIndex < m_scoreCount &&
	// 	(isHigher = higher(newScore, m_scores[nextIndex]), newIndex = nextIndex, !isHigher)
	// ) {
	// 	nextIndex++;
	// }
	// return newIndex;


	// int newIndex = -1;
	// while (newIndex+1 < m_scoreCount) {
	// 	if (higher(newScore, m_scores[++newIndex])) {
	// 		break;
	// 	}
	// }
	// return newIndex;

	// int newIndex = 0;
	// for (;higher(newScore, m_scores[newIndex]) == false && newIndex < m_scoreCount; newIndex++) {
	// }
	// return newIndex-1;

	// int newIndex = -1;
	// while (newIndex+1 < m_scoreCount) {
	// 	if (higher(newScore, m_scores[++newIndex])) {
	// 		break;
	// 	}
	// }
	// return newIndex;

	// int newIndex = -1;
	// while (newIndex+1 < m_scoreCount && !higher(newScore,m_scores[newIndex+1])) {
	// 	newIndex++;
	// }
	// return newIndex;
	// int newIndex = -1;
	// while (true) {
	// 	if (!higher(newScore, m_scores[newIndex+1]) && newIndex+1 < m_scoreCount) {
	// 		return newIndex;
	// 	}
	// 	newIndex++;
	// }

	// if (newIndex < m_scoreCount-1) {
	// 	for (int i = m_scoreCount-1; i > newIndex; i--) {
	// 		m_scores[i] = m_scores[i-1];
	// 	}
	// }
}

/*
 * --INFO--
 * Address:	80233DD4
 * Size:	000178
 */
int Highscore::entryScore(int newScore)
{
	// int newIndex = -1;
	// for (; newIndex+1 < m_scoreCount && !higher(newScore, m_scores[newIndex+1]); newIndex++) {
	// }
	int newIndex = newRecord(newScore);
	if (newIndex != -1) {
		for (int i = m_scoreCount-1; i > newIndex; i--) {
			m_scores[i] = m_scores[i-1];
		}
		m_scores[newIndex] = newScore;
	}
	return newIndex;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	mr       r28, r4
	li       r30, -1
	li       r29, 0
	li       r31, 0
	b        lbl_80233E28

lbl_80233DFC:
	lwz      r5, 4(r27)
	mr       r3, r27
	mr       r4, r28
	lwzx     r5, r5, r31
	bl       higher__Q24Game9HighscoreFii
	clrlwi.  r0, r3, 0x18
	beq      lbl_80233E20
	mr       r30, r29
	b        lbl_80233E34

lbl_80233E20:
	addi     r31, r31, 4
	addi     r29, r29, 1

lbl_80233E28:
	lwz      r0, 8(r27)
	cmpw     r29, r0
	blt      lbl_80233DFC

lbl_80233E34:
	cmpwi    r30, -1
	beq      lbl_80233F34
	lwz      r3, 8(r27)
	addi     r0, r3, -1
	cmpw     r0, r30
	slwi     r4, r0, 2
	subf     r3, r30, r0
	ble      lbl_80233F28
	rlwinm.  r0, r3, 0x1d, 3, 0x1f
	mtctr    r0
	beq      lbl_80233F0C

lbl_80233E60:
	lwz      r0, 4(r27)
	add      r5, r0, r4
	addi     r4, r4, -4
	lwz      r0, -4(r5)
	stw      r0, 0(r5)
	lwz      r0, 4(r27)
	add      r5, r0, r4
	addi     r4, r4, -4
	lwz      r0, -4(r5)
	stw      r0, 0(r5)
	lwz      r0, 4(r27)
	add      r5, r0, r4
	addi     r4, r4, -4
	lwz      r0, -4(r5)
	stw      r0, 0(r5)
	lwz      r0, 4(r27)
	add      r5, r0, r4
	addi     r4, r4, -4
	lwz      r0, -4(r5)
	stw      r0, 0(r5)
	lwz      r0, 4(r27)
	add      r5, r0, r4
	addi     r4, r4, -4
	lwz      r0, -4(r5)
	stw      r0, 0(r5)
	lwz      r0, 4(r27)
	add      r5, r0, r4
	addi     r4, r4, -4
	lwz      r0, -4(r5)
	stw      r0, 0(r5)
	lwz      r0, 4(r27)
	add      r5, r0, r4
	addi     r4, r4, -4
	lwz      r0, -4(r5)
	stw      r0, 0(r5)
	lwz      r0, 4(r27)
	add      r5, r0, r4
	addi     r4, r4, -4
	lwz      r0, -4(r5)
	stw      r0, 0(r5)
	bdnz     lbl_80233E60
	andi.    r3, r3, 7
	beq      lbl_80233F28

lbl_80233F0C:
	mtctr    r3

lbl_80233F10:
	lwz      r0, 4(r27)
	add      r5, r0, r4
	addi     r4, r4, -4
	lwz      r0, -4(r5)
	stw      r0, 0(r5)
	bdnz     lbl_80233F10

lbl_80233F28:
	lwz      r3, 4(r27)
	slwi     r0, r30, 2
	stwx     r28, r3, r0

lbl_80233F34:
	mr       r3, r30
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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
bool Highscore::do_higher(int a, int b)
{
	return a > b;
}

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
