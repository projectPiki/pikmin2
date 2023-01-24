#ifndef _KH_READYGO_H
#define _KH_READYGO_H

#include "og/Screen/DispMember.h"
#include "Screen/screenObj.h"
#include "P2DScreen.h"

struct JKRArchive;

namespace kh {
namespace Screen {
struct DispReadyGo : public og::Screen::DispMemberBase {
	DispReadyGo()
	{
		m_status       = 0;
		m_is2Player    = false;
		m_isFinalFloor = false;
		m_gameType     = 0;
	}

	virtual u32 getSize() { return sizeof(DispReadyGo); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_KH; }         // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_READY_GO; } // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	int m_status;        // _08
	bool m_is2Player;    // _0C
	bool m_isFinalFloor; // _0D
	int m_gameType;      // _10
};

struct ObjReadyGo : public ::Screen::ObjBase {
	ObjReadyGo()
	{
		for (int i = 0; i < 2; i++) {
			m_screen[i]    = nullptr;
			m_anim1[i]     = nullptr;
			m_anim2[i]     = nullptr;
			m_animTime2[i] = 0.0f;
			m_animTime1[i] = 0.0f;
			m_yOffset[i]   = 0.0f;
			m_makeEfx[i]   = false;
		}
		m_screenNum      = 1;
		m_isAnimComplete = false;
		m_isOver         = false;
	}

	virtual ~ObjReadyGo() { }           // _08 (weak)
	virtual void doCreate(JKRArchive*); // _4C
	virtual bool doUpdateFadein();      // _50
	virtual bool doUpdate();            // _58
	virtual bool doUpdateFadeout();     // _60
	virtual void doDraw(Graphics& gfx); // _68

	bool updateAnimation();

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	P2DScreen::Mgr_tuning* m_screen[2]; // _38
	J2DAnmTransform* m_anim1[2];        // _40
	J2DAnmColor* m_anim2[2];            // _48
	f32 m_animTime1[2];                 // _50
	f32 m_animTime2[2];                 // _58
	f32 m_yOffset[2];                   // _60
	u8 m_makeEfx[2];                    // _68
	bool m_isAnimComplete;              // _6A
	bool m_isOver;                      // _6B
	int m_screenNum;                    // _6C

	static struct StaticValues {
		inline StaticValues()
		{
			m_yOffsetP1  = -120.0f;
			m_yOffsetP2  = 120.0f;
			m_animSpeed  = 0.7f;
			m_efxOffsetX = -12.0f;
			m_efxOffsetY = -22.0f;
		}

		f32 m_animSpeed;  // _00
		f32 m_yOffsetP1;  // _04
		f32 m_yOffsetP2;  // _08
		f32 m_efxOffsetX; // _0C
		f32 m_efxOffsetY; // _10
		f32 _14;          // _14
	} msVal;
};

struct SceneReadyGo : public ::Screen::SceneBase {
	virtual const char* getResName() const { return "ready_go.szs"; }             // _1C (weak)
	virtual bool isUseBackupSceneInfo() { return true; }                          // _14 (weak)
	virtual SceneType getSceneType() { return SCENE_READY_GO; }                   // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_KH; }                       // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_READY_GO; }              // _10 (weak)
	virtual void doCreateObj(JKRArchive* arc) { registObj(new ObjReadyGo, arc); } // _20 (weak)
	virtual bool doConfirmSetScene(::Screen::SetSceneArg&);                       // _30

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
};
} // namespace Screen
} // namespace kh

#endif