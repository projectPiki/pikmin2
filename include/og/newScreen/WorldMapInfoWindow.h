#ifndef _OG_NEWSCREEN_WORLDMAPINFOWINDOW_H
#define _OG_NEWSCREEN_WORLDMAPINFOWINDOW_H

#include "og/newScreen/SMenu.h"

namespace og {
namespace newScreen {

/**
 * @size{0x220}
 */
struct WorldMapInfoWindow0 : public SMenuPauseVS {
	WorldMapInfoWindow0();

	virtual const char* getResName() const { return "res_world_map_info_window0.szs"; } // _1C (weak)
	virtual SceneType getSceneType() { return SCENE_WORLD_MAP_INFO_WINDOW_0; }          // _08 (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_WORLD_MAP_INFO_WINDOW_0; }     // _10 (weak)
	virtual bool isUseBackupSceneInfo() { return false; }                               // _14 (weak)
	virtual void doCreateObj(JKRArchive*);                                              // _20
	virtual bool doConfirmSetScene(::Screen::SetSceneArg&);                             // _30
	virtual int doGetFinishState();                                                     // _4C

	// _00      = VTBL
	// _00-_220 = SMenuPauseVS
};

struct WorldMapInfoWindow1 : public SMenuPauseVS {
	WorldMapInfoWindow1();

	virtual const char* getResName() const { return "res_world_map_info_window1.szs"; } // _1C (weak)
	virtual SceneType getSceneType() { return SCENE_WORLD_MAP_INFO_WINDOW_1; }          // _08 (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_WORLD_MAP_INFO_WINDOW_1; }     // _10 (weak)
	virtual bool isUseBackupSceneInfo() { return false; }                               // _14 (weak)
	virtual void doCreateObj(JKRArchive*);                                              // _20
	virtual bool doConfirmSetScene(::Screen::SetSceneArg&);                             // _30
	virtual int doGetFinishState();                                                     // _4C

	// _00      = VTBL
	// _00-_220 = SMenuPauseVS
};

struct ObjWorldMapInfoWindow0 : public ObjSMenuPauseVS {
	ObjWorldMapInfoWindow0(const char*);

	virtual ~ObjWorldMapInfoWindow0() { }                 // _08 (weak)
	virtual bool doStart(const ::Screen::StartSceneArg*); // _44
	virtual void doCreate(JKRArchive*);                   // _4C
	virtual bool doUpdateFadein();                        // _50
	virtual void doUpdateFadeoutFinish();                 // _64
	virtual void out_L();                                 // _84
	virtual void commonUpdate();                          // _A4
	virtual void out_cancel();                            // _A8
	virtual void out_menu_0();                            // _AC
	virtual void out_menu_1();                            // _B0
	virtual int getResult();                              // _B4 (weak)

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_CC = ObjSMenuPauseVS
	Screen::DispMemberWorldMapInfoWin0* mDispWmap; // _CC
	u32 mPrevSel;                                  // _D0
};

struct ObjWorldMapInfoWindow1 : public ObjSMenuPauseVS {
	ObjWorldMapInfoWindow1(const char*);

	virtual ~ObjWorldMapInfoWindow1() { }                 // _08 (weak)
	virtual bool doStart(const ::Screen::StartSceneArg*); // _44
	virtual void doCreate(JKRArchive*);                   // _4C
	virtual void doUpdateFadeoutFinish();                 // _64
	virtual void out_L();                                 // _84
	virtual void commonUpdate();                          // _A4
	virtual void out_cancel();                            // _A8
	virtual void out_menu_0();                            // _AC
	virtual void out_menu_1();                            // _B0
	virtual int getResult();                              // _B4 (weak)

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_CC = ObjSMenuPauseVS
	Screen::DispMemberWorldMapInfoWin1* mDispWmap; // _CC
	Screen::AnimText_Screen* mAnimTextTitle;       // _D0
};
} // namespace newScreen
} // namespace og

#endif
