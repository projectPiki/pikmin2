#include "Game/gameStat.h"
#include "Game/gamePlayData.h"
#include "Game/Navi.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_gameStat_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80480500
    lbl_80480500:
        .4byte 0x67616D65
        .4byte 0x53746174
        .4byte 0x2E637070
        .4byte 0x00000000
    .global lbl_80480510
    lbl_80480510:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game8GameStat11PikiCounter
    __vt__Q34Game8GameStat11PikiCounter:
        .4byte 0
        .4byte 0
        .4byte __opi__Q34Game8GameStat11PikiCounterFv
        .4byte __cl__Q34Game8GameStat11PikiCounterFi

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global formationPikis__Q24Game8GameStat
    formationPikis__Q24Game8GameStat:
        .skip 0x220
    .global workPikis__Q24Game8GameStat
    workPikis__Q24Game8GameStat:
        .skip 0xE0
    .global alivePikis__Q24Game8GameStat
    alivePikis__Q24Game8GameStat:
        .skip 0x20
    .global mePikis__Q24Game8GameStat
    mePikis__Q24Game8GameStat:
        .skip 0x20
    .global zikatuPikis__Q24Game8GameStat
    zikatuPikis__Q24Game8GameStat:
        .skip 0x20
*/

namespace Game {

/*
 * --INFO--
 * Address:	801D0DB8
 * Size:	000058
 */
void GameStat::clear()
{
	formationPikis.clear();
	mePikis.clear();
	workPikis.clear();
	alivePikis.clear();
	zikatuPikis.clear();
}

/*
 * --INFO--
 * Address:	801D0E10
 * Size:	000050
 */
int GameStat::getMapPikmins_exclude_Me(int id)
{
	if (id == -1) {
		return alivePikis;
	} else {
		return alivePikis.m_pikiCounts[id];
	}
}

/*
 * --INFO--
 * Address:	801D0E60
 * Size:	00008C
 */
int GameStat::getMapPikmins(int id)
{
	if (id == -1) {
		return alivePikis + mePikis;
	} else {
		return alivePikis.m_pikiCounts[id] + mePikis.m_pikiCounts[id];
	}
}

/*
 * --INFO--
 * Address:	801D0EEC
 * Size:	000050
 */
int GameStat::getZikatuPikmins(int id)
{
	if (id == -1) {
		return zikatuPikis;
	} else {
		return zikatuPikis.m_pikiCounts[id];
	}
}

/*
 * --INFO--
 * Address:	801D0F3C
 * Size:	0000F8
 */
int GameStat::getAllPikmins(int id)
{
	if (id == -1) {
		int sum = alivePikis + mePikis;
		return playData->m_pikiContainer.getTotalSum() + sum;
	} else {
		return getMapPikmins(id) + playData->m_pikiContainer.getColorSum(id);
	}
}

/*
 * --INFO--
 * Address:	801D1034
 * Size:	00003C
 */
GameStat::PikiCounter::PikiCounter() { clear(); }

/*
 * --INFO--
 * Address:	801D1070
 * Size:	000024
 */
void GameStat::PikiCounter::clear()
{
	m_pikiCounts[Blue]    = 0;
	m_pikiCounts[Red]     = 0;
	m_pikiCounts[Yellow]  = 0;
	m_pikiCounts[Purple]  = 0;
	m_pikiCounts[White]   = 0;
	m_pikiCounts[Bulbmin] = 0;
	m_pikiCounts[Carrot]  = 0;
}

/*
 * --INFO--
 * Address:	801D1094
 * Size:	000084
 */
void GameStat::PikiCounter::inc(Piki* piki)
{
	int id = piki->m_pikiKind;
	P2ASSERTBOUNDSLINE(147, 0, id, PikiColorCount);
	m_pikiCounts[id]++;
}

/*
 * --INFO--
 * Address:	801D1118
 * Size:	000084
 */
void GameStat::PikiCounter::dec(Piki* piki)
{
	int id = piki->m_pikiKind;
	P2ASSERTBOUNDSLINE(156, 0, id, PikiColorCount);
	m_pikiCounts[id]--;
}

/*
 * --INFO--
 * Address:	801D119C
 * Size:	000080
 */
void GameStat::PikiCounter::inc(int id)
{
	P2ASSERTBOUNDSLINE(164, 0, id, PikiColorCount);
	m_pikiCounts[id]++;
}

/*
 * --INFO--
 * Address:	801D121C
 * Size:	000080
 */
void GameStat::PikiCounter::dec(int id)
{
	P2ASSERTBOUNDSLINE(170, 0, id, PikiColorCount);
	m_pikiCounts[id]--;
}

/*
 * --INFO--
 * Address:	801D129C
 * Size:	0000CC
 */
void GameStat::PikiNaviCounter::clear()
{
	m_counter[Blue].clear();
	m_counter[Red].clear();
	m_counter[Yellow].clear();
	m_counter[Purple].clear();
	m_counter[White].clear();
	m_counter[Bulbmin].clear();
	m_counter[Carrot].clear();
}

/*
 * --INFO--
 * Address:	801D1368
 * Size:	0000AC
 */
void GameStat::PikiNaviCounter::inc(Piki* piki)
{
	int id;
	if (!piki->m_navi) {
		id = 2;
	} else {
		id = piki->m_navi->m_naviIndex;
	}

	// this should be a PikiCounter::inc inline judging from the error line, but it makes a regswap
	int type = piki->m_pikiKind;
	P2ASSERTBOUNDSLINE(147, 0, type, PikiColorCount);
	m_counter[id].m_pikiCounts[type]++;
}

/*
 * --INFO--
 * Address:	801D1414
 * Size:	0000AC
 */
void GameStat::PikiNaviCounter::dec(Game::Piki* piki)
{
	int id;
	if (!piki->m_navi) {
		id = 2;
	} else {
		id = piki->m_navi->m_naviIndex;
	}

	// this should be a PikiCounter::dec inline judging from the error line, but it makes a regswap
	int type = piki->m_pikiKind;
	P2ASSERTBOUNDSLINE(156, 0, type, PikiColorCount);
	m_counter[id].m_pikiCounts[type]--;
}

} // namespace Game

/*
 * --INFO--
 * Address:	801D14C0
 * Size:	000278
 */
void __sinit_gameStat_cpp()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, formationPikis__Q24Game8GameStat@ha
	lis      r4, __ct__Q34Game8GameStat11PikiCounterFv@ha
	stw      r0, 0x14(r1)
	addi     r3, r3, formationPikis__Q24Game8GameStat@l
	li       r5, 0
	addi     r4, r4, __ct__Q34Game8GameStat11PikiCounterFv@l
	li       r6, 0x20
	li       r7, 7
	bl       __construct_array
	lis      r4, formationPikis__Q24Game8GameStat@ha
	lis      r3, workPikis__Q24Game8GameStat@ha
	addi     r8, r4, formationPikis__Q24Game8GameStat@l
	li       r0, 0
	stw      r0, 4(r8)
	lis      r4, __ct__Q34Game8GameStat11PikiCounterFv@ha
	addi     r3, r3, workPikis__Q24Game8GameStat@l
	li       r5, 0
	stw      r0, 8(r8)
	addi     r4, r4, __ct__Q34Game8GameStat11PikiCounterFv@l
	li       r6, 0x20
	li       r7, 7
	stw      r0, 0xc(r8)
	stw      r0, 0x10(r8)
	stw      r0, 0x14(r8)
	stw      r0, 0x18(r8)
	stw      r0, 0x1c(r8)
	stw      r0, 0x24(r8)
	stw      r0, 0x28(r8)
	stw      r0, 0x2c(r8)
	stw      r0, 0x30(r8)
	stw      r0, 0x34(r8)
	stw      r0, 0x38(r8)
	stw      r0, 0x3c(r8)
	stw      r0, 0x44(r8)
	stw      r0, 0x48(r8)
	stw      r0, 0x4c(r8)
	stw      r0, 0x50(r8)
	stw      r0, 0x54(r8)
	stw      r0, 0x58(r8)
	stw      r0, 0x5c(r8)
	stw      r0, 0x64(r8)
	stw      r0, 0x68(r8)
	stw      r0, 0x6c(r8)
	stw      r0, 0x70(r8)
	stw      r0, 0x74(r8)
	stw      r0, 0x78(r8)
	stw      r0, 0x7c(r8)
	stw      r0, 0x84(r8)
	stw      r0, 0x88(r8)
	stw      r0, 0x8c(r8)
	stw      r0, 0x90(r8)
	stw      r0, 0x94(r8)
	stw      r0, 0x98(r8)
	stw      r0, 0x9c(r8)
	stw      r0, 0xa4(r8)
	stw      r0, 0xa8(r8)
	stw      r0, 0xac(r8)
	stw      r0, 0xb0(r8)
	stw      r0, 0xb4(r8)
	stw      r0, 0xb8(r8)
	stw      r0, 0xbc(r8)
	stw      r0, 0xc4(r8)
	stw      r0, 0xc8(r8)
	stw      r0, 0xcc(r8)
	stw      r0, 0xd0(r8)
	stw      r0, 0xd4(r8)
	stw      r0, 0xd8(r8)
	stw      r0, 0xdc(r8)
	bl       __construct_array
	lis      r3, workPikis__Q24Game8GameStat@ha
	lis      r6, __vt__Q34Game8GameStat11PikiCounter@ha
	addi     r7, r3, workPikis__Q24Game8GameStat@l
	li       r8, 0
	stw      r8, 4(r7)
	lis      r3, alivePikis__Q24Game8GameStat@ha
	addi     r5, r3, alivePikis__Q24Game8GameStat@l
	addi     r0, r6, __vt__Q34Game8GameStat11PikiCounter@l
	stw      r8, 8(r7)
	lis      r3, mePikis__Q24Game8GameStat@ha
	addi     r4, r3, mePikis__Q24Game8GameStat@l
	stw      r8, 0xc(r7)
	lis      r3, zikatuPikis__Q24Game8GameStat@ha
	stw      r8, 0x10(r7)
	stw      r8, 0x14(r7)
	stw      r8, 0x18(r7)
	stw      r8, 0x1c(r7)
	stw      r8, 0x24(r7)
	stw      r8, 0x28(r7)
	stw      r8, 0x2c(r7)
	stw      r8, 0x30(r7)
	stw      r8, 0x34(r7)
	stw      r8, 0x38(r7)
	stw      r8, 0x3c(r7)
	stw      r8, 0x44(r7)
	stw      r8, 0x48(r7)
	stw      r8, 0x4c(r7)
	stw      r8, 0x50(r7)
	stw      r8, 0x54(r7)
	stw      r8, 0x58(r7)
	stw      r8, 0x5c(r7)
	stw      r8, 0x64(r7)
	stw      r8, 0x68(r7)
	stw      r8, 0x6c(r7)
	stw      r8, 0x70(r7)
	stw      r8, 0x74(r7)
	stw      r8, 0x78(r7)
	stw      r8, 0x7c(r7)
	stw      r8, 0x84(r7)
	stw      r8, 0x88(r7)
	stw      r8, 0x8c(r7)
	stw      r8, 0x90(r7)
	stw      r8, 0x94(r7)
	stw      r8, 0x98(r7)
	stw      r8, 0x9c(r7)
	stw      r8, 0xa4(r7)
	stw      r8, 0xa8(r7)
	stw      r8, 0xac(r7)
	stw      r8, 0xb0(r7)
	stw      r8, 0xb4(r7)
	stw      r8, 0xb8(r7)
	stw      r8, 0xbc(r7)
	stw      r8, 0xc4(r7)
	stw      r8, 0xc8(r7)
	stw      r8, 0xcc(r7)
	stw      r8, 0xd0(r7)
	stw      r8, 0xd4(r7)
	stwu     r0, zikatuPikis__Q24Game8GameStat@l(r3)
	stw      r8, 0xd8(r7)
	stw      r8, 0xdc(r7)
	stw      r0, 0(r5)
	stw      r8, 4(r5)
	stw      r8, 8(r5)
	stw      r8, 0xc(r5)
	stw      r8, 0x10(r5)
	stw      r8, 0x14(r5)
	stw      r8, 0x18(r5)
	stw      r8, 0x1c(r5)
	stw      r0, 0(r4)
	stw      r8, 4(r4)
	stw      r8, 8(r4)
	stw      r8, 0xc(r4)
	stw      r8, 0x10(r4)
	stw      r8, 0x14(r4)
	stw      r8, 0x18(r4)
	stw      r8, 0x1c(r4)
	stw      r8, 4(r3)
	stw      r8, 8(r3)
	stw      r8, 0xc(r3)
	stw      r8, 0x10(r3)
	stw      r8, 0x14(r3)
	stw      r8, 0x18(r3)
	stw      r8, 0x1c(r3)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
