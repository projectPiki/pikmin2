#ifndef _OG_NEWSCREEN_GROUND_H
#define _OG_NEWSCREEN_GROUND_H

#include "JSystem/J2D/J2DPane.h"
#include "JSystem/JUT/TColor.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/Data.h"
#include "og/Screen/DispMember.h"
#include "Screen/Bases.h"
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

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	Screen::DispMemberBase* m_dispMember;       // _38
	og::Screen::OtakaraSensor* m_otakaraSensor; // _3C
	og::Screen::BloGroup* m_bloGroup;           // _40
	og::Screen::SunMeter* m_sunMeter;           // _44
	og::Screen::DopingScreen* m_dopingScreen;   // _48
	og::Screen::NaviLifeGauge* _4C;             // _4C
	og::Screen::NaviLifeGauge* _50;             // _50
	og::Screen::PikminCounter* m_pikminCounter; // _54
	P2DScreen::Mgr_tuning* _58;                 // _58
	f32 _5C;                                    // _5C
	f32 _60;                                    // _60
	u8 _64;                                     // _64
	u32 _68;                                    // _68
	f32 _6C;                                    // _6C
};

} // namespace newScreen
} // namespace og

#endif
