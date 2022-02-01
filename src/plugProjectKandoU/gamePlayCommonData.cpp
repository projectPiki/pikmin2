#include "Game/BirthMgr.h"
#include "Game/Data.h"
#include "Game/DeathMgr.h"
#include "Game/GameConfig.h"
#include "Game/gamePlayData.h"
#include "JSystem/JUT/JUTException.h"
#include "System.h"
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
PlayCommonData::PlayCommonData()
    : _00(0)
    , m_challengeData()
{
	_04 = new Highscore*[16];
	_08 = new Highscore*[16];
	for (int i = 0; i < 0x10; i++) {
		_04[i] = new Lowscore();
		_08[i] = new Lowscore();
		_04[i]->allocate(3);
		_08[i]->allocate(3);
	}
	reset();
}

/*
 * --INFO--
 * Address:	80234208
 * Size:	000078
 */
void PlayCommonData::reset()
{
	_00 = 0;
	m_challengeData.reset();
	for (int i = 0; i < 0x10; i++) {
		_04[i]->clear();
		_08[i]->clear();
	}
}

/*
 * reset__Q24Game21PlayChallengeGameDataFv
 * --INFO--
 * Address:	80234280
 * Size:	0000C0
 */
void PlayChallengeGameData::reset()
{
	m_flags = PCGDF_Unset;
	for (int i = 0; i < m_courseCount; i++) {
		CourseState* course = &m_courses[i];
		course->m_highscores[0].clear();
		course->m_highscores[1].clear();
		course->m_flags.byteView[0] = 0;
		course->m_flags.byteView[1] = 0;
	}
	m_courses[0].m_flags.typeView |= CourseState::CSF_IsOpen;
	m_courses[1].m_flags.typeView |= CourseState::CSF_IsOpen;
	m_courses[2].m_flags.typeView |= CourseState::CSF_IsOpen;
	m_courses[3].m_flags.typeView |= CourseState::CSF_IsOpen;
	m_courses[4].m_flags.typeView |= CourseState::CSF_IsOpen;
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
 * write__Q24Game14PlayCommonDataFR6Stream
 * --INFO--
 * Address:	80234340
 * Size:	0000A0
 */
void PlayCommonData::write(Stream& output)
{
	output.writeInt(2);
	output.writeByte(_00);
	for (int i = 0; i < 0x10; i++) {
		_04[i]->write(output);
		_08[i]->write(output);
	}
	m_challengeData.write(output);
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
 * read__Q24Game14PlayCommonDataFR6Stream
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
Highscore* PlayCommonData::getHighscore_clear(int index)
{
	bool isValidIndex = false;
	if (0 <= index && index < 0x10) {
		isValidIndex = true;
	}
	P2ASSERTLINE(155, isValidIndex);
	return _04[index];
}

/*
 * --INFO--
 * Address:	80234544
 * Size:	000078
 */
Highscore* PlayCommonData::getHighscore_complete(int index)
{
	bool isValidIndex = false;
	if (0 <= index && index < 0x10) {
		isValidIndex = true;
	}
	P2ASSERTLINE(162, isValidIndex);
	return _08[index];
}

/*
 * --INFO--
 * Address:	802345BC
 * Size:	000038
 */
void PlayCommonData::entryHighscores_clear(int newTotal, int* totals, int* scores)
{
	entryHighscores_common(_04, newTotal, totals, scores);
}

/*
 * --INFO--
 * Address:	802345F4
 * Size:	000038
 */
void PlayCommonData::entryHighscores_complete(int newTotal, int* totals, int* scores)
{
	entryHighscores_common(_08, newTotal, totals, scores);
}

/*
 * --INFO--
 * Address:	8023462C
 * Size:	0000E0
 */
void PlayCommonData::entryHighscores_common(Game::Highscore** highscores, int newTotal, int* totals, int* scores)
{
	totals[0] = newTotal;
	scores[0] = highscores[0]->entryScore(newTotal);
	for (int i = 0; i < 8; i++) {
		totals[i + 1] = DeathMgr::get_total((DeathMgr::CauseOfDeath)i);
		scores[i + 1] = highscores[i + 1]->entryScore(totals[i + 1]);
	}
	for (int i = 0; i < 6; i++) {
		totals[i + 9] = BirthMgr::get_total(i);
		scores[i + 9] = highscores[i + 9]->entryScore(totals[i + 9]);
	}
	CommonSaveData::Mgr* playCommonData = sys->getPlayCommonData();
	int timeTotal                       = playData->calcPlayMinutes() + playCommonData->_1C;
	totals[0xF]                         = timeTotal;
	scores[0xF]                         = highscores[0xF]->entryScore(timeTotal);
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
bool PlayCommonData::isChallengeGamePlayable(void) { return m_challengeData.m_flags & PlayChallengeGameData::PCGDF_IsPlayable; }

/*
 * --INFO--
 * Address:	80234718
 * Size:	00000C
 */
bool PlayCommonData::isLouieRescued(void) { return m_challengeData.m_flags & PlayChallengeGameData::PCGDF_IsLouieRescued; }

/*
 * --INFO--
 * Address:	80234724
 * Size:	00008C
 */
bool PlayCommonData::isPerfectChallenge(void)
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
	m_challengeData.m_flags |= PlayChallengeGameData::PCGDF_IsPlayable;
	sys->setOptionBlockSaveFlag();
}

/*
 * --INFO--
 * Address:	802347E0
 * Size:	000030
 */
void PlayCommonData::enableLouieRescue(void)
{
	m_challengeData.m_flags |= PlayChallengeGameData::PCGDF_IsLouieRescued;
	sys->setOptionBlockSaveFlag();
}

/*
 * --INFO--
 * Address:	80234810
 * Size:	00001C
 */
bool PlayCommonData::challenge_is_virgin(void)
{
	bool result = (u8)(m_challengeData.m_flags & PlayChallengeGameData::PCGDF_IsNotVirgin) == 0;
	m_challengeData.m_flags |= PlayChallengeGameData::PCGDF_IsNotVirgin;
	return result;
}

/*
 * --INFO--
 * Address:	8023482C
 * Size:	000014
 */
bool PlayCommonData::challenge_is_virgin_check_only()
{
	return (u8)(m_challengeData.m_flags & PlayChallengeGameData::PCGDF_IsNotVirgin) == 0;
}

/*
 * --INFO--
 * Address:	80234840
 * Size:	000024
 */
PlayChallengeGameData::CourseState* PlayCommonData::challenge_get_CourseState(int index) { return m_challengeData.getState(index); }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
int PlayCommonData::challenge_get_coursenum()
{
	// UNUSED FUNCTION
	return m_challengeData.m_courseCount;
}

/*
 * --INFO--
 * Address:	80234864
 * Size:	00002C
 */
bool PlayCommonData::challenge_checkOpen(int index)
{
	return challenge_get_CourseState(index)->m_flags.typeView & PlayChallengeGameData::CourseState::CSF_IsOpen;
}

/*
 * --INFO--
 * Address:	80234890
 * Size:	00002C
 */
bool PlayCommonData::challenge_checkClear(int index)
{
	return challenge_get_CourseState(index)->m_flags.typeView & PlayChallengeGameData::CourseState::CSF_IsClear;
}

/*
 * --INFO--
 * Address:	802348BC
 * Size:	00002C
 */
bool PlayCommonData::challenge_checkKunsho(int index)
{
	return challenge_get_CourseState(index)->m_flags.typeView & PlayChallengeGameData::CourseState::CSF_IsKunsho;
}

/*
 * --INFO--
 * Address:	802348E8
 * Size:	00004C
 */
bool PlayCommonData::challenge_checkJustOpen(int index)
{
	PlayChallengeGameData::CourseState* state = challenge_get_CourseState(index);
	u16 flags                                 = state->m_flags.typeView;
	if (flags & PlayChallengeGameData::CourseState::CSF_IsOpen) {
		state->m_flags.typeView |= PlayChallengeGameData::CourseState::CSF_WasOpen;
		return (flags & PlayChallengeGameData::CourseState::CSF_WasOpen) == 0;
	}
	return false;
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
bool PlayCommonData::challenge_checkJustClear(int)
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
bool PlayCommonData::challenge_checkJustKunsho(int)
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
 * Returns the index of the newly-opened course, or -1 if no course was opened.
 * --INFO--
 * Address:	802349CC
 * Size:	000094
 */
int PlayCommonData::challenge_openNewCourse(void)
{
	if (gGameConfig.m_parms.m_KFesVersion.m_data != 0) {
		return -1;
	}
	for (int i = 0; i < m_challengeData.m_courseCount; i++) {
		if (!challenge_checkOpen(i)) {
			challenge_setOpen(i);
			return i;
		}
	}
	return -1;
}

/*
 * --INFO--
 * Address:	80234A60
 * Size:	000030
 */
void PlayCommonData::challenge_setClear(int index)
{
	m_challengeData.getState(index)->m_flags.typeView |= PlayChallengeGameData::CourseState::CSF_IsClear;
}

/*
 * --INFO--
 * Address:	80234A90
 * Size:	000030
 */
void PlayCommonData::challenge_setOpen(int index)
{
	m_challengeData.getState(index)->m_flags.typeView |= PlayChallengeGameData::CourseState::CSF_IsOpen;
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
Highscore* PlayCommonData::challenge_getHighscore(int courseIndex, int scoreType)
{
	PlayChallengeGameData::CourseState* state = m_challengeData.getState(courseIndex);
	bool isValidScoreType                     = false;
	if (0 <= scoreType && scoreType <= 1) {
		isValidScoreType = true;
	}
	P2ASSERTLINE(401, isValidScoreType);
	return &state->m_highscores[scoreType];
}

/*
 * __ct__Q24Game21PlayChallengeGameDataFv
 * --INFO--
 * Address:	80234BC4
 * Size:	0000C8
 */
PlayChallengeGameData::PlayChallengeGameData(void)
    : m_flags(PlayChallengeGameData::PCGDF_Unset)
{
	m_courseCount = CHALLENGE_COURSE_COUNT;
	m_courses     = new CourseState[m_courseCount];
	m_courses[0].m_flags.typeView |= PlayChallengeGameData::CourseState::CSF_IsOpen;
	m_courses[1].m_flags.typeView |= PlayChallengeGameData::CourseState::CSF_IsOpen;
	m_courses[2].m_flags.typeView |= PlayChallengeGameData::CourseState::CSF_IsOpen;
	m_courses[3].m_flags.typeView |= PlayChallengeGameData::CourseState::CSF_IsOpen;
	m_courses[4].m_flags.typeView |= PlayChallengeGameData::CourseState::CSF_IsOpen;
	m_flags = PlayChallengeGameData::PCGDF_Unset;
}

/*
 * __ct__Q34Game21PlayChallengeGameData11CourseStateFv
 * --INFO--
 * Address:	80234C8C
 * Size:	000078
 */
PlayChallengeGameData::CourseState::CourseState(void)
    : m_flags()
    , m_highscores()
{
	m_highscores[0].allocate(3);
	m_highscores[1].allocate(3);
	m_flags.byteView[0] = 0;
	m_flags.byteView[1] = 0;
}

/*
 * --INFO--
 * Address:	80234D04
 * Size:	0000A4
 */
PlayChallengeGameData::CourseState* PlayChallengeGameData::getState(int index)
{
	bool isValidIndex = false;
	if (0 <= index && index < m_courseCount) {
		isValidIndex = true;
	}
	P2ASSERTLINE(427, isValidIndex);
	P2ASSERTLINE(428, m_courses != nullptr);
	return &m_courses[index];
}

/*
 * write__Q24Game21PlayChallengeGameDataFR6Stream
 * --INFO--
 * Address:	80234DA8
 * Size:	00009C
 */
void PlayChallengeGameData::write(Stream& output)
{
	output.writeByte(m_flags);
	for (int i = 0; i < m_courseCount; i++) {
		CourseState* state = &m_courses[i];
		for (int j = 0; j < 2; j++) {
			output.writeByte(state->m_flags.byteView[j]);
		}
		state->m_highscores[0].write(output);
		state->m_highscores[1].write(output);
	}
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
 * read__Q24Game21PlayChallengeGameDataFR6Stream
 * --INFO--
 * Address:	80234E44
 * Size:	00009C
 */
void PlayChallengeGameData::read(Stream& input)
{
	m_flags = input.readByte();
	for (int i = 0; i < m_courseCount; i++) {
		CourseState* state = &m_courses[i];
		for (int j = 0; j < 2; j++) {
			state->m_flags.byteView[j] = input.readByte();
		}
		state->m_highscores[0].read(input);
		state->m_highscores[1].read(input);
	}
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
bool Lowscore::do_higher(int a, int b) { return a < b; }
} // namespace Game
