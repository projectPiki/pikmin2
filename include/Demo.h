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
	HIORootNode()
	    : Game::HIORootNode(nullptr)
	{
		m_name = "THPセクション";
	}

	virtual ~HIORootNode() { } // _08 (weak)
};

// Size: 0x1B0
struct Section : public Game::BaseHIOSection {
	Section(JKRHeap*);

	virtual ~Section();                 // _08
	virtual void init();                // _18
	virtual void doExit();              // _24
	virtual bool forceReset();          // _2C (weak)
	virtual void doLoadingStart();      // _34
	virtual bool doLoading();           // _38
	virtual bool doUpdate();            // _3C
	virtual void doDraw(Graphics& gfx); // _40

	void loadResource();

	// _00		= VTBL
	// _00-_48	= Game::BaseHIOSection
	DvdThreadCommand m_threadCommand; // _048
	CNode* m_genNode;                 // _0B4
	Controller* m_controller;         // _0B8
	float _BC;                        // _0BC
	Game::THPPlayer m_moviePlayer;    // _0C0
	JUTTexture* _1AC;                 // _1AC
};
} // namespace Demo

#endif
