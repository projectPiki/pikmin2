#ifndef _TITLE_H
#define _TITLE_H

// Header for entire Demo namespace.

#include "DvdThreadCommand.h"
#include "Game/BaseHIO.h"
#include "Section.h"
#include "ebi/Option.h"
#include "ebi/Omake.h"
#include "ebi/TMainTitleMgr.h"

template <typename T>
struct IDelegate1;
struct JUTTexture;
struct Menu;

namespace Game {
struct THPPlayer;
}

namespace Title {
// Size: 0x1B0
struct Section : public Game::BaseHIOSection {
	Section(JKRHeap*);

	virtual ~Section();                 // _08
	virtual void run();                 // _0C
	virtual void init();                // _18
	virtual void doExit();              // _24
	virtual bool forceReset();          // _2C (weak)
	virtual void doLoadingStart();      // _34
	virtual bool doLoading();           // _38
	virtual bool doUpdate();            // _3C
	virtual void doDraw(Graphics& gfx); // _40
	virtual bool isFinishable();        // _44
	virtual void loadResource();        // _50

	void loadResident();
	// void menuCancel(Menu&);
	// void menuSelect(Menu&);
	void doUpdateMainTitle();
	void doUpdateOmake();

	// _00		= VTBL
	// _00-_48	= Game::BaseHIOSection
	int _48;                              // _0048
	f32 _4C;                              // _004C
	Menu* mMenu;                          // _0050
	DvdThreadCommand mThreadCommand;      // _0054
	IDelegate1<Section>* mButtonCallback; // _00C0
	Controller* mController1;             // _00C4
	Controller* mController2;             // _00C8
	ebi::TMainTitleMgr mMainTitleMgr;     // _00CC
	ebi::Option::TMgr mOptionMgr;         // _1730
	u8 _2670[8];                          // _2670
	ebi::Omake::TMgr mOmakeMgr;           // _2678
	u8 _2F34[8];                          // _2F34
	Game::THPPlayer* mThpPlayer;          // _2F38
	int mMovieIndex;                      // _2F3C
	JKRArchive* _2F40;                    // _2F40
	u8 _2F44;                             // _2F44
};
} // namespace Title

#endif
