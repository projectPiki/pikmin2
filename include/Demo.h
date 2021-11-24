#ifndef _DEMO_H
#define _DEMO_H

// Header for entire Demo namespace.

#include "DvdThreadCommand.h"
#include "Game/BaseHIOSection.h"
#include "Game/THPPlayer.h"

struct JUTTexture;

namespace Demo {
struct HIORootNode {
};

// Size: 0x1B0
struct Section : public Game::BaseHIOSection {
	Section(JKRHeap*);

	DvdThreadCommand m_threadCommand; // _048
	Controller* _D8;                  // _0D8
	float _DC;                        // _0DC
	Game::THPPlayer m_thpPlayer;      // _0E0
	JUTTexture* _1AC;                 // _1AC
};
} // namespace Demo

#endif
