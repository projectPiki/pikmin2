#ifndef _PSSYSTEM_SCENE_H
#define _PSSYSTEM_SCENE_H

namespace PSSystem {
struct Scene {
	virtual void init();                      // _00
	virtual ~Scene();                         // _04
	virtual void scene1st(TaskChecker*);      // _08
	virtual void scene1stLoadSync();          // _0C
	virtual void exec();                      // _10
	virtual void startMainSeq();              // _14
	virtual void stopMainSeq(unsigned long);  // _18
	virtual void stopAllSound(unsigned long); // _1C

	// _00 VTBL
};
} // namespace PSSystem

#endif
