#ifndef _KH_READYGO_H
#define _KH_READYGO_H

#include "og/Screen/DispMember.h"
#include "Screen/Bases.h"
#include "P2DScreen.h"

namespace kh {
namespace Screen {
struct DispReadyGo : public og::Screen::DispMemberBase {

	virtual u32 getSize();     // _08 (weak)
	virtual u32 getOwnerID();  // _0C (weak)
	virtual u64 getMemberID(); // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	int _08; // _08
	u8 _0C;  // _0C
	u8 _0D;  // _0D
	u32 _10; // _10, unknown
};

struct ObjReadyGo : public ::Screen::ObjBase {

	virtual ~ObjReadyGo();              // _08 (weak)
	virtual void doCreate(JKRArchive*); // _4C
	virtual bool doUpdateFadein();      // _50
	virtual bool doUpdate();            // _58
	virtual bool doUpdateFadeout();     // _60
	virtual void doDraw(Graphics& gfx); // _68

	void updateAnimation();

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	P2DScreen::Mgr_tuning* _38[2]; // _38
	J2DAnmTransform* _40[2];       // _40
	J2DAnmColor* _48[2];           // _48
	f32 _50[2];                    // _50
	f32 _58[2];                    // _58
	f32 _60;                       // _60
	f32 _64;                       // _64
	u8 _68;                        // _68
	u8 _69;                        // _69
	u8 _6A;                        // _6A
	u8 _6B;                        // _6B
	int _6C;                       // _6C, count of objs in arrays
};

struct SceneReadyGo : public ::Screen::SceneBase {
	virtual SceneType getSceneType();                       // _08 (weak)
	virtual ScreenOwnerID getOwnerID();                     // _0C (weak)
	virtual ScreenMemberID getMemberID();                   // _10 (weak)
	virtual bool isUseBackupSceneInfo();                    // _14 (weak)
	virtual const char* getResName() const;                 // _1C (weak)
	virtual void doCreateObj(JKRArchive*);                  // _20 (weak)
	virtual bool doConfirmSetScene(::Screen::SetSceneArg&); // _30

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
};
} // namespace Screen
} // namespace kh

#endif