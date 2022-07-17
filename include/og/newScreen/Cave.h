#ifndef _OG_NEWSCREEN_CAVE_H
#define _OG_NEWSCREEN_CAVE_H

#include "Screen/Bases.h"

namespace og {
namespace newScreen {
	struct Cave : public ::Screen::SceneBase {
		Cave();

		virtual SceneType getSceneType();                       // _00
		virtual ScreenOwnerID getOwnerID();                     // _04
		virtual ScreenMemberID getMemberID();                   // _08
		virtual bool isDrawInDemo() const;                      // _10
		virtual const char* getResName() const;                 // _14
		virtual void doCreateObj(JKRArchive*);                  // _18
		virtual void doUserCallBackFunc(Resource::MgrCommand*); // _1C
	};

	struct ObjCave : public ::Screen::ObjBase {
		ObjCave(const char*);
	};
} // namespace newScreen
} // namespace og

#endif
