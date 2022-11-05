#include "types.h"

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
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, formationPikis__Q24Game8GameStat@ha
	stw      r0, 0x14(r1)
	addi     r3, r3, formationPikis__Q24Game8GameStat@l
	bl       clear__Q34Game8GameStat15PikiNaviCounterFv
	lis      r3, mePikis__Q24Game8GameStat@ha
	addi     r3, r3, mePikis__Q24Game8GameStat@l
	bl       clear__Q34Game8GameStat11PikiCounterFv
	lis      r3, workPikis__Q24Game8GameStat@ha
	addi     r3, r3, workPikis__Q24Game8GameStat@l
	bl       clear__Q34Game8GameStat15PikiNaviCounterFv
	lis      r3, alivePikis__Q24Game8GameStat@ha
	addi     r3, r3, alivePikis__Q24Game8GameStat@l
	bl       clear__Q34Game8GameStat11PikiCounterFv
	lis      r3, zikatuPikis__Q24Game8GameStat@ha
	addi     r3, r3, zikatuPikis__Q24Game8GameStat@l
	bl       clear__Q34Game8GameStat11PikiCounterFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801D0E10
 * Size:	000050
 */
void GameStat::getMapPikmins_exclude_Me(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmpwi    r3, -1
	stw      r0, 0x14(r1)
	bne      lbl_801D0E3C
	lis      r3, alivePikis__Q24Game8GameStat@ha
	lwzu     r12, alivePikis__Q24Game8GameStat@l(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_801D0E50

lbl_801D0E3C:
	lis      r4, alivePikis__Q24Game8GameStat@ha
	slwi     r0, r3, 2
	addi     r3, r4, alivePikis__Q24Game8GameStat@l
	add      r3, r3, r0
	lwz      r3, 4(r3)

lbl_801D0E50:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801D0E60
 * Size:	00008C
 */
void GameStat::getMapPikmins(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmpwi    r3, -1
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	bne      lbl_801D0EB0
	lis      r3, mePikis__Q24Game8GameStat@ha
	lwzu     r12, mePikis__Q24Game8GameStat@l(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lis      r4, alivePikis__Q24Game8GameStat@ha
	mr       r31, r3
	addi     r3, r4, alivePikis__Q24Game8GameStat@l
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	add      r3, r3, r31
	b        lbl_801D0ED8

lbl_801D0EB0:
	lis      r5, alivePikis__Q24Game8GameStat@ha
	lis      r4, mePikis__Q24Game8GameStat@ha
	slwi     r6, r3, 2
	addi     r3, r5, alivePikis__Q24Game8GameStat@l
	addi     r0, r4, mePikis__Q24Game8GameStat@l
	add      r4, r3, r6
	add      r3, r0, r6
	lwz      r4, 4(r4)
	lwz      r0, 4(r3)
	add      r3, r4, r0

lbl_801D0ED8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801D0EEC
 * Size:	000050
 */
void GameStat::getZikatuPikmins(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmpwi    r3, -1
	stw      r0, 0x14(r1)
	bne      lbl_801D0F18
	lis      r3, zikatuPikis__Q24Game8GameStat@ha
	lwzu     r12, zikatuPikis__Q24Game8GameStat@l(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_801D0F2C

lbl_801D0F18:
	lis      r4, zikatuPikis__Q24Game8GameStat@ha
	slwi     r0, r3, 2
	addi     r3, r4, zikatuPikis__Q24Game8GameStat@l
	add      r3, r3, r0
	lwz      r3, 4(r3)

lbl_801D0F2C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801D0F3C
 * Size:	0000F8
 */
void GameStat::getAllPikmins(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	cmpwi    r30, -1
	bne      lbl_801D0FA4
	lis      r3, mePikis__Q24Game8GameStat@ha
	lwzu     r12, mePikis__Q24Game8GameStat@l(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lis      r4, alivePikis__Q24Game8GameStat@ha
	mr       r31, r3
	addi     r3, r4, alivePikis__Q24Game8GameStat@l
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, playData__4Game@sda21(r13)
	add      r31, r3, r31
	addi     r3, r4, 0xa8
	bl       getTotalSum__Q24Game13PikiContainerFv
	add      r3, r31, r3
	b        lbl_801D101C

lbl_801D0FA4:
	bne      lbl_801D0FE0
	lis      r3, mePikis__Q24Game8GameStat@ha
	lwzu     r12, mePikis__Q24Game8GameStat@l(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lis      r4, alivePikis__Q24Game8GameStat@ha
	mr       r31, r3
	addi     r3, r4, alivePikis__Q24Game8GameStat@l
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	add      r31, r3, r31
	b        lbl_801D1008

lbl_801D0FE0:
	lis      r4, alivePikis__Q24Game8GameStat@ha
	lis      r3, mePikis__Q24Game8GameStat@ha
	slwi     r5, r30, 2
	addi     r4, r4, alivePikis__Q24Game8GameStat@l
	addi     r0, r3, mePikis__Q24Game8GameStat@l
	add      r4, r4, r5
	add      r3, r0, r5
	lwz      r4, 4(r4)
	lwz      r0, 4(r3)
	add      r31, r4, r0

lbl_801D1008:
	lwz      r3, playData__4Game@sda21(r13)
	mr       r4, r30
	addi     r3, r3, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	add      r3, r31, r3

lbl_801D101C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801D1034
 * Size:	00003C
 */
GameStat::PikiCounter::PikiCounter()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, __vt__Q34Game8GameStat11PikiCounter@ha
	stw      r0, 0x14(r1)
	addi     r0, r4, __vt__Q34Game8GameStat11PikiCounter@l
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r0, 0(r3)
	bl       clear__Q34Game8GameStat11PikiCounterFv
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801D1070
 * Size:	000024
 */
void GameStat::PikiCounter::clear()
{
	/*
	li       r0, 0
	stw      r0, 4(r3)
	stw      r0, 8(r3)
	stw      r0, 0xc(r3)
	stw      r0, 0x10(r3)
	stw      r0, 0x14(r3)
	stw      r0, 0x18(r3)
	stw      r0, 0x1c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801D1094
 * Size:	000084
 */
void GameStat::PikiCounter::inc(Game::Piki* p)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lbz      r31, 0x2b8(r4)
	cmpwi    r31, 0
	blt      lbl_801D10C8
	cmpwi    r31, 7
	bge      lbl_801D10C8
	li       r0, 1

lbl_801D10C8:
	clrlwi.  r0, r0, 0x18
	bne      lbl_801D10EC
	lis      r3, lbl_80480500@ha
	lis      r5, lbl_80480510@ha
	addi     r3, r3, lbl_80480500@l
	li       r4, 0x93
	addi     r5, r5, lbl_80480510@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801D10EC:
	slwi     r0, r31, 2
	add      r4, r30, r0
	lwz      r3, 4(r4)
	addi     r0, r3, 1
	stw      r0, 4(r4)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801D1118
 * Size:	000084
 */
void GameStat::PikiCounter::dec(Game::Piki* p)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lbz      r31, 0x2b8(r4)
	cmpwi    r31, 0
	blt      lbl_801D114C
	cmpwi    r31, 7
	bge      lbl_801D114C
	li       r0, 1

lbl_801D114C:
	clrlwi.  r0, r0, 0x18
	bne      lbl_801D1170
	lis      r3, lbl_80480500@ha
	lis      r5, lbl_80480510@ha
	addi     r3, r3, lbl_80480500@l
	li       r4, 0x9c
	addi     r5, r5, lbl_80480510@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801D1170:
	slwi     r0, r31, 2
	add      r4, r30, r0
	lwz      r3, 4(r4)
	addi     r0, r3, -1
	stw      r0, 4(r4)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801D119C
 * Size:	000080
 */
void GameStat::PikiCounter::inc(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	blt      lbl_801D11CC
	cmpwi    r31, 7
	bge      lbl_801D11CC
	li       r0, 1

lbl_801D11CC:
	clrlwi.  r0, r0, 0x18
	bne      lbl_801D11F0
	lis      r3, lbl_80480500@ha
	lis      r5, lbl_80480510@ha
	addi     r3, r3, lbl_80480500@l
	li       r4, 0xa4
	addi     r5, r5, lbl_80480510@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801D11F0:
	slwi     r0, r31, 2
	add      r4, r30, r0
	lwz      r3, 4(r4)
	addi     r0, r3, 1
	stw      r0, 4(r4)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801D121C
 * Size:	000080
 */
void GameStat::PikiCounter::dec(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	blt      lbl_801D124C
	cmpwi    r31, 7
	bge      lbl_801D124C
	li       r0, 1

lbl_801D124C:
	clrlwi.  r0, r0, 0x18
	bne      lbl_801D1270
	lis      r3, lbl_80480500@ha
	lis      r5, lbl_80480510@ha
	addi     r3, r3, lbl_80480500@l
	li       r4, 0xaa
	addi     r5, r5, lbl_80480510@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801D1270:
	slwi     r0, r31, 2
	add      r4, r30, r0
	lwz      r3, 4(r4)
	addi     r0, r3, -1
	stw      r0, 4(r4)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801D129C
 * Size:	0000CC
 */
void GameStat::PikiNaviCounter::clear()
{
	/*
	li       r0, 0
	stw      r0, 4(r3)
	stw      r0, 8(r3)
	stw      r0, 0xc(r3)
	stw      r0, 0x10(r3)
	stw      r0, 0x14(r3)
	stw      r0, 0x18(r3)
	stw      r0, 0x1c(r3)
	stw      r0, 0x24(r3)
	stw      r0, 0x28(r3)
	stw      r0, 0x2c(r3)
	stw      r0, 0x30(r3)
	stw      r0, 0x34(r3)
	stw      r0, 0x38(r3)
	stw      r0, 0x3c(r3)
	stw      r0, 0x44(r3)
	stw      r0, 0x48(r3)
	stw      r0, 0x4c(r3)
	stw      r0, 0x50(r3)
	stw      r0, 0x54(r3)
	stw      r0, 0x58(r3)
	stw      r0, 0x5c(r3)
	stw      r0, 0x64(r3)
	stw      r0, 0x68(r3)
	stw      r0, 0x6c(r3)
	stw      r0, 0x70(r3)
	stw      r0, 0x74(r3)
	stw      r0, 0x78(r3)
	stw      r0, 0x7c(r3)
	stw      r0, 0x84(r3)
	stw      r0, 0x88(r3)
	stw      r0, 0x8c(r3)
	stw      r0, 0x90(r3)
	stw      r0, 0x94(r3)
	stw      r0, 0x98(r3)
	stw      r0, 0x9c(r3)
	stw      r0, 0xa4(r3)
	stw      r0, 0xa8(r3)
	stw      r0, 0xac(r3)
	stw      r0, 0xb0(r3)
	stw      r0, 0xb4(r3)
	stw      r0, 0xb8(r3)
	stw      r0, 0xbc(r3)
	stw      r0, 0xc4(r3)
	stw      r0, 0xc8(r3)
	stw      r0, 0xcc(r3)
	stw      r0, 0xd0(r3)
	stw      r0, 0xd4(r3)
	stw      r0, 0xd8(r3)
	stw      r0, 0xdc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801D1368
 * Size:	0000AC
 */
void GameStat::PikiNaviCounter::inc(Game::Piki* p)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r5, 0x2c4(r4)
	cmplwi   r5, 0
	beq      lbl_801D1398
	lhz      r31, 0x2dc(r5)
	b        lbl_801D139C

lbl_801D1398:
	li       r31, 2

lbl_801D139C:
	lbz      r30, 0x2b8(r4)
	li       r0, 0
	cmpwi    r30, 0
	blt      lbl_801D13B8
	cmpwi    r30, 7
	bge      lbl_801D13B8
	li       r0, 1

lbl_801D13B8:
	clrlwi.  r0, r0, 0x18
	bne      lbl_801D13DC
	lis      r3, lbl_80480500@ha
	lis      r5, lbl_80480510@ha
	addi     r3, r3, lbl_80480500@l
	li       r4, 0x93
	addi     r5, r5, lbl_80480510@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801D13DC:
	slwi     r3, r31, 5
	slwi     r0, r30, 2
	add      r3, r29, r3
	add      r4, r3, r0
	lwz      r3, 4(r4)
	addi     r0, r3, 1
	stw      r0, 4(r4)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801D1414
 * Size:	0000AC
 */
void GameStat::PikiNaviCounter::dec(Game::Piki* p)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r5, 0x2c4(r4)
	cmplwi   r5, 0
	beq      lbl_801D1444
	lhz      r31, 0x2dc(r5)
	b        lbl_801D1448

lbl_801D1444:
	li       r31, 2

lbl_801D1448:
	lbz      r30, 0x2b8(r4)
	li       r0, 0
	cmpwi    r30, 0
	blt      lbl_801D1464
	cmpwi    r30, 7
	bge      lbl_801D1464
	li       r0, 1

lbl_801D1464:
	clrlwi.  r0, r0, 0x18
	bne      lbl_801D1488
	lis      r3, lbl_80480500@ha
	lis      r5, lbl_80480510@ha
	addi     r3, r3, lbl_80480500@l
	li       r4, 0x9c
	addi     r5, r5, lbl_80480510@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801D1488:
	slwi     r3, r31, 5
	slwi     r0, r30, 2
	add      r3, r29, r3
	add      r4, r3, r0
	lwz      r3, 4(r4)
	addi     r0, r3, -1
	stw      r0, 4(r4)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	801D14C0
 * Size:	000278
 */
void __sinit_gameStat_cpp(void)
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
