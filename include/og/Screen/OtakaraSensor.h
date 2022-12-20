#ifndef _OG_SCREEN_OTAKARASENSOR_H
#define _OG_SCREEN_OTAKARASENSOR_H

#include "types.h"
#include "og/Screen/DispMember.h"
#include "og/Screen/PictureTreeColor.h"

namespace og {
namespace Screen {

struct ScaleMgr;
struct AngleMgr;

struct OtakaraSensor {
	OtakaraSensor();
	void init(J2DPane*, J2DPane*, int);
	void startSensorEff();
	void setParam(f32, int, bool, bool);
	void updateInit();
	void show();
	void update();
	void adjPos(f32, f32);
	void adjScale(f32);
	void draw(J2DGrafContext&);
	void hide();
	f32 calcLevel(f32);
	void calcGrayColor();
	void calcAppear();
	void startGraySensor();
	void calcAngle();
	void calcReaction();

	inline void setSensorVec1(f32 x, f32 y) { _4C = Vector2f(x, y); }

	inline void setSensorVec2(f32 x, f32 y) { m_completeEfxOffset = Vector2f(x, y); }

	inline void setSensorVec3(f32 x, f32 y) { m_appearEfxOffset = Vector2f(x, y); }

	f32 m_currReactionLevel; // _00
	f32 m_angle;             // _04
	J2DPane* m_pane1;        // _08
	J2DPane* m_pane2;        // _0C
	f32 m_currAngle;         // _10
	f32 m_reactTimer;        // _14
	Vector2f m_panePos;      // _18
	f32 m_scale;             // _20
	ScaleMgr* m_scaleMgr;    // _24
	f32 m_angleOffsetMod;    // _28
	bool m_doAngleOffset;    // _2C
	bool m_efxActive;
	AngleMgr* m_angleMgr;                     // _30
	f32 m_timer;                              // _34
	f32 m_angleOffs;                          // _38
	f32 m_angleOffsetMod2;                    // _3C
	bool m_doStartAppear;                     // _40
	f32 m_appearTimer;                        // _44
	f32 m_sensorGetTimer;                     // _48
	Vector2f _4C;                             // _4C
	bool m_isFuefukid;                        // _54
	f32 m_randAngle;                          // _58
	Vector2f m_completeEfxOffset;             // _5C
	Vector2f m_appearEfxOffset;               // _64
	bool m_doIncNoise;                        // _6C
	bool m_isInit;                            // _6D
	PictureTreeColorCaptureInfo* m_treeColor; // _70
	f32 m_noiseLevel;                         // _74
	bool m_isPoweredOff;                      // _78
	f32 m_setGrayTimer;                       // _7C
	int m_state;                              // _80
	bool m_enabled;                           // _84
	bool m_notreasures;                       // _85
	bool m_isPoweringOff;                     // _86
	f32 m_powerOffTimer;                      // _88
	f32 m_noiseTimer;                         // _8C
	bool m_canIncNoise;                       // _90
};

} // namespace Screen
} // namespace og

#endif
