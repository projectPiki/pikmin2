#ifndef _DEMO_H
#define _DEMO_H

// Header for entire Demo namespace.

#include "DvdThreadCommand.h"
#include "Game/BaseHIO.h"
#include "Game/THPPlayer.h"

struct JUTTexture;

enum EDrawInitMode {};

namespace Demo {
struct HIORootNode : public Game::HIORootNode {
	HIORootNode(Section* section)
	    : Game::HIORootNode(section)
	{
		mName = "THPセクション";
	}

	virtual ~HIORootNode() { } // _08 (weak)

	// _00     = VTBL
	// _00-_1C = Game::HIORootNode
};

// Size: 0x1B0
struct Section : public Game::BaseHIOSection {
	Section(JKRHeap*);

	virtual ~Section();                         // _08
	virtual void init();                        // _18
	virtual void doExit();                      // _24
	virtual bool forceReset() { return false; } // _2C (weak)
	virtual void doLoadingStart();              // _34
	virtual bool doLoading();                   // _38
	virtual bool doUpdate();                    // _3C
	virtual void doDraw(Graphics& gfx);         // _40

	void loadResource();

	// _00		= VTBL
	// _00-_48	= Game::BaseHIOSection
	DvdThreadCommand mThreadCommand; // _048
	CNode* mGenNode;                 // _0B4
	Controller* mController;         // _0B8
	f32 mTimer;                      // _0BC
	Game::THPPlayer mMoviePlayer;    // _0C0
	JUTTexture* mLogoTexture;        // _1AC
};
} // namespace Demo

#endif
