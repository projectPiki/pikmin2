#ifndef _OG_NEWSCREEN_SPECIALITEM_H
#define _OG_NEWSCREEN_SPECIALITEM_H

#include "Screen/screenObj.h"
#include "JSystem/J2D/J2DPane.h"

namespace P2DScreen {
struct Mgr_tuning;
} // namespace P2DScreen

namespace og {
namespace Screen {
struct DispMemberSpecialItem;
} // namespace Screen

namespace newScreen {
struct SpecialItem : public ::Screen::SceneBase {
	SpecialItem();

	virtual const char* getResName() const { return "res_special_item.szs"; } // _1C (weak)
	virtual SceneType getSceneType() { return SCENE_SPECIAL_ITEM; }           // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_OGA; }                  // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_SPECIAL_ITEM; }      // _10 (weak)
	virtual bool isUseBackupSceneInfo() { return true; }                      // _14 (weak)
	virtual void doCreateObj(JKRArchive*);                                    // _20
	virtual void doUserCallBackFunc(Resource::MgrCommand*);                   // _24
	virtual bool doConfirmSetScene(::Screen::SetSceneArg&);                   // _30

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
};

struct ObjSpecialItem : public ::Screen::ObjBase {
	ObjSpecialItem(const char*);

	virtual ~ObjSpecialItem();                            // _08 (weak)
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

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	og::Screen::DispMemberSpecialItem* mDisp; // _38
	P2DScreen::Mgr_tuning* mScreen;           // _3C
	J2DPane* mPaneSetP;                       // _40
	Rectf mDrawBox;                           // _44 - unknown type(s)
	u8 mDoDrawBox;                            // _54 - unknown type
	f32 mFadeTimer1;                          // _58
	f32 mFadeTimer2;                          // _5C
};
} // namespace newScreen
} // namespace og

#endif
