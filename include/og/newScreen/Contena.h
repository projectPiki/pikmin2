#ifndef _OG_NEWSCREEN_CONTENA_H
#define _OG_NEWSCREEN_CONTENA_H

#include "Screen/Bases.h"
#include "JSystem/J2D/J2DPane.h"

namespace P2DScreen {
struct Mgr_tuning;
struct Mgr;
} // namespace P2DScreen

namespace og {
namespace Screen {
struct DispMemberContena;
struct ContenaCounter;
struct AlphaMgr;
struct ScaleMgr;
struct StickAnimMgr;
} // namespace Screen

namespace newScreen {
struct Contena : public ::Screen::SceneBase {
	Contena();

	virtual const char* getResName() const { return "res_contena.szs"; } // _1C (weak)
	virtual SceneType getSceneType() { return m_sceneType; }             // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_OGA; }             // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_CONTENA; }      // _10 (weak)
	virtual bool isUseBackupSceneInfo() { return true; }                 // _14 (weak)
	virtual void doCreateObj(JKRArchive*);                               // _20
	virtual void doUserCallBackFunc(Resource::MgrCommand*);              // _24

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
	SceneType m_sceneType; // _220
};

struct ObjContena : public ::Screen::ObjBase {
	ObjContena(const char*);

	virtual ~ObjContena();                                // _08 (weak)
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

	void putinPiki(bool);
	void takeoutPiki(bool);
	void moveContena();
	void commonUpdate();

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	og::Screen::DispMemberContena* m_contena;     // _38
	og::Screen::ContenaCounter* m_contenaCounter; // _3C
	P2DScreen::Mgr_tuning* _40;                   // _40
	P2DScreen::Mgr* _44;                          // _44
	Controller* m_controller;                     // _48
	u8 _4C[0x28];                                 // _4C, unknown
	og::Screen::AlphaMgr* _74;                    // _74
	u8 _78[0x2C];                                 // _78, unknown
	int _A4;                                      // _A4
	f32 _A8;                                      // _A8
	u8 _AC[0x44];                                 // _AC, unknown
	f32 _F0;                                      // _F0
	u8 _F4[0x4];                                  // _F4, unknown
	J2DPane* _F8;                                 // _F8
	f32 _FC;                                      // _FC
	f32 _100;                                     // _100
	u8 _104[0xC];                                 // _104, unknown
	f32 _110;                                     // _110
	og::Screen::StickAnimMgr* m_stickAnimMgr;     // _114
	og::Screen::AlphaMgr* _118;                   // _118
	og::Screen::AlphaMgr* _11C;                   // _11C
	og::Screen::ScaleMgr* _120;                   // _120
	og::Screen::ScaleMgr* _124;                   // _124
	J2DPane* _128;                                // _128
	J2DPane* _12C;                                // _12C
	f32 _130;                                     // _130
	f32 _134;                                     // _134
	f32 _138;                                     // _138
	f32 _13C;                                     // _13C
	f32 _140;                                     // _140
	f32 _144;                                     // _144
	u8 _148[0x4];                                 // _148, unknown
	void* _14C;                                   // _14C, unknown
	int _150;                                     // _150
	J2DPane* _154;                                // _154
	J2DPane* _158;                                // _158
	og::Screen::ScaleMgr* _15C;                   // _15C
	J2DPane* _160;                                // _160
	J2DPane* _164;                                // _164
	og::Screen::ScaleMgr* _168;                   // _168
	u8 _16C;                                      // _16C
};
} // namespace newScreen
} // namespace og

#endif
