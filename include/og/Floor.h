#ifndef _OG_FLOOR_H
#define _OG_FLOOR_H

#include "JSystem/J2D/J2DPane.h"
#include "JSystem/JUT/TColor.h"
#include "types.h"
#include "Screen/Bases.h"
#include "og/Screen/ogScreen.h"

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

/**
 * @size{0x14}
 */
struct DispMemberFloor : public DispMemberBase {
	/**
	 * @reifiedAddress{8022D610}
	 * @reifiedFile{plugProjectKandoU/vsGS_Load.cpp}
	 */
	virtual u32 getSize() // _00
	{
		return sizeof(DispMemberFloor);
	}

	/**
	 * @reifiedAddress{8022D618}
	 * @reifiedFile{plugProjectKandoU/vsGS_Load.cpp}
	 */
	virtual u32 getOwnerID() // _04
	{
		return OWNER_OGA;
	}

	/**
	 * @reifiedAddress{8022D624}
	 * @reifiedFile{plugProjectKandoU/vsGS_Load.cpp}
	 */
	virtual u64 getMemberID() // _08
	{
		return MEMBER_FLOOR;
	}

	int _08;      // _08
	int m_caveID; // _0C
	u8 _10;       // _10
	u8 _11;       // _11
	u8 _12;       // _12
};

} // namespace Screen

namespace newScreen {
struct TitleMsg;

// Size: 0x220
struct Floor : public ::Screen::SceneBase {
	Floor();
	~Floor(); // unused/inlined

	virtual SceneType getSceneType();                           // _00
	virtual ScreenOwnerID getOwnerID();                         // _04
	virtual ScreenMemberID getMemberID();                       // _08
	virtual bool isUseBackupSceneInfo();                        // _0C
	virtual bool isDrawInDemo() const;                          // _10
	virtual const char* getResName() const;                     // _14
	virtual void doCreateObj(JKRArchive*);                      // _18
	virtual void doUserCallBackFunc(Resource::MgrCommand*);     // _1C
	virtual void setPort(Graphics&);                            // _20
	virtual void doUpdateActive();                              // _24
	virtual bool doConfirmSetScene(::Screen::SetSceneArg&);     // _28
	virtual bool doConfirmStartScene(::Screen::StartSceneArg*); // _2C
	virtual bool doConfirmEndScene(::Screen::EndSceneArg*&);    // _30
	virtual bool doStart(::Screen::StartSceneArg*);             // _34
	virtual bool doEnd(::Screen::EndSceneArg*);                 // _38
	virtual bool setDefaultDispMember();                        // _3C
	virtual void doSetBackupScene(::Screen::SetSceneArg&);      // _40
	virtual int doGetFinishState();                             // _44
};

// Size: 0xBC
struct ObjFloor : public ::Screen::ObjBase {
	ObjFloor(char const*);
	virtual void doCreate(JKRArchive*);

	virtual ~ObjFloor();                                  // _00
	virtual bool doStart(const ::Screen::StartSceneArg*); // _2C
	virtual bool doEnd(const ::Screen::EndSceneArg*);     // _30
	virtual bool doUpdateFadein();                        // _38
	virtual void doUpdateFadeinFinish();                  // _3C
	virtual bool doUpdate();                              // _40
	virtual void doUpdateFinish();                        // _44
	virtual bool doUpdateFadeout();                       // _48
	virtual void doUpdateFadeoutFinish();                 // _4C
	virtual void doDraw(Graphics&);                       // _50

	bool isFLOOR();
	bool isCHALLENGE();
	bool isVS();
	void setCaveMsgID(u32, char*);
	bool commonUpdate();
	void drawBG(Graphics&);

	Screen::DispMemberBase* m_dispMember; // _38
	char m_textTag[8];                    // _3C
	u8 _44[4];                            // _44
	P2DScreen::Mgr_tuning* _48;           // _48
	P2DScreen::Mgr_tuning* _4C;           // _4C
	P2DScreen::Mgr_tuning* _50;           // _50
	og::Screen::CallBack_CounterRV* _54;  // _54
	float _58;                            // _58
	float _5C;                            // _5C
	float _60;                            // _60
	u8 _64;                               // _64
	JUtility::TColor _68;                 // _68
	u8 _6C;                               // _6C
	float _70;                            // _70
	TitleMsg* _74;                        // _74
	TitleMsg* _78;                        // _78
	J2DPane* _7C;                         // _7C
	float _80;                            // _80
	float _84;                            // _84
	og::Screen::AnimGroup* _88;           // _88
	J2DPane* m_rulePane;                  // _8C
	J2DPane* _90[6];                      // _90
	u8 _A8;                               // _A8
	J2DPane* m_buttonPane;                // _AC
	J2DPane* m_loadingPane;               // _B0
	og::Screen::AlphaMgr* m_alphaMgr;     // _B4
	float _B8;                            // _B8

	static struct StaticValues {
		inline StaticValues();
		float _00;                             // _00
		float _04;                             // _04
		float _08;                             // _08
		float _0C;                             // _0C
		float _10;                             // _10
		float _14;                             // _14
		float _18;                             // _18
		float _1C;                             // _1C
		float _20;                             // _20
		float _24;                             // _24
		float _28;                             // _28
		float _2C;                             // _2C
		float _30;                             // _30
		float _34;                             // _34
		float _38;                             // _38
		float _3C;                             // _3C
		float _40;                             // _40
		float _44;                             // _44
		float _48;                             // _48
		float _4C;                             // _4C
		float _50;                             // _50
		float _54;                             // _54
		float _58;                             // _58
		JUtility::TColor _5C[3];               // _5C
		JUtility::TColor _68[3];               // _68
		int m_ruleMsgIndex;                    // _74
		u8 _78;                                // _78
		bool m_shouldNotRandomizeRuleMsgMaybe; // _79
	} msVal;
};

extern const u64 vsRuleMsgId[6];
} // namespace newScreen
} // namespace og

#endif
