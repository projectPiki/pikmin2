#ifndef _PSSYSTEM_SCENE_H
#define _PSSYSTEM_SCENE_H
#include "JSystem/JKR/JKRDisposer.h"
#include "SoundID.h"
namespace PSSystem {
struct SeqBase;
struct TaskChecker;

struct Scene {
	~Scene();
	Scene(unsigned char);

	void adaptChildScene(PSSystem::Scene*);
	void adaptTo(PSSystem::Scene**);
	void appendSeq(PSSystem::SeqBase*);
	void detach();
	void exec();
	void getChildScene();
	void getSeqMgr();
	void init();
	void scene1st(PSSystem::TaskChecker*);
	void scene1stLoadSync();
	void startMainSeq();
	void stopAllSound(unsigned long);
	void stopMainSeq(unsigned long);
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
