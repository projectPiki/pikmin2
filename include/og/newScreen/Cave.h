#ifndef _OG_NEWSCREEN_CAVE_H
#define _OG_NEWSCREEN_CAVE_H

#include "Screen/Bases.h"
#include "JSystem/J2D/J2DPane.h"

namespace P2DScreen {
// this is just a temp dec until the header is made
struct Mgr_tuning;
} // namespace P2DScreen

namespace og {
// these are temp decs until these headers are made
namespace Screen {
struct DispMemberCave;
struct OtakaraSensor;
struct BloGroup;
struct DopingScreen;
struct NaviLifeGauge;
struct PikminCounterCave;
struct TotalPokoScreen;
} // namespace Screen

namespace newScreen {
struct Cave : public ::Screen::SceneBase {
	Cave();

	virtual const char* getResName() const { return "res_cave.szs"; } // _1C (weak)
	virtual SceneType getSceneType() { return SCENE_CAVE; }           // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_OGA; }          // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_CAVE; }      // _10 (weak)
	virtual bool isDrawInDemo() const { return false; }               // _18 (weak)
	virtual void doCreateObj(JKRArchive*);                            // _20
	virtual void doUserCallBackFunc(Resource::MgrCommand*);           // _24
};

struct ObjCave : public ::Screen::ObjBase {
	ObjCave(const char*);

	og::Screen::DispMemberCave* _38;    // _38
	og::Screen::OtakaraSensor* _3C;     // _3C
	og::Screen::BloGroup* _40;          // _40
	og::Screen::DopingScreen* _44;      // _44
	og::Screen::NaviLifeGauge* _48;     // _48
	og::Screen::NaviLifeGauge* _4C;     // _4C
	og::Screen::PikminCounterCave* _50; // _50
	og::Screen::TotalPokoScreen* _54;   // _54
	P2DScreen::Mgr_tuning* _58;         // _58
	float _5C;                          // _5C
	float _60;                          // _60
	u32 _64;                            // _64 - unknown type
	u32 _68;                            // _68 - possibly pokoCount?
	float _6C;                          // _6C
	J2DPane* _70;                       // _70
	J2DPane* _74;                       // _74
	u32 _78;                            // _78 - unknown type
};
} // namespace newScreen
} // namespace og

#endif
