#ifndef _GAME_THPPLAYER_H
#define _GAME_THPPLAYER_H

#include "Graphics.h"
#include "JSystem/JKR/JKRHeap.h"
#include "types.h"
#include "CNode.h"
#include "DvdThreadCommand.h"
#include "IDelegate.h"
#include "JSystem/JKR/JKRDisposer.h"

namespace Caption {
struct Mgr;
}

namespace Game {
struct THPPlayerLoadResourceArg {
	char* m_thpFileName;
	char* m_captionFileName;
};

struct THPPlayer : public JKRDisposer, public CNode {
	enum EMovieIndex {};
	THPPlayer();

	// vtable 1 (JKRDisposer)
	virtual ~THPPlayer(); // _00 (thunked at vtable 2 _00)

	// vtable 2 (CNode + self)
	void update();                                                          // _08
	virtual void draw(Graphics&);                                           // _0C
	virtual void draw(Graphics&, long, long, unsigned long, unsigned long); // _10
	virtual void draw(Graphics&, long, long, float);                        // _14

	void load(EMovieIndex);
	void load();
	void loadResource();
	void loadResource(THPPlayerLoadResourceArg&);
	void prepare();
	void init(JKRHeap*);
	bool play();
	bool pause();
	void stop();
	bool isFinishLoading();
	bool isFinishPlaying();

	// Unused/inlined:
	void reset();

	int _30;                          // _30
	long _34;                         // _34
	void* m_videoInfo;                // _38
	u8 _3C[8];                        // _3C
	void* m_audioInfo;                // _44
	u8 _48[8];                        // _48
	u32 _50;                          // _50
	Caption::Mgr* m_captionMgr;       // _54
	JKRHeap* _58;                     // _58
	DvdThreadCommand m_threadCommand; // _5C
	Delegate<THPPlayer> _C8;          // _C8
	char* m_thpFilePath;              // _DC
	char* m_iniFilePath;              // _E0
	u8 _E4;                           // _E4
	u32 : 0;                          // reset alignment
	u8 _E8;                           // _E8
};
} // namespace Game

#endif
