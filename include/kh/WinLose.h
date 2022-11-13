#ifndef _KH_WINLOSE_H
#define _KH_WINLOSE_H

#include "og/Screen/DispMember.h"
#include "Screen/Bases.h"
#include "P2DScreen.h"

struct JAISound;

namespace kh {
namespace Screen {
struct DispWinLose : public og::Screen::DispMemberBase {

	virtual u32 getSize();     // _08 (weak)
	virtual u32 getOwnerID();  // _0C (weak)
	virtual u64 getMemberID(); // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	int _08; // _08
	int _0C; // _0C
};

struct DispWinLoseReason : public og::Screen::DispMemberBase {

	virtual u32 getSize();     // _08 (weak)
	virtual u32 getOwnerID();  // _0C (weak)
	virtual u64 getMemberID(); // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	int _08; // _08
	int _0C; // _0C
};

struct ObjWinLose : public ::Screen::ObjBase {
	ObjWinLose();

	virtual ~ObjWinLose();              // _08 (weak)
	virtual void doCreate(JKRArchive*); // _4C
	virtual bool doUpdate();            // _58
	virtual void doDraw(Graphics& gfx); // _68

	void updateAnimation();

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	P2DScreen::Mgr_tuning* _38[2]; // _38
	P2DScreen::Mgr_tuning* _40[2]; // _40
	J2DAnmBase* _48[2];            // _48
	J2DAnmBase* _50[2];            // _50
	J2DAnmBase* _58[2];            // _58
	J2DAnmBase* _60[2];            // _60
	f32 _68[2];                    // _68
	f32 _70[2];                    // _70
	f32 _78[2];                    // _78
	f32 _80[2];                    // _80
	f32 _88;                       // _88
	f32 _8C;                       // _8C
	u8 _90;                        // _90
	int _94;                       // _94
	int _98;                       // _98
	u8 _9C;                        // _9C, alpha of some kind?
};

struct ObjWinLoseReason : public ::Screen::ObjBase {

	virtual ~ObjWinLoseReason();        // _08 (weak)
	virtual void doCreate(JKRArchive*); // _4C
	virtual bool doUpdate();            // _58
	virtual void doDraw(Graphics& gfx); // _68

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	P2DScreen::Mgr_tuning* _38; // _38
	J2DAnmBase* _3C;            // _3C
	J2DAnmBase* _40;            // _40
	f32 _44;                    // _44
	f32 _48;                    // _48
	u32 _4C;                    // _4C
};

struct SceneWinLose : public ::Screen::SceneBase {
	virtual const char* getResName() const { return "win_lose.szs"; } // _1C (weak)
	virtual SceneType getSceneType() { return SCENE_WIN_LOSE; }       // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_KH; }           // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_WIN_LOSE; }  // _10 (weak)
	virtual void doCreateObj(JKRArchive* archive)                     // _20 (weak)
	{
		registObj(new ObjWinLose, archive);
	}

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
};

struct SceneWinLoseReason : public ::Screen::SceneBase {
	SceneWinLoseReason();

	virtual SceneType getSceneType();           // _08 (weak)
	virtual ScreenOwnerID getOwnerID();         // _0C (weak)
	virtual ScreenMemberID getMemberID();       // _10 (weak)
	virtual const char* getResName() const;     // _1C (weak)
	virtual void doCreateObj(JKRArchive*);      // _20
	virtual void doUpdateActive();              // _2C
	virtual bool doEnd(::Screen::EndSceneArg*); // _40

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
	::Screen::ObjBase* _220; // _220, game over base?
	::Screen::ObjBase* _224; // _224, game over base?
	int _228;                // _228
	int _22C;                // _22C
	u8 _230;                 // _230
	u8 _231;                 // _231
	u32 _234;                // _234, unknown
};
} // namespace Screen
} // namespace kh

#endif