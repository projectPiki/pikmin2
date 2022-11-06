#ifndef _OG_NEWSCREEN_VS_H
#define _OG_NEWSCREEN_VS_H

#include "Screen/Bases.h"
#include "JSystem/J2D/J2DPane.h"

namespace P2DScreen {
struct Mgr_tuning;
} // namespace P2DScreen

namespace og {
namespace Screen {
struct DispMemberVs;
struct BloGroup;
struct CallBack_LifeGauge;
struct DopingCheck;
struct ScaleMgr;
} // namespace Screen

namespace newScreen {
struct Vs : public ::Screen::SceneBase {
	Vs();

	virtual const char* getResName() const { return "res_vs.szs"; } // _1C (weak)
	virtual SceneType getSceneType() { return SCENE_VS; }           // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_OGA; }        // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_VS; }      // _10 (weak)
	virtual bool isDrawInDemo() const { return false; }             // _18 (weak)
	virtual void doCreateObj(JKRArchive*);                          // _20
	virtual void doUserCallBackFunc(Resource::MgrCommand*);         // _24

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
};

struct ObjVs : public ::Screen::ObjBase {
	struct ScreenSet {
		P2DScreen::Mgr_tuning* _00;          // _00
		og::Screen::CallBack_LifeGauge* _04; // _04
		og::Screen::DopingCheck* _08;        // _08
		og::Screen::ScaleMgr* _0C;           // _0C
		og::Screen::ScaleMgr* _10;           // _10
		J2DPane* _14;                        // _14
		J2DPane* _18;                        // _18
	};

	ObjVs(const char*);

	virtual ~ObjVs();                                     // _08 (weak)
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

	void setOnOffBdama(bool);
	void checkObake();
	void doUpdateCommon();

	og::Screen::DispMemberVs* _38; // _38
	og::Screen::BloGroup* _3C;     // _3C
	P2DScreen::Mgr_tuning* _40;    // _40
	ScreenSet* _44;                // _44
	ScreenSet* _48;                // _48
	u8 _4C[0x8];                   // _4C - unknown
	J2DPictureEx* _54[4];          // _54
	J2DPictureEx* _64[4];          // _64
	J2DPictureEx* _74[4];          // _74
	J2DPictureEx* _84[4];          // _84
	J2DPictureEx* _94[4];          // _94
	J2DPictureEx* _A4[4];          // _A4
	og::Screen::ScaleMgr* _B4[4];  // _B4
	og::Screen::ScaleMgr* _C4[4];  // _C4
	og::Screen::ScaleMgr* _D4[4];  // _D4
	og::Screen::ScaleMgr* _E4[4];  // _E4
	u8 _F4[0xC];                   // _F4 - unknown
	int _100;                      // _100
	bool _104;                     // _104
	bool _105;                     // _105
	f32 _108;                      // _108
	u8 _10C[0x4];                  // _10C - unknown
	J2DPictureEx* _110;            // _110
	J2DPictureEx* _114;            // _114
	f32 _118;                      // _118
	f32 _11C;                      // _11C
	u8 _120[0x8];                  // _120 - unknown
	u8 _129;                       // _129 - unknown
};
} // namespace newScreen
} // namespace og

#endif
