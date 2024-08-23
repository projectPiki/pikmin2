#ifndef _GAME_PLAYCOMMONDATA_H
#define _GAME_PLAYCOMMONDATA_H

#include "BitFlag.h"
#include "types.h"
#include "Game/Highscore.h"

#pragma enumsalwaysint off

namespace Game {
struct PlayChallengeGameData {
	enum Flags {
		PCGDF_Unset          = 0x0,
		PCGDF_IsPlayable     = 0x1,
		PCGDF_IsNotVirgin    = 0x2,
		PCGDF_IsLouieRescued = 0x4,
	};

	struct CourseState {
		enum Flags {
			CSF_Unset     = 0x00,
			CSF_IsOpen    = 0x01,
			CSF_IsClear   = 0x02,
			CSF_IsKunsho  = 0x04,
			CSF_WasOpen   = 0x08,
			CSF_WasClear  = 0x10,
			CSF_WasKunsho = 0x20,
		};

		CourseState()
		    : mFlags()
		    , mHighscores()
		{
			mHighscores[0].allocate(3);
			mHighscores[1].allocate(3);
			mFlags.clear();
		}

		inline void clear()
		{
			mHighscores[0].clear();
			mHighscores[1].clear();
			mFlags.clear();
		}

		inline void write(Stream& stream)
		{
			mFlags.writeBytes(stream);
			mHighscores[0].write(stream);
			mHighscores[1].write(stream);
		}

		inline void read(Stream& stream)
		{
			mFlags.readBytes(stream);
			mHighscores[0].read(stream);
			mHighscores[1].read(stream);
		}

		BitFlag<u16> mFlags;      // _00
		Highscore mHighscores[2]; // _04, 0 = 1Player, 1 = 2Player
	};

	PlayChallengeGameData();

	void reset();
	void write(Stream&);
	void read(Stream&);
	CourseState* getState(int);

	int mCourseCount;      // _00
	CourseState* mCourses; // _04
	BitFlag<u8> mFlags;    // _08
};

struct PlayCommonData {
	PlayCommonData();

	void reset();

	void read(Stream&);
	void write(Stream&);

	Highscore* getHighscore_clear(int);
	Highscore* getHighscore_complete(int);

	void entryHighscores_clear(int, int*, int*);
	void entryHighscores_common(Highscore**, int, int*, int*);
	void entryHighscores_complete(int, int*, int*);

	bool isChallengeGamePlayable();
	bool isLouieRescued();
	bool isPerfectChallenge();

	void enableChallengeGame();
	void enableLouieRescue();

	bool challenge_is_virgin();
	bool challenge_is_virgin_check_only();

	PlayChallengeGameData::CourseState* challenge_get_CourseState(int);
	int challenge_get_coursenum();
	Highscore* challenge_getHighscore(int, int);

	int challenge_openNewCourse();

	bool challenge_checkOpen(int);
	bool challenge_checkJustOpen(int);
	void challenge_setOpen(int);

	bool challenge_checkClear(int);
	bool challenge_checkJustClear(int);
	void challenge_setClear(int);

	bool challenge_checkKunsho(int);
	bool challenge_checkJustKunsho(int);
	void challenge_setKunsho(int);

	BitFlag<u8> mChallengeFlags;          // _00
	Highscore** mHiScoreClear;            // _04 (for repay debt)
	Highscore** mHiScoreComplete;         // _08 (for all treasures)
	PlayChallengeGameData mChallengeData; // _0C
};

namespace CommonSaveData {
// Size: 0x48
struct Mgr : public PlayCommonData {
	enum SoundMode { SM_Mono = 0, SM_Stereo = 1, SM_SurroundSound = 2 };
	Mgr();

	void setup();
	void setDefault();
	void setCardSerialNo(u64);
	void resetCardSerialNo();
	void resetPlayer(s8);

	void read(Stream&);
	void write(Stream&);

	void setBgmVolume(f32);
	void setSeVolume(f32);
	void setSoundModeMono();
	void setSoundModeStereo();
	void setSoundModeSurround();

	void setDeflicker();
	void setDeflicker(bool);

	int _18;             // _18
	u32 mTime;           // _1C
	char mFileIndex;     // _20
	char padding;        // _21
	u16 _22;             // _22
	u32 _24;             // _24
	u32 mSaveSlotIndex;  // _28
	u32 _2C;             // _2C
	u64 mCardSerialNo;   // _30
	u8 mSoundMode;       // _38, TODO: Replace with Soundmode enum
	u8 mMusicVol;        // _39
	u8 mSeVol;           // _3A
	u8 mIsRumble;        // _3B
	u8 mIsRubyFont;      // _3C, japanese version leftover, mini font in cutscenes
	u8 mUseDeflicker;    // _3D
	u8 mRegion;          // _3E
	char _3F;            // _3F
	BitFlag<u16> mFlags; // _40
	bool mDoSaveOptions; // _42
	u32 _44;             // _44
};
} // namespace CommonSaveData
} // namespace Game

#pragma enumsalwaysint reset

#endif
