#ifndef _OG_NEWSCREEN_SPECIALITEM_H
#define _OG_NEWSCREEN_SPECIALITEM_H

#include "Screen/Bases.h"

namespace og {
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
	};
} // namespace newScreen
} // namespace og

#endif
