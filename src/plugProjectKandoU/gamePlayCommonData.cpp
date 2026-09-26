#include "Game/BirthMgr.h"
#include "Game/Data.h"
#include "Game/DeathMgr.h"
#include "Game/GameConfig.h"
#include "Game/gamePlayData.h"
#include "P2Macros.h"
#include "System.h"

namespace Game {

/**
 * @note Address: 0x8023410C
 * @note Size: 0xFC
 */
PlayCommonData::PlayCommonData()
{
	mHiScoreClear    = new Highscore*[GAME_HIGHSCORE_COUNT];
	mHiScoreComplete = new Highscore*[GAME_HIGHSCORE_COUNT];

	for (int i = 0; i < GAME_HIGHSCORE_COUNT; i++) {
		mHiScoreClear[i]    = new Lowscore(); // Lowscore means lower value gets a higher rank
		mHiScoreComplete[i] = new Lowscore();
		mHiScoreClear[i]->allocate(GAME_HIGHSCORE_RANK_NUM); // allocate 3 ranks for every score
		mHiScoreComplete[i]->allocate(GAME_HIGHSCORE_RANK_NUM);
	}
	reset();
}

/**
 * @note Address: 0x80234208
 * @note Size: 0x78
 */
void PlayCommonData::reset()
{
	mCommonStoryFlags.clear();
	mChallengeData.reset();
	for (int i = 0; i < GAME_HIGHSCORE_COUNT; i++) {
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
	mGlobalFlags.clear();

	// clear flags for all challenge mode levels
	for (int i = 0; i < mCourseCount; i++) {
		mCourses[i].clear();
	}

	// after resetting, make sure the first 5 challenge mode levels are still open
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
	// save version is 2, see PlayCommonData::read for more
	output.writeInt(2);

	mCommonStoryFlags.writeBytes(output);
	for (int i = 0; i < GAME_HIGHSCORE_COUNT; i++) {
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
	u32 version = stream.readInt();
	mCommonStoryFlags.readBytes(stream);

	if (version >= 2) {
		// version 2 added one extra score
		for (int i = 0; i < GAME_HIGHSCORE_COUNT; i++) {
			mHiScoreClear[i]->read(stream);
			mHiScoreComplete[i]->read(stream);
		}
	} else if (version <= 1) {
		// version 0 and 1 use this, has one less score tracked
		for (int i = 0; i < (GAME_HIGHSCORE_COUNT - 1); i++) {
			mHiScoreClear[i]->read(stream);
			mHiScoreComplete[i]->read(stream);
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
	P2ASSERTBOUNDSLINE(155, 0, index, GAME_HIGHSCORE_COUNT);
	return mHiScoreClear[index];
}

/**
 * @note Address: 0x80234544
 * @note Size: 0x78
 */
Highscore* PlayCommonData::getHighscore_complete(int index)
{
	P2ASSERTBOUNDSLINE(162, 0, index, GAME_HIGHSCORE_COUNT);
	return mHiScoreComplete[index];
}

/**
 * @note Address: 0x802345BC
 * @note Size: 0x38
 */
void PlayCommonData::entryHighscores_clear(int day, int* totals, int* scores)
{
	// high scores set when repaying debt
	entryHighscores_common(mHiScoreClear, day, totals, scores);
}

/**
 * @note Address: 0x802345F4
 * @note Size: 0x38
 */
void PlayCommonData::entryHighscores_complete(int day, int* totals, int* scores)
{
	// high scores set when collecting all treasures
	entryHighscores_common(mHiScoreComplete, day, totals, scores);
}

/**
 * @note Address: 0x8023462C
 * @note Size: 0xE0
 */
void PlayCommonData::entryHighscores_common(Game::Highscore** highscores, int day, int* totals, int* scores)
{
	// high score for days taken to complete, passed into the function instead of being determined here
	Highscore* startHighScore = highscores[0];
	totals[0]                 = day;
	scores[0]                 = startHighScore->entryScore(day);

	// pikmin lost records (all sources)
	for (int i = 0; i < DeathCounter::COD_SourceCount + 1; i++) {
		int j                    = i + 1;
		Highscore* currHighScore = highscores[j];
		totals[j]                = DeathMgr::get_total(i);
		scores[j]                = currHighScore->entryScore(totals[j]);
	}
	// pikmin born records (five types + all)
	for (int i = 0; i < 6; i++) {
		int j                    = i + 9;
		Highscore* currHighScore = highscores[j];
		totals[j]                = BirthMgr::get_total(i);
		scores[j]                = currHighScore->entryScore(totals[j]);
	}

	// total play time is calculated as the time last ready from the memory card plus the current time
	Highscore* timeScore                = highscores[15];
	CommonSaveData::Mgr* playCommonData = sys->getCommonDataMgr();
	int timeTotal                       = playData->calcPlayMinutes();
	timeTotal += playCommonData->mTime;
	totals[15] = timeTotal;
	scores[15] = timeScore->entryScore(timeTotal);
}

/**
 * @note Address: 0x8023470C
 * @note Size: 0xC
 */
bool PlayCommonData::isChallengeGamePlayable()
{
	return mChallengeData.mGlobalFlags.isSet(PlayChallengeGameData::PCGDF_IsPlayable);
}

/**
 * @note Address: 0x80234718
 * @note Size: 0xC
 */
bool PlayCommonData::isLouieRescued()
{
	return mChallengeData.mGlobalFlags.isSet(PlayChallengeGameData::PCGDF_IsLouieRescued);
}

/**
 * @note Address: 0x80234724
 * @note Size: 0x8C
 */
bool PlayCommonData::isPerfectChallenge()
{
	// if the Louie's Dark Secret flag is already set, don't bother running this function
	if (mCommonStoryFlags.isSet(CommonData_LouieDarkSecret)) {
		return true;
	}

	// if any stage doesnt have the perfect flag set, return false
	for (int i = 0; i < mChallengeData.mCourseCount; i++) {
		PlayChallengeGameData::CourseState* state = mChallengeData.getState(i);
		if (!state->mFlags.isSet(PlayChallengeGameData::CourseState::CSF_IsKunsho)) {
			return false;
		}
	}

	// Unlock Louie's Dark Secret
	mCommonStoryFlags.set(CommonData_LouieDarkSecret);
	return true;
}

/**
 * @note Address: 0x802347B0
 * @note Size: 0x30
 */
void PlayCommonData::enableChallengeGame()
{
	mChallengeData.mGlobalFlags.set(PlayChallengeGameData::PCGDF_IsPlayable);
	sys->setOptionBlockSaveFlag();
}

/**
 * @note Address: 0x802347E0
 * @note Size: 0x30
 */
void PlayCommonData::enableLouieRescue()
{
	mChallengeData.mGlobalFlags.set(PlayChallengeGameData::PCGDF_IsLouieRescued);
	sys->setOptionBlockSaveFlag();
}

/**
 * @note Address: 0x80234810
 * @note Size: 0x1C
 */
bool PlayCommonData::challenge_is_virgin()
{
	bool result = !mChallengeData.mGlobalFlags.isSet(PlayChallengeGameData::PCGDF_IsNotVirgin);
	mChallengeData.mGlobalFlags.set(PlayChallengeGameData::PCGDF_IsNotVirgin);
	return result;
}

/**
 * @note Address: 0x8023482C
 * @note Size: 0x14
 */
bool PlayCommonData::challenge_is_virgin_check_only()
{
	return !mChallengeData.mGlobalFlags.isSet(PlayChallengeGameData::PCGDF_IsNotVirgin);
}

/**
 * @note Address: 0x80234840
 * @note Size: 0x24
 */
PlayChallengeGameData::CourseState* PlayCommonData::challenge_get_CourseState(int index)
{
	return mChallengeData.getState(index);
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
int PlayCommonData::challenge_get_coursenum()
{
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
	// if a stage is opened, set a flag saying that the opened status is no longer new
	if (state->mFlags.isSet(PlayChallengeGameData::CourseState::CSF_IsOpen)) {
		state->mFlags.set(PlayChallengeGameData::CourseState::CSF_WasOpen);

		// check if the flag we just set was already set beforehand
		return !(flags & PlayChallengeGameData::CourseState::CSF_WasOpen);
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
	// if a stage is cleared, set a flag saying that the cleared status is no longer new
	if (state->mFlags.isSet(PlayChallengeGameData::CourseState::CSF_IsClear)) {
		state->mFlags.set(PlayChallengeGameData::CourseState::CSF_WasClear);

		// check if the flag we just set was already set beforehand
		return !(flags & PlayChallengeGameData::CourseState::CSF_WasClear);
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
	// if a stage is perfect, set a flag saying that the perfect status is no longer new
	if (state->mFlags.isSet(PlayChallengeGameData::CourseState::CSF_IsKunsho)) {
		state->mFlags.set(PlayChallengeGameData::CourseState::CSF_WasKunsho);

		// check if the flag we just set was already set beforehand
		return !(flags & PlayChallengeGameData::CourseState::CSF_WasKunsho);
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
	// dont unlock additional stages in KFes mode
	if (gGameConfig.mParms.mKFesVersion.mData != 0) {
		return -1;
	}

	// find the first stage to not be unlocked and unlock it
	// abort after that, returning the index of the unlocked stage
	for (int i = 0; i < challenge_get_coursenum(); i++) {
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
	challenge_get_CourseState(index)->mFlags.set(PlayChallengeGameData::CourseState::CSF_IsClear);
}

/**
 * @note Address: 0x80234A90
 * @note Size: 0x30
 */
void PlayCommonData::challenge_setOpen(int index)
{
	challenge_get_CourseState(index)->mFlags.set(PlayChallengeGameData::CourseState::CSF_IsOpen);
}

/**
 * @note Address: 0x80234AC0
 * @note Size: 0x80
 */
void PlayCommonData::challenge_setKunsho(int index)
{
	// mark the stage as perfect
	challenge_get_CourseState(index)->mFlags.set(PlayChallengeGameData::CourseState::CSF_IsKunsho);

	// run through all courses and check if all are perfect
	for (int idx = 0; idx < challenge_get_coursenum(); idx++) {
		if (!challenge_get_CourseState(idx)->mFlags.isSet(PlayChallengeGameData::CourseState::CSF_IsKunsho)) {
			return;
		}
	}

	// if we got here, all stages are perfect, so unlock Louie's Dark Secret
	mCommonStoryFlags.set(CommonData_LouieDarkSecret);
}

/**
 * @note Address: 0x80234B40
 * @note Size: 0x84
 */
Highscore* PlayCommonData::challenge_getHighscore(int courseIndex, int scoreType)
{
	PlayChallengeGameData::CourseState* state = challenge_get_CourseState(courseIndex);
	P2ASSERTBOUNDSINCLUSIVELINE(401, 0, scoreType, 1);
	return &state->mHighscores[scoreType];
}

/**
 * __ct__Q24Game21PlayChallengeGameDataFv
 * @note Address: 0x80234BC4
 * @note Size: 0xC8
 */
PlayChallengeGameData::PlayChallengeGameData()
    : mGlobalFlags()
{
	mCourseCount = CHALLENGE_COURSE_COUNT;
	mCourses     = new CourseState[mCourseCount];

	// set the first 5 challenge mode stages to be unlocked by default
	for (int i = 0; i < 5; i++) {
		mCourses[i].mFlags.set(PlayChallengeGameData::CourseState::CSF_IsOpen);
	}
	mGlobalFlags.clear();
}

/**
 * @note Address: 0x80234D04
 * @note Size: 0xA4
 */
PlayChallengeGameData::CourseState* PlayChallengeGameData::getState(int index)
{
	P2ASSERTBOUNDSLINE(427, 0, index, mCourseCount);
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
	mGlobalFlags.writeBytes(output);
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
	mGlobalFlags.readBytes(input);
	for (int i = 0; i < mCourseCount; i++) {
		mCourses[i].read(input);
	}
}

} // namespace Game
