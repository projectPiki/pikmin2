#ifndef _OG_NEWSCREEN_FLOOR_H
#define _OG_NEWSCREEN_FLOOR_H

#include "JSystem/J2D/J2DPane.h"
#include "JSystem/JUT/TColor.h"
#include "types.h"
#include "Screen/screenObj.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/DispMember.h"

struct Graphics;
struct JKRArchive;
struct J2DPane;

namespace P2DScreen {
struct Mgr_tuning;
}

namespace og {
namespace Screen {
struct AnimGroup;
struct AlphaMgr;
struct CallBack_CounterRV;
} // namespace Screen

namespace newScreen {
struct TitleMsg;

// Size: 0x220
struct Floor : public ::Screen::SceneBase {
	Floor();

	virtual const char* getResName() const { return ""; }         // _1C (weak)
	virtual SceneType getSceneType() { return SCENE_FLOOR; }      // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_OGA; }      // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_FLOOR; } // _10 (weak)
	virtual void doCreateObj(JKRArchive*);                        // _20
	virtual void doUserCallBackFunc(Resource::MgrCommand*);       // _24

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
};

// Size: 0xBC
struct ObjFloor : public ::Screen::ObjBase {

	enum FloorType { FLOOR_Story, FLOOR_Challenge, FLOOR_Versus };

	ObjFloor(char const*);

	virtual ~ObjFloor();                                  // _08 (weak)
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

	inline bool isFLOOR();
	inline bool isCHALLENGE();
	inline bool isVS();
	void setCaveMsgID(u32, char*);
	bool commonUpdate();
	void drawBG(Graphics&);

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	og::Screen::DispMemberFloor* m_disp;            // _38
	char m_textTag[8];                              // _3C
	u8 _44[4];                                      // _44
	P2DScreen::Mgr_tuning* m_screenName;            // _48
	P2DScreen::Mgr_tuning* m_screenFont;            // _4C
	P2DScreen::Mgr_tuning* m_screenRules;           // _50
	og::Screen::CallBack_CounterRV* m_counterFloor; // _54
	f32 m_fadeLevel;                                // _58
	f32 m_alpha;                                    // _5C
	f32 m_timer;                                    // _60
	u8 m_doFadeout;                                 // _64
	u8 _65[0x3];                                    // _65, padding/unknown
	JUtility::TColor m_color;                       // _68
	u8 m_doEnd;                                     // _6C
	f32 m_BackgroundAlpha;                          // _70
	TitleMsg* m_title;                              // _74
	TitleMsg* m_sublevelMsg;                        // _78
	J2DPane* m_sublevelPane;                        // _7C
	f32 m_sublevelXoffs;                            // _80
	f32 m_sublevelYoffs;                            // _84
	og::Screen::AnimGroup* m_anims;                 // _88
	J2DPane* m_ruleMesgPane;                        // _8C
	J2DPane* m_rulesPaneList[6];                    // _90
	bool m_isButtonShown;                           // _A8
	J2DPane* m_buttonPane;                          // _AC
	J2DPane* m_loadingPane;                         // _B0
	og::Screen::AlphaMgr* m_buttonAlpha;            // _B4
	f32 m_buttonAlphaTimer;                         // _B8

	static struct StaticValues {
		inline StaticValues()
		    : m_colors1()
		    , m_colors2()
		{
			_00                              = 0.3f;
			_04                              = 1.0f;
			_08                              = 0.2f;
			_0C                              = 3.0f;
			_10                              = 0.0f;
			_14                              = -15.0f;
			_18                              = 1.0f;
			_1C                              = 30.0f;
			_20                              = 0.0f;
			_24                              = -50.0f;
			_28                              = 1.0f;
			_2C                              = -15.0f;
			_30                              = 0.0f;
			_34                              = 1.5f;
			_38                              = 0.0f;
			_3C                              = 15.0f;
			_40                              = 0.12f;
			_44                              = 7.0f;
			_48                              = 1.5f;
			_4C                              = 0.06f;
			_50                              = 10.0f;
			_54                              = 0.00f;
			_58                              = 3.00f;
			m_ruleMsgIndex                   = false;
			_78                              = false;
			m_shouldNotRandomizeRuleMsgMaybe = false;
			m_colors1[0].set(255, 255, 200, 255);
			m_colors1[1].set(255, 255, 255, 255);
			m_colors1[2].set(255, 255, 156, 255);

			m_colors2[0].set(0, 0, 50, 0);
			m_colors2[1].set(100, 100, 0, 0);
			m_colors2[2].set(255, 255, 0, 0);
		};

		f32 _00;                               // _00
		f32 _04;                               // _04
		f32 _08;                               // _08
		f32 _0C;                               // _0C
		f32 _10;                               // _10
		f32 _14;                               // _14
		f32 _18;                               // _18
		f32 _1C;                               // _1C
		f32 _20;                               // _20
		f32 _24;                               // _24
		f32 _28;                               // _28
		f32 _2C;                               // _2C
		f32 _30;                               // _30
		f32 _34;                               // _34
		f32 _38;                               // _38
		f32 _3C;                               // _3C
		f32 _40;                               // _40
		f32 _44;                               // _44
		f32 _48;                               // _48
		f32 _4C;                               // _4C
		f32 _50;                               // _50
		f32 _54;                               // _54
		f32 _58;                               // _58
		JUtility::TColor m_colors1[3];         // _5C
		JUtility::TColor m_colors2[3];         // _68
		int m_ruleMsgIndex;                    // _74
		u8 _78;                                // _78
		bool m_shouldNotRandomizeRuleMsgMaybe; // _79
	} msVal;
};

extern const u64 vsRuleMsgId[6];
} // namespace newScreen
} // namespace og

#endif
