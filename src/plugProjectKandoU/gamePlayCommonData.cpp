#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80483A88
    lbl_80483A88:
        .asciz "gamePlayCommonData.cpp"
        .skip 1
    .global lbl_80483AA0
    lbl_80483AA0:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game8Lowscore
    __vt__Q24Game8Lowscore:
        .4byte 0
        .4byte 0
        .4byte do_higher__Q24Game8LowscoreFii
        .4byte 0
*/

namespace Game {

/*
 * --INFO--
 * Address:	8023410C
 * Size:	0000FC
 */
PlayCommonData::PlayCommonData(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, 0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	stb      r0, 0(r3)
	addi     r3, r28, 0xc
	bl       __ct__Q24Game21PlayChallengeGameDataFv
	li       r3, 0x40
	bl       __nwa__FUl
	stw      r3, 4(r28)
	li       r3, 0x40
	bl       __nwa__FUl
	stw      r3, 8(r28)
	li       r29, 0
	li       r30, 0

lbl_8023415C:
	li       r3, 0xc
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8023417C
	bl       __ct__Q24Game9HighscoreFv
	lis      r3, __vt__Q24Game8Lowscore@ha
	addi     r0, r3, __vt__Q24Game8Lowscore@l
	stw      r0, 0(r31)

lbl_8023417C:
	lwz      r4, 4(r28)
	li       r3, 0xc
	stwx     r31, r4, r30
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_802341A4
	bl       __ct__Q24Game9HighscoreFv
	lis      r3, __vt__Q24Game8Lowscore@ha
	addi     r0, r3, __vt__Q24Game8Lowscore@l
	stw      r0, 0(r31)

lbl_802341A4:
	lwz      r3, 8(r28)
	li       r4, 3
	stwx     r31, r3, r30
	lwz      r3, 4(r28)
	lwzx     r3, r3, r30
	bl       allocate__Q24Game9HighscoreFi
	lwz      r3, 8(r28)
	li       r4, 3
	lwzx     r3, r3, r30
	bl       allocate__Q24Game9HighscoreFi
	addi     r29, r29, 1
	addi     r30, r30, 4
	cmpwi    r29, 0x10
	blt      lbl_8023415C
	mr       r3, r28
	bl       reset__Q24Game14PlayCommonDataFv
	lwz      r0, 0x24(r1)
	mr       r3, r28
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80234208
 * Size:	000078
 */
void PlayCommonData::reset(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, 0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	stb      r0, 0(r3)
	addi     r3, r29, 0xc
	bl       reset__Q24Game21PlayChallengeGameDataFv
	li       r30, 0
	li       r31, 0

lbl_8023423C:
	lwz      r3, 4(r29)
	lwzx     r3, r3, r31
	bl       clear__Q24Game9HighscoreFv
	lwz      r3, 8(r29)
	lwzx     r3, r3, r31
	bl       clear__Q24Game9HighscoreFv
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 0x10
	blt      lbl_8023423C
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80234280
 * Size:	0000C0
 */
void PlayChallengeGameData::reset(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	li       r30, 0
	mr       r31, r3
	li       r27, 0
	mr       r28, r30
	stb      r30, 8(r3)
	b        lbl_802342D0

lbl_802342A8:
	lwz      r0, 4(r31)
	add      r29, r0, r28
	addi     r3, r29, 4
	bl       clear__Q24Game9HighscoreFv
	addi     r3, r29, 0x10
	bl       clear__Q24Game9HighscoreFv
	stb      r30, 0(r29)
	addi     r28, r28, 0x1c
	addi     r27, r27, 1
	stb      r30, 1(r29)

lbl_802342D0:
	lwz      r0, 0(r31)
	cmpw     r27, r0
	blt      lbl_802342A8
	lwz      r3, 4(r31)
	lhz      r0, 0(r3)
	ori      r0, r0, 1
	sth      r0, 0(r3)
	lwz      r3, 4(r31)
	lhz      r0, 0x1c(r3)
	ori      r0, r0, 1
	sth      r0, 0x1c(r3)
	lwz      r3, 4(r31)
	lhz      r0, 0x38(r3)
	ori      r0, r0, 1
	sth      r0, 0x38(r3)
	lwz      r3, 4(r31)
	lhz      r0, 0x54(r3)
	ori      r0, r0, 1
	sth      r0, 0x54(r3)
	lwz      r3, 4(r31)
	lhz      r0, 0x70(r3)
	ori      r0, r0, 1
	sth      r0, 0x70(r3)
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80234340
 * Size:	0000A0
 */
void PlayCommonData::write(Stream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	li       r4, 2
	stw      r28, 0x10(r1)
	mr       r28, r3
	mr       r3, r29
	bl       writeInt__6StreamFi
	mr       r3, r29
	lbz      r4, 0(r28)
	bl       writeByte__6StreamFUc
	li       r30, 0
	li       r31, 0

lbl_80234384:
	lwz      r3, 4(r28)
	mr       r4, r29
	lwzx     r3, r3, r31
	bl       write__Q24Game9HighscoreFR6Stream
	lwz      r3, 8(r28)
	mr       r4, r29
	lwzx     r3, r3, r31
	bl       write__Q24Game9HighscoreFR6Stream
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 0x10
	blt      lbl_80234384
	mr       r4, r29
	addi     r3, r28, 0xc
	bl       write__Q24Game21PlayChallengeGameDataFR6Stream
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802343E0
 * Size:	0000EC
 */
void PlayCommonData::read(Stream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	mr       r3, r29
	bl       readInt__6StreamFv
	mr       r31, r3
	mr       r3, r29
	bl       readByte__6StreamFv
	cmplwi   r31, 2
	stb      r3, 0(r28)
	blt      lbl_80234460
	li       r30, 0
	li       r31, 0

lbl_8023442C:
	lwz      r3, 4(r28)
	mr       r4, r29
	lwzx     r3, r3, r31
	bl       read__Q24Game9HighscoreFR6Stream
	lwz      r3, 8(r28)
	mr       r4, r29
	lwzx     r3, r3, r31
	bl       read__Q24Game9HighscoreFR6Stream
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 0x10
	blt      lbl_8023442C
	b        lbl_802344A0

lbl_80234460:
	cmplwi   r31, 1
	bgt      lbl_802344A0
	li       r30, 0
	li       r31, 0

lbl_80234470:
	lwz      r3, 4(r28)
	mr       r4, r29
	lwzx     r3, r3, r31
	bl       read__Q24Game9HighscoreFR6Stream
	lwz      r3, 8(r28)
	mr       r4, r29
	lwzx     r3, r3, r31
	bl       read__Q24Game9HighscoreFR6Stream
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 0xf
	blt      lbl_80234470

lbl_802344A0:
	mr       r4, r29
	addi     r3, r28, 0xc
	bl       read__Q24Game21PlayChallengeGameDataFR6Stream
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802344CC
 * Size:	000078
 */
void PlayCommonData::getHighscore_clear(int)
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
	blt      lbl_802344FC
	cmpwi    r31, 0x10
	bge      lbl_802344FC
	li       r0, 1

lbl_802344FC:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80234520
	lis      r3, lbl_80483A88@ha
	lis      r5, lbl_80483AA0@ha
	addi     r3, r3, lbl_80483A88@l
	li       r4, 0x9b
	addi     r5, r5, lbl_80483AA0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80234520:
	lwz      r3, 4(r30)
	slwi     r0, r31, 2
	lwzx     r3, r3, r0
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
 * Address:	80234544
 * Size:	000078
 */
void PlayCommonData::getHighscore_complete(int)
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
	blt      lbl_80234574
	cmpwi    r31, 0x10
	bge      lbl_80234574
	li       r0, 1

lbl_80234574:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80234598
	lis      r3, lbl_80483A88@ha
	lis      r5, lbl_80483AA0@ha
	addi     r3, r3, lbl_80483A88@l
	li       r4, 0xa2
	addi     r5, r5, lbl_80483AA0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80234598:
	lwz      r3, 8(r30)
	slwi     r0, r31, 2
	lwzx     r3, r3, r0
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
 * Address:	802345BC
 * Size:	000038
 */
void PlayCommonData::entryHighscores_clear(int, int*, int*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r8, r4
	mr       r7, r6
	stw      r0, 0x14(r1)
	mr       r0, r5
	mr       r5, r8
	lwz      r4, 4(r3)
	mr       r6, r0
	bl entryHighscores_common__Q24Game14PlayCommonDataFPPQ24Game9HighscoreiPiPi
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802345F4
 * Size:	000038
 */
void PlayCommonData::entryHighscores_complete(int, int*, int*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r8, r4
	mr       r7, r6
	stw      r0, 0x14(r1)
	mr       r0, r5
	mr       r5, r8
	lwz      r4, 8(r3)
	mr       r6, r0
	bl entryHighscores_common__Q24Game14PlayCommonDataFPPQ24Game9HighscoreiPiPi
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8023462C
 * Size:	0000E0
 */
void PlayCommonData::entryHighscores_common(Game::Highscore**, int, int*, int*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r26, r4
	mr       r27, r6
	mr       r28, r7
	lwz      r3, 0(r4)
	mr       r4, r5
	stw      r5, 0(r6)
	bl       entryScore__Q24Game9HighscoreFi
	stw      r3, 0(r28)
	li       r30, 0

lbl_80234660:
	addi     r0, r30, 1
	mr       r3, r30
	slwi     r31, r0, 2
	lwzx     r29, r26, r31
	bl       get_total__Q24Game8DeathMgrFi
	stwx     r3, r27, r31
	mr       r3, r29
	lwzx     r4, r27, r31
	bl       entryScore__Q24Game9HighscoreFi
	addi     r30, r30, 1
	stwx     r3, r28, r31
	cmpwi    r30, 8
	blt      lbl_80234660
	li       r29, 0

lbl_80234698:
	addi     r0, r29, 9
	mr       r3, r29
	slwi     r31, r0, 2
	lwzx     r30, r26, r31
	bl       get_total__Q24Game8BirthMgrFi
	stwx     r3, r27, r31
	mr       r3, r30
	lwzx     r4, r27, r31
	bl       entryScore__Q24Game9HighscoreFi
	addi     r29, r29, 1
	stwx     r3, r28, r31
	cmpwi    r29, 6
	blt      lbl_80234698
	lwz      r3, sys@sda21(r13)
	lwz      r29, 0x3c(r26)
	lwz      r31, 0x60(r3)
	lwz      r3, playData__4Game@sda21(r13)
	bl       calcPlayMinutes__Q24Game8PlayDataFv
	lwz      r0, 0x1c(r31)
	add      r4, r3, r0
	mr       r3, r29
	stw      r4, 0x3c(r27)
	bl       entryScore__Q24Game9HighscoreFi
	stw      r3, 0x3c(r28)
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8023470C
 * Size:	00000C
 */
void PlayCommonData::isChallengeGamePlayable(void)
{
	/*
	lbz      r0, 0x14(r3)
	clrlwi   r3, r0, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	80234718
 * Size:	00000C
 */
void PlayCommonData::isLouieRescued(void)
{
	/*
	lbz      r0, 0x14(r3)
	rlwinm   r3, r0, 0x1e, 0x1f, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	80234724
 * Size:	00008C
 */
void PlayCommonData::isPerfectChallenge(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lbz      r0, 0(r3)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	beq      lbl_80234750
	li       r3, 1
	b        lbl_80234798

lbl_80234750:
	li       r31, 0
	b        lbl_8023477C

lbl_80234758:
	mr       r4, r31
	addi     r3, r30, 0xc
	bl       getState__Q24Game21PlayChallengeGameDataFi
	lhz      r0, 0(r3)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	bne      lbl_80234778
	li       r3, 0
	b        lbl_80234798

lbl_80234778:
	addi     r31, r31, 1

lbl_8023477C:
	lwz      r0, 0xc(r30)
	cmpw     r31, r0
	blt      lbl_80234758
	lbz      r0, 0(r30)
	li       r3, 1
	ori      r0, r0, 4
	stb      r0, 0(r30)

lbl_80234798:
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
 * Address:	802347B0
 * Size:	000030
 */
void PlayCommonData::enableChallengeGame(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lbz      r0, 0x14(r3)
	ori      r0, r0, 1
	stb      r0, 0x14(r3)
	lwz      r3, sys@sda21(r13)
	bl       setOptionBlockSaveFlag__6SystemFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802347E0
 * Size:	000030
 */
void PlayCommonData::enableLouieRescue(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lbz      r0, 0x14(r3)
	ori      r0, r0, 4
	stb      r0, 0x14(r3)
	lwz      r3, sys@sda21(r13)
	bl       setOptionBlockSaveFlag__6SystemFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80234810
 * Size:	00001C
 */
void PlayCommonData::challenge_is_virgin(void)
{
	/*
	lbz      r0, 0x14(r3)
	rlwinm   r4, r0, 0, 0x1e, 0x1e
	ori      r0, r0, 2
	cntlzw   r4, r4
	stb      r0, 0x14(r3)
	srwi     r3, r4, 5
	blr
	*/
}

/*
 * --INFO--
 * Address:	8023482C
 * Size:	000014
 */
void PlayCommonData::challenge_is_virgin_check_only(void)
{
	/*
	lbz      r0, 0x14(r3)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	cntlzw   r0, r0
	srwi     r3, r0, 5
	blr
	*/
}

/*
 * --INFO--
 * Address:	80234840
 * Size:	000024
 */
void PlayCommonData::challenge_get_CourseState(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r3, r3, 0xc
	stw      r0, 0x14(r1)
	bl       getState__Q24Game21PlayChallengeGameDataFi
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void PlayCommonData::challenge_get_coursenum(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80234864
 * Size:	00002C
 */
void PlayCommonData::challenge_checkOpen(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r3, r3, 0xc
	stw      r0, 0x14(r1)
	bl       getState__Q24Game21PlayChallengeGameDataFi
	lhz      r0, 0(r3)
	clrlwi   r3, r0, 0x1f
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80234890
 * Size:	00002C
 */
void PlayCommonData::challenge_checkClear(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r3, r3, 0xc
	stw      r0, 0x14(r1)
	bl       getState__Q24Game21PlayChallengeGameDataFi
	lhz      r0, 0(r3)
	rlwinm   r3, r0, 0x1f, 0x1f, 0x1f
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802348BC
 * Size:	00002C
 */
void PlayCommonData::challenge_checkKunsho(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r3, r3, 0xc
	stw      r0, 0x14(r1)
	bl       getState__Q24Game21PlayChallengeGameDataFi
	lhz      r0, 0(r3)
	rlwinm   r3, r0, 0x1e, 0x1f, 0x1f
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802348E8
 * Size:	00004C
 */
void PlayCommonData::challenge_checkJustOpen(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r3, r3, 0xc
	stw      r0, 0x14(r1)
	bl       getState__Q24Game21PlayChallengeGameDataFi
	lhz      r4, 0(r3)
	clrlwi.  r0, r4, 0x1f
	beq      lbl_80234920
	rlwinm   r0, r4, 0, 0x1c, 0x1c
	ori      r4, r4, 8
	cntlzw   r0, r0
	sth      r4, 0(r3)
	srwi     r3, r0, 5
	b        lbl_80234924

lbl_80234920:
	li       r3, 0

lbl_80234924:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80234934
 * Size:	00004C
 */
void PlayCommonData::challenge_checkJustClear(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r3, r3, 0xc
	stw      r0, 0x14(r1)
	bl       getState__Q24Game21PlayChallengeGameDataFi
	lhz      r4, 0(r3)
	rlwinm.  r0, r4, 0, 0x1e, 0x1e
	beq      lbl_8023496C
	rlwinm   r0, r4, 0, 0x1b, 0x1b
	ori      r4, r4, 0x10
	cntlzw   r0, r0
	sth      r4, 0(r3)
	srwi     r3, r0, 5
	b        lbl_80234970

lbl_8023496C:
	li       r3, 0

lbl_80234970:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80234980
 * Size:	00004C
 */
void PlayCommonData::challenge_checkJustKunsho(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r3, r3, 0xc
	stw      r0, 0x14(r1)
	bl       getState__Q24Game21PlayChallengeGameDataFi
	lhz      r4, 0(r3)
	rlwinm.  r0, r4, 0, 0x1d, 0x1d
	beq      lbl_802349B8
	rlwinm   r0, r4, 0, 0x1a, 0x1a
	ori      r4, r4, 0x20
	cntlzw   r0, r0
	sth      r4, 0(r3)
	srwi     r3, r0, 5
	b        lbl_802349BC

lbl_802349B8:
	li       r3, 0

lbl_802349BC:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802349CC
 * Size:	000094
 */
void PlayCommonData::challenge_openNewCourse(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, gGameConfig__4Game@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	addi     r3, r4, gGameConfig__4Game@l
	lwz      r0, 0x228(r3)
	cmpwi    r0, 0
	beq      lbl_80234A00
	li       r3, -1
	b        lbl_80234A48

lbl_80234A00:
	li       r31, 0
	b        lbl_80234A38

lbl_80234A08:
	mr       r4, r31
	addi     r3, r30, 0xc
	bl       getState__Q24Game21PlayChallengeGameDataFi
	lhz      r0, 0(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_80234A34
	mr       r3, r30
	mr       r4, r31
	bl       challenge_setOpen__Q24Game14PlayCommonDataFi
	mr       r3, r31
	b        lbl_80234A48

lbl_80234A34:
	addi     r31, r31, 1

lbl_80234A38:
	lwz      r0, 0xc(r30)
	cmpw     r31, r0
	blt      lbl_80234A08
	li       r3, -1

lbl_80234A48:
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
 * Address:	80234A60
 * Size:	000030
 */
void PlayCommonData::challenge_setClear(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r3, r3, 0xc
	stw      r0, 0x14(r1)
	bl       getState__Q24Game21PlayChallengeGameDataFi
	lhz      r0, 0(r3)
	ori      r0, r0, 2
	sth      r0, 0(r3)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80234A90
 * Size:	000030
 */
void PlayCommonData::challenge_setOpen(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r3, r3, 0xc
	stw      r0, 0x14(r1)
	bl       getState__Q24Game21PlayChallengeGameDataFi
	lhz      r0, 0(r3)
	ori      r0, r0, 1
	sth      r0, 0(r3)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80234AC0
 * Size:	000080
 */
void PlayCommonData::challenge_setKunsho(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	addi     r3, r30, 0xc
	bl       getState__Q24Game21PlayChallengeGameDataFi
	lhz      r0, 0(r3)
	li       r31, 0
	ori      r0, r0, 4
	sth      r0, 0(r3)
	b        lbl_80234B10

lbl_80234AF4:
	mr       r4, r31
	addi     r3, r30, 0xc
	bl       getState__Q24Game21PlayChallengeGameDataFi
	lhz      r0, 0(r3)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	beq      lbl_80234B28
	addi     r31, r31, 1

lbl_80234B10:
	lwz      r0, 0xc(r30)
	cmpw     r31, r0
	blt      lbl_80234AF4
	lbz      r0, 0(r30)
	ori      r0, r0, 4
	stb      r0, 0(r30)

lbl_80234B28:
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
 * Address:	80234B40
 * Size:	000084
 */
void PlayCommonData::challenge_getHighscore(int, int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r3, r3, 0xc
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r5
	bl       getState__Q24Game21PlayChallengeGameDataFi
	cmpwi    r30, 0
	mr       r31, r3
	li       r0, 0
	blt      lbl_80234B7C
	cmpwi    r30, 1
	bgt      lbl_80234B7C
	li       r0, 1

lbl_80234B7C:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80234BA0
	lis      r3, lbl_80483A88@ha
	lis      r5, lbl_80483AA0@ha
	addi     r3, r3, lbl_80483A88@l
	li       r4, 0x191
	addi     r5, r5, lbl_80483AA0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80234BA0:
	mulli    r3, r30, 0xc
	addi     r3, r3, 4
	add      r3, r31, r3
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
 * Address:	80234BC4
 * Size:	0000C8
 */
PlayChallengeGameData::PlayChallengeGameData(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	stb      r0, 8(r3)
	li       r0, 0x1e
	stw      r0, 0(r3)
	lwz      r30, 0(r3)
	mulli    r3, r30, 0x1c
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q34Game21PlayChallengeGameData11CourseStateFv@ha
	mr       r7, r30
	addi     r4, r4, __ct__Q34Game21PlayChallengeGameData11CourseStateFv@l
	li       r5, 0
	li       r6, 0x1c
	bl       __construct_new_array
	stw      r3, 4(r31)
	li       r0, 0
	mr       r3, r31
	lwz      r5, 4(r31)
	lhz      r4, 0(r5)
	ori      r4, r4, 1
	sth      r4, 0(r5)
	lwz      r5, 4(r31)
	lhz      r4, 0x1c(r5)
	ori      r4, r4, 1
	sth      r4, 0x1c(r5)
	lwz      r5, 4(r31)
	lhz      r4, 0x38(r5)
	ori      r4, r4, 1
	sth      r4, 0x38(r5)
	lwz      r5, 4(r31)
	lhz      r4, 0x54(r5)
	ori      r4, r4, 1
	sth      r4, 0x54(r5)
	lwz      r5, 4(r31)
	lhz      r4, 0x70(r5)
	ori      r4, r4, 1
	sth      r4, 0x70(r5)
	stb      r0, 8(r31)
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
 * Address:	80234C8C
 * Size:	000078
 */
PlayChallengeGameData::CourseState::CourseState(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	li       r6, 0xc
	stw      r0, 0x14(r1)
	li       r0, 0
	li       r7, 2
	stw      r31, 0xc(r1)
	mr       r31, r3
	stb      r0, 0(r3)
	lis      r3, __ct__Q24Game9HighscoreFv@ha
	addi     r4, r3, __ct__Q24Game9HighscoreFv@l
	stb      r0, 1(r31)
	addi     r3, r31, 4
	bl       __construct_array
	addi     r3, r31, 4
	li       r4, 3
	bl       allocate__Q24Game9HighscoreFi
	addi     r3, r31, 0x10
	li       r4, 3
	bl       allocate__Q24Game9HighscoreFi
	li       r0, 0
	mr       r3, r31
	stb      r0, 0(r31)
	stb      r0, 1(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80234D04
 * Size:	0000A4
 */
void PlayChallengeGameData::getState(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0
	blt      lbl_80234D38
	lwz      r0, 0(r30)
	cmpw     r31, r0
	bge      lbl_80234D38
	li       r3, 1

lbl_80234D38:
	clrlwi.  r0, r3, 0x18
	bne      lbl_80234D5C
	lis      r3, lbl_80483A88@ha
	lis      r5, lbl_80483AA0@ha
	addi     r3, r3, lbl_80483A88@l
	li       r4, 0x1ab
	addi     r5, r5, lbl_80483AA0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80234D5C:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_80234D84
	lis      r3, lbl_80483A88@ha
	lis      r5, lbl_80483AA0@ha
	addi     r3, r3, lbl_80483A88@l
	li       r4, 0x1ac
	addi     r5, r5, lbl_80483AA0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80234D84:
	mulli    r0, r31, 0x1c
	lwz      r3, 4(r30)
	add      r3, r3, r0
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
 * Address:	80234DA8
 * Size:	00009C
 */
void PlayChallengeGameData::write(Stream&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r26, r4
	mr       r25, r3
	lbz      r4, 8(r3)
	mr       r3, r26
	bl       writeByte__6StreamFUc
	li       r27, 0
	li       r28, 0
	b        lbl_80234E24

lbl_80234DD8:
	lwz      r0, 4(r25)
	li       r29, 0
	add      r30, r0, r28
	mr       r31, r30

lbl_80234DE8:
	lbz      r4, 0(r31)
	mr       r3, r26
	bl       writeByte__6StreamFUc
	addi     r29, r29, 1
	addi     r31, r31, 1
	cmplwi   r29, 2
	blt      lbl_80234DE8
	mr       r4, r26
	addi     r3, r30, 4
	bl       write__Q24Game9HighscoreFR6Stream
	mr       r4, r26
	addi     r3, r30, 0x10
	bl       write__Q24Game9HighscoreFR6Stream
	addi     r28, r28, 0x1c
	addi     r27, r27, 1

lbl_80234E24:
	lwz      r0, 0(r25)
	cmpw     r27, r0
	blt      lbl_80234DD8
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80234E44
 * Size:	00009C
 */
void PlayChallengeGameData::read(Stream&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r26, r4
	mr       r25, r3
	mr       r3, r26
	bl       readByte__6StreamFv
	stb      r3, 8(r25)
	li       r27, 0
	li       r28, 0
	b        lbl_80234EC0

lbl_80234E74:
	lwz      r0, 4(r25)
	li       r29, 0
	add      r30, r0, r28
	mr       r31, r30

lbl_80234E84:
	mr       r3, r26
	bl       readByte__6StreamFv
	addi     r29, r29, 1
	stb      r3, 0(r31)
	cmplwi   r29, 2
	addi     r31, r31, 1
	blt      lbl_80234E84
	mr       r4, r26
	addi     r3, r30, 4
	bl       read__Q24Game9HighscoreFR6Stream
	mr       r4, r26
	addi     r3, r30, 0x10
	bl       read__Q24Game9HighscoreFR6Stream
	addi     r28, r28, 0x1c
	addi     r27, r27, 1

lbl_80234EC0:
	lwz      r0, 0(r25)
	cmpw     r27, r0
	blt      lbl_80234E74
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80234EE0
 * Size:	000018
 */
void Lowscore::do_higher(int, int)
{
	/*
	xor      r0, r5, r4
	srawi    r3, r0, 1
	and      r0, r0, r5
	subf     r0, r0, r3
	srwi     r3, r0, 0x1f
	blr
	*/
}
} // namespace Game
