#ifndef _GAME_ILLUSTRATEDBOOK_COLORSETTING_H
#define _GAME_ILLUSTRATEDBOOK_COLORSETTING_H

/*
    __vt__Q34Game15IllustratedBook12ColorSetting:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game15IllustratedBook12ColorSettingFv
    .4byte getChildCount__5CNodeFv
    .4byte read__Q34Game15IllustratedBook12ColorSettingFR6Stream
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Game {
namespace IllustratedBook {
struct ColorSetting : public CNode {
	virtual ~ColorSetting();    // _08
	virtual void read(Stream&); // _10

	// _00 VTBL
};
} // namespace IllustratedBook
} // namespace Game

#endif
