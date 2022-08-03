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

	virtual SceneType getSceneType();                       // _00
	virtual ScreenOwnerID getOwnerID();                     // _04
	virtual ScreenMemberID getMemberID();                   // _08
	virtual bool isUseBackupSceneInfo();                    // _0C
	virtual const char* getResName() const;                 // _14
	virtual void doCreateObj(JKRArchive*);                  // _18
	virtual void doUserCallBackFunc(Resource::MgrCommand*); // _1C
	virtual bool doConfirmSetScene(::Screen::SetSceneArg&); // _28

	// _00 VTBL
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
