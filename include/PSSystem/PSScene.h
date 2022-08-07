#ifndef _PSSYSTEM_SCENE_H
#define _PSSYSTEM_SCENE_H

#include "JSystem/JKR/JKRDisposer.h"
#include "SoundID.h"
#include "PSSystem/Task.h"
#include "PSSystem/Seq.h"
#include "PSSystem/WaveScene.h"

namespace PSSystem {

/**
 * @size = 0x24
 */
struct Scene {
	Scene(u8);

	virtual void init();                 // _08 (weak)
	virtual ~Scene();                    // _0C
	virtual void scene1st(TaskChecker*); // _10
	virtual void scene1stLoadSync();     // _14
	virtual void exec();                 // _18
	virtual void startMainSeq();         // _1C
	virtual void stopMainSeq(u32);       // _20
	virtual void stopAllSound(u32);      // _24

	void adaptChildScene(Scene*);
	void adaptTo(Scene**);
	void detach();
	void appendSeq(SeqBase*);
	void getSeqMgr();
	void getChildScene();

	Scene* m_child;           // _04
	WaveLoader* m_waveLoader; // _08
	Scene** _0C;              // _0C
	SeqMgr _10;               // _10
};
} // namespace PSSystem

struct DemoArg {
	char* pelletname;
	char* name;
	u32 bgmID;
};

namespace PSM {
class Demo : public JKRDisposer {
	s8 unknown1_0x18;
	u8 doStartWithAudio;
	u8 field5_0x1a;
	u8 field6_0x1b;
	enum SoundID soundID;
	enum SoundID systemSE;
	void* (*funcptr)(void);
	char* currentDemoName;
	virtual ~Demo();
	Demo();
	BgmSeq* initiate(DemoArg*, unsigned char*);
};
} // namespace PSM

#endif
