#ifndef _KH_FINALFLOOR_H
#define _KH_FINALFLOOR_H

#include "kh/khUtil.h"
#include "og/Screen/DispMember.h"
#include "og/Screen/callbackNodes.h"
#include "Screen/Bases.h"
#include "P2DScreen.h"

struct JAISound;

namespace kh {
namespace Screen {
struct DispFinalFloor : public og::Screen::DispMemberBase {

	virtual u32 getSize();     // _08 (weak)
	virtual u32 getOwnerID();  // _0C (weak)
	virtual u64 getMemberID(); // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	u8 _08; // _08
};

struct ObjFinalFloor : public ::Screen::ObjBase {

	virtual ~ObjFinalFloor();             // _08 (weak)
	virtual void doCreate(JKRArchive*);   // _4C
	virtual bool doUpdateFadein();        // _50
	virtual bool doUpdate();              // _58
	virtual bool doUpdateFadeout();       // _60
	virtual void doUpdateFadeoutFinish(); // _64
	virtual void doDraw(Graphics& gfx);   // _68

	void updateAnimation();
	void stopSound();
	void restartSound();

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
	int _68;                       // _68
	JAISound* m_sound;             // _6C
};

struct SceneFinalFloor : public ::Screen::SceneBase {
	inline SceneFinalFloor()
	    : m_objFinalFloor(nullptr)
	{
	}

	virtual SceneType getSceneType();                       // _08 (weak)
	virtual ScreenOwnerID getOwnerID();                     // _0C (weak)
	virtual ScreenMemberID getMemberID();                   // _10 (weak)
	virtual bool isUseBackupSceneInfo();                    // _14 (weak)
	virtual const char* getResName() const;                 // _1C (weak)
	virtual void doCreateObj(JKRArchive*);                  // _20 (weak)
	virtual bool doConfirmSetScene(::Screen::SetSceneArg&); // _30

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
	ObjFinalFloor* m_objFinalFloor; // _220
};
} // namespace Screen
} // namespace kh

#endif