#include "types.h"
#include "nans.h"
#include "Game/ChallengeGame.h"
#include "Game/VsGame.h"
#include "Game/BaseGameSection.h"
#include "JSystem/JUT/JUTException.h"

namespace Game {
namespace ChallengeGame {

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
StageData::StageData()
{
	m_pikiContainer.clear();
	sprintf(m_caveInfoFilename, "caveinfo.txt");
	m_timeLimit            = 200.0f;
	m_startNumSpicy        = 0;
	m_startNumBitter       = 0;
	m_floorCounts          = 1;
	_70                    = 0;
	m_stageIndex           = 0;
	m_floorTimerExtentions = nullptr;
}

/*
 * --INFO--
 * Address:	8022D68C
 * Size:	000238
 */
void StageData::read(Stream& stream)
{
	u32 version            = stream.readInt();
	char* caveinfoFilename = stream.readString(nullptr, 0);
	for (int i = 0; i < 64; i++) {
		m_caveInfoFilename[i] = caveinfoFilename[i];
		if (caveinfoFilename[i] == 0)
			break;
	}
	m_pikiContainer.read(stream);
	if (version >= 1) {
		m_timeLimit      = stream.readFloat();
		m_startNumBitter = stream.readInt();
		m_startNumSpicy  = stream.readInt();
	}
	if (version >= 2) {
		m_floorCounts = stream.readInt();
		_70           = stream.readInt(); // unuused otakara num
	}
	if (version >= 3) {
		m_stageIndex = stream.readInt();
	}
	if (version >= 4) {
		m_floorTimerExtentions = new f32[m_floorCounts];
		for (int i = 0; i < m_floorCounts; i++) {
			m_floorTimerExtentions[i] = stream.readFloat();
		}
	} else {
		m_floorTimerExtentions = new f32[m_floorCounts];
		for (int i = 0; i < m_floorCounts; i++) {
			m_floorTimerExtentions[i] = 100.0f;
		}
	}
}

/*
 * --INFO--
 * Address:	8022D8C4
 * Size:	0000B4
 */
StageList::StageList()
{
	m_name = "チャレンジステージ"; // challenge stage
}

/*
 * --INFO--
 * Address:	8022D9D8
 * Size:	00010C
 */
void StageList::read(Stream& stream)
{
	bool b       = (gameSystem) ? gameSystem->m_section->disableAllocHalt() : true;
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
 * Address:	8022DAE4
 * Size:	000084
 */
StageData* StageList::getStageData(int idx)
{
	int childCount = m_stageData.getChildCount();
	JUT_ASSERTLINE(213, 0 <= idx && idx < childCount, "illegal stage index %d\n", idx); // doesn't match if using bounds inclusive
	return static_cast<StageData*>(m_stageData.getChildAt(idx));
}

} // namespace ChallengeGame

namespace VsGame {

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
StageData::StageData()
{
	m_pikiContainer.clear();
	sprintf(m_caveInfoFilename, "caveinfo.txt");
	m_timeLimit      = 200.0f;
	m_startNumSpicy  = 0;
	m_startNumBitter = 0;
	m_index2D        = 0;
	sprintf(m_stageLayoutFilePath, "random");
	m_startNumYellowMarbles = 7;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000284
 */
void StageData::read(Stream& stream)
{
	u32 version            = stream.readInt();
	char* caveinfoFilename = stream.readString(nullptr, 0);
	for (int i = 0; i < 64; i++) {
		m_caveInfoFilename[i] = caveinfoFilename[i];
		if (caveinfoFilename[i] == 0)
			break;
	}
	m_pikiContainer.read(stream);
	m_timeLimit      = stream.readFloat();
	m_startNumBitter = stream.readInt();
	m_startNumSpicy  = stream.readInt();

	if (version >= 2) {
		m_index2D = stream.readInt();
	}
	if (version >= 3) {
		char* layoutFileName = stream.readString(nullptr, 0);
		for (int i = 0; i < 64; i++) {
			m_stageLayoutFilePath[i] = layoutFileName[i];
			if (layoutFileName[i] == 0)
				break;
		}
	}
	if (version >= 4) {
		m_startNumYellowMarbles = stream.readInt();
	}
}

/*
 * --INFO--
 * Address:	8022DB68
 * Size:	0000BC
 */
StageList::StageList()
{
	m_name = "対戦用ステージ"; // battle stage
}

/*
 * --INFO--
 * Address:	8022DC84
 * Size:	000350
 */
void StageList::read(Stream& stream)
{
	bool b       = (gameSystem) ? gameSystem->m_section->disableAllocHalt() : true;
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
 * Address:	8022DFD4
 * Size:	000084
 */
StageData* StageList::getStageData(int idx)
{
	int childCount = m_stageData.getChildCount();
	JUT_ASSERTLINE(427, 0 <= idx && idx < childCount, "illegal stage index %d\n", idx); // doesn't match if using bounds inclusive
	return static_cast<StageData*>(m_stageData.getChildAt(idx));
}

} // namespace VsGame
} // namespace Game
