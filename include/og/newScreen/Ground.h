#ifndef _OG_NEWSCREEN_GROUND_H
#define _OG_NEWSCREEN_GROUND_H

#include "JSystem/J2D/J2DPane.h"
#include "JSystem/JUT/TColor.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/Data.h"
#include "og/Screen/DispMember.h"
#include "Screen/screenObj.h"
#include "types.h"

namespace P2DScreen {
struct Mgr_tuning;
}

namespace og {
namespace Screen {
struct BloGroup;
struct DopingScreen;
struct NaviLifeGauge;
struct OtakaraSensor;
struct PikminCounter;
struct SunMeter;
} // namespace Screen

namespace newScreen {
void initGround();

/**
 * @size{0x228}
 */
struct Ground : public ::Screen::SceneBase {
	Ground();

	~Ground(); // unused/inlined

	virtual SceneType getSceneType();                       // _08 (weak)
	virtual ScreenOwnerID getOwnerID();                     // _0C (weak)
	virtual ScreenMemberID getMemberID();                   // _10 (weak)
	virtual bool isDrawInDemo() const;                      // _18 (weak)
	virtual const char* getResName() const;                 // _1C (weak)
	virtual void doCreateObj(JKRArchive*);                  // _20
	virtual void doUserCallBackFunc(Resource::MgrCommand*); // _24
	virtual void doUpdateActive();                          // _2C
	virtual bool doStart(::Screen::StartSceneArg*);         // _3C

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
	u8 _220; // _220
	u8 _221; // _221
	u8 _222; // _222
	u8 _223; // _223
	u8 _224; // _224
};

struct ObjGround : public ::Screen::ObjBase {
	ObjGround(char const*);

	virtual ~ObjGround();                                 // _08 (weak)
	virtual bool doStart(const ::Screen::StartSceneArg*); // _44
	virtual bool doEnd(const ::Screen::EndSceneArg*);     // _48
	virtual void doCreate(JKRArchive*);                   // _4C
	virtual bool doUpdateFadein();                        // _50
	virtual void doUpdateFadeinFinish();                  // _54
	virtual bool doUpdate();                              // _58
	virtual void doUpdateFinish();                        // _5C
	virtual bool doUpdateFadeout();                       // _60
	virtual void doUpdateFadeoutFinish();                 // _64
	virtual void doDraw(Graphics& gfx);                   // _68

	void commonUpdate();

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	Screen::DispMemberGround* m_disp;         // _38
	og::Screen::OtakaraSensor* m_otakara;     // _3C
	og::Screen::BloGroup* m_bloGroup;         // _40
	og::Screen::SunMeter* m_sunMeter;         // _44
	og::Screen::DopingScreen* m_doping;       // _48
	og::Screen::NaviLifeGauge* m_lifeGauge1;  // _4C
	og::Screen::NaviLifeGauge* m_lifeGauge2;  // _50
	og::Screen::PikminCounter* m_pikiCounter; // _54
	P2DScreen::Mgr_tuning* m_sensorScreen;    // _58
	f32 m_fadeLevel;                          // _5C
	f32 m_scale;                              // _60
	u8 _64;                                   // _64
	u32 m_pokos;                              // _68
	f32 _6C;                                  // _6C

	static struct StaticValues {
		inline StaticValues()
		{
			_00           = 0.3f;
			_04           = 0.1f;
			_08           = -50.0f;
			_0C           = 0.0f;
			m_sensorX     = 10.0f;
			m_sensorY     = -40.0f;
			m_sensorScale = 0.9f;
			m_dopingX     = 0.0f;
			m_dopingY     = -30.0f;
		}

		f32 _00;           // _00
		f32 _04;           // _04
		f32 _08;           // _08
		f32 _0C;           // _0C
		f32 m_sensorX;     // _10
		f32 m_sensorY;     // _14
		f32 m_sensorScale; // _18
		f32 m_dopingX;     // _1C
		f32 m_dopingY;     // _20
	} msVal;
};

} // namespace newScreen
} // namespace og

#endif
