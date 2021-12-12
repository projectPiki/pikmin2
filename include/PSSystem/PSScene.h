#ifndef _PSSYSTEM_SCENE_H
#define _PSSYSTEM_SCENE_H

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

#endif
