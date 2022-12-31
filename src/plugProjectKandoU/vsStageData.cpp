#include "types.h"
#include "nans.h"
#include "Game/ChallengeGame.h"
#include "Game/VsGame.h"
#include "Game/BaseGameSection.h"
#include "JSystem/JUT/JUTException.h"

namespace Game {

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
ChallengeGame::StageData::StageData(void)
{
	m_pikiContainer.clear();
	sprintf(m_caveInfoFilename, "caveinfo.txt");
	m_timeLimit = 200.0f;
	m_startNumSpicy = 0;
	m_startNumBitter = 0;
	m_floorCounts = 1;
	_70 = 0;
	m_stageIndex = 0;
	m_floorTimerExtentions = nullptr;
}

/*
 * --INFO--
 * Address:	8022D68C
 * Size:	000238
 */
void ChallengeGame::StageData::read(Stream& stream)
{
	u32 version = stream.readInt(); 
	char* caveinfoFilename = stream.readString(nullptr, 0);
	for (int i = 0; i < 64; i++) {
		m_caveInfoFilename[i] = caveinfoFilename[i];
		if (caveinfoFilename[i] == 0) break;
	}
	m_pikiContainer.read(stream);
	if (version >= 1) {
		m_timeLimit = stream.readFloat();
		m_startNumBitter = stream.readInt();
		m_startNumSpicy = stream.readInt();
	}
	if (version >= 2) {
		m_floorCounts = stream.readInt();
		_70 = stream.readInt(); // unuused otakara num
	}
	if (version >= 3) {
		m_stageIndex = stream.readInt();
	}
	if (version >= 4) {
		m_floorTimerExtentions = new f32[m_floorCounts];
		for (int i = 0; i < m_floorCounts; i++) {
			m_floorTimerExtentions[i] = stream.readFloat();
		}
	}
	else {
		m_floorTimerExtentions = new f32[m_floorCounts];
		for (int i = 0; i < m_floorCounts; i++) {
			m_floorTimerExtentions[i] = 100.0f;
		}
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001DC
 */
void ChallengeGame::StageData::write(Stream&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8022D8C4
 * Size:	0000B4
 */
ChallengeGame::StageList::StageList(void)
{
	m_name = "チャレンジステージ"; // challenge stage
}

/*
 * --INFO--
 * Address:	8022D978
 * Size:	000060
 */
ChallengeGame::StageData::~StageData(void)
{

}

/*
 * --INFO--
 * Address:	8022D9D8
 * Size:	00010C
 */
void ChallengeGame::StageList::read(Stream& stream)
{
	bool b = (gameSystem) ? gameSystem->m_section->disableAllocHalt() : true;
	s32 stageNum = stream.readInt();
	for (int i = 0; i < stageNum; i++) {
		StageData* currStageData = new StageData;
		currStageData->read(stream);
		m_stageData.add(currStageData);
	}
	if (gameSystem && b) {
		gameSystem->m_section->enableAllocHalt();
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void ChallengeGame::StageList::write(Stream&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8022DAE4
 * Size:	000084
 */
ChallengeGame::StageData* ChallengeGame::StageList::getStageData(int idx)
{
	int childCount = m_stageData.getChildCount();
	JUT_ASSERTLINE(213, 0  <= idx && idx < childCount, "illegal stage index %d\n", idx); // doesn't match if using bounds inclusive
	return static_cast<ChallengeGame::StageData*>(m_stageData.getChildAt(idx));
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
VsGame::StageData::StageData(void)
{
	m_pikiContainer.clear();
	sprintf(m_caveInfoFilename, "caveinfo.txt");
	m_timeLimit = 200.0f;
	m_startNumSpicy = 0;
	m_startNumBitter = 0;
	m_index2D = 0;
	sprintf(m_stageLayoutFilePath, "random");
	m_startNumYellowMarbles = 7;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000284
 */
void VsGame::StageData::read(Stream& stream)
{
	u32 version = stream.readInt(); 
	char* caveinfoFilename = stream.readString(nullptr, 0);
	for (int i = 0; i < 64; i++) {
		m_caveInfoFilename[i] = caveinfoFilename[i];
		if (caveinfoFilename[i] == 0) break;
	}
	m_pikiContainer.read(stream);
	m_timeLimit = stream.readFloat();
	m_startNumBitter = stream.readInt();
	m_startNumSpicy = stream.readInt();

	if (version >= 2) {
		m_index2D = stream.readInt();
	}
	if (version >= 3) {
		char* layoutFileName = stream.readString(nullptr, 0);
		for (int i = 0; i < 64; i++) {
			m_stageLayoutFilePath[i] = layoutFileName[i];
		if (layoutFileName[i] == 0) break;
		}
	}
	if (version >= 4) {
		m_startNumYellowMarbles = stream.readInt();
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	00019C
 */
void VsGame::StageData::write(Stream&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8022DB68
 * Size:	0000BC
 */
VsGame::StageList::StageList(void)
{
	m_name = "対戦用ステージ"; // battle stage
}

/*
 * --INFO--
 * Address:	8022DC24
 * Size:	000060
 */
VsGame::StageData::~StageData(void)
{
	
}

/*
 * --INFO--
 * Address:	8022DC84
 * Size:	000350
 */
void VsGame::StageList::read(Stream& stream)
{
	bool b = (gameSystem) ? gameSystem->m_section->disableAllocHalt() : true;
	s32 stageNum = stream.readInt();
	for (int i = 0; i < stageNum; i++) {
		StageData* currStageData = new StageData;
		currStageData->read(stream);
		m_stageData.add(currStageData);
	}
	if (gameSystem && b) {
		gameSystem->m_section->enableAllocHalt();
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001F8
 */
void VsGame::StageList::write(Stream&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8022DFD4
 * Size:	000084
 */
VsGame::StageData* VsGame::StageList::getStageData(int idx)
{
	int childCount = m_stageData.getChildCount();
	JUT_ASSERTLINE(427, 0  <= idx && idx < childCount, "illegal stage index %d\n", idx); // doesn't match if using bounds inclusive
	return static_cast<StageData*>(m_stageData.getChildAt(idx));
}

/*
 * --INFO--
 * Address:	8022E058
 * Size:	000084
 */
VsGame::StageList::~StageList(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8022E0C0
	lis      r3, __vt__Q34Game6VsGame9StageList@ha
	addic.   r0, r30, 0x18
	addi     r0, r3, __vt__Q34Game6VsGame9StageList@l
	stw      r0, 0(r30)
	beq      lbl_8022E0A4
	lis      r4, __vt__Q34Game6VsGame9StageData@ha
	addi     r3, r30, 0x18
	addi     r0, r4, __vt__Q34Game6VsGame9StageData@l
	li       r4, 0
	stw      r0, 0x18(r30)
	bl       __dt__5CNodeFv

lbl_8022E0A4:
	mr       r3, r30
	li       r4, 0
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_8022E0C0
	mr       r3, r30
	bl       __dl__FPv

lbl_8022E0C0:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8022E0DC
 * Size:	000084
 */
ChallengeGame::StageList::~StageList(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8022E144
	lis      r3, __vt__Q34Game13ChallengeGame9StageList@ha
	addic.   r0, r30, 0x18
	addi     r0, r3, __vt__Q34Game13ChallengeGame9StageList@l
	stw      r0, 0(r30)
	beq      lbl_8022E128
	lis      r4, __vt__Q34Game13ChallengeGame9StageData@ha
	addi     r3, r30, 0x18
	addi     r0, r4, __vt__Q34Game13ChallengeGame9StageData@l
	li       r4, 0
	stw      r0, 0x18(r30)
	bl       __dt__5CNodeFv

lbl_8022E128:
	mr       r3, r30
	li       r4, 0
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_8022E144
	mr       r3, r30
	bl       __dl__FPv

lbl_8022E144:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8022E160
 * Size:	000028
 */
void __sinit_vsStageData_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804C10F0@ha
	stw      r0, lbl_80515C80@sda21(r13)
	stfsu    f0, lbl_804C10F0@l(r3)
	stfs     f0, lbl_80515C84@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
