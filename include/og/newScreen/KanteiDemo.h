#ifndef _OG_NEWSCREEN_KANTEIDEMO_H
#define _OG_NEWSCREEN_KANTEIDEMO_H

#include "Screen/Bases.h"
#include "JSystem/J2D/J2DPane.h"

namespace P2DScreen {
// this is just a temp dec until the header is made
struct Mgr_tuning;
}

namespace efx2d {
// this is just a temp dec until the header is made
struct TForeverN;
}

namespace P2JME {
namespace Movie {
// this is just a temp dec until the header is made
struct TControl;
}
}

namespace og {
namespace Screen {
// these are temp decs until these headers are made
struct DispMemberKantei;
struct CallBack_CounterSlot;
struct CallBack_CounterRV;
struct StickAnimMgr;
struct ScaleMgr;
}

namespace newScreen {
struct KanteiDemo : public ::Screen::SceneBase {
	KanteiDemo();

	virtual SceneType getSceneType();                       // _00
	virtual ScreenOwnerID getOwnerID();                     // _04
	virtual ScreenMemberID getMemberID();                   // _08
	virtual bool isUseBackupSceneInfo();                    // _0C
	virtual const char* getResName() const;                 // _14
	virtual void doCreateObj(JKRArchive*);                  // _18
	virtual void doUserCallBackFunc(Resource::MgrCommand*); // _1C

	// _00 VTBL
	::Screen::ObjBase* m_objBase;
};

struct ObjKantei : ::Screen::ObjBase {
	ObjKantei(const char*);

	og::Screen::DispMemberKantei* _38;			// _38
	P2DScreen::Mgr_tuning* _3C;					// _3C
	P2DScreen::Mgr_tuning* _40;					// _40
	P2DScreen::Mgr_tuning* _44;					// _44
	P2DScreen::Mgr_tuning* _48;					// _48
	int _4C;									// _4C
	P2JME::Movie::TControl* _50;				// _50
	J2DPane* _54;								// _54
	float _58;									// _58
	float _5C;									// _5C
	float _60;									// _60
	float _64;									// _64
	u8 _68[0x8];								// _68 - unknown type
	u64 _70;									// _70
	u8 _74[0x4];								// _74 - unknown type
	float _7C;									// _7C
	float _80;									// _80
	J2DPane* _84;								// _84
	J2DPane* _88;								// _88
	float _8C;									// _8C
	og::Screen::CallBack_CounterSlot* _90;		// _90
	og::Screen::CallBack_CounterRV* _94;		// _94
	int _98;									// _98
	u32 _9C;									// _9C
	int _A0;									// _A0
	u32 _A4;									// _A4
	int _A8;									// _A8
	og::Screen::StickAnimMgr* _AC;				// _AC
	u8 _B0[0x4];								// _B0 - unknown type
	efx2d::TForeverN* _B4;						// _B4
	J2DPane* _B8;								// _B8
	og::Screen::ScaleMgr* _BC;					// _BC
	float _C0;									// _C0
	float _C4;									// _C4
	u8 _C8[0x4];								// _C8 - unknown type
	int _CC;									// _CC
	u8 _D0[0x8];								// _D0 - ID64 according to ghidra
	u8 _D8[0x4];								// _D8 - unknown type
	float _DC;									// _DC
	float _E0;									// _E0
	u8 _E4[0x4];								// _E4 - unknown type
	float _E8;									// _E8
	int _EC;									// _EC
	u8 _F0;										// _F0
};
} // namespace newScreen
} // namespace og

#endif
