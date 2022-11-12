#include "Game/BirthMgr.h"
#include "Game/DeathMgr.h"
#include "Game/GameSystem.h"
#include "Game/Piki.h"
#include "JSystem/JUT/JUTException.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_gameDeathCount_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_804838F0
    lbl_804838F0:
        .4byte 0x42697274
        .4byte 0x68436F75
        .4byte 0x746E6572
        .4byte 0x00000000
    .global lbl_80483900
    lbl_80483900:
        .4byte 0x67616D65
        .4byte 0x44656174
        .4byte 0x68436F75
        .4byte 0x6E742E63
        .4byte 0x70700000
    .global lbl_80483914
    lbl_80483914:
        .asciz "P2Assert"
        .skip 3
    .global lbl_80483920
    lbl_80483920:
        .4byte 0x44656174
        .4byte 0x68436F75
        .4byte 0x746E6572
        .4byte 0x00000000

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global mToday__Q24Game8BirthMgr
    mToday__Q24Game8BirthMgr:
        .skip 0xC0
    .global mCave__Q24Game8BirthMgr
    mCave__Q24Game8BirthMgr:
        .skip 0x1C
    .global mTotal__Q24Game8BirthMgr
    mTotal__Q24Game8BirthMgr:
        .skip 0x1C
    .global mToday__Q24Game8DeathMgr
    mToday__Q24Game8DeathMgr:
        .skip 0x24
    .global mCave__Q24Game8DeathMgr
    mCave__Q24Game8DeathMgr:
        .skip 0x24
    .global mTotal__Q24Game8DeathMgr
    mTotal__Q24Game8DeathMgr:
        .skip 0x24

    .section .sbss # 0x80514D80 - 0x80516360
    .global mSoundDeathCount__Q24Game8DeathMgr
    mSoundDeathCount__Q24Game8DeathMgr:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A368
    lbl_8051A368:
        .4byte 0x0D0A0000
        .4byte 0x00000000
*/

// sinit
extern Game::BirthTodayCounter Game::BirthMgr::mToday;
extern Game::BirthCounter Game::BirthMgr::mCave;
extern Game::BirthCounter Game::BirthMgr::mTotal;
extern Game::DeathCounter Game::DeathMgr::mToday;
extern Game::DeathCounter Game::DeathMgr::mCave;
extern Game::DeathCounter Game::DeathMgr::mTotal;

int Game::DeathMgr::mSoundDeathCount;

namespace Game {

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
// BirthCounter::BirthCounter(void)
// {
// 	// UNUSED FUNCTION
// 	reset();
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void BirthCounter::reset(void)
{
	// UNUSED FUNCTION
	for (int i = 0; i < PikiColorCount - 1; i++) {
		m_counts[i] = 0;
	}
	m_total = 0;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
int& BirthCounter::operator()(int pikiColor)
{
	// UNUSED FUNCTION
	if (pikiColor == LastStoredPikiColor + 1) {
		int& v  = m_total;
		m_total = 0;
		for (int i = 0; i <= LastStoredPikiColor; i++) {
			m_total += m_counts[i];
		}
		return v;
	} else {
		return m_counts[pikiColor];
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void BirthCounter::read(Stream& input)
{
	// UNUSED FUNCTION
	for (int i = 0; i < PikiColorCount - 1; i++) {
		m_counts[i] = input.readInt();
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void BirthCounter::write(Stream& output)
{
	// UNUSED FUNCTION
	output.textBeginGroup("BirthCoutner");
	for (int i = 0; i < PikiColorCount - 1; i++) {
		output.textWriteTab(output.m_tabCount);
		output.writeInt(m_counts[i]);
		output.textWriteText("\r\n");
	}
	output.textEndGroup();
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
BirthMgr::BirthMgr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8022F9FC
 * Size:	000068
 */
void BirthMgr::clear(void)
{
	mToday.reset();
	mCave.reset();
	mTotal.reset();
}

/*
 * --INFO--
 * Address:	8022FA64
 * Size:	000048
 * inc__Q24Game8BirthMgrFi
 */
void BirthMgr::inc(int pikiColor)
{
	if (0 <= pikiColor && pikiColor <= LastStoredPikiColor) {
		if (gameSystem->m_inCave) {
			inc_cave(pikiColor);
		} else {
			inc_today(pikiColor);
		}
	}
}

/*
 * --INFO--
 * Address:	8022FAAC
 * Size:	000048
 * dec__Q24Game8BirthMgrFi
 */
void BirthMgr::dec(int pikiColor)
{
	if (0 <= pikiColor && pikiColor <= LastStoredPikiColor) {
		if (gameSystem->m_inCave) {
			dec_cave(pikiColor);
		} else {
			dec_today(pikiColor);
		}
	}
}

/*
 * --INFO--
 * Address:	8022FAF4
 * Size:	0000D0
 */
void BirthMgr::inc_today(int pikiColor)
{
	mToday(pikiColor)++;
	if (pikiColor != LastStoredPikiColor + 1) {
		mToday(LastStoredPikiColor + 1)++;
	}
}

/*
 * --INFO--
 * Address:	8022FBC4
 * Size:	0000D0
 */
void BirthMgr::inc_cave(int pikiColor)
{
	mCave(pikiColor)++;
	if (pikiColor != LastStoredPikiColor + 1) {
		mCave(LastStoredPikiColor + 1)++;
	}
}

/*
 * --INFO--
 * Address:	8022FC94
 * Size:	0000D0
 */
void BirthMgr::dec_today(int pikiColor)
{
	mToday(pikiColor)--;
	if (pikiColor != LastStoredPikiColor + 1) {
		mToday(LastStoredPikiColor + 1)--;
	}
}

/*
 * --INFO--
 * Address:	8022FD64
 * Size:	0000D0
 */
void BirthMgr::dec_cave(int pikiColor)
{
	mCave(pikiColor)--;
	if (pikiColor != LastStoredPikiColor + 1) {
		mCave(LastStoredPikiColor + 1)--;
	}
}

/*
 * --INFO--
 * Address:	8022FE34
 * Size:	000140
 */
void BirthMgr::account_cave(void)
{
	for (int i = 0; i < 6; i++) {
		mToday(i) += mCave(i);
	}
	mCave.reset();
}

/*
 * --INFO--
 * Address:	8022FF74
 * Size:	0002B4
 */
void BirthMgr::account_today_adjust(void)
{
	for (int i = 0; i < 5; i++) {
		if (mToday(i) < 0) {
			mTotal(i) += mToday(i);
			mToday(i) = 0;
		}
	}
	int a = 0;
	for (int i = 0; i < 5; i++) {
		a += mToday(i);
	}
	mToday(5) = a;
}

/*
 * --INFO--
 * Address:	80230228
 * Size:	000204
 * account_today__Q24Game8BirthMgrFv
 */
void BirthMgr::account_today(void)
{
	for (int i = 0; i < 6; i++) {
		mTotal(i) += mToday(i);
	}
	int a = 0;
	for (int i = 0; i < 5; i++) {
		a += mTotal(i);
	}
	mToday(5) = a;
	mToday.reset();
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
int BirthMgr::get_cave(int pikiColor)
{
	// UNUSED FUNCTION
	return mCave(pikiColor);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
int BirthMgr::get_today(int pikiColor)
{
	// UNUSED FUNCTION
	return mToday(pikiColor);
}

/*
 * --INFO--
 * Address:	8023042C
 * Size:	000070
 */
int BirthMgr::get_total(int pikiColor) { return mTotal(pikiColor); }

/*
 * --INFO--
 * Address:	8023049C
 * Size:	0000B0
 * read__Q24Game8BirthMgrFR6Stream
 */
void BirthMgr::read(Stream& input)
{
	mCave.read(input);
	mToday.read(input);
	mTotal.read(input);
}

/*
 * --INFO--
 * Address:	8023054C
 * Size:	000148
 * write__Q24Game8BirthMgrFR6Stream
 */
void BirthMgr::write(Stream& output)
{
	mCave.write(output);
	mToday.write(output);
	mTotal.write(output);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
// DeathCounter::DeathCounter()
// {
// 	// UNUSED FUNCTION
// 	reset();
// }

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void DeathCounter::reset()
{
	// UNUSED FUNCTION
	for (int i = 0; i <= COD_SourceCount; i++) {
		m_counts[i] = 0;
	}
	m_total = 0;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000100
 */
int& DeathCounter::operator()(int cod)
{
	// UNUSED FUNCTION
	if (cod == COD_SourceCount) {
		int& v  = m_total;
		m_total = 0;
		for (int i = 0; i < COD_SourceCount; i++) {
			m_total += m_counts[i];
		}
		return v;
	} else {
		P2ASSERTBOUNDSINCLUSIVELINE(338, 0, cod, COD_SourceCount);
		return m_counts[cod];
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void DeathCounter::read(Stream& input)
{
	// UNUSED FUNCTION
	for (int i = 0; i < COD_SourceCount + 1; i++) {
		m_counts[i] = input.readInt();
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void DeathCounter::write(Stream& output)
{
	// UNUSED FUNCTION
	output.textBeginGroup("DeathCoutner");
	for (int i = 0; i < COD_SourceCount + 1; i++) {
		output.textWriteTab(output.m_tabCount);
		output.writeInt(m_counts[i]);
		output.textWriteText("\r\n");
	}
	output.textEndGroup();
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
DeathMgr::DeathMgr()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80230694
 * Size:	000084
 * clear__Q24Game8DeathMgrFv
 */
void DeathMgr::clear(void)
{
	mToday.reset();
	mCave.reset();
	mTotal.reset();
	mSoundDeathCount = 0;
}

/*
 * --INFO--
 * Address:	80230718
 * Size:	00005C
 * inc__Q24Game8DeathMgrFi
 */
void DeathMgr::inc(int cod)
{
	if (gameSystem == nullptr || (gameSystem->m_flags & 0x10) == 0 || cod == DeathCounter::COD_Unknown1 || cod == DeathCounter::COD_All) {
		if (gameSystem->m_inCave) {
			inc_cave(cod);
		} else {
			inc_today(cod);
		}
	}
}

/*
 * --INFO--
 * Address:	80230774
 * Size:	0000FC
 * inc_today__Q24Game8DeathMgrFi
 */
void DeathMgr::inc_today(int cod)
{
	mToday(cod)++;
	mSoundDeathCount++;
}

/*
 * --INFO--
 * Address:	80230870
 * Size:	0000FC
 * inc_cave__Q24Game8DeathMgrFi
 */
void DeathMgr::inc_cave(int cod)
{
	mCave(cod)++;
	mSoundDeathCount++;
}

/*
 * --INFO--
 * Address:	8023096C
 * Size:	0001FC
 * account_cave__Q24Game8DeathMgrFv
 */
void DeathMgr::account_cave(void)
{
	for (int i = 0; i < DeathCounter::COD_SourceCount + 1; i++) {
		mToday(i) += mCave(i);
	}
	mCave.reset();
}

/*
 * --INFO--
 * Address:	80230B68
 * Size:	0001FC
 * account_today__Q24Game8DeathMgrFv
 */
void DeathMgr::account_today(void)
{
	for (int i = 0; i < DeathCounter::COD_SourceCount + 1; i++) {
		mTotal(i) += mToday(i);
	}
	mToday.reset();
}

/*
 * --INFO--
 * Address:	80230D64
 * Size:	0000E8
 * get_cave__Q24Game8DeathMgrFi
 */
int DeathMgr::get_cave(int cod) { return mCave(cod); }

/*
 * --INFO--
 * Address:	80230E4C
 * Size:	0000E8
 * get_today__Q24Game8DeathMgrFi
 */
int DeathMgr::get_today(int cod) { return mToday(cod); }

/*
 * --INFO--
 * Address:	80230F34
 * Size:	0000E8
 * get_total__Q24Game8DeathMgrFi
 */
int DeathMgr::get_total(int cod) { return mTotal(cod); }

/*
 * --INFO--
 * Address:	8023101C
 * Size:	0000B0
 * read__Q24Game8DeathMgrFR6Stream
 */
void DeathMgr::read(Stream& input)
{
	mCave.read(input);
	mToday.read(input);
	mTotal.read(input);
}

/*
 * --INFO--
 * Address:	802310CC
 * Size:	000148
 * write__Q24Game8DeathMgrFR6Stream
 */
void DeathMgr::write(Stream& output)
{
	mCave.write(output);
	mToday.write(output);
	mTotal.write(output);
}

} // namespace Game

/*
 * --INFO--
 * Address:	80231214
 * Size:	0000E0
 */
// void __sinit_gameDeathCount_cpp(void)
// {
// 	/*
// 	li       r0, 0
// 	lis      r8, mToday__Q24Game8BirthMgr@ha
// 	stwu     r0, mToday__Q24Game8BirthMgr@l(r8)
// 	lis      r7, mCave__Q24Game8BirthMgr@ha
// 	lis      r6, mTotal__Q24Game8BirthMgr@ha
// 	lis      r5, mToday__Q24Game8DeathMgr@ha
// 	stwu     r0, mToday__Q24Game8DeathMgr@l(r5)
// 	lis      r4, mCave__Q24Game8DeathMgr@ha
// 	lis      r3, mTotal__Q24Game8DeathMgr@ha
// 	stwu     r0, mCave__Q24Game8DeathMgr@l(r4)
// 	stwu     r0, mTotal__Q24Game8DeathMgr@l(r3)
// 	stwu     r0, mCave__Q24Game8BirthMgr@l(r7)
// 	stwu     r0, mTotal__Q24Game8BirthMgr@l(r6)
// 	stw      r0, 4(r8)
// 	stw      r0, 8(r8)
// 	stw      r0, 0xc(r8)
// 	stw      r0, 0x10(r8)
// 	stw      r0, 0x14(r8)
// 	stw      r0, 0x18(r8)
// 	stw      r0, 4(r7)
// 	stw      r0, 8(r7)
// 	stw      r0, 0xc(r7)
// 	stw      r0, 0x10(r7)
// 	stw      r0, 0x14(r7)
// 	stw      r0, 0x18(r7)
// 	stw      r0, 4(r6)
// 	stw      r0, 8(r6)
// 	stw      r0, 0xc(r6)
// 	stw      r0, 0x10(r6)
// 	stw      r0, 0x14(r6)
// 	stw      r0, 0x18(r6)
// 	stw      r0, 4(r5)
// 	stw      r0, 8(r5)
// 	stw      r0, 0xc(r5)
// 	stw      r0, 0x10(r5)
// 	stw      r0, 0x14(r5)
// 	stw      r0, 0x18(r5)
// 	stw      r0, 0x1c(r5)
// 	stw      r0, 0x20(r5)
// 	stw      r0, 4(r4)
// 	stw      r0, 8(r4)
// 	stw      r0, 0xc(r4)
// 	stw      r0, 0x10(r4)
// 	stw      r0, 0x14(r4)
// 	stw      r0, 0x18(r4)
// 	stw      r0, 0x1c(r4)
// 	stw      r0, 0x20(r4)
// 	stw      r0, 4(r3)
// 	stw      r0, 8(r3)
// 	stw      r0, 0xc(r3)
// 	stw      r0, 0x10(r3)
// 	stw      r0, 0x14(r3)
// 	stw      r0, 0x18(r3)
// 	stw      r0, 0x1c(r3)
// 	stw      r0, 0x20(r3)
// 	blr
// 	*/
// }
