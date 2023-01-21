#ifndef _KH_PAYDEPT_H
#define _KH_PAYDEPT_H

#include "og/Screen/DispMember.h"
#include "Screen/screenObj.h"
#include "P2DScreen.h"

namespace kh {
namespace Screen {
struct DispPayDept : public og::Screen::DispMemberBase {
	enum PayDeptType { PAYDEPT_Percent, PAYDEPT_DebtPayed, PAYDEPT_Complete };

	DispPayDept(PayDeptType, int);

	virtual u32 getSize() { return sizeof(DispPayDept); }  // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_KH; }          // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_PAY_DEBT; }; // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	PayDeptType m_payDeptType; // _08
	int m_percentLevel;        // _0C
};

struct ObjPayDept : public ::Screen::ObjBase {
	ObjPayDept()
	{
		m_screen    = nullptr;
		m_anim1     = nullptr;
		m_anim2     = nullptr;
		m_animTime2 = 0.0f;
		m_animTime1 = 0.0f;
	}

	virtual ~ObjPayDept() {};             // _08 (weak)
	virtual void doCreate(JKRArchive*);   // _4C
	virtual bool doUpdateFadein();        // _50
	virtual bool doUpdate();              // _58
	virtual void doUpdateFadeoutFinish(); // _64
	virtual void doDraw(Graphics& gfx);   // _68

	bool updateAnimation();
	void searchNumPane(J2DPane*, int, int);

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	P2DScreen::Mgr_tuning* m_screen; // _38
	J2DAnmTransform* m_anim1;        // _3C
	J2DAnmColor* m_anim2;            // _40
	f32 m_animTime1;                 // _44
	f32 m_animTime2;                 // _48

	static struct StaticValues {
		inline StaticValues() { m_animSpeed = 1.0f; }

		f32 m_animSpeed; // _00
	} msVal;
};

struct ScenePayDept : public ::Screen::SceneBase {
	virtual SceneType getSceneType() { return SCENE_PAY_DEPT; }      // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_KH; }          // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_PAY_DEBT; } // _10 (weak)
	virtual bool isUseBackupSceneInfo() { return true; }             // _14 (weak)
	virtual const char* getResName() const { return ""; }            // _1C (weak)
	virtual void doCreateObj(JKRArchive*) { }                        // _20 (weak)
	virtual void doUserCallBackFunc(Resource::MgrCommand*);          // _24

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
};
} // namespace Screen
} // namespace kh

#endif