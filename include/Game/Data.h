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

		CourseState();

		BitFlag<u16> m_flags;      // _00
		Highscore m_highscores[2]; // _04
	};

	PlayChallengeGameData();

	void reset();
	void write(Stream&);
	void read(Stream&);
	CourseState* getState(int);

	int m_courseCount;      // _00
	CourseState* m_courses; // _04
	u8 m_flags;             // _08
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

	u8 _00;                                // _00
	Highscore** _04;                       // _04
	Highscore** _08;                       // _08
	PlayChallengeGameData m_challengeData; // _0C
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
	void resetPlayer(signed char);

	void read(Stream&);
	void write(Stream&);

	void setBgmVolume(float);
	void setSeVolume(float);
	void setSoundModeMono();
	void setSoundModeStereo();
	void setSoundModeSurround();

	void setDeflicker();
	void setDeflicker(bool);

	int _18;            // _18
	u32 _1C;            // _1C
	char m_fileIndex;   // _20
	char padding;       // _21
	short _22;          // _22
	u32 _24;            // _24
	u32 _28;            // _28
	u32 _2C;            // _2C
	u32 m_cardSerialNo; // _30
	u32 _34;            // _34
	u8 m_soundMode;     // _38, TODO: Replace with
	                    // Soundmode enum
	u8 _39;             // _39
	s8 _3A;             // _3A
	u8 _3B;             // _3B
	u8 _3C;             // _3C
	bool m_deflicker;   // _3D
	char m_region;      // _3E
	char _3F;           // _3F
	u8 _40;             // _40
	u8 _41;             // _41
	bool _42;           // _42
	u32 _44;            // _44
};
} // namespace CommonSaveData
} // namespace Game

#pragma enumsalwaysint reset

#endif
