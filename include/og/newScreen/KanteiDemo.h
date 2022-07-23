#ifndef _OG_NEWSCREEN_KANTEIDEMO_H
#define _OG_NEWSCREEN_KANTEIDEMO_H

#include "Screen/Bases.h"

namespace og {
namespace newScreen {
struct KanteiDemo : public ::Screen::SceneBase {
	KanteiDemo();

	virtual SceneType getSceneType();                       // _00
	virtual ScreenOwnerID getOwnerID();                     // _04
	virtual ScreenMemberID getMemberID();                   // _08
	virtual bool isUseBackupSceneInfo();                    // _0C
	virtual const char* getResName() const;                 // _14
	virtual void doCreateObj(JKRArchive*);                  // _18
	virtual void doUserCallBackFunc(Resource::MgrCommand*); // _1C

	// _00 VTBL
	::Screen::ObjBase* m_objBase;
};

struct ObjKantei : ::Screen::ObjBase {
	ObjKantei(const char*);
};
} // namespace newScreen
} // namespace og

#endif
