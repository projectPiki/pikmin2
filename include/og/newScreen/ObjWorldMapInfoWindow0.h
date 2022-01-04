#ifndef _OG_NEWSCREEN_OBJWORLDMAPINFOWINDOW0_H
#define _OG_NEWSCREEN_OBJWORLDMAPINFOWINDOW0_H

#include "og/newScreen/ObjSMenuPauseVS.h"

namespace og {
namespace Screen {
struct DispMemberWorldMapInfoWin0;
} // namespace Screen

namespace newScreen {
struct ObjWorldMapInfoWindow0 : public ObjSMenuPauseVS {
	ObjWorldMapInfoWindow0(const char*);

	virtual ~ObjWorldMapInfoWindow0();                    // _00
	virtual bool doStart(const ::Screen::StartSceneArg*); // _3C
	virtual void doCreate(JKRArchive*);                   // _44
	virtual bool doUpdateFadein();                        // _48
	virtual void doUpdateFadeoutFinish();                 // _5C
	virtual void out_L();                                 // _7C
	virtual void commonUpdate();                          // _9C
	virtual void out_cancel();                            // _A0
	virtual void out_menu_0();                            // _A4
	virtual void out_menu_1();                            // _A8
	virtual void getResult();                             // _AC

	Screen::DispMemberWorldMapInfoWin0* _CC; // _CC
	u32 _D0;                                 // _D0
};
} // namespace newScreen
} // namespace og

#endif
