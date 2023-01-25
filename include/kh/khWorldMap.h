#ifndef _KH_WORLDMAP_H
#define _KH_WORLDMAP_H

#include "JSystem/JGeometry.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "Vector2.h"
#include "types.h"

struct Controller;
struct Graphics;
struct J2DAnmColorKey;
struct J2DAnmTexPattern;
struct J2DAnmTextureSRTKey;
struct J2DAnmTransform;
struct J2DAnmTransformKey;
struct J2DPane;

namespace efx2d {
namespace WorldMap {
struct T2DMapFlare;
struct T2DOnyonKira;
struct T2DRocketB;
struct T2DRocketGlow;
struct T2DShstar1;
} // namespace WorldMap
} // namespace efx2d

namespace P2DScreen {
struct Mgr;
struct Mgr_tuning;
} // namespace P2DScreen

namespace og {
namespace Screen {
struct ArrowAlphaBlink;
struct CallBack_CounterRV;
struct ScaleMgr;
} // namespace Screen
} // namespace og

namespace Game {
struct CourseInfo;
struct Stages;

namespace WorldMap {
struct InitArg {
	inline InitArg()
	{
		m_heap                       = nullptr;
		m_controller                 = nullptr;
		m_stages                     = nullptr;
		m_dayCount                   = 0;
		m_initialCourseIndex         = 0;
		m_hasNewTreasureHoardEntries = false;
		m_hasNewPiklopediaEntries    = false;
		_16                          = 0;
	}

	JKRHeap* m_heap;                   // _00
	Stages* m_stages;                  // _04
	Controller* m_controller;          // _08
	int m_dayCount;                    // _0C
	int m_initialCourseIndex;          // _10
	bool m_hasNewPiklopediaEntries;    // _14
	bool m_hasNewTreasureHoardEntries; // _15
	u8 _16;                            // _16
};

enum UpdateArgStatus { WMapUpdate_0, WMapUpdate_GoToLoad, WMapUpdate_2, WMapUpdate_GoToZukan, WMapUpdate_4, WMapUpdate_ReturnToTitle };

struct UpdateArg {
	CourseInfo* m_courseInfo; // _00
	int m_status;             // _04
};

struct Base : public JKRDisposer {
	virtual ~Base() { }                 // _08 (weak)
	virtual void loadResource() { }     // _0C (weak)
	virtual void init(InitArg&) { }     // _10 (weak)
	virtual void update(UpdateArg&) { } // _14 (weak)
	virtual void draw(Graphics&) { }    // _18 (weak)
	virtual void draw1st(Graphics&) { } // _1C (weak)
	virtual void draw2nd(Graphics&) { } // _20 (weak)
	virtual void draw3rd(Graphics&) { } // _24 (weak)
	virtual void draw4th(Graphics&) { } // _28 (weak)

	// _00     = VTBL
	// _00-_18 = JKRDisposer
};
} // namespace WorldMap
} // namespace Game

namespace kh {
namespace Screen {
struct khUtilColorAnm;
struct khUtilColorAnmWM;
struct khUtilFadePaneWM;
struct WorldMap : public Game::WorldMap::Base {
	/**
	 * @size{0x34}
	 */
	struct OnyonDynamics {
		OnyonDynamics();

		void initPtcl();
		void move(WorldMap*, const JGeometry::TVec2f&);
		void update(WorldMap*);
		void kill();

		J2DPane* _00;                               // _00
		Vector2f _04;                               // _04
		u8 _0C[8];                                  // _0C
		Vector2f _14;                               // _14
		efx2d::WorldMap::T2DOnyonKira* m_onyonKira; // _1C
		f32 _20;                                    // _20
		f32 _24;                                    // _24
		f32 _28;                                    // _28
		f32 _2C;                                    // _2C
		s16 _30;                                    // _30
	};

	WorldMap();

	virtual ~WorldMap();                             // _08 (weak)
	virtual void loadResource();                     // _0C
	virtual void init(Game::WorldMap::InitArg&);     // _10
	virtual void update(Game::WorldMap::UpdateArg&); // _14
	virtual void draw1st(Graphics&);                 // _1C
	virtual void draw2nd(Graphics&);                 // _20
	virtual void draw3rd(Graphics&);                 // _24
	virtual void draw4th(Graphics&);                 // _28

	void changeInfo();
	void changeState();
	void effectFirstTime();
	void finish();
	void getRotDir(const JGeometry::TVec2f&, f32);
	int getTarget();
	void newMapOpen();
	void onyonMove();
	void onyonUpdate();
	void postureControl(J2DPane*);
	void rocketMove(J2DPane*, bool);
	void rocketUpdate(J2DPane*);
	void tag2num(u64);

	// _00     = VTBL
	// _00-_18 = Game::WorldMap::Base
	Game::WorldMap::InitArg m_initArg;                          // _18
	P2DScreen::Mgr_tuning* m_screenKitagawa;                    // _30
	J2DAnmTransform* m_bckAnm1;                                 // _34
	J2DAnmTransformKey* m_bckAnm2;                              // _38
	J2DAnmColorKey* m_kitaAnim1;                                // _3C
	J2DAnmTextureSRTKey* m_kitaAnim2;                           // _40
	J2DAnmTextureSRTKey* m_kitaAnim3;                           // _44
	P2DScreen::Mgr* m_screenRocket;                             // _48
	J2DAnmTransformKey* m_rocketAnim1;                          // _4C
	J2DAnmTexPattern* m_rocketAnim2;                            // _50
	P2DScreen::Mgr_tuning* m_screenInfo;                        // _54
	J2DAnmTextureSRTKey* m_infoAnim1;                           // _58
	J2DAnmTextureSRTKey* m_infoAnim2;                           // _5C
	J2DAnmTextureSRTKey* m_infoAnim3;                           // _60
	og::Screen::ScaleMgr* m_scaleMgr;                           // _64
	f32 m_frameOf34;                                            // _68
	f32 m_frameOf38;                                            // _6C
	f32 m_frameOf3C;                                            // _70
	f32 m_frameOf40;                                            // _74
	f32 m_frameOf44;                                            // _78
	f32 m_frameOf4C;                                            // _7C
	f32 m_frameOf50;                                            // _80
	f32 m_frameOf58;                                            // _84
	f32 m_frameOf5C;                                            // _88
	f32 m_frameOf60;                                            // _8C
	f32 m_cameraZoomMinFrame;                                   // _90
	f32 m_cameraZoomX;                                          // _94
	f32 _98;                                                    // _98
	Vector2f m_rocketPosition;                                  // _9C
	f32 _A4;                                                    // _A4
	f32 _A8;                                                    // _A8
	Vector2f m_rocketAngle;                                     // _AC
	f32 m_rocketAngleSin;                                       // _B4
	f32 m_rocketAngleCos;                                       // _B8
	f32 m_rocketScale;                                          // _BC
	efx2d::WorldMap::T2DRocketGlow* m_rocketGlow;               // _C0
	efx2d::WorldMap::T2DRocketB* m_rocketB;                     // _C4
	efx2d::WorldMap::T2DMapFlare* m_mapFlare;                   // _C8
	efx2d::WorldMap::T2DShstar1* m_shstar1;                     // _CC
	f32 _D0;                                                    // _D0
	f32 _D4;                                                    // _D4
	f32 _D8;                                                    // _D8
	f32 _DC;                                                    // _DC
	Vector2f m_light01Center;                                   // _E0
	Vector2f m_starCenter;                                      // _E8
	OnyonDynamics* m_onyonArray;                                // _F0
	int m_onyonCount;                                           // _F4
	int m_currentCourseIndex;                                   // _F8
	int _FC;                                                    // _FC
	og::Screen::CallBack_CounterRV* m_pokoCounter;              // _100
	og::Screen::CallBack_CounterRV* m_groundTreasureCounter;    // _104
	og::Screen::CallBack_CounterRV* _108;                       // _108
	og::Screen::CallBack_CounterRV* m_caveTreasureCounters[4];  // _10C
	og::Screen::CallBack_CounterRV* m_caveTreasureCounters2[4]; // _11C
	int m_groundTreasureCount;                                  // _12C
	int m_groundTreasureMax;                                    // _130
	u32 m_caveOtaNum[4];                                        // _134
	u32 m_caveOtaMax[4];                                        // _144
	khUtilFadePaneWM* m_onyonFadePane;                          // _154
	khUtilColorAnmWM* m_colorAnims[5];                          // _158
	khUtilColorAnm* m_colorAnim2;                               // _16C
	og::Screen::ArrowAlphaBlink* m_arrowAlphaBlink;             // _170
	int m_currentState;                                         // _174
	int m_angle;                                                // _178
	u32 m_flags;                                                // _17C
	char m_stateID;                                             // _180
	u8 m_openCourses;                                           // _181
	u8 m_courseJustOpenFlags;                                   // _182
	u8 m_zukanFadeout;                                          // _183
};
} // namespace Screen
} // namespace kh

#endif
