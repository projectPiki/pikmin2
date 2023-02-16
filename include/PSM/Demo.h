#ifndef _PSM_DEMO_H
#define _PSM_DEMO_H

#include "JSystem/JKernel/JKRDisposer.h"
#include "Dolphin/mtx.h"
#include "PSM/Scene.h"
#include "PSSystem/PSBgm.h"

namespace PSM {
struct DemoInitiator {
	inline DemoInitiator(u8* byte, const char* name)
	{
		mName       = name;
		mSongChosen = false;
		mByte       = byte;
	}

	void equalSet(const char*, const char*, u8);
	void equalSetStream(const char*, u32, u8);
	void equalSetEx(const char*);
	void equalSetExStream(const char*, bool, u32, u8);
	void is(const char*);
	void numberSet(const char*, const char*, u8);
	void setDefault(const char*, u8, u32);

	// these likely correspond to inlined functions above
	inline void assertInitialized(char* buffer, u32* AST_ID)
	{
		mAST_ID = AST_ID;

		mSongChosen = false;
		P2ASSERTLINE(41, isInitialized());

		*mAST_ID = -1;
		strcpy(buffer, "");
		*mByte = -1;
	}

	inline bool isInitialized() { return mByte && mName; }

	inline void SetSongIfNotSet(u32 id, const char* comp)
	{
		if (!mSongChosen) {
			if (strcmp(mName, comp) == 0) {
				mSongChosen = true;
				*mAST_ID    = id;
				*mByte      = -1;
			}
		}
	}

	u8* mByte;         // _00
	const char* mName; // _04
	bool mSongChosen;  // _08
	u32* mAST_ID;      // _0C
};

struct DemoArg {
	char* mPelletName; // _00
	char* mName;       // _04
	u32 mBgmID;        // _08
};

struct Demo : public JKRDisposer {
	Demo();

	virtual ~Demo();                                   // _08
	virtual void init(Vec*, Vec*, Mtx, DemoArg);       // _0C
	virtual PSSystem::BgmSeq* initiate(DemoArg, u8*);  // _10
	virtual void initDemoScene(DemoArg&, Scene_Demo*); // _14

	void demo1stLoadSync();
	void onDemoTop();
	void becomeSceneCamera();
	void onDemoFadeoutStart(u32);
	void onDemoEnd();
	void onMessageEnd(int);

	// _00     = VTBL
	// _00-_18 = JKRDisposer
	s8 _18;                  // _18
	u8 mDoStartWithAudio;    // _19, from PikDecomp
	u8 _1A;                  // _1A, unknown/possibly padding
	u8 _1B;                  // _1B, unknown/possibly padding
	SoundID mSoundID;        // _1C, from PikDecomp
	SoundID mSystemSE;       // _20, from PikDecomp
	void* (*mFuncptr)(void); // _24
	char* m_currentDemoName; // _28
};
} // namespace PSM

#endif
