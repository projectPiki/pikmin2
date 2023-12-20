#include "Game/BirthMgr.h"
#include "Game/Data.h"
#include "Game/DeathMgr.h"
#include "Game/GameConfig.h"
#include "Game/gamePlayData.h"
#include "P2Macros.h"
#include "System.h"
#include "types.h"

namespace Game {

/**
 * @note Address: 0x8023410C
 * @note Size: 0xFC
 */
PlayCommonData::PlayCommonData()
    : mChallengeFlags()
    , mChallengeData()
{
	mHiScoreClear    = new Highscore*[16];
	mHiScoreComplete = new Highscore*[16];
	for (int i = 0; i < 0x10; i++) {
		mHiScoreClear[i]    = new Lowscore();
		mHiScoreComplete[i] = new Lowscore();
		mHiScoreClear[i]->allocate(3);
		mHiScoreComplete[i]->allocate(3);
	}
	reset();
}

/**
 * @note Address: 0x80234208
 * @note Size: 0x78
 */
void PlayCommonData::reset()
{
	mChallengeFlags.clear();
	mChallengeData.reset();
	for (int i = 0; i < 0x10; i++) {
		mHiScoreClear[i]->clear();
		mHiScoreComplete[i]->clear();
	}
}

/**
 * reset__Q24Game21PlayChallengeGameDataFv
 * @note Address: 0x80234280
 * @note Size: 0xC0
 */
void PlayChallengeGameData::reset()
{
	mFlags.clear();
	for (int i = 0; i < mCourseCount; i++) {
		mCourses[i].clear();
	}
	for (int i = 0; i < 5; i++) {
		mCourses[i].mFlags.set(CourseState::CSF_IsOpen);
	}
}

/**
 * write__Q24Game14PlayCommonDataFR6Stream
 * @note Address: 0x80234340
 * @note Size: 0xA0
 */
void PlayCommonData::write(Stream& output)
{
	output.writeInt(2);
	output.writeBytes(&mChallengeFlags.typeView, 1);
	for (int i = 0; i < 0x10; i++) {
		mHiScoreClear[i]->write(output);
		mHiScoreComplete[i]->write(output);
	}
	mChallengeData.write(output);
}

/**
 * read__Q24Game14PlayCommonDataFR6Stream
 * @note Address: 0x802343E0
 * @note Size: 0xEC
 */
void PlayCommonData::read(Stream& stream)
{
	u32 fileInt              = stream.readInt();
	u8 fileByte              = stream.readByte();
	mChallengeFlags.typeView = fileByte;
	if (fileInt >= 2) {
		for (int i = 0; i < 0x10; i++) {
			mHiScoreClear[i]->read(stream);
			mHiScoreComplete[i]->read(stream);
		}
	} else {
		if (fileInt <= 1) {
			for (int i = 0; i < 0xf; i++) {
				mHiScoreClear[i]->read(stream);
				mHiScoreComplete[i]->read(stream);
			}
		}
	}
	mChallengeData.read(stream);
}

/**
 * @note Address: 0x802344CC
 * @note Size: 0x78
 */
Highscore* PlayCommonData::getHighscore_clear(int index)
{
	bool isValidIndex = false;
	if (0 <= index && index < 0x10) {
		isValidIndex = true;
	}
	P2ASSERTLINE(155, isValidIndex);
	return mHiScoreClear[index];
}

/**
 * @note Address: 0x80234544
 * @note Size: 0x78
 */
Highscore* PlayCommonData::getHighscore_complete(int index)
{
	bool isValidIndex = false;
	if (0 <= index && index < 0x10) {
		isValidIndex = true;
	}
	P2ASSERTLINE(162, isValidIndex);
	return mHiScoreComplete[index];
}

/**
 * @note Address: 0x802345BC
 * @note Size: 0x38
 */
void PlayCommonData::entryHighscores_clear(int newTotal, int* totals, int* scores)
{
	entryHighscores_common(mHiScoreClear, newTotal, totals, scores);
}

/**
 * @note Address: 0x802345F4
 * @note Size: 0x38
 */
void PlayCommonData::entryHighscores_complete(int newTotal, int* totals, int* scores)
{
	entryHighscores_common(mHiScoreComplete, newTotal, totals, scores);
}

/**
 * @note Address: 0x8023462C
 * @note Size: 0xE0
 */
void PlayCommonData::entryHighscores_common(Game::Highscore** highscores, int newTotal, int* totals, int* scores)
{
	Highscore* startHighScore = highscores[0];
	totals[0]                 = newTotal;
	scores[0]                 = startHighScore->entryScore(newTotal);
	for (int i = 0; i < 8; i++) {
		int j                    = i + 1;
		Highscore* currHighScore = highscores[j];
		totals[j]                = DeathMgr::get_total(i);
		scores[j]                = currHighScore->entryScore(totals[j]);
	}
	for (int i = 0; i < 6; i++) {
		int j                    = i + 9;
		Highscore* currHighScore = highscores[j];
		totals[j]                = BirthMgr::get_total(i);
		scores[j]                = currHighScore->entryScore(totals[j]);
	}

	Highscore* finalHighScore           = highscores[15];
	CommonSaveData::Mgr* playCommonData = sys->getCommonDataMgr();
	int timeTotal                       = playData->calcPlayMinutes();
	timeTotal += playCommonData->mTime;
	totals[15] = timeTotal;
	scores[15] = finalHighScore->entryScore(timeTotal);
}

/**
 * @note Address: 0x8023470C
 * @note Size: 0xC
 */
bool PlayCommonData::isChallengeGamePlayable() { return mChallengeData.mFlags.isSet(PlayChallengeGameData::PCGDF_IsPlayable); }

/**
 * @note Address: 0x80234718
 * @note Size: 0xC
 */
bool PlayCommonData::isLouieRescued() { return mChallengeData.mFlags.isSet(PlayChallengeGameData::PCGDF_IsLouieRescued); }

/**
 * @note Address: 0x80234724
 * @note Size: 0x8C
 */
bool PlayCommonData::isPerfectChallenge()
{
	if ((mChallengeFlags.isSet(4))) {
		return true;
	}
	for (int i = 0; i < mChallengeData.mCourseCount; i++) {
		u16* state = (u16*)mChallengeData.getState(i);
		if ((*state & 4) == 0) {
			return false;
		}
	}
	mChallengeFlags.set(4);
	return true;
}

/**
 * @note Address: 0x802347B0
 * @note Size: 0x30
 */
void PlayCommonData::enableChallengeGame()
{
	mChallengeData.mFlags.set(PlayChallengeGameData::PCGDF_IsPlayable);
	sys->setOptionBlockSaveFlag();
}

/**
 * @note Address: 0x802347E0
 * @note Size: 0x30
 */
void PlayCommonData::enableLouieRescue()
{
	mChallengeData.mFlags.set(PlayChallengeGameData::PCGDF_IsLouieRescued);
	sys->setOptionBlockSaveFlag();
}

/**
 * @note Address: 0x80234810
 * @note Size: 0x1C
 */
bool PlayCommonData::challenge_is_virgin()
{
	bool result = !mChallengeData.mFlags.isSet(PlayChallengeGameData::PCGDF_IsNotVirgin);
	mChallengeData.mFlags.set(PlayChallengeGameData::PCGDF_IsNotVirgin);
	return result;
}

/**
 * @note Address: 0x8023482C
 * @note Size: 0x14
 */
bool PlayCommonData::challenge_is_virgin_check_only() { return !mChallengeData.mFlags.isSet(PlayChallengeGameData::PCGDF_IsNotVirgin); }

/**
 * @note Address: 0x80234840
 * @note Size: 0x24
 */
PlayChallengeGameData::CourseState* PlayCommonData::challenge_get_CourseState(int index) { return mChallengeData.getState(index); }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
int PlayCommonData::challenge_get_coursenum()
{
	// UNUSED FUNCTION
	return mChallengeData.mCourseCount;
}

/**
 * @note Address: 0x80234864
 * @note Size: 0x2C
 */
bool PlayCommonData::challenge_checkOpen(int index)
{
	return challenge_get_CourseState(index)->mFlags.isSet(PlayChallengeGameData::CourseState::CSF_IsOpen);
}

/**
 * @note Address: 0x80234890
 * @note Size: 0x2C
 */
bool PlayCommonData::challenge_checkClear(int index)
{
	return challenge_get_CourseState(index)->mFlags.isSet(PlayChallengeGameData::CourseState::CSF_IsClear);
}

/**
 * @note Address: 0x802348BC
 * @note Size: 0x2C
 */
bool PlayCommonData::challenge_checkKunsho(int index)
{
	return challenge_get_CourseState(index)->mFlags.isSet(PlayChallengeGameData::CourseState::CSF_IsKunsho);
}

/**
 * @note Address: 0x802348E8
 * @note Size: 0x4C
 */
bool PlayCommonData::challenge_checkJustOpen(int index)
{
	PlayChallengeGameData::CourseState* state = challenge_get_CourseState(index);
	u16 flags                                 = state->mFlags.typeView;
	if (IS_FLAG(flags, PlayChallengeGameData::CourseState::CSF_IsOpen)) {
		SET_FLAG(state->mFlags.typeView, PlayChallengeGameData::CourseState::CSF_WasOpen);
		return !(IS_FLAG(flags, PlayChallengeGameData::CourseState::CSF_WasOpen));
	}
	return false;
}

/**
 * @note Address: 0x80234934
 * @note Size: 0x4C
 */
bool PlayCommonData::challenge_checkJustClear(int index)
{
	PlayChallengeGameData::CourseState* state = challenge_get_CourseState(index);
	u16 flags                                 = state->mFlags.typeView;
	if (IS_FLAG(flags, PlayChallengeGameData::CourseState::CSF_IsClear)) {
		SET_FLAG(state->mFlags.typeView, PlayChallengeGameData::CourseState::CSF_WasClear);
		return !(IS_FLAG(flags, PlayChallengeGameData::CourseState::CSF_WasClear));
	}
	return false;
}

/**
 * @note Address: 0x80234980
 * @note Size: 0x4C
 */
bool PlayCommonData::challenge_checkJustKunsho(int index)
{
	PlayChallengeGameData::CourseState* state = challenge_get_CourseState(index);
	u16 flags                                 = state->mFlags.typeView;
	if (IS_FLAG(flags, PlayChallengeGameData::CourseState::CSF_IsKunsho)) {
		SET_FLAG(state->mFlags.typeView, PlayChallengeGameData::CourseState::CSF_WasKunsho);
		return !(IS_FLAG(flags, PlayChallengeGameData::CourseState::CSF_WasKunsho));
	}
	return false;
}

/**
 * Returns the index of the newly-opened course, or -1 if no course was opened.
 * @note Address: 0x802349CC
 * @note Size: 0x94
 */
int PlayCommonData::challenge_openNewCourse()
{
	if (gGameConfig.mParms.mKFesVersion.mData != 0) {
		return -1;
	}
	for (int i = 0; i < mChallengeData.mCourseCount; i++) {
		if (!challenge_checkOpen(i)) {
			challenge_setOpen(i);
			return i;
		}
	}
	return -1;
}

/**
 * @note Address: 0x80234A60
 * @note Size: 0x30
 */
void PlayCommonData::challenge_setClear(int index)
{
	SET_FLAG(mChallengeData.getState(index)->mFlags.typeView, PlayChallengeGameData::CourseState::CSF_IsClear);
}

/**
 * @note Address: 0x80234A90
 * @note Size: 0x30
 */
void PlayCommonData::challenge_setOpen(int index)
{
	SET_FLAG(mChallengeData.getState(index)->mFlags.typeView, PlayChallengeGameData::CourseState::CSF_IsOpen);
}

/**
 * @note Address: 0x80234AC0
 * @note Size: 0x80
 */
void PlayCommonData::challenge_setKunsho(int index)
{
	SET_FLAG(challenge_get_CourseState(index)->mFlags.typeView, PlayChallengeGameData::CourseState::CSF_IsKunsho);
	for (int idx = 0; idx < mChallengeData.mCourseCount; idx++) {
		if (!(IS_FLAG(challenge_get_CourseState(idx)->mFlags.typeView, PlayChallengeGameData::CourseState::CSF_IsKunsho))) {
			return;
		}
	}
	mChallengeFlags.set(4);
}

/**
 * @note Address: 0x80234B40
 * @note Size: 0x84
 */
Highscore* PlayCommonData::challenge_getHighscore(int courseIndex, int scoreType)
{
	PlayChallengeGameData::CourseState* state = mChallengeData.getState(courseIndex);
	bool isValidScoreType                     = false;
	if (0 <= scoreType && scoreType <= 1) {
		isValidScoreType = true;
	}
	P2ASSERTLINE(401, isValidScoreType);
	return &state->mHighscores[scoreType];
}

/**
 * __ct__Q24Game21PlayChallengeGameDataFv
 * @note Address: 0x80234BC4
 * @note Size: 0xC8
 */
PlayChallengeGameData::PlayChallengeGameData()
    : mFlags()
{
	mCourseCount = CHALLENGE_COURSE_COUNT;
	mCourses     = new CourseState[mCourseCount];
	for (int i = 0; i < 5; i++) {
		mCourses[i].mFlags.typeView |= PlayChallengeGameData::CourseState::CSF_IsOpen;
	}
	mFlags.clear();
}

/**
 * @note Address: 0x80234D04
 * @note Size: 0xA4
 */
PlayChallengeGameData::CourseState* PlayChallengeGameData::getState(int index)
{
	bool isValidIndex = false;
	if (0 <= index && index < mCourseCount) {
		isValidIndex = true;
	}
	P2ASSERTLINE(427, isValidIndex);
	P2ASSERTLINE(428, mCourses != nullptr);
	return &mCourses[index];
}

/**
 * write__Q24Game21PlayChallengeGameDataFR6Stream
 * @note Address: 0x80234DA8
 * @note Size: 0x9C
 */
void PlayChallengeGameData::write(Stream& output)
{
	output.writeByte(mFlags.typeView);
	for (int i = 0; i < mCourseCount; i++) {
		mCourses[i].write(output);
	}
}

/**
 * read__Q24Game21PlayChallengeGameDataFR6Stream
 * @note Address: 0x80234E44
 * @note Size: 0x9C
 */
void PlayChallengeGameData::read(Stream& input)
{
	mFlags.typeView = input.readByte();
	for (int i = 0; i < mCourseCount; i++) {
		mCourses[i].read(input);
	}
}

} // namespace Game
