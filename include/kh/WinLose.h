#ifndef _KH_WINLOSE_H
#define _KH_WINLOSE_H

#include "og/Screen/DispMember.h"
#include "Screen/screenObj.h"
#include "P2DScreen.h"

struct JAISound;

enum WinLoseCondition { WinPlayer1 = 1, WinPlayer2 = 2, Draw = 3, Timeup1P = 4, Timeup2P = 5 };

namespace kh {
namespace Screen {
struct DispWinLose : public og::Screen::DispMemberBase {

	virtual u32 getSize() { return sizeof(DispWinLose); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_KH; }         // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_WIN_LOSE; } // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	int m_outcome; // _08
	int _0C;       // _0C
};

struct DispWinLoseReason : public og::Screen::DispMemberBase {

	virtual u32 getSize() { return sizeof(DispWinLoseReason); }  // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_KH; }                // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_WIN_LOSE_REASON; } // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	int _08; // _08
	int _0C; // _0C
};

struct ObjWinLose : public ::Screen::ObjBase {
	ObjWinLose();

	virtual ~ObjWinLose() { }           // _08 (weak)
	virtual void doCreate(JKRArchive*); // _4C
	virtual bool doUpdate();            // _58
	virtual void doDraw(Graphics& gfx); // _68

	bool updateAnimation();

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	P2DScreen::Mgr_tuning* m_screenA[2]; // _38
	P2DScreen::Mgr_tuning* m_screenB[2]; // _40
	J2DAnmTransform* m_anim1[2];         // _48
	J2DAnmTransform* m_anim2[2];         // _50
	J2DAnmColor* m_anim3[2];             // _58
	J2DAnmColor* m_anim4[2];             // _60
	f32 m_animTime1[2];                  // _68
	f32 m_animTime2[2];                  // _70
	f32 m_animTime3[2];                  // _78
	f32 m_animTime4[2];                  // _80
	f32 m_yOffset[2];                    // _88
	bool m_doUpdateAnim;                 // _90
	int m_frameTimer;                    // _94
	int m_screenNum;                     // _98
	u8 m_alpha;                          // _9C

	static struct StaticValues {
		inline StaticValues()
		{
			_00 = 1.0f;
			_04 = -120.0f;
			_08 = 120.0f;
			_0C = 60.0f;
			_10 = 60;
			_14 = 180;
			_18 = 16;
		}

		f32 _00; // _00
		f32 _04; // _04
		f32 _08; // _08
		f32 _0C;
		int _10;
		int _14;
		u8 _18;
	} msVal;
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