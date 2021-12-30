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
	struct Mgr : public PlayCommonData {
		Mgr();

		void setup();
		void setDefault();
		void setCardSerialNo(ulonglong);
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
		u8 _3D;             // _3D
		char m_region;      // _3E
		char _3F;           // _3F
		u8 _40;             // _40
		u8 _41;             // _41
		bool _42;           // _42
		u32 _44;            // _44
	};
} // namespace CommonSaveData
} // namespace Game

#endif
