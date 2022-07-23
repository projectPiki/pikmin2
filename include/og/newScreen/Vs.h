#ifndef _OG_NEWSCREEN_VS_H
#define _OG_NEWSCREEN_VS_H

#include "Screen/Bases.h"

namespace og {
namespace newScreen {
struct Vs : public ::Screen::SceneBase {
	Vs();

	virtual SceneType getSceneType();                       // _00
	virtual ScreenOwnerID getOwnerID();                     // _04
	virtual ScreenMemberID getMemberID();                   // _08
	virtual bool isDrawInDemo() const;                      // _10
	virtual const char* getResName() const;                 // _14
	virtual void doCreateObj(JKRArchive*);                  // _18
	virtual void doUserCallBackFunc(Resource::MgrCommand*); // _1C

	// _00 VTBL
};

struct ObjVs : public ::Screen::ObjBase {
	ObjVs(const char*);
};
} // namespace newScreen
} // namespace og

#endif
