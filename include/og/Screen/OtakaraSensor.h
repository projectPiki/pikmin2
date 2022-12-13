#ifndef _OG_SCREEN_OTAKARASENSOR_H
#define _OG_SCREEN_OTAKARASENSOR_H

#include "types.h"
#include "og/Screen/DispMember.h"

struct J2DPane;
struct J2DGrafContext;

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

	inline void setSensorVec1(f32 x, f32 y) { _4C = Vector2f(x, y); }

	inline void setSensorVec2(f32 x, f32 y) { _5C = Vector2f(x, y); }

	inline void setSensorVec3(f32 x, f32 y) { _64 = Vector2f(x, y); }

	f32 m_level;           // _00
	f32 m_angle;           // _04
	J2DPane* m_pane1;      // _08
	J2DPane* m_pane2;      // _0C
	f32 m_currAngle;       // _10
	f32 _14;               // _14
	f32 _18;               // _18
	f32 _1C;               // _1C
	f32 _20;               // _20
	ScaleMgr* m_scaleMgr;  // _24
	f32 _28;               // _28
	bool _2C;              // _2C
	AngleMgr* m_angleMgr;  // _30
	f32 m_timer;           // _34
	f32 m_angleOffs;       // _38
	f32 _3C;               // _3C
	bool _40;              // _40
	f32 _44;               // _44
	f32 _48;               // _48
	Vector2f _4C;          // _4C
	bool _54;              // _54
	f32 _58;               // _58
	Vector2f _5C;          // _5C
	Vector2f _64;          // _64
	bool m_useAngleOffset; // _6C
	bool m_isInit;         // _6D
	int _70;               // _70
	f32 m_noiseLevel;      // _74
	bool _78;              // _78
	f32 _7C;               // _7C
	int m_state;           // _80
	bool _84;              // _84
	f32 _88;               // _88
	f32 _8C;               // _8C
	bool _90;              // _90
};

} // namespace Screen
} // namespace og

#endif
