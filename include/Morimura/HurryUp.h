#ifndef _MORIMURA_HURRYUP_H
#define _MORIMURA_HURRYUP_H

#include "Morimura/Bases.h"

namespace Morimura {
struct THuWhitePaneSet;

/**
 * @size{0x118}
 */
struct THurryUp2D : public TTestBase {
	/**
	 * @size{0xC}
	 */
	struct TStateParam {
		TStateParam();

		u8 mAlpha1;     // _00
		u8 mAlpha2;     // _01
		f32 mScale;     // _04
		f32 mGoalScale; // _08
	};

	THurryUp2D();

	virtual ~THurryUp2D() { }                                                                                // _08 (weak)
	virtual bool doStart(const ::Screen::StartSceneArg*);                                                    // _44
	virtual void doCreate(JKRArchive*);                                                                      // _4C
	virtual bool doUpdate();                                                                                 // _58
	virtual void doDraw(Graphics& gfx);                                                                      // _68
	virtual og::Screen::DispMemberBase* getDispMemberBase() { return mIsSection ? mDisp : getDispMember(); } // _78 (weak)

	void init();
	void move();
	void scaleUp1();
	void scaleUp2();
	void colorUp();
	void changeState(int, f32);
	void calcCount();

	JKRArchive* mArchive;           // _78
	P2DScreen::Mgr_tuning* mScreen; // _7C
	J2DPane* mPane1;                // _80
	J2DPane* mPane2;                // _84
	J2DPane* mPane3;                // _88
	THuWhitePaneSet* mWhitePane;    // _8C
	J2DPane* mPane4;                // _90
	J2DPane* mPane5;                // _94
	J2DPane* mPane6;                // _98
	JGeometry::TVec2f mPane1Pos;
	JGeometry::TVec2f mPane2Pos;
	og::Screen::DispMemberHurryUp* mDisp; // _AC
	int mState;                           // _B0
	f32 mTimer;                           // _B4
	f32 _B8;                              // _B8
	f32 _BC;                              // _BC
	u16 _C0;                              // _C0
	u16 _C2;
	bool mDoDraw; // _C4
	f32 _C8;
	f32 mTimeMax;
	TStateParam mParams[6]; // _D0
};

/**
 * @size{0x224}
 */
struct THurryUpScene : public THIOScene {
	THurryUpScene() { }

	// ~THurryUpScene(); // unused/inlined

	virtual const char* getResName() const { return "res_ground.szs"; } // _1C (weak)
	virtual void doCreateObj(JKRArchive* arc)
	{
		THurryUp2D* obj = new THurryUp2D;
		registObj(obj, arc);
		mObject = obj;
	}                                                                // _20 (weak)
	virtual SceneType getSceneType() { return SCENE_HURRY_UP; }      // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_MRMR; }        // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_HURRY_UP; } // _10 (weak)

	// _00      = VTBL
	// _00-_220 = Morimura::THIOScene
};

} // namespace Morimura

#endif
