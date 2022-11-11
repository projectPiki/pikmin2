#ifndef _MORIMURA_BASES_H
#define _MORIMURA_BASES_H

#include "types.h"
#include "Vector3.h"

#include "Dolphin/string.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "Screen/Bases.h"
#include "og/Screen/anime.h"
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

	// virtual ~TTestBase();                                        // _08 (weak)
	virtual bool doStart(Screen::StartSceneArg const*);          // _44
	virtual bool doEnd(Screen::EndSceneArg const*);              // _48
	virtual bool doUpdateFadein();                               // _50
	virtual void doUpdateFadeinFinish();                         // _54
	virtual void doUpdateFinish();                               // _5C
	virtual bool doUpdateFadeout();                              // _60
	virtual og::Screen::DispMemberBase* getDispMemberBase() = 0; // _78

	static u64 mIsSection;

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	f32 m_timer;           // _38
	f32 m_timerLength;     // _3C
	f32 m_fadeFraction;    // _40
	u8 m_fadeAlpha;        // _44
	u8 _45;                // _45
	char m_baseName[0x32]; // _46
};

struct TScreenBase {
	TScreenBase(JKRArchive*, int);

	virtual void create(const char*, u32);        // _08
	virtual void update();                        // _0C
	virtual void draw(Graphics&, J2DPerspGraph*); // _10

	void addAnim(char*);

	// _00 = VTBL
	og::Screen::AnimScreen** m_animScreens; // _04
	J2DScreen* _08;                         // _08 This might be P2DScreen/Mgr?
	JKRArchive* _0C;                        // _0C
	int _10;                                // _10
	int m_animCount;                        // _14
};

struct TTestAnimScreen : public og::Screen::AnimScreen {
	// _00     = VTBL
	// _00-_40 = AnimBaseBase
};

struct THIOScene : public Screen::SceneBase {
	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
	TTestBase* m_object; // _220, cast as needed
};
} // namespace Morimura

#endif
