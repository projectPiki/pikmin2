#ifndef _OG_NEWSCREEN_SAVE_H
#define _OG_NEWSCREEN_SAVE_H

#include "Screen/screenObj.h"
#include "JSystem/J2D/J2DPane.h"

namespace ebi {
namespace Save {
struct TMgr;
} // namespace Save
} // namespace ebi

namespace P2DScreen {
struct Mgr_tuning;
} // namespace P2DScreen

namespace og {
namespace Screen {
struct DispMemberCourseName;
struct AnimGroup;
} // namespace Screen

namespace newScreen {
struct Save : public ::Screen::SceneBase {
	Save();

	virtual const char* getResName() const { return ""; }        // _1C (weak)
	virtual SceneType getSceneType() { return SCENE_SAVE; }      // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_OGA; }     // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_SAVE; } // _10 (weak)
	virtual void doCreateObj(JKRArchive*);                       // _20
	virtual void doUserCallBackFunc(Resource::MgrCommand*);      // _24

	void doCreateObjUserCallBackFunc(JKRArchive*);

	inline ebi::Save::TMgr* getSaveMgr() { return mSaveMgr; }

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
	ebi::Save::TMgr* mSaveMgr; // _220
};

struct ObjSave : public ::Screen::ObjBase {
	ObjSave(const char*);

	enum State { SAVESTATE_StartDelay, SAVESTATE_WaitForFinish, SAVESTATE_Finished };

	virtual ~ObjSave();                                   // _08 (weak)
	virtual bool doStart(const ::Screen::StartSceneArg*); // _44
	virtual bool doEnd(const ::Screen::EndSceneArg*);     // _48
	virtual void doCreate(JKRArchive*);                   // _4C
	virtual bool doUpdateFadein();                        // _50
	virtual void doUpdateFadeinFinish();                  // _54
	virtual bool doUpdate();                              // _58
	virtual void doUpdateFinish();                        // _5C
	virtual bool doUpdateFadeout();                       // _60
	virtual void doUpdateFadeoutFinish();                 // _64
	virtual void doDraw(Graphics& gfx);                   // _68

	// inline/unused
	void startSave();

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	og::Screen::DispMemberSave* mDisp; // _38
	int mState;                        // _3C
	ebi::Save::TMgr* mSaveMgr;         // _40
	f32 mTimer;                        // _44
};
} // namespace newScreen
} // namespace og

#endif
