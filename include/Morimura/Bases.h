#ifndef _MORIMURA_BASES_H
#define _MORIMURA_BASES_H

#include "types.h"
#include "Vector3.h"

#include "string.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "Screen/screenObj.h"
#include "og/Screen/anime.h"
#include "P2DScreen.h"
#include "System.h"

struct Graphics;
struct J2DPerspGraph;
struct J2DScreen;
struct JKRArchive;

namespace og {
namespace Screen {
struct ScaleMgr;
} // namespace Screen
} // namespace og

namespace Morimura {
struct TTestBase : public Screen::ObjBase {
	TTestBase(char*);

	virtual ~TTestBase() { }                                     // _08 (weak)
	virtual bool doStart(Screen::StartSceneArg const*);          // _44
	virtual bool doEnd(Screen::EndSceneArg const*);              // _48
	virtual bool doUpdateFadein();                               // _50
	virtual void doUpdateFadeinFinish();                         // _54
	virtual void doUpdateFinish();                               // _5C
	virtual bool doUpdateFadeout();                              // _60
	virtual og::Screen::DispMemberBase* getDispMemberBase() = 0; // _78

	static bool mIsSection;

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	f32 mTimer;           // _38
	f32 mTimerLength;     // _3C
	f32 mFadeFraction;    // _40
	u8 mFadeAlpha;        // _44
	bool mCanInput;       // _45
	char mBaseName[0x32]; // _46
};

struct TScreenBase {
	TScreenBase(JKRArchive*, int);

	virtual void create(const char*, u32);        // _08
	virtual void update();                        // _0C
	virtual void draw(Graphics&, J2DPerspGraph*); // _10

	void addAnim(char*);

	inline P2DScreen::Mgr_tuning* getScreenObj() { return mScreenObj; }

	// _00 = VTBL
	og::Screen::AnimScreen** mAnimScreens; // _04
	P2DScreen::Mgr_tuning* mScreenObj;     // _08
	JKRArchive* mArchive;                  // _0C
	int mAnimScreenCountMax;               // _10
	int mCurrEntries;                      // _14
};

struct TTestAnimScreen : public og::Screen::AnimScreen {
	// _00     = VTBL
	// _00-_40 = AnimBaseBase
};

struct THIOScene : public Screen::SceneBase {
	THIOScene() { mObject = nullptr; }
	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
	TTestBase* mObject; // _220, cast as needed
};
} // namespace Morimura

#endif
