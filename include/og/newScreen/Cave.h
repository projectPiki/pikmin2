#ifndef _OG_NEWSCREEN_CAVE_H
#define _OG_NEWSCREEN_CAVE_H

#include "Screen/Bases.h"
#include "JSystem/J2D/J2DPane.h"

namespace P2DScreen {
struct Mgr_tuning;
} // namespace P2DScreen

namespace og {
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

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
};

struct ObjCave : public ::Screen::ObjBase {
	ObjCave(const char*);

	virtual ~ObjCave();                                   // _08 (weak)
	virtual bool doStart(const ::Screen::StartSceneArg*); // _44
	virtual bool doEnd(const ::Screen::EndSceneArg*);     // _48
	virtual void doCreate(JKRArchive*);                   // _4C
	virtual bool doUpdateFadein();                        // _50
	virtual void doUpdateFadeinFinish();                  // _54
	virtual bool doUpdate();                              // _58
	virtual void doUpdateFinish();                        // _5C
	virtual bool doUpdateFadeout();                       // _60
	virtual void doUpdateFadeoutFinish();                 // _64
	virtual void doDraw(Graphics&);                       // _68

	void commonUpdate();

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	og::Screen::DispMemberCave* m_disp;           // _38
	og::Screen::OtakaraSensor* m_otakara;         // _3C
	og::Screen::BloGroup* m_bloGroup;             // _40
	og::Screen::DopingScreen* m_doping;           // _44
	og::Screen::NaviLifeGauge* m_lifeGauge1;      // _48
	og::Screen::NaviLifeGauge* m_lifeGauge2;      // _4C
	og::Screen::PikminCounterCave* m_pikiCounter; // _50
	og::Screen::TotalPokoScreen* m_totalPoko;     // _54
	P2DScreen::Mgr_tuning* m_sensorScreen;        // _58
	f32 m_fadeLevel;                              // _5C
	f32 m_scale;                                  // _60
	bool m_totalPokoActive;                       // _64
	u32 m_pokos;                                  // _68
	f32 m_totalPokoTimer;                         // _6C
	J2DPane* m_paneChika;                         // _70
	J2DPane* m_paneFinalf;                        // _74
	bool m_doSensorEff;                           // _78

	static struct StaticValues {
		f32 _00; // _00
		f32 _04; // _04
		f32 _08; // _08
		f32 _0C; // _0C
		f32 _10; // _10
		f32 _14; // _14
		f32 _18;
		f32 _1C;
		f32 _20;
		f32 _24;
		f32 _28;
		f32 _2C;
		f32 _30;
		f32 _34;
		f32 _38;
		f32 _3C;
		f32 _40;
	} msVal;
};
} // namespace newScreen
} // namespace og

#endif
