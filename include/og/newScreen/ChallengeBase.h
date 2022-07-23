#ifndef _OG_NEWSCREEN_CHALLENGEBASE_H
#define _OG_NEWSCREEN_CHALLENGEBASE_H

#include "Screen/Bases.h"
#include "og/Screen/ogScreen.h"

namespace og {
namespace Screen {
struct DispMemberDayEndCount : public DispMemberBase {
	f32 _08;
	f32 _0C;
};
} // namespace Screen

namespace newScreen {
struct ChallengeBase : public ::Screen::SceneBase {
	ChallengeBase();
	~ChallengeBase();
	void updateCountDown(f32, Screen::DispMemberDayEndCount*);

	virtual void startCountDown() = 0; // _50

	// _00 VTBL

	bool isCountingDown; // _220
};

struct ObjChallengeBase {
	static struct staticValues {
		u32 _00;
		u32 _04;
		u32 _08;
		u32 _0C;
		u32 _10;
	} msBaseVal;
};
} // namespace newScreen
} // namespace og

#endif
