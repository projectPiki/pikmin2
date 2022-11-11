#ifndef _MORIMURA_HURRYUP_H
#define _MORIMURA_HURRYUP_H

#include "JSystem/J2D/J2DPane.h"
#include "JSystem/JUT/TColor.h"
#include "Morimura/Bases.h"
#include "Screen/Enums.h"
#include "og/Screen/ogScreen.h"
#include "Screen/Bases.h"
#include "types.h"

struct Graphics;
struct JKRArchive;
struct J2DPane;

namespace P2DScreen {
struct Mgr_tuning;
}

namespace Morimura {
struct THuWhitePaneSet;
struct THurryUp2D;

/**
 * @size{0x224}
 */
struct THurryUpScene : public Screen::SceneBase {
	THurryUpScene();

	// ~THurryUpScene(); // unused/inlined

	virtual SceneType getSceneType();       // _08 (weak)
	virtual ScreenOwnerID getOwnerID();     // _0C (weak)
	virtual ScreenMemberID getMemberID();   // _10 (weak)
	virtual const char* getResName() const; // _1C (weak)
	virtual void doCreateObj(JKRArchive*);  // _20 (weak)

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
	THurryUp2D* m_obj; // _220
};

/**
 * @size{0x118}
 */
struct THurryUp2D : public TTestBase {
	/**
	 * @size{0xC}
	 */
	struct TStateParam {
		TStateParam();

		u8 _00[0xC]; // _00
	};

	THurryUp2D();

	virtual ~THurryUp2D();                                   // _08 (weak)
	virtual bool doStart(const ::Screen::StartSceneArg*);    // _44
	virtual void doCreate(JKRArchive*);                      // _4C
	virtual bool doUpdate();                                 // _58
	virtual void doDraw(Graphics& gfx);                      // _68
	virtual og::Screen::DispMemberBase* getDispMemberBase(); // _78 (weak)

	void init();
	void move();
	void scaleUp1();
	void scaleUp2();
	void colorUp();
	void changeState(int, f32);

	JKRArchive* m_archive;                       // _78
	P2DScreen::Mgr_tuning* _7C;                  // _7C
	J2DPane* _80;                                // _80
	J2DPane* _84;                                // _84
	J2DPane* _88;                                // _88
	THuWhitePaneSet* _8C;                        // _8C
	J2DPane* _90;                                // _90
	J2DPane* _94;                                // _94
	J2DPane* _98;                                // _98
	f32 _9C;                                     // _9C
	f32 _A0;                                     // _A0
	f32 _A4;                                     // _A4
	f32 _A8;                                     // _A8
	og::Screen::DispMemberHurryUp* m_dispMember; // _AC
	int _B0;                                     // _B0
	f32 _B4;                                     // _B4
	f32 _B8;                                     // _B8
	f32 _BC;                                     // _BC
	u8 _C0[4];                                   // _C0
	u8 _C4;                                      // _C4
	u32 : 0;
	u8 _C8[8];               // _C8
	TStateParam m_params[6]; // _D0
};

} // namespace Morimura

#endif
