#ifndef _OG_NEWSCREEN_WORLDMAPINFOWINDOW0_H
#define _OG_NEWSCREEN_WORLDMAPINFOWINDOW0_H

#include "og/newScreen/SMenuPauseVS.h"

namespace og {
namespace newScreen {

/**
 * @size{0x220}
 */
struct WorldMapInfoWindow0 : public SMenuPauseVS {
	WorldMapInfoWindow0();
	~WorldMapInfoWindow0(); // unused/inlined

	virtual SceneType getSceneType();                       // _00
	virtual ScreenMemberID getMemberID();                   // _08
	virtual bool isUseBackupSceneInfo();                    // _0C
	virtual const char* getResName() const;                 // _14
	virtual void doCreateObj(JKRArchive*);                  // _18
	virtual bool doConfirmSetScene(::Screen::SetSceneArg&); // _28
	virtual int doGetFinishState();                         // _44

	// virtual void _48() = 0;                                 // _48

	// _00 VTBL
};
} // namespace newScreen
} // namespace og

#endif
