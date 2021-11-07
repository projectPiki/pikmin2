#ifndef _PSGAME_PIKSCENE_H
#define _PSGAME_PIKSCENE_H

namespace PSSystem {
struct Scene {
	virtual void init();                      // _00
	virtual void _04() = 0;                   // _04
	virtual void scene1st(TaskChecker*);      // _08
	virtual void scene1stLoadSync();          // _0C
	virtual void exec();                      // _10
	virtual void startMainSeq();              // _14
	virtual void stopMainSeq(unsigned long);  // _18
	virtual void stopAllSound(unsigned long); // _1C

	// _00 VTBL
};
} // namespace PSSystem

namespace PSGame {
struct PikScene : public Scene {
	virtual void init();                      // _00
	virtual ~PikScene();                      // _04
	virtual void scene1st(TaskChecker*);      // _08
	virtual void scene1stLoadSync();          // _0C
	virtual void exec();                      // _10
	virtual void startMainSeq();              // _14
	virtual void stopMainSeq(unsigned long);  // _18
	virtual void stopAllSound(unsigned long); // _1C

	// _00 VTBL
};
} // namespace PSGame

#endif
