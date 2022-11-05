#ifndef _MORIMURA_HURRYUP_H
#define _MORIMURA_HURRYUP_H

#include "JSystem/J2D/J2DPane.h"
#include "JSystem/JUT/TColor.h"
#include "Morimura/TTestBase.h"
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
struct THurryUpScene : public ::Screen::SceneBase {
	THurryUpScene();
	~THurryUpScene(); // unused/inlined

	virtual SceneType getSceneType();       // _00
	virtual ScreenOwnerID getOwnerID();     // _04
	virtual ScreenMemberID getMemberID();   // _08
	virtual const char* getResName() const; // _14
	virtual void doCreateObj(JKRArchive*);  // _18

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

	virtual ~THurryUp2D();                                   // _00
	virtual bool doStart(const ::Screen::StartSceneArg*);    // _2C
	virtual void doCreate(JKRArchive*);                      // _34
	virtual bool doUpdate();                                 // _40
	virtual void doDraw(Graphics& gfx);                      // _50
	virtual og::Screen::DispMemberBase* getDispMemberBase(); // _60

	void init();
	void move();
	void scaleUp1();
	void scaleUp2();
	void colorUp();
	void changeState(int, float);

	JKRArchive* m_archive;                       // _78
	P2DScreen::Mgr_tuning* _7C;                  // _7C
	J2DPane* _80;                                // _80
	J2DPane* _84;                                // _84
	J2DPane* _88;                                // _88
	THuWhitePaneSet* _8C;                        // _8C
	J2DPane* _90;                                // _90
	J2DPane* _94;                                // _94
	J2DPane* _98;                                // _98
	float _9C;                                   // _9C
	float _A0;                                   // _A0
	float _A4;                                   // _A4
	float _A8;                                   // _A8
	og::Screen::DispMemberHurryUp* m_dispMember; // _AC
	int _B0;                                     // _B0
	float _B4;                                   // _B4
	float _B8;                                   // _B8
	float _BC;                                   // _BC
	u8 _C0[4];                                   // _C0
	u8 _C4;                                      // _C4
	u32 : 0;
	u8 _C8[8];               // _C8
	TStateParam m_params[6]; // _D0
};

} // namespace Morimura

#endif
