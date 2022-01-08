#ifndef _OG_GROUND_H
#define _OG_GROUND_H

#include "JSystem/J2D/J2DPane.h"
#include "JSystem/JUtility.h"
#include "Morimura/DayEndCount.h"
#include "Morimura/HurryUp.h"
#include "og/Screen/ogScreen.h"
#include "Screen/Bases.h"
#include "types.h"

struct Graphics;
struct JKRArchive;
struct J2DPane;

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

struct DataNavi {
	float m_naviLifeRatio; // _00
	u32 _04;               // _04
	u32 m_nextThrowPiki;   // _08
	u32 m_dope1Count;      // _0C
	u32 m_dope0Count;      // _10
	u8 _14;                // _14
};

struct DataGame {
	float _00;
	u32 _04;
	u32 _08;
	u32 _0C;
	u32 _10;
	u8 _14;
	uint m_pokoCountMaybe;
};

/**
 * @size{0x88}
 */
struct DispMemberGround : public DispMemberBase {
	/**
	 * @reifiedAddress{801560B4}
	 * @reifiedFile{plugProjectKandoU/singleGameSection.cpp}
	 */
	virtual u32 getSize() // _00
	{
		return sizeof(DispMemberGround);
	}

	/**
	 * @reifiedAddress{801560BC}
	 * @reifiedFile{plugProjectKandoU/singleGameSection.cpp}
	 */
	virtual u32 getOwnerID() // _04
	{
		return OWNER_OGA;
	}

	/**
	 * @reifiedAddress{801560C8}
	 * @reifiedFile{plugProjectKandoU/singleGameSection.cpp}
	 */
	virtual u64 getMemberID() // _08
	{
		return MEMBER_GROUND;
	}

	DataGame m_dataGame;                 // _08
	DataNavi m_dataNavi[2];              // _24
	float _54;                           // _54
	int _58;                             // _58
	u8 _5C;                              // _5C
	u8 _5D;                              // _5D
	u8 _5E;                              // _5E
	bool _5F;                            // _5F
	bool _60;                            // _60
	u8 _61;                              // _61
	u8 _62;                              // _62
	bool _63;                            // _63
	bool _64;                            // _64
	DispMemberDayEndCount m_dayEndCount; // _68
	DispMemberHurryUp m_hurryUp;         // _78
};

} // namespace Screen

namespace newScreen {
void initGround();

/**
 * @size{0x228}
 */
struct Ground : public ::Screen::SceneBase {
	Ground();
	~Ground(); // unused/inlined

	virtual SceneType getSceneType();                       // _00
	virtual ScreenOwnerID getOwnerID();                     // _04
	virtual ScreenMemberID getMemberID();                   // _08
	virtual bool isDrawInDemo() const;                      // _10
	virtual const char* getResName() const;                 // _14
	virtual void doCreateObj(JKRArchive*);                  // _18
	virtual void doUserCallBackFunc(Resource::MgrCommand*); // _1C
	virtual void doUpdateActive();                          // _24
	virtual bool doStart(::Screen::StartSceneArg*);         // _34

	u8 _220; // _220
	u8 _221; // _221
	u8 _222; // _222
	u8 _223; // _223
	u8 _224; // _224
};

struct ObjGround : public ::Screen::ObjBase {
	ObjGround(char const*);
	virtual void doCreate(JKRArchive*);

	virtual ~ObjGround();                                 // _00
	virtual bool doStart(const ::Screen::StartSceneArg*); // _2C
	virtual bool doEnd(const ::Screen::EndSceneArg*);     // _30
	virtual bool doUpdateFadein();                        // _38
	virtual void doUpdateFadeinFinish();                  // _3C
	virtual bool doUpdate();                              // _40
	virtual void doUpdateFinish();                        // _44
	virtual bool doUpdateFadeout();                       // _48
	virtual void doUpdateFadeoutFinish();                 // _4C
	virtual void doDraw(Graphics&);                       // _50

	Screen::DispMemberBase* m_dispMember;       // _38
	og::Screen::OtakaraSensor* m_otakaraSensor; // _3C
	og::Screen::BloGroup* m_bloGroup;           // _40
	og::Screen::SunMeter* m_sunMeter;           // _44
	og::Screen::DopingScreen* m_dopingScreen;   // _48
	og::Screen::NaviLifeGauge* _4C;             // _4C
	og::Screen::NaviLifeGauge* _50;             // _50
	og::Screen::PikminCounter* m_pikminCounter; // _54
	P2DScreen::Mgr_tuning* _58;                 // _58
	float _5C;                                  // _5C
	float _60;                                  // _60
	u8 _64;                                     // _64
	u32 _68;                                    // _68
	float _6C;                                  // _6C
};

} // namespace newScreen
} // namespace og

#endif
