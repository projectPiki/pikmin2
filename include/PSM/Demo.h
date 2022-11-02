#ifndef _PSM_DEMO_H
#define _PSM_DEMO_H

#include "JSystem/JKR/JKRDisposer.h"
#include "Dolphin/mtx.h"
#include "PSM/Scene.h"
#include "PSSystem/PSBgm.h"

namespace PSM {
struct DemoInitiator {
	// unknown contents, but probably required for PSMainSide_Demo.cpp

	inline void equalSet(const char*, const char*, u8);
	inline void equalSetStream(const char*, u32, u8);
	inline void equalSetEx(const char*);
	inline void equalSetExStream(const char*, bool, u32, u8);
	inline void is(const char*);
	inline void numberSet(const char*, const char*, u8);
	inline void setDefault(const char*, u8, u32);

	// TODO: members
};

struct DemoArg {
	char* m_pelletName; // _00
	char* m_name;       // _04
	u32 m_bgmID;        // _08
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
	s8 _18;                   // _18
	u8 m_doStartWithAudio;    // _19, from PikDecomp
	u8 _1A;                   // _1A, unknown/possibly padding
	u8 _1B;                   // _1B, unknown/possibly padding
	SoundID m_soundID;        // _1C, from PikDecomp
	SoundID m_systemSE;       // _20, from PikDecomp
	void* (*m_funcptr)(void); // _24
	char* m_currentDemoName;  // _28
};
} // namespace PSM

#endif
