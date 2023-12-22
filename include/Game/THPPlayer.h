#ifndef _GAME_THPPLAYER_H
#define _GAME_THPPLAYER_H

#include "Graphics.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "types.h"
#include "CNode.h"
#include "DvdThreadCommand.h"
#include "IDelegate.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "THP/THPInfo.h"

namespace Caption {
struct Mgr;
}

namespace Game {
struct THPPlayerLoadResourceArg {
	inline THPPlayerLoadResourceArg()
	    : mThpFileName(nullptr)
	    , mCaptionFileName(nullptr)
	{
	}

	const char* mThpFileName;     // _00
	const char* mCaptionFileName; // _04
};

struct THPPlayer : public JKRDisposer, public CNode {
	enum EMovieIndex {
		OPENING_GameStart     = 0,
		OPENING_PostDebtStart = 1,
		ENDING_PayDebt        = 2,
		ENDING_AllTreasures   = 3,
		STAFF_ROLL            = 4,
		PLAY_1                = 5,
		PLAY_2                = 6,
		PLAY_3                = 7,
		PLAY_4                = 8,
		PLAY_5                = 9,
		PLAY_6                = 10,
		CRIME                 = 11,
	};

	enum EState { STATE_0 = 0, STATE_Load = 1, STATE_Play = 2 };

	struct THPPlayerFileSettingTable {
		const char* mThpFilePath; // _00
		const char* mIniFilePath; // _04
		u8 _08;                   // _08, unknown
		EMovieIndex mThpID;       // _0C
	};

	THPPlayer();

	// vtable 1 (JKRDisposer)
	virtual ~THPPlayer(); // _08 (thunked at vtable 2 _14)
	// vtable 2 (CNode + self)
	virtual void update();                            // _1C
	virtual void draw(Graphics&);                     // _20
	virtual void draw(Graphics&, s32, s32, u32, u32); // _24
	virtual void draw(Graphics&, s32, s32, f32);      // _28

	void load(EMovieIndex);
	void load();
	void loadResource();
	void loadResource(const THPPlayerLoadResourceArg&);
	void prepare();
	void init(JKRHeap*);
	bool play();
	bool pause();
	void stop();
	bool isFinishLoading();
	bool isFinishPlaying();

	// Unused/inlined:
	void reset();

	// _00     = VTBL 1
	// _18     = VTBL 2
	// _00-_18 = JKRDisposer
	// _18-_30 = CNode
	int mState;                           // _30
	s32 _34;                              // _34
	THPVideoInfo mVideoInfo;              // _38
	THPAudioInfo mAudioInfo;              // _44
	Caption::Mgr* mCaptionMgr;            // _54
	JKRHeap* mHeap;                       // _58
	DvdThreadCommand mThreadCommand;      // _5C
	Delegate<THPPlayer> _C8;              // _C8
	THPPlayerLoadResourceArg mLoadResArg; // _DC
	u8 _E4;                               // _E4
	u32 : 0;                              // reset alignment
	u8 _E8;                               // _E8
};
} // namespace Game

#endif
