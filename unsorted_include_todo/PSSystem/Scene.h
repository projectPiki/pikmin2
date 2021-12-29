#ifndef _PSSYSTEM_SCENE_H
#define _PSSYSTEM_SCENE_H

/*
    __vt__Q28PSSystem5Scene:
    .4byte 0
    .4byte 0
    .4byte init__Q28PSSystem5SceneFv
    .4byte __dt__Q28PSSystem5SceneFv
    .4byte scene1st__Q28PSSystem5SceneFPQ28PSSystem11TaskChecker
    .4byte scene1stLoadSync__Q28PSSystem5SceneFv
    .4byte exec__Q28PSSystem5SceneFv
    .4byte startMainSeq__Q28PSSystem5SceneFv
    .4byte stopMainSeq__Q28PSSystem5SceneFUl
    .4byte stopAllSound__Q28PSSystem5SceneFUl
*/

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
