#ifndef _OG_NEWSCREEN_SPECIALITEM_H
#define _OG_NEWSCREEN_SPECIALITEM_H

#include "Screen/Bases.h"
#include "JSystem/J2D/J2DPane.h"

namespace P2DScreen {
// this is just a temp dec until the header is made
struct Mgr_tuning;
} // namespace P2DScreen

namespace og {
namespace Screen {
// these are temp decs until these headers are made
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
};

struct ObjSpecialItem : public ::Screen::ObjBase {
	ObjSpecialItem(const char*);

	og::Screen::DispMemberSpecialItem* _38; // _38
	P2DScreen::Mgr_tuning* _3C;             // _3C
	J2DPane* _40;                           // _40
	u8 _44[0x10];                           // _44 - unknown type(s)
	u8 _54[0x4];                            // _54 - unknown type
	float _58;                              // _58
	float _5C;                              // _5C
};
} // namespace newScreen
} // namespace og

#endif
