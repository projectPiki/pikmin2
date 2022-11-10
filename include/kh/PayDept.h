#ifndef _KH_PAYDEPT_H
#define _KH_PAYDEPT_H

#include "og/Screen/DispMember.h"
#include "Screen/Bases.h"
#include "P2DScreen.h"

namespace kh {
namespace Screen {
struct DispPayDept : public og::Screen::DispMemberBase {
	enum PayDeptType {

	};

	DispPayDept(PayDeptType, int);

	virtual u32 getSize();     // _08 (weak)
	virtual u32 getOwnerID();  // _0C (weak)
	virtual u64 getMemberID(); // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	PayDeptType m_payDeptType; // _08
	int _0C;                   // _0C
};

struct ObjPayDept : public ::Screen::ObjBase {

	virtual ~ObjPayDept();                // _08 (weak)
	virtual void doCreate(JKRArchive*);   // _4C
	virtual bool doUpdateFadein();        // _50
	virtual bool doUpdate();              // _58
	virtual void doUpdateFadeoutFinish(); // _64
	virtual void doDraw(Graphics& gfx);   // _68

	void updateAnimation();
	void searchNumPane(J2DPane*, int, int);

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	P2DScreen::Mgr_tuning* _38; // _38
	J2DAnmTransform* _3C;       // _3C
	J2DAnmColor* _40;           // _40
	f32 _44;                    // _44
	f32 _48;                    // _48
};

struct ScenePayDept : public ::Screen::SceneBase {
	virtual SceneType getSceneType();                       // _08 (weak)
	virtual ScreenOwnerID getOwnerID();                     // _0C (weak)
	virtual ScreenMemberID getMemberID();                   // _10 (weak)
	virtual bool isUseBackupSceneInfo();                    // _14 (weak)
	virtual const char* getResName() const;                 // _1C (weak)
	virtual void doCreateObj(JKRArchive*);                  // _20 (weak)
	virtual void doUserCallBackFunc(Resource::MgrCommand*); // _24

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
};
} // namespace Screen
} // namespace kh

#endif