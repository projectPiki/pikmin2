#ifndef _TITLE_H
#define _TITLE_H

// Header for entire Demo namespace.

#include "DvdThreadCommand.h"
#include "Game/BaseHIOSection.h"
#include "Section.h"
#include "ebi/Omake.h"
#include "ebi/TMainTitleMgr.h"

template <typename T> struct IDelegate1;
struct JUTTexture;
struct Menu;

namespace Game {
struct THPPlayer;
}

namespace Title {
// Size: 0x1B0
struct Section : public Game::BaseHIOSection {
	Section(JKRHeap*);

	virtual ~Section();                              // _08
	virtual void run();                              // _0C
	virtual bool update();                           // _10
	virtual void draw(Graphics&);                    // _14
	virtual void init();                             // _18
	virtual void drawInit(Graphics&);                // _1C
	virtual void drawInit(Graphics&, EDrawInitMode); // _20
	virtual void doExit();                           // _24
	virtual bool forceFinish();                      // _28
	virtual bool forceReset();                       // _2C
	virtual Section* getCurrentSection();            // _30
	virtual void doLoadingStart();                   // _34
	virtual bool doLoading();                        // _38
	virtual bool doUpdate();                         // _3C
	virtual void doDraw(Graphics&);                  // _40
	virtual bool isFinishable();                     // _44
	virtual void loadResource();                     // _50

	int _48;                           // _0048
	float _4C;                         // _004C
	Menu* _50;                         // _0050
	DvdThreadCommand m_threadCommand;  // _0054
	IDelegate1<Section>* _C0;          // _00C0
	Controller* _C4;                   // _00C4
	Controller* _C8;                   // _00C8
	ebi::TMainTitleMgr m_mainTitleMgr; // _00CC
	ebi::Option::TMgr m_optionMgr;     // _1730
	u8 _2670[8];                       // _2670
	ebi::Omake::TMgr m_omakeMgr;       // _2678
	u8 _2F34[8];                       // _2F34
	Game::THPPlayer* m_thpPlayer;      // _2F38
	int m_movieIndex;                  // _2F3C
	JKRArchive* _2F40;                 // _2F40
	u8 _2F44;                          // _2F44
	u8 _2F48[8];                       // _2F48
};
} // namespace Title

#endif
