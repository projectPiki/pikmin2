#ifndef _GAME_PLAYCOMMONDATA_H
#define _GAME_PLAYCOMMONDATA_H

#include "types.h"
#include "Game/Highscore.h"

namespace Game {
struct PlayChallengeGameData {
	struct CourseState {
		u8 _00;                    // _00
		u8 _01;                    // _01
		Highscore m_highscores[2]; // _04
	};

	void reset();

	int m_courseCount;      // _00
	CourseState* m_courses; // _04
	u8 _08;                 // _08
};

struct PlayCommonData {
	PlayCommonData();
	void reset();
	void read(Stream&);
	void write(Stream&);

	u8 _00;                                // _00
	Lowscore** _04;                        // _04
	Lowscore** _08;                        // _08
	PlayChallengeGameData m_challengeData; // _0C
};

namespace CommonSaveData {
	// Size: 0x48
	struct Mgr {
		Mgr();

		void setup();
		void setDefault();
		void setCardSerialNo(ulonglong);
		void resetCardSerialNo();
		void resetPlayer(char);

		void read(Stream&);
		void write(Stream&);

		void setBgmVolume(float);
		void setSeVolume(float);
		void setSoundModeMono();
		void setSoundModeStereo();
		void setSoundModeSurround();

		void setDeflicker();
		void setDeflicker(bool);

		u8 _00[4];                              // _00
		PlayChallengeGameData* m_challengeData; // _04
		int _08;                                // _08
		u8 _0C[0xC];                            // _0C
		int _18;                                // _18
		u32 _1C;                                // _1C
		char m_fileIndex;                       // _20
		short _22;                              // _22
		u8 _24[4];                              // _24
		u32 _28;                                // _28
		u8 _2C[4];                              // _2C
		ulonglong m_cardSerialNo;               // _30
		// TODO: replace with SoundMode enum, once we create it?
		u8 m_soundMode;                  // _38
		u8 _39;                          // _39
		u8 _3A;                          // _3A
		u8 _3B;                          // _3B
		u8 _3C;                          // _3C
		u8 _3D;                          // _3D
		char _3E;                        // _3E
		ushort _40;                      // _40
		bool m_optionBlockSaveFlagMaybe; // _42
		u32 : 0;                         // reset alignment
		u8 _44[4];                       // _44
	};
} // namespace CommonSaveData
} // namespace Game

#endif
