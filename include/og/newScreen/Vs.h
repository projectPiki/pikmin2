#ifndef _OG_NEWSCREEN_VS_H
#define _OG_NEWSCREEN_VS_H

#include "Screen/screenObj.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/BloGroup.h"
#include "og/Screen/ScaleMgr.h"
#include "og/Screen/DopingScreen.h"
#include "og/Screen/callbackNodes.h"

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
		inline ScreenSet()
		{
			m_screen     = new P2DScreen::Mgr_tuning;
			m_lifeGauge  = new og::Screen::CallBack_LifeGauge;
			m_doping     = new og::Screen::DopingCheck;
			m_scaleMgr1  = new og::Screen::ScaleMgr;
			m_scaleMgr2  = new og::Screen::ScaleMgr;
			m_paneToyo01 = nullptr;
			m_paneToyo00 = nullptr;
		}

		void init(og::Screen::DataNavi*, JKRArchive*, u32*);
		inline void update(og::Screen::DataNavi&);

		P2DScreen::Mgr_tuning* m_screen;             // _00
		og::Screen::CallBack_LifeGauge* m_lifeGauge; // _04
		og::Screen::DopingCheck* m_doping;           // _08
		og::Screen::ScaleMgr* m_scaleMgr1;           // _0C
		og::Screen::ScaleMgr* m_scaleMgr2;           // _10
		J2DPane* m_paneToyo01;                       // _14
		J2DPane* m_paneToyo00;                       // _18
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

	// unused/inline
	void isCompBdama(int);
	bool startGetBdama(J2DPane*);
	void startBdamaComp(J2DPane*);
	void startBdamaWinRed(J2DPane*);
	void startBdamaWinBlue(J2DPane*);

	og::Screen::DispMemberVs* m_disp;        // _38
	og::Screen::BloGroup* m_bloGroup;        // _3C
	P2DScreen::Mgr_tuning* m_screenIcons;    // _40
	ScreenSet* m_screenP1;                   // _44
	ScreenSet* m_screenP2;                   // _48
	f32 m_fadeLevel;                         // _4C
	f32 m_scale;                             // _50
	J2DPictureEx* m_pane_bedama1P[4];        // _54
	J2DPictureEx* m_pane_nodama1P[4];        // _64
	J2DPictureEx* m_pane_windama1P[4];       // _74
	J2DPictureEx* m_pane_bedama2P[4];        // _84
	J2DPictureEx* m_pane_nodama2P[4];        // _94
	J2DPictureEx* m_pane_windama2P[4];       // _A4
	og::Screen::ScaleMgr* m_scaleMgrP1_1[4]; // _B4
	og::Screen::ScaleMgr* m_scaleMgrP2_1[4]; // _C4
	og::Screen::ScaleMgr* m_scaleMgrP1_2[4]; // _D4
	og::Screen::ScaleMgr* m_scaleMgrP2_2[4]; // _E4
	bool m_bedamaGotFlagsP1[4];              // _F4
	bool m_bedamaGotFlagsP2[4];              // _F8
	f32 m_finishTimer;                       // _FC
	int m_doneState;                         // _100
	bool m_hasAllBedamaP1;                   // _104
	bool m_hasAllBedamaP2;                   // _105
	f32 m_bedamaGetTimer;                    // _108
	bool m_firstBedamaGetP1;                 // _10C
	bool m_firstBedamaGetP2;                 // _10D
	bool m_setBedamaFlag;                    // _10E
	J2DPictureEx* m_paneObake1P;             // _110, obake is the roulette wheel
	J2DPictureEx* m_paneObake2P;             // _114
	f32 m_alphaObakeP1;                      // _118
	f32 m_alphaObakeP2;                      // _11C
	bool m_obakeEnabledP1;                   // _120
	bool m_obakeEnabledP2;
	f32 m_obakeMovePos;
	u8 m_playWinSound; // _128

	static struct StaticValues {
		inline StaticValues()
		{
			m_fadeInRate      = 0.6f;
			m_fadeOutRate     = 0.2f;
			m_lifeGaugeXOffs  = -1.5f;
			m_lifeGaugeYOffs  = -1.5f;
			m_marbleBaseXOffs = 460.0f;
			m_marbleP1YOffs   = 215.0f;
			m_marbleP2YOffs   = 430.0f;
			m_rouletteXOffs   = 115.0f;
			m_rouletteP1YOffs = 30.0f;
			m_rouletteP2YOffs = 245.0f;
			m_rouletteScale   = 0.7f;
			_2C               = 7.0f;
			_30               = 3.5f;
		}

		f32 m_fadeInRate;      // _00
		f32 m_fadeOutRate;     // _04
		f32 m_lifeGaugeXOffs;  // _08
		f32 m_lifeGaugeYOffs;  // _0C
		f32 m_marbleBaseXOffs; //_10
		f32 m_marbleP1YOffs;   //_14
		f32 m_marbleP2YOffs;   //_18
		f32 m_rouletteXOffs;   //_1C
		f32 m_rouletteP1YOffs; //_20
		f32 m_rouletteP2YOffs; //_24
		f32 m_rouletteScale;   //_28
		f32 _2C;
		f32 _30;
	} msVal;
};
} // namespace newScreen
} // namespace og

#endif
