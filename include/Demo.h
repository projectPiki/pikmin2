#ifndef _DEMO_H
#define _DEMO_H

// Header for entire Demo namespace.

#include "DvdThreadCommand.h"
#include "Game/BaseHIOSection.h"
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

	virtual ~HIORootNode(); // _00
};

// Size: 0x1B0
struct Section : public Game::BaseHIOSection {
	Section(JKRHeap*);

	virtual ~Section();             // _00
	virtual void init();            // _10
	virtual void doExit();          // _1C
	virtual bool forceReset();      // _24
	virtual void doLoadingStart();  // _2C
	virtual bool doLoading();       // _30
	virtual bool doUpdate();        // _34
	virtual void doDraw(Graphics&); // _38
	virtual bool isFinishable();    // _3C

	void loadResource();

	DvdThreadCommand m_threadCommand; // _048
	Controller* _D8;                  // _0D8
	float _DC;                        // _0DC
	Game::THPPlayer m_thpPlayer;      // _0E0
	JUTTexture* _1AC;                 // _1AC
};
} // namespace Demo

#endif
